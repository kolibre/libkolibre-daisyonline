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



        /**
         * axis2_extension_mapper.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/Java version: 1.6.2  Built on : Nov 05, 2013 (09:21:13 EET)
         */

        #include "axis2_extension_mapper.h"

        #include "adb_operation_type1.h"
        #include "adb_label_type0.h"
        #include "adb_contentItem_type0.h"
        #include "adb_metadata_type0.h"
        #include "adb_EncryptedDataType.h"
        #include "adb_hiliteEnd_type0.h"
        #include "adb_audio_type1.h"
        #include "adb_EncryptionPropertyType.h"
        #include "adb_ReferenceList_type0.h"
        #include "adb_userResponses_type0.h"
        #include "adb_announcements_type0.h"
        #include "adb_KeyExchange_type0.h"
        #include "adb_hilite_type0.h"
        #include "adb_PGPDataType.h"
        #include "adb_choices_type0.h"
        #include "adb_SignatureType.h"
        #include "adb_noActiveSessionFaultType.h"
        #include "adb_sample_type0.h"
        #include "adb_choice_type0.h"
        #include "adb_meta_type0.h"
        #include "adb_resources_type0.h"
        #include "adb_SignaturePropertiesType.h"
        #include "adb_service_type0.h"
        #include "adb_SimpleLiteral.h"
        #include "adb_X509IssuerSerialType.h"
        #include "adb_DSAKeyValueType.h"
        #include "adb_data_type1.h"
        #include "adb_supportedMimeTypes_type0.h"
        #include "adb_KeyValueType.h"
        #include "adb_ReferenceType.h"
        #include "adb_userResponse_type0.h"
        #include "adb_hiliteStart_type0.h"
        #include "adb_bookmarkSet_type0.h"
        #include "adb_CryptoBinary.h"
        #include "adb_SPKIDataType.h"
        #include "adb_CanonicalizationMethodType.h"
        #include "adb_AgreementMethodType.h"
        #include "adb_EncryptionMethodType.h"
        #include "adb_announcement_type0.h"
        #include "adb_supportedContentSelectionMethods_type0.h"
        #include "adb_CipherReferenceType.h"
        #include "adb_X509DataType.h"
        #include "adb_priority_type0.h"
        #include "adb_TransformsType.h"
        #include "adb_readingSystemAttributes_type0.h"
        #include "adb_read_type0.h"
        #include "adb_input_type0.h"
        #include "adb_KeyPairType.h"
        #include "adb_additionalTransferProtocols_type0.h"
        #include "adb_method_type1.h"
        #include "adb_contentMetadata_type0.h"
        #include "adb_invalidParameterFaultType.h"
        #include "adb_inputTypes_type0.h"
        #include "adb_IssuerType.h"
        #include "adb_KeysType.h"
        #include "adb_protectionFormat_type1.h"
        #include "adb_multipleChoiceQuestion_type0.h"
        #include "adb_invalidOperationFaultType.h"
        #include "adb_supportedOptionalOperations_type0.h"
        #include "adb_RSAKeyValueType.h"
        #include "adb_lang_type0.h"
        #include "adb_type_type1.h"
        #include "adb_type_type0.h"
        #include "adb_lastmark_type0.h"
        #include "adb_SignedInfoType.h"
        #include "adb_operationNotSupportedFaultType.h"
        #include "adb_title_type0.h"
        #include "adb_resource_type0.h"
        #include "adb_bookmark_type0.h"
        #include "adb_SignatureMethodType.h"
        #include "adb_TransformType.h"
        #include "adb_RetrievalMethodType.h"
        #include "adb_SignaturePropertyType.h"
        #include "adb_inputQuestion_type0.h"
        #include "adb_DigestValueType.h"
        #include "adb_contentList_type0.h"
        #include "adb_EncryptedKeyType.h"
        #include "adb_ReferenceType.h"
        #include "adb_KeyInfoType.h"
        #include "adb_supportedContentFormats_type0.h"
        #include "adb_serviceAttributes_type0.h"
        #include "adb_serviceProvider_type0.h"
        #include "adb_DigestMethodType.h"
        #include "adb_UAKType.h"
        #include "adb_SignatureValueType.h"
        #include "adb_operation_type1.h"
        #include "adb_ManifestType.h"
        #include "adb_supportedInputTypes_type0.h"
        #include "adb_HMACOutputLengthType.h"
        #include "adb_keyRing_type0.h"
        #include "adb_EncryptionPropertiesType.h"
        #include "adb_supportedContentProtectionFormats_type0.h"
        #include "adb_TransformsType.h"
        #include "adb_CipherDataType.h"
        #include "adb_EncryptedType.h"
        #include "adb_mimeType_type0.h"
        #include "adb_note_type0.h"
        #include "adb_dir_type0.h"
        #include "adb_internalServerErrorFaultType.h"
        #include "adb_KeySizeType.h"
        #include "adb_config_type0.h"
        #include "adb_questions_type0.h"
        #include "adb_audio_type0.h"
        #include "adb_supportedUplinkAudioCodecs_type0.h"
        #include "adb_IdString.h"
        #include "adb_ObjectType.h"
        #include "adb_bookmarkContent.h"
        #include "adb_bookmarkContentChoice_type0.h"
        #include "adb_bookmarkContentSequence_type0.h"
        #include "adb_bookmarkSetChoice_type1.h"
        #include "adb_hiliteContent.h"
        #include "adb_hiliteContentChoice_type0.h"
        #include "adb_hiliteContentSequence_type0.h"
        #include "adb_noteSequence_type0.h"
        

        struct adb_type
        {
            axis2_char_t *property_TypeName;
        };

        /**
         * Auxiliary function to determine an ADB object type from its Axiom node.
         * @param env pointer to environment struct
         * @param node double pointer to the parent node to deserialize
         * @return type name on success, else NULL
         */
        axis2_char_t *AXIS2_CALL
        axis2_extension_mapper_type_from_node(
            const axutil_env_t *env,
            axiom_node_t** node)
        {
            axiom_node_t *parent = *node;
            axutil_qname_t *element_qname = NULL;
            axiom_element_t *element = NULL;

            axutil_hash_index_t *hi;
            void *val;
            axiom_attribute_t *type_attr;
            axutil_hash_t *ht;
            axis2_char_t *temp;
            axis2_char_t *type;

            while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
            {
                parent = axiom_node_get_next_sibling(parent, env);
            }

            if (NULL == parent)
            {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI,
                            "Failed in building adb object : "
                            "NULL elemenet can not be passed to deserialize");
                return AXIS2_FAILURE;
            }

            element = (axiom_element_t *)axiom_node_get_data_element(parent, env);

            ht = axiom_element_get_all_attributes(element, env);

            if (ht == NULL)
                return NULL;

            for (hi = axutil_hash_first(ht, env); hi; hi = axutil_hash_next(env, hi)) {
                axis2_char_t *localpart;
                axutil_hash_this(hi, NULL, NULL, &val);
                type_attr = (axiom_attribute_t *)val;
                localpart = axutil_qname_get_localpart(axiom_attribute_get_qname(type_attr, env), env);
                if (axutil_strcmp(localpart, "type") == 0) break;
            }

            type = axiom_attribute_get_value(type_attr, env);
            if (type != NULL && (temp = axutil_strchr(type, ':')) != NULL)
            {
                if (axutil_strchr(temp, ':') != NULL)
                    type = temp + 1; /* Pointer arithmetic */
            }

            return type;
        }

        axis2_char_t* AXIS2_CALL
        adb_internaltype_get_type(const adb_stubtype_t *object)
        {
            if (object != NULL)
              return object->property_TypeName;

            return NULL;
        }

        adb_stubtype_t* AXIS2_CALL
        axis2_extension_mapper_create_from_node(
            const axutil_env_t *env,
            axiom_node_t** node,
            axis2_char_t *default_type)
        {
            axis2_char_t *type = axis2_extension_mapper_type_from_node(env, node);

            if (type != NULL)
            {
              
              if (axutil_strcmp(type, "operation_type1") == 0)
              {
                  return (adb_stubtype_t*) adb_operation_type1_create(env);
              }
              
              if (axutil_strcmp(type, "label_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_label_type0_create(env);
              }
              
              if (axutil_strcmp(type, "contentItem_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_contentItem_type0_create(env);
              }
              
              if (axutil_strcmp(type, "metadata_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_metadata_type0_create(env);
              }
              
              if (axutil_strcmp(type, "EncryptedDataType") == 0)
              {
                  return (adb_stubtype_t*) adb_EncryptedDataType_create(env);
              }
              
              if (axutil_strcmp(type, "hiliteEnd_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_hiliteEnd_type0_create(env);
              }
              
              if (axutil_strcmp(type, "audio_type1") == 0)
              {
                  return (adb_stubtype_t*) adb_audio_type1_create(env);
              }
              
              if (axutil_strcmp(type, "EncryptionPropertyType") == 0)
              {
                  return (adb_stubtype_t*) adb_EncryptionPropertyType_create(env);
              }
              
              if (axutil_strcmp(type, "ReferenceList_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_ReferenceList_type0_create(env);
              }
              
              if (axutil_strcmp(type, "userResponses_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_userResponses_type0_create(env);
              }
              
              if (axutil_strcmp(type, "announcements_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_announcements_type0_create(env);
              }
              
              if (axutil_strcmp(type, "KeyExchange_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_KeyExchange_type0_create(env);
              }
              
              if (axutil_strcmp(type, "hilite_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_hilite_type0_create(env);
              }
              
              if (axutil_strcmp(type, "PGPDataType") == 0)
              {
                  return (adb_stubtype_t*) adb_PGPDataType_create(env);
              }
              
              if (axutil_strcmp(type, "choices_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_choices_type0_create(env);
              }
              
              if (axutil_strcmp(type, "SignatureType") == 0)
              {
                  return (adb_stubtype_t*) adb_SignatureType_create(env);
              }
              
              if (axutil_strcmp(type, "noActiveSessionFaultType") == 0)
              {
                  return (adb_stubtype_t*) adb_noActiveSessionFaultType_create(env);
              }
              
              if (axutil_strcmp(type, "sample_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_sample_type0_create(env);
              }
              
              if (axutil_strcmp(type, "choice_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_choice_type0_create(env);
              }
              
              if (axutil_strcmp(type, "meta_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_meta_type0_create(env);
              }
              
              if (axutil_strcmp(type, "resources_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_resources_type0_create(env);
              }
              
              if (axutil_strcmp(type, "SignaturePropertiesType") == 0)
              {
                  return (adb_stubtype_t*) adb_SignaturePropertiesType_create(env);
              }
              
              if (axutil_strcmp(type, "service_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_service_type0_create(env);
              }
              
              if (axutil_strcmp(type, "SimpleLiteral") == 0)
              {
                  return (adb_stubtype_t*) adb_SimpleLiteral_create(env);
              }
              
              if (axutil_strcmp(type, "X509IssuerSerialType") == 0)
              {
                  return (adb_stubtype_t*) adb_X509IssuerSerialType_create(env);
              }
              
              if (axutil_strcmp(type, "DSAKeyValueType") == 0)
              {
                  return (adb_stubtype_t*) adb_DSAKeyValueType_create(env);
              }
              
              if (axutil_strcmp(type, "data_type1") == 0)
              {
                  return (adb_stubtype_t*) adb_data_type1_create(env);
              }
              
              if (axutil_strcmp(type, "supportedMimeTypes_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_supportedMimeTypes_type0_create(env);
              }
              
              if (axutil_strcmp(type, "KeyValueType") == 0)
              {
                  return (adb_stubtype_t*) adb_KeyValueType_create(env);
              }
              
              if (axutil_strcmp(type, "ReferenceType") == 0)
              {
                  return (adb_stubtype_t*) adb_ReferenceType_create(env);
              }
              
              if (axutil_strcmp(type, "userResponse_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_userResponse_type0_create(env);
              }
              
              if (axutil_strcmp(type, "hiliteStart_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_hiliteStart_type0_create(env);
              }
              
              if (axutil_strcmp(type, "bookmarkSet_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_bookmarkSet_type0_create(env);
              }
              
              if (axutil_strcmp(type, "CryptoBinary") == 0)
              {
                  return (adb_stubtype_t*) adb_CryptoBinary_create(env);
              }
              
              if (axutil_strcmp(type, "SPKIDataType") == 0)
              {
                  return (adb_stubtype_t*) adb_SPKIDataType_create(env);
              }
              
              if (axutil_strcmp(type, "CanonicalizationMethodType") == 0)
              {
                  return (adb_stubtype_t*) adb_CanonicalizationMethodType_create(env);
              }
              
              if (axutil_strcmp(type, "AgreementMethodType") == 0)
              {
                  return (adb_stubtype_t*) adb_AgreementMethodType_create(env);
              }
              
              if (axutil_strcmp(type, "EncryptionMethodType") == 0)
              {
                  return (adb_stubtype_t*) adb_EncryptionMethodType_create(env);
              }
              
              if (axutil_strcmp(type, "announcement_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_announcement_type0_create(env);
              }
              
              if (axutil_strcmp(type, "supportedContentSelectionMethods_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_supportedContentSelectionMethods_type0_create(env);
              }
              
              if (axutil_strcmp(type, "CipherReferenceType") == 0)
              {
                  return (adb_stubtype_t*) adb_CipherReferenceType_create(env);
              }
              
              if (axutil_strcmp(type, "X509DataType") == 0)
              {
                  return (adb_stubtype_t*) adb_X509DataType_create(env);
              }
              
              if (axutil_strcmp(type, "priority_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_priority_type0_create(env);
              }
              
              if (axutil_strcmp(type, "TransformsType") == 0)
              {
                  return (adb_stubtype_t*) adb_TransformsType_create(env);
              }
              
              if (axutil_strcmp(type, "readingSystemAttributes_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_readingSystemAttributes_type0_create(env);
              }
              
              if (axutil_strcmp(type, "read_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_read_type0_create(env);
              }
              
              if (axutil_strcmp(type, "input_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_input_type0_create(env);
              }
              
              if (axutil_strcmp(type, "KeyPairType") == 0)
              {
                  return (adb_stubtype_t*) adb_KeyPairType_create(env);
              }
              
              if (axutil_strcmp(type, "additionalTransferProtocols_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_additionalTransferProtocols_type0_create(env);
              }
              
              if (axutil_strcmp(type, "method_type1") == 0)
              {
                  return (adb_stubtype_t*) adb_method_type1_create(env);
              }
              
              if (axutil_strcmp(type, "contentMetadata_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_contentMetadata_type0_create(env);
              }
              
              if (axutil_strcmp(type, "invalidParameterFaultType") == 0)
              {
                  return (adb_stubtype_t*) adb_invalidParameterFaultType_create(env);
              }
              
              if (axutil_strcmp(type, "inputTypes_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_inputTypes_type0_create(env);
              }
              
              if (axutil_strcmp(type, "IssuerType") == 0)
              {
                  return (adb_stubtype_t*) adb_IssuerType_create(env);
              }
              
              if (axutil_strcmp(type, "KeysType") == 0)
              {
                  return (adb_stubtype_t*) adb_KeysType_create(env);
              }
              
              if (axutil_strcmp(type, "protectionFormat_type1") == 0)
              {
                  return (adb_stubtype_t*) adb_protectionFormat_type1_create(env);
              }
              
              if (axutil_strcmp(type, "multipleChoiceQuestion_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_multipleChoiceQuestion_type0_create(env);
              }
              
              if (axutil_strcmp(type, "invalidOperationFaultType") == 0)
              {
                  return (adb_stubtype_t*) adb_invalidOperationFaultType_create(env);
              }
              
              if (axutil_strcmp(type, "supportedOptionalOperations_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_supportedOptionalOperations_type0_create(env);
              }
              
              if (axutil_strcmp(type, "RSAKeyValueType") == 0)
              {
                  return (adb_stubtype_t*) adb_RSAKeyValueType_create(env);
              }
              
              if (axutil_strcmp(type, "lang_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_lang_type0_create(env);
              }
              
              if (axutil_strcmp(type, "type_type1") == 0)
              {
                  return (adb_stubtype_t*) adb_type_type1_create(env);
              }
              
              if (axutil_strcmp(type, "type_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_type_type0_create(env);
              }
              
              if (axutil_strcmp(type, "lastmark_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_lastmark_type0_create(env);
              }
              
              if (axutil_strcmp(type, "SignedInfoType") == 0)
              {
                  return (adb_stubtype_t*) adb_SignedInfoType_create(env);
              }
              
              if (axutil_strcmp(type, "operationNotSupportedFaultType") == 0)
              {
                  return (adb_stubtype_t*) adb_operationNotSupportedFaultType_create(env);
              }
              
              if (axutil_strcmp(type, "title_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_title_type0_create(env);
              }
              
              if (axutil_strcmp(type, "resource_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_resource_type0_create(env);
              }
              
              if (axutil_strcmp(type, "bookmark_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_bookmark_type0_create(env);
              }
              
              if (axutil_strcmp(type, "SignatureMethodType") == 0)
              {
                  return (adb_stubtype_t*) adb_SignatureMethodType_create(env);
              }
              
              if (axutil_strcmp(type, "TransformType") == 0)
              {
                  return (adb_stubtype_t*) adb_TransformType_create(env);
              }
              
              if (axutil_strcmp(type, "RetrievalMethodType") == 0)
              {
                  return (adb_stubtype_t*) adb_RetrievalMethodType_create(env);
              }
              
              if (axutil_strcmp(type, "SignaturePropertyType") == 0)
              {
                  return (adb_stubtype_t*) adb_SignaturePropertyType_create(env);
              }
              
              if (axutil_strcmp(type, "inputQuestion_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_inputQuestion_type0_create(env);
              }
              
              if (axutil_strcmp(type, "DigestValueType") == 0)
              {
                  return (adb_stubtype_t*) adb_DigestValueType_create(env);
              }
              
              if (axutil_strcmp(type, "contentList_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_contentList_type0_create(env);
              }
              
              if (axutil_strcmp(type, "EncryptedKeyType") == 0)
              {
                  return (adb_stubtype_t*) adb_EncryptedKeyType_create(env);
              }
              
              if (axutil_strcmp(type, "ReferenceType") == 0)
              {
                  return (adb_stubtype_t*) adb_ReferenceType_create(env);
              }
              
              if (axutil_strcmp(type, "KeyInfoType") == 0)
              {
                  return (adb_stubtype_t*) adb_KeyInfoType_create(env);
              }
              
              if (axutil_strcmp(type, "supportedContentFormats_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_supportedContentFormats_type0_create(env);
              }
              
              if (axutil_strcmp(type, "serviceAttributes_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_serviceAttributes_type0_create(env);
              }
              
              if (axutil_strcmp(type, "serviceProvider_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_serviceProvider_type0_create(env);
              }
              
              if (axutil_strcmp(type, "DigestMethodType") == 0)
              {
                  return (adb_stubtype_t*) adb_DigestMethodType_create(env);
              }
              
              if (axutil_strcmp(type, "UAKType") == 0)
              {
                  return (adb_stubtype_t*) adb_UAKType_create(env);
              }
              
              if (axutil_strcmp(type, "SignatureValueType") == 0)
              {
                  return (adb_stubtype_t*) adb_SignatureValueType_create(env);
              }
              
              if (axutil_strcmp(type, "operation_type1") == 0)
              {
                  return (adb_stubtype_t*) adb_operation_type1_create(env);
              }
              
              if (axutil_strcmp(type, "ManifestType") == 0)
              {
                  return (adb_stubtype_t*) adb_ManifestType_create(env);
              }
              
              if (axutil_strcmp(type, "supportedInputTypes_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_supportedInputTypes_type0_create(env);
              }
              
              if (axutil_strcmp(type, "HMACOutputLengthType") == 0)
              {
                  return (adb_stubtype_t*) adb_HMACOutputLengthType_create(env);
              }
              
              if (axutil_strcmp(type, "keyRing_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_keyRing_type0_create(env);
              }
              
              if (axutil_strcmp(type, "EncryptionPropertiesType") == 0)
              {
                  return (adb_stubtype_t*) adb_EncryptionPropertiesType_create(env);
              }
              
              if (axutil_strcmp(type, "supportedContentProtectionFormats_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_supportedContentProtectionFormats_type0_create(env);
              }
              
              if (axutil_strcmp(type, "TransformsType") == 0)
              {
                  return (adb_stubtype_t*) adb_TransformsType_create(env);
              }
              
              if (axutil_strcmp(type, "CipherDataType") == 0)
              {
                  return (adb_stubtype_t*) adb_CipherDataType_create(env);
              }
              
              if (axutil_strcmp(type, "EncryptedType") == 0)
              {
                  return (adb_stubtype_t*) adb_EncryptedType_create(env);
              }
              
              if (axutil_strcmp(type, "mimeType_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_mimeType_type0_create(env);
              }
              
              if (axutil_strcmp(type, "note_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_note_type0_create(env);
              }
              
              if (axutil_strcmp(type, "dir_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_dir_type0_create(env);
              }
              
              if (axutil_strcmp(type, "internalServerErrorFaultType") == 0)
              {
                  return (adb_stubtype_t*) adb_internalServerErrorFaultType_create(env);
              }
              
              if (axutil_strcmp(type, "KeySizeType") == 0)
              {
                  return (adb_stubtype_t*) adb_KeySizeType_create(env);
              }
              
              if (axutil_strcmp(type, "config_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_config_type0_create(env);
              }
              
              if (axutil_strcmp(type, "questions_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_questions_type0_create(env);
              }
              
              if (axutil_strcmp(type, "audio_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_audio_type0_create(env);
              }
              
              if (axutil_strcmp(type, "supportedUplinkAudioCodecs_type0") == 0)
              {
                  return (adb_stubtype_t*) adb_supportedUplinkAudioCodecs_type0_create(env);
              }
              
              if (axutil_strcmp(type, "IdString") == 0)
              {
                  return (adb_stubtype_t*) adb_IdString_create(env);
              }
              
              if (axutil_strcmp(type, "ObjectType") == 0)
              {
                  return (adb_stubtype_t*) adb_ObjectType_create(env);
              }
              
            }

            
            if (axutil_strcmp(default_type, "adb_operation_type1") == 0)
            {
                return (adb_stubtype_t*) adb_operation_type1_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_label_type0") == 0)
            {
                return (adb_stubtype_t*) adb_label_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_contentItem_type0") == 0)
            {
                return (adb_stubtype_t*) adb_contentItem_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_metadata_type0") == 0)
            {
                return (adb_stubtype_t*) adb_metadata_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_EncryptedDataType") == 0)
            {
                return (adb_stubtype_t*) adb_EncryptedDataType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_hiliteEnd_type0") == 0)
            {
                return (adb_stubtype_t*) adb_hiliteEnd_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_audio_type1") == 0)
            {
                return (adb_stubtype_t*) adb_audio_type1_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_EncryptionPropertyType") == 0)
            {
                return (adb_stubtype_t*) adb_EncryptionPropertyType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_ReferenceList_type0") == 0)
            {
                return (adb_stubtype_t*) adb_ReferenceList_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_userResponses_type0") == 0)
            {
                return (adb_stubtype_t*) adb_userResponses_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_announcements_type0") == 0)
            {
                return (adb_stubtype_t*) adb_announcements_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_KeyExchange_type0") == 0)
            {
                return (adb_stubtype_t*) adb_KeyExchange_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_hilite_type0") == 0)
            {
                return (adb_stubtype_t*) adb_hilite_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_PGPDataType") == 0)
            {
                return (adb_stubtype_t*) adb_PGPDataType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_choices_type0") == 0)
            {
                return (adb_stubtype_t*) adb_choices_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_SignatureType") == 0)
            {
                return (adb_stubtype_t*) adb_SignatureType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_noActiveSessionFaultType") == 0)
            {
                return (adb_stubtype_t*) adb_noActiveSessionFaultType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_sample_type0") == 0)
            {
                return (adb_stubtype_t*) adb_sample_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_choice_type0") == 0)
            {
                return (adb_stubtype_t*) adb_choice_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_meta_type0") == 0)
            {
                return (adb_stubtype_t*) adb_meta_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_resources_type0") == 0)
            {
                return (adb_stubtype_t*) adb_resources_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_SignaturePropertiesType") == 0)
            {
                return (adb_stubtype_t*) adb_SignaturePropertiesType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_service_type0") == 0)
            {
                return (adb_stubtype_t*) adb_service_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_SimpleLiteral") == 0)
            {
                return (adb_stubtype_t*) adb_SimpleLiteral_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_X509IssuerSerialType") == 0)
            {
                return (adb_stubtype_t*) adb_X509IssuerSerialType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_DSAKeyValueType") == 0)
            {
                return (adb_stubtype_t*) adb_DSAKeyValueType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_data_type1") == 0)
            {
                return (adb_stubtype_t*) adb_data_type1_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedMimeTypes_type0") == 0)
            {
                return (adb_stubtype_t*) adb_supportedMimeTypes_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_KeyValueType") == 0)
            {
                return (adb_stubtype_t*) adb_KeyValueType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_ReferenceType") == 0)
            {
                return (adb_stubtype_t*) adb_ReferenceType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_userResponse_type0") == 0)
            {
                return (adb_stubtype_t*) adb_userResponse_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_hiliteStart_type0") == 0)
            {
                return (adb_stubtype_t*) adb_hiliteStart_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_bookmarkSet_type0") == 0)
            {
                return (adb_stubtype_t*) adb_bookmarkSet_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_CryptoBinary") == 0)
            {
                return (adb_stubtype_t*) adb_CryptoBinary_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_SPKIDataType") == 0)
            {
                return (adb_stubtype_t*) adb_SPKIDataType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_CanonicalizationMethodType") == 0)
            {
                return (adb_stubtype_t*) adb_CanonicalizationMethodType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_AgreementMethodType") == 0)
            {
                return (adb_stubtype_t*) adb_AgreementMethodType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_EncryptionMethodType") == 0)
            {
                return (adb_stubtype_t*) adb_EncryptionMethodType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_announcement_type0") == 0)
            {
                return (adb_stubtype_t*) adb_announcement_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedContentSelectionMethods_type0") == 0)
            {
                return (adb_stubtype_t*) adb_supportedContentSelectionMethods_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_CipherReferenceType") == 0)
            {
                return (adb_stubtype_t*) adb_CipherReferenceType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_X509DataType") == 0)
            {
                return (adb_stubtype_t*) adb_X509DataType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_priority_type0") == 0)
            {
                return (adb_stubtype_t*) adb_priority_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_TransformsType") == 0)
            {
                return (adb_stubtype_t*) adb_TransformsType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_readingSystemAttributes_type0") == 0)
            {
                return (adb_stubtype_t*) adb_readingSystemAttributes_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_read_type0") == 0)
            {
                return (adb_stubtype_t*) adb_read_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_input_type0") == 0)
            {
                return (adb_stubtype_t*) adb_input_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_KeyPairType") == 0)
            {
                return (adb_stubtype_t*) adb_KeyPairType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_additionalTransferProtocols_type0") == 0)
            {
                return (adb_stubtype_t*) adb_additionalTransferProtocols_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_method_type1") == 0)
            {
                return (adb_stubtype_t*) adb_method_type1_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_contentMetadata_type0") == 0)
            {
                return (adb_stubtype_t*) adb_contentMetadata_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_invalidParameterFaultType") == 0)
            {
                return (adb_stubtype_t*) adb_invalidParameterFaultType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_inputTypes_type0") == 0)
            {
                return (adb_stubtype_t*) adb_inputTypes_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_IssuerType") == 0)
            {
                return (adb_stubtype_t*) adb_IssuerType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_KeysType") == 0)
            {
                return (adb_stubtype_t*) adb_KeysType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_protectionFormat_type1") == 0)
            {
                return (adb_stubtype_t*) adb_protectionFormat_type1_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_multipleChoiceQuestion_type0") == 0)
            {
                return (adb_stubtype_t*) adb_multipleChoiceQuestion_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_invalidOperationFaultType") == 0)
            {
                return (adb_stubtype_t*) adb_invalidOperationFaultType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedOptionalOperations_type0") == 0)
            {
                return (adb_stubtype_t*) adb_supportedOptionalOperations_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_RSAKeyValueType") == 0)
            {
                return (adb_stubtype_t*) adb_RSAKeyValueType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_lang_type0") == 0)
            {
                return (adb_stubtype_t*) adb_lang_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_type_type1") == 0)
            {
                return (adb_stubtype_t*) adb_type_type1_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_type_type0") == 0)
            {
                return (adb_stubtype_t*) adb_type_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_lastmark_type0") == 0)
            {
                return (adb_stubtype_t*) adb_lastmark_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_SignedInfoType") == 0)
            {
                return (adb_stubtype_t*) adb_SignedInfoType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_operationNotSupportedFaultType") == 0)
            {
                return (adb_stubtype_t*) adb_operationNotSupportedFaultType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_title_type0") == 0)
            {
                return (adb_stubtype_t*) adb_title_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_resource_type0") == 0)
            {
                return (adb_stubtype_t*) adb_resource_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_bookmark_type0") == 0)
            {
                return (adb_stubtype_t*) adb_bookmark_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_SignatureMethodType") == 0)
            {
                return (adb_stubtype_t*) adb_SignatureMethodType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_TransformType") == 0)
            {
                return (adb_stubtype_t*) adb_TransformType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_RetrievalMethodType") == 0)
            {
                return (adb_stubtype_t*) adb_RetrievalMethodType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_SignaturePropertyType") == 0)
            {
                return (adb_stubtype_t*) adb_SignaturePropertyType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_inputQuestion_type0") == 0)
            {
                return (adb_stubtype_t*) adb_inputQuestion_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_DigestValueType") == 0)
            {
                return (adb_stubtype_t*) adb_DigestValueType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_contentList_type0") == 0)
            {
                return (adb_stubtype_t*) adb_contentList_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_EncryptedKeyType") == 0)
            {
                return (adb_stubtype_t*) adb_EncryptedKeyType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_ReferenceType") == 0)
            {
                return (adb_stubtype_t*) adb_ReferenceType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_KeyInfoType") == 0)
            {
                return (adb_stubtype_t*) adb_KeyInfoType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedContentFormats_type0") == 0)
            {
                return (adb_stubtype_t*) adb_supportedContentFormats_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_serviceAttributes_type0") == 0)
            {
                return (adb_stubtype_t*) adb_serviceAttributes_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_serviceProvider_type0") == 0)
            {
                return (adb_stubtype_t*) adb_serviceProvider_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_DigestMethodType") == 0)
            {
                return (adb_stubtype_t*) adb_DigestMethodType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_UAKType") == 0)
            {
                return (adb_stubtype_t*) adb_UAKType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_SignatureValueType") == 0)
            {
                return (adb_stubtype_t*) adb_SignatureValueType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_operation_type1") == 0)
            {
                return (adb_stubtype_t*) adb_operation_type1_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_ManifestType") == 0)
            {
                return (adb_stubtype_t*) adb_ManifestType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedInputTypes_type0") == 0)
            {
                return (adb_stubtype_t*) adb_supportedInputTypes_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_HMACOutputLengthType") == 0)
            {
                return (adb_stubtype_t*) adb_HMACOutputLengthType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_keyRing_type0") == 0)
            {
                return (adb_stubtype_t*) adb_keyRing_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_EncryptionPropertiesType") == 0)
            {
                return (adb_stubtype_t*) adb_EncryptionPropertiesType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedContentProtectionFormats_type0") == 0)
            {
                return (adb_stubtype_t*) adb_supportedContentProtectionFormats_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_TransformsType") == 0)
            {
                return (adb_stubtype_t*) adb_TransformsType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_CipherDataType") == 0)
            {
                return (adb_stubtype_t*) adb_CipherDataType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_EncryptedType") == 0)
            {
                return (adb_stubtype_t*) adb_EncryptedType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_mimeType_type0") == 0)
            {
                return (adb_stubtype_t*) adb_mimeType_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_note_type0") == 0)
            {
                return (adb_stubtype_t*) adb_note_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_dir_type0") == 0)
            {
                return (adb_stubtype_t*) adb_dir_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_internalServerErrorFaultType") == 0)
            {
                return (adb_stubtype_t*) adb_internalServerErrorFaultType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_KeySizeType") == 0)
            {
                return (adb_stubtype_t*) adb_KeySizeType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_config_type0") == 0)
            {
                return (adb_stubtype_t*) adb_config_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_questions_type0") == 0)
            {
                return (adb_stubtype_t*) adb_questions_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_audio_type0") == 0)
            {
                return (adb_stubtype_t*) adb_audio_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedUplinkAudioCodecs_type0") == 0)
            {
                return (adb_stubtype_t*) adb_supportedUplinkAudioCodecs_type0_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_IdString") == 0)
            {
                return (adb_stubtype_t*) adb_IdString_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_ObjectType") == 0)
            {
                return (adb_stubtype_t*) adb_ObjectType_create(env);
            }
            
            if (axutil_strcmp(default_type, "adb_bookmarkContent") == 0)
            {
                return (adb_stubtype_t*) adb_bookmarkContent_create(env);
            }

            if (axutil_strcmp(default_type, "adb_bookmarkContentChoice_type0") == 0)
            {
                return (adb_stubtype_t*) adb_bookmarkContentChoice_type0_create(env);
            }

            if (axutil_strcmp(default_type, "adb_bookmarkContentSequence_type0") == 0)
            {
                return (adb_stubtype_t*) adb_bookmarkContentSequence_type0_create(env);
            }

            if (axutil_strcmp(default_type, "adb_bookmarkSetChoice_type1") == 0)
            {
                return (adb_stubtype_t*) adb_bookmarkSetChoice_type1_create(env);
            }

            if (axutil_strcmp(default_type, "adb_hiliteContent") == 0)
            {
                return (adb_stubtype_t*) adb_hiliteContent_create(env);
            }

            if (axutil_strcmp(default_type, "adb_hiliteContentChoice_type0") == 0)
            {
                return (adb_stubtype_t*) adb_hiliteContentChoice_type0_create(env);
            }

            if (axutil_strcmp(default_type, "adb_hiliteContentSequence_type0") == 0)
            {
                return (adb_stubtype_t*) adb_hiliteContentSequence_type0_create(env);
            }

            if (axutil_strcmp(default_type, "adb_noteSequence_type0") == 0)
            {
                return (adb_stubtype_t*) adb_noteSequence_type0_create(env);
            }


            return NULL;
        }

        axis2_status_t AXIS2_CALL
        axis2_extension_mapper_free(
            adb_stubtype_t* _object,
            const axutil_env_t *env,
            axis2_char_t *default_type)
        {
            if (_object != NULL && adb_internaltype_get_type(_object) != NULL)
            {
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_operation_type1") == 0)
                {
                    return adb_operation_type1_free_obj(
                    (adb_operation_type1_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_label_type0") == 0)
                {
                    return adb_label_type0_free_obj(
                    (adb_label_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_contentItem_type0") == 0)
                {
                    return adb_contentItem_type0_free_obj(
                    (adb_contentItem_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_metadata_type0") == 0)
                {
                    return adb_metadata_type0_free_obj(
                    (adb_metadata_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_EncryptedDataType") == 0)
                {
                    return adb_EncryptedDataType_free_obj(
                    (adb_EncryptedDataType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_hiliteEnd_type0") == 0)
                {
                    return adb_hiliteEnd_type0_free_obj(
                    (adb_hiliteEnd_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_audio_type1") == 0)
                {
                    return adb_audio_type1_free_obj(
                    (adb_audio_type1_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_EncryptionPropertyType") == 0)
                {
                    return adb_EncryptionPropertyType_free_obj(
                    (adb_EncryptionPropertyType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_ReferenceList_type0") == 0)
                {
                    return adb_ReferenceList_type0_free_obj(
                    (adb_ReferenceList_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_userResponses_type0") == 0)
                {
                    return adb_userResponses_type0_free_obj(
                    (adb_userResponses_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_announcements_type0") == 0)
                {
                    return adb_announcements_type0_free_obj(
                    (adb_announcements_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_KeyExchange_type0") == 0)
                {
                    return adb_KeyExchange_type0_free_obj(
                    (adb_KeyExchange_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_hilite_type0") == 0)
                {
                    return adb_hilite_type0_free_obj(
                    (adb_hilite_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_PGPDataType") == 0)
                {
                    return adb_PGPDataType_free_obj(
                    (adb_PGPDataType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_choices_type0") == 0)
                {
                    return adb_choices_type0_free_obj(
                    (adb_choices_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_SignatureType") == 0)
                {
                    return adb_SignatureType_free_obj(
                    (adb_SignatureType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_noActiveSessionFaultType") == 0)
                {
                    return adb_noActiveSessionFaultType_free_obj(
                    (adb_noActiveSessionFaultType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_sample_type0") == 0)
                {
                    return adb_sample_type0_free_obj(
                    (adb_sample_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_choice_type0") == 0)
                {
                    return adb_choice_type0_free_obj(
                    (adb_choice_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_meta_type0") == 0)
                {
                    return adb_meta_type0_free_obj(
                    (adb_meta_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_resources_type0") == 0)
                {
                    return adb_resources_type0_free_obj(
                    (adb_resources_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_SignaturePropertiesType") == 0)
                {
                    return adb_SignaturePropertiesType_free_obj(
                    (adb_SignaturePropertiesType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_service_type0") == 0)
                {
                    return adb_service_type0_free_obj(
                    (adb_service_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_SimpleLiteral") == 0)
                {
                    return adb_SimpleLiteral_free_obj(
                    (adb_SimpleLiteral_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_X509IssuerSerialType") == 0)
                {
                    return adb_X509IssuerSerialType_free_obj(
                    (adb_X509IssuerSerialType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_DSAKeyValueType") == 0)
                {
                    return adb_DSAKeyValueType_free_obj(
                    (adb_DSAKeyValueType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_data_type1") == 0)
                {
                    return adb_data_type1_free_obj(
                    (adb_data_type1_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_supportedMimeTypes_type0") == 0)
                {
                    return adb_supportedMimeTypes_type0_free_obj(
                    (adb_supportedMimeTypes_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_KeyValueType") == 0)
                {
                    return adb_KeyValueType_free_obj(
                    (adb_KeyValueType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_ReferenceType") == 0)
                {
                    return adb_ReferenceType_free_obj(
                    (adb_ReferenceTypeE2_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_userResponse_type0") == 0)
                {
                    return adb_userResponse_type0_free_obj(
                    (adb_userResponse_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_hiliteStart_type0") == 0)
                {
                    return adb_hiliteStart_type0_free_obj(
                    (adb_hiliteStart_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_bookmarkSet_type0") == 0)
                {
                    return adb_bookmarkSet_type0_free_obj(
                    (adb_bookmarkSet_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_CryptoBinary") == 0)
                {
                    return adb_CryptoBinary_free_obj(
                    (adb_CryptoBinary_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_SPKIDataType") == 0)
                {
                    return adb_SPKIDataType_free_obj(
                    (adb_SPKIDataType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_CanonicalizationMethodType") == 0)
                {
                    return adb_CanonicalizationMethodType_free_obj(
                    (adb_CanonicalizationMethodType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_AgreementMethodType") == 0)
                {
                    return adb_AgreementMethodType_free_obj(
                    (adb_AgreementMethodType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_EncryptionMethodType") == 0)
                {
                    return adb_EncryptionMethodType_free_obj(
                    (adb_EncryptionMethodType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_announcement_type0") == 0)
                {
                    return adb_announcement_type0_free_obj(
                    (adb_announcement_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_supportedContentSelectionMethods_type0") == 0)
                {
                    return adb_supportedContentSelectionMethods_type0_free_obj(
                    (adb_supportedContentSelectionMethods_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_CipherReferenceType") == 0)
                {
                    return adb_CipherReferenceType_free_obj(
                    (adb_CipherReferenceType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_X509DataType") == 0)
                {
                    return adb_X509DataType_free_obj(
                    (adb_X509DataType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_priority_type0") == 0)
                {
                    return adb_priority_type0_free_obj(
                    (adb_priority_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_TransformsType") == 0)
                {
                    return adb_TransformsType_free_obj(
                    (adb_TransformsTypeE1_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_readingSystemAttributes_type0") == 0)
                {
                    return adb_readingSystemAttributes_type0_free_obj(
                    (adb_readingSystemAttributes_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_read_type0") == 0)
                {
                    return adb_read_type0_free_obj(
                    (adb_read_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_input_type0") == 0)
                {
                    return adb_input_type0_free_obj(
                    (adb_input_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_KeyPairType") == 0)
                {
                    return adb_KeyPairType_free_obj(
                    (adb_KeyPairType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_additionalTransferProtocols_type0") == 0)
                {
                    return adb_additionalTransferProtocols_type0_free_obj(
                    (adb_additionalTransferProtocols_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_method_type1") == 0)
                {
                    return adb_method_type1_free_obj(
                    (adb_method_type1_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_contentMetadata_type0") == 0)
                {
                    return adb_contentMetadata_type0_free_obj(
                    (adb_contentMetadata_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_invalidParameterFaultType") == 0)
                {
                    return adb_invalidParameterFaultType_free_obj(
                    (adb_invalidParameterFaultType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_inputTypes_type0") == 0)
                {
                    return adb_inputTypes_type0_free_obj(
                    (adb_inputTypes_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_IssuerType") == 0)
                {
                    return adb_IssuerType_free_obj(
                    (adb_IssuerType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_KeysType") == 0)
                {
                    return adb_KeysType_free_obj(
                    (adb_KeysType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_protectionFormat_type1") == 0)
                {
                    return adb_protectionFormat_type1_free_obj(
                    (adb_protectionFormat_type1_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_multipleChoiceQuestion_type0") == 0)
                {
                    return adb_multipleChoiceQuestion_type0_free_obj(
                    (adb_multipleChoiceQuestion_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_invalidOperationFaultType") == 0)
                {
                    return adb_invalidOperationFaultType_free_obj(
                    (adb_invalidOperationFaultType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_supportedOptionalOperations_type0") == 0)
                {
                    return adb_supportedOptionalOperations_type0_free_obj(
                    (adb_supportedOptionalOperations_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_RSAKeyValueType") == 0)
                {
                    return adb_RSAKeyValueType_free_obj(
                    (adb_RSAKeyValueType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_lang_type0") == 0)
                {
                    return adb_lang_type0_free_obj(
                    (adb_lang_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_type_type1") == 0)
                {
                    return adb_type_type1_free_obj(
                    (adb_type_type1_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_type_type0") == 0)
                {
                    return adb_type_type0_free_obj(
                    (adb_type_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_lastmark_type0") == 0)
                {
                    return adb_lastmark_type0_free_obj(
                    (adb_lastmark_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_SignedInfoType") == 0)
                {
                    return adb_SignedInfoType_free_obj(
                    (adb_SignedInfoType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_operationNotSupportedFaultType") == 0)
                {
                    return adb_operationNotSupportedFaultType_free_obj(
                    (adb_operationNotSupportedFaultType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_title_type0") == 0)
                {
                    return adb_title_type0_free_obj(
                    (adb_title_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_resource_type0") == 0)
                {
                    return adb_resource_type0_free_obj(
                    (adb_resource_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_bookmark_type0") == 0)
                {
                    return adb_bookmark_type0_free_obj(
                    (adb_bookmark_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_SignatureMethodType") == 0)
                {
                    return adb_SignatureMethodType_free_obj(
                    (adb_SignatureMethodType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_TransformType") == 0)
                {
                    return adb_TransformType_free_obj(
                    (adb_TransformType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_RetrievalMethodType") == 0)
                {
                    return adb_RetrievalMethodType_free_obj(
                    (adb_RetrievalMethodType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_SignaturePropertyType") == 0)
                {
                    return adb_SignaturePropertyType_free_obj(
                    (adb_SignaturePropertyType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_inputQuestion_type0") == 0)
                {
                    return adb_inputQuestion_type0_free_obj(
                    (adb_inputQuestion_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_DigestValueType") == 0)
                {
                    return adb_DigestValueType_free_obj(
                    (adb_DigestValueType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_contentList_type0") == 0)
                {
                    return adb_contentList_type0_free_obj(
                    (adb_contentList_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_EncryptedKeyType") == 0)
                {
                    return adb_EncryptedKeyType_free_obj(
                    (adb_EncryptedKeyType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_ReferenceType") == 0)
                {
                    return adb_ReferenceType_free_obj(
                    (adb_ReferenceType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_KeyInfoType") == 0)
                {
                    return adb_KeyInfoType_free_obj(
                    (adb_KeyInfoType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_supportedContentFormats_type0") == 0)
                {
                    return adb_supportedContentFormats_type0_free_obj(
                    (adb_supportedContentFormats_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_serviceAttributes_type0") == 0)
                {
                    return adb_serviceAttributes_type0_free_obj(
                    (adb_serviceAttributes_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_serviceProvider_type0") == 0)
                {
                    return adb_serviceProvider_type0_free_obj(
                    (adb_serviceProvider_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_DigestMethodType") == 0)
                {
                    return adb_DigestMethodType_free_obj(
                    (adb_DigestMethodType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_UAKType") == 0)
                {
                    return adb_UAKType_free_obj(
                    (adb_UAKType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_SignatureValueType") == 0)
                {
                    return adb_SignatureValueType_free_obj(
                    (adb_SignatureValueType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_operation_type1") == 0)
                {
                    return adb_operation_type1_free_obj(
                    (adb_operation_type1_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_ManifestType") == 0)
                {
                    return adb_ManifestType_free_obj(
                    (adb_ManifestType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_supportedInputTypes_type0") == 0)
                {
                    return adb_supportedInputTypes_type0_free_obj(
                    (adb_supportedInputTypes_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_HMACOutputLengthType") == 0)
                {
                    return adb_HMACOutputLengthType_free_obj(
                    (adb_HMACOutputLengthType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_keyRing_type0") == 0)
                {
                    return adb_keyRing_type0_free_obj(
                    (adb_keyRing_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_EncryptionPropertiesType") == 0)
                {
                    return adb_EncryptionPropertiesType_free_obj(
                    (adb_EncryptionPropertiesType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_supportedContentProtectionFormats_type0") == 0)
                {
                    return adb_supportedContentProtectionFormats_type0_free_obj(
                    (adb_supportedContentProtectionFormats_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_TransformsType") == 0)
                {
                    return adb_TransformsType_free_obj(
                    (adb_TransformsType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_CipherDataType") == 0)
                {
                    return adb_CipherDataType_free_obj(
                    (adb_CipherDataType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_EncryptedType") == 0)
                {
                    return adb_EncryptedType_free_obj(
                    (adb_EncryptedType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_mimeType_type0") == 0)
                {
                    return adb_mimeType_type0_free_obj(
                    (adb_mimeType_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_note_type0") == 0)
                {
                    return adb_note_type0_free_obj(
                    (adb_note_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_dir_type0") == 0)
                {
                    return adb_dir_type0_free_obj(
                    (adb_dir_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_internalServerErrorFaultType") == 0)
                {
                    return adb_internalServerErrorFaultType_free_obj(
                    (adb_internalServerErrorFaultType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_KeySizeType") == 0)
                {
                    return adb_KeySizeType_free_obj(
                    (adb_KeySizeType_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_config_type0") == 0)
                {
                    return adb_config_type0_free_obj(
                    (adb_config_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_questions_type0") == 0)
                {
                    return adb_questions_type0_free_obj(
                    (adb_questions_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_audio_type0") == 0)
                {
                    return adb_audio_type0_free_obj(
                    (adb_audio_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_supportedUplinkAudioCodecs_type0") == 0)
                {
                    return adb_supportedUplinkAudioCodecs_type0_free_obj(
                    (adb_supportedUplinkAudioCodecs_type0_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_IdString") == 0)
                {
                    return adb_IdString_free_obj(
                    (adb_IdString_t*) _object, env);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_ObjectType") == 0)
                {
                    return adb_ObjectType_free_obj(
                    (adb_ObjectType_t*) _object, env);
                }
            
            }

            
            if (axutil_strcmp(default_type, "adb_operation_type1") == 0)
            {
                return adb_operation_type1_free_obj(
                (adb_operation_type1_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_label_type0") == 0)
            {
                return adb_label_type0_free_obj(
                (adb_label_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_contentItem_type0") == 0)
            {
                return adb_contentItem_type0_free_obj(
                (adb_contentItem_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_metadata_type0") == 0)
            {
                return adb_metadata_type0_free_obj(
                (adb_metadata_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_EncryptedDataType") == 0)
            {
                return adb_EncryptedDataType_free_obj(
                (adb_EncryptedDataType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_hiliteEnd_type0") == 0)
            {
                return adb_hiliteEnd_type0_free_obj(
                (adb_hiliteEnd_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_audio_type1") == 0)
            {
                return adb_audio_type1_free_obj(
                (adb_audio_type1_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_EncryptionPropertyType") == 0)
            {
                return adb_EncryptionPropertyType_free_obj(
                (adb_EncryptionPropertyType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_ReferenceList_type0") == 0)
            {
                return adb_ReferenceList_type0_free_obj(
                (adb_ReferenceList_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_userResponses_type0") == 0)
            {
                return adb_userResponses_type0_free_obj(
                (adb_userResponses_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_announcements_type0") == 0)
            {
                return adb_announcements_type0_free_obj(
                (adb_announcements_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_KeyExchange_type0") == 0)
            {
                return adb_KeyExchange_type0_free_obj(
                (adb_KeyExchange_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_hilite_type0") == 0)
            {
                return adb_hilite_type0_free_obj(
                (adb_hilite_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_PGPDataType") == 0)
            {
                return adb_PGPDataType_free_obj(
                (adb_PGPDataType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_choices_type0") == 0)
            {
                return adb_choices_type0_free_obj(
                (adb_choices_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_SignatureType") == 0)
            {
                return adb_SignatureType_free_obj(
                (adb_SignatureType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_noActiveSessionFaultType") == 0)
            {
                return adb_noActiveSessionFaultType_free_obj(
                (adb_noActiveSessionFaultType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_sample_type0") == 0)
            {
                return adb_sample_type0_free_obj(
                (adb_sample_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_choice_type0") == 0)
            {
                return adb_choice_type0_free_obj(
                (adb_choice_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_meta_type0") == 0)
            {
                return adb_meta_type0_free_obj(
                (adb_meta_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_resources_type0") == 0)
            {
                return adb_resources_type0_free_obj(
                (adb_resources_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_SignaturePropertiesType") == 0)
            {
                return adb_SignaturePropertiesType_free_obj(
                (adb_SignaturePropertiesType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_service_type0") == 0)
            {
                return adb_service_type0_free_obj(
                (adb_service_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_SimpleLiteral") == 0)
            {
                return adb_SimpleLiteral_free_obj(
                (adb_SimpleLiteral_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_X509IssuerSerialType") == 0)
            {
                return adb_X509IssuerSerialType_free_obj(
                (adb_X509IssuerSerialType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_DSAKeyValueType") == 0)
            {
                return adb_DSAKeyValueType_free_obj(
                (adb_DSAKeyValueType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_data_type1") == 0)
            {
                return adb_data_type1_free_obj(
                (adb_data_type1_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedMimeTypes_type0") == 0)
            {
                return adb_supportedMimeTypes_type0_free_obj(
                (adb_supportedMimeTypes_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_KeyValueType") == 0)
            {
                return adb_KeyValueType_free_obj(
                (adb_KeyValueType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_ReferenceType") == 0)
            {
                return adb_ReferenceType_free_obj(
                (adb_ReferenceTypeE2_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_userResponse_type0") == 0)
            {
                return adb_userResponse_type0_free_obj(
                (adb_userResponse_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_hiliteStart_type0") == 0)
            {
                return adb_hiliteStart_type0_free_obj(
                (adb_hiliteStart_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_bookmarkSet_type0") == 0)
            {
                return adb_bookmarkSet_type0_free_obj(
                (adb_bookmarkSet_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_CryptoBinary") == 0)
            {
                return adb_CryptoBinary_free_obj(
                (adb_CryptoBinary_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_SPKIDataType") == 0)
            {
                return adb_SPKIDataType_free_obj(
                (adb_SPKIDataType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_CanonicalizationMethodType") == 0)
            {
                return adb_CanonicalizationMethodType_free_obj(
                (adb_CanonicalizationMethodType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_AgreementMethodType") == 0)
            {
                return adb_AgreementMethodType_free_obj(
                (adb_AgreementMethodType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_EncryptionMethodType") == 0)
            {
                return adb_EncryptionMethodType_free_obj(
                (adb_EncryptionMethodType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_announcement_type0") == 0)
            {
                return adb_announcement_type0_free_obj(
                (adb_announcement_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedContentSelectionMethods_type0") == 0)
            {
                return adb_supportedContentSelectionMethods_type0_free_obj(
                (adb_supportedContentSelectionMethods_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_CipherReferenceType") == 0)
            {
                return adb_CipherReferenceType_free_obj(
                (adb_CipherReferenceType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_X509DataType") == 0)
            {
                return adb_X509DataType_free_obj(
                (adb_X509DataType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_priority_type0") == 0)
            {
                return adb_priority_type0_free_obj(
                (adb_priority_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_TransformsType") == 0)
            {
                return adb_TransformsType_free_obj(
                (adb_TransformsTypeE1_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_readingSystemAttributes_type0") == 0)
            {
                return adb_readingSystemAttributes_type0_free_obj(
                (adb_readingSystemAttributes_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_read_type0") == 0)
            {
                return adb_read_type0_free_obj(
                (adb_read_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_input_type0") == 0)
            {
                return adb_input_type0_free_obj(
                (adb_input_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_KeyPairType") == 0)
            {
                return adb_KeyPairType_free_obj(
                (adb_KeyPairType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_additionalTransferProtocols_type0") == 0)
            {
                return adb_additionalTransferProtocols_type0_free_obj(
                (adb_additionalTransferProtocols_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_method_type1") == 0)
            {
                return adb_method_type1_free_obj(
                (adb_method_type1_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_contentMetadata_type0") == 0)
            {
                return adb_contentMetadata_type0_free_obj(
                (adb_contentMetadata_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_invalidParameterFaultType") == 0)
            {
                return adb_invalidParameterFaultType_free_obj(
                (adb_invalidParameterFaultType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_inputTypes_type0") == 0)
            {
                return adb_inputTypes_type0_free_obj(
                (adb_inputTypes_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_IssuerType") == 0)
            {
                return adb_IssuerType_free_obj(
                (adb_IssuerType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_KeysType") == 0)
            {
                return adb_KeysType_free_obj(
                (adb_KeysType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_protectionFormat_type1") == 0)
            {
                return adb_protectionFormat_type1_free_obj(
                (adb_protectionFormat_type1_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_multipleChoiceQuestion_type0") == 0)
            {
                return adb_multipleChoiceQuestion_type0_free_obj(
                (adb_multipleChoiceQuestion_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_invalidOperationFaultType") == 0)
            {
                return adb_invalidOperationFaultType_free_obj(
                (adb_invalidOperationFaultType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedOptionalOperations_type0") == 0)
            {
                return adb_supportedOptionalOperations_type0_free_obj(
                (adb_supportedOptionalOperations_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_RSAKeyValueType") == 0)
            {
                return adb_RSAKeyValueType_free_obj(
                (adb_RSAKeyValueType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_lang_type0") == 0)
            {
                return adb_lang_type0_free_obj(
                (adb_lang_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_type_type1") == 0)
            {
                return adb_type_type1_free_obj(
                (adb_type_type1_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_type_type0") == 0)
            {
                return adb_type_type0_free_obj(
                (adb_type_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_lastmark_type0") == 0)
            {
                return adb_lastmark_type0_free_obj(
                (adb_lastmark_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_SignedInfoType") == 0)
            {
                return adb_SignedInfoType_free_obj(
                (adb_SignedInfoType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_operationNotSupportedFaultType") == 0)
            {
                return adb_operationNotSupportedFaultType_free_obj(
                (adb_operationNotSupportedFaultType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_title_type0") == 0)
            {
                return adb_title_type0_free_obj(
                (adb_title_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_resource_type0") == 0)
            {
                return adb_resource_type0_free_obj(
                (adb_resource_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_bookmark_type0") == 0)
            {
                return adb_bookmark_type0_free_obj(
                (adb_bookmark_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_SignatureMethodType") == 0)
            {
                return adb_SignatureMethodType_free_obj(
                (adb_SignatureMethodType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_TransformType") == 0)
            {
                return adb_TransformType_free_obj(
                (adb_TransformType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_RetrievalMethodType") == 0)
            {
                return adb_RetrievalMethodType_free_obj(
                (adb_RetrievalMethodType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_SignaturePropertyType") == 0)
            {
                return adb_SignaturePropertyType_free_obj(
                (adb_SignaturePropertyType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_inputQuestion_type0") == 0)
            {
                return adb_inputQuestion_type0_free_obj(
                (adb_inputQuestion_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_DigestValueType") == 0)
            {
                return adb_DigestValueType_free_obj(
                (adb_DigestValueType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_contentList_type0") == 0)
            {
                return adb_contentList_type0_free_obj(
                (adb_contentList_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_EncryptedKeyType") == 0)
            {
                return adb_EncryptedKeyType_free_obj(
                (adb_EncryptedKeyType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_ReferenceType") == 0)
            {
                return adb_ReferenceType_free_obj(
                (adb_ReferenceType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_KeyInfoType") == 0)
            {
                return adb_KeyInfoType_free_obj(
                (adb_KeyInfoType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedContentFormats_type0") == 0)
            {
                return adb_supportedContentFormats_type0_free_obj(
                (adb_supportedContentFormats_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_serviceAttributes_type0") == 0)
            {
                return adb_serviceAttributes_type0_free_obj(
                (adb_serviceAttributes_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_serviceProvider_type0") == 0)
            {
                return adb_serviceProvider_type0_free_obj(
                (adb_serviceProvider_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_DigestMethodType") == 0)
            {
                return adb_DigestMethodType_free_obj(
                (adb_DigestMethodType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_UAKType") == 0)
            {
                return adb_UAKType_free_obj(
                (adb_UAKType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_SignatureValueType") == 0)
            {
                return adb_SignatureValueType_free_obj(
                (adb_SignatureValueType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_operation_type1") == 0)
            {
                return adb_operation_type1_free_obj(
                (adb_operation_type1_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_ManifestType") == 0)
            {
                return adb_ManifestType_free_obj(
                (adb_ManifestType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedInputTypes_type0") == 0)
            {
                return adb_supportedInputTypes_type0_free_obj(
                (adb_supportedInputTypes_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_HMACOutputLengthType") == 0)
            {
                return adb_HMACOutputLengthType_free_obj(
                (adb_HMACOutputLengthType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_keyRing_type0") == 0)
            {
                return adb_keyRing_type0_free_obj(
                (adb_keyRing_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_EncryptionPropertiesType") == 0)
            {
                return adb_EncryptionPropertiesType_free_obj(
                (adb_EncryptionPropertiesType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedContentProtectionFormats_type0") == 0)
            {
                return adb_supportedContentProtectionFormats_type0_free_obj(
                (adb_supportedContentProtectionFormats_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_TransformsType") == 0)
            {
                return adb_TransformsType_free_obj(
                (adb_TransformsType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_CipherDataType") == 0)
            {
                return adb_CipherDataType_free_obj(
                (adb_CipherDataType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_EncryptedType") == 0)
            {
                return adb_EncryptedType_free_obj(
                (adb_EncryptedType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_mimeType_type0") == 0)
            {
                return adb_mimeType_type0_free_obj(
                (adb_mimeType_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_note_type0") == 0)
            {
                return adb_note_type0_free_obj(
                (adb_note_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_dir_type0") == 0)
            {
                return adb_dir_type0_free_obj(
                (adb_dir_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_internalServerErrorFaultType") == 0)
            {
                return adb_internalServerErrorFaultType_free_obj(
                (adb_internalServerErrorFaultType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_KeySizeType") == 0)
            {
                return adb_KeySizeType_free_obj(
                (adb_KeySizeType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_config_type0") == 0)
            {
                return adb_config_type0_free_obj(
                (adb_config_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_questions_type0") == 0)
            {
                return adb_questions_type0_free_obj(
                (adb_questions_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_audio_type0") == 0)
            {
                return adb_audio_type0_free_obj(
                (adb_audio_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedUplinkAudioCodecs_type0") == 0)
            {
                return adb_supportedUplinkAudioCodecs_type0_free_obj(
                (adb_supportedUplinkAudioCodecs_type0_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_IdString") == 0)
            {
                return adb_IdString_free_obj(
                (adb_IdString_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_ObjectType") == 0)
            {
                return adb_ObjectType_free_obj(
                (adb_ObjectType_t*) _object, env);
            }
            
            if (axutil_strcmp(default_type, "adb_bookmarkContent") == 0)
            {
                return adb_bookmarkContent_free_obj(
                (adb_bookmarkContent_t*) _object, env);
            }

            if (axutil_strcmp(default_type, "adb_bookmarkContentChoice_type0") == 0)
            {
                return adb_bookmarkContentChoice_type0_free_obj(
                (adb_bookmarkContentChoice_type0_t*) _object, env);
            }

            if (axutil_strcmp(default_type, "adb_bookmarkContentSequence_type0") == 0)
            {
                return adb_bookmarkContentSequence_type0_free_obj(
                (adb_bookmarkContentSequence_type0_t*) _object, env);
            }

            if (axutil_strcmp(default_type, "adb_bookmarkSetChoice_type1") == 0)
            {
                return adb_bookmarkSetChoice_type1_free_obj(
                (adb_bookmarkSetChoice_type1_t*) _object, env);
            }

            if (axutil_strcmp(default_type, "adb_hiliteContent") == 0)
            {
                return adb_hiliteContent_free_obj(
                (adb_hiliteContent_t*) _object, env);
            }

            if (axutil_strcmp(default_type, "adb_hiliteContentChoice_type0") == 0)
            {
                return adb_hiliteContentChoice_type0_free_obj(
                (adb_hiliteContentChoice_type0_t*) _object, env);
            }

            if (axutil_strcmp(default_type, "adb_hiliteContentSequence_type0") == 0)
            {
                return adb_hiliteContentSequence_type0_free_obj(
                (adb_hiliteContentSequence_type0_t*) _object, env);
            }

            if (axutil_strcmp(default_type, "adb_noteSequence_type0") == 0)
            {
                return adb_noteSequence_type0_free_obj(
                (adb_noteSequence_type0_t*) _object, env);
            }


            return AXIS2_FAILURE;
        }

        axis2_status_t AXIS2_CALL
        axis2_extension_mapper_deserialize(
            adb_stubtype_t* _object,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs,
            axis2_char_t *default_type)
        {
            if (_object != NULL && adb_internaltype_get_type(_object) != NULL)
            {
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_operation_type1") == 0)
                {
                    return adb_operation_type1_deserialize_obj(
                    (adb_operation_type1_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_label_type0") == 0)
                {
                    return adb_label_type0_deserialize_obj(
                    (adb_label_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_contentItem_type0") == 0)
                {
                    return adb_contentItem_type0_deserialize_obj(
                    (adb_contentItem_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_metadata_type0") == 0)
                {
                    return adb_metadata_type0_deserialize_obj(
                    (adb_metadata_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_EncryptedDataType") == 0)
                {
                    return adb_EncryptedDataType_deserialize_obj(
                    (adb_EncryptedDataType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_hiliteEnd_type0") == 0)
                {
                    return adb_hiliteEnd_type0_deserialize_obj(
                    (adb_hiliteEnd_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_audio_type1") == 0)
                {
                    return adb_audio_type1_deserialize_obj(
                    (adb_audio_type1_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_EncryptionPropertyType") == 0)
                {
                    return adb_EncryptionPropertyType_deserialize_obj(
                    (adb_EncryptionPropertyType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_ReferenceList_type0") == 0)
                {
                    return adb_ReferenceList_type0_deserialize_obj(
                    (adb_ReferenceList_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_userResponses_type0") == 0)
                {
                    return adb_userResponses_type0_deserialize_obj(
                    (adb_userResponses_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_announcements_type0") == 0)
                {
                    return adb_announcements_type0_deserialize_obj(
                    (adb_announcements_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_KeyExchange_type0") == 0)
                {
                    return adb_KeyExchange_type0_deserialize_obj(
                    (adb_KeyExchange_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_hilite_type0") == 0)
                {
                    return adb_hilite_type0_deserialize_obj(
                    (adb_hilite_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_PGPDataType") == 0)
                {
                    return adb_PGPDataType_deserialize_obj(
                    (adb_PGPDataType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_choices_type0") == 0)
                {
                    return adb_choices_type0_deserialize_obj(
                    (adb_choices_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_SignatureType") == 0)
                {
                    return adb_SignatureType_deserialize_obj(
                    (adb_SignatureType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_noActiveSessionFaultType") == 0)
                {
                    return adb_noActiveSessionFaultType_deserialize_obj(
                    (adb_noActiveSessionFaultType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_sample_type0") == 0)
                {
                    return adb_sample_type0_deserialize_obj(
                    (adb_sample_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_choice_type0") == 0)
                {
                    return adb_choice_type0_deserialize_obj(
                    (adb_choice_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_meta_type0") == 0)
                {
                    return adb_meta_type0_deserialize_obj(
                    (adb_meta_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_resources_type0") == 0)
                {
                    return adb_resources_type0_deserialize_obj(
                    (adb_resources_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_SignaturePropertiesType") == 0)
                {
                    return adb_SignaturePropertiesType_deserialize_obj(
                    (adb_SignaturePropertiesType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_service_type0") == 0)
                {
                    return adb_service_type0_deserialize_obj(
                    (adb_service_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_SimpleLiteral") == 0)
                {
                    return adb_SimpleLiteral_deserialize_obj(
                    (adb_SimpleLiteral_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_X509IssuerSerialType") == 0)
                {
                    return adb_X509IssuerSerialType_deserialize_obj(
                    (adb_X509IssuerSerialType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_DSAKeyValueType") == 0)
                {
                    return adb_DSAKeyValueType_deserialize_obj(
                    (adb_DSAKeyValueType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_data_type1") == 0)
                {
                    return adb_data_type1_deserialize_obj(
                    (adb_data_type1_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_supportedMimeTypes_type0") == 0)
                {
                    return adb_supportedMimeTypes_type0_deserialize_obj(
                    (adb_supportedMimeTypes_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_KeyValueType") == 0)
                {
                    return adb_KeyValueType_deserialize_obj(
                    (adb_KeyValueType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_ReferenceType") == 0)
                {
                    return adb_ReferenceType_deserialize_obj(
                    (adb_ReferenceTypeE2_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_userResponse_type0") == 0)
                {
                    return adb_userResponse_type0_deserialize_obj(
                    (adb_userResponse_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_hiliteStart_type0") == 0)
                {
                    return adb_hiliteStart_type0_deserialize_obj(
                    (adb_hiliteStart_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_bookmarkSet_type0") == 0)
                {
                    return adb_bookmarkSet_type0_deserialize_obj(
                    (adb_bookmarkSet_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_CryptoBinary") == 0)
                {
                    return adb_CryptoBinary_deserialize_obj(
                    (adb_CryptoBinary_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_SPKIDataType") == 0)
                {
                    return adb_SPKIDataType_deserialize_obj(
                    (adb_SPKIDataType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_CanonicalizationMethodType") == 0)
                {
                    return adb_CanonicalizationMethodType_deserialize_obj(
                    (adb_CanonicalizationMethodType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_AgreementMethodType") == 0)
                {
                    return adb_AgreementMethodType_deserialize_obj(
                    (adb_AgreementMethodType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_EncryptionMethodType") == 0)
                {
                    return adb_EncryptionMethodType_deserialize_obj(
                    (adb_EncryptionMethodType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_announcement_type0") == 0)
                {
                    return adb_announcement_type0_deserialize_obj(
                    (adb_announcement_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_supportedContentSelectionMethods_type0") == 0)
                {
                    return adb_supportedContentSelectionMethods_type0_deserialize_obj(
                    (adb_supportedContentSelectionMethods_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_CipherReferenceType") == 0)
                {
                    return adb_CipherReferenceType_deserialize_obj(
                    (adb_CipherReferenceType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_X509DataType") == 0)
                {
                    return adb_X509DataType_deserialize_obj(
                    (adb_X509DataType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_priority_type0") == 0)
                {
                    return adb_priority_type0_deserialize_obj(
                    (adb_priority_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_TransformsType") == 0)
                {
                    return adb_TransformsType_deserialize_obj(
                    (adb_TransformsTypeE1_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_readingSystemAttributes_type0") == 0)
                {
                    return adb_readingSystemAttributes_type0_deserialize_obj(
                    (adb_readingSystemAttributes_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_read_type0") == 0)
                {
                    return adb_read_type0_deserialize_obj(
                    (adb_read_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_input_type0") == 0)
                {
                    return adb_input_type0_deserialize_obj(
                    (adb_input_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_KeyPairType") == 0)
                {
                    return adb_KeyPairType_deserialize_obj(
                    (adb_KeyPairType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_additionalTransferProtocols_type0") == 0)
                {
                    return adb_additionalTransferProtocols_type0_deserialize_obj(
                    (adb_additionalTransferProtocols_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_method_type1") == 0)
                {
                    return adb_method_type1_deserialize_obj(
                    (adb_method_type1_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_contentMetadata_type0") == 0)
                {
                    return adb_contentMetadata_type0_deserialize_obj(
                    (adb_contentMetadata_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_invalidParameterFaultType") == 0)
                {
                    return adb_invalidParameterFaultType_deserialize_obj(
                    (adb_invalidParameterFaultType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_inputTypes_type0") == 0)
                {
                    return adb_inputTypes_type0_deserialize_obj(
                    (adb_inputTypes_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_IssuerType") == 0)
                {
                    return adb_IssuerType_deserialize_obj(
                    (adb_IssuerType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_KeysType") == 0)
                {
                    return adb_KeysType_deserialize_obj(
                    (adb_KeysType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_protectionFormat_type1") == 0)
                {
                    return adb_protectionFormat_type1_deserialize_obj(
                    (adb_protectionFormat_type1_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_multipleChoiceQuestion_type0") == 0)
                {
                    return adb_multipleChoiceQuestion_type0_deserialize_obj(
                    (adb_multipleChoiceQuestion_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_invalidOperationFaultType") == 0)
                {
                    return adb_invalidOperationFaultType_deserialize_obj(
                    (adb_invalidOperationFaultType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_supportedOptionalOperations_type0") == 0)
                {
                    return adb_supportedOptionalOperations_type0_deserialize_obj(
                    (adb_supportedOptionalOperations_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_RSAKeyValueType") == 0)
                {
                    return adb_RSAKeyValueType_deserialize_obj(
                    (adb_RSAKeyValueType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_lang_type0") == 0)
                {
                    return adb_lang_type0_deserialize_obj(
                    (adb_lang_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_type_type1") == 0)
                {
                    return adb_type_type1_deserialize_obj(
                    (adb_type_type1_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_type_type0") == 0)
                {
                    return adb_type_type0_deserialize_obj(
                    (adb_type_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_lastmark_type0") == 0)
                {
                    return adb_lastmark_type0_deserialize_obj(
                    (adb_lastmark_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_SignedInfoType") == 0)
                {
                    return adb_SignedInfoType_deserialize_obj(
                    (adb_SignedInfoType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_operationNotSupportedFaultType") == 0)
                {
                    return adb_operationNotSupportedFaultType_deserialize_obj(
                    (adb_operationNotSupportedFaultType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_title_type0") == 0)
                {
                    return adb_title_type0_deserialize_obj(
                    (adb_title_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_resource_type0") == 0)
                {
                    return adb_resource_type0_deserialize_obj(
                    (adb_resource_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_bookmark_type0") == 0)
                {
                    return adb_bookmark_type0_deserialize_obj(
                    (adb_bookmark_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_SignatureMethodType") == 0)
                {
                    return adb_SignatureMethodType_deserialize_obj(
                    (adb_SignatureMethodType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_TransformType") == 0)
                {
                    return adb_TransformType_deserialize_obj(
                    (adb_TransformType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_RetrievalMethodType") == 0)
                {
                    return adb_RetrievalMethodType_deserialize_obj(
                    (adb_RetrievalMethodType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_SignaturePropertyType") == 0)
                {
                    return adb_SignaturePropertyType_deserialize_obj(
                    (adb_SignaturePropertyType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_inputQuestion_type0") == 0)
                {
                    return adb_inputQuestion_type0_deserialize_obj(
                    (adb_inputQuestion_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_DigestValueType") == 0)
                {
                    return adb_DigestValueType_deserialize_obj(
                    (adb_DigestValueType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_contentList_type0") == 0)
                {
                    return adb_contentList_type0_deserialize_obj(
                    (adb_contentList_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_EncryptedKeyType") == 0)
                {
                    return adb_EncryptedKeyType_deserialize_obj(
                    (adb_EncryptedKeyType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_ReferenceType") == 0)
                {
                    return adb_ReferenceType_deserialize_obj(
                    (adb_ReferenceType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_KeyInfoType") == 0)
                {
                    return adb_KeyInfoType_deserialize_obj(
                    (adb_KeyInfoType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_supportedContentFormats_type0") == 0)
                {
                    return adb_supportedContentFormats_type0_deserialize_obj(
                    (adb_supportedContentFormats_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_serviceAttributes_type0") == 0)
                {
                    return adb_serviceAttributes_type0_deserialize_obj(
                    (adb_serviceAttributes_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_serviceProvider_type0") == 0)
                {
                    return adb_serviceProvider_type0_deserialize_obj(
                    (adb_serviceProvider_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_DigestMethodType") == 0)
                {
                    return adb_DigestMethodType_deserialize_obj(
                    (adb_DigestMethodType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_UAKType") == 0)
                {
                    return adb_UAKType_deserialize_obj(
                    (adb_UAKType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_SignatureValueType") == 0)
                {
                    return adb_SignatureValueType_deserialize_obj(
                    (adb_SignatureValueType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_operation_type1") == 0)
                {
                    return adb_operation_type1_deserialize_obj(
                    (adb_operation_type1_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_ManifestType") == 0)
                {
                    return adb_ManifestType_deserialize_obj(
                    (adb_ManifestType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_supportedInputTypes_type0") == 0)
                {
                    return adb_supportedInputTypes_type0_deserialize_obj(
                    (adb_supportedInputTypes_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_HMACOutputLengthType") == 0)
                {
                    return adb_HMACOutputLengthType_deserialize_obj(
                    (adb_HMACOutputLengthType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_keyRing_type0") == 0)
                {
                    return adb_keyRing_type0_deserialize_obj(
                    (adb_keyRing_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_EncryptionPropertiesType") == 0)
                {
                    return adb_EncryptionPropertiesType_deserialize_obj(
                    (adb_EncryptionPropertiesType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_supportedContentProtectionFormats_type0") == 0)
                {
                    return adb_supportedContentProtectionFormats_type0_deserialize_obj(
                    (adb_supportedContentProtectionFormats_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_TransformsType") == 0)
                {
                    return adb_TransformsType_deserialize_obj(
                    (adb_TransformsType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_CipherDataType") == 0)
                {
                    return adb_CipherDataType_deserialize_obj(
                    (adb_CipherDataType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_EncryptedType") == 0)
                {
                    return adb_EncryptedType_deserialize_obj(
                    (adb_EncryptedType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_mimeType_type0") == 0)
                {
                    return adb_mimeType_type0_deserialize_obj(
                    (adb_mimeType_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_note_type0") == 0)
                {
                    return adb_note_type0_deserialize_obj(
                    (adb_note_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_dir_type0") == 0)
                {
                    return adb_dir_type0_deserialize_obj(
                    (adb_dir_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_internalServerErrorFaultType") == 0)
                {
                    return adb_internalServerErrorFaultType_deserialize_obj(
                    (adb_internalServerErrorFaultType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_KeySizeType") == 0)
                {
                    return adb_KeySizeType_deserialize_obj(
                    (adb_KeySizeType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_config_type0") == 0)
                {
                    return adb_config_type0_deserialize_obj(
                    (adb_config_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_questions_type0") == 0)
                {
                    return adb_questions_type0_deserialize_obj(
                    (adb_questions_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_audio_type0") == 0)
                {
                    return adb_audio_type0_deserialize_obj(
                    (adb_audio_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_supportedUplinkAudioCodecs_type0") == 0)
                {
                    return adb_supportedUplinkAudioCodecs_type0_deserialize_obj(
                    (adb_supportedUplinkAudioCodecs_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_IdString") == 0)
                {
                    return adb_IdString_deserialize_obj(
                    (adb_IdString_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_ObjectType") == 0)
                {
                    return adb_ObjectType_deserialize_obj(
                    (adb_ObjectType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
                }
            
            }

            
            if (axutil_strcmp(default_type, "adb_operation_type1") == 0)
            {
                return adb_operation_type1_deserialize_obj(
                (adb_operation_type1_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_label_type0") == 0)
            {
                return adb_label_type0_deserialize_obj(
                (adb_label_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_contentItem_type0") == 0)
            {
                return adb_contentItem_type0_deserialize_obj(
                (adb_contentItem_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_metadata_type0") == 0)
            {
                return adb_metadata_type0_deserialize_obj(
                (adb_metadata_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_EncryptedDataType") == 0)
            {
                return adb_EncryptedDataType_deserialize_obj(
                (adb_EncryptedDataType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_hiliteEnd_type0") == 0)
            {
                return adb_hiliteEnd_type0_deserialize_obj(
                (adb_hiliteEnd_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_audio_type1") == 0)
            {
                return adb_audio_type1_deserialize_obj(
                (adb_audio_type1_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_EncryptionPropertyType") == 0)
            {
                return adb_EncryptionPropertyType_deserialize_obj(
                (adb_EncryptionPropertyType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_ReferenceList_type0") == 0)
            {
                return adb_ReferenceList_type0_deserialize_obj(
                (adb_ReferenceList_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_userResponses_type0") == 0)
            {
                return adb_userResponses_type0_deserialize_obj(
                (adb_userResponses_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_announcements_type0") == 0)
            {
                return adb_announcements_type0_deserialize_obj(
                (adb_announcements_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_KeyExchange_type0") == 0)
            {
                return adb_KeyExchange_type0_deserialize_obj(
                (adb_KeyExchange_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_hilite_type0") == 0)
            {
                return adb_hilite_type0_deserialize_obj(
                (adb_hilite_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_PGPDataType") == 0)
            {
                return adb_PGPDataType_deserialize_obj(
                (adb_PGPDataType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_choices_type0") == 0)
            {
                return adb_choices_type0_deserialize_obj(
                (adb_choices_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_SignatureType") == 0)
            {
                return adb_SignatureType_deserialize_obj(
                (adb_SignatureType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_noActiveSessionFaultType") == 0)
            {
                return adb_noActiveSessionFaultType_deserialize_obj(
                (adb_noActiveSessionFaultType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_sample_type0") == 0)
            {
                return adb_sample_type0_deserialize_obj(
                (adb_sample_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_choice_type0") == 0)
            {
                return adb_choice_type0_deserialize_obj(
                (adb_choice_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_meta_type0") == 0)
            {
                return adb_meta_type0_deserialize_obj(
                (adb_meta_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_resources_type0") == 0)
            {
                return adb_resources_type0_deserialize_obj(
                (adb_resources_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_SignaturePropertiesType") == 0)
            {
                return adb_SignaturePropertiesType_deserialize_obj(
                (adb_SignaturePropertiesType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_service_type0") == 0)
            {
                return adb_service_type0_deserialize_obj(
                (adb_service_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_SimpleLiteral") == 0)
            {
                return adb_SimpleLiteral_deserialize_obj(
                (adb_SimpleLiteral_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_X509IssuerSerialType") == 0)
            {
                return adb_X509IssuerSerialType_deserialize_obj(
                (adb_X509IssuerSerialType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_DSAKeyValueType") == 0)
            {
                return adb_DSAKeyValueType_deserialize_obj(
                (adb_DSAKeyValueType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_data_type1") == 0)
            {
                return adb_data_type1_deserialize_obj(
                (adb_data_type1_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedMimeTypes_type0") == 0)
            {
                return adb_supportedMimeTypes_type0_deserialize_obj(
                (adb_supportedMimeTypes_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_KeyValueType") == 0)
            {
                return adb_KeyValueType_deserialize_obj(
                (adb_KeyValueType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_ReferenceType") == 0)
            {
                return adb_ReferenceType_deserialize_obj(
                (adb_ReferenceTypeE2_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_userResponse_type0") == 0)
            {
                return adb_userResponse_type0_deserialize_obj(
                (adb_userResponse_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_hiliteStart_type0") == 0)
            {
                return adb_hiliteStart_type0_deserialize_obj(
                (adb_hiliteStart_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_bookmarkSet_type0") == 0)
            {
                return adb_bookmarkSet_type0_deserialize_obj(
                (adb_bookmarkSet_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_CryptoBinary") == 0)
            {
                return adb_CryptoBinary_deserialize_obj(
                (adb_CryptoBinary_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_SPKIDataType") == 0)
            {
                return adb_SPKIDataType_deserialize_obj(
                (adb_SPKIDataType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_CanonicalizationMethodType") == 0)
            {
                return adb_CanonicalizationMethodType_deserialize_obj(
                (adb_CanonicalizationMethodType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_AgreementMethodType") == 0)
            {
                return adb_AgreementMethodType_deserialize_obj(
                (adb_AgreementMethodType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_EncryptionMethodType") == 0)
            {
                return adb_EncryptionMethodType_deserialize_obj(
                (adb_EncryptionMethodType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_announcement_type0") == 0)
            {
                return adb_announcement_type0_deserialize_obj(
                (adb_announcement_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedContentSelectionMethods_type0") == 0)
            {
                return adb_supportedContentSelectionMethods_type0_deserialize_obj(
                (adb_supportedContentSelectionMethods_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_CipherReferenceType") == 0)
            {
                return adb_CipherReferenceType_deserialize_obj(
                (adb_CipherReferenceType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_X509DataType") == 0)
            {
                return adb_X509DataType_deserialize_obj(
                (adb_X509DataType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_priority_type0") == 0)
            {
                return adb_priority_type0_deserialize_obj(
                (adb_priority_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_TransformsType") == 0)
            {
                return adb_TransformsType_deserialize_obj(
                (adb_TransformsTypeE1_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_readingSystemAttributes_type0") == 0)
            {
                return adb_readingSystemAttributes_type0_deserialize_obj(
                (adb_readingSystemAttributes_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_read_type0") == 0)
            {
                return adb_read_type0_deserialize_obj(
                (adb_read_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_input_type0") == 0)
            {
                return adb_input_type0_deserialize_obj(
                (adb_input_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_KeyPairType") == 0)
            {
                return adb_KeyPairType_deserialize_obj(
                (adb_KeyPairType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_additionalTransferProtocols_type0") == 0)
            {
                return adb_additionalTransferProtocols_type0_deserialize_obj(
                (adb_additionalTransferProtocols_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_method_type1") == 0)
            {
                return adb_method_type1_deserialize_obj(
                (adb_method_type1_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_contentMetadata_type0") == 0)
            {
                return adb_contentMetadata_type0_deserialize_obj(
                (adb_contentMetadata_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_invalidParameterFaultType") == 0)
            {
                return adb_invalidParameterFaultType_deserialize_obj(
                (adb_invalidParameterFaultType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_inputTypes_type0") == 0)
            {
                return adb_inputTypes_type0_deserialize_obj(
                (adb_inputTypes_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_IssuerType") == 0)
            {
                return adb_IssuerType_deserialize_obj(
                (adb_IssuerType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_KeysType") == 0)
            {
                return adb_KeysType_deserialize_obj(
                (adb_KeysType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_protectionFormat_type1") == 0)
            {
                return adb_protectionFormat_type1_deserialize_obj(
                (adb_protectionFormat_type1_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_multipleChoiceQuestion_type0") == 0)
            {
                return adb_multipleChoiceQuestion_type0_deserialize_obj(
                (adb_multipleChoiceQuestion_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_invalidOperationFaultType") == 0)
            {
                return adb_invalidOperationFaultType_deserialize_obj(
                (adb_invalidOperationFaultType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedOptionalOperations_type0") == 0)
            {
                return adb_supportedOptionalOperations_type0_deserialize_obj(
                (adb_supportedOptionalOperations_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_RSAKeyValueType") == 0)
            {
                return adb_RSAKeyValueType_deserialize_obj(
                (adb_RSAKeyValueType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_lang_type0") == 0)
            {
                return adb_lang_type0_deserialize_obj(
                (adb_lang_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_type_type1") == 0)
            {
                return adb_type_type1_deserialize_obj(
                (adb_type_type1_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_type_type0") == 0)
            {
                return adb_type_type0_deserialize_obj(
                (adb_type_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_lastmark_type0") == 0)
            {
                return adb_lastmark_type0_deserialize_obj(
                (adb_lastmark_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_SignedInfoType") == 0)
            {
                return adb_SignedInfoType_deserialize_obj(
                (adb_SignedInfoType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_operationNotSupportedFaultType") == 0)
            {
                return adb_operationNotSupportedFaultType_deserialize_obj(
                (adb_operationNotSupportedFaultType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_title_type0") == 0)
            {
                return adb_title_type0_deserialize_obj(
                (adb_title_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_resource_type0") == 0)
            {
                return adb_resource_type0_deserialize_obj(
                (adb_resource_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_bookmark_type0") == 0)
            {
                return adb_bookmark_type0_deserialize_obj(
                (adb_bookmark_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_SignatureMethodType") == 0)
            {
                return adb_SignatureMethodType_deserialize_obj(
                (adb_SignatureMethodType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_TransformType") == 0)
            {
                return adb_TransformType_deserialize_obj(
                (adb_TransformType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_RetrievalMethodType") == 0)
            {
                return adb_RetrievalMethodType_deserialize_obj(
                (adb_RetrievalMethodType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_SignaturePropertyType") == 0)
            {
                return adb_SignaturePropertyType_deserialize_obj(
                (adb_SignaturePropertyType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_inputQuestion_type0") == 0)
            {
                return adb_inputQuestion_type0_deserialize_obj(
                (adb_inputQuestion_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_DigestValueType") == 0)
            {
                return adb_DigestValueType_deserialize_obj(
                (adb_DigestValueType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_contentList_type0") == 0)
            {
                return adb_contentList_type0_deserialize_obj(
                (adb_contentList_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_EncryptedKeyType") == 0)
            {
                return adb_EncryptedKeyType_deserialize_obj(
                (adb_EncryptedKeyType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_ReferenceType") == 0)
            {
                return adb_ReferenceType_deserialize_obj(
                (adb_ReferenceType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_KeyInfoType") == 0)
            {
                return adb_KeyInfoType_deserialize_obj(
                (adb_KeyInfoType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedContentFormats_type0") == 0)
            {
                return adb_supportedContentFormats_type0_deserialize_obj(
                (adb_supportedContentFormats_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_serviceAttributes_type0") == 0)
            {
                return adb_serviceAttributes_type0_deserialize_obj(
                (adb_serviceAttributes_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_serviceProvider_type0") == 0)
            {
                return adb_serviceProvider_type0_deserialize_obj(
                (adb_serviceProvider_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_DigestMethodType") == 0)
            {
                return adb_DigestMethodType_deserialize_obj(
                (adb_DigestMethodType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_UAKType") == 0)
            {
                return adb_UAKType_deserialize_obj(
                (adb_UAKType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_SignatureValueType") == 0)
            {
                return adb_SignatureValueType_deserialize_obj(
                (adb_SignatureValueType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_operation_type1") == 0)
            {
                return adb_operation_type1_deserialize_obj(
                (adb_operation_type1_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_ManifestType") == 0)
            {
                return adb_ManifestType_deserialize_obj(
                (adb_ManifestType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedInputTypes_type0") == 0)
            {
                return adb_supportedInputTypes_type0_deserialize_obj(
                (adb_supportedInputTypes_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_HMACOutputLengthType") == 0)
            {
                return adb_HMACOutputLengthType_deserialize_obj(
                (adb_HMACOutputLengthType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_keyRing_type0") == 0)
            {
                return adb_keyRing_type0_deserialize_obj(
                (adb_keyRing_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_EncryptionPropertiesType") == 0)
            {
                return adb_EncryptionPropertiesType_deserialize_obj(
                (adb_EncryptionPropertiesType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedContentProtectionFormats_type0") == 0)
            {
                return adb_supportedContentProtectionFormats_type0_deserialize_obj(
                (adb_supportedContentProtectionFormats_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_TransformsType") == 0)
            {
                return adb_TransformsType_deserialize_obj(
                (adb_TransformsType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_CipherDataType") == 0)
            {
                return adb_CipherDataType_deserialize_obj(
                (adb_CipherDataType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_EncryptedType") == 0)
            {
                return adb_EncryptedType_deserialize_obj(
                (adb_EncryptedType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_mimeType_type0") == 0)
            {
                return adb_mimeType_type0_deserialize_obj(
                (adb_mimeType_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_note_type0") == 0)
            {
                return adb_note_type0_deserialize_obj(
                (adb_note_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_dir_type0") == 0)
            {
                return adb_dir_type0_deserialize_obj(
                (adb_dir_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_internalServerErrorFaultType") == 0)
            {
                return adb_internalServerErrorFaultType_deserialize_obj(
                (adb_internalServerErrorFaultType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_KeySizeType") == 0)
            {
                return adb_KeySizeType_deserialize_obj(
                (adb_KeySizeType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_config_type0") == 0)
            {
                return adb_config_type0_deserialize_obj(
                (adb_config_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_questions_type0") == 0)
            {
                return adb_questions_type0_deserialize_obj(
                (adb_questions_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_audio_type0") == 0)
            {
                return adb_audio_type0_deserialize_obj(
                (adb_audio_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedUplinkAudioCodecs_type0") == 0)
            {
                return adb_supportedUplinkAudioCodecs_type0_deserialize_obj(
                (adb_supportedUplinkAudioCodecs_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_IdString") == 0)
            {
                return adb_IdString_deserialize_obj(
                (adb_IdString_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_ObjectType") == 0)
            {
                return adb_ObjectType_deserialize_obj(
                (adb_ObjectType_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }
            
            if (axutil_strcmp(default_type, "adb_bookmarkContent") == 0)
            {
                return adb_bookmarkContent_deserialize_obj(
                (adb_bookmarkContent_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }

            if (axutil_strcmp(default_type, "adb_bookmarkContentChoice_type0") == 0)
            {
                return adb_bookmarkContentChoice_type0_deserialize_obj(
                (adb_bookmarkContentChoice_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }

            if (axutil_strcmp(default_type, "adb_bookmarkContentSequence_type0") == 0)
            {
                return adb_bookmarkContentSequence_type0_deserialize_obj(
                (adb_bookmarkContentSequence_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }

            if (axutil_strcmp(default_type, "adb_bookmarkSetChoice_type1") == 0)
            {
                return adb_bookmarkSetChoice_type1_deserialize_obj(
                (adb_bookmarkSetChoice_type1_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }

            if (axutil_strcmp(default_type, "adb_hiliteContent") == 0)
            {
                return adb_hiliteContent_deserialize_obj(
                (adb_hiliteContent_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }

            if (axutil_strcmp(default_type, "adb_hiliteContentChoice_type0") == 0)
            {
                return adb_hiliteContentChoice_type0_deserialize_obj(
                (adb_hiliteContentChoice_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }

            if (axutil_strcmp(default_type, "adb_hiliteContentSequence_type0") == 0)
            {
                return adb_hiliteContentSequence_type0_deserialize_obj(
                (adb_hiliteContentSequence_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }

            if (axutil_strcmp(default_type, "adb_noteSequence_type0") == 0)
            {
                return adb_noteSequence_type0_deserialize_obj(
                (adb_noteSequence_type0_t*) _object, env, dp_parent, dp_is_early_node_valid, dont_care_minoccurs);
            }


            return AXIS2_FAILURE;
        }

        axiom_node_t* AXIS2_CALL
        axis2_extension_mapper_serialize(
            adb_stubtype_t* _object,
            const axutil_env_t *env,
            axiom_node_t* om_node,
            axiom_element_t *om_element,
            int tag_closed,
            axutil_hash_t *namespaces,
            int *next_ns_index,
            axis2_char_t *default_type)
        {
            if (_object != NULL && adb_internaltype_get_type(_object) != NULL)
            {
                
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_operation_type1") == 0)
                {
                    return adb_operation_type1_serialize_obj(
                    (adb_operation_type1_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_label_type0") == 0)
                {
                    return adb_label_type0_serialize_obj(
                    (adb_label_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_contentItem_type0") == 0)
                {
                    return adb_contentItem_type0_serialize_obj(
                    (adb_contentItem_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_metadata_type0") == 0)
                {
                    return adb_metadata_type0_serialize_obj(
                    (adb_metadata_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_EncryptedDataType") == 0)
                {
                    return adb_EncryptedDataType_serialize_obj(
                    (adb_EncryptedDataType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_hiliteEnd_type0") == 0)
                {
                    return adb_hiliteEnd_type0_serialize_obj(
                    (adb_hiliteEnd_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_audio_type1") == 0)
                {
                    return adb_audio_type1_serialize_obj(
                    (adb_audio_type1_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_EncryptionPropertyType") == 0)
                {
                    return adb_EncryptionPropertyType_serialize_obj(
                    (adb_EncryptionPropertyType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_ReferenceList_type0") == 0)
                {
                    return adb_ReferenceList_type0_serialize_obj(
                    (adb_ReferenceList_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_userResponses_type0") == 0)
                {
                    return adb_userResponses_type0_serialize_obj(
                    (adb_userResponses_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_announcements_type0") == 0)
                {
                    return adb_announcements_type0_serialize_obj(
                    (adb_announcements_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_KeyExchange_type0") == 0)
                {
                    return adb_KeyExchange_type0_serialize_obj(
                    (adb_KeyExchange_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_hilite_type0") == 0)
                {
                    return adb_hilite_type0_serialize_obj(
                    (adb_hilite_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_PGPDataType") == 0)
                {
                    return adb_PGPDataType_serialize_obj(
                    (adb_PGPDataType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_choices_type0") == 0)
                {
                    return adb_choices_type0_serialize_obj(
                    (adb_choices_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_SignatureType") == 0)
                {
                    return adb_SignatureType_serialize_obj(
                    (adb_SignatureType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_noActiveSessionFaultType") == 0)
                {
                    return adb_noActiveSessionFaultType_serialize_obj(
                    (adb_noActiveSessionFaultType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_sample_type0") == 0)
                {
                    return adb_sample_type0_serialize_obj(
                    (adb_sample_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_choice_type0") == 0)
                {
                    return adb_choice_type0_serialize_obj(
                    (adb_choice_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_meta_type0") == 0)
                {
                    return adb_meta_type0_serialize_obj(
                    (adb_meta_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_resources_type0") == 0)
                {
                    return adb_resources_type0_serialize_obj(
                    (adb_resources_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_SignaturePropertiesType") == 0)
                {
                    return adb_SignaturePropertiesType_serialize_obj(
                    (adb_SignaturePropertiesType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_service_type0") == 0)
                {
                    return adb_service_type0_serialize_obj(
                    (adb_service_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_SimpleLiteral") == 0)
                {
                    return adb_SimpleLiteral_serialize_obj(
                    (adb_SimpleLiteral_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_X509IssuerSerialType") == 0)
                {
                    return adb_X509IssuerSerialType_serialize_obj(
                    (adb_X509IssuerSerialType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_DSAKeyValueType") == 0)
                {
                    return adb_DSAKeyValueType_serialize_obj(
                    (adb_DSAKeyValueType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_data_type1") == 0)
                {
                    return adb_data_type1_serialize_obj(
                    (adb_data_type1_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_supportedMimeTypes_type0") == 0)
                {
                    return adb_supportedMimeTypes_type0_serialize_obj(
                    (adb_supportedMimeTypes_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_KeyValueType") == 0)
                {
                    return adb_KeyValueType_serialize_obj(
                    (adb_KeyValueType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_ReferenceType") == 0)
                {
                    return adb_ReferenceType_serialize_obj(
                    (adb_ReferenceTypeE2_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_userResponse_type0") == 0)
                {
                    return adb_userResponse_type0_serialize_obj(
                    (adb_userResponse_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_hiliteStart_type0") == 0)
                {
                    return adb_hiliteStart_type0_serialize_obj(
                    (adb_hiliteStart_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_bookmarkSet_type0") == 0)
                {
                    return adb_bookmarkSet_type0_serialize_obj(
                    (adb_bookmarkSet_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_CryptoBinary") == 0)
                {
                    return adb_CryptoBinary_serialize_obj(
                    (adb_CryptoBinary_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_SPKIDataType") == 0)
                {
                    return adb_SPKIDataType_serialize_obj(
                    (adb_SPKIDataType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_CanonicalizationMethodType") == 0)
                {
                    return adb_CanonicalizationMethodType_serialize_obj(
                    (adb_CanonicalizationMethodType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_AgreementMethodType") == 0)
                {
                    return adb_AgreementMethodType_serialize_obj(
                    (adb_AgreementMethodType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_EncryptionMethodType") == 0)
                {
                    return adb_EncryptionMethodType_serialize_obj(
                    (adb_EncryptionMethodType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_announcement_type0") == 0)
                {
                    return adb_announcement_type0_serialize_obj(
                    (adb_announcement_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_supportedContentSelectionMethods_type0") == 0)
                {
                    return adb_supportedContentSelectionMethods_type0_serialize_obj(
                    (adb_supportedContentSelectionMethods_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_CipherReferenceType") == 0)
                {
                    return adb_CipherReferenceType_serialize_obj(
                    (adb_CipherReferenceType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_X509DataType") == 0)
                {
                    return adb_X509DataType_serialize_obj(
                    (adb_X509DataType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_priority_type0") == 0)
                {
                    return adb_priority_type0_serialize_obj(
                    (adb_priority_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_TransformsType") == 0)
                {
                    return adb_TransformsType_serialize_obj(
                    (adb_TransformsTypeE1_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_readingSystemAttributes_type0") == 0)
                {
                    return adb_readingSystemAttributes_type0_serialize_obj(
                    (adb_readingSystemAttributes_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_read_type0") == 0)
                {
                    return adb_read_type0_serialize_obj(
                    (adb_read_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_input_type0") == 0)
                {
                    return adb_input_type0_serialize_obj(
                    (adb_input_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_KeyPairType") == 0)
                {
                    return adb_KeyPairType_serialize_obj(
                    (adb_KeyPairType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_additionalTransferProtocols_type0") == 0)
                {
                    return adb_additionalTransferProtocols_type0_serialize_obj(
                    (adb_additionalTransferProtocols_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_method_type1") == 0)
                {
                    return adb_method_type1_serialize_obj(
                    (adb_method_type1_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_contentMetadata_type0") == 0)
                {
                    return adb_contentMetadata_type0_serialize_obj(
                    (adb_contentMetadata_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_invalidParameterFaultType") == 0)
                {
                    return adb_invalidParameterFaultType_serialize_obj(
                    (adb_invalidParameterFaultType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_inputTypes_type0") == 0)
                {
                    return adb_inputTypes_type0_serialize_obj(
                    (adb_inputTypes_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_IssuerType") == 0)
                {
                    return adb_IssuerType_serialize_obj(
                    (adb_IssuerType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_KeysType") == 0)
                {
                    return adb_KeysType_serialize_obj(
                    (adb_KeysType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_protectionFormat_type1") == 0)
                {
                    return adb_protectionFormat_type1_serialize_obj(
                    (adb_protectionFormat_type1_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_multipleChoiceQuestion_type0") == 0)
                {
                    return adb_multipleChoiceQuestion_type0_serialize_obj(
                    (adb_multipleChoiceQuestion_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_invalidOperationFaultType") == 0)
                {
                    return adb_invalidOperationFaultType_serialize_obj(
                    (adb_invalidOperationFaultType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_supportedOptionalOperations_type0") == 0)
                {
                    return adb_supportedOptionalOperations_type0_serialize_obj(
                    (adb_supportedOptionalOperations_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_RSAKeyValueType") == 0)
                {
                    return adb_RSAKeyValueType_serialize_obj(
                    (adb_RSAKeyValueType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_lang_type0") == 0)
                {
                    return adb_lang_type0_serialize_obj(
                    (adb_lang_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_type_type1") == 0)
                {
                    return adb_type_type1_serialize_obj(
                    (adb_type_type1_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_type_type0") == 0)
                {
                    return adb_type_type0_serialize_obj(
                    (adb_type_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_lastmark_type0") == 0)
                {
                    return adb_lastmark_type0_serialize_obj(
                    (adb_lastmark_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_SignedInfoType") == 0)
                {
                    return adb_SignedInfoType_serialize_obj(
                    (adb_SignedInfoType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_operationNotSupportedFaultType") == 0)
                {
                    return adb_operationNotSupportedFaultType_serialize_obj(
                    (adb_operationNotSupportedFaultType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_title_type0") == 0)
                {
                    return adb_title_type0_serialize_obj(
                    (adb_title_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_resource_type0") == 0)
                {
                    return adb_resource_type0_serialize_obj(
                    (adb_resource_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_bookmark_type0") == 0)
                {
                    return adb_bookmark_type0_serialize_obj(
                    (adb_bookmark_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_SignatureMethodType") == 0)
                {
                    return adb_SignatureMethodType_serialize_obj(
                    (adb_SignatureMethodType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_TransformType") == 0)
                {
                    return adb_TransformType_serialize_obj(
                    (adb_TransformType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_RetrievalMethodType") == 0)
                {
                    return adb_RetrievalMethodType_serialize_obj(
                    (adb_RetrievalMethodType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_SignaturePropertyType") == 0)
                {
                    return adb_SignaturePropertyType_serialize_obj(
                    (adb_SignaturePropertyType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_inputQuestion_type0") == 0)
                {
                    return adb_inputQuestion_type0_serialize_obj(
                    (adb_inputQuestion_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_DigestValueType") == 0)
                {
                    return adb_DigestValueType_serialize_obj(
                    (adb_DigestValueType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_contentList_type0") == 0)
                {
                    return adb_contentList_type0_serialize_obj(
                    (adb_contentList_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_EncryptedKeyType") == 0)
                {
                    return adb_EncryptedKeyType_serialize_obj(
                    (adb_EncryptedKeyType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_ReferenceType") == 0)
                {
                    return adb_ReferenceType_serialize_obj(
                    (adb_ReferenceType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_KeyInfoType") == 0)
                {
                    return adb_KeyInfoType_serialize_obj(
                    (adb_KeyInfoType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_supportedContentFormats_type0") == 0)
                {
                    return adb_supportedContentFormats_type0_serialize_obj(
                    (adb_supportedContentFormats_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_serviceAttributes_type0") == 0)
                {
                    return adb_serviceAttributes_type0_serialize_obj(
                    (adb_serviceAttributes_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_serviceProvider_type0") == 0)
                {
                    return adb_serviceProvider_type0_serialize_obj(
                    (adb_serviceProvider_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_DigestMethodType") == 0)
                {
                    return adb_DigestMethodType_serialize_obj(
                    (adb_DigestMethodType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_UAKType") == 0)
                {
                    return adb_UAKType_serialize_obj(
                    (adb_UAKType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_SignatureValueType") == 0)
                {
                    return adb_SignatureValueType_serialize_obj(
                    (adb_SignatureValueType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_operation_type1") == 0)
                {
                    return adb_operation_type1_serialize_obj(
                    (adb_operation_type1_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_ManifestType") == 0)
                {
                    return adb_ManifestType_serialize_obj(
                    (adb_ManifestType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_supportedInputTypes_type0") == 0)
                {
                    return adb_supportedInputTypes_type0_serialize_obj(
                    (adb_supportedInputTypes_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_HMACOutputLengthType") == 0)
                {
                    return adb_HMACOutputLengthType_serialize_obj(
                    (adb_HMACOutputLengthType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_keyRing_type0") == 0)
                {
                    return adb_keyRing_type0_serialize_obj(
                    (adb_keyRing_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_EncryptionPropertiesType") == 0)
                {
                    return adb_EncryptionPropertiesType_serialize_obj(
                    (adb_EncryptionPropertiesType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_supportedContentProtectionFormats_type0") == 0)
                {
                    return adb_supportedContentProtectionFormats_type0_serialize_obj(
                    (adb_supportedContentProtectionFormats_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_TransformsType") == 0)
                {
                    return adb_TransformsType_serialize_obj(
                    (adb_TransformsType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_CipherDataType") == 0)
                {
                    return adb_CipherDataType_serialize_obj(
                    (adb_CipherDataType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_EncryptedType") == 0)
                {
                    return adb_EncryptedType_serialize_obj(
                    (adb_EncryptedType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_mimeType_type0") == 0)
                {
                    return adb_mimeType_type0_serialize_obj(
                    (adb_mimeType_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_note_type0") == 0)
                {
                    return adb_note_type0_serialize_obj(
                    (adb_note_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_dir_type0") == 0)
                {
                    return adb_dir_type0_serialize_obj(
                    (adb_dir_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_internalServerErrorFaultType") == 0)
                {
                    return adb_internalServerErrorFaultType_serialize_obj(
                    (adb_internalServerErrorFaultType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_KeySizeType") == 0)
                {
                    return adb_KeySizeType_serialize_obj(
                    (adb_KeySizeType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_config_type0") == 0)
                {
                    return adb_config_type0_serialize_obj(
                    (adb_config_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_questions_type0") == 0)
                {
                    return adb_questions_type0_serialize_obj(
                    (adb_questions_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_audio_type0") == 0)
                {
                    return adb_audio_type0_serialize_obj(
                    (adb_audio_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_supportedUplinkAudioCodecs_type0") == 0)
                {
                    return adb_supportedUplinkAudioCodecs_type0_serialize_obj(
                    (adb_supportedUplinkAudioCodecs_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_IdString") == 0)
                {
                    return adb_IdString_serialize_obj(
                    (adb_IdString_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
                if (axutil_strcmp(adb_internaltype_get_type(_object), "adb_ObjectType") == 0)
                {
                    return adb_ObjectType_serialize_obj(
                    (adb_ObjectType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
                }
            
            }

            
            if (axutil_strcmp(default_type, "adb_operation_type1") == 0)
            {
                return adb_operation_type1_serialize_obj(
                (adb_operation_type1_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_label_type0") == 0)
            {
                return adb_label_type0_serialize_obj(
                (adb_label_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_contentItem_type0") == 0)
            {
                return adb_contentItem_type0_serialize_obj(
                (adb_contentItem_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_metadata_type0") == 0)
            {
                return adb_metadata_type0_serialize_obj(
                (adb_metadata_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_EncryptedDataType") == 0)
            {
                return adb_EncryptedDataType_serialize_obj(
                (adb_EncryptedDataType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_hiliteEnd_type0") == 0)
            {
                return adb_hiliteEnd_type0_serialize_obj(
                (adb_hiliteEnd_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_audio_type1") == 0)
            {
                return adb_audio_type1_serialize_obj(
                (adb_audio_type1_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_EncryptionPropertyType") == 0)
            {
                return adb_EncryptionPropertyType_serialize_obj(
                (adb_EncryptionPropertyType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_ReferenceList_type0") == 0)
            {
                return adb_ReferenceList_type0_serialize_obj(
                (adb_ReferenceList_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_userResponses_type0") == 0)
            {
                return adb_userResponses_type0_serialize_obj(
                (adb_userResponses_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_announcements_type0") == 0)
            {
                return adb_announcements_type0_serialize_obj(
                (adb_announcements_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_KeyExchange_type0") == 0)
            {
                return adb_KeyExchange_type0_serialize_obj(
                (adb_KeyExchange_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_hilite_type0") == 0)
            {
                return adb_hilite_type0_serialize_obj(
                (adb_hilite_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_PGPDataType") == 0)
            {
                return adb_PGPDataType_serialize_obj(
                (adb_PGPDataType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_choices_type0") == 0)
            {
                return adb_choices_type0_serialize_obj(
                (adb_choices_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_SignatureType") == 0)
            {
                return adb_SignatureType_serialize_obj(
                (adb_SignatureType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_noActiveSessionFaultType") == 0)
            {
                return adb_noActiveSessionFaultType_serialize_obj(
                (adb_noActiveSessionFaultType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_sample_type0") == 0)
            {
                return adb_sample_type0_serialize_obj(
                (adb_sample_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_choice_type0") == 0)
            {
                return adb_choice_type0_serialize_obj(
                (adb_choice_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_meta_type0") == 0)
            {
                return adb_meta_type0_serialize_obj(
                (adb_meta_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_resources_type0") == 0)
            {
                return adb_resources_type0_serialize_obj(
                (adb_resources_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_SignaturePropertiesType") == 0)
            {
                return adb_SignaturePropertiesType_serialize_obj(
                (adb_SignaturePropertiesType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_service_type0") == 0)
            {
                return adb_service_type0_serialize_obj(
                (adb_service_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_SimpleLiteral") == 0)
            {
                return adb_SimpleLiteral_serialize_obj(
                (adb_SimpleLiteral_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_X509IssuerSerialType") == 0)
            {
                return adb_X509IssuerSerialType_serialize_obj(
                (adb_X509IssuerSerialType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_DSAKeyValueType") == 0)
            {
                return adb_DSAKeyValueType_serialize_obj(
                (adb_DSAKeyValueType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_data_type1") == 0)
            {
                return adb_data_type1_serialize_obj(
                (adb_data_type1_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedMimeTypes_type0") == 0)
            {
                return adb_supportedMimeTypes_type0_serialize_obj(
                (adb_supportedMimeTypes_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_KeyValueType") == 0)
            {
                return adb_KeyValueType_serialize_obj(
                (adb_KeyValueType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_ReferenceType") == 0)
            {
                return adb_ReferenceType_serialize_obj(
                (adb_ReferenceTypeE2_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_userResponse_type0") == 0)
            {
                return adb_userResponse_type0_serialize_obj(
                (adb_userResponse_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_hiliteStart_type0") == 0)
            {
                return adb_hiliteStart_type0_serialize_obj(
                (adb_hiliteStart_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_bookmarkSet_type0") == 0)
            {
                return adb_bookmarkSet_type0_serialize_obj(
                (adb_bookmarkSet_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_CryptoBinary") == 0)
            {
                return adb_CryptoBinary_serialize_obj(
                (adb_CryptoBinary_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_SPKIDataType") == 0)
            {
                return adb_SPKIDataType_serialize_obj(
                (adb_SPKIDataType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_CanonicalizationMethodType") == 0)
            {
                return adb_CanonicalizationMethodType_serialize_obj(
                (adb_CanonicalizationMethodType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_AgreementMethodType") == 0)
            {
                return adb_AgreementMethodType_serialize_obj(
                (adb_AgreementMethodType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_EncryptionMethodType") == 0)
            {
                return adb_EncryptionMethodType_serialize_obj(
                (adb_EncryptionMethodType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_announcement_type0") == 0)
            {
                return adb_announcement_type0_serialize_obj(
                (adb_announcement_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedContentSelectionMethods_type0") == 0)
            {
                return adb_supportedContentSelectionMethods_type0_serialize_obj(
                (adb_supportedContentSelectionMethods_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_CipherReferenceType") == 0)
            {
                return adb_CipherReferenceType_serialize_obj(
                (adb_CipherReferenceType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_X509DataType") == 0)
            {
                return adb_X509DataType_serialize_obj(
                (adb_X509DataType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_priority_type0") == 0)
            {
                return adb_priority_type0_serialize_obj(
                (adb_priority_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_TransformsType") == 0)
            {
                return adb_TransformsType_serialize_obj(
                (adb_TransformsTypeE1_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_readingSystemAttributes_type0") == 0)
            {
                return adb_readingSystemAttributes_type0_serialize_obj(
                (adb_readingSystemAttributes_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_read_type0") == 0)
            {
                return adb_read_type0_serialize_obj(
                (adb_read_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_input_type0") == 0)
            {
                return adb_input_type0_serialize_obj(
                (adb_input_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_KeyPairType") == 0)
            {
                return adb_KeyPairType_serialize_obj(
                (adb_KeyPairType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_additionalTransferProtocols_type0") == 0)
            {
                return adb_additionalTransferProtocols_type0_serialize_obj(
                (adb_additionalTransferProtocols_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_method_type1") == 0)
            {
                return adb_method_type1_serialize_obj(
                (adb_method_type1_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_contentMetadata_type0") == 0)
            {
                return adb_contentMetadata_type0_serialize_obj(
                (adb_contentMetadata_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_invalidParameterFaultType") == 0)
            {
                return adb_invalidParameterFaultType_serialize_obj(
                (adb_invalidParameterFaultType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_inputTypes_type0") == 0)
            {
                return adb_inputTypes_type0_serialize_obj(
                (adb_inputTypes_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_IssuerType") == 0)
            {
                return adb_IssuerType_serialize_obj(
                (adb_IssuerType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_KeysType") == 0)
            {
                return adb_KeysType_serialize_obj(
                (adb_KeysType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_protectionFormat_type1") == 0)
            {
                return adb_protectionFormat_type1_serialize_obj(
                (adb_protectionFormat_type1_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_multipleChoiceQuestion_type0") == 0)
            {
                return adb_multipleChoiceQuestion_type0_serialize_obj(
                (adb_multipleChoiceQuestion_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_invalidOperationFaultType") == 0)
            {
                return adb_invalidOperationFaultType_serialize_obj(
                (adb_invalidOperationFaultType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedOptionalOperations_type0") == 0)
            {
                return adb_supportedOptionalOperations_type0_serialize_obj(
                (adb_supportedOptionalOperations_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_RSAKeyValueType") == 0)
            {
                return adb_RSAKeyValueType_serialize_obj(
                (adb_RSAKeyValueType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_lang_type0") == 0)
            {
                return adb_lang_type0_serialize_obj(
                (adb_lang_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_type_type1") == 0)
            {
                return adb_type_type1_serialize_obj(
                (adb_type_type1_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_type_type0") == 0)
            {
                return adb_type_type0_serialize_obj(
                (adb_type_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_lastmark_type0") == 0)
            {
                return adb_lastmark_type0_serialize_obj(
                (adb_lastmark_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_SignedInfoType") == 0)
            {
                return adb_SignedInfoType_serialize_obj(
                (adb_SignedInfoType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_operationNotSupportedFaultType") == 0)
            {
                return adb_operationNotSupportedFaultType_serialize_obj(
                (adb_operationNotSupportedFaultType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_title_type0") == 0)
            {
                return adb_title_type0_serialize_obj(
                (adb_title_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_resource_type0") == 0)
            {
                return adb_resource_type0_serialize_obj(
                (adb_resource_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_bookmark_type0") == 0)
            {
                return adb_bookmark_type0_serialize_obj(
                (adb_bookmark_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_SignatureMethodType") == 0)
            {
                return adb_SignatureMethodType_serialize_obj(
                (adb_SignatureMethodType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_TransformType") == 0)
            {
                return adb_TransformType_serialize_obj(
                (adb_TransformType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_RetrievalMethodType") == 0)
            {
                return adb_RetrievalMethodType_serialize_obj(
                (adb_RetrievalMethodType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_SignaturePropertyType") == 0)
            {
                return adb_SignaturePropertyType_serialize_obj(
                (adb_SignaturePropertyType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_inputQuestion_type0") == 0)
            {
                return adb_inputQuestion_type0_serialize_obj(
                (adb_inputQuestion_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_DigestValueType") == 0)
            {
                return adb_DigestValueType_serialize_obj(
                (adb_DigestValueType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_contentList_type0") == 0)
            {
                return adb_contentList_type0_serialize_obj(
                (adb_contentList_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_EncryptedKeyType") == 0)
            {
                return adb_EncryptedKeyType_serialize_obj(
                (adb_EncryptedKeyType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_ReferenceType") == 0)
            {
                return adb_ReferenceType_serialize_obj(
                (adb_ReferenceType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_KeyInfoType") == 0)
            {
                return adb_KeyInfoType_serialize_obj(
                (adb_KeyInfoType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedContentFormats_type0") == 0)
            {
                return adb_supportedContentFormats_type0_serialize_obj(
                (adb_supportedContentFormats_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_serviceAttributes_type0") == 0)
            {
                return adb_serviceAttributes_type0_serialize_obj(
                (adb_serviceAttributes_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_serviceProvider_type0") == 0)
            {
                return adb_serviceProvider_type0_serialize_obj(
                (adb_serviceProvider_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_DigestMethodType") == 0)
            {
                return adb_DigestMethodType_serialize_obj(
                (adb_DigestMethodType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_UAKType") == 0)
            {
                return adb_UAKType_serialize_obj(
                (adb_UAKType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_SignatureValueType") == 0)
            {
                return adb_SignatureValueType_serialize_obj(
                (adb_SignatureValueType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_operation_type1") == 0)
            {
                return adb_operation_type1_serialize_obj(
                (adb_operation_type1_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_ManifestType") == 0)
            {
                return adb_ManifestType_serialize_obj(
                (adb_ManifestType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedInputTypes_type0") == 0)
            {
                return adb_supportedInputTypes_type0_serialize_obj(
                (adb_supportedInputTypes_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_HMACOutputLengthType") == 0)
            {
                return adb_HMACOutputLengthType_serialize_obj(
                (adb_HMACOutputLengthType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_keyRing_type0") == 0)
            {
                return adb_keyRing_type0_serialize_obj(
                (adb_keyRing_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_EncryptionPropertiesType") == 0)
            {
                return adb_EncryptionPropertiesType_serialize_obj(
                (adb_EncryptionPropertiesType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedContentProtectionFormats_type0") == 0)
            {
                return adb_supportedContentProtectionFormats_type0_serialize_obj(
                (adb_supportedContentProtectionFormats_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_TransformsType") == 0)
            {
                return adb_TransformsType_serialize_obj(
                (adb_TransformsType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_CipherDataType") == 0)
            {
                return adb_CipherDataType_serialize_obj(
                (adb_CipherDataType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_EncryptedType") == 0)
            {
                return adb_EncryptedType_serialize_obj(
                (adb_EncryptedType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_mimeType_type0") == 0)
            {
                return adb_mimeType_type0_serialize_obj(
                (adb_mimeType_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_note_type0") == 0)
            {
                return adb_note_type0_serialize_obj(
                (adb_note_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_dir_type0") == 0)
            {
                return adb_dir_type0_serialize_obj(
                (adb_dir_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_internalServerErrorFaultType") == 0)
            {
                return adb_internalServerErrorFaultType_serialize_obj(
                (adb_internalServerErrorFaultType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_KeySizeType") == 0)
            {
                return adb_KeySizeType_serialize_obj(
                (adb_KeySizeType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_config_type0") == 0)
            {
                return adb_config_type0_serialize_obj(
                (adb_config_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_questions_type0") == 0)
            {
                return adb_questions_type0_serialize_obj(
                (adb_questions_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_audio_type0") == 0)
            {
                return adb_audio_type0_serialize_obj(
                (adb_audio_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_supportedUplinkAudioCodecs_type0") == 0)
            {
                return adb_supportedUplinkAudioCodecs_type0_serialize_obj(
                (adb_supportedUplinkAudioCodecs_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_IdString") == 0)
            {
                return adb_IdString_serialize_obj(
                (adb_IdString_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_ObjectType") == 0)
            {
                return adb_ObjectType_serialize_obj(
                (adb_ObjectType_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }
            
            if (axutil_strcmp(default_type, "adb_bookmarkContent") == 0)
            {
                return adb_bookmarkContent_serialize_obj(
                (adb_bookmarkContent_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }

            if (axutil_strcmp(default_type, "adb_bookmarkContentChoice_type0") == 0)
            {
                return adb_bookmarkContentChoice_type0_serialize_obj(
                (adb_bookmarkContentChoice_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }

            if (axutil_strcmp(default_type, "adb_bookmarkContentSequence_type0") == 0)
            {
                return adb_bookmarkContentSequence_type0_serialize_obj(
                (adb_bookmarkContentSequence_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }

            if (axutil_strcmp(default_type, "adb_bookmarkSetChoice_type1") == 0)
            {
                return adb_bookmarkSetChoice_type1_serialize_obj(
                (adb_bookmarkSetChoice_type1_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }

            if (axutil_strcmp(default_type, "adb_hiliteContent") == 0)
            {
                return adb_hiliteContent_serialize_obj(
                (adb_hiliteContent_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }

            if (axutil_strcmp(default_type, "adb_hiliteContentChoice_type0") == 0)
            {
                return adb_hiliteContentChoice_type0_serialize_obj(
                (adb_hiliteContentChoice_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }

            if (axutil_strcmp(default_type, "adb_hiliteContentSequence_type0") == 0)
            {
                return adb_hiliteContentSequence_type0_serialize_obj(
                (adb_hiliteContentSequence_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }

            if (axutil_strcmp(default_type, "adb_noteSequence_type0") == 0)
            {
                return adb_noteSequence_type0_serialize_obj(
                (adb_noteSequence_type0_t*) _object, env, om_node, om_element, tag_closed, namespaces, next_ns_index);
            }


            return AXIS2_FAILURE;
        }
    

