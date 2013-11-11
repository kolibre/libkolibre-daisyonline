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



        #ifndef ADB_CONFIG_TYPE0_H
        #define ADB_CONFIG_TYPE0_H

       /**
        * adb_config_type0.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Nov 05, 2013 (03:44:52 EET)
        */

       /**
        *  adb_config_type0 class
        */

        
          #include "adb_supportedContentFormats_type0.h"
          
          #include "adb_supportedContentProtectionFormats_type0.h"
          
          #include "adb_keyRing_type0.h"
          
          #include "adb_supportedMimeTypes_type0.h"
          
          #include "adb_supportedInputTypes_type0.h"
          
          #include "adb_additionalTransferProtocols_type0.h"
          

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
        

        typedef struct adb_config_type0 adb_config_type0_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_config_type0_t
         * @param env pointer to environment struct
         * @return newly created adb_config_type0_t object
         */
        adb_config_type0_t* AXIS2_CALL
        adb_config_type0_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _config_type0 adb_config_type0_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_config_type0_free (
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

        /**
         * Free adb_config_type0_t object
         * @param  _config_type0 adb_config_type0_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_config_type0_free_obj (
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        
        

        /**
         * Getter for supportsMultipleSelections. 
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return axis2_bool_t
         */
        axis2_bool_t AXIS2_CALL
        adb_config_type0_get_supportsMultipleSelections(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

        /**
         * Setter for supportsMultipleSelections.
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @param arg_supportsMultipleSelections axis2_bool_t
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_config_type0_set_supportsMultipleSelections(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env,
            axis2_bool_t  arg_supportsMultipleSelections);

        /**
         * Resetter for supportsMultipleSelections
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_config_type0_reset_supportsMultipleSelections(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for preferredUILanguage. 
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_config_type0_get_preferredUILanguage(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

        /**
         * Setter for preferredUILanguage.
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @param arg_preferredUILanguage axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_config_type0_set_preferredUILanguage(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env,
            const axis2_char_t*  arg_preferredUILanguage);

        /**
         * Resetter for preferredUILanguage
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_config_type0_reset_preferredUILanguage(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for bandwidth. 
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return int
         */
        int AXIS2_CALL
        adb_config_type0_get_bandwidth(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

        /**
         * Setter for bandwidth.
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @param arg_bandwidth int
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_config_type0_set_bandwidth(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env,
            const int  arg_bandwidth);

        /**
         * Resetter for bandwidth
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_config_type0_reset_bandwidth(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for supportedContentFormats. 
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return adb_supportedContentFormats_type0_t*
         */
        adb_supportedContentFormats_type0_t* AXIS2_CALL
        adb_config_type0_get_supportedContentFormats(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

        /**
         * Setter for supportedContentFormats.
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @param arg_supportedContentFormats adb_supportedContentFormats_type0_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_config_type0_set_supportedContentFormats(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env,
            adb_supportedContentFormats_type0_t*  arg_supportedContentFormats);

        /**
         * Resetter for supportedContentFormats
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_config_type0_reset_supportedContentFormats(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for supportedContentProtectionFormats. 
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return adb_supportedContentProtectionFormats_type0_t*
         */
        adb_supportedContentProtectionFormats_type0_t* AXIS2_CALL
        adb_config_type0_get_supportedContentProtectionFormats(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

        /**
         * Setter for supportedContentProtectionFormats.
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @param arg_supportedContentProtectionFormats adb_supportedContentProtectionFormats_type0_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_config_type0_set_supportedContentProtectionFormats(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env,
            adb_supportedContentProtectionFormats_type0_t*  arg_supportedContentProtectionFormats);

        /**
         * Resetter for supportedContentProtectionFormats
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_config_type0_reset_supportedContentProtectionFormats(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for keyRing. 
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return adb_keyRing_type0_t*
         */
        adb_keyRing_type0_t* AXIS2_CALL
        adb_config_type0_get_keyRing(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

        /**
         * Setter for keyRing.
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @param arg_keyRing adb_keyRing_type0_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_config_type0_set_keyRing(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env,
            adb_keyRing_type0_t*  arg_keyRing);

        /**
         * Resetter for keyRing
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_config_type0_reset_keyRing(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for supportedMimeTypes. 
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return adb_supportedMimeTypes_type0_t*
         */
        adb_supportedMimeTypes_type0_t* AXIS2_CALL
        adb_config_type0_get_supportedMimeTypes(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

        /**
         * Setter for supportedMimeTypes.
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @param arg_supportedMimeTypes adb_supportedMimeTypes_type0_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_config_type0_set_supportedMimeTypes(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env,
            adb_supportedMimeTypes_type0_t*  arg_supportedMimeTypes);

        /**
         * Resetter for supportedMimeTypes
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_config_type0_reset_supportedMimeTypes(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for supportedInputTypes. 
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return adb_supportedInputTypes_type0_t*
         */
        adb_supportedInputTypes_type0_t* AXIS2_CALL
        adb_config_type0_get_supportedInputTypes(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

        /**
         * Setter for supportedInputTypes.
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @param arg_supportedInputTypes adb_supportedInputTypes_type0_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_config_type0_set_supportedInputTypes(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env,
            adb_supportedInputTypes_type0_t*  arg_supportedInputTypes);

        /**
         * Resetter for supportedInputTypes
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_config_type0_reset_supportedInputTypes(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for requiresAudioLabels. 
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return axis2_bool_t
         */
        axis2_bool_t AXIS2_CALL
        adb_config_type0_get_requiresAudioLabels(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

        /**
         * Setter for requiresAudioLabels.
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @param arg_requiresAudioLabels axis2_bool_t
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_config_type0_set_requiresAudioLabels(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env,
            axis2_bool_t  arg_requiresAudioLabels);

        /**
         * Resetter for requiresAudioLabels
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_config_type0_reset_requiresAudioLabels(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for additionalTransferProtocols. 
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return adb_additionalTransferProtocols_type0_t*
         */
        adb_additionalTransferProtocols_type0_t* AXIS2_CALL
        adb_config_type0_get_additionalTransferProtocols(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

        /**
         * Setter for additionalTransferProtocols.
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @param arg_additionalTransferProtocols adb_additionalTransferProtocols_type0_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_config_type0_set_additionalTransferProtocols(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env,
            adb_additionalTransferProtocols_type0_t*  arg_additionalTransferProtocols);

        /**
         * Resetter for additionalTransferProtocols
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_config_type0_reset_additionalTransferProtocols(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether supportsMultipleSelections is nill
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_config_type0_is_supportsMultipleSelections_nil(
                adb_config_type0_t* _config_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether preferredUILanguage is nill
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_config_type0_is_preferredUILanguage_nil(
                adb_config_type0_t* _config_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether bandwidth is nill
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_config_type0_is_bandwidth_nil(
                adb_config_type0_t* _config_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether supportedContentFormats is nill
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_config_type0_is_supportedContentFormats_nil(
                adb_config_type0_t* _config_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether supportedContentProtectionFormats is nill
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_config_type0_is_supportedContentProtectionFormats_nil(
                adb_config_type0_t* _config_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether keyRing is nill
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_config_type0_is_keyRing_nil(
                adb_config_type0_t* _config_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether supportedMimeTypes is nill
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_config_type0_is_supportedMimeTypes_nil(
                adb_config_type0_t* _config_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether supportedInputTypes is nill
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_config_type0_is_supportedInputTypes_nil(
                adb_config_type0_t* _config_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether requiresAudioLabels is nill
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_config_type0_is_requiresAudioLabels_nil(
                adb_config_type0_t* _config_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether additionalTransferProtocols is nill
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_config_type0_is_additionalTransferProtocols_nil(
                adb_config_type0_t* _config_type0,
                const axutil_env_t *env);


        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_config_type0_deserialize(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_config_type0_deserialize_obj(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_config_type0_declare_parent_namespaces(
                    adb_config_type0_t* _config_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @param config_type0_om_node node to serialize from
         * @param config_type0_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_config_type0_serialize(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env,
            axiom_node_t* config_type0_om_node, axiom_element_t *config_type0_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @param config_type0_om_node node to serialize from
         * @param config_type0_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_config_type0_serialize_obj(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env,
            axiom_node_t* config_type0_om_node, axiom_element_t *config_type0_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_config_type0 is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_config_type0_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_config_type0_t
         * @param env pointer to environment struct
         * @param _supportsMultipleSelections axis2_bool_t
         * @param _preferredUILanguage axis2_char_t*
         * @param _bandwidth int
         * @param _supportedContentFormats adb_supportedContentFormats_type0_t*
         * @param _supportedContentProtectionFormats adb_supportedContentProtectionFormats_type0_t*
         * @param _keyRing adb_keyRing_type0_t*
         * @param _supportedMimeTypes adb_supportedMimeTypes_type0_t*
         * @param _supportedInputTypes adb_supportedInputTypes_type0_t*
         * @param _requiresAudioLabels axis2_bool_t
         * @param _additionalTransferProtocols adb_additionalTransferProtocols_type0_t*
         * @return newly created adb_config_type0_t object
         */
        adb_config_type0_t* AXIS2_CALL
        adb_config_type0_create_with_values(
            const axutil_env_t *env,
                axis2_bool_t _supportsMultipleSelections,
                axis2_char_t* _preferredUILanguage,
                int _bandwidth,
                adb_supportedContentFormats_type0_t* _supportedContentFormats,
                adb_supportedContentProtectionFormats_type0_t* _supportedContentProtectionFormats,
                adb_keyRing_type0_t* _keyRing,
                adb_supportedMimeTypes_type0_t* _supportedMimeTypes,
                adb_supportedInputTypes_type0_t* _supportedInputTypes,
                axis2_bool_t _requiresAudioLabels,
                adb_additionalTransferProtocols_type0_t* _additionalTransferProtocols);

        


                /**
                 * Free adb_config_type0_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _config_type0 adb_config_type0_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                axis2_bool_t AXIS2_CALL
                adb_config_type0_free_popping_value(
                        adb_config_type0_t* _config_type0,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for supportsMultipleSelections by property number (1)
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return axis2_bool_t
         */
        axis2_bool_t AXIS2_CALL
        adb_config_type0_get_property1(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for preferredUILanguage by property number (2)
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_config_type0_get_property2(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for bandwidth by property number (3)
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return int
         */
        int AXIS2_CALL
        adb_config_type0_get_property3(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for supportedContentFormats by property number (4)
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return adb_supportedContentFormats_type0_t*
         */
        adb_supportedContentFormats_type0_t* AXIS2_CALL
        adb_config_type0_get_property4(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for supportedContentProtectionFormats by property number (5)
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return adb_supportedContentProtectionFormats_type0_t*
         */
        adb_supportedContentProtectionFormats_type0_t* AXIS2_CALL
        adb_config_type0_get_property5(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for keyRing by property number (6)
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return adb_keyRing_type0_t*
         */
        adb_keyRing_type0_t* AXIS2_CALL
        adb_config_type0_get_property6(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for supportedMimeTypes by property number (7)
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return adb_supportedMimeTypes_type0_t*
         */
        adb_supportedMimeTypes_type0_t* AXIS2_CALL
        adb_config_type0_get_property7(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for supportedInputTypes by property number (8)
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return adb_supportedInputTypes_type0_t*
         */
        adb_supportedInputTypes_type0_t* AXIS2_CALL
        adb_config_type0_get_property8(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for requiresAudioLabels by property number (9)
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return axis2_bool_t
         */
        axis2_bool_t AXIS2_CALL
        adb_config_type0_get_property9(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for additionalTransferProtocols by property number (10)
         * @param  _config_type0 adb_config_type0_t object
         * @param env pointer to environment struct
         * @return adb_additionalTransferProtocols_type0_t*
         */
        adb_additionalTransferProtocols_type0_t* AXIS2_CALL
        adb_config_type0_get_property10(
            adb_config_type0_t* _config_type0,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_CONFIG_TYPE0_H */
    

