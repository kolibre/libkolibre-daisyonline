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



        #ifndef ADB_ENCRYPTIONPROPERTY_H
        #define ADB_ENCRYPTIONPROPERTY_H

       /**
        * adb_EncryptionProperty.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Nov 05, 2013 (09:21:13 EET)
        */

       /**
        *  adb_EncryptionProperty class
        */

        
          #include "adb_EncryptionPropertyType.h"
          

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
        

        typedef struct adb_EncryptionProperty adb_EncryptionProperty_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_EncryptionProperty_t
         * @param env pointer to environment struct
         * @return newly created adb_EncryptionProperty_t object
         */
        adb_EncryptionProperty_t* AXIS2_CALL
        adb_EncryptionProperty_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _EncryptionProperty adb_EncryptionProperty_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionProperty_free (
            adb_EncryptionProperty_t* _EncryptionProperty,
            const axutil_env_t *env);

        /**
         * Free adb_EncryptionProperty_t object
         * @param  _EncryptionProperty adb_EncryptionProperty_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionProperty_free_obj (
            adb_EncryptionProperty_t* _EncryptionProperty,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        
        

        /**
         * Getter for EncryptionProperty. 
         * @param  _EncryptionProperty adb_EncryptionProperty_t object
         * @param env pointer to environment struct
         * @return adb_EncryptionPropertyType_t*
         */
        adb_EncryptionPropertyType_t* AXIS2_CALL
        adb_EncryptionProperty_get_EncryptionProperty(
            adb_EncryptionProperty_t* _EncryptionProperty,
            const axutil_env_t *env);

        /**
         * Setter for EncryptionProperty.
         * @param  _EncryptionProperty adb_EncryptionProperty_t object
         * @param env pointer to environment struct
         * @param arg_EncryptionProperty adb_EncryptionPropertyType_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionProperty_set_EncryptionProperty(
            adb_EncryptionProperty_t* _EncryptionProperty,
            const axutil_env_t *env,
            adb_EncryptionPropertyType_t*  arg_EncryptionProperty);

        /**
         * Resetter for EncryptionProperty
         * @param  _EncryptionProperty adb_EncryptionProperty_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionProperty_reset_EncryptionProperty(
            adb_EncryptionProperty_t* _EncryptionProperty,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether EncryptionProperty is nill
         * @param  _EncryptionProperty adb_EncryptionProperty_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_EncryptionProperty_is_EncryptionProperty_nil(
                adb_EncryptionProperty_t* _EncryptionProperty,
                const axutil_env_t *env);


        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _EncryptionProperty adb_EncryptionProperty_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionProperty_deserialize(
            adb_EncryptionProperty_t* _EncryptionProperty,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _EncryptionProperty adb_EncryptionProperty_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionProperty_deserialize_obj(
            adb_EncryptionProperty_t* _EncryptionProperty,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _EncryptionProperty adb_EncryptionProperty_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_EncryptionProperty_declare_parent_namespaces(
                    adb_EncryptionProperty_t* _EncryptionProperty,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _EncryptionProperty adb_EncryptionProperty_t object
         * @param env pointer to environment struct
         * @param EncryptionProperty_om_node node to serialize from
         * @param EncryptionProperty_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_EncryptionProperty_serialize(
            adb_EncryptionProperty_t* _EncryptionProperty,
            const axutil_env_t *env,
            axiom_node_t* EncryptionProperty_om_node, axiom_element_t *EncryptionProperty_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _EncryptionProperty adb_EncryptionProperty_t object
         * @param env pointer to environment struct
         * @param EncryptionProperty_om_node node to serialize from
         * @param EncryptionProperty_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_EncryptionProperty_serialize_obj(
            adb_EncryptionProperty_t* _EncryptionProperty,
            const axutil_env_t *env,
            axiom_node_t* EncryptionProperty_om_node, axiom_element_t *EncryptionProperty_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_EncryptionProperty is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_EncryptionProperty_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_EncryptionProperty_t
         * @param env pointer to environment struct
         * @param _EncryptionProperty adb_EncryptionPropertyType_t*
         * @return newly created adb_EncryptionProperty_t object
         */
        adb_EncryptionProperty_t* AXIS2_CALL
        adb_EncryptionProperty_create_with_values(
            const axutil_env_t *env,
                adb_EncryptionPropertyType_t* _EncryptionProperty);

        


                /**
                 * Free adb_EncryptionProperty_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _EncryptionProperty adb_EncryptionProperty_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                adb_EncryptionPropertyType_t* AXIS2_CALL
                adb_EncryptionProperty_free_popping_value(
                        adb_EncryptionProperty_t* _EncryptionProperty,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for EncryptionProperty by property number (1)
         * @param  _EncryptionProperty adb_EncryptionProperty_t object
         * @param env pointer to environment struct
         * @return adb_EncryptionPropertyType_t*
         */
        adb_EncryptionPropertyType_t* AXIS2_CALL
        adb_EncryptionProperty_get_property1(
            adb_EncryptionProperty_t* _EncryptionProperty,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_ENCRYPTIONPROPERTY_H */
    

