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



        #ifndef ADB_RESOURCE_TYPE0_H
        #define ADB_RESOURCE_TYPE0_H

       /**
        * adb_resource_type0.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Nov 05, 2013 (09:21:13 EET)
        */

       /**
        *  adb_resource_type0 class
        */

        
            #include <axutil_date_time.h>
          

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
        

        typedef struct adb_resource_type0 adb_resource_type0_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_resource_type0_t
         * @param env pointer to environment struct
         * @return newly created adb_resource_type0_t object
         */
        adb_resource_type0_t* AXIS2_CALL
        adb_resource_type0_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _resource_type0 adb_resource_type0_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resource_type0_free (
            adb_resource_type0_t* _resource_type0,
            const axutil_env_t *env);

        /**
         * Free adb_resource_type0_t object
         * @param  _resource_type0 adb_resource_type0_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resource_type0_free_obj (
            adb_resource_type0_t* _resource_type0,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        
        

        /**
         * Getter for uri. 
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @return axutil_uri_t*
         */
        axutil_uri_t* AXIS2_CALL
        adb_resource_type0_get_uri(
            adb_resource_type0_t* _resource_type0,
            const axutil_env_t *env);

        /**
         * Setter for uri.
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @param arg_uri axutil_uri_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resource_type0_set_uri(
            adb_resource_type0_t* _resource_type0,
            const axutil_env_t *env,
            axutil_uri_t*  arg_uri);

        /**
         * Resetter for uri
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resource_type0_reset_uri(
            adb_resource_type0_t* _resource_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for mimeType. 
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_resource_type0_get_mimeType(
            adb_resource_type0_t* _resource_type0,
            const axutil_env_t *env);

        /**
         * Setter for mimeType.
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @param arg_mimeType axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resource_type0_set_mimeType(
            adb_resource_type0_t* _resource_type0,
            const axutil_env_t *env,
            const axis2_char_t*  arg_mimeType);

        /**
         * Resetter for mimeType
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resource_type0_reset_mimeType(
            adb_resource_type0_t* _resource_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for size. 
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @return int64_t
         */
        int64_t AXIS2_CALL
        adb_resource_type0_get_size(
            adb_resource_type0_t* _resource_type0,
            const axutil_env_t *env);

        /**
         * Setter for size.
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @param arg_size int64_t
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resource_type0_set_size(
            adb_resource_type0_t* _resource_type0,
            const axutil_env_t *env,
            const int64_t  arg_size);

        /**
         * Resetter for size
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resource_type0_reset_size(
            adb_resource_type0_t* _resource_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for localURI. 
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @return axutil_uri_t*
         */
        axutil_uri_t* AXIS2_CALL
        adb_resource_type0_get_localURI(
            adb_resource_type0_t* _resource_type0,
            const axutil_env_t *env);

        /**
         * Setter for localURI.
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @param arg_localURI axutil_uri_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resource_type0_set_localURI(
            adb_resource_type0_t* _resource_type0,
            const axutil_env_t *env,
            axutil_uri_t*  arg_localURI);

        /**
         * Resetter for localURI
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resource_type0_reset_localURI(
            adb_resource_type0_t* _resource_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for lastModifiedDate. 
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @return axutil_date_time_t*
         */
        axutil_date_time_t* AXIS2_CALL
        adb_resource_type0_get_lastModifiedDate(
            adb_resource_type0_t* _resource_type0,
            const axutil_env_t *env);

        /**
         * Setter for lastModifiedDate.
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @param arg_lastModifiedDate axutil_date_time_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resource_type0_set_lastModifiedDate(
            adb_resource_type0_t* _resource_type0,
            const axutil_env_t *env,
            axutil_date_time_t*  arg_lastModifiedDate);

        /**
         * Resetter for lastModifiedDate
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resource_type0_reset_lastModifiedDate(
            adb_resource_type0_t* _resource_type0,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether uri is nill
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_resource_type0_is_uri_nil(
                adb_resource_type0_t* _resource_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether mimeType is nill
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_resource_type0_is_mimeType_nil(
                adb_resource_type0_t* _resource_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether size is nill
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_resource_type0_is_size_nil(
                adb_resource_type0_t* _resource_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether localURI is nill
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_resource_type0_is_localURI_nil(
                adb_resource_type0_t* _resource_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether lastModifiedDate is nill
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_resource_type0_is_lastModifiedDate_nil(
                adb_resource_type0_t* _resource_type0,
                const axutil_env_t *env);


        
        /**
         * Set lastModifiedDate to nill (currently the same as reset)
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resource_type0_set_lastModifiedDate_nil(
                adb_resource_type0_t* _resource_type0,
                const axutil_env_t *env);
        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resource_type0_deserialize(
            adb_resource_type0_t* _resource_type0,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resource_type0_deserialize_obj(
            adb_resource_type0_t* _resource_type0,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_resource_type0_declare_parent_namespaces(
                    adb_resource_type0_t* _resource_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @param resource_type0_om_node node to serialize from
         * @param resource_type0_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_resource_type0_serialize(
            adb_resource_type0_t* _resource_type0,
            const axutil_env_t *env,
            axiom_node_t* resource_type0_om_node, axiom_element_t *resource_type0_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @param resource_type0_om_node node to serialize from
         * @param resource_type0_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_resource_type0_serialize_obj(
            adb_resource_type0_t* _resource_type0,
            const axutil_env_t *env,
            axiom_node_t* resource_type0_om_node, axiom_element_t *resource_type0_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_resource_type0 is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_resource_type0_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_resource_type0_t
         * @param env pointer to environment struct
         * @param _uri axutil_uri_t*
         * @param _mimeType axis2_char_t*
         * @param _size int64_t
         * @param _localURI axutil_uri_t*
         * @param _lastModifiedDate axutil_date_time_t*
         * @return newly created adb_resource_type0_t object
         */
        adb_resource_type0_t* AXIS2_CALL
        adb_resource_type0_create_with_values(
            const axutil_env_t *env,
                axutil_uri_t* _uri,
                axis2_char_t* _mimeType,
                int64_t _size,
                axutil_uri_t* _localURI,
                axutil_date_time_t* _lastModifiedDate);

        


                /**
                 * Free adb_resource_type0_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _resource_type0 adb_resource_type0_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                axutil_uri_t* AXIS2_CALL
                adb_resource_type0_free_popping_value(
                        adb_resource_type0_t* _resource_type0,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for uri by property number (1)
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @return axutil_uri_t*
         */
        axutil_uri_t* AXIS2_CALL
        adb_resource_type0_get_property1(
            adb_resource_type0_t* _resource_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for mimeType by property number (2)
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_resource_type0_get_property2(
            adb_resource_type0_t* _resource_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for size by property number (3)
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @return int64_t
         */
        int64_t AXIS2_CALL
        adb_resource_type0_get_property3(
            adb_resource_type0_t* _resource_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for localURI by property number (4)
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @return axutil_uri_t*
         */
        axutil_uri_t* AXIS2_CALL
        adb_resource_type0_get_property4(
            adb_resource_type0_t* _resource_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for lastModifiedDate by property number (5)
         * @param  _resource_type0 adb_resource_type0_t object
         * @param env pointer to environment struct
         * @return axutil_date_time_t*
         */
        axutil_date_time_t* AXIS2_CALL
        adb_resource_type0_get_property5(
            adb_resource_type0_t* _resource_type0,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_RESOURCE_TYPE0_H */
    

