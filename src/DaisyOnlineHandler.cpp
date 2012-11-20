/*
 * Copyright (C) 2012 Kolibre
 *
 * This file is part of kolibre-daisyonline.
 *
 * Kolibre-daisyonline is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * Kolibre-daisyonline is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with kolibre-daisyonline. If not, see <http://www.gnu.org/licenses/>.
 */

#include "DaisyOnlineHandler.h"
#include "axis2_stub_Kolibre_DaisyOnline.h"
#include "axis2c_client_home.h"

#include <log4cxx/logger.h>
#include <axis2_http_transport.h>

#define AXIS2_LOCATION(file, line) ::log4cxx::spi::LocationInfo(file, "", line)

// create logger which will become a child to logger kolibre.daisyonline
log4cxx::LoggerPtr doHandlerLog(log4cxx::Logger::getLogger("kolibre.daisyonline.handler"));
log4cxx::LoggerPtr doAxisLog(log4cxx::Logger::getLogger("kolibre.daisyonline.axis"));

void AXIS2_CALL axis_log_ops_free( axutil_allocator_t * allocator,
                                   struct axutil_log * log );

void AXIS2_CALL axis_log_ops_write( axutil_log_t * log,
                                    const axis2_char_t * buffer,
                                    axutil_log_levels_t level,
                                    const axis2_char_t * file,
                                    const int line );

/**
 * Constructor
 *
 * @param uri The URI to a DaisyOnline service
 * @param useragent The user-agent property in the HTTP header
 */
DaisyOnlineHandler::DaisyOnlineHandler(const std::string uri, const std::string useragent)
{
    lastErrorNumber_ = STATUS_SUCCESS;
    lastSoapFaultReason_ = "";

    // we can set axis log level to smallest possible since log4cxx takes care of the output
    env = axutil_env_create_all(NULL, AXIS2_LOG_LEVEL_TRACE);

    if (axutil_env_check_status(env) != AXIS2_ERROR_NONE)
    {
        LOG4CXX_ERROR(doHandlerLog, "Axis2 env creation failed, error message: '" << AXIS2_ERROR_GET_MESSAGE(env->error) << "'");
        return;
    }

    // override built-in logging
    log_ops = new axutil_log_ops;
    log_ops->free = axis_log_ops_free;
    log_ops->write = axis_log_ops_write;
    env->log->ops = log_ops;

    // determine which path to use as client home
#ifdef WIN32
    std::string client_home = ".";
#else
    std::string client_home = AXIS2C_CLIENT_HOME;
#endif

    // user can override the default path with AXIS2C_CLIENT_HOME environment variable
    if (AXIS2_GETENV("AXIS2C_CLIENT_HOME"))
    {
        client_home = AXIS2_GETENV("AXIS2C_CLIENT_HOME");
    }

    LOG4CXX_INFO(doHandlerLog, "Creating daisy online stub");
    LOG4CXX_DEBUG(doHandlerLog, "uri = " << uri);
    LOG4CXX_DEBUG(doHandlerLog, "client_home = " << client_home);

    stub = axis2_stub_create_Kolibre_DaisyOnline(env, client_home.c_str(), uri.c_str());

    if (NULL == stub || axutil_env_check_status(env) != AXIS2_SUCCESS)
    {
        LOG4CXX_ERROR(doHandlerLog, "Axis2 stub creation failed, error message: '" << AXIS2_ERROR_GET_MESSAGE(env->error) << "'");
        // There is no way to recover from this other than
        // creating a new instance of this class.
        return;
    }
    else
    {
        axis2_options_t *options = axis2_stub_get_options(stub, env);
        axis2_options_set_manage_session(options, env, AXIS2_TRUE);

        // Set User-agent property (need patched axis2_libcurl.c for this to work)
        if (not useragent.empty())
        {
            axutil_property_t *property = axutil_property_create(env);
            axutil_property_set_value(property, env, axutil_strdup(env, useragent.c_str()));
            axis2_options_set_property(options, env, AXIS2_HTTP_HEADER_USER_AGENT, property);
            axis2_options_set_xml_parser_reset(options, env, AXIS2_FALSE);
        }
    }
}

/**
 * Initiate the status map and store it for later use
 */
void DaisyOnlineHandler::initiateStatusMap()
{
    // Generate with and manually fix
    // grep AXIS2_ERROR.*, axis2c-src-1.6.0/util/include/axutil_error.h | sed 's/\([0-9A-Z_]*\),/statusMap_\[\1\] = ERROR_OTHER;/'

    statusMap_[AXIS2_ERROR_NONE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NO_MEMORY] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_NULL_PARAM] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_BLOCKING_INVOCATION_EXPECTS_RESPONSE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_CANNOT_INFER_TRANSPORT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_CLIENT_SIDE_SUPPORT_ONLY_ONE_CONF_CTX] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MEP_CANNOT_BE_NULL_IN_MEP_CLIENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MEP_MISMATCH_IN_MEP_CLIENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_TWO_WAY_CHANNEL_NEEDS_ADDRESSING] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_UNKNOWN_TRANSPORT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_UNSUPPORTED_TYPE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_OPTIONS_OBJECT_IS_NOT_SET] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_SOAP_ENVELOPE_STATE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_STATE_MSG_CTX] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_STATE_SVC] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_STATE_SVC_GRP] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SERVICE_NOT_YET_FOUND] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_CONFIG_NOT_FOUND] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_DATA_ELEMENT_IS_NULL] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_IN_FLOW_NOT_ALLOWED_IN_TRS_OUT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_HANDLER_STATE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_MODUELE_REF] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_MODUELE_REF_BY_OP] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_MODULE_CONF] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_STATE_DESC_BUILDER] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MODULE_NOT_FOUND] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MODULE_VALIDATION_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MODULE_XML_NOT_FOUND_FOR_THE_MODULE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NO_DISPATCHER_FOUND] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_OP_NAME_MISSING] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_OUT_FLOW_NOT_ALLOWED_IN_TRS_IN] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_REPO_CAN_NOT_BE_NULL] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_REPOSITORY_NOT_EXIST] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_REPOS_LISTENER_INIT_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SERVICE_XML_NOT_FOUND] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SVC_NAME_ERROR] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_TRANSPORT_SENDER_ERROR] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_SVC] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_CANNOT_CORRELATE_MSG] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_COULD_NOT_MAP_MEP_URI_TO_MEP_CONSTANT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_MESSAGE_ADDITION] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_STATE_MODULE_DESC] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_STATE_PARAM_CONTAINER] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MODULE_ALREADY_ENGAGED_TO_OP] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MODULE_ALREADY_ENGAGED_TO_SVC] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MODULE_ALREADY_ENGAGED_TO_SVC_GRP] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_PARAMETER_LOCKED_CANNOT_OVERRIDE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_EMPTY_SCHEMA_LIST] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_BEFORE_AFTER_HANDLERS_SAME] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_HANDLER_RULES] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_MODULE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_PHASE_FIRST_HANDLER] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_PHASE_LAST_HANDLER] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_STATE_CONF] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_STATE_PROCESSING_FAULT_ALREADY] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NOWHERE_TO_SEND_FAULT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_PHASE_ADD_HANDLER_INVALID] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_PHASE_FIRST_HANDLER_ALREADY_SET] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_PHASE_LAST_HANDLER_ALREADY_SET] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_TWO_SVCS_CANNOT_HAVE_SAME_NAME] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_MODULE_REF] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_PHASE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NO_TRANSPORT_IN_CONFIGURED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NO_TRANSPORT_OUT_CONFIGURED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_PHASE_IS_NOT_SPECIFED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SERVICE_MODULE_CAN_NOT_REFER_GLOBAL_PHASE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WSDL_SCHEMA_IS_NULL] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_OM_ELEMENT_INVALID_STATE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_OM_ELEMENT_MISMATCH] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_RPC_NEED_MATCHING_CHILD] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_UNKNOWN_STYLE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_STRING_DOES_NOT_REPRESENT_A_VALID_NC_NAME] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_HTTP_CLIENT_TRANSPORT_ERROR] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_HTTP_REQUEST_NOT_SENT] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_INVALID_HEADER] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_INVALID_HTTP_HEADER_START_LINE] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_INVALID_TRANSPORT_PROTOCOL] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_NULL_BODY] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_NULL_CONFIGURATION_CONTEXT] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_NULL_HTTP_VERSION] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_NULL_IN_STREAM_IN_MSG_CTX] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_NULL_OM_OUTPUT] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_NULL_SOAP_ENVELOPE_IN_MSG_CTX] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_NULL_STREAM_IN_CHUNKED_STREAM] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_NULL_STREAM_IN_RESPONSE_BODY] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_NULL_URL] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_INVALID_URL_FORMAT] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_DUPLICATE_URL_REST_MAPPING] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_OUT_TRNSPORT_INFO_NULL] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_RESPONSE_CONTENT_TYPE_MISSING] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_RESPONSE_TIMED_OUT] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_RESPONSE_SERVER_SHUTDOWN] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_SOAP_ENVELOPE_OR_SOAP_BODY_NULL] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_SSL_ENGINE] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_SSL_NO_CA_FILE] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_WRITING_RESPONSE] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_REQD_PARAM_MISSING] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_UNSUPPORTED_SCHEMA_TYPE] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_SVC_OR_OP_NOT_FOUND] = ERROR_NETWORK;
    statusMap_[AXIS2_ERROR_NO_MSG_INFO_HEADERS] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_COULD_NOT_OPEN_FILE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_DLL_CREATE_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_DLL_LOADING_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_ENVIRONMENT_IS_NULL] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_FILE_NAME_NOT_SET] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_STATE_DLL_DESC] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_HANDLER_CREATION_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INDEX_OUT_OF_BOUNDS] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_ADDRESS] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_FD] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_SOCKET] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_STATE_PARAM] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MODULE_CREATION_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MSG_RECV_CREATION_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NO_SUCH_ELEMENT] = ERROR_MISSING_ELEMENT;
    statusMap_[AXIS2_ERROR_SOCKET_BIND_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SOCKET_ERROR] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SOCKET_LISTEN_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SVC_SKELETON_CREATION_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_TRANSPORT_RECV_CREATION_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_TRANSPORT_SENDER_CREATION_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_UUID_GEN_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_POSSIBLE_DEADLOCK] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INTERFACE_OR_PORT_TYPE_NOT_FOUND_FOR_THE_BINDING] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INTERFACES_OR_PORTS_NOT_FOUND_FOR_PARTIALLY_BUILT_WOM] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_STATE_WSDL_OP] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_STATE_WSDL_SVC] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MEP_CANNOT_DETERMINE_MEP] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WSDL_BINDING_NAME_IS_REQUIRED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WSDL_INTERFACE_NAME_IS_REQUIRED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WSDL_PARSER_INVALID_STATE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WSDL_SVC_NAME_IS_REQUIRED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_ATTACHMENT_MISSING] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_BUILDER_DONE_CANNOT_PULL] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_BUILDER_STATE_CANNOT_DISCARD] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_BUILDER_STATE_LAST_NODE_NULL] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_DOCUMENT_STATE_ROOT_NULL] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_DOCUMENT_STATE_UNDEFINED_NAMESPACE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_EMPTY_NAMESPACE_URI] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_ITERATOR_NEXT_METHOD_HAS_NOT_YET_BEEN_CALLED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_ITERATOR_REMOVE_HAS_ALREADY_BEING_CALLED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_XML_READER_ELEMENT_NULL] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_XML_READER_VALUE_NULL] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_CREATING_XML_STREAM_READER] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_CREATING_XML_STREAM_WRITER] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_ATTRIBUTE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_ATTRIBUTE_WITH_NAMESPACE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_ATTRIBUTE_WITH_NAMESPACE_PREFIX] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_COMMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_DATA_SOURCE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_DEFAULT_NAMESPACE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_DTD] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_EMPTY_ELEMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_EMPTY_ELEMENT_WITH_NAMESPACE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_EMPTY_ELEMENT_WITH_NAMESPACE_PREFIX] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_END_DOCUMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_END_ELEMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_PROCESSING_INSTRUCTION] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_START_DOCUMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_START_ELEMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_START_ELEMENT_WITH_NAMESPACE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_START_ELEMENT_WITH_NAMESPACE_PREFIX] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRITING_CDATA] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_XML_PARSER_INVALID_MEM_TYPE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_BASE_TYPE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_SOAP_NAMESPACE_URI] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_SOAP_VERSION] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_INVALID_VALUE_FOUND_IN_MUST_UNDERSTAND] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MULTIPLE_CODE_ELEMENTS_ENCOUNTERED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MULTIPLE_DETAIL_ELEMENTS_ENCOUNTERED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MULTIPLE_NODE_ELEMENTS_ENCOUNTERED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MULTIPLE_REASON_ELEMENTS_ENCOUNTERED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MULTIPLE_ROLE_ELEMENTS_ENCOUNTERED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MULTIPLE_SUB_CODE_VALUES_ENCOUNTERED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MULTIPLE_VALUE_ENCOUNTERED_IN_CODE_ELEMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_MUST_UNDERSTAND_SHOULD_BE_1_0_TRUE_FALSE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_OM_ELEMENT_EXPECTED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_ONLY_CHARACTERS_ARE_ALLOWED_HERE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_ONLY_ONE_SOAP_FAULT_ALLOWED_IN_BODY] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SOAP11_FAULT_ACTOR_SHOULD_NOT_HAVE_CHILD_ELEMENTS] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SOAP_BUILDER_ENVELOPE_CAN_HAVE_ONLY_HEADER_AND_BODY] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SOAP_BUILDER_HEADER_BODY_WRONG_ORDER] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SOAP_BUILDER_MULTIPLE_BODY_ELEMENTS_ENCOUNTERED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SOAP_BUILDER_MULTIPLE_HEADERS_ENCOUNTERED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SOAP_FAULT_CODE_DOES_NOT_HAVE_A_VALUE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SOAP_FAULT_REASON_ELEMENT_SHOULD_HAVE_A_TEXT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SOAP_FAULT_ROLE_ELEMENT_SHOULD_HAVE_A_TEXT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SOAP_FAULT_VALUE_SHOULD_BE_PRESENT_BEFORE_SUB_CODE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SOAP_MESSAGE_DOES_NOT_CONTAIN_AN_ENVELOPE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SOAP_MESSAGE_FIRST_ELEMENT_MUST_CONTAIN_LOCAL_NAME] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_THIS_LOCALNAME_IS_NOT_SUPPORTED_INSIDE_THE_REASON_ELEMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_THIS_LOCALNAME_IS_NOT_SUPPORTED_INSIDE_THE_SUB_CODE_ELEMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_THIS_LOCALNAME_NOT_SUPPORTED_INSIDE_THE_CODE_ELEMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_TRANSPORT_LEVEL_INFORMATION_DOES_NOT_MATCH_WITH_SOAP] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_UNSUPPORTED_ELEMENT_IN_SOAP_FAULT_ELEMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_WRONG_ELEMENT_ORDER_ENCOUNTERED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SVC_SKEL_INVALID_XML_FORMAT_IN_REQUEST] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SVC_SKEL_INPUT_OM_NODE_NULL] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_SVC_SKEL_INVALID_OPERATION_PARAMETERS_IN_SOAP_REQUEST] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_REPOS_NOT_AUTHENTICATED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_REPOS_UNSUPPORTED_MODE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_REPOS_EXPIRED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_REPOS_NOT_IMPLEMENTED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_REPOS_NOT_FOUND] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_REPOS_BAD_SEARCH_TEXT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_ELEMENT_WITH_NO_NAMESPACE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_POLICY_CREATION_FAILED_FROM_ELEMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_ALL_CREATION_FAILED_FROM_ELEMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_EXACTLYONE_CREATION_FAILED_FROM_ELEMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_REFERENCE_CREATION_FAILED_FROM_ELEMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_ASSERTION_CREATION_FAILED_FROM_ELEMENT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_ALL_CREATION_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_EXACTLYONE_CREATION_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_POLICY_CREATION_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_NORMALIZATION_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_WRONG_INPUT_FOR_MERGE] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_CROSS_PRODUCT_FAILED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_NO_CHILDREN_POLICY_COMPONENTS] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_URI_NOT_SPECIFIED] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_NO_ENTRY_FOR_THE_GIVEN_URI] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_EXACTLYONE_NOT_FOUND_IN_NORMALIZED_POLICY] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_EXACTLYONE_IS_EMPTY] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_ALL_NOT_FOUND_WHILE_GETTING_CROSS_PRODUCT] = ERROR_OTHER;
    statusMap_[AXIS2_ERROR_NEETHI_UNKNOWN_ASSERTION] = ERROR_OTHER;

    // Generate with
    // grep AXIS2_STUB_DAISYONLINE src/axis2_stub_DaisyOnline.h | grep FAULT | sort -u | sed 's/\s*\(.*FAULT_\(.*FAULT\)\),/statusMap_\[\1\] = \2;/'

    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETBOOKMARKS_FAULT_INTERNALSERVERERRORFAULT] = FAULT_INTERNALSERVERERROR;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETBOOKMARKS_FAULT_INVALIDOPERATIONFAULT] = FAULT_INVALIDOPERATION;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETBOOKMARKS_FAULT_INVALIDPARAMETERFAULT] = FAULT_INVALIDPARAMETER;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETBOOKMARKS_FAULT_NOACTIVESESSIONFAULT] = FAULT_NOACTIVESESSION;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETBOOKMARKS_FAULT_OPERATIONNOTSUPPORTEDFAULT] = FAULT_OPERATIONNOTSUPPORTED;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTLIST_FAULT_INTERNALSERVERERRORFAULT] = FAULT_INTERNALSERVERERROR;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTLIST_FAULT_INVALIDOPERATIONFAULT] = FAULT_INVALIDOPERATION;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTLIST_FAULT_INVALIDPARAMETERFAULT] = FAULT_INVALIDPARAMETER;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTLIST_FAULT_NOACTIVESESSIONFAULT] = FAULT_NOACTIVESESSION;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTMETADATA_FAULT_INTERNALSERVERERRORFAULT] = FAULT_INTERNALSERVERERROR;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTMETADATA_FAULT_INVALIDOPERATIONFAULT] = FAULT_INVALIDOPERATION;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTMETADATA_FAULT_INVALIDPARAMETERFAULT] = FAULT_INVALIDPARAMETER;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTMETADATA_FAULT_NOACTIVESESSIONFAULT] = FAULT_NOACTIVESESSION;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTRESOURCES_FAULT_INTERNALSERVERERRORFAULT] = FAULT_INTERNALSERVERERROR;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTRESOURCES_FAULT_INVALIDOPERATIONFAULT] = FAULT_INVALIDOPERATION;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTRESOURCES_FAULT_INVALIDPARAMETERFAULT] = FAULT_INVALIDPARAMETER;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTRESOURCES_FAULT_NOACTIVESESSIONFAULT] = FAULT_NOACTIVESESSION;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETKEYEXCHANGEOBJECT_FAULT_INTERNALSERVERERRORFAULT] = FAULT_INTERNALSERVERERROR;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETKEYEXCHANGEOBJECT_FAULT_INVALIDOPERATIONFAULT] = FAULT_INVALIDOPERATION;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETKEYEXCHANGEOBJECT_FAULT_INVALIDPARAMETERFAULT] = FAULT_INVALIDPARAMETER;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETKEYEXCHANGEOBJECT_FAULT_NOACTIVESESSIONFAULT] = FAULT_NOACTIVESESSION;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETKEYEXCHANGEOBJECT_FAULT_OPERATIONNOTSUPPORTEDFAULT] = FAULT_OPERATIONNOTSUPPORTED;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETQUESTIONS_FAULT_INTERNALSERVERERRORFAULT] = FAULT_INTERNALSERVERERROR;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETQUESTIONS_FAULT_INVALIDOPERATIONFAULT] = FAULT_INVALIDOPERATION;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETQUESTIONS_FAULT_INVALIDPARAMETERFAULT] = FAULT_INVALIDPARAMETER;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETQUESTIONS_FAULT_NOACTIVESESSIONFAULT] = FAULT_NOACTIVESESSION;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETQUESTIONS_FAULT_OPERATIONNOTSUPPORTEDFAULT] = FAULT_OPERATIONNOTSUPPORTED;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEANNOUNCEMENTS_FAULT_INTERNALSERVERERRORFAULT] = FAULT_INTERNALSERVERERROR;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEANNOUNCEMENTS_FAULT_INVALIDOPERATIONFAULT] = FAULT_INVALIDOPERATION;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEANNOUNCEMENTS_FAULT_NOACTIVESESSIONFAULT] = FAULT_NOACTIVESESSION;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEANNOUNCEMENTS_FAULT_OPERATIONNOTSUPPORTEDFAULT] = FAULT_OPERATIONNOTSUPPORTED;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEATTRIBUTES_FAULT_INTERNALSERVERERRORFAULT] = FAULT_INTERNALSERVERERROR;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEATTRIBUTES_FAULT_INVALIDOPERATIONFAULT] = FAULT_INVALIDOPERATION;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEATTRIBUTES_FAULT_NOACTIVESESSIONFAULT] = FAULT_NOACTIVESESSION;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_ISSUECONTENT_FAULT_INTERNALSERVERERRORFAULT] = FAULT_INTERNALSERVERERROR;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_ISSUECONTENT_FAULT_INVALIDOPERATIONFAULT] = FAULT_INVALIDOPERATION;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_ISSUECONTENT_FAULT_INVALIDPARAMETERFAULT] = FAULT_INVALIDPARAMETER;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_ISSUECONTENT_FAULT_NOACTIVESESSIONFAULT] = FAULT_NOACTIVESESSION;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_LOGOFF_FAULT_INTERNALSERVERERRORFAULT] = FAULT_INTERNALSERVERERROR;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_LOGOFF_FAULT_INVALIDOPERATIONFAULT] = FAULT_INVALIDOPERATION;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_LOGON_FAULT_INTERNALSERVERERRORFAULT] = FAULT_INTERNALSERVERERROR;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_LOGON_FAULT_INVALIDOPERATIONFAULT] = FAULT_INVALIDOPERATION;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_MARKANNOUNCEMENTSASREAD_FAULT_INTERNALSERVERERRORFAULT] = FAULT_INTERNALSERVERERROR;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_MARKANNOUNCEMENTSASREAD_FAULT_INVALIDOPERATIONFAULT] = FAULT_INVALIDOPERATION;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_MARKANNOUNCEMENTSASREAD_FAULT_INVALIDPARAMETERFAULT] = FAULT_INVALIDPARAMETER;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_MARKANNOUNCEMENTSASREAD_FAULT_NOACTIVESESSIONFAULT] = FAULT_NOACTIVESESSION;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_MARKANNOUNCEMENTSASREAD_FAULT_OPERATIONNOTSUPPORTEDFAULT] = FAULT_OPERATIONNOTSUPPORTED;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_RETURNCONTENT_FAULT_INTERNALSERVERERRORFAULT] = FAULT_INTERNALSERVERERROR;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_RETURNCONTENT_FAULT_INVALIDOPERATIONFAULT] = FAULT_INVALIDOPERATION;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_RETURNCONTENT_FAULT_INVALIDPARAMETERFAULT] = FAULT_INVALIDPARAMETER;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_RETURNCONTENT_FAULT_NOACTIVESESSIONFAULT] = FAULT_NOACTIVESESSION;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_RETURNCONTENT_FAULT_OPERATIONNOTSUPPORTEDFAULT] = FAULT_OPERATIONNOTSUPPORTED;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_SETBOOKMARKS_FAULT_INTERNALSERVERERRORFAULT] = FAULT_INTERNALSERVERERROR;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_SETBOOKMARKS_FAULT_INVALIDOPERATIONFAULT] = FAULT_INVALIDOPERATION;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_SETBOOKMARKS_FAULT_INVALIDPARAMETERFAULT] = FAULT_INVALIDPARAMETER;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_SETBOOKMARKS_FAULT_NOACTIVESESSIONFAULT] = FAULT_NOACTIVESESSION;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_SETBOOKMARKS_FAULT_OPERATIONNOTSUPPORTEDFAULT] = FAULT_OPERATIONNOTSUPPORTED;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_SETREADINGSYSTEMATTRIBUTES_FAULT_INTERNALSERVERERRORFAULT] = FAULT_INTERNALSERVERERROR;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_SETREADINGSYSTEMATTRIBUTES_FAULT_INVALIDOPERATIONFAULT] = FAULT_INVALIDOPERATION;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_SETREADINGSYSTEMATTRIBUTES_FAULT_INVALIDPARAMETERFAULT] = FAULT_INVALIDPARAMETER;
    statusMap_[AXIS2_STUB_KOLIBRE_DAISYONLINE_SETREADINGSYSTEMATTRIBUTES_FAULT_NOACTIVESESSIONFAULT] = FAULT_NOACTIVESESSION;
}

