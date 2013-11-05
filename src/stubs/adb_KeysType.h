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



        #ifndef ADB_KEYSTYPE_H
        #define ADB_KEYSTYPE_H

       /**
        * adb_KeysType.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Nov 05, 2013 (09:21:13 EET)
        */

       /**
        *  adb_KeysType class
        */

        
          #include "adb_KeyInfoType.h"
          
          #include "adb_KeysTypeChoice_type0.h"
          

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
        

        typedef struct adb_KeysType adb_KeysType_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_KeysType_t
         * @param env pointer to environment struct
         * @return newly created adb_KeysType_t object
         */
        adb_KeysType_t* AXIS2_CALL
        adb_KeysType_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _KeysType adb_KeysType_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeysType_free (
            adb_KeysType_t* _KeysType,
            const axutil_env_t *env);

        /**
         * Free adb_KeysType_t object
         * @param  _KeysType adb_KeysType_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeysType_free_obj (
            adb_KeysType_t* _KeysType,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        /******** Deprecated for array types, Use 'Getters and Setters for Arrays' instead ***********/
        

        /**
         * Getter for KeyInfo. 
         * @param  _KeysType adb_KeysType_t object
         * @param env pointer to environment struct
         * @return adb_KeyInfoType_t*
         */
        adb_KeyInfoType_t* AXIS2_CALL
        adb_KeysType_get_KeyInfo(
            adb_KeysType_t* _KeysType,
            const axutil_env_t *env);

        /**
         * Setter for KeyInfo.
         * @param  _KeysType adb_KeysType_t object
         * @param env pointer to environment struct
         * @param arg_KeyInfo adb_KeyInfoType_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeysType_set_KeyInfo(
            adb_KeysType_t* _KeysType,
            const axutil_env_t *env,
            adb_KeyInfoType_t*  arg_KeyInfo);

        /**
         * Resetter for KeyInfo
         * @param  _KeysType adb_KeysType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeysType_reset_KeyInfo(
            adb_KeysType_t* _KeysType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for KeysTypeChoice_type0. Deprecated for array types, Use adb_KeysType_get_KeysTypeChoice_type0_at instead
         * @param  _KeysType adb_KeysType_t object
         * @param env pointer to environment struct
         * @return Array of adb_KeysTypeChoice_type0_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_KeysType_get_KeysTypeChoice_type0(
            adb_KeysType_t* _KeysType,
            const axutil_env_t *env);

        /**
         * Setter for KeysTypeChoice_type0.Deprecated for array types, Use adb_KeysType_set_KeysTypeChoice_type0_at
         * or adb_KeysType_add_KeysTypeChoice_type0 instead.
         * @param  _KeysType adb_KeysType_t object
         * @param env pointer to environment struct
         * @param arg_KeysTypeChoice_type0 Array of adb_KeysTypeChoice_type0_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeysType_set_KeysTypeChoice_type0(
            adb_KeysType_t* _KeysType,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_KeysTypeChoice_type0);

        /**
         * Resetter for KeysTypeChoice_type0
         * @param  _KeysType adb_KeysType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeysType_reset_KeysTypeChoice_type0(
            adb_KeysType_t* _KeysType,
            const axutil_env_t *env);

        
        /****************************** Getters and Setters For Arrays **********************************/
        /************ Array Specific Operations: get_at, set_at, add, remove_at, sizeof *****************/

        /**
         * E.g. use of get_at, set_at, add and sizeof
         *
         * for(i = 0; i < adb_element_sizeof_property(adb_object, env); i ++ )
         * {
         *     // Getting ith value to property_object variable
         *     property_object = adb_element_get_property_at(adb_object, env, i);
         *
         *     // Setting ith value from property_object variable
         *     adb_element_set_property_at(adb_object, env, i, property_object);
         *
         *     // Appending the value to the end of the array from property_object variable
         *     adb_element_add_property(adb_object, env, property_object);
         *
         *     // Removing the ith value from an array
         *     adb_element_remove_property_at(adb_object, env, i);
         *     
         * }
         *
         */

        
        
        /**
         * Get the ith element of KeysTypeChoice_type0.
         * @param  _KeysType adb_KeysType_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith adb_KeysTypeChoice_type0_t* of the array
         */
        adb_KeysTypeChoice_type0_t* AXIS2_CALL
        adb_KeysType_get_KeysTypeChoice_type0_at(
                adb_KeysType_t* _KeysType,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of KeysTypeChoice_type0. (If the ith already exist, it will be replaced)
         * @param  _KeysType adb_KeysType_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_KeysTypeChoice_type0 element to set adb_KeysTypeChoice_type0_t* to the array
         * @return ith adb_KeysTypeChoice_type0_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_KeysType_set_KeysTypeChoice_type0_at(
                adb_KeysType_t* _KeysType,
                const axutil_env_t *env, int i,
                adb_KeysTypeChoice_type0_t* arg_KeysTypeChoice_type0);


        /**
         * Add to KeysTypeChoice_type0.
         * @param  _KeysType adb_KeysType_t object
         * @param env pointer to environment struct
         * @param arg_KeysTypeChoice_type0 element to add adb_KeysTypeChoice_type0_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeysType_add_KeysTypeChoice_type0(
                adb_KeysType_t* _KeysType,
                const axutil_env_t *env,
                adb_KeysTypeChoice_type0_t* arg_KeysTypeChoice_type0);

        /**
         * Get the size of the KeysTypeChoice_type0 array.
         * @param  _KeysType adb_KeysType_t object
         * @param env pointer to environment struct.
         * @return the size of the KeysTypeChoice_type0 array.
         */
        int AXIS2_CALL
        adb_KeysType_sizeof_KeysTypeChoice_type0(
                    adb_KeysType_t* _KeysType,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of KeysTypeChoice_type0.
         * @param  _KeysType adb_KeysType_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeysType_remove_KeysTypeChoice_type0_at(
                adb_KeysType_t* _KeysType,
                const axutil_env_t *env, int i);

        


        /******************************* Checking and Setting NIL values *********************************/
        /* Use 'Checking and Setting NIL values for Arrays' to check and set nil for individual elements */

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether KeyInfo is nill
         * @param  _KeysType adb_KeysType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_KeysType_is_KeyInfo_nil(
                adb_KeysType_t* _KeysType,
                const axutil_env_t *env);


        

        /**
         * Check whether KeysTypeChoice_type0 is nill
         * @param  _KeysType adb_KeysType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_KeysType_is_KeysTypeChoice_type0_nil(
                adb_KeysType_t* _KeysType,
                const axutil_env_t *env);


        
        /*************************** Checking and Setting 'NIL' values in Arrays *****************************/

        /**
         * NOTE: You may set this to remove specific elements in the array
         *       But you can not remove elements, if the specific property is declared to be non-nillable or sizeof(array) < minOccurs
         */
        
        /**
         * Check whether KeysTypeChoice_type0 is nill at i
         * @param  _KeysType adb_KeysType_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_KeysType_is_KeysTypeChoice_type0_nil_at(
                adb_KeysType_t* _KeysType,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set KeysTypeChoice_type0 to nill at i
         * @param  _KeysType _ adb_KeysType_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_KeysType_set_KeysTypeChoice_type0_nil_at(
                adb_KeysType_t* _KeysType, 
                const axutil_env_t *env, int i);

        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _KeysType adb_KeysType_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeysType_deserialize(
            adb_KeysType_t* _KeysType,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _KeysType adb_KeysType_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeysType_deserialize_obj(
            adb_KeysType_t* _KeysType,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _KeysType adb_KeysType_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_KeysType_declare_parent_namespaces(
                    adb_KeysType_t* _KeysType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _KeysType adb_KeysType_t object
         * @param env pointer to environment struct
         * @param KeysType_om_node node to serialize from
         * @param KeysType_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_KeysType_serialize(
            adb_KeysType_t* _KeysType,
            const axutil_env_t *env,
            axiom_node_t* KeysType_om_node, axiom_element_t *KeysType_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _KeysType adb_KeysType_t object
         * @param env pointer to environment struct
         * @param KeysType_om_node node to serialize from
         * @param KeysType_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_KeysType_serialize_obj(
            adb_KeysType_t* _KeysType,
            const axutil_env_t *env,
            axiom_node_t* KeysType_om_node, axiom_element_t *KeysType_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_KeysType is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_KeysType_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_KeysType_t
         * @param env pointer to environment struct
         * @param _KeyInfo adb_KeyInfoType_t*
         * @param _KeysTypeChoice_type0 axutil_array_list_t*
         * @return newly created adb_KeysType_t object
         */
        adb_KeysType_t* AXIS2_CALL
        adb_KeysType_create_with_values(
            const axutil_env_t *env,
                adb_KeyInfoType_t* _KeyInfo,
                axutil_array_list_t* _KeysTypeChoice_type0);

        


                /**
                 * Free adb_KeysType_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _KeysType adb_KeysType_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                adb_KeyInfoType_t* AXIS2_CALL
                adb_KeysType_free_popping_value(
                        adb_KeysType_t* _KeysType,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for KeyInfo by property number (1)
         * @param  _KeysType adb_KeysType_t object
         * @param env pointer to environment struct
         * @return adb_KeyInfoType_t*
         */
        adb_KeyInfoType_t* AXIS2_CALL
        adb_KeysType_get_property1(
            adb_KeysType_t* _KeysType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for KeysTypeChoice_type0 by property number (2)
         * @param  _KeysType adb_KeysType_t object
         * @param env pointer to environment struct
         * @return Array of adb_KeysTypeChoice_type0_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_KeysType_get_property2(
            adb_KeysType_t* _KeysType,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_KEYSTYPE_H */
    

