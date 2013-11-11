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



        #ifndef ADB_CONTENTMETADATA_TYPE0_H
        #define ADB_CONTENTMETADATA_TYPE0_H

       /**
        * adb_contentMetadata_type0.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Nov 05, 2013 (03:44:52 EET)
        */

       /**
        *  adb_contentMetadata_type0 class
        */

        
          #include "adb_sample_type0.h"
          
          #include "adb_metadata_type0.h"
          

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
        

        typedef struct adb_contentMetadata_type0 adb_contentMetadata_type0_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_contentMetadata_type0_t
         * @param env pointer to environment struct
         * @return newly created adb_contentMetadata_type0_t object
         */
        adb_contentMetadata_type0_t* AXIS2_CALL
        adb_contentMetadata_type0_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentMetadata_type0_free (
            adb_contentMetadata_type0_t* _contentMetadata_type0,
            const axutil_env_t *env);

        /**
         * Free adb_contentMetadata_type0_t object
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentMetadata_type0_free_obj (
            adb_contentMetadata_type0_t* _contentMetadata_type0,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        
        

        /**
         * Getter for sample. 
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object
         * @param env pointer to environment struct
         * @return adb_sample_type0_t*
         */
        adb_sample_type0_t* AXIS2_CALL
        adb_contentMetadata_type0_get_sample(
            adb_contentMetadata_type0_t* _contentMetadata_type0,
            const axutil_env_t *env);

        /**
         * Setter for sample.
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_sample adb_sample_type0_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentMetadata_type0_set_sample(
            adb_contentMetadata_type0_t* _contentMetadata_type0,
            const axutil_env_t *env,
            adb_sample_type0_t*  arg_sample);

        /**
         * Resetter for sample
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentMetadata_type0_reset_sample(
            adb_contentMetadata_type0_t* _contentMetadata_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for metadata. 
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object
         * @param env pointer to environment struct
         * @return adb_metadata_type0_t*
         */
        adb_metadata_type0_t* AXIS2_CALL
        adb_contentMetadata_type0_get_metadata(
            adb_contentMetadata_type0_t* _contentMetadata_type0,
            const axutil_env_t *env);

        /**
         * Setter for metadata.
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_metadata adb_metadata_type0_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentMetadata_type0_set_metadata(
            adb_contentMetadata_type0_t* _contentMetadata_type0,
            const axutil_env_t *env,
            adb_metadata_type0_t*  arg_metadata);

        /**
         * Resetter for metadata
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentMetadata_type0_reset_metadata(
            adb_contentMetadata_type0_t* _contentMetadata_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for category. 
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_contentMetadata_type0_get_category(
            adb_contentMetadata_type0_t* _contentMetadata_type0,
            const axutil_env_t *env);

        /**
         * Setter for category.
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_category axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentMetadata_type0_set_category(
            adb_contentMetadata_type0_t* _contentMetadata_type0,
            const axutil_env_t *env,
            const axis2_char_t*  arg_category);

        /**
         * Resetter for category
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentMetadata_type0_reset_category(
            adb_contentMetadata_type0_t* _contentMetadata_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for requiresReturn. 
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object
         * @param env pointer to environment struct
         * @return axis2_bool_t
         */
        axis2_bool_t AXIS2_CALL
        adb_contentMetadata_type0_get_requiresReturn(
            adb_contentMetadata_type0_t* _contentMetadata_type0,
            const axutil_env_t *env);

        /**
         * Setter for requiresReturn.
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_requiresReturn axis2_bool_t
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentMetadata_type0_set_requiresReturn(
            adb_contentMetadata_type0_t* _contentMetadata_type0,
            const axutil_env_t *env,
            axis2_bool_t  arg_requiresReturn);

        /**
         * Resetter for requiresReturn
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentMetadata_type0_reset_requiresReturn(
            adb_contentMetadata_type0_t* _contentMetadata_type0,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether sample is nill
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_contentMetadata_type0_is_sample_nil(
                adb_contentMetadata_type0_t* _contentMetadata_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether metadata is nill
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_contentMetadata_type0_is_metadata_nil(
                adb_contentMetadata_type0_t* _contentMetadata_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether category is nill
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_contentMetadata_type0_is_category_nil(
                adb_contentMetadata_type0_t* _contentMetadata_type0,
                const axutil_env_t *env);


        
        /**
         * Set category to nill (currently the same as reset)
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentMetadata_type0_set_category_nil(
                adb_contentMetadata_type0_t* _contentMetadata_type0,
                const axutil_env_t *env);
        

        /**
         * Check whether requiresReturn is nill
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_contentMetadata_type0_is_requiresReturn_nil(
                adb_contentMetadata_type0_t* _contentMetadata_type0,
                const axutil_env_t *env);


        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentMetadata_type0_deserialize(
            adb_contentMetadata_type0_t* _contentMetadata_type0,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentMetadata_type0_deserialize_obj(
            adb_contentMetadata_type0_t* _contentMetadata_type0,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_contentMetadata_type0_declare_parent_namespaces(
                    adb_contentMetadata_type0_t* _contentMetadata_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object
         * @param env pointer to environment struct
         * @param contentMetadata_type0_om_node node to serialize from
         * @param contentMetadata_type0_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_contentMetadata_type0_serialize(
            adb_contentMetadata_type0_t* _contentMetadata_type0,
            const axutil_env_t *env,
            axiom_node_t* contentMetadata_type0_om_node, axiom_element_t *contentMetadata_type0_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object
         * @param env pointer to environment struct
         * @param contentMetadata_type0_om_node node to serialize from
         * @param contentMetadata_type0_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_contentMetadata_type0_serialize_obj(
            adb_contentMetadata_type0_t* _contentMetadata_type0,
            const axutil_env_t *env,
            axiom_node_t* contentMetadata_type0_om_node, axiom_element_t *contentMetadata_type0_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_contentMetadata_type0 is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_contentMetadata_type0_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_contentMetadata_type0_t
         * @param env pointer to environment struct
         * @param _sample adb_sample_type0_t*
         * @param _metadata adb_metadata_type0_t*
         * @param _category axis2_char_t*
         * @param _requiresReturn axis2_bool_t
         * @return newly created adb_contentMetadata_type0_t object
         */
        adb_contentMetadata_type0_t* AXIS2_CALL
        adb_contentMetadata_type0_create_with_values(
            const axutil_env_t *env,
                adb_sample_type0_t* _sample,
                adb_metadata_type0_t* _metadata,
                axis2_char_t* _category,
                axis2_bool_t _requiresReturn);

        


                /**
                 * Free adb_contentMetadata_type0_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                adb_sample_type0_t* AXIS2_CALL
                adb_contentMetadata_type0_free_popping_value(
                        adb_contentMetadata_type0_t* _contentMetadata_type0,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for sample by property number (1)
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object
         * @param env pointer to environment struct
         * @return adb_sample_type0_t*
         */
        adb_sample_type0_t* AXIS2_CALL
        adb_contentMetadata_type0_get_property1(
            adb_contentMetadata_type0_t* _contentMetadata_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for metadata by property number (2)
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object
         * @param env pointer to environment struct
         * @return adb_metadata_type0_t*
         */
        adb_metadata_type0_t* AXIS2_CALL
        adb_contentMetadata_type0_get_property2(
            adb_contentMetadata_type0_t* _contentMetadata_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for category by property number (3)
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_contentMetadata_type0_get_property3(
            adb_contentMetadata_type0_t* _contentMetadata_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for requiresReturn by property number (4)
         * @param  _contentMetadata_type0 adb_contentMetadata_type0_t object
         * @param env pointer to environment struct
         * @return axis2_bool_t
         */
        axis2_bool_t AXIS2_CALL
        adb_contentMetadata_type0_get_property4(
            adb_contentMetadata_type0_t* _contentMetadata_type0,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_CONTENTMETADATA_TYPE0_H */
    