/**
 * Get the current status
 *
 * Use this function after an invokation of a service operation to check to result of the invoke.
 *
 * @return The current status.
 */
DaisyOnlineHandler::status DaisyOnlineHandler::getStatus()
{
    if (statusMap_.size() == 0)
    {
        initiateStatusMap();
    }

    // These are errors we control
    switch (lastErrorNumber_)
    {
    case STATUS_SUCCESS:
        return STATUS_SUCCESS;
    case ERROR_INVALID_REQUEST_DATA:
        return ERROR_INVALID_REQUEST_DATA;
    }

    if (statusMap_.count(env->error->error_number) == 0)
    {
        LOG4CXX_ERROR(doHandlerLog, "This is not a Axis2 error nor a Soap fault. Error code: " << env->error->error_number << " '" << AXIS2_ERROR_GET_MESSAGE(env->error) << "'");
        return STATUS_UNKNOWN;
    }

    // These are errors in axis2 and stubs
    return statusMap_[env->error->error_number];
}

/**
 * @return A human readable string of the current status.
 */
std::string DaisyOnlineHandler::getStatusMessage()
{
    switch (getStatus())
    {
    case STATUS_UNKNOWN:
        return "Unknown";
    case STATUS_SUCCESS:
        return "Success";
    case FAULT_INTERNALSERVERERROR:
        return "Internal Server Error Fault";
    case FAULT_INVALIDOPERATION:
        return "Invalid Operation Fault";
    case FAULT_INVALIDPARAMETER:
        return "Invalid Parameter Fault";
    case FAULT_NOACTIVESESSION:
        return "No Active Session Fault";
    case FAULT_OPERATIONNOTSUPPORTED:
        return "Operation Not Supported Fault";
    case ERROR_INVALID_REQUEST_DATA:
        return "An element is missing in the request data";
    };

    // Return Axis2 error message
    return AXIS2_ERROR_GET_MESSAGE(env->error);
}

/**
 * @return A human readable string of the last soap fault reason.
 */
std::string DaisyOnlineHandler::getLastSoapFaultReason()
{
    return lastSoapFaultReason_;
}

/**
 * Destructor
 *
 * Free allocated memory.
 */
DaisyOnlineHandler::~DaisyOnlineHandler()
{
    if (stub)
        axis2_stub_free(stub, env);
    stub = NULL;
    if (env)
        axutil_env_free((axutil_env_t *) env);
    env = NULL;
    //delete log_ops; /* causes double free */
}

/**
 * Invoke logOn operation
 *
 * @param username The username to access the Service.
 * @param password The password to access the Service.
 * @return A boolean indicating whether the invoke was successful or not.
 */
