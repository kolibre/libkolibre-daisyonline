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
        * axis2_stub_Kolibre_DaisyOnline.h
        *
        * This file was auto-generated from WSDL for "Kolibre_DaisyOnline|http://www.daisy.org/ns/daisy-online/" service
        * by the Apache Axis2/Java version: 1.6.2  Built on : Oct 19, 2012 (02:20:14 EEST)
        */

        #include <stdio.h>
        #include <axiom.h>
        #include <axutil_utils.h>
        #include <axiom_soap.h>
        #include <axis2_client.h>
        #include <axis2_stub.h>

       
         #include "adb_getContentResources.h"
        
         #include "adb_getContentResourcesResponse.h"
        
         #include "adb_noActiveSessionFault.h"
        
         #include "adb_internalServerErrorFault.h"
        
         #include "adb_invalidOperationFault.h"
        
         #include "adb_invalidParameterFault.h"
        
         #include "adb_getContentMetadata.h"
        
         #include "adb_getContentMetadataResponse.h"
        
         #include "adb_invalidOperationFault.h"
        
         #include "adb_invalidParameterFault.h"
        
         #include "adb_noActiveSessionFault.h"
        
         #include "adb_internalServerErrorFault.h"
        
         #include "adb_markAnnouncementsAsRead.h"
        
         #include "adb_markAnnouncementsAsReadResponse.h"
        
         #include "adb_noActiveSessionFault.h"
        
         #include "adb_operationNotSupportedFault.h"
        
         #include "adb_invalidParameterFault.h"
        
         #include "adb_invalidOperationFault.h"
        
         #include "adb_internalServerErrorFault.h"
        
         #include "adb_getBookmarks.h"
        
         #include "adb_getBookmarksResponse.h"
        
         #include "adb_operationNotSupportedFault.h"
        
         #include "adb_internalServerErrorFault.h"
        
         #include "adb_invalidParameterFault.h"
        
         #include "adb_invalidOperationFault.h"
        
         #include "adb_noActiveSessionFault.h"
        
         #include "adb_getServiceAttributes.h"
        
         #include "adb_getServiceAttributesResponse.h"
        
         #include "adb_invalidOperationFault.h"
        
         #include "adb_internalServerErrorFault.h"
        
         #include "adb_noActiveSessionFault.h"
        
         #include "adb_setBookmarks.h"
        
         #include "adb_setBookmarksResponse.h"
        
         #include "adb_invalidOperationFault.h"
        
         #include "adb_invalidParameterFault.h"
        
         #include "adb_operationNotSupportedFault.h"
        
         #include "adb_noActiveSessionFault.h"
        
         #include "adb_internalServerErrorFault.h"
        
         #include "adb_logOn.h"
        
         #include "adb_logOnResponse.h"
        
         #include "adb_internalServerErrorFault.h"
        
         #include "adb_invalidOperationFault.h"
        
         #include "adb_getContentList.h"
        
         #include "adb_getContentListResponse.h"
        
         #include "adb_invalidParameterFault.h"
        
         #include "adb_noActiveSessionFault.h"
        
         #include "adb_invalidOperationFault.h"
        
         #include "adb_internalServerErrorFault.h"
        
         #include "adb_getQuestions.h"
        
         #include "adb_getQuestionsResponse.h"
        
         #include "adb_invalidParameterFault.h"
        
         #include "adb_operationNotSupportedFault.h"
        
         #include "adb_invalidOperationFault.h"
        
         #include "adb_internalServerErrorFault.h"
        
         #include "adb_noActiveSessionFault.h"
        
         #include "adb_issueContent.h"
        
         #include "adb_issueContentResponse.h"
        
         #include "adb_invalidOperationFault.h"
        
         #include "adb_internalServerErrorFault.h"
        
         #include "adb_invalidParameterFault.h"
        
         #include "adb_noActiveSessionFault.h"
        
         #include "adb_setReadingSystemAttributes.h"
        
         #include "adb_setReadingSystemAttributesResponse.h"
        
         #include "adb_noActiveSessionFault.h"
        
         #include "adb_invalidOperationFault.h"
        
         #include "adb_internalServerErrorFault.h"
        
         #include "adb_invalidParameterFault.h"
        
         #include "adb_logOff.h"
        
         #include "adb_logOffResponse.h"
        
         #include "adb_invalidOperationFault.h"
        
         #include "adb_internalServerErrorFault.h"
        
         #include "adb_returnContent.h"
        
         #include "adb_returnContentResponse.h"
        
         #include "adb_invalidParameterFault.h"
        
         #include "adb_operationNotSupportedFault.h"
        
         #include "adb_invalidOperationFault.h"
        
         #include "adb_internalServerErrorFault.h"
        
         #include "adb_noActiveSessionFault.h"
        
         #include "adb_getKeyExchangeObject.h"
        
         #include "adb_getKeyExchangeObjectResponse.h"
        
         #include "adb_noActiveSessionFault.h"
        
         #include "adb_operationNotSupportedFault.h"
        
         #include "adb_invalidParameterFault.h"
        
         #include "adb_invalidOperationFault.h"
        
         #include "adb_internalServerErrorFault.h"
        
         #include "adb_getServiceAnnouncements.h"
        
         #include "adb_getServiceAnnouncementsResponse.h"
        
         #include "adb_noActiveSessionFault.h"
        
         #include "adb_operationNotSupportedFault.h"
        
         #include "adb_invalidOperationFault.h"
        
         #include "adb_internalServerErrorFault.h"
        

	#ifdef __cplusplus
	extern "C" {
	#endif

        /***************** function prototypes - for header file *************/
        /**
         * axis2_stub_create_Kolibre_DaisyOnline
         * Create and return the stub with services populated
         * @param env Environment ( mandatory)
         * @param client_home Axis2/C home ( mandatory )
         * @param endpoint_uri Service endpoint uri( optional ) - if NULL default picked from WSDL used
         * @return Newly created stub object
         */
        axis2_stub_t* AXIS2_CALL
        axis2_stub_create_Kolibre_DaisyOnline(const axutil_env_t *env,
                                        const axis2_char_t *client_home,
                                        const axis2_char_t *endpoint_uri);
        /**
         * axis2_stub_populate_services_for_Kolibre_DaisyOnline
         * populate the svc in stub with the service and operations
         * @param stub The stub
         * @param env environment ( mandatory)
         */
        void AXIS2_CALL 
        axis2_stub_populate_services_for_Kolibre_DaisyOnline( axis2_stub_t *stub, const axutil_env_t *env);
        /**
         * axis2_stub_get_endpoint_uri_of_Kolibre_DaisyOnline
         * Return the endpoint URI picked from WSDL
         * @param env environment ( mandatory)
         * @return The endpoint picked from WSDL
         */
        axis2_char_t* AXIS2_CALL
        axis2_stub_get_endpoint_uri_of_Kolibre_DaisyOnline(const axutil_env_t *env);


        
            /**
             * the generated fault union for operation "getContentResources",
             * in a case the server return a fault, the corresponding adb object will be loaded for
             * the union variable pointer comes as the last parameter of the method
             */
            typedef union
            {
                adb_noActiveSessionFault_t* NoActiveSessionFault;
                adb_internalServerErrorFault_t* InternalServerErrorFault;
                adb_invalidOperationFault_t* InvalidOperationFault;
                adb_invalidParameterFault_t* InvalidParameterFault;
                
            } axis2_stub_Kolibre_DaisyOnline_getContentResources_fault;
         
            /**
             * the generated fault union for operation "getContentMetadata",
             * in a case the server return a fault, the corresponding adb object will be loaded for
             * the union variable pointer comes as the last parameter of the method
             */
            typedef union
            {
                adb_invalidOperationFault_t* InvalidOperationFault;
                adb_invalidParameterFault_t* InvalidParameterFault;
                adb_noActiveSessionFault_t* NoActiveSessionFault;
                adb_internalServerErrorFault_t* InternalServerErrorFault;
                
            } axis2_stub_Kolibre_DaisyOnline_getContentMetadata_fault;
         
            /**
             * the generated fault union for operation "markAnnouncementsAsRead",
             * in a case the server return a fault, the corresponding adb object will be loaded for
             * the union variable pointer comes as the last parameter of the method
             */
            typedef union
            {
                adb_noActiveSessionFault_t* NoActiveSessionFault;
                adb_operationNotSupportedFault_t* OperationNotSupportedFault;
                adb_invalidParameterFault_t* InvalidParameterFault;
                adb_invalidOperationFault_t* InvalidOperationFault;
                adb_internalServerErrorFault_t* InternalServerErrorFault;
                
            } axis2_stub_Kolibre_DaisyOnline_markAnnouncementsAsRead_fault;
         
            /**
             * the generated fault union for operation "getBookmarks",
             * in a case the server return a fault, the corresponding adb object will be loaded for
             * the union variable pointer comes as the last parameter of the method
             */
            typedef union
            {
                adb_operationNotSupportedFault_t* OperationNotSupportedFault;
                adb_internalServerErrorFault_t* InternalServerErrorFault;
                adb_invalidParameterFault_t* InvalidParameterFault;
                adb_invalidOperationFault_t* InvalidOperationFault;
                adb_noActiveSessionFault_t* NoActiveSessionFault;
                
            } axis2_stub_Kolibre_DaisyOnline_getBookmarks_fault;
         
            /**
             * the generated fault union for operation "getServiceAttributes",
             * in a case the server return a fault, the corresponding adb object will be loaded for
             * the union variable pointer comes as the last parameter of the method
             */
            typedef union
            {
                adb_invalidOperationFault_t* InvalidOperationFault;
                adb_internalServerErrorFault_t* InternalServerErrorFault;
                adb_noActiveSessionFault_t* NoActiveSessionFault;
                
            } axis2_stub_Kolibre_DaisyOnline_getServiceAttributes_fault;
         
            /**
             * the generated fault union for operation "setBookmarks",
             * in a case the server return a fault, the corresponding adb object will be loaded for
             * the union variable pointer comes as the last parameter of the method
             */
            typedef union
            {
                adb_invalidOperationFault_t* InvalidOperationFault;
                adb_invalidParameterFault_t* InvalidParameterFault;
                adb_operationNotSupportedFault_t* OperationNotSupportedFault;
                adb_noActiveSessionFault_t* NoActiveSessionFault;
                adb_internalServerErrorFault_t* InternalServerErrorFault;
                
            } axis2_stub_Kolibre_DaisyOnline_setBookmarks_fault;
         
            /**
             * the generated fault union for operation "logOn",
             * in a case the server return a fault, the corresponding adb object will be loaded for
             * the union variable pointer comes as the last parameter of the method
             */
            typedef union
            {
                adb_internalServerErrorFault_t* InternalServerErrorFault;
                adb_invalidOperationFault_t* InvalidOperationFault;
                
            } axis2_stub_Kolibre_DaisyOnline_logOn_fault;
         
            /**
             * the generated fault union for operation "getContentList",
             * in a case the server return a fault, the corresponding adb object will be loaded for
             * the union variable pointer comes as the last parameter of the method
             */
            typedef union
            {
                adb_invalidParameterFault_t* InvalidParameterFault;
                adb_noActiveSessionFault_t* NoActiveSessionFault;
                adb_invalidOperationFault_t* InvalidOperationFault;
                adb_internalServerErrorFault_t* InternalServerErrorFault;
                
            } axis2_stub_Kolibre_DaisyOnline_getContentList_fault;
         
            /**
             * the generated fault union for operation "getQuestions",
             * in a case the server return a fault, the corresponding adb object will be loaded for
             * the union variable pointer comes as the last parameter of the method
             */
            typedef union
            {
                adb_invalidParameterFault_t* InvalidParameterFault;
                adb_operationNotSupportedFault_t* OperationNotSupportedFault;
                adb_invalidOperationFault_t* InvalidOperationFault;
                adb_internalServerErrorFault_t* InternalServerErrorFault;
                adb_noActiveSessionFault_t* NoActiveSessionFault;
                
            } axis2_stub_Kolibre_DaisyOnline_getQuestions_fault;
         
            /**
             * the generated fault union for operation "issueContent",
             * in a case the server return a fault, the corresponding adb object will be loaded for
             * the union variable pointer comes as the last parameter of the method
             */
            typedef union
            {
                adb_invalidOperationFault_t* InvalidOperationFault;
                adb_internalServerErrorFault_t* InternalServerErrorFault;
                adb_invalidParameterFault_t* InvalidParameterFault;
                adb_noActiveSessionFault_t* NoActiveSessionFault;
                
            } axis2_stub_Kolibre_DaisyOnline_issueContent_fault;
         
            /**
             * the generated fault union for operation "setReadingSystemAttributes",
             * in a case the server return a fault, the corresponding adb object will be loaded for
             * the union variable pointer comes as the last parameter of the method
             */
            typedef union
            {
                adb_noActiveSessionFault_t* NoActiveSessionFault;
                adb_invalidOperationFault_t* InvalidOperationFault;
                adb_internalServerErrorFault_t* InternalServerErrorFault;
                adb_invalidParameterFault_t* InvalidParameterFault;
                
            } axis2_stub_Kolibre_DaisyOnline_setReadingSystemAttributes_fault;
         
            /**
             * the generated fault union for operation "logOff",
             * in a case the server return a fault, the corresponding adb object will be loaded for
             * the union variable pointer comes as the last parameter of the method
             */
            typedef union
            {
                adb_invalidOperationFault_t* InvalidOperationFault;
                adb_internalServerErrorFault_t* InternalServerErrorFault;
                
            } axis2_stub_Kolibre_DaisyOnline_logOff_fault;
         
            /**
             * the generated fault union for operation "returnContent",
             * in a case the server return a fault, the corresponding adb object will be loaded for
             * the union variable pointer comes as the last parameter of the method
             */
            typedef union
            {
                adb_invalidParameterFault_t* InvalidParameterFault;
                adb_operationNotSupportedFault_t* OperationNotSupportedFault;
                adb_invalidOperationFault_t* InvalidOperationFault;
                adb_internalServerErrorFault_t* InternalServerErrorFault;
                adb_noActiveSessionFault_t* NoActiveSessionFault;
                
            } axis2_stub_Kolibre_DaisyOnline_returnContent_fault;
         
            /**
             * the generated fault union for operation "getKeyExchangeObject",
             * in a case the server return a fault, the corresponding adb object will be loaded for
             * the union variable pointer comes as the last parameter of the method
             */
            typedef union
            {
                adb_noActiveSessionFault_t* NoActiveSessionFault;
                adb_operationNotSupportedFault_t* OperationNotSupportedFault;
                adb_invalidParameterFault_t* InvalidParameterFault;
                adb_invalidOperationFault_t* InvalidOperationFault;
                adb_internalServerErrorFault_t* InternalServerErrorFault;
                
            } axis2_stub_Kolibre_DaisyOnline_getKeyExchangeObject_fault;
         
            /**
             * the generated fault union for operation "getServiceAnnouncements",
             * in a case the server return a fault, the corresponding adb object will be loaded for
             * the union variable pointer comes as the last parameter of the method
             */
            typedef union
            {
                adb_noActiveSessionFault_t* NoActiveSessionFault;
                adb_operationNotSupportedFault_t* OperationNotSupportedFault;
                adb_invalidOperationFault_t* InvalidOperationFault;
                adb_internalServerErrorFault_t* InternalServerErrorFault;
                
            } axis2_stub_Kolibre_DaisyOnline_getServiceAnnouncements_fault;
         
            /**
             * Auto generated function declaration
             * for "getContentResources|http://www.daisy.org/ns/daisy-online/" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             * @param _contentID of the axis2_char_t*
             *
             * @return adb_resources_type0_t*
             */

            adb_resources_type0_t* AXIS2_CALL 
            axis2_stub_op_Kolibre_DaisyOnline_getContentResources( axis2_stub_t *stub, const axutil_env_t *env,
                                                  axis2_char_t* _contentID,
                                                        axis2_stub_Kolibre_DaisyOnline_getContentResources_fault *fault);
          
            /**
             * Auto generated function declaration
             * for "getContentMetadata|http://www.daisy.org/ns/daisy-online/" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             * @param _contentID0 of the axis2_char_t*
             *
             * @return adb_contentMetadata_type0_t*
             */

            adb_contentMetadata_type0_t* AXIS2_CALL 
            axis2_stub_op_Kolibre_DaisyOnline_getContentMetadata( axis2_stub_t *stub, const axutil_env_t *env,
                                                  axis2_char_t* _contentID0,
                                                        axis2_stub_Kolibre_DaisyOnline_getContentMetadata_fault *fault);
          
            /**
             * Auto generated function declaration
             * for "markAnnouncementsAsRead|http://www.daisy.org/ns/daisy-online/" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             * @param _read of the adb_read_type0_t*
             *
             * @return axis2_bool_t
             */

            axis2_bool_t AXIS2_CALL 
            axis2_stub_op_Kolibre_DaisyOnline_markAnnouncementsAsRead( axis2_stub_t *stub, const axutil_env_t *env,
                                                  adb_read_type0_t* _read,
                                                        axis2_stub_Kolibre_DaisyOnline_markAnnouncementsAsRead_fault *fault);
          
            /**
             * Auto generated function declaration
             * for "getBookmarks|http://www.daisy.org/ns/daisy-online/" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             * @param _contentID1 of the axis2_char_t*
             *
             * @return adb_bookmarkSet_type0_t*
             */

            adb_bookmarkSet_type0_t* AXIS2_CALL 
            axis2_stub_op_Kolibre_DaisyOnline_getBookmarks( axis2_stub_t *stub, const axutil_env_t *env,
                                                  axis2_char_t* _contentID1,
                                                        axis2_stub_Kolibre_DaisyOnline_getBookmarks_fault *fault);
          
            /**
             * Auto generated function declaration
             * for "getServiceAttributes|http://www.daisy.org/ns/daisy-online/" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             *
             * @return adb_serviceAttributes_type0_t*
             */

            adb_serviceAttributes_type0_t* AXIS2_CALL 
            axis2_stub_op_Kolibre_DaisyOnline_getServiceAttributes( axis2_stub_t *stub, const axutil_env_t *env,
                                                        axis2_stub_Kolibre_DaisyOnline_getServiceAttributes_fault *fault);
          
            /**
             * Auto generated function declaration
             * for "setBookmarks|http://www.daisy.org/ns/daisy-online/" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             * @param _contentID2 of the axis2_char_t*
             * @param _bookmarkSet3 of the adb_bookmarkSet_type0_t*
             *
             * @return axis2_bool_t
             */

            axis2_bool_t AXIS2_CALL 
            axis2_stub_op_Kolibre_DaisyOnline_setBookmarks( axis2_stub_t *stub, const axutil_env_t *env,
                                                  axis2_char_t* _contentID2,
                                                  adb_bookmarkSet_type0_t* _bookmarkSet3,
                                                        axis2_stub_Kolibre_DaisyOnline_setBookmarks_fault *fault);
          
            /**
             * Auto generated function declaration
             * for "logOn|http://www.daisy.org/ns/daisy-online/" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             * @param _username of the axis2_char_t*
             * @param _password of the axis2_char_t*
             *
             * @return axis2_bool_t
             */

            axis2_bool_t AXIS2_CALL 
            axis2_stub_op_Kolibre_DaisyOnline_logOn( axis2_stub_t *stub, const axutil_env_t *env,
                                                  axis2_char_t* _username,
                                                  axis2_char_t* _password,
                                                        axis2_stub_Kolibre_DaisyOnline_logOn_fault *fault);
          
            /**
             * Auto generated function declaration
             * for "getContentList|http://www.daisy.org/ns/daisy-online/" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             * @param _id of the axis2_char_t*
             * @param _firstItem of the int
             * @param _lastItem of the int
             *
             * @return adb_contentList_type0_t*
             */

            adb_contentList_type0_t* AXIS2_CALL 
            axis2_stub_op_Kolibre_DaisyOnline_getContentList( axis2_stub_t *stub, const axutil_env_t *env,
                                                  axis2_char_t* _id,
                                                  int _firstItem,
                                                  int _lastItem,
                                                        axis2_stub_Kolibre_DaisyOnline_getContentList_fault *fault);
          
            /**
             * Auto generated function declaration
             * for "getQuestions|http://www.daisy.org/ns/daisy-online/" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             * @param _userResponses of the adb_userResponses_type0_t*
             *
             * @return adb_questions_type0_t*
             */

            adb_questions_type0_t* AXIS2_CALL 
            axis2_stub_op_Kolibre_DaisyOnline_getQuestions( axis2_stub_t *stub, const axutil_env_t *env,
                                                  adb_userResponses_type0_t* _userResponses,
                                                        axis2_stub_Kolibre_DaisyOnline_getQuestions_fault *fault);
          
            /**
             * Auto generated function declaration
             * for "issueContent|http://www.daisy.org/ns/daisy-online/" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             * @param _contentID4 of the axis2_char_t*
             *
             * @return axis2_bool_t
             */

            axis2_bool_t AXIS2_CALL 
            axis2_stub_op_Kolibre_DaisyOnline_issueContent( axis2_stub_t *stub, const axutil_env_t *env,
                                                  axis2_char_t* _contentID4,
                                                        axis2_stub_Kolibre_DaisyOnline_issueContent_fault *fault);
          
            /**
             * Auto generated function declaration
             * for "setReadingSystemAttributes|http://www.daisy.org/ns/daisy-online/" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             * @param _readingSystemAttributes of the adb_readingSystemAttributes_type0_t*
             *
             * @return axis2_bool_t
             */

            axis2_bool_t AXIS2_CALL 
            axis2_stub_op_Kolibre_DaisyOnline_setReadingSystemAttributes( axis2_stub_t *stub, const axutil_env_t *env,
                                                  adb_readingSystemAttributes_type0_t* _readingSystemAttributes,
                                                        axis2_stub_Kolibre_DaisyOnline_setReadingSystemAttributes_fault *fault);
          
            /**
             * Auto generated function declaration
             * for "logOff|http://www.daisy.org/ns/daisy-online/" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             *
             * @return axis2_bool_t
             */

            axis2_bool_t AXIS2_CALL 
            axis2_stub_op_Kolibre_DaisyOnline_logOff( axis2_stub_t *stub, const axutil_env_t *env,
                                                        axis2_stub_Kolibre_DaisyOnline_logOff_fault *fault);
          
            /**
             * Auto generated function declaration
             * for "returnContent|http://www.daisy.org/ns/daisy-online/" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             * @param _contentID5 of the axis2_char_t*
             *
             * @return axis2_bool_t
             */

            axis2_bool_t AXIS2_CALL 
            axis2_stub_op_Kolibre_DaisyOnline_returnContent( axis2_stub_t *stub, const axutil_env_t *env,
                                                  axis2_char_t* _contentID5,
                                                        axis2_stub_Kolibre_DaisyOnline_returnContent_fault *fault);
          
            /**
             * Auto generated function declaration
             * for "getKeyExchangeObject|http://www.daisy.org/ns/daisy-online/" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             * @param _requestedKeyName of the axis2_char_t*
             *
             * @return adb_KeyExchange_type0_t*
             */

            adb_KeyExchange_type0_t* AXIS2_CALL 
            axis2_stub_op_Kolibre_DaisyOnline_getKeyExchangeObject( axis2_stub_t *stub, const axutil_env_t *env,
                                                  axis2_char_t* _requestedKeyName,
                                                        axis2_stub_Kolibre_DaisyOnline_getKeyExchangeObject_fault *fault);
          
            /**
             * Auto generated function declaration
             * for "getServiceAnnouncements|http://www.daisy.org/ns/daisy-online/" operation.
             * @param stub The stub (axis2_stub_t)
             * @param env environment ( mandatory)
             *
             * @return adb_announcements_type0_t*
             */

            adb_announcements_type0_t* AXIS2_CALL 
            axis2_stub_op_Kolibre_DaisyOnline_getServiceAnnouncements( axis2_stub_t *stub, const axutil_env_t *env,
                                                        axis2_stub_Kolibre_DaisyOnline_getServiceAnnouncements_fault *fault);
          

        /**
         * Auto generated function for asynchronous invocations
         * for "getContentResources|http://www.daisy.org/ns/daisy-online/" operation.
         * @param stub The stub
         * @param env environment ( mandatory)
         * @param _contentID of the axis2_char_t*
         * @param user_data user data to be accessed by the callbacks
         * @param on_complete callback to handle on complete
         * @param on_error callback to handle on error
         */


        void AXIS2_CALL
        axis2_stub_start_op_Kolibre_DaisyOnline_getContentResources( axis2_stub_t *stub, const axutil_env_t *env,
                                                  axis2_char_t* _contentID,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_resources_type0_t* _getContentResourcesResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_getContentResources_fault fault, void *data),
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) );

        

        /**
         * Auto generated function for asynchronous invocations
         * for "getContentMetadata|http://www.daisy.org/ns/daisy-online/" operation.
         * @param stub The stub
         * @param env environment ( mandatory)
         * @param _contentID0 of the axis2_char_t*
         * @param user_data user data to be accessed by the callbacks
         * @param on_complete callback to handle on complete
         * @param on_error callback to handle on error
         */


        void AXIS2_CALL
        axis2_stub_start_op_Kolibre_DaisyOnline_getContentMetadata( axis2_stub_t *stub, const axutil_env_t *env,
                                                  axis2_char_t* _contentID0,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_contentMetadata_type0_t* _getContentMetadataResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_getContentMetadata_fault fault, void *data),
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) );

        

        /**
         * Auto generated function for asynchronous invocations
         * for "markAnnouncementsAsRead|http://www.daisy.org/ns/daisy-online/" operation.
         * @param stub The stub
         * @param env environment ( mandatory)
         * @param _read of the adb_read_type0_t*
         * @param user_data user data to be accessed by the callbacks
         * @param on_complete callback to handle on complete
         * @param on_error callback to handle on error
         */


        void AXIS2_CALL
        axis2_stub_start_op_Kolibre_DaisyOnline_markAnnouncementsAsRead( axis2_stub_t *stub, const axutil_env_t *env,
                                                  adb_read_type0_t* _read,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _markAnnouncementsAsReadResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_markAnnouncementsAsRead_fault fault, void *data),
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) );

        

        /**
         * Auto generated function for asynchronous invocations
         * for "getBookmarks|http://www.daisy.org/ns/daisy-online/" operation.
         * @param stub The stub
         * @param env environment ( mandatory)
         * @param _contentID1 of the axis2_char_t*
         * @param user_data user data to be accessed by the callbacks
         * @param on_complete callback to handle on complete
         * @param on_error callback to handle on error
         */


        void AXIS2_CALL
        axis2_stub_start_op_Kolibre_DaisyOnline_getBookmarks( axis2_stub_t *stub, const axutil_env_t *env,
                                                  axis2_char_t* _contentID1,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_bookmarkSet_type0_t* _getBookmarksResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_getBookmarks_fault fault, void *data),
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) );

        

        /**
         * Auto generated function for asynchronous invocations
         * for "getServiceAttributes|http://www.daisy.org/ns/daisy-online/" operation.
         * @param stub The stub
         * @param env environment ( mandatory)
         * @param user_data user data to be accessed by the callbacks
         * @param on_complete callback to handle on complete
         * @param on_error callback to handle on error
         */


        void AXIS2_CALL
        axis2_stub_start_op_Kolibre_DaisyOnline_getServiceAttributes( axis2_stub_t *stub, const axutil_env_t *env,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_serviceAttributes_type0_t* _getServiceAttributesResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_getServiceAttributes_fault fault, void *data),
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) );

        

        /**
         * Auto generated function for asynchronous invocations
         * for "setBookmarks|http://www.daisy.org/ns/daisy-online/" operation.
         * @param stub The stub
         * @param env environment ( mandatory)
         * @param _contentID2 of the axis2_char_t*
         * @param _bookmarkSet3 of the adb_bookmarkSet_type0_t*
         * @param user_data user data to be accessed by the callbacks
         * @param on_complete callback to handle on complete
         * @param on_error callback to handle on error
         */


        void AXIS2_CALL
        axis2_stub_start_op_Kolibre_DaisyOnline_setBookmarks( axis2_stub_t *stub, const axutil_env_t *env,
                                                  axis2_char_t* _contentID2,
                                                  adb_bookmarkSet_type0_t* _bookmarkSet3,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _setBookmarksResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_setBookmarks_fault fault, void *data),
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) );

        

        /**
         * Auto generated function for asynchronous invocations
         * for "logOn|http://www.daisy.org/ns/daisy-online/" operation.
         * @param stub The stub
         * @param env environment ( mandatory)
         * @param _username of the axis2_char_t*
         * @param _password of the axis2_char_t*
         * @param user_data user data to be accessed by the callbacks
         * @param on_complete callback to handle on complete
         * @param on_error callback to handle on error
         */


        void AXIS2_CALL
        axis2_stub_start_op_Kolibre_DaisyOnline_logOn( axis2_stub_t *stub, const axutil_env_t *env,
                                                  axis2_char_t* _username,
                                                  axis2_char_t* _password,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _logOnResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_logOn_fault fault, void *data),
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) );

        

        /**
         * Auto generated function for asynchronous invocations
         * for "getContentList|http://www.daisy.org/ns/daisy-online/" operation.
         * @param stub The stub
         * @param env environment ( mandatory)
         * @param _id of the axis2_char_t*
         * @param _firstItem of the int
         * @param _lastItem of the int
         * @param user_data user data to be accessed by the callbacks
         * @param on_complete callback to handle on complete
         * @param on_error callback to handle on error
         */


        void AXIS2_CALL
        axis2_stub_start_op_Kolibre_DaisyOnline_getContentList( axis2_stub_t *stub, const axutil_env_t *env,
                                                  axis2_char_t* _id,
                                                  int _firstItem,
                                                  int _lastItem,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_contentList_type0_t* _getContentListResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_getContentList_fault fault, void *data),
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) );

        

        /**
         * Auto generated function for asynchronous invocations
         * for "getQuestions|http://www.daisy.org/ns/daisy-online/" operation.
         * @param stub The stub
         * @param env environment ( mandatory)
         * @param _userResponses of the adb_userResponses_type0_t*
         * @param user_data user data to be accessed by the callbacks
         * @param on_complete callback to handle on complete
         * @param on_error callback to handle on error
         */


        void AXIS2_CALL
        axis2_stub_start_op_Kolibre_DaisyOnline_getQuestions( axis2_stub_t *stub, const axutil_env_t *env,
                                                  adb_userResponses_type0_t* _userResponses,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_questions_type0_t* _getQuestionsResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_getQuestions_fault fault, void *data),
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) );

        

        /**
         * Auto generated function for asynchronous invocations
         * for "issueContent|http://www.daisy.org/ns/daisy-online/" operation.
         * @param stub The stub
         * @param env environment ( mandatory)
         * @param _contentID4 of the axis2_char_t*
         * @param user_data user data to be accessed by the callbacks
         * @param on_complete callback to handle on complete
         * @param on_error callback to handle on error
         */


        void AXIS2_CALL
        axis2_stub_start_op_Kolibre_DaisyOnline_issueContent( axis2_stub_t *stub, const axutil_env_t *env,
                                                  axis2_char_t* _contentID4,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _issueContentResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_issueContent_fault fault, void *data),
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) );

        

        /**
         * Auto generated function for asynchronous invocations
         * for "setReadingSystemAttributes|http://www.daisy.org/ns/daisy-online/" operation.
         * @param stub The stub
         * @param env environment ( mandatory)
         * @param _readingSystemAttributes of the adb_readingSystemAttributes_type0_t*
         * @param user_data user data to be accessed by the callbacks
         * @param on_complete callback to handle on complete
         * @param on_error callback to handle on error
         */


        void AXIS2_CALL
        axis2_stub_start_op_Kolibre_DaisyOnline_setReadingSystemAttributes( axis2_stub_t *stub, const axutil_env_t *env,
                                                  adb_readingSystemAttributes_type0_t* _readingSystemAttributes,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _setReadingSystemAttributesResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_setReadingSystemAttributes_fault fault, void *data),
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) );

        

        /**
         * Auto generated function for asynchronous invocations
         * for "logOff|http://www.daisy.org/ns/daisy-online/" operation.
         * @param stub The stub
         * @param env environment ( mandatory)
         * @param user_data user data to be accessed by the callbacks
         * @param on_complete callback to handle on complete
         * @param on_error callback to handle on error
         */


        void AXIS2_CALL
        axis2_stub_start_op_Kolibre_DaisyOnline_logOff( axis2_stub_t *stub, const axutil_env_t *env,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _logOffResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_logOff_fault fault, void *data),
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) );

        

        /**
         * Auto generated function for asynchronous invocations
         * for "returnContent|http://www.daisy.org/ns/daisy-online/" operation.
         * @param stub The stub
         * @param env environment ( mandatory)
         * @param _contentID5 of the axis2_char_t*
         * @param user_data user data to be accessed by the callbacks
         * @param on_complete callback to handle on complete
         * @param on_error callback to handle on error
         */


        void AXIS2_CALL
        axis2_stub_start_op_Kolibre_DaisyOnline_returnContent( axis2_stub_t *stub, const axutil_env_t *env,
                                                  axis2_char_t* _contentID5,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _returnContentResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_returnContent_fault fault, void *data),
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) );

        

        /**
         * Auto generated function for asynchronous invocations
         * for "getKeyExchangeObject|http://www.daisy.org/ns/daisy-online/" operation.
         * @param stub The stub
         * @param env environment ( mandatory)
         * @param _requestedKeyName of the axis2_char_t*
         * @param user_data user data to be accessed by the callbacks
         * @param on_complete callback to handle on complete
         * @param on_error callback to handle on error
         */


        void AXIS2_CALL
        axis2_stub_start_op_Kolibre_DaisyOnline_getKeyExchangeObject( axis2_stub_t *stub, const axutil_env_t *env,
                                                  axis2_char_t* _requestedKeyName,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_KeyExchange_type0_t* _getKeyExchangeObjectResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_getKeyExchangeObject_fault fault, void *data),
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) );

        

        /**
         * Auto generated function for asynchronous invocations
         * for "getServiceAnnouncements|http://www.daisy.org/ns/daisy-online/" operation.
         * @param stub The stub
         * @param env environment ( mandatory)
         * @param user_data user data to be accessed by the callbacks
         * @param on_complete callback to handle on complete
         * @param on_error callback to handle on error
         */


        void AXIS2_CALL
        axis2_stub_start_op_Kolibre_DaisyOnline_getServiceAnnouncements( axis2_stub_t *stub, const axutil_env_t *env,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_announcements_type0_t* _getServiceAnnouncementsResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_getServiceAnnouncements_fault fault, void *data),
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) );

        


    /** we have to reserve some error codes for adb and for custom messages */
    #define AXIS2_STUB_KOLIBRE_DAISYONLINE_ERROR_CODES_START (AXIS2_ERROR_LAST + 2000)

    typedef enum 
    {
        AXIS2_STUB_KOLIBRE_DAISYONLINE_ERROR_NONE = AXIS2_STUB_KOLIBRE_DAISYONLINE_ERROR_CODES_START,
        
        AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTRESOURCES_FAULT_NOACTIVESESSIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTRESOURCES_FAULT_INTERNALSERVERERRORFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTRESOURCES_FAULT_INVALIDOPERATIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTRESOURCES_FAULT_INVALIDPARAMETERFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTMETADATA_FAULT_INVALIDOPERATIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTMETADATA_FAULT_INVALIDPARAMETERFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTMETADATA_FAULT_NOACTIVESESSIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTMETADATA_FAULT_INTERNALSERVERERRORFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_MARKANNOUNCEMENTSASREAD_FAULT_NOACTIVESESSIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_MARKANNOUNCEMENTSASREAD_FAULT_OPERATIONNOTSUPPORTEDFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_MARKANNOUNCEMENTSASREAD_FAULT_INVALIDPARAMETERFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_MARKANNOUNCEMENTSASREAD_FAULT_INVALIDOPERATIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_MARKANNOUNCEMENTSASREAD_FAULT_INTERNALSERVERERRORFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETBOOKMARKS_FAULT_OPERATIONNOTSUPPORTEDFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETBOOKMARKS_FAULT_INTERNALSERVERERRORFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETBOOKMARKS_FAULT_INVALIDPARAMETERFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETBOOKMARKS_FAULT_INVALIDOPERATIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETBOOKMARKS_FAULT_NOACTIVESESSIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEATTRIBUTES_FAULT_INVALIDOPERATIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEATTRIBUTES_FAULT_INTERNALSERVERERRORFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEATTRIBUTES_FAULT_NOACTIVESESSIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_SETBOOKMARKS_FAULT_INVALIDOPERATIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_SETBOOKMARKS_FAULT_INVALIDPARAMETERFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_SETBOOKMARKS_FAULT_OPERATIONNOTSUPPORTEDFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_SETBOOKMARKS_FAULT_NOACTIVESESSIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_SETBOOKMARKS_FAULT_INTERNALSERVERERRORFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_LOGON_FAULT_INTERNALSERVERERRORFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_LOGON_FAULT_INVALIDOPERATIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTLIST_FAULT_INVALIDPARAMETERFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTLIST_FAULT_NOACTIVESESSIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTLIST_FAULT_INVALIDOPERATIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTLIST_FAULT_INTERNALSERVERERRORFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETQUESTIONS_FAULT_INVALIDPARAMETERFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETQUESTIONS_FAULT_OPERATIONNOTSUPPORTEDFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETQUESTIONS_FAULT_INVALIDOPERATIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETQUESTIONS_FAULT_INTERNALSERVERERRORFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETQUESTIONS_FAULT_NOACTIVESESSIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_ISSUECONTENT_FAULT_INVALIDOPERATIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_ISSUECONTENT_FAULT_INTERNALSERVERERRORFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_ISSUECONTENT_FAULT_INVALIDPARAMETERFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_ISSUECONTENT_FAULT_NOACTIVESESSIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_SETREADINGSYSTEMATTRIBUTES_FAULT_NOACTIVESESSIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_SETREADINGSYSTEMATTRIBUTES_FAULT_INVALIDOPERATIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_SETREADINGSYSTEMATTRIBUTES_FAULT_INTERNALSERVERERRORFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_SETREADINGSYSTEMATTRIBUTES_FAULT_INVALIDPARAMETERFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_LOGOFF_FAULT_INVALIDOPERATIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_LOGOFF_FAULT_INTERNALSERVERERRORFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_RETURNCONTENT_FAULT_INVALIDPARAMETERFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_RETURNCONTENT_FAULT_OPERATIONNOTSUPPORTEDFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_RETURNCONTENT_FAULT_INVALIDOPERATIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_RETURNCONTENT_FAULT_INTERNALSERVERERRORFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_RETURNCONTENT_FAULT_NOACTIVESESSIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETKEYEXCHANGEOBJECT_FAULT_NOACTIVESESSIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETKEYEXCHANGEOBJECT_FAULT_OPERATIONNOTSUPPORTEDFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETKEYEXCHANGEOBJECT_FAULT_INVALIDPARAMETERFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETKEYEXCHANGEOBJECT_FAULT_INVALIDOPERATIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETKEYEXCHANGEOBJECT_FAULT_INTERNALSERVERERRORFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEANNOUNCEMENTS_FAULT_NOACTIVESESSIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEANNOUNCEMENTS_FAULT_OPERATIONNOTSUPPORTEDFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEANNOUNCEMENTS_FAULT_INVALIDOPERATIONFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEANNOUNCEMENTS_FAULT_INTERNALSERVERERRORFAULT,
            AXIS2_STUB_KOLIBRE_DAISYONLINE_ERROR_LAST
    } axis2_stub_Kolibre_DaisyOnline_error_codes;

	#ifdef __cplusplus
	}
	#endif
   

