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



        #ifndef ADB_AUDIO_TYPE0_H
        #define ADB_AUDIO_TYPE0_H

       /**
        * adb_audio_type0.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Oct 19, 2012 (02:20:52 EEST)
        */

       /**
        *  adb_audio_type0 class
        */

        

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
        

        typedef struct adb_audio_type0 adb_audio_type0_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_audio_type0_t
         * @param env pointer to environment struct
         * @return newly created adb_audio_type0_t object
         */
        adb_audio_type0_t* AXIS2_CALL
        adb_audio_type0_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _audio_type0 adb_audio_type0_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_audio_type0_free (
            adb_audio_type0_t* _audio_type0,
            const axutil_env_t *env);

        /**
         * Free adb_audio_type0_t object
         * @param  _audio_type0 adb_audio_type0_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_audio_type0_free_obj (
            adb_audio_type0_t* _audio_type0,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        
        

        /**
         * Getter for uri. 
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @return axutil_uri_t*
         */
        axutil_uri_t* AXIS2_CALL
        adb_audio_type0_get_uri(
            adb_audio_type0_t* _audio_type0,
            const axutil_env_t *env);

        /**
         * Setter for uri.
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @param arg_uri axutil_uri_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_audio_type0_set_uri(
            adb_audio_type0_t* _audio_type0,
            const axutil_env_t *env,
            axutil_uri_t*  arg_uri);

        /**
         * Resetter for uri
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_audio_type0_reset_uri(
            adb_audio_type0_t* _audio_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for rangeBegin. 
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @return int64_t
         */
        int64_t AXIS2_CALL
        adb_audio_type0_get_rangeBegin(
            adb_audio_type0_t* _audio_type0,
            const axutil_env_t *env);

        /**
         * Setter for rangeBegin.
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @param arg_rangeBegin int64_t
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_audio_type0_set_rangeBegin(
            adb_audio_type0_t* _audio_type0,
            const axutil_env_t *env,
            const int64_t  arg_rangeBegin);

        /**
         * Resetter for rangeBegin
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_audio_type0_reset_rangeBegin(
            adb_audio_type0_t* _audio_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for rangeEnd. 
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @return int64_t
         */
        int64_t AXIS2_CALL
        adb_audio_type0_get_rangeEnd(
            adb_audio_type0_t* _audio_type0,
            const axutil_env_t *env);

        /**
         * Setter for rangeEnd.
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @param arg_rangeEnd int64_t
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_audio_type0_set_rangeEnd(
            adb_audio_type0_t* _audio_type0,
            const axutil_env_t *env,
            const int64_t  arg_rangeEnd);

        /**
         * Resetter for rangeEnd
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_audio_type0_reset_rangeEnd(
            adb_audio_type0_t* _audio_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for size. 
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @return int64_t
         */
        int64_t AXIS2_CALL
        adb_audio_type0_get_size(
            adb_audio_type0_t* _audio_type0,
            const axutil_env_t *env);

        /**
         * Setter for size.
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @param arg_size int64_t
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_audio_type0_set_size(
            adb_audio_type0_t* _audio_type0,
            const axutil_env_t *env,
            const int64_t  arg_size);

        /**
         * Resetter for size
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_audio_type0_reset_size(
            adb_audio_type0_t* _audio_type0,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether uri is nill
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_audio_type0_is_uri_nil(
                adb_audio_type0_t* _audio_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether rangeBegin is nill
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_audio_type0_is_rangeBegin_nil(
                adb_audio_type0_t* _audio_type0,
                const axutil_env_t *env);


        
        /**
         * Set rangeBegin to nill (currently the same as reset)
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_audio_type0_set_rangeBegin_nil(
                adb_audio_type0_t* _audio_type0,
                const axutil_env_t *env);
        

        /**
         * Check whether rangeEnd is nill
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_audio_type0_is_rangeEnd_nil(
                adb_audio_type0_t* _audio_type0,
                const axutil_env_t *env);


        
        /**
         * Set rangeEnd to nill (currently the same as reset)
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_audio_type0_set_rangeEnd_nil(
                adb_audio_type0_t* _audio_type0,
                const axutil_env_t *env);
        

        /**
         * Check whether size is nill
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_audio_type0_is_size_nil(
                adb_audio_type0_t* _audio_type0,
                const axutil_env_t *env);


        
        /**
         * Set size to nill (currently the same as reset)
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_audio_type0_set_size_nil(
                adb_audio_type0_t* _audio_type0,
                const axutil_env_t *env);
        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_audio_type0_deserialize(
            adb_audio_type0_t* _audio_type0,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_audio_type0_deserialize_obj(
            adb_audio_type0_t* _audio_type0,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_audio_type0_declare_parent_namespaces(
                    adb_audio_type0_t* _audio_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @param audio_type0_om_node node to serialize from
         * @param audio_type0_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_audio_type0_serialize(
            adb_audio_type0_t* _audio_type0,
            const axutil_env_t *env,
            axiom_node_t* audio_type0_om_node, axiom_element_t *audio_type0_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @param audio_type0_om_node node to serialize from
         * @param audio_type0_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_audio_type0_serialize_obj(
            adb_audio_type0_t* _audio_type0,
            const axutil_env_t *env,
            axiom_node_t* audio_type0_om_node, axiom_element_t *audio_type0_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_audio_type0 is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_audio_type0_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_audio_type0_t
         * @param env pointer to environment struct
         * @param _uri axutil_uri_t*
         * @param _rangeBegin int64_t
         * @param _rangeEnd int64_t
         * @param _size int64_t
         * @return newly created adb_audio_type0_t object
         */
        adb_audio_type0_t* AXIS2_CALL
        adb_audio_type0_create_with_values(
            const axutil_env_t *env,
                axutil_uri_t* _uri,
                int64_t _rangeBegin,
                int64_t _rangeEnd,
                int64_t _size);

        


                /**
                 * Free adb_audio_type0_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _audio_type0 adb_audio_type0_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                axutil_uri_t* AXIS2_CALL
                adb_audio_type0_free_popping_value(
                        adb_audio_type0_t* _audio_type0,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for uri by property number (1)
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @return axutil_uri_t*
         */
        axutil_uri_t* AXIS2_CALL
        adb_audio_type0_get_property1(
            adb_audio_type0_t* _audio_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for rangeBegin by property number (2)
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @return int64_t
         */
        int64_t AXIS2_CALL
        adb_audio_type0_get_property2(
            adb_audio_type0_t* _audio_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for rangeEnd by property number (3)
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @return int64_t
         */
        int64_t AXIS2_CALL
        adb_audio_type0_get_property3(
            adb_audio_type0_t* _audio_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for size by property number (4)
         * @param  _audio_type0 adb_audio_type0_t object
         * @param env pointer to environment struct
         * @return int64_t
         */
        int64_t AXIS2_CALL
        adb_audio_type0_get_property4(
            adb_audio_type0_t* _audio_type0,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_AUDIO_TYPE0_H */
    