bool DaisyOnlineHandler::logOn(std::string username, std::string password)
{
    axis2_char_t *username_ = (axis2_char_t*) username.c_str();
    axis2_char_t *password_ = (axis2_char_t*) password.c_str();

    axis2_stub_Kolibre_DaisyOnline_logOn_fault fault;

    LOG4CXX_INFO(doHandlerLog, "Sending " << __FUNCTION__ << " request");
    axis2_bool_t logOnResult = axis2_stub_op_Kolibre_DaisyOnline_logOn(stub, env, username_, password_, &fault);
    LOG4CXX_INFO(doHandlerLog, "Got " << __FUNCTION__ << " response");

    lastErrorNumber_ = STATUS_SUCCESS;
    if (!good())
    {
        lastErrorNumber_ = env->error->error_number;
        switch (env->error->error_number)
        {
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_LOGON_FAULT_INTERNALSERVERERRORFAULT:
            parseInternalServerErrorFault(fault.InternalServerErrorFault);
            free(fault.InternalServerErrorFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_LOGON_FAULT_INVALIDOPERATIONFAULT:
            parseInvalidOperationFault(fault.InvalidOperationFault);
            free(fault.InvalidOperationFault);
            break;
        };

        LOG4CXX_ERROR(doHandlerLog, __FUNCTION__ << " invoke FAILED with error: " << env->error->error_number << " '" << getStatusMessage() << "'");
        return false;
    }

    return logOnResult == AXIS2_TRUE;
}

/**
 * Invoke logOff operation
 *
 * @return A boolean indicating whether the invoke was successful or not.
 */
bool DaisyOnlineHandler::logOff()
{
    axis2_stub_Kolibre_DaisyOnline_logOff_fault fault;

    LOG4CXX_INFO(doHandlerLog, "Sending " << __FUNCTION__ << " request");
    axis2_bool_t logOffResult = axis2_stub_op_Kolibre_DaisyOnline_logOff(stub, env, &fault);
    LOG4CXX_INFO(doHandlerLog, "Got " << __FUNCTION__ << " response");

    lastErrorNumber_ = STATUS_SUCCESS;
    if (!good())
    {
        lastErrorNumber_ = env->error->error_number;
        switch (env->error->error_number)
        {
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_LOGOFF_FAULT_INVALIDOPERATIONFAULT:
            parseInvalidOperationFault(fault.InvalidOperationFault);
            free(fault.InvalidOperationFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_LOGOFF_FAULT_INTERNALSERVERERRORFAULT:
            parseInternalServerErrorFault(fault.InternalServerErrorFault);
            free(fault.InternalServerErrorFault);
            break;
        };

        LOG4CXX_ERROR(doHandlerLog, __FUNCTION__ << " invoke FAILED with error: " << env->error->error_number << " '" << getStatusMessage() << "'");
        return false;
    }

    return logOffResult == AXIS2_TRUE;
}

/**
 * Invoke getServiceAnnouncements operation
 *
 * Retrieves any announcements from the Service that a User has not yet read.
 *
 * @return A pointer to the announcements.
 */
kdo::ServiceAnnouncements* DaisyOnlineHandler::getServiceAnnouncements()
{
    axis2_stub_Kolibre_DaisyOnline_getServiceAnnouncements_fault fault;

    LOG4CXX_INFO(doHandlerLog, "Sending " << __FUNCTION__ << " request");
    adb_announcements_type0_t* getServiceAnnouncementsResult = axis2_stub_op_Kolibre_DaisyOnline_getServiceAnnouncements(stub, env, &fault);
    LOG4CXX_INFO(doHandlerLog, "Got " << __FUNCTION__ << " response");

    lastErrorNumber_ = STATUS_SUCCESS;
    if (!good())
    {
        lastErrorNumber_ = env->error->error_number;
        switch (env->error->error_number)
        {
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEANNOUNCEMENTS_FAULT_NOACTIVESESSIONFAULT:
            parseNoActiveSessionFault(fault.NoActiveSessionFault);
            free(fault.NoActiveSessionFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEANNOUNCEMENTS_FAULT_OPERATIONNOTSUPPORTEDFAULT:
            parseOperationNotSupportedFault(fault.OperationNotSupportedFault);
            free(fault.OperationNotSupportedFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEANNOUNCEMENTS_FAULT_INVALIDOPERATIONFAULT:
            parseInvalidOperationFault(fault.InvalidOperationFault);
            free(fault.InvalidOperationFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEANNOUNCEMENTS_FAULT_INTERNALSERVERERRORFAULT:
            parseInternalServerErrorFault(fault.InternalServerErrorFault);
            free(fault.InternalServerErrorFault);
            break;
        };

        LOG4CXX_ERROR(doHandlerLog, __FUNCTION__ << " invoke FAILED with error: " << env->error->error_number << " '" << getStatusMessage() << "'");
        return NULL;
    }

    kdo::ServiceAnnouncements *announcements = parseServiceAnnouncements(getServiceAnnouncementsResult);
    adb_announcements_type0_free(getServiceAnnouncementsResult, env);
    return announcements;
}

kdo::ServiceAnnouncements* DaisyOnlineHandler::parseServiceAnnouncements(adb_announcements_type0* announcements)
{
    kdo::ServiceAnnouncements* kServiceAnnouncements = new kdo::ServiceAnnouncements();

    // optional announcement
    if (AXIS2_FALSE == adb_announcements_type0_is_announcement_nil(announcements, env))
    {
        std::vector<kdo::Announcement> kannouncements;
        int count = adb_announcements_type0_sizeof_announcement(announcements, env);
        for (int i = 0; i < count; i++)
        {
            if (AXIS2_FALSE == adb_announcements_type0_is_announcement_nil_at(announcements, env, i))
            {
                kdo::Announcement kannouncement;
                adb_announcement_type0_t *announcement;
                announcement = adb_announcements_type0_get_announcement_at(announcements, env, i);

                // required id
                if (AXIS2_FALSE == adb_announcement_type0_is_id_nil(announcement, env))
                {
                    kannouncement.setId(adb_announcement_type0_get_id(announcement, env));
                }
                else
                {
                    LOG4CXX_ERROR(doHandlerLog, "Field announcement id is required");
                    return NULL;
                }

                // optional type
                if (AXIS2_FALSE == adb_announcement_type0_is_type_nil(announcement, env))
                {
                    adb_type_type1_t* type = adb_announcement_type0_get_type(announcement, env);
                    adb_type_type1_enum_t type_enum = adb_type_type1_get_type_type1_enum(type, env);
                    switch (type_enum)
                    {
                    case TYPE_TYPE1_WARNING:
                        kannouncement.setType(kdo::Announcement::WARNING);
                        break;
                    case TYPE_TYPE1_ERROR:
                        kannouncement.setType(kdo::Announcement::ERROR);
                        break;
                    case TYPE_TYPE1_INFORMATION:
                        kannouncement.setType(kdo::Announcement::INFORMATION);
                        break;
                    case TYPE_TYPE1_SYSTEM:
                        kannouncement.setType(kdo::Announcement::SYSTEM);
                        break;
                    }
                }
                // optional priority
                if (AXIS2_FALSE == adb_announcement_type0_is_priority_nil(announcement, env))
                {
                    kannouncement.setId(adb_announcement_type0_get_id(announcement, env));
                }

                // required label
                if (AXIS2_FALSE == adb_announcement_type0_is_label_nil(announcement, env))
                {
                    adb_label_type0* label;
                    label = adb_announcement_type0_get_label(announcement, env);
                    kdo::Label klabel = parseLabel(label);
                    kannouncement.setMessage(klabel);
                }
                else
                {
                    LOG4CXX_ERROR(doHandlerLog, "Field announcement id is required");
                    return NULL;
                }
                kannouncements.push_back(kannouncement);
            }
            else
            {

            }
        }
        kServiceAnnouncements->setAnnouncements(kannouncements);
    }
    return kServiceAnnouncements;
}

/**
 * Invoke markAnnouncementsAsRead operation
 *
 * Marks the specified announcement as read.
 *
 * @param identifier The identifier of a single announcement to be marked as read.
 * @return A boolean indicating whether the invoke was successful or not.
 */
bool DaisyOnlineHandler::markAnnouncementsAsRead(std::string identifier)
{
    kdo::Announcement announcement(identifier);
    std::vector<kdo::Announcement> announcements;
    announcements.push_back(announcement);
    return markAnnouncementsAsRead(announcements);
}

/**
 * Invoke markAnnouncementsAsRead operation
 *
 * Marks the specified announcement(s) as read.
 *
 * @param announcements The announcement(s) to be marked as read.
 * @return A boolean indicating whether the invoke was successful or not.
 */
bool DaisyOnlineHandler::markAnnouncementsAsRead(std::vector<kdo::Announcement> announcements)
{
    // create markAnnouncementsAsRead request
    axutil_array_list_t *ids = axutil_array_list_create(env, announcements.size());

    for (std::vector<kdo::Announcement>::iterator it = announcements.begin(); it < announcements.end(); it++)
    {
        axis2_char_t* item = (axis2_char_t*) axutil_strdup(env, it->getId().c_str());
        axutil_array_list_add(ids, env, item);
    }
    adb_read_type0_t *read = adb_read_type0_create_with_values(env, ids);

    axis2_stub_Kolibre_DaisyOnline_markAnnouncementsAsRead_fault fault;

    LOG4CXX_INFO(doHandlerLog, "Sending " << __FUNCTION__ << " request");
    axis2_bool_t markAnnouncementsAsRead = axis2_stub_op_Kolibre_DaisyOnline_markAnnouncementsAsRead(stub, env, read, &fault);
    LOG4CXX_INFO(doHandlerLog, "Got " << __FUNCTION__ << " response");

    lastErrorNumber_ = STATUS_SUCCESS;
    if (!good())
    {
        lastErrorNumber_ = env->error->error_number;
        switch (env->error->error_number)
        {
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_MARKANNOUNCEMENTSASREAD_FAULT_NOACTIVESESSIONFAULT:
            parseNoActiveSessionFault(fault.NoActiveSessionFault);
            free(fault.NoActiveSessionFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_MARKANNOUNCEMENTSASREAD_FAULT_OPERATIONNOTSUPPORTEDFAULT:
            parseOperationNotSupportedFault(fault.OperationNotSupportedFault);
            free(fault.OperationNotSupportedFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_MARKANNOUNCEMENTSASREAD_FAULT_INVALIDPARAMETERFAULT:
            parseInvalidParameterFault(fault.InvalidParameterFault);
            free(fault.InvalidParameterFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_MARKANNOUNCEMENTSASREAD_FAULT_INVALIDOPERATIONFAULT:
            parseInvalidOperationFault(fault.InvalidOperationFault);
            free(fault.InvalidOperationFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_MARKANNOUNCEMENTSASREAD_FAULT_INTERNALSERVERERRORFAULT:
            parseInternalServerErrorFault(fault.InternalServerErrorFault);
            free(fault.InternalServerErrorFault);
            break;
        };

        LOG4CXX_ERROR(doHandlerLog, __FUNCTION__ << " invoke FAILED with error: " << env->error->error_number << " '" << getStatusMessage() << "'");
        return false;
    }

    // Stubs will take care of freeing memory in wrapped mode
    //adb_read_type0_free(read, env);
    //read = NULL;

    return markAnnouncementsAsRead == AXIS2_TRUE;
}

/**
 * Invoke getServiceAttributes operation
 *
 * Retrieves Service properties, including information on which optional Operations the Service supports.
 * @return A pointer to the serviceAttributes.
 */
kdo::ServiceAttributes* DaisyOnlineHandler::getServiceAttributes()
{
    axis2_stub_Kolibre_DaisyOnline_getServiceAttributes_fault fault;

    LOG4CXX_INFO(doHandlerLog, "Sending " << __FUNCTION__ << " request");
    adb_serviceAttributes_type0* getServiceAttributesResult = axis2_stub_op_Kolibre_DaisyOnline_getServiceAttributes(stub, env, &fault);
    LOG4CXX_INFO(doHandlerLog, "Got " << __FUNCTION__ << " response");

    lastErrorNumber_ = STATUS_SUCCESS;
    if (!good())
    {
        lastErrorNumber_ = env->error->error_number;
        switch (env->error->error_number)
        {
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEATTRIBUTES_FAULT_INTERNALSERVERERRORFAULT:
            parseInternalServerErrorFault(fault.InternalServerErrorFault);
            free(fault.InternalServerErrorFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEATTRIBUTES_FAULT_INVALIDOPERATIONFAULT:
            parseInvalidOperationFault(fault.InvalidOperationFault);
            free(fault.InvalidOperationFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEATTRIBUTES_FAULT_NOACTIVESESSIONFAULT:
            parseNoActiveSessionFault(fault.NoActiveSessionFault);
            free(fault.NoActiveSessionFault);
            break;
        };

        LOG4CXX_ERROR(doHandlerLog, __FUNCTION__ << " invoke FAILED with error: " << env->error->error_number << " '" << getStatusMessage() << "'");
        return NULL;
    }

    kdo::ServiceAttributes* serviceAttributes = parseServiceAttributes(getServiceAttributesResult);
    adb_serviceAttributes_type0_free_obj(getServiceAttributesResult, env);
    return serviceAttributes;
}

kdo::ServiceAttributes* DaisyOnlineHandler::parseServiceAttributes(adb_serviceAttributes_type0* serviceAttributes)
{
    kdo::ServiceAttributes* kserviceAttributes = new kdo::ServiceAttributes();

    // optional serviceProvider
    if (AXIS2_FALSE == adb_serviceAttributes_type0_is_serviceProvider_nil(serviceAttributes, env))
    {
        adb_serviceProvider_type0_t *serviceProvider;
        serviceProvider = adb_serviceAttributes_type0_get_serviceProvider(serviceAttributes, env);

        // required id
        if (AXIS2_TRUE == adb_serviceProvider_type0_is_id_nil(serviceProvider, env))
        {
            LOG4CXX_ERROR(doHandlerLog, "Field service provider id is required");
            return NULL;
        }
        std::string idstr = adb_serviceProvider_type0_get_id(serviceProvider, env);
        kserviceAttributes->setServiceProviderId(idstr);

        // optional label
        if (AXIS2_FALSE == adb_serviceProvider_type0_is_label_nil(serviceProvider, env))
        {
            adb_label_type0_t *label;
            label = adb_serviceProvider_type0_get_label(serviceProvider, env);

            kserviceAttributes->setServiceProvider(parseLabel(label));
        }
    }

    // optional service
    if (AXIS2_FALSE == adb_serviceAttributes_type0_is_service_nil(serviceAttributes, env))
    {
        adb_service_type0_t *service;
        service = adb_serviceAttributes_type0_get_service(serviceAttributes, env);

        // required id
        if (AXIS2_TRUE == adb_service_type0_is_id_nil(service, env))
        {
            LOG4CXX_ERROR(doHandlerLog, "Field service id is required");
            return NULL;
        }
        std::string idstr = adb_service_type0_get_id(service, env);
        kserviceAttributes->setServiceId(idstr);

        // optional label
        if (AXIS2_FALSE == adb_service_type0_is_label_nil(service, env))
        {
            adb_label_type0_t *label;
            label = adb_service_type0_get_label(service, env);

            kserviceAttributes->setService(parseLabel(label));
        }
    }

    // required supportedContentSelectionMethods
    if (AXIS2_FALSE == adb_serviceAttributes_type0_is_supportedContentSelectionMethods_nil(serviceAttributes, env))
    {
        adb_supportedContentSelectionMethods_type0_t *contentSelectionMethods;
        contentSelectionMethods = adb_serviceAttributes_type0_get_supportedContentSelectionMethods(serviceAttributes, env);

        // required method
        if (AXIS2_FALSE == adb_supportedContentSelectionMethods_type0_is_method_nil(contentSelectionMethods, env))
        {
            int count = adb_supportedContentSelectionMethods_type0_sizeof_method(contentSelectionMethods, env);
            for (int i = 0; i < count; i++)
            {
                if (AXIS2_TRUE == adb_supportedContentSelectionMethods_type0_is_method_nil_at(contentSelectionMethods, env, i))
                    continue;
                adb_supportedContentSelectionMethods_type0_t* contentSelectionMethod;
                adb_method_type1_t* method = adb_supportedContentSelectionMethods_type0_get_method_at(contentSelectionMethod, env, i);
                adb_method_type0_enum_t method_enum = adb_method_type1_get_method_type0_enum(method, env);

                switch (method_enum)
                {
                case METHOD_TYPE0_OUT_OF_BAND:
                    kserviceAttributes->setSupportedContentSelectionMethods(kserviceAttributes->getSupportedContentSelectionMethods() | kdo::ServiceAttributes::OUT_OF_BAND);
                    LOG4CXX_DEBUG(doHandlerLog, "Server supports selection method: Out of band");
                    break;
                case METHOD_TYPE0_BROWSE:
                    kserviceAttributes->setSupportedContentSelectionMethods(kserviceAttributes->getSupportedContentSelectionMethods() | kdo::ServiceAttributes::BROWSE);
                    LOG4CXX_DEBUG(doHandlerLog, "Server supports selection method: Browse");
                    break;
                default:
                    LOG4CXX_ERROR(doHandlerLog, "supported selection method invalid: " << method_enum);
                    break;
                }
            }
        }
        else
        {
            LOG4CXX_ERROR(doHandlerLog, "Field supported content selection methods is required");
            return NULL;
        }
    }
    else
    {
        LOG4CXX_ERROR(doHandlerLog, "Field supported content selection methods is required");
        return NULL;
    }

    // required supportsServerSideBack
    if (AXIS2_FALSE == adb_serviceAttributes_type0_is_supportsServerSideBack_nil(serviceAttributes, env))
    {
        kserviceAttributes->setSupportsServerSideBack(adb_serviceAttributes_type0_get_supportsServerSideBack(serviceAttributes, env) == AXIS2_TRUE);
    }
    else
    {
        LOG4CXX_ERROR(doHandlerLog, "Field supports server side back is required");
        return NULL;
    }

    // required supportsSearch
    if (AXIS2_FALSE == adb_serviceAttributes_type0_is_supportsSearch_nil(serviceAttributes, env))
    {
        kserviceAttributes->setSupportsSearch(adb_serviceAttributes_type0_get_supportsSearch(serviceAttributes, env) == AXIS2_TRUE);
    }
    else
    {
        LOG4CXX_ERROR(doHandlerLog, "Field supports search is required");
        return NULL;
    }

    // required supportedUplinkAudioCodecs
    if (AXIS2_FALSE == adb_serviceAttributes_type0_is_supportedUplinkAudioCodecs_nil(serviceAttributes, env))
    {
        adb_supportedUplinkAudioCodecs_type0_t *uplinkAudioCodecs;
        uplinkAudioCodecs = adb_serviceAttributes_type0_get_supportedUplinkAudioCodecs(serviceAttributes, env);

        // optional codec
        if (AXIS2_FALSE == adb_supportedUplinkAudioCodecs_type0_is_codec_nil(uplinkAudioCodecs, env))
        {
            int count = adb_supportedUplinkAudioCodecs_type0_sizeof_codec(uplinkAudioCodecs, env);
            for (int i = 0; i < count; i++)
            {
                if (AXIS2_TRUE == adb_supportedUplinkAudioCodecs_type0_is_codec_nil_at(uplinkAudioCodecs, env, i))
                {
                    LOG4CXX_ERROR(doHandlerLog, "Field codec is required in codec array");
                }
            }
        }
    }
    else
    {
        LOG4CXX_ERROR(doHandlerLog, "Field supported uplink audio codecs is required");
        return NULL;
    }

    // required supportsAudioLabels
    if (AXIS2_FALSE == adb_serviceAttributes_type0_is_supportsAudioLabels_nil(serviceAttributes, env))
    {
        kserviceAttributes->setSupportsAudioLabels(adb_serviceAttributes_type0_get_supportsAudioLabels(serviceAttributes, env) == AXIS2_TRUE);
    }
    else
    {
        LOG4CXX_ERROR(doHandlerLog, "Field supports audio labels is required");
        return NULL;
    }

    // required supportedOptionalOperations
    if (AXIS2_FALSE == adb_serviceAttributes_type0_is_supportedOptionalOperations_nil(serviceAttributes, env))
    {
        adb_supportedOptionalOperations_type0_t *optionalOperations;
        optionalOperations = adb_serviceAttributes_type0_get_supportedOptionalOperations(serviceAttributes, env);

        // optional operation
        if (AXIS2_FALSE == adb_supportedOptionalOperations_type0_is_operation_nil(optionalOperations, env))
        {
            int count = adb_supportedOptionalOperations_type0_sizeof_operation(optionalOperations, env);
            kserviceAttributes->clearSupportedOperations();
            for (int i = 0; i < count; i++)
            {
                if (AXIS2_FALSE == adb_supportedOptionalOperations_type0_is_operation_nil_at(optionalOperations, env, i))
                {
                    adb_operation_type1_t* operation = adb_supportedOptionalOperations_type0_get_operation_at(optionalOperations, env, i);
                    adb_operation_type0_enum_t operation_enum = adb_operation_type1_get_operation_type0_enum(operation, env);

                    switch (operation_enum)
                    {
                    case OPERATION_TYPE0_SET_BOOKMARKS:
                        kserviceAttributes->setSupportedOperations(kserviceAttributes->getSupportedOperations() | kdo::ServiceAttributes::SET_BOOKMARKS);
                        LOG4CXX_DEBUG(doHandlerLog, "Server supports setting bookmarks");
                        break;
                    case OPERATION_TYPE0_GET_BOOKMARKS:
                        kserviceAttributes->setSupportedOperations(kserviceAttributes->getSupportedOperations() | kdo::ServiceAttributes::GET_BOOKMARKS);
                        LOG4CXX_DEBUG(doHandlerLog, "Server supports getting bookmarks");
                        break;
                    case OPERATION_TYPE0_DYNAMIC_MENUS:
                        kserviceAttributes->setSupportedOperations(kserviceAttributes->getSupportedOperations() | kdo::ServiceAttributes::DYNAMIC_MENUS);
                        LOG4CXX_DEBUG(doHandlerLog, "Server supports dynamic menus");
                        break;
                    case OPERATION_TYPE0_SERVICE_ANNOUNCEMENTS:
                        kserviceAttributes->setSupportedOperations(kserviceAttributes->getSupportedOperations() | kdo::ServiceAttributes::SERVICE_ANNOUNCEMENTS);
                        LOG4CXX_DEBUG(doHandlerLog, "Server supports service announcements");
                        break;
                    case OPERATION_TYPE0_PDTB2_KEY_PROVISION:
                        kserviceAttributes->setSupportedOperations(kserviceAttributes->getSupportedOperations() | kdo::ServiceAttributes::SERVICE_ANNOUNCEMENTS);
                        LOG4CXX_DEBUG(doHandlerLog, "Server supports pdtb2 key provision");
                        break;
                    default:
                        LOG4CXX_ERROR(doHandlerLog, "supported optional operation invalid: " << operation_enum);
                        break;
                    }
                }
                else
                {
                    LOG4CXX_ERROR(doHandlerLog, "Field supported optional operation is required");
                    return NULL;
                }
            }
        }
    }
    else
    {
        LOG4CXX_ERROR(doHandlerLog, "Field supported optional operations is required");
        return NULL;
    }

    return kserviceAttributes;
}

kdo::Label DaisyOnlineHandler::parseLabel(adb_label_type0* label)
{
    kdo::Label klabel;

    // required xml:lang
    if (AXIS2_TRUE == adb_label_type0_is_lang_nil(label, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "Field label lang is required");
        return klabel;
    }

    // required text
    if (AXIS2_TRUE == adb_label_type0_is_text_nil(label, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "Field label text is required");
        return klabel;
    }

    adb_lang_type0_t* lang = adb_label_type0_get_lang(label, env);
    std::string langstr = adb_lang_type0_get_language(lang, env);
    if (!good())
    {
        LOG4CXX_ERROR(doHandlerLog, "Error parsing label language");
        return klabel;
    }
    klabel.setLang(langstr);

    std::string textstr = adb_label_type0_get_text(label, env);
    if (!good())
    {
        LOG4CXX_ERROR(doHandlerLog, "Error parsing label text");
        return klabel;
    }
    klabel.setText(textstr);

    klabel.setDirection(kdo::Label::ltr);

    // optional audio
    if (AXIS2_FALSE == adb_label_type0_is_audio_nil(label, env))
    {
        adb_audio_type0_t *audio;
        audio = adb_label_type0_get_audio(label, env);

        kdo::Audio kaudio = parseAudio(audio);
        if (good())
            klabel.setAudio(kaudio);
    }

    return klabel;
}

kdo::Audio DaisyOnlineHandler::parseAudio(adb_audio_type0* audio)
{
    kdo::Audio kaudio;

    // required uri
    if (AXIS2_TRUE == adb_audio_type0_is_uri_nil(audio, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "Field audio uri is required");
        return kaudio;
    }

    axutil_uri* uri = adb_audio_type0_get_uri(audio, env);
    axis2_char_t* uristr = axutil_uri_to_string(uri, env, AXIS2_URI_UNP_REVEALPASSWORD);
    kaudio.setUri(uristr);
    free(uristr);

    // optional rangeBegin
    if (AXIS2_FALSE == adb_audio_type0_is_rangeBegin_nil(audio, env))
    {
        kaudio.setRangeBegin(adb_audio_type0_get_rangeBegin(audio, env));
    }

    // optional rengeEnd
    if (AXIS2_FALSE == adb_audio_type0_is_rangeEnd_nil(audio, env))
    {
        kaudio.setRangeEnd(adb_audio_type0_get_rangeEnd(audio, env));
    }

    // optional size
    if (AXIS2_FALSE == adb_audio_type0_is_size_nil(audio, env))
    {
        kaudio.setSize(adb_audio_type0_get_size(audio, env));
    }

    return kaudio;
}

/**
 * Invoke setReadingSystemAttributes operation
 *
 * Sends Reading System properties to a Service.
 *
 * @return A boolean indicating whether the invoke was successful or not.
 */
bool DaisyOnlineHandler::setReadingSystemAttributes(kdo::ReadingSystemAttributes readingSystemAttributes)
{
    if (not readingSystemAttributes.isValid())
    {
        lastErrorNumber_ = ERROR_INVALID_REQUEST_DATA;
        LOG4CXX_WARN(doHandlerLog, "readingSystemAttributes is not valid");
        return false;
    }

    /*
     * create readingSystemAttributes element from readingSystemAttributes object
     */
    // extended elements are optional (and not supported via this API)
    axutil_array_list_t *readingSystemAttributesChoices = NULL;

    // manufacturer is required
    axis2_char_t *manufacturer = (axis2_char_t*) readingSystemAttributes.getManufacturer().c_str();

    // model is required
    axis2_char_t *model = (axis2_char_t*) readingSystemAttributes.getModel().c_str();

    // serialNumber is optional
    axis2_char_t *serialNumber = NULL;
    if (readingSystemAttributes.getSerialNumber().size() > 0)
        serialNumber = (axis2_char_t*) readingSystemAttributes.getSerialNumber().c_str();

    // version is required
    axis2_char_t *version = (axis2_char_t*) readingSystemAttributes.getVersion().c_str();

    /*
     * create config element from readingSystemAttributes object
     */
    // supportsMultipleSelections is required
    axis2_bool_t supportsMultipleSelections = AXIS2_FALSE;
    if (readingSystemAttributes.getSupportsMultipleSelections())
        supportsMultipleSelections = AXIS2_TRUE;

    // preferredUILanguage is required
    axis2_char_t *preferredUILanguage = (axis2_char_t*) readingSystemAttributes.getPreferredUILanguage().c_str();

    // bandwidth is optional
    int bandwidth = NULL;
    if (readingSystemAttributes.getBandwidth() > 0)
        bandwidth = readingSystemAttributes.getBandwidth();

    // supportedContentFormats is required
    axutil_array_list_t *contentFormats = NULL;
    std::vector<std::string> supportedCF = readingSystemAttributes.getSupportedContentFormats();
    if (supportedCF.size() > 0)
    {
        contentFormats = axutil_array_list_create(env, supportedCF.size());
        for (std::vector<std::string>::iterator it = supportedCF.begin(); it < supportedCF.end(); it++)
        {
            axis2_char_t *contentFormat = (axis2_char_t*) axutil_strdup(env, it->c_str());
            axutil_array_list_add(contentFormats, env, contentFormat);
        }
    }
    adb_supportedContentFormats_type0_t *supportedContentFormats = NULL;
    supportedContentFormats = adb_supportedContentFormats_type0_create_with_values(env, contentFormats);

    // supportedContentProtectionFormats is required
    axutil_array_list_t *protectionFormats = NULL;
    if (readingSystemAttributes.getSupportsContentProtectionFormat())
    {
        protectionFormats = axutil_array_list_create(env, 1);
        adb_protectionFormat_type1_t *protectionFormat = adb_protectionFormat_type1_create(env);
        adb_protectionFormat_type1_set_protectionFormat_type0_enum(protectionFormat, env, PROTECTIONFORMAT_TYPE0_PDTB2);
        axutil_array_list_add(protectionFormats, env, protectionFormat);
    }
    adb_supportedContentProtectionFormats_type0_t *supportedContentProtectionFormats = NULL;
    supportedContentProtectionFormats = adb_supportedContentProtectionFormats_type0_create_with_values(env, protectionFormats);

    // keyRing is optional
    adb_keyRing_type0_t *keyRing = NULL;
    std::vector<std::string> kR = readingSystemAttributes.getKeyRing();
    if (kR.size() > 0)
    {
        axutil_array_list_t *items = axutil_array_list_create(env, kR.size());
        for (std::vector<std::string>::iterator it = kR.begin(); it < kR.end(); it++)
        {
            axis2_char_t *item = (axis2_char_t*) axutil_strdup(env, it->c_str());
            axutil_array_list_add(items, env, item);
        }
        keyRing = adb_keyRing_type0_create_with_values(env, items);
    }

    // supportedMimeTypes is required
    axutil_array_list_t *mimeTypes = NULL;
    std::vector<std::string> supportedMT = readingSystemAttributes.getSupportedMimeTypes();
    if (supportedMT.size() > 0)
    {
        mimeTypes = axutil_array_list_create(env, supportedMT.size());
        for (std::vector<std::string>::iterator it = supportedMT.begin(); it < supportedMT.end(); it++)
        {
            adb_mimeType_type0_t *mimeType = adb_mimeType_type0_create(env);
            axis2_char_t *type = (axis2_char_t*) axutil_strdup(env, it->c_str());
            adb_mimeType_type0_set_type(mimeType, env, type);
            adb_mimeType_type0_set_lang_nil(mimeType, env);
            axutil_array_list_add(mimeTypes, env, mimeType);
        }
    }
    adb_supportedMimeTypes_type0_t *supportedMimeTypes = NULL;
    supportedMimeTypes = adb_supportedMimeTypes_type0_create_with_values(env, mimeTypes);

    // supportedInputTypes is required
    adb_supportedInputTypes_type0_t *supportedInputTypes = NULL;
    supportedInputTypes = adb_supportedInputTypes_type0_create(env);
    if (readingSystemAttributes.isSupportedInputTypes(kdo::ReadingSystemAttributes::TEXT_NUMERIC))
    {
        adb_type_type0_t *type = adb_type_type0_create(env);
        adb_type_type0_set_type_type0_enum(type, env, TYPE_TYPE0_TEXT_NUMERIC);
        adb_input_type0_t *input = adb_input_type0_create_with_values(env, type);
        adb_supportedInputTypes_type0_add_input(supportedInputTypes, env, input);
    }
    if (readingSystemAttributes.isSupportedInputTypes(kdo::ReadingSystemAttributes::TEXT_ALPHANUMERIC))
    {

        adb_type_type0_t *type = adb_type_type0_create(env);
        adb_type_type0_set_type_type0_enum(type, env, TYPE_TYPE0_TEXT_ALPHANUMERIC);
        adb_input_type0_t *input = adb_input_type0_create_with_values(env, type);
        adb_supportedInputTypes_type0_add_input(supportedInputTypes, env, input);
    }
    if (readingSystemAttributes.isSupportedInputTypes(kdo::ReadingSystemAttributes::AUDIO))
    {
        adb_type_type0_t *type = adb_type_type0_create(env);
        adb_type_type0_set_type_type0_enum(type, env, TYPE_TYPE0_AUDIO);
        adb_input_type0_t *input = adb_input_type0_create_with_values(env, type);
        adb_supportedInputTypes_type0_add_input(supportedInputTypes, env, input);
    }

    // requiresAudioLabels is required
    axis2_bool_t requiresAudioLabels = AXIS2_FALSE;
    if (readingSystemAttributes.getRequiresAudioLabels())
        requiresAudioLabels = AXIS2_TRUE;

    // additionalTransferProtocols is optional
    adb_additionalTransferProtocols_type0_t *additionalTransferProtocols = NULL;
    std::vector<std::string> addTP = readingSystemAttributes.getAdditionalTransferProtocols();
    if (addTP.size() > 0)
    {
        axutil_array_list_t *protocols = axutil_array_list_create(env, addTP.size());
        for (std::vector<std::string>::iterator it = addTP.begin(); it < addTP.end(); it++)
        {
            axis2_char_t *protocol = (axis2_char_t*) axutil_strdup(env, it->c_str());
            axutil_array_list_add(protocols, env, protocol);
        }
        additionalTransferProtocols = adb_additionalTransferProtocols_type0_create_with_values(env, protocols);
    }

    /*
     * create with values
     */
    adb_config_type0_t *config = NULL;
    config = adb_config_type0_create_with_values(env,
            supportsMultipleSelections,
            preferredUILanguage,
            bandwidth,
            supportedContentFormats,
            supportedContentProtectionFormats,
            keyRing,
            supportedMimeTypes,
            supportedInputTypes,
            requiresAudioLabels,
            additionalTransferProtocols);

    adb_readingSystemAttributes_type0_t *rSA = NULL;
    rSA = adb_readingSystemAttributes_type0_create_with_values(env,
            readingSystemAttributesChoices,
            manufacturer,
            model,
            serialNumber,
            version,
            config);

    axis2_stub_Kolibre_DaisyOnline_setReadingSystemAttributes_fault fault;

    LOG4CXX_INFO(doHandlerLog, "Sending " << __FUNCTION__ << " request");
    axis2_bool_t setReadingSystemAttributesResult = axis2_stub_op_Kolibre_DaisyOnline_setReadingSystemAttributes(stub, env, rSA, &fault);
    LOG4CXX_INFO(doHandlerLog, "Got " << __FUNCTION__ << " response");

    lastErrorNumber_ = STATUS_SUCCESS;
    if (!good())
    {
        lastErrorNumber_ = env->error->error_number;
        switch (env->error->error_number)
        {
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_SETREADINGSYSTEMATTRIBUTES_FAULT_INTERNALSERVERERRORFAULT:
            parseInternalServerErrorFault(fault.InternalServerErrorFault);
            free(fault.InternalServerErrorFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_SETREADINGSYSTEMATTRIBUTES_FAULT_INVALIDOPERATIONFAULT:
            parseInvalidOperationFault(fault.InvalidOperationFault);
            free(fault.InvalidOperationFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_SETREADINGSYSTEMATTRIBUTES_FAULT_INVALIDPARAMETERFAULT:
            parseInvalidParameterFault(fault.InvalidParameterFault);
            free(fault.InvalidParameterFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_SETREADINGSYSTEMATTRIBUTES_FAULT_NOACTIVESESSIONFAULT:
            parseNoActiveSessionFault(fault.NoActiveSessionFault);
            free(fault.NoActiveSessionFault);
            break;
        };

        LOG4CXX_ERROR(doHandlerLog, __FUNCTION__ << " invoke FAILED with error: " << env->error->error_number << " '" << getStatusMessage() << "'");
        return false;
    }

    // Stubs will take care of freeing memory in wrapped mode
    //adb_readingSystemAttributes_type0_free(rSA, env);
    //rSA = NULL;

    return setReadingSystemAttributesResult == AXIS2_TRUE;
}

/**
 * Invoke getContentList operation
 *
 * Retrieves a list of Content items.
 *
 * @param id The identifier for the content list to retrieve.
 * @param firstItem When retrieving a subset of a contentList, contains the index of the first item in the subset to retrieve. The first item in the list has the index 0.
 * @param lastITem When retrieving a subset of a contentList, contains the index of the last item in the subset to retrieve. The value -1 indicates a request to retrieve all items from firstItem to the end of the list.
 * @return A pointer to the content list or NULL in case or errors.
 */
kdo::ContentList* DaisyOnlineHandler::getContentList(std::string id, int firstItem, int lastItem)
{
    axis2_char_t *id_ = (axis2_char_t*) id.c_str();

    axis2_stub_Kolibre_DaisyOnline_getContentList_fault fault;

    LOG4CXX_INFO(doHandlerLog, "Sending " << __FUNCTION__ << " request");
    adb_contentList_type0_t* contentList = axis2_stub_op_Kolibre_DaisyOnline_getContentList(stub, env, id_, firstItem, lastItem, &fault);
    LOG4CXX_INFO(doHandlerLog, "Got " << __FUNCTION__ << " response");

    lastErrorNumber_ = STATUS_SUCCESS;
    if (!good())
    {
        lastErrorNumber_ = env->error->error_number;
        switch (env->error->error_number)
        {
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTLIST_FAULT_INTERNALSERVERERRORFAULT:
            parseInternalServerErrorFault(fault.InternalServerErrorFault);
            free(fault.InternalServerErrorFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTLIST_FAULT_INVALIDOPERATIONFAULT:
            parseInvalidOperationFault(fault.InvalidOperationFault);
            free(fault.InvalidOperationFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTLIST_FAULT_INVALIDPARAMETERFAULT:
            parseInvalidParameterFault(fault.InvalidParameterFault);
            free(fault.InvalidParameterFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTLIST_FAULT_NOACTIVESESSIONFAULT:
            parseNoActiveSessionFault(fault.NoActiveSessionFault);
            free(fault.NoActiveSessionFault);
            break;
        };

        LOG4CXX_ERROR(doHandlerLog, __FUNCTION__ << " invoke FAILED with error: " << env->error->error_number << " '" << getStatusMessage() << "'");
        return NULL;
    }

    kdo::ContentList* kcontentList = parseContentList(contentList);
    adb_contentList_type0_free(contentList, env);
    return kcontentList;
}

kdo::ContentList* DaisyOnlineHandler::parseContentList(adb_contentList_type0* contentList)
{
    kdo::ContentList* kContentList = new kdo::ContentList();

    // required totalItems
    if (AXIS2_FALSE == adb_contentList_type0_is_totalItems_nil(contentList, env))
    {
        kContentList->setTotalItems(adb_contentList_type0_get_totalItems(contentList, env));
    }
    else
    {
        LOG4CXX_ERROR(doHandlerLog, "Field content list total items is required");
        delete kContentList;
        return NULL;
    }

    // optional firstItem
    if (AXIS2_FALSE == adb_contentList_type0_is_firstItem_nil(contentList, env))
    {
        kContentList->setFirstItem(adb_contentList_type0_get_firstItem(contentList, env));
    }

    // optional lastItem
    if (AXIS2_FALSE == adb_contentList_type0_is_lastItem_nil(contentList, env))
    {
        kContentList->setLastItem(adb_contentList_type0_get_lastItem(contentList, env));
    }

    // required id
    if (AXIS2_FALSE == adb_contentList_type0_is_id_nil(contentList, env))
    {
        kContentList->setId(adb_contentList_type0_get_id(contentList, env));
    }
    else
    {
        LOG4CXX_ERROR(doHandlerLog, "Field content list id is required");
        delete kContentList;
        return NULL;
    }

    // optional label
    if (AXIS2_FALSE == adb_contentList_type0_is_label_nil(contentList, env))
    {
        adb_label_type0_t *label;
        label = adb_contentList_type0_get_label(contentList, env);
        kContentList->setLabel(parseLabel(label));
    }

    // optional contentItem
    if (AXIS2_FALSE == adb_contentList_type0_is_contentItem_nil(contentList, env))
    {
        int count = adb_contentList_type0_sizeof_contentItem(contentList, env);
        std::vector<kdo::ContentItem> contentItems(count);
        for (int i = 0; i < count; i++)
        {
            if (AXIS2_FALSE == adb_contentList_type0_is_contentItem_nil_at(contentList, env, i))
            {
                adb_contentItem_type0_t *contentItem;
                contentItem = adb_contentList_type0_get_contentItem_at(contentList, env, i);
                kdo::ContentItem* item = parseContentItem(contentItem);
                contentItems[i] = *item;
                delete item;
            }
            else
            {
                LOG4CXX_ERROR(doHandlerLog, "Content item is nil in array");
                delete kContentList;
                return NULL;
            }
        }
        kContentList->setContentItems(contentItems);
    }
    return kContentList;
}

kdo::ContentItem* DaisyOnlineHandler::parseContentItem(adb_contentItem_type0* contentItem)
{
    kdo::ContentItem* kContentItem = new kdo::ContentItem();

    // required id
    if (AXIS2_FALSE == adb_contentItem_type0_is_id_nil(contentItem, env))
    {
        kContentItem->setId(adb_contentItem_type0_get_id(contentItem, env));
    }
    else
    {
        LOG4CXX_ERROR(doHandlerLog, "Field content item id is required");
        delete kContentItem;
        return NULL;
    }

    // optional lastModifiedDate
    if (AXIS2_FALSE == adb_contentItem_type0_is_lastModifiedDate_nil(contentItem, env))
    {
        axutil_date_time_t* date_time = adb_contentItem_type0_get_lastModifiedDate(contentItem, env);
        axis2_char_t* date_str = axutil_date_time_serialize_date_time(date_time, env);
        kContentItem->setLastModifiedData(date_str);
        free(date_str);
    }

    // required label
    if (AXIS2_FALSE == adb_contentItem_type0_is_label_nil(contentItem, env))
    {
        adb_label_type0_t *label;
        label = adb_contentItem_type0_get_label(contentItem, env);
        kContentItem->setLabel(parseLabel(label));
    }
    else
    {
        LOG4CXX_ERROR(doHandlerLog, "Field content item label is required");
        delete kContentItem;
        return NULL;
    }
    return kContentItem;
}

/**
 * Invoke getContentMetadata operation
 *
 * Retrieves the contentMetadata of the specified Content item.
 *
 * @param contentId Content Identifier of the Content item for which the metadata is being requested.
 * @return A pointer to the metadata.
 */
kdo::ContentMetadata* DaisyOnlineHandler::getContentMetadata(std::string contentId)
{
    axis2_stub_Kolibre_DaisyOnline_getContentMetadata_fault fault;

    axis2_char_t* content_id = (axis2_char_t*) contentId.c_str();
    LOG4CXX_INFO(doHandlerLog, "Sending " << __FUNCTION__ << " request");
    adb_contentMetadata_type0_t *getContentMetadataResult = axis2_stub_op_Kolibre_DaisyOnline_getContentMetadata(stub, env, content_id, &fault);
    LOG4CXX_INFO(doHandlerLog, "Got " << __FUNCTION__ << " response");

    lastErrorNumber_ = STATUS_SUCCESS;
    if (!good())
    {
        lastErrorNumber_ = env->error->error_number;
        switch (env->error->error_number)
        {
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTMETADATA_FAULT_INTERNALSERVERERRORFAULT:
            parseInternalServerErrorFault(fault.InternalServerErrorFault);
            free(fault.InternalServerErrorFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTMETADATA_FAULT_INVALIDOPERATIONFAULT:
            parseInvalidOperationFault(fault.InvalidOperationFault);
            free(fault.InvalidOperationFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTMETADATA_FAULT_INVALIDPARAMETERFAULT:
            parseInvalidParameterFault(fault.InvalidParameterFault);
            free(fault.InvalidParameterFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTMETADATA_FAULT_NOACTIVESESSIONFAULT:
            parseNoActiveSessionFault(fault.NoActiveSessionFault);
            free(fault.NoActiveSessionFault);
            break;
        };

        LOG4CXX_ERROR(doHandlerLog, __FUNCTION__ << " invoke FAILED with error: " << env->error->error_number << " '" << getStatusMessage() << "'");
        return NULL;
    }

    kdo::ContentMetadata* metaData = parseContentMetaData(getContentMetadataResult);
    adb_contentMetadata_type0_free(getContentMetadataResult, env);
    return metaData;
}

kdo::ContentMetadata* DaisyOnlineHandler::parseContentMetaData(adb_contentMetadata_type0* contentMetadata)
{
    // required requiresReturn
    kdo::ContentMetadata* kContentMetadata = new kdo::ContentMetadata();
    if (AXIS2_FALSE == adb_contentMetadata_type0_is_requiresReturn_nil(contentMetadata, env))
    {
        kContentMetadata->setRequiresReturn(adb_contentMetadata_type0_get_requiresReturn(contentMetadata, env) == AXIS2_TRUE);
    }
    else
    {
        LOG4CXX_ERROR(doHandlerLog, "Field requires return is required");
        return NULL;
    }

    // optional category
    if (AXIS2_FALSE == adb_contentMetadata_type0_is_category_nil(contentMetadata, env))
    {
        std::string category = adb_contentMetadata_type0_get_category(contentMetadata, env);
        kContentMetadata->setCategory(category);
    }

    // optional sample
    if (AXIS2_FALSE == adb_contentMetadata_type0_is_sample_nil(contentMetadata, env))
    {
        adb_sample_type0_t *sample;
        sample = adb_contentMetadata_type0_get_sample(contentMetadata, env);

        // required id
        if (AXIS2_FALSE == adb_sample_type0_is_id_nil(sample, env))
        {
            kContentMetadata->setSample(adb_sample_type0_get_id(sample, env));
        }
        else
        {
            LOG4CXX_ERROR(doHandlerLog, "Field sample id is required");
            return NULL;
        }
    }

    // required metadata
    if (AXIS2_FALSE == adb_contentMetadata_type0_is_metadata_nil(contentMetadata, env))
    {
        adb_metadata_type0_t *metadata;
        metadata = adb_contentMetadata_type0_get_metadata(contentMetadata, env);

        // required title
        if (AXIS2_FALSE == adb_metadata_type0_is_title_nil(metadata, env))
        {
            axiom_node_t* node = adb_metadata_type0_get_title(metadata, env);
            axis2_char_t* node_str = axiom_node_to_string(node, env);
            kContentMetadata->setTitle(node_str);
            free(node_str);
        }
        else
        {
            LOG4CXX_ERROR(doHandlerLog, "Field metadata title is required");
            return NULL;
        }

        // required identifier
        if (AXIS2_FALSE == adb_metadata_type0_is_identifier_nil(metadata, env))
        {
            axiom_node_t* node = adb_metadata_type0_get_identifier(metadata, env);
            axis2_char_t* node_str = axiom_node_to_string(node, env);
            kContentMetadata->setIdentifier(node_str);
            free(node_str);
        }
        else
        {
            LOG4CXX_ERROR(doHandlerLog, "Field metadata identifier is required");
            return NULL;
        }

        // optional publisher
        if (AXIS2_FALSE == adb_metadata_type0_is_publisher_nil(metadata, env))
        {
            axiom_node_t* node = adb_metadata_type0_get_publisher(metadata, env);
            axis2_char_t* node_str = axiom_node_to_string(node, env);
            kContentMetadata->setPublisher(node_str);
            free(node_str);
        }

        // required format
        if (AXIS2_FALSE == adb_metadata_type0_is_format_nil(metadata, env))
        {
            axiom_node_t* node = adb_metadata_type0_get_format(metadata, env);
            axis2_char_t* node_str = axiom_node_to_string(node, env);
            kContentMetadata->setFormat(node_str);
            free(node_str);
        }
        else
        {
            LOG4CXX_ERROR(doHandlerLog, "Field metadata format is required");
            return NULL;
        }

        // optional date
        if (AXIS2_FALSE == adb_metadata_type0_is_date_nil(metadata, env))
        {
            axiom_node_t* node = adb_metadata_type0_get_date(metadata, env);
            axis2_char_t* node_str = axiom_node_to_string(node, env);
            kContentMetadata->setDate(node_str);
            free(node_str);
        }

        // optional source
        if (AXIS2_FALSE == adb_metadata_type0_is_source_nil(metadata, env))
        {
            axiom_node_t* node = adb_metadata_type0_get_source(metadata, env);
            axis2_char_t* node_str = axiom_node_to_string(node, env);
            kContentMetadata->setSource(axiom_node_to_string(node, env));
            free(node_str);
        }

        // optional type
        if (AXIS2_FALSE == adb_metadata_type0_is_type_nil(metadata, env))
        {
            int size = adb_metadata_type0_sizeof_type(metadata, env);
            std::vector<std::string> types(size);
            for (int i = 0; i < size; i++)
            {
                axiom_node_t* node = adb_metadata_type0_get_type_at(metadata, env, i);
                axis2_char_t* node_str = axiom_node_to_string(node, env);
                types[i] = node_str;
                free(node_str);
            }
            kContentMetadata->setTypes(types);
        }

        // optional subject
        if (AXIS2_FALSE == adb_metadata_type0_is_subject_nil(metadata, env))
        {
            int size = adb_metadata_type0_sizeof_subject(metadata, env);
            std::vector<std::string> subjects(size);
            for (int i = 0; i < size; i++)
            {
                axiom_node_t* node = adb_metadata_type0_get_subject_at(metadata, env, i);
                axis2_char_t* node_str = axiom_node_to_string(node, env);
                subjects[i] = node_str;
                free(node_str);
            }
            kContentMetadata->setSubjects(subjects);
        }

        // optional rights
        if (AXIS2_FALSE == adb_metadata_type0_is_rights_nil(metadata, env))
        {
            int size = adb_metadata_type0_sizeof_rights(metadata, env);
            std::vector<std::string> rights(size);
            for (int i = 0; i < size; i++)
            {
                axiom_node_t* node = adb_metadata_type0_get_rights_at(metadata, env, i);
                axis2_char_t* node_str = axiom_node_to_string(node, env);
                rights[i] = node_str;
                free(node_str);
            }
            kContentMetadata->setRights(rights);
        }

        // optional relation
        if (AXIS2_FALSE == adb_metadata_type0_is_relation_nil(metadata, env))
        {
            int size = adb_metadata_type0_sizeof_relation(metadata, env);
            std::vector<std::string> relations(size);
            for (int i = 0; i < size; i++)
            {
                axiom_node_t* node = adb_metadata_type0_get_relation_at(metadata, env, i);
                axis2_char_t* node_str = axiom_node_to_string(node, env);
                relations[i] = node_str;
                free(node_str);
            }
            kContentMetadata->setRelations(relations);
        }

        // optional language
        if (AXIS2_FALSE == adb_metadata_type0_is_language_nil(metadata, env))
        {
            int size = adb_metadata_type0_sizeof_language(metadata, env);
            std::vector<std::string> languages(size);

            for (int i = 0; i < size; i++)
            {
                axiom_node_t* node = adb_metadata_type0_get_language_at(metadata, env, i);
                axis2_char_t* node_str = axiom_node_to_string(node, env);
                languages[i] = node_str;
                free(node_str);
            }
            kContentMetadata->setLanguages(languages);
        }

        // optional description
        if (AXIS2_FALSE == adb_metadata_type0_is_description_nil(metadata, env))
        {
            int size = adb_metadata_type0_sizeof_description(metadata, env);
            std::vector<std::string> description(size);
            for (int i = 0; i < size; i++)
            {
                axiom_node_t* node = adb_metadata_type0_get_description_at(metadata, env, i);
                axis2_char_t* node_str = axiom_node_to_string(node, env);
                description[i] = node_str;
                free(node_str);
            }
            kContentMetadata->setDescription(description);
        }

        // optional creator
        if (AXIS2_FALSE == adb_metadata_type0_is_creator_nil(metadata, env))
        {
            int size = adb_metadata_type0_sizeof_creator(metadata, env);
            std::vector<std::string> creator(size);
            for (int i = 0; i < size; i++)
            {
                axiom_node_t* node = adb_metadata_type0_get_creator_at(metadata, env, i);
                axis2_char_t* node_str = axiom_node_to_string(node, env);
                creator[i] = node_str;
                free(node_str);
            }
            kContentMetadata->setCreator(creator);
        }

        // optional coverage
        if (AXIS2_FALSE == adb_metadata_type0_is_coverage_nil(metadata, env))
        {
            int size = adb_metadata_type0_sizeof_coverage(metadata, env);
            std::vector<std::string> coverage(size);
            for (int i = 0; i < size; i++)
            {
                axiom_node_t* node = adb_metadata_type0_get_coverage_at(metadata, env, i);
                axis2_char_t* node_str = axiom_node_to_string(node, env);
                coverage[i] = node_str;
                free(node_str);
            }
            kContentMetadata->setCoverage(coverage);
        }

        // optional contributor
        if (AXIS2_FALSE == adb_metadata_type0_is_contributor_nil(metadata, env))
        {
            int size = adb_metadata_type0_sizeof_contributor(metadata, env);
            std::vector<std::string> contributor(size);
            for (int i = 0; i < size; i++)
            {
                axiom_node_t* node = adb_metadata_type0_get_contributor_at(metadata, env, i);
                axis2_char_t* node_str = axiom_node_to_string(node, env);
                contributor[i] = node_str;
                free(node_str);
            }
            kContentMetadata->setContributor(contributor);
        }

        // optional narrator
        if (AXIS2_FALSE == adb_metadata_type0_is_narrator_nil(metadata, env))
        {
            int size = adb_metadata_type0_sizeof_narrator(metadata, env);
            std::vector<std::string> narrator(size);
            for (int i = 0; i < size; i++)
            {
                narrator[i] = adb_metadata_type0_get_narrator_at(metadata, env, i);
            }
            kContentMetadata->setNarrator(narrator);
        }

        // required size
        if (AXIS2_FALSE == adb_metadata_type0_is_size_nil(metadata, env))
        {
            kContentMetadata->setSize(adb_metadata_type0_get_size(metadata, env));
        }
        else
        {
            LOG4CXX_ERROR(doHandlerLog, "Field metadata size is required");
            return NULL;
        }

        // optional meta
    }
    else
    {
        LOG4CXX_ERROR(doHandlerLog, "Field metadata is required");
        return NULL;
    }
    return kContentMetadata;
}

/**
 * Invoke issueContent operation
 *
 * Requests a Service to issue the specified Content item.
 *
 * @param contentId The Content Identifier of the content item to be issued.
 * @return A boolean indicating whether the invoke was successful or not.
 */
bool DaisyOnlineHandler::issueContent(std::string contentId)
{
    axis2_char_t *contentId_ = (axis2_char_t*) contentId.c_str();

    axis2_stub_Kolibre_DaisyOnline_issueContent_fault fault;

    LOG4CXX_INFO(doHandlerLog, "Sending " << __FUNCTION__ << " request");
    axis2_bool_t issueContent = axis2_stub_op_Kolibre_DaisyOnline_issueContent(stub, env, contentId_, &fault);
    LOG4CXX_INFO(doHandlerLog, "Got " << __FUNCTION__ << " response");

    lastErrorNumber_ = STATUS_SUCCESS;
    if (!good())
    {
        lastErrorNumber_ = env->error->error_number;
        switch (env->error->error_number)
        {
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_ISSUECONTENT_FAULT_INTERNALSERVERERRORFAULT:
            parseInternalServerErrorFault(fault.InternalServerErrorFault);
            free(fault.InternalServerErrorFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_ISSUECONTENT_FAULT_INVALIDOPERATIONFAULT:
            parseInvalidOperationFault(fault.InvalidOperationFault);
            free(fault.InvalidOperationFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_ISSUECONTENT_FAULT_INVALIDPARAMETERFAULT:
            parseInvalidParameterFault(fault.InvalidParameterFault);
            free(fault.InvalidParameterFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_ISSUECONTENT_FAULT_NOACTIVESESSIONFAULT:
            parseNoActiveSessionFault(fault.NoActiveSessionFault);
            free(fault.NoActiveSessionFault);
            break;
        };

        LOG4CXX_ERROR(doHandlerLog, __FUNCTION__ << " invoke FAILED with error: " << env->error->error_number << " '" << getStatusMessage() << "'");
        return false;
    }

    return issueContent == AXIS2_TRUE;
}

/**
 * Invoke returnContent operation
 *
 * Notifies the Service that the specified Content item has been deleted from the Reading System.
 *
 * @param contentId The Content Identifier of the content item to be returned.
 * @returns A boolean indicating whether the invoke was successful ot not.
 */
bool DaisyOnlineHandler::returnContent(std::string contentId)
{
    axis2_char_t *contentId_ = (axis2_char_t*) contentId.c_str();

    axis2_stub_Kolibre_DaisyOnline_returnContent_fault fault;

    LOG4CXX_INFO(doHandlerLog, "Sending " << __FUNCTION__ << " request");
    axis2_bool_t returnContentResult = axis2_stub_op_Kolibre_DaisyOnline_returnContent(stub, env, contentId_, &fault);
    LOG4CXX_INFO(doHandlerLog, "Got " << __FUNCTION__ << " response");

    lastErrorNumber_ = STATUS_SUCCESS;
    if (!good())
    {
        lastErrorNumber_ = env->error->error_number;
        switch (env->error->error_number)
        {
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_RETURNCONTENT_FAULT_INTERNALSERVERERRORFAULT:
            parseInternalServerErrorFault(fault.InternalServerErrorFault);
            free(fault.InternalServerErrorFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_RETURNCONTENT_FAULT_INVALIDOPERATIONFAULT:
            parseInvalidOperationFault(fault.InvalidOperationFault);
            free(fault.InvalidOperationFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_RETURNCONTENT_FAULT_OPERATIONNOTSUPPORTEDFAULT:
            parseOperationNotSupportedFault(fault.OperationNotSupportedFault);
            free(fault.OperationNotSupportedFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_RETURNCONTENT_FAULT_NOACTIVESESSIONFAULT:
            parseNoActiveSessionFault(fault.NoActiveSessionFault);
            free(fault.NoActiveSessionFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_RETURNCONTENT_FAULT_INVALIDPARAMETERFAULT:
            parseInvalidParameterFault(fault.InvalidParameterFault);
            free(fault.InvalidParameterFault);
            break;
        };

        LOG4CXX_ERROR(doHandlerLog, __FUNCTION__ << " invoke FAILED with error: " << env->error->error_number << " '" << getStatusMessage() << "'");
        return false;
    }

    return returnContentResult == AXIS2_TRUE;
}

/**
 * Invoke getContentResources operation
 *
 * Retrieves the resources list for the specified Content item.
 *
 * @param contentId The Content Identifier of the content item for which the resources should be returned.
 * @return A pointer to the content resources.
 */
kdo::ContentResources* DaisyOnlineHandler::getContentResources(std::string contentId)
{
    axis2_stub_Kolibre_DaisyOnline_getContentResources_fault fault;
    axis2_char_t* id = (axis2_char_t*) contentId.c_str();
    LOG4CXX_INFO(doHandlerLog, "Sending " << __FUNCTION__ << " request");
    adb_resources_type0_t *getContentResourcesResult = axis2_stub_op_Kolibre_DaisyOnline_getContentResources(stub, env, id, &fault);
    LOG4CXX_INFO(doHandlerLog, "Got " << __FUNCTION__ << " response");

    lastErrorNumber_ = STATUS_SUCCESS;
    if (!good())
    {
        lastErrorNumber_ = env->error->error_number;
        switch (env->error->error_number)
        {
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTRESOURCES_FAULT_INTERNALSERVERERRORFAULT:
            parseInternalServerErrorFault(fault.InternalServerErrorFault);
            free(fault.InternalServerErrorFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTRESOURCES_FAULT_INVALIDOPERATIONFAULT:
            parseInvalidOperationFault(fault.InvalidOperationFault);
            free(fault.InvalidOperationFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTRESOURCES_FAULT_INVALIDPARAMETERFAULT:
            parseInvalidParameterFault(fault.InvalidParameterFault);
            free(fault.InvalidParameterFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTRESOURCES_FAULT_NOACTIVESESSIONFAULT:
            parseNoActiveSessionFault(fault.NoActiveSessionFault);
            free(fault.NoActiveSessionFault);
            break;
        };

        LOG4CXX_ERROR(doHandlerLog, __FUNCTION__ << " invoke FAILED with error: " << env->error->error_number << " '" << getStatusMessage() << "'");
        return NULL;
    }

    kdo::ContentResources* contentResources = parseContentResources(getContentResourcesResult);
    adb_resources_type0_free(getContentResourcesResult, env);
    return contentResources;
}

kdo::ContentResources* DaisyOnlineHandler::parseContentResources(adb_resources_type0* resources)
{
    kdo::ContentResources* kContentResources = new kdo::ContentResources();

    // optional returnBy
    if (AXIS2_FALSE == adb_resources_type0_is_returnBy_nil(resources, env))
    {
        axutil_date_time_t* date_time = adb_resources_type0_get_returnBy(resources, env);
        axis2_char_t* date_str = axutil_date_time_serialize_date_time_without_millisecond(date_time, env);
        kContentResources->setReturnBy(date_str);
        free(date_str);
    }

    // optional lastModifiedDate
    if (AXIS2_FALSE == adb_resources_type0_is_lastModifiedDate_nil(resources, env))
    {
        axutil_date_time_t* date_time = adb_resources_type0_get_lastModifiedDate(resources, env);
        axis2_char_t* date_str = axutil_date_time_serialize_date_time_without_millisecond(date_time, env);
        kContentResources->setReturnBy(date_str);
        free(date_str);
    }

    // required resource
    if (AXIS2_FALSE == adb_resources_type0_is_resource_nil(resources, env))
    {
        std::vector<kdo::Resource> kresources;
        int count = adb_resources_type0_sizeof_resource(resources, env);
        for (int i = 0; i < count; i++)
        {
            if (AXIS2_FALSE == adb_resources_type0_is_resource_nil_at(resources, env, i))
            {
                kdo::Resource kresource;
                adb_resource_type0_t *resource;
                resource = adb_resources_type0_get_resource_at(resources, env, i);

                // required uri
                if (AXIS2_FALSE == adb_resource_type0_is_uri_nil(resource, env))
                {
                    axutil_uri_t* uri = adb_resource_type0_get_uri(resource, env);
                    axis2_char_t* uri_str = axutil_uri_to_string(uri, env, AXIS2_URI_UNP_REVEALPASSWORD);
                    kresource.setUri(uri_str);
                    free(uri_str);
                }
                else
                {
                    LOG4CXX_ERROR(doHandlerLog, "Field resource uri size is required");
                    delete kContentResources;
                    return NULL;
                }

                // required mimeType
                if (AXIS2_FALSE == adb_resource_type0_is_mimeType_nil(resource, env))
                {
                    kresource.setMimeType(adb_resource_type0_get_mimeType(resource, env));
                }
                else
                {
                    LOG4CXX_ERROR(doHandlerLog, "Field resource mime type size is required");
                    delete kContentResources;
                    return NULL;
                }

                // required size
                if (AXIS2_FALSE == adb_resource_type0_is_size_nil(resource, env))
                {
                    kresource.setSize(adb_resource_type0_get_size(resource, env));
                }
                else
                {
                    LOG4CXX_ERROR(doHandlerLog, "Field resource size is required");
                    delete kContentResources;
                    return NULL;
                }

                // required localURI
                if (AXIS2_FALSE == adb_resource_type0_is_localURI_nil(resource, env))
                {
                    axutil_uri_t* uri = adb_resource_type0_get_localURI(resource, env);
                    axis2_char_t* uri_str = axutil_uri_to_string(uri, env, AXIS2_URI_UNP_REVEALPASSWORD);
                    kresource.setLocalUri(uri_str);
                    free(uri_str);
                }
                else
                {
                    LOG4CXX_ERROR(doHandlerLog, "Field resource localURI is required");
                    delete kContentResources;
                    return NULL;
                }

                // optional lastModifiedDate
                if (AXIS2_FALSE == adb_resource_type0_is_lastModifiedDate_nil(resource, env))
                {
                    axutil_date_time_t* date_time = adb_resource_type0_get_lastModifiedDate(resource, env);
                    axis2_char_t* date_str = axutil_date_time_serialize_date_time_without_millisecond(date_time, env);
                    kresource.setLastModifiedDate(date_str);
                    free(date_str);
                }
                kresources.push_back(kresource);
            }
        }
        kContentResources->setResouces(kresources);
    }
    else
    {
        LOG4CXX_ERROR(doHandlerLog, "Field resource is required");
        delete kContentResources;
        return NULL;
    }

    return kContentResources;
}

/**
 * Invoke setBookmarks operation
 *
 * Requests that a Service store the supplied bookmarks for a Content item.
 *
 * @param contentId The Content Identifier of the Content item the bookmarks are associated with.
 * @param bookmarkSet Contains the bookmarks to store.
 * @returns A boolean indicating whether the invoke was successful or not.
 */
bool DaisyOnlineHandler::setBookmarks(std::string contentId, kdo::BookmarkSet bookmarkSet)
{
    if (not bookmarkSet.isValid())
    {
        lastErrorNumber_ = ERROR_INVALID_REQUEST_DATA;
        LOG4CXX_WARN(doHandlerLog, "bookmarkSet is not valid");
        return false;
    }

    axis2_char_t *contentId_ = (axis2_char_t*) contentId.c_str();

    /*
     *  build bookmarkSet from input object
     */
    adb_bookmarkSet_type0_t *bmkSet = adb_bookmarkSet_type0_create(env);

    // title is required
    adb_title_type0_t *title = adb_title_type0_create(env);
    axis2_char_t *text = (axis2_char_t*) axutil_strdup(env, bookmarkSet.getTitle().getText().c_str());
    adb_title_type0_set_text(title, env, text);
    free(text);
    if (bookmarkSet.getTitle().hasAudio())
    {
        adb_audio_type1_t *audio;
        LOG4CXX_DEBUG(doHandlerLog, "bookmarkSet title has audio");
        axis2_char_t *srcStr = (axis2_char_t*) axutil_strdup(env, bookmarkSet.getTitle().getAudio().getSrc().c_str());
        axutil_uri_t *src = axutil_uri_parse_string(env, srcStr);
        axis2_char_t *clipBegin = (axis2_char_t*) axutil_strdup(env, bookmarkSet.getTitle().getAudio().getClipBegin().c_str());
        axis2_char_t *clipEnd = (axis2_char_t*) axutil_strdup(env, bookmarkSet.getTitle().getAudio().getClipEnd().c_str());
        audio = adb_audio_type1_create_with_values(env, src, clipBegin, clipEnd);
        adb_title_type0_set_audio(title, env, audio);
        free(srcStr);
        free(clipBegin);
        free(clipEnd);
    }
    adb_bookmarkSet_type0_set_title(bmkSet, env, title);

    // uid is required
    axis2_char_t *uid = (axis2_char_t*) axutil_strdup(env, bookmarkSet.getUid().c_str());
    adb_bookmarkSet_type0_set_uid(bmkSet, env, uid);
    free(uid);

    // lastmark is optional
    if (bookmarkSet.hasLastmark())
    {
        LOG4CXX_DEBUG(doHandlerLog, "bookmarkSet has lastmark");
        adb_bookmarkContent_t *bmkContent;
        axis2_char_t *ncxRefStr = (axis2_char_t*) axutil_strdup(env, bookmarkSet.getLastmark().getNcxRef().c_str());
        axutil_uri_t *ncxRef = axutil_uri_parse_string(env, ncxRefStr);
        axis2_char_t *URIStr = (axis2_char_t*) axutil_strdup(env, bookmarkSet.getLastmark().getURI().c_str());
        axutil_uri_t *URI = axutil_uri_parse_string(env, URIStr);
        adb_bookmarkContentChoice_type0_t* choice = adb_bookmarkContentChoice_type0_create(env);
        if (bookmarkSet.getLastmark().hasTimeOffset())
        {
            adb_bookmarkContentSequence_type0_t *sequence = adb_bookmarkContentSequence_type0_create(env);
            axis2_char_t *timeOffset = (axis2_char_t*) axutil_strdup(env, bookmarkSet.getLastmark().getTimeOffset().c_str());
            adb_bookmarkContentSequence_type0_set_timeOffset(sequence, env, timeOffset);
            free(timeOffset);
            if (bookmarkSet.getLastmark().hasCharOffset())
            {
                adb_bookmarkContentSequence_type0_set_charOffset(sequence, env, bookmarkSet.getLastmark().getCharOffset());
            }
            adb_bookmarkContentChoice_type0_set_bookmarkContentSequence_type0(choice, env, sequence);
        }
        else
        {
            adb_bookmarkContentChoice_type0_set_charOffset(choice, env, bookmarkSet.getLastmark().getCharOffset());
        }
        bmkContent = adb_bookmarkContent_create_with_values(env, ncxRef, URI, choice);
        adb_lastmark_type0_t *lastmark = adb_lastmark_type0_create_with_values(env, bmkContent);
        adb_bookmarkSet_type0_set_lastmark(bmkSet, env, lastmark);
        free(ncxRefStr);
        free(URIStr);
    }

    // choices is optional
    if (bookmarkSet.getChoices().size() > 0)
    {
        axutil_array_list_t *bmkChoices;
        std::vector<kdo::BookmarkChoice> choices = bookmarkSet.getChoices();
        LOG4CXX_DEBUG(doHandlerLog, "bookmarkSet has " << choices.size() << " choices");
        bmkChoices = axutil_array_list_create(env, choices.size());
        for (std::vector<kdo::BookmarkChoice>::iterator it = choices.begin(); it < choices.end(); it++)
        {
            adb_bookmarkSetChoice_type1_t *bmkChoice = adb_bookmarkSetChoice_type1_create(env);
            if (it->isBookmark())
            {
                kdo::Bookmark bookmark = it->getBookmark();
                LOG4CXX_DEBUG(doHandlerLog, "choice is a bookmark");
                adb_bookmark_type0_t *bmk = adb_bookmark_type0_create(env);
                adb_bookmarkContent_t *bmkContent;
                {
                    axis2_char_t *ncxRefStr = (axis2_char_t*) axutil_strdup(env, bookmark.getNcxRef().c_str());
                    axutil_uri_t *ncxRef = axutil_uri_parse_string(env, ncxRefStr);
                    axis2_char_t *URIStr = (axis2_char_t*) axutil_strdup(env, bookmark.getURI().c_str());
                    axutil_uri_t *URI = axutil_uri_parse_string(env, URIStr);
                    adb_bookmarkContentChoice_type0_t* choice = adb_bookmarkContentChoice_type0_create(env);
                    if (bookmark.hasTimeOffset())
                    {
                        adb_bookmarkContentSequence_type0_t *sequence = adb_bookmarkContentSequence_type0_create(env);
                        axis2_char_t *timeOffset = (axis2_char_t*) axutil_strdup(env, bookmark.getTimeOffset().c_str());
                        adb_bookmarkContentSequence_type0_set_timeOffset(sequence, env, timeOffset);
                        free(timeOffset);
                        if (bookmark.hasCharOffset())
                        {
                            adb_bookmarkContentSequence_type0_set_charOffset(sequence, env, bookmark.getCharOffset());
                        }
                        adb_bookmarkContentChoice_type0_set_bookmarkContentSequence_type0(choice, env, sequence);
                    }
                    else
                    {
                        adb_bookmarkContentChoice_type0_set_charOffset(choice, env, bookmark.getCharOffset());
                    }
                    bmkContent = adb_bookmarkContent_create_with_values(env, ncxRef, URI, choice);
                    adb_bookmark_type0_set_bookmarkContent(bmk, env, bmkContent);
                    free(ncxRefStr);
                    free(URIStr);
                }
                if (bookmark.hasNote())
                {
                    adb_note_type0_t *note;
                    LOG4CXX_DEBUG(doHandlerLog, "bookmark has note");
                    note = adb_note_type0_create(env);
                    if (bookmark.getNote().hasText())
                    {
                        adb_noteSequence_type0_t* sequence = adb_noteSequence_type0_create(env);
                        axis2_char_t *text = (axis2_char_t*) axutil_strdup(env, bookmark.getNote().getText().c_str());
                        adb_noteSequence_type0_set_text(sequence, env, text);
                        free(text);
                        if (bookmark.getNote().hasAudio())
                        {
                            adb_audio_type1_t* audio;
                            axis2_char_t *srcStr = (axis2_char_t*) axutil_strdup(env, bookmark.getNote().getAudio().getSrc().c_str());
                            axutil_uri_t *src = axutil_uri_parse_string(env, srcStr);
                            axis2_char_t *clipBegin = (axis2_char_t*) axutil_strdup(env, bookmark.getNote().getAudio().getClipBegin().c_str());
                            axis2_char_t *clipEnd = (axis2_char_t*) axutil_strdup(env, bookmark.getNote().getAudio().getClipEnd().c_str());
                            audio = adb_audio_type1_create_with_values(env, src, clipBegin, clipEnd);
                            adb_noteSequence_type0_set_audio(sequence, env, audio);
                            free(srcStr);
                            free(clipBegin);
                            free(clipEnd);
                        }
                        adb_note_type0_set_noteSequence_type0(note, env, sequence);
                    }
                    else
                    {
                        adb_audio_type1_t* audio;
                        axis2_char_t *srcStr = (axis2_char_t*) axutil_strdup(env, bookmark.getNote().getAudio().getSrc().c_str());
                        axutil_uri_t *src = axutil_uri_parse_string(env, srcStr);
                        axis2_char_t *clipBegin = (axis2_char_t*) axutil_strdup(env, bookmark.getNote().getAudio().getClipBegin().c_str());
                        axis2_char_t *clipEnd = (axis2_char_t*) axutil_strdup(env, bookmark.getNote().getAudio().getClipEnd().c_str());
                        audio = adb_audio_type1_create_with_values(env, src, clipBegin, clipEnd);
                        adb_note_type0_set_audio(note, env, audio);
                        free(srcStr);
                        free(clipBegin);
                        free(clipEnd);
                    }
                    adb_bookmark_type0_set_note(bmk, env, note);
                }
                if (bookmark.hasLabel())
                {
                    axis2_char_t *label = (axis2_char_t*) axutil_strdup(env, bookmark.getLabel().c_str());
                    adb_bookmark_type0_set_label(bmk, env, label);
                    free(label);
                }

                if (bookmark.hasLang())
                {
                    axis2_char_t *langStr = (axis2_char_t*) axutil_strdup(env, bookmark.getLang().c_str());
                    adb_lang_type0_t *lang = adb_lang_type0_create(env);
                    adb_lang_type0_set_language(lang, env, langStr);
                    adb_bookmark_type0_set_lang(bmk, env, lang);
                    free(langStr);
                }
                adb_bookmarkSetChoice_type1_set_bookmark(bmkChoice, env, bmk);
            }
            else
            {
                kdo::Hilite hilite = it->getHilite();
                LOG4CXX_DEBUG(doHandlerLog, "choice is a hilite");
                adb_hilite_type0_t *hlt = adb_hilite_type0_create(env);
                adb_hiliteStart_type0_t *hltStart;
                {
                    adb_hiliteContent_t *hltStartContent;
                    axis2_char_t *ncxRefStr = (axis2_char_t*) axutil_strdup(env, hilite.getHiliteStart().getNcxRef().c_str());
                    axutil_uri_t *ncxRef = axutil_uri_parse_string(env, ncxRefStr);
                    axis2_char_t *URIStr = (axis2_char_t*) axutil_strdup(env, hilite.getHiliteStart().getURI().c_str());
                    axutil_uri_t *URI = axutil_uri_parse_string(env, URIStr);
                    adb_hiliteContentChoice_type0_t* choice = adb_hiliteContentChoice_type0_create(env);
                    if (hilite.getHiliteStart().hasTimeOffset())
                    {
                        adb_hiliteContentSequence_type0_t *sequence = adb_hiliteContentSequence_type0_create(env);
                        axis2_char_t *timeOffset = (axis2_char_t*) axutil_strdup(env, hilite.getHiliteStart().getTimeOffset().c_str());
                        adb_hiliteContentSequence_type0_set_timeOffset(sequence, env, timeOffset);
                        free(timeOffset);
                        if (hilite.getHiliteStart().hasCharOffset())
                        {
                            adb_hiliteContentSequence_type0_set_charOffset(sequence, env, hilite.getHiliteStart().getCharOffset());
                        }
                        adb_hiliteContentChoice_type0_set_hiliteContentSequence_type0(choice, env, sequence);
                    }
                    else
                    {
                        adb_hiliteContentChoice_type0_set_charOffset(choice, env, hilite.getHiliteStart().getCharOffset());
                    }
                    hltStartContent = adb_hiliteContent_create_with_values(env, ncxRef, URI, choice);
                    hltStart = adb_hiliteStart_type0_create_with_values(env, hltStartContent);
                    free(ncxRefStr);
                    free(URIStr);
                }
                adb_hilite_type0_set_hiliteStart(hlt, env, hltStart);
                adb_hiliteEnd_type0_t *hltEnd;
                {
                    adb_hiliteContent_t *hltEndContent;
                    axis2_char_t *ncxRefStr = (axis2_char_t*) axutil_strdup(env, hilite.getHiliteEnd().getNcxRef().c_str());
                    axutil_uri_t *ncxRef = axutil_uri_parse_string(env, ncxRefStr);
                    axis2_char_t *URIStr = (axis2_char_t*) axutil_strdup(env, hilite.getHiliteEnd().getURI().c_str());
                    axutil_uri_t *URI = axutil_uri_parse_string(env, URIStr);
                    adb_hiliteContentChoice_type0_t* choice = adb_hiliteContentChoice_type0_create(env);
                    if (hilite.getHiliteEnd().hasTimeOffset())
                    {
                        adb_hiliteContentSequence_type0_t *sequence = adb_hiliteContentSequence_type0_create(env);
                        axis2_char_t *timeOffset = (axis2_char_t*) axutil_strdup(env, hilite.getHiliteEnd().getTimeOffset().c_str());
                        adb_hiliteContentSequence_type0_set_timeOffset(sequence, env, timeOffset);
                        free(timeOffset);
                        if (hilite.getHiliteEnd().hasCharOffset())
                        {
                            adb_hiliteContentSequence_type0_set_charOffset(sequence, env, hilite.getHiliteEnd().getCharOffset());
                        }
                        adb_hiliteContentChoice_type0_set_hiliteContentSequence_type0(choice, env, sequence);
                    }
                    else
                    {
                        adb_hiliteContentChoice_type0_set_charOffset(choice, env, hilite.getHiliteEnd().getCharOffset());
                    }
                    hltEndContent = adb_hiliteContent_create_with_values(env, ncxRef, URI, choice);
                    hltEnd = adb_hiliteEnd_type0_create_with_values(env, hltEndContent);
                    free(ncxRefStr);
                    free(URIStr);
                }
                adb_hilite_type0_set_hiliteEnd(hlt, env, hltEnd);
                if (hilite.hasNote())
                {
                    LOG4CXX_DEBUG(doHandlerLog, "hilite has note");
                    adb_note_type0_t *note = adb_note_type0_create(env);
                    if (hilite.getNote().hasText())
                    {
                        adb_noteSequence_type0_t* sequence = adb_noteSequence_type0_create(env);
                        axis2_char_t *text = (axis2_char_t*) axutil_strdup(env, hilite.getNote().getText().c_str());
                        adb_noteSequence_type0_set_text(sequence, env, text);
                        free(text);
                        if (hilite.getNote().hasAudio())
                        {
                            adb_audio_type1_t* audio;
                            axis2_char_t *srcStr = (axis2_char_t*) axutil_strdup(env, hilite.getNote().getAudio().getSrc().c_str());
                            axutil_uri_t *src = axutil_uri_parse_string(env, srcStr);
                            axis2_char_t *clipBegin = (axis2_char_t*) axutil_strdup(env, hilite.getNote().getAudio().getClipBegin().c_str());
                            axis2_char_t *clipEnd = (axis2_char_t*) axutil_strdup(env, hilite.getNote().getAudio().getClipEnd().c_str());
                            audio = adb_audio_type1_create_with_values(env, src, clipBegin, clipEnd);
                            adb_noteSequence_type0_set_audio(sequence, env, audio);
                            free(srcStr);
                            free(clipBegin);
                            free(clipEnd);
                        }
                        adb_note_type0_set_noteSequence_type0(note, env, sequence);
                    }
                    else
                    {
                        adb_audio_type1_t* audio;
                        axis2_char_t *srcStr = (axis2_char_t*) axutil_strdup(env, hilite.getNote().getAudio().getSrc().c_str());
                        axutil_uri_t *src = axutil_uri_parse_string(env, srcStr);
                        axis2_char_t *clipBegin = (axis2_char_t*) axutil_strdup(env, hilite.getNote().getAudio().getClipBegin().c_str());
                        axis2_char_t *clipEnd = (axis2_char_t*) axutil_strdup(env, hilite.getNote().getAudio().getClipEnd().c_str());
                        audio = adb_audio_type1_create_with_values(env, src, clipBegin, clipEnd);
                        adb_note_type0_set_audio(note, env, audio);
                        free(srcStr);
                        free(clipBegin);
                        free(clipEnd);
                    }
                    adb_hilite_type0_set_note(hlt, env, note);
                }
                if (hilite.hasLabel())
                {
                    axis2_char_t *label = (axis2_char_t*) axutil_strdup(env, hilite.getLabel().c_str());
                    adb_hilite_type0_set_label(hlt, env, label);
                    free(label);
                }
                adb_bookmarkSetChoice_type1_set_hilite(bmkChoice, env, hlt);
            }
            axutil_array_list_add(bmkChoices, env, bmkChoice);
        }
        adb_bookmarkSet_type0_set_bookmarkSetChoice_type1(bmkSet, env, bmkChoices);
    }

    axis2_stub_Kolibre_DaisyOnline_setBookmarks_fault fault;

    LOG4CXX_INFO(doHandlerLog, "Sending " << __FUNCTION__ << " request");
    axis2_bool_t setBookmarksResult = axis2_stub_op_Kolibre_DaisyOnline_setBookmarks(stub, env, contentId_, bmkSet, &fault);
    LOG4CXX_INFO(doHandlerLog, "Got " << __FUNCTION__ << " response");

    lastErrorNumber_ = STATUS_SUCCESS;
    if (!good())
    {
        lastErrorNumber_ = env->error->error_number;
        switch (env->error->error_number)
        {
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_SETBOOKMARKS_FAULT_INTERNALSERVERERRORFAULT:
            parseInternalServerErrorFault(fault.InternalServerErrorFault);
            free(fault.InternalServerErrorFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_SETBOOKMARKS_FAULT_INVALIDOPERATIONFAULT:
            parseInvalidOperationFault(fault.InvalidOperationFault);
            free(fault.InvalidOperationFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_SETBOOKMARKS_FAULT_OPERATIONNOTSUPPORTEDFAULT:
            parseOperationNotSupportedFault(fault.OperationNotSupportedFault);
            free(fault.OperationNotSupportedFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_SETBOOKMARKS_FAULT_NOACTIVESESSIONFAULT:
            parseNoActiveSessionFault(fault.NoActiveSessionFault);
            free(fault.NoActiveSessionFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_SETBOOKMARKS_FAULT_INVALIDPARAMETERFAULT:
            parseInvalidParameterFault(fault.InvalidParameterFault);
            free(fault.InvalidParameterFault);
            break;
        };

        LOG4CXX_ERROR(doHandlerLog, __FUNCTION__ << " invoke FAILED with error: " << env->error->error_number << " '" << getStatusMessage() << "'");
        return false;
    }

    // Stubs will take care of freeing memory in wrapped mode
    //adb_bookmarkSet_type0_free(bmkSet, env)
    //bmkSet = NULL;

    return setBookmarksResult == AXIS2_TRUE;
}

/**
 * Invoke getBookmarks operation
 *
 * Retrieves the bookmarks for a Content item from a Service.
 *
 * @param contentId The Content Identifier of the Content item the bookmarks are being retrieved for.
 * @return A pointer to the bookmarks.
 */
kdo::BookmarkSet* DaisyOnlineHandler::getBookmarks(std::string contentId)
{
    axis2_char_t *contentId_ = (axis2_char_t*) contentId.c_str();

    axis2_stub_Kolibre_DaisyOnline_getBookmarks_fault fault;

    LOG4CXX_INFO(doHandlerLog, "Sending " << __FUNCTION__ << " request");
    adb_bookmarkSet_type0_t* getBookmarksResult = axis2_stub_op_Kolibre_DaisyOnline_getBookmarks(stub, env, contentId_, &fault);
    LOG4CXX_INFO(doHandlerLog, "Got " << __FUNCTION__ << " response");

    lastErrorNumber_ = STATUS_SUCCESS;
    if (!good())
    {
        lastErrorNumber_ = env->error->error_number;
        switch (env->error->error_number)
        {
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETBOOKMARKS_FAULT_INTERNALSERVERERRORFAULT:
            parseInternalServerErrorFault(fault.InternalServerErrorFault);
            free(fault.InternalServerErrorFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETBOOKMARKS_FAULT_INVALIDOPERATIONFAULT:
            parseInvalidOperationFault(fault.InvalidOperationFault);
            free(fault.InvalidOperationFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETBOOKMARKS_FAULT_OPERATIONNOTSUPPORTEDFAULT:
            parseOperationNotSupportedFault(fault.OperationNotSupportedFault);
            free(fault.OperationNotSupportedFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETBOOKMARKS_FAULT_NOACTIVESESSIONFAULT:
            parseNoActiveSessionFault(fault.NoActiveSessionFault);
            free(fault.NoActiveSessionFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETBOOKMARKS_FAULT_INVALIDPARAMETERFAULT:
            parseInvalidParameterFault(fault.InvalidParameterFault);
            free(fault.InvalidParameterFault);
            break;
        };

        LOG4CXX_ERROR(doHandlerLog, __FUNCTION__ << " invoke FAILED with error: " << env->error->error_number << " '" << getStatusMessage() << "'");
        return NULL;
    }

    kdo::BookmarkSet* bookmarkSet = parseBookmarkSet(getBookmarksResult);
    adb_bookmarkSet_type0_free(getBookmarksResult, env);
    return bookmarkSet;
}

kdo::BookmarkSet* DaisyOnlineHandler::parseBookmarkSet(adb_bookmarkSet_type0* bookmarkSet)
{
    kdo::BookmarkSet* kBookmarkSet = new kdo::BookmarkSet();
    LOG4CXX_DEBUG(doHandlerLog, "Parsing bookmarkSet...");

    // required title
    if (AXIS2_TRUE == adb_bookmarkSet_type0_is_title_nil(bookmarkSet, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "Field title is required")
        return NULL;
    }
    else
    {
        adb_title_type0_t *title = adb_bookmarkSet_type0_get_title(bookmarkSet, env);
        // required title->text
        if (AXIS2_TRUE == adb_title_type0_is_text_nil(title, env))
        {
            LOG4CXX_ERROR(doHandlerLog, "Field title text is required")
            return NULL;
        }
        std::string kText = adb_title_type0_get_text(title, env);
        // optional title->audio
        if (AXIS2_FALSE == adb_title_type0_is_audio_nil(title, env))
        {
            kdo::BookmarkAudio kAudio = parseBookmarkAudio(adb_title_type0_get_audio(title, env));
            kBookmarkSet->setTitle(kdo::BookmarkTitle(kText, kAudio));
        }
        else
        {
            kBookmarkSet->setTitle(kdo::BookmarkTitle(kText));
        }
    }

    // required uid
    if (AXIS2_TRUE == adb_bookmarkSet_type0_is_uid_nil(bookmarkSet, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "Field uid is required")
        return NULL;
    }
    kBookmarkSet->setUid(adb_bookmarkSet_type0_get_uid(bookmarkSet, env));

    // optional lastmark
    if (AXIS2_FALSE == adb_bookmarkSet_type0_is_lastmark_nil(bookmarkSet, env))
    {
        kdo::Lastmark kLastmark = parseLastmark(adb_bookmarkSet_type0_get_lastmark(bookmarkSet, env));
        kBookmarkSet->setLastmark(kLastmark);
    }

    // optional choices
    int count = adb_bookmarkSet_type0_sizeof_bookmarkSetChoice_type1(bookmarkSet, env);
    for (int i = 0; i < count; i++)
    {
        adb_bookmarkSetChoice_type1_t *choice = adb_bookmarkSet_type0_get_bookmarkSetChoice_type1_at(bookmarkSet, env, i);
        if (AXIS2_FALSE == adb_bookmarkSetChoice_type1_is_bookmark_nil(choice, env))
        {
            LOG4CXX_DEBUG(doHandlerLog, "choice nr " << i << " is a bookmark object");
            kdo::Bookmark kBookmark = parseBookmark(adb_bookmarkSetChoice_type1_get_bookmark(choice, env));
            kBookmarkSet->addChoice(kBookmark);
        }
        else if (AXIS2_FALSE == adb_bookmarkSetChoice_type1_is_hilite_nil(choice, env))
        {
            LOG4CXX_DEBUG(doHandlerLog, "choice nr " << i << " is a hilite object");
            kdo::Hilite kHilite = parseHilite(adb_bookmarkSetChoice_type1_get_hilite(choice, env));
            kBookmarkSet->addChoice(kHilite);
        }
        else
        {
            LOG4CXX_ERROR(doHandlerLog, "bookmarkSet contains bookmark or hilite but NULL was returned");
        }
    }

    LOG4CXX_DEBUG(doHandlerLog, "Done parsing bookmarkSet");
    return kBookmarkSet;
}

kdo::BookmarkAudio DaisyOnlineHandler::parseBookmarkAudio(adb_audio_type1* audio)
{
    kdo::BookmarkAudio kAudio;
    LOG4CXX_DEBUG(doHandlerLog, "Parsing bookmark audio...");

    // required src
    if (AXIS2_TRUE == adb_audio_type1_is_src_nil(audio, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "Field audio src is required");
        return kAudio;
    }
    axutil_uri_t *src = adb_audio_type1_get_src(audio, env);
    axis2_char_t *src_str = axutil_uri_to_string(src, env, AXIS2_URI_UNP_REVEALPASSWORD);
    kAudio.setSrc(src_str);
    free(src_str);

    // required clipBegin
    if (AXIS2_TRUE == adb_audio_type1_is_clipBegin_nil(audio, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "Field audio clipBegin is required");
        return kAudio;
    }
    kAudio.setClipBegin(adb_audio_type1_get_clipBegin(audio, env));

    // required clipEnd
    if (AXIS2_TRUE == adb_audio_type1_is_clipEnd_nil(audio, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "Field audio clipEnd is required");
        return kAudio;
    }
    kAudio.setClipEnd(adb_audio_type1_get_clipEnd(audio, env));

    LOG4CXX_DEBUG(doHandlerLog, "Done parsing bookmark audio");
    return kAudio;
}

kdo::BookmarkBase DaisyOnlineHandler::parseBookmarkContent(adb_bookmarkContent* bookmarkContent)
{
    kdo::BookmarkBase kBookmarkBase;
    LOG4CXX_DEBUG(doHandlerLog, "Parsing bookmark content...");

    // required ncxRef
    if (AXIS2_TRUE == adb_bookmarkContent_is_ncxRef_nil(bookmarkContent, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "Field ncxRef is required");
        return kBookmarkBase;
    }
    axutil_uri_t *ncxRef = adb_bookmarkContent_get_ncxRef(bookmarkContent, env);
    axis2_char_t *ncxRef_str = axutil_uri_to_string(ncxRef, env, AXIS2_URI_UNP_REVEALPASSWORD);
    kBookmarkBase.setNcxRef(ncxRef_str);
    free(ncxRef_str);

    // required URI
    if (AXIS2_TRUE == adb_bookmarkContent_is_URI_nil(bookmarkContent, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "Field URI is required");
        return kBookmarkBase;
    }
    axutil_uri_t *URI = adb_bookmarkContent_get_URI(bookmarkContent, env);
    axis2_char_t *URI_str = axutil_uri_to_string(URI, env, AXIS2_URI_UNP_REVEALPASSWORD);
    kBookmarkBase.setURI(URI_str);
    free(URI_str);

    // required timeOffset or charOffset
    if (AXIS2_TRUE == adb_bookmarkContent_is_bookmarkContentChoice_type0_nil(bookmarkContent, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "Field timeOffset or charOffset is required");
        return kBookmarkBase;
    }
    adb_bookmarkContentChoice_type0_t *choice = adb_bookmarkContent_get_bookmarkContentChoice_type0(bookmarkContent, env);
    if (AXIS2_FALSE == adb_bookmarkContentChoice_type0_is_bookmarkContentSequence_type0_nil(choice, env))
    {
        adb_bookmarkContentSequence_type0_t *sequence = adb_bookmarkContentChoice_type0_get_bookmarkContentSequence_type0(choice, env);
        if (AXIS2_TRUE == adb_bookmarkContentSequence_type0_is_timeOffset_nil(sequence, env))
        {
            LOG4CXX_ERROR(doHandlerLog, "bookmark content contains timeOffset but NULL was returned");
            return kBookmarkBase;
        }
        kBookmarkBase.setTimeOffset(adb_bookmarkContentSequence_type0_get_timeOffset(sequence, env));
        if (AXIS2_FALSE == adb_bookmarkContentSequence_type0_is_charOffset_nil(sequence, env))
        {
            kBookmarkBase.setCharOffset(adb_bookmarkContentSequence_type0_get_charOffset(sequence, env));
        }
    }
    else if (AXIS2_FALSE == adb_bookmarkContentChoice_type0_is_charOffset_nil(choice, env))
    {
        kBookmarkBase.setCharOffset(adb_bookmarkContentChoice_type0_get_charOffset(choice, env));
    }
    else
    {
        LOG4CXX_ERROR(doHandlerLog, "bookmark content contains timeOffset or charOffset but NULL was returned");
    }

    LOG4CXX_DEBUG(doHandlerLog, "Done parsing bookmark content");
    return kBookmarkBase;
}

kdo::Lastmark DaisyOnlineHandler::parseLastmark(adb_lastmark_type0* lastmark)
{
    kdo::Lastmark kLastmark;
    LOG4CXX_DEBUG(doHandlerLog, "Parsing lastmark...");

    if (AXIS2_TRUE == adb_lastmark_type0_is_bookmarkContent_nil(lastmark, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "bookmarkSet contains lastmark but NULL was returned");
        return kLastmark;
    }
    kLastmark = kdo::Lastmark(parseBookmarkContent(adb_lastmark_type0_get_bookmarkContent(lastmark, env)));

    LOG4CXX_DEBUG(doHandlerLog, "Done parsing lastmark");
    return kLastmark;
}

kdo::BookmarkNote DaisyOnlineHandler::parseBookmarkNote(adb_note_type0* note)
{
    kdo::BookmarkNote kNote;
    LOG4CXX_DEBUG(doHandlerLog, "Parsing note...");

    // required text or audio
    if (AXIS2_FALSE == adb_note_type0_is_noteSequence_type0_nil(note, env))
    {
        adb_noteSequence_type0_t *sequence = adb_note_type0_get_noteSequence_type0(note, env);
        if (AXIS2_TRUE == adb_noteSequence_type0_is_text_nil(sequence, env))
        {
            LOG4CXX_ERROR(doHandlerLog, "note contains text but NULL was returned");
            return kNote;
        }
        kNote.setText(adb_noteSequence_type0_get_text(sequence, env));
        if (AXIS2_FALSE == adb_noteSequence_type0_is_audio_nil(sequence, env))
        {
            kdo::BookmarkAudio kAudio = parseBookmarkAudio(adb_noteSequence_type0_get_audio(sequence, env));
            kNote.setAudio(kAudio);
        }
    }
    else if (AXIS2_FALSE == adb_note_type0_is_audio_nil(note, env))
    {
        kdo::BookmarkAudio kAudio = parseBookmarkAudio(adb_note_type0_get_audio(note, env));
        kNote.setAudio(kAudio);
    }
    else
    {
        LOG4CXX_ERROR(doHandlerLog, "note contains text or audio but NULL was returned");
    }

    LOG4CXX_DEBUG(doHandlerLog, "Done parsing note");
    return kNote;
}

kdo::Bookmark DaisyOnlineHandler::parseBookmark(adb_bookmark_type0* bookmark)
{
    kdo::Bookmark kBookmark;
    LOG4CXX_DEBUG(doHandlerLog, "Parsing bookmark...");

    if (AXIS2_TRUE == adb_bookmark_type0_is_bookmarkContent_nil(bookmark, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "bookmarkSet contains bookmark but NULL was returned");
        return kBookmark;
    }
    kBookmark = kdo::Bookmark(parseBookmarkContent(adb_bookmark_type0_get_bookmarkContent(bookmark, env)));

    // optional note
    if (AXIS2_FALSE == adb_bookmark_type0_is_note_nil(bookmark, env))
    {
        kdo::BookmarkNote kNote = parseBookmarkNote(adb_bookmark_type0_get_note(bookmark, env));
        kBookmark.setNote(kNote);
    }

    // optional label
    if (AXIS2_FALSE == adb_bookmark_type0_is_label_nil(bookmark, env))
    {
        kBookmark.setLabel(adb_bookmark_type0_get_label(bookmark, env));
    }

    // optional lang
    if (AXIS2_FALSE == adb_bookmark_type0_is_lang_nil(bookmark, env))
    {
        adb_lang_type0_t *lang = adb_bookmark_type0_get_lang(bookmark, env);
        kBookmark.setLang(adb_lang_type0_get_language(lang, env));
    }

    LOG4CXX_DEBUG(doHandlerLog, "Done parsing bookmark");
    return kBookmark;
}

kdo::BookmarkBase DaisyOnlineHandler::parseHiliteContent(adb_hiliteContent* hiliteContent)
{
    kdo::BookmarkBase kBookmarkBase;
    LOG4CXX_DEBUG(doHandlerLog, "Parsing hilite content...");

    // required ncxRef
    if (AXIS2_TRUE == adb_hiliteContent_is_ncxRef_nil(hiliteContent, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "Field ncxRef is required");
        return kBookmarkBase;
    }
    axutil_uri_t *ncxRef = adb_hiliteContent_get_ncxRef(hiliteContent, env);
    axis2_char_t *ncxRef_str = axutil_uri_to_string(ncxRef, env, AXIS2_URI_UNP_REVEALPASSWORD);
    kBookmarkBase.setNcxRef(ncxRef_str);
    free(ncxRef_str);

    // required URI
    if (AXIS2_TRUE == adb_hiliteContent_is_URI_nil(hiliteContent, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "Field URI is required");
        return kBookmarkBase;
    }
    axutil_uri_t *URI = adb_hiliteContent_get_URI(hiliteContent, env);
    axis2_char_t *URI_str = axutil_uri_to_string(URI, env, AXIS2_URI_UNP_REVEALPASSWORD);
    kBookmarkBase.setURI(URI_str);
    free(URI_str);

    // required timeOffset or charOffset
    if (AXIS2_TRUE == adb_hiliteContent_is_hiliteContentChoice_type0_nil(hiliteContent, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "Field timeOffset or charOffset is required");
        return kBookmarkBase;
    }
    adb_hiliteContentChoice_type0_t *choice = adb_hiliteContent_get_hiliteContentChoice_type0(hiliteContent, env);
    if (AXIS2_FALSE == adb_hiliteContentChoice_type0_is_hiliteContentSequence_type0_nil(choice, env))
    {
        adb_hiliteContentSequence_type0_t *sequence = adb_hiliteContentChoice_type0_get_hiliteContentSequence_type0(choice, env);
        if (AXIS2_TRUE == adb_hiliteContentSequence_type0_is_timeOffset_nil(sequence, env))
        {
            LOG4CXX_ERROR(doHandlerLog, "hilite content contains timeOffset but NULL was returned");
            return kBookmarkBase;
        }
        kBookmarkBase.setTimeOffset(adb_hiliteContentSequence_type0_get_timeOffset(sequence, env));
        if (AXIS2_FALSE == adb_hiliteContentSequence_type0_is_charOffset_nil(sequence, env))
        {
            kBookmarkBase.setCharOffset(adb_hiliteContentSequence_type0_get_charOffset(sequence, env));
        }
    }
    else if (AXIS2_FALSE == adb_hiliteContentChoice_type0_is_charOffset_nil(choice, env))
    {
        kBookmarkBase.setCharOffset(adb_hiliteContentChoice_type0_get_charOffset(choice, env));
    }
    else
    {
        LOG4CXX_ERROR(doHandlerLog, "hilite content contains timeOffset or charOffset but NULL was returned");
    }

    LOG4CXX_DEBUG(doHandlerLog, "Done parsing hilite content");
    return kBookmarkBase;
}

kdo::Hilite DaisyOnlineHandler::parseHilite(adb_hilite_type0* hilite)
{
    kdo::Hilite kHilite;
    LOG4CXX_DEBUG(doHandlerLog, "Parsing hilite...");

    // required hiliteStart
    if (AXIS2_TRUE == adb_hilite_type0_is_hiliteStart_nil(hilite, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "Field hiliteStart is required");
        return kHilite;
    }
    adb_hiliteStart_type0_t *hiliteStart = adb_hilite_type0_get_hiliteStart(hilite, env);
    if (AXIS2_TRUE == adb_hiliteStart_type0_is_hiliteContent_nil(hiliteStart, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "hilite contains hiliteStart but NULL was returned");
        return kHilite;
    }
    kdo::HiliteStart kHiliteStart(parseHiliteContent(adb_hiliteStart_type0_get_hiliteContent(hiliteStart, env)));
    kHilite.setHiliteStart(kHiliteStart);

    // required hiliteEnd
    if (AXIS2_TRUE == adb_hilite_type0_is_hiliteEnd_nil(hilite, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "Field hiliteEnd is required");
        return kHilite;
    }
    adb_hiliteEnd_type0_t *hiliteEnd = adb_hilite_type0_get_hiliteEnd(hilite, env);
    if (AXIS2_TRUE == adb_hiliteEnd_type0_is_hiliteContent_nil(hiliteEnd, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "hilite contains hiliteEnd but NULL was returned");
        return kHilite;
    }
    kdo::HiliteEnd kHiliteEnd(parseHiliteContent(adb_hiliteEnd_type0_get_hiliteContent(hiliteEnd, env)));
    kHilite.setHiliteEnd(kHiliteEnd);

    // optional note
    if (AXIS2_FALSE == adb_hilite_type0_is_note_nil(hilite, env))
    {
        kdo::BookmarkNote kNote = parseBookmarkNote(adb_hilite_type0_get_note(hilite, env));
        kHilite.setNote(kNote);
    }

    // optional label
    if (AXIS2_FALSE == adb_hilite_type0_is_label_nil(hilite, env))
    {
        kHilite.setLabel(adb_hilite_type0_get_label(hilite, env));
    }

    LOG4CXX_DEBUG(doHandlerLog, "Done parsing hilite");
    return kHilite;
}

/**
 * Invoke getQuestions operation
 *
 * Retrieves a question from the series of questions that comprise the dynamic menu system.
 *
 * @param reservedQuestionId A string with one of the three reserved IDs 'default', 'search' or 'back'
 * @return A pointer to the questions.
 */
kdo::Questions* DaisyOnlineHandler::getQuestions(std::string reservedQuestionId)
{
    kdo::UserResponse response(reservedQuestionId);
    std::vector<kdo::UserResponse> responses;
    responses.push_back(response);
    return getQuestions(responses);
}

/**
 * Invoke getQuestions operation
 *
 * Retrieves a question from the series of questions that comprise the dynamic menu system.
 *
 * @param reservedQuestionId A vector of user response(s) the previous questions or one of the three reserved IDs 'default', 'search' or 'back'
 * @return A pointer to the questions.
 */
kdo::Questions* DaisyOnlineHandler::getQuestions(std::vector<kdo::UserResponse> responses)
{
    if (responses.size() == 0)
    {
        lastErrorNumber_ = ERROR_INVALID_REQUEST_DATA;
        LOG4CXX_WARN(doHandlerLog, "vector must contain at least one userResponse");
        return new kdo::Questions;
    }

    /*
     * create userResponses
     */
    adb_userResponses_type0_t *userResponses = adb_userResponses_type0_create(env);
    axutil_array_list_t *userResponse = NULL;
    bool incompleteRequest = false;

    // loop through responses and see if a reserved questionID is present
    for (std::vector<kdo::UserResponse>::iterator it = responses.begin(); it < responses.end(); it++)
    {
        if (it->getQuestionID() == "default" || it->getQuestionID() == "search" || it->getQuestionID() == "back")
        {
            userResponse = axutil_array_list_create(env, 1);
            adb_userResponse_type0_t *response = adb_userResponse_type0_create(env);
            axis2_char_t *questionID = (axis2_char_t*) axutil_strdup(env, it->getQuestionID().c_str());
            adb_userResponse_type0_set_questionID(response, env, questionID);
            free(questionID);
            axutil_array_list_add(userResponse, env, response);
            break;
        }
    }

    // loop through responses
    if (userResponse == NULL)
    {
        userResponse = axutil_array_list_create(env, responses.size());
        for (std::vector<kdo::UserResponse>::iterator it = responses.begin(); it < responses.end(); it++)
        {
            if (it->isValid())
            {
                adb_userResponse_type0_t *response = adb_userResponse_type0_create(env);
                axis2_char_t *questionID = (axis2_char_t*) axutil_strdup(env, it->getQuestionID().c_str());
                adb_userResponse_type0_set_questionID(response, env, questionID);
                free(questionID);
                if (it->hasValue())
                {
                    axis2_char_t *value = (axis2_char_t*) axutil_strdup(env, it->getValue().c_str());
                    adb_userResponse_type0_set_value(response, env, value);
                    free(value);
                }
                else
                {
                    axutil_base64_binary_t *base64 = axutil_base64_binary_create_with_plain_binary(env, (unsigned char*) it->getData().c_str(), it->getData().size());
                    adb_data_type1_t *data = adb_data_type1_create_with_values(env, base64);
                    adb_userResponse_type0_set_data(response, env, data);
                }
                axutil_array_list_add(userResponse, env, response);
            }
            else
            {
                incompleteRequest = true;
            }
        }
    }
    adb_userResponses_type0_set_userResponse(userResponses, env, userResponse);

    if (incompleteRequest)
    {
        lastErrorNumber_ = ERROR_INVALID_REQUEST_DATA;
        LOG4CXX_WARN(doHandlerLog, "userResponse is not valid");
        return new kdo::Questions;
    }

    axis2_stub_Kolibre_DaisyOnline_getQuestions_fault fault;

    LOG4CXX_INFO(doHandlerLog, "Sending " << __FUNCTION__ << " request");
    adb_questions_type0_t* getQuestionsResult = axis2_stub_op_Kolibre_DaisyOnline_getQuestions(stub, env, userResponses, &fault);
    LOG4CXX_INFO(doHandlerLog, "Got " << __FUNCTION__ << " response");

    lastErrorNumber_ = STATUS_SUCCESS;
    if (!good())
    {
        lastErrorNumber_ = env->error->error_number;
        switch (env->error->error_number)
        {
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETQUESTIONS_FAULT_INTERNALSERVERERRORFAULT:
            parseInternalServerErrorFault(fault.InternalServerErrorFault);
            free(fault.InternalServerErrorFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETQUESTIONS_FAULT_INVALIDOPERATIONFAULT:
            parseInvalidOperationFault(fault.InvalidOperationFault);
            free(fault.InvalidOperationFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETQUESTIONS_FAULT_OPERATIONNOTSUPPORTEDFAULT:
            parseOperationNotSupportedFault(fault.OperationNotSupportedFault);
            free(fault.OperationNotSupportedFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETQUESTIONS_FAULT_NOACTIVESESSIONFAULT:
            parseNoActiveSessionFault(fault.NoActiveSessionFault);
            free(fault.NoActiveSessionFault);
            break;
        case AXIS2_STUB_KOLIBRE_DAISYONLINE_GETQUESTIONS_FAULT_INVALIDPARAMETERFAULT:
            parseInvalidParameterFault(fault.InvalidParameterFault);
            free(fault.InvalidParameterFault);
            break;
        };

        LOG4CXX_ERROR(doHandlerLog, __FUNCTION__ << " invoke FAILED with error: " << env->error->error_number << " '" << getStatusMessage() << "'");
        return NULL;
    }

    // Stubs will take care of freeing memory in wrapped mode
    //adb_userResponses_type0_free(userResponses, env)
    //userResponses = NULL;

    kdo::Questions* questions = parseQuestions(getQuestionsResult);
    adb_questions_type0_free(getQuestionsResult, env);
    return questions;
}

kdo::Questions* DaisyOnlineHandler::parseQuestions(adb_questions_type0* getQuestionsResult)
{
    kdo::Questions* kQuestions = NULL;
    LOG4CXX_DEBUG(doHandlerLog, "Parsing questions...");

    // required contentListRef, label or choice
    if (AXIS2_FALSE == adb_questions_type0_is_contentListRef_nil(getQuestionsResult, env))
    {
        LOG4CXX_DEBUG(doHandlerLog, "questions is a content list reference object");
        kQuestions = new kdo::Questions(adb_questions_type0_get_contentListRef(getQuestionsResult, env));
    }
    else if (AXIS2_FALSE == adb_questions_type0_is_label_nil(getQuestionsResult, env))
    {
        LOG4CXX_DEBUG(doHandlerLog, "questions is a label object");
        kdo::Label kLabel = parseLabel(adb_questions_type0_get_label(getQuestionsResult, env));
        kQuestions = new kdo::Questions(kLabel);
    }
    else if (AXIS2_FALSE == adb_questions_type0_is_questionsChoice_type1_nil(getQuestionsResult, env))
    {
        kQuestions = new kdo::Questions();
        int count = adb_questions_type0_sizeof_questionsChoice_type1(getQuestionsResult, env);
        for (int i = 0; i < count; i++)
        {
            adb_questionsChoice_type1_t *choice = adb_questions_type0_get_questionsChoice_type1_at(getQuestionsResult, env, i);
            if (AXIS2_FALSE == adb_questionsChoice_type1_is_multipleChoiceQuestion_nil(choice, env))
            {
                LOG4CXX_DEBUG(doHandlerLog, "choice nr " << i << " is a multipleChoiceQuestion object");
                kdo::MultipleChoiceQuestion kMultiple = parseMultipleChoiceQuestion(adb_questionsChoice_type1_get_multipleChoiceQuestion(choice, env));
                kQuestions->addQuestion(kMultiple);
            }
            else if (AXIS2_FALSE == adb_questionsChoice_type1_is_inputQuestion_nil(choice, env))
            {
                LOG4CXX_DEBUG(doHandlerLog, "choice nr " << i << " is a inputQuestion object");
                kdo::InputQuestion kInput = parseInputQuestion(adb_questionsChoice_type1_get_inputQuestion(choice, env));
                kQuestions->addQuestion(kInput);
            }
            else
            {
                LOG4CXX_ERROR(doHandlerLog, "questions contains multipleChoiceQuestion or inputQuestion but NULL was returned");
            }
        }
    }
    else
    {
        LOG4CXX_ERROR(doHandlerLog, "Field contentList, label, multipleChoiceQuestion or inputQuestion is required");
    }

    LOG4CXX_DEBUG(doHandlerLog, "Done parsing questions");
    return kQuestions;
}

kdo::MultipleChoiceQuestion DaisyOnlineHandler::parseMultipleChoiceQuestion(adb_multipleChoiceQuestion_type0* multiple)
{
    kdo::MultipleChoiceQuestion kMultiple = kdo::MultipleChoiceQuestion();
    LOG4CXX_DEBUG(doHandlerLog, "Parsing multipleChoiceQuestion...");

    // required label
    if (AXIS2_TRUE == adb_multipleChoiceQuestion_type0_is_label_nil(multiple, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "Field label is required");
        return kMultiple;
    }
    kdo::Label kLabel = parseLabel(adb_multipleChoiceQuestion_type0_get_label(multiple, env));
    kMultiple.setLabel(kLabel);

    // required choices
    if (AXIS2_TRUE == adb_multipleChoiceQuestion_type0_is_choices_nil(multiple, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "Field choices is required");
        return kMultiple;
    }
    adb_choices_type0_t *choices = adb_multipleChoiceQuestion_type0_get_choices(multiple, env);
    if (AXIS2_TRUE == adb_choices_type0_is_choice_nil(choices, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "Field choice is required");
        return kMultiple;
    }
    int count = adb_choices_type0_sizeof_choice(choices, env);
    for (int i = 0; i < count; i++)
    {
        adb_choice_type0_t *choice = adb_choices_type0_get_choice_at(choices, env, i);

        // required label
        if (AXIS2_TRUE == adb_choice_type0_is_label_nil(choice, env))
        {
            LOG4CXX_ERROR(doHandlerLog, "Field label is required for choice nr " << i);
            return kMultiple;
        }
        kdo::Label kLabel = parseLabel(adb_choice_type0_get_label(choice, env));

        // required id
        if (AXIS2_TRUE == adb_choice_type0_is_id_nil(choice, env))
        {
            LOG4CXX_ERROR(doHandlerLog, "Attribute id is required for choice nr " << i);
            return kMultiple;
        }
        axis2_char_t *id = adb_choice_type0_get_id(choice, env);

        kdo::Choice kChoice(kLabel, id);
        kMultiple.addChoice(kChoice);
    }

    // required id
    if (AXIS2_TRUE == adb_multipleChoiceQuestion_type0_is_id_nil(multiple, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "Attribute is required");
        return kMultiple;
    }
    kMultiple.setId(adb_multipleChoiceQuestion_type0_get_id(multiple, env));

    // optional allowMultipleSelections
    if (AXIS2_FALSE == adb_multipleChoiceQuestion_type0_is_allowMultipleSelections_nil(multiple, env))
    {
        if (AXIS2_TRUE == adb_multipleChoiceQuestion_type0_get_allowMultipleSelections(multiple, env))
        {
            kMultiple.setAllowMultipleSelections(true);
        }
    }

    LOG4CXX_DEBUG(doHandlerLog, "Done parsing multipleChoiceQuestion");
    return kMultiple;
}

kdo::InputQuestion DaisyOnlineHandler::parseInputQuestion(adb_inputQuestion_type0* input)
{
    kdo::InputQuestion kInput = kdo::InputQuestion();
    LOG4CXX_DEBUG(doHandlerLog, "Parsing inputQuestion...");

    // required inputTypes
    if (AXIS2_TRUE == adb_inputQuestion_type0_is_inputTypes_nil(input, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "Field inputTypes is required");
        return kInput;
    }
    adb_inputTypes_type0_t *inputTypes = adb_inputQuestion_type0_get_inputTypes(input, env);
    if (AXIS2_TRUE == adb_inputTypes_type0_is_input_nil(inputTypes, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "Field input is required");
        return kInput;
    }
    int count = adb_inputTypes_type0_sizeof_input(inputTypes, env);
    for (int i = 0; i < count; i++)
    {
        adb_input_type0_t *inputType = adb_inputTypes_type0_get_input_at(inputTypes, env, i);
        if (AXIS2_TRUE == adb_input_type0_is_type_nil(inputType, env))
        {
            LOG4CXX_ERROR(doHandlerLog, "Attribute type is required");
            return kInput;
        }
        adb_type_type0_t *type = adb_input_type0_get_type(inputType, env);
        if (TYPE_TYPE0_TEXT_NUMERIC == adb_type_type0_get_type_type0_enum(type, env))
        {
            kInput.addInputType(kdo::InputQuestion::TEXT_NUMERIC);
        }
        if (TYPE_TYPE0_TEXT_ALPHANUMERIC == adb_type_type0_get_type_type0_enum(type, env))
        {
            kInput.addInputType(kdo::InputQuestion::TEXT_ALPHANUMERIC);
        }
        if (TYPE_TYPE0_AUDIO == adb_type_type0_get_type_type0_enum(type, env))
        {
            kInput.addInputType(kdo::InputQuestion::AUDIO);
        }
    }

    // required label
    if (AXIS2_TRUE == adb_inputQuestion_type0_is_label_nil(input, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "Field label is required");
        return kInput;
    }
    kdo::Label kLabel = parseLabel(adb_inputQuestion_type0_get_label(input, env));
    kInput.setLabel(kLabel);

    // required id
    if (AXIS2_TRUE == adb_inputQuestion_type0_is_id_nil(input, env))
    {
        LOG4CXX_ERROR(doHandlerLog, "Attribute id is required");
        return kInput;
    }
    kInput.setId(adb_inputQuestion_type0_get_id(input, env));

    LOG4CXX_DEBUG(doHandlerLog, "Done parsing inputQuestion");
    return kInput;
}

/**
 * A method to check if the last function call was successful.
 *
 * @return A boolean indicating of the last function call was successful or not.
 */
bool DaisyOnlineHandler::good()
{
    if (env == NULL || stub == NULL)
    {
        LOG4CXX_ERROR(doHandlerLog, "DaisyOnlineHandler is uninitialized!");
        return false;
    }

    if (axutil_env_check_status(env) == AXIS2_SUCCESS)
    {
        return true;
    }

    switch (env->error->error_number)
    {
    // Ignoring the following errors
    case AXIS2_ERROR_INVALID_HTTP_HEADER_START_LINE:
    case AXIS2_ERROR_INVALID_NULL_PARAM:
        LOG4CXX_ERROR(doHandlerLog, "Ignoring error since it does not affect behaviour. Error code: " << env->error->error_number << " '" << getStatusMessage() << "'");
        return true;
    case AXIS2_STUB_KOLIBRE_DAISYONLINE_ERROR_NONE:
        return true;
    };

    return false;
}

void DaisyOnlineHandler::parseInternalServerErrorFault(adb_internalServerErrorFault* fault)
{
    // reset lastSoapFaultReason
    lastSoapFaultReason_ = "";

    // store error_number and status_code as they will be overwritten
    const int error_number = env->error->error_number;
    const int status_code = env->error->status_code;

    if (AXIS2_FALSE == adb_internalServerErrorFault_is_internalServerErrorFault_nil(fault, env))
    {
        adb_internalServerErrorFaultType_t *faultType = adb_internalServerErrorFault_get_internalServerErrorFault(fault, env);
        if (AXIS2_FALSE == adb_internalServerErrorFaultType_is_reason_nil(faultType, env))
        {
            lastSoapFaultReason_ = adb_internalServerErrorFaultType_get_reason(faultType, env);
        }
    }

    // restore error_number and status_code
    env->error->error_number = error_number;
    env->error->status_code = status_code;
}

void DaisyOnlineHandler::parseInvalidOperationFault(adb_invalidOperationFault* fault)
{
    // reset lastSoapFaultReason
    lastSoapFaultReason_ = "";

    // store error_number and status_code as they will be overwritten
    const int error_number = env->error->error_number;
    const int status_code = env->error->status_code;

    if (AXIS2_FALSE == adb_invalidOperationFault_is_invalidOperationFault_nil(fault, env))
    {
        adb_invalidOperationFaultType_t *faultType = adb_invalidOperationFault_get_invalidOperationFault(fault, env);
        if (AXIS2_FALSE == adb_invalidOperationFaultType_is_reason_nil(faultType, env))
        {
            lastSoapFaultReason_ = adb_invalidOperationFaultType_get_reason(faultType, env);
        }
    }

    // restore error_number and status_code
    env->error->error_number = error_number;
    env->error->status_code = status_code;
}

void DaisyOnlineHandler::parseInvalidParameterFault(adb_invalidParameterFault* fault)
{
    // reset lastSoapFaultReason
    lastSoapFaultReason_ = "";

    // store error_number and status_code as they will be overwritten
    const int error_number = env->error->error_number;
    const int status_code = env->error->status_code;

    if (AXIS2_FALSE == adb_invalidParameterFault_is_invalidParameterFault_nil(fault, env))
    {
        adb_invalidParameterFaultType_t *faultType = adb_invalidParameterFault_get_invalidParameterFault(fault, env);
        if (AXIS2_FALSE == adb_invalidParameterFaultType_is_reason_nil(faultType, env))
        {
            lastSoapFaultReason_ = adb_invalidParameterFaultType_get_reason(faultType, env);
        }
    }

    // restore error_number and status_code
    env->error->error_number = error_number;
    env->error->status_code = status_code;
}

void DaisyOnlineHandler::parseNoActiveSessionFault(adb_noActiveSessionFault* fault)
{
    // reset lastSoapFaultReason
    lastSoapFaultReason_ = "";

    // store error_number and status_code as they will be overwritten
    const int error_number = env->error->error_number;
    const int status_code = env->error->status_code;

    if (AXIS2_FALSE == adb_noActiveSessionFault_is_noActiveSessionFault_nil(fault, env))
    {
        adb_noActiveSessionFaultType_t *faultType = adb_noActiveSessionFault_get_noActiveSessionFault(fault, env);
        if (AXIS2_FALSE == adb_noActiveSessionFaultType_is_reason_nil(faultType, env))
        {
            lastSoapFaultReason_ = adb_noActiveSessionFaultType_get_reason(faultType, env);
        }
    }

    // restore error_number and status_code
    env->error->error_number = error_number;
    env->error->status_code = status_code;
}

void DaisyOnlineHandler::parseOperationNotSupportedFault(adb_operationNotSupportedFault* fault)
{
    // reset lastSoapFaultReason
    lastSoapFaultReason_ = "";

    // store error_number and status_code as they will be overwritten
    const int error_number = env->error->error_number;
    const int status_code = env->error->status_code;

    if (AXIS2_FALSE == adb_operationNotSupportedFault_is_operationNotSupportedFault_nil(fault, env))
    {
        adb_operationNotSupportedFaultType_t *faultType = adb_operationNotSupportedFault_get_operationNotSupportedFault(fault, env);
        if (AXIS2_FALSE == adb_operationNotSupportedFaultType_is_reason_nil(faultType, env))
        {
            lastSoapFaultReason_ = adb_operationNotSupportedFaultType_get_reason(faultType, env);
        }
    }

    // restore error_number and status_code
    env->error->error_number = error_number;
    env->error->status_code = status_code;
}

/**
 * Gets called by axis2 when it is time to free the env->log.
 */
void AXIS2_CALL
axis_log_ops_free(axutil_allocator_t * allocator, struct axutil_log * log)
{
    LOG4CXX_WARN(doHandlerLog, "axis_log_ops_free() Not implemented");
}

/**
 * Call back for axis2 log functions. Messages get forwarded to LOG4CXX
 */
void AXIS2_CALL
axis_log_ops_write(axutil_log_t * log, const axis2_char_t * buffer, axutil_log_levels_t level, const axis2_char_t * file, const int line)
{
    // Log levels from LOG4CXX in order smallest -> largest
    // TRACE, DEBUG, INFO, WARN, ERROR, FATAL
    log4cxx::LevelPtr log4cxx_level;

    // No use in logging empty message
    if (buffer == NULL)
        return;

    // Ensure file is not a NULL pointer
    std::string filename;
    if (file == NULL)
        filename = std::string("unknown");
    else
        filename = std::string(file);

    switch (level)
    {
    /** Critical level, logs only critical errors */
    case AXIS2_LOG_LEVEL_CRITICAL:
        log4cxx_level = log4cxx::Level::getFatal();
        break;

        /** Error level, logs only errors */
    case AXIS2_LOG_LEVEL_ERROR:
        log4cxx_level = log4cxx::Level::getError();
        break;

        /** Warning level, logs only warnings */
    case AXIS2_LOG_LEVEL_WARNING:
        log4cxx_level = log4cxx::Level::getWarn();
        break;

        /** Info level, logs information */
    case AXIS2_LOG_LEVEL_INFO:
        log4cxx_level = log4cxx::Level::getInfo();
        break;

        /** Debug level, logs everything */
    case AXIS2_LOG_LEVEL_DEBUG:
        log4cxx_level = log4cxx::Level::getDebug();
        break;

        /** User level, logs only user level debug messages */
    case AXIS2_LOG_LEVEL_USER:
        log4cxx_level = log4cxx::Level::getDebug();
        break;

        /** Trace level, Enable with compiler time option AXIS2_TRACE */
    case AXIS2_LOG_LEVEL_TRACE:
        log4cxx_level = log4cxx::Level::getTrace();
        break;
    }

    // Note: The LOG4CXX_* macros have been expanded below. Edit with care!!!
    if (doAxisLog->isEnabledFor(log4cxx_level))
    {
        ::log4cxx::helpers::MessageBuffer oss_;
        doAxisLog->forcedLog(log4cxx_level, oss_.str(oss_ << buffer), AXIS2_LOCATION(filename.c_str(), line));
    }
}
