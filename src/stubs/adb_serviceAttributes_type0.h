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



        #ifndef ADB_SERVICEATTRIBUTES_TYPE0_H
        #define ADB_SERVICEATTRIBUTES_TYPE0_H

       /**
        * adb_serviceAttributes_type0.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Nov 05, 2013 (03:44:52 EET)
        */

       /**
        *  adb_serviceAttributes_type0 class
        */

        
          #include "adb_serviceProvider_type0.h"
          
          #include "adb_service_type0.h"
          
          #include "adb_supportedContentSelectionMethods_type0.h"
          
          #include "adb_supportedUplinkAudioCodecs_type0.h"
          
          #include "adb_supportedOptionalOperations_type0.h"
          

        #include <stdio.h>
        #include <axiom.h>
        #include <axis2_util.h>
        #include <axiom_soap.h>
        #include <axis2_client.h>

        #include "axis2_extension_mapper.h"

        #ifdef __cplusplus
        extern "C"
        {
        #endif

        #define ADB_DEFAULT_DIGIT_LIMIT 1024
        #define ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT 64
        

        typedef struct adb_serviceAttributes_type0 adb_serviceAttributes_type0_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_serviceAttributes_type0_t
         * @param env pointer to environment struct
         * @return newly created adb_serviceAttributes_type0_t object
         */
        adb_serviceAttributes_type0_t* AXIS2_CALL
        adb_serviceAttributes_type0_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_serviceAttributes_type0_free (
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env);

        /**
         * Free adb_serviceAttributes_type0_t object
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_serviceAttributes_type0_free_obj (
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        
        

        /**
         * Getter for serviceProvider. 
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return adb_serviceProvider_type0_t*
         */
        adb_serviceProvider_type0_t* AXIS2_CALL
        adb_serviceAttributes_type0_get_serviceProvider(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env);

        /**
         * Setter for serviceProvider.
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @param arg_serviceProvider adb_serviceProvider_type0_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_serviceAttributes_type0_set_serviceProvider(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env,
            adb_serviceProvider_type0_t*  arg_serviceProvider);

        /**
         * Resetter for serviceProvider
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_serviceAttributes_type0_reset_serviceProvider(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for service. 
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return adb_service_type0_t*
         */
        adb_service_type0_t* AXIS2_CALL
        adb_serviceAttributes_type0_get_service(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env);

        /**
         * Setter for service.
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @param arg_service adb_service_type0_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_serviceAttributes_type0_set_service(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env,
            adb_service_type0_t*  arg_service);

        /**
         * Resetter for service
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_serviceAttributes_type0_reset_service(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for supportedContentSelectionMethods. 
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return adb_supportedContentSelectionMethods_type0_t*
         */
        adb_supportedContentSelectionMethods_type0_t* AXIS2_CALL
        adb_serviceAttributes_type0_get_supportedContentSelectionMethods(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env);

        /**
         * Setter for supportedContentSelectionMethods.
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @param arg_supportedContentSelectionMethods adb_supportedContentSelectionMethods_type0_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_serviceAttributes_type0_set_supportedContentSelectionMethods(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env,
            adb_supportedContentSelectionMethods_type0_t*  arg_supportedContentSelectionMethods);

        /**
         * Resetter for supportedContentSelectionMethods
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_serviceAttributes_type0_reset_supportedContentSelectionMethods(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for supportsServerSideBack. 
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return axis2_bool_t
         */
        axis2_bool_t AXIS2_CALL
        adb_serviceAttributes_type0_get_supportsServerSideBack(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env);

        /**
         * Setter for supportsServerSideBack.
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @param arg_supportsServerSideBack axis2_bool_t
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_serviceAttributes_type0_set_supportsServerSideBack(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env,
            axis2_bool_t  arg_supportsServerSideBack);

        /**
         * Resetter for supportsServerSideBack
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_serviceAttributes_type0_reset_supportsServerSideBack(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for supportsSearch. 
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return axis2_bool_t
         */
        axis2_bool_t AXIS2_CALL
        adb_serviceAttributes_type0_get_supportsSearch(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env);

        /**
         * Setter for supportsSearch.
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @param arg_supportsSearch axis2_bool_t
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_serviceAttributes_type0_set_supportsSearch(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env,
            axis2_bool_t  arg_supportsSearch);

        /**
         * Resetter for supportsSearch
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_serviceAttributes_type0_reset_supportsSearch(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for supportedUplinkAudioCodecs. 
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return adb_supportedUplinkAudioCodecs_type0_t*
         */
        adb_supportedUplinkAudioCodecs_type0_t* AXIS2_CALL
        adb_serviceAttributes_type0_get_supportedUplinkAudioCodecs(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env);

        /**
         * Setter for supportedUplinkAudioCodecs.
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @param arg_supportedUplinkAudioCodecs adb_supportedUplinkAudioCodecs_type0_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_serviceAttributes_type0_set_supportedUplinkAudioCodecs(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env,
            adb_supportedUplinkAudioCodecs_type0_t*  arg_supportedUplinkAudioCodecs);

        /**
         * Resetter for supportedUplinkAudioCodecs
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_serviceAttributes_type0_reset_supportedUplinkAudioCodecs(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for supportsAudioLabels. 
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return axis2_bool_t
         */
        axis2_bool_t AXIS2_CALL
        adb_serviceAttributes_type0_get_supportsAudioLabels(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env);

        /**
         * Setter for supportsAudioLabels.
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @param arg_supportsAudioLabels axis2_bool_t
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_serviceAttributes_type0_set_supportsAudioLabels(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env,
            axis2_bool_t  arg_supportsAudioLabels);

        /**
         * Resetter for supportsAudioLabels
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_serviceAttributes_type0_reset_supportsAudioLabels(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for supportedOptionalOperations. 
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return adb_supportedOptionalOperations_type0_t*
         */
        adb_supportedOptionalOperations_type0_t* AXIS2_CALL
        adb_serviceAttributes_type0_get_supportedOptionalOperations(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env);

        /**
         * Setter for supportedOptionalOperations.
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @param arg_supportedOptionalOperations adb_supportedOptionalOperations_type0_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_serviceAttributes_type0_set_supportedOptionalOperations(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env,
            adb_supportedOptionalOperations_type0_t*  arg_supportedOptionalOperations);

        /**
         * Resetter for supportedOptionalOperations
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_serviceAttributes_type0_reset_supportedOptionalOperations(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether serviceProvider is nill
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_serviceAttributes_type0_is_serviceProvider_nil(
                adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether service is nill
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_serviceAttributes_type0_is_service_nil(
                adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether supportedContentSelectionMethods is nill
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_serviceAttributes_type0_is_supportedContentSelectionMethods_nil(
                adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether supportsServerSideBack is nill
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_serviceAttributes_type0_is_supportsServerSideBack_nil(
                adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether supportsSearch is nill
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_serviceAttributes_type0_is_supportsSearch_nil(
                adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether supportedUplinkAudioCodecs is nill
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_serviceAttributes_type0_is_supportedUplinkAudioCodecs_nil(
                adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether supportsAudioLabels is nill
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_serviceAttributes_type0_is_supportsAudioLabels_nil(
                adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether supportedOptionalOperations is nill
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_serviceAttributes_type0_is_supportedOptionalOperations_nil(
                adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                const axutil_env_t *env);


        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_serviceAttributes_type0_deserialize(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_serviceAttributes_type0_deserialize_obj(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_serviceAttributes_type0_declare_parent_namespaces(
                    adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @param serviceAttributes_type0_om_node node to serialize from
         * @param serviceAttributes_type0_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_serviceAttributes_type0_serialize(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env,
            axiom_node_t* serviceAttributes_type0_om_node, axiom_element_t *serviceAttributes_type0_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @param serviceAttributes_type0_om_node node to serialize from
         * @param serviceAttributes_type0_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_serviceAttributes_type0_serialize_obj(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env,
            axiom_node_t* serviceAttributes_type0_om_node, axiom_element_t *serviceAttributes_type0_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_serviceAttributes_type0 is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_serviceAttributes_type0_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_serviceAttributes_type0_t
         * @param env pointer to environment struct
         * @param _serviceProvider adb_serviceProvider_type0_t*
         * @param _service adb_service_type0_t*
         * @param _supportedContentSelectionMethods adb_supportedContentSelectionMethods_type0_t*
         * @param _supportsServerSideBack axis2_bool_t
         * @param _supportsSearch axis2_bool_t
         * @param _supportedUplinkAudioCodecs adb_supportedUplinkAudioCodecs_type0_t*
         * @param _supportsAudioLabels axis2_bool_t
         * @param _supportedOptionalOperations adb_supportedOptionalOperations_type0_t*
         * @return newly created adb_serviceAttributes_type0_t object
         */
        adb_serviceAttributes_type0_t* AXIS2_CALL
        adb_serviceAttributes_type0_create_with_values(
            const axutil_env_t *env,
                adb_serviceProvider_type0_t* _serviceProvider,
                adb_service_type0_t* _service,
                adb_supportedContentSelectionMethods_type0_t* _supportedContentSelectionMethods,
                axis2_bool_t _supportsServerSideBack,
                axis2_bool_t _supportsSearch,
                adb_supportedUplinkAudioCodecs_type0_t* _supportedUplinkAudioCodecs,
                axis2_bool_t _supportsAudioLabels,
                adb_supportedOptionalOperations_type0_t* _supportedOptionalOperations);

        


                /**
                 * Free adb_serviceAttributes_type0_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                adb_serviceProvider_type0_t* AXIS2_CALL
                adb_serviceAttributes_type0_free_popping_value(
                        adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for serviceProvider by property number (1)
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return adb_serviceProvider_type0_t*
         */
        adb_serviceProvider_type0_t* AXIS2_CALL
        adb_serviceAttributes_type0_get_property1(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for service by property number (2)
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return adb_service_type0_t*
         */
        adb_service_type0_t* AXIS2_CALL
        adb_serviceAttributes_type0_get_property2(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for supportedContentSelectionMethods by property number (3)
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return adb_supportedContentSelectionMethods_type0_t*
         */
        adb_supportedContentSelectionMethods_type0_t* AXIS2_CALL
        adb_serviceAttributes_type0_get_property3(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for supportsServerSideBack by property number (4)
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return axis2_bool_t
         */
        axis2_bool_t AXIS2_CALL
        adb_serviceAttributes_type0_get_property4(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for supportsSearch by property number (5)
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return axis2_bool_t
         */
        axis2_bool_t AXIS2_CALL
        adb_serviceAttributes_type0_get_property5(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for supportedUplinkAudioCodecs by property number (6)
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return adb_supportedUplinkAudioCodecs_type0_t*
         */
        adb_supportedUplinkAudioCodecs_type0_t* AXIS2_CALL
        adb_serviceAttributes_type0_get_property6(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for supportsAudioLabels by property number (7)
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return axis2_bool_t
         */
        axis2_bool_t AXIS2_CALL
        adb_serviceAttributes_type0_get_property7(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for supportedOptionalOperations by property number (8)
         * @param  _serviceAttributes_type0 adb_serviceAttributes_type0_t object
         * @param env pointer to environment struct
         * @return adb_supportedOptionalOperations_type0_t*
         */
        adb_supportedOptionalOperations_type0_t* AXIS2_CALL
        adb_serviceAttributes_type0_get_property8(
            adb_serviceAttributes_type0_t* _serviceAttributes_type0,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_SERVICEATTRIBUTES_TYPE0_H */
    

