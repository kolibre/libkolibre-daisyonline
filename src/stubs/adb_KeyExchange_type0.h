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



        #ifndef ADB_KEYEXCHANGE_TYPE0_H
        #define ADB_KEYEXCHANGE_TYPE0_H

       /**
        * adb_KeyExchange_type0.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Nov 05, 2013 (03:44:52 EET)
        */

       /**
        *  adb_KeyExchange_type0 class
        */

        
          #include "adb_IssuerType.h"
          
          #include "adb_KeyExchangeChoice_type1.h"
          

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
        

        typedef struct adb_KeyExchange_type0 adb_KeyExchange_type0_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_KeyExchange_type0_t
         * @param env pointer to environment struct
         * @return newly created adb_KeyExchange_type0_t object
         */
        adb_KeyExchange_type0_t* AXIS2_CALL
        adb_KeyExchange_type0_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _KeyExchange_type0 adb_KeyExchange_type0_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyExchange_type0_free (
            adb_KeyExchange_type0_t* _KeyExchange_type0,
            const axutil_env_t *env);

        /**
         * Free adb_KeyExchange_type0_t object
         * @param  _KeyExchange_type0 adb_KeyExchange_type0_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyExchange_type0_free_obj (
            adb_KeyExchange_type0_t* _KeyExchange_type0,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        /******** Deprecated for array types, Use 'Getters and Setters for Arrays' instead ***********/
        

        /**
         * Getter for Issuer. 
         * @param  _KeyExchange_type0 adb_KeyExchange_type0_t object
         * @param env pointer to environment struct
         * @return adb_IssuerType_t*
         */
        adb_IssuerType_t* AXIS2_CALL
        adb_KeyExchange_type0_get_Issuer(
            adb_KeyExchange_type0_t* _KeyExchange_type0,
            const axutil_env_t *env);

        /**
         * Setter for Issuer.
         * @param  _KeyExchange_type0 adb_KeyExchange_type0_t object
         * @param env pointer to environment struct
         * @param arg_Issuer adb_IssuerType_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyExchange_type0_set_Issuer(
            adb_KeyExchange_type0_t* _KeyExchange_type0,
            const axutil_env_t *env,
            adb_IssuerType_t*  arg_Issuer);

        /**
         * Resetter for Issuer
         * @param  _KeyExchange_type0 adb_KeyExchange_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyExchange_type0_reset_Issuer(
            adb_KeyExchange_type0_t* _KeyExchange_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for KeyExchangeChoice_type1. Deprecated for array types, Use adb_KeyExchange_type0_get_KeyExchangeChoice_type1_at instead
         * @param  _KeyExchange_type0 adb_KeyExchange_type0_t object
         * @param env pointer to environment struct
         * @return Array of adb_KeyExchangeChoice_type1_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_KeyExchange_type0_get_KeyExchangeChoice_type1(
            adb_KeyExchange_type0_t* _KeyExchange_type0,
            const axutil_env_t *env);

        /**
         * Setter for KeyExchangeChoice_type1.Deprecated for array types, Use adb_KeyExchange_type0_set_KeyExchangeChoice_type1_at
         * or adb_KeyExchange_type0_add_KeyExchangeChoice_type1 instead.
         * @param  _KeyExchange_type0 adb_KeyExchange_type0_t object
         * @param env pointer to environment struct
         * @param arg_KeyExchangeChoice_type1 Array of adb_KeyExchangeChoice_type1_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyExchange_type0_set_KeyExchangeChoice_type1(
            adb_KeyExchange_type0_t* _KeyExchange_type0,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_KeyExchangeChoice_type1);

        /**
         * Resetter for KeyExchangeChoice_type1
         * @param  _KeyExchange_type0 adb_KeyExchange_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyExchange_type0_reset_KeyExchangeChoice_type1(
            adb_KeyExchange_type0_t* _KeyExchange_type0,
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
         * Get the ith element of KeyExchangeChoice_type1.
         * @param  _KeyExchange_type0 adb_KeyExchange_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith adb_KeyExchangeChoice_type1_t* of the array
         */
        adb_KeyExchangeChoice_type1_t* AXIS2_CALL
        adb_KeyExchange_type0_get_KeyExchangeChoice_type1_at(
                adb_KeyExchange_type0_t* _KeyExchange_type0,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of KeyExchangeChoice_type1. (If the ith already exist, it will be replaced)
         * @param  _KeyExchange_type0 adb_KeyExchange_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_KeyExchangeChoice_type1 element to set adb_KeyExchangeChoice_type1_t* to the array
         * @return ith adb_KeyExchangeChoice_type1_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_KeyExchange_type0_set_KeyExchangeChoice_type1_at(
                adb_KeyExchange_type0_t* _KeyExchange_type0,
                const axutil_env_t *env, int i,
                adb_KeyExchangeChoice_type1_t* arg_KeyExchangeChoice_type1);


        /**
         * Add to KeyExchangeChoice_type1.
         * @param  _KeyExchange_type0 adb_KeyExchange_type0_t object
         * @param env pointer to environment struct
         * @param arg_KeyExchangeChoice_type1 element to add adb_KeyExchangeChoice_type1_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyExchange_type0_add_KeyExchangeChoice_type1(
                adb_KeyExchange_type0_t* _KeyExchange_type0,
                const axutil_env_t *env,
                adb_KeyExchangeChoice_type1_t* arg_KeyExchangeChoice_type1);

        /**
         * Get the size of the KeyExchangeChoice_type1 array.
         * @param  _KeyExchange_type0 adb_KeyExchange_type0_t object
         * @param env pointer to environment struct.
         * @return the size of the KeyExchangeChoice_type1 array.
         */
        int AXIS2_CALL
        adb_KeyExchange_type0_sizeof_KeyExchangeChoice_type1(
                    adb_KeyExchange_type0_t* _KeyExchange_type0,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of KeyExchangeChoice_type1.
         * @param  _KeyExchange_type0 adb_KeyExchange_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyExchange_type0_remove_KeyExchangeChoice_type1_at(
                adb_KeyExchange_type0_t* _KeyExchange_type0,
                const axutil_env_t *env, int i);

        


        /******************************* Checking and Setting NIL values *********************************/
        /* Use 'Checking and Setting NIL values for Arrays' to check and set nil for individual elements */

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether Issuer is nill
         * @param  _KeyExchange_type0 adb_KeyExchange_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_KeyExchange_type0_is_Issuer_nil(
                adb_KeyExchange_type0_t* _KeyExchange_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether KeyExchangeChoice_type1 is nill
         * @param  _KeyExchange_type0 adb_KeyExchange_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_KeyExchange_type0_is_KeyExchangeChoice_type1_nil(
                adb_KeyExchange_type0_t* _KeyExchange_type0,
                const axutil_env_t *env);


        
        /*************************** Checking and Setting 'NIL' values in Arrays *****************************/

        /**
         * NOTE: You may set this to remove specific elements in the array
         *       But you can not remove elements, if the specific property is declared to be non-nillable or sizeof(array) < minOccurs
         */
        
        /**
         * Check whether KeyExchangeChoice_type1 is nill at i
         * @param  _KeyExchange_type0 adb_KeyExchange_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_KeyExchange_type0_is_KeyExchangeChoice_type1_nil_at(
                adb_KeyExchange_type0_t* _KeyExchange_type0,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set KeyExchangeChoice_type1 to nill at i
         * @param  _KeyExchange_type0 _ adb_KeyExchange_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_KeyExchange_type0_set_KeyExchangeChoice_type1_nil_at(
                adb_KeyExchange_type0_t* _KeyExchange_type0, 
                const axutil_env_t *env, int i);

        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _KeyExchange_type0 adb_KeyExchange_type0_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyExchange_type0_deserialize(
            adb_KeyExchange_type0_t* _KeyExchange_type0,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _KeyExchange_type0 adb_KeyExchange_type0_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyExchange_type0_deserialize_obj(
            adb_KeyExchange_type0_t* _KeyExchange_type0,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _KeyExchange_type0 adb_KeyExchange_type0_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_KeyExchange_type0_declare_parent_namespaces(
                    adb_KeyExchange_type0_t* _KeyExchange_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _KeyExchange_type0 adb_KeyExchange_type0_t object
         * @param env pointer to environment struct
         * @param KeyExchange_type0_om_node node to serialize from
         * @param KeyExchange_type0_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_KeyExchange_type0_serialize(
            adb_KeyExchange_type0_t* _KeyExchange_type0,
            const axutil_env_t *env,
            axiom_node_t* KeyExchange_type0_om_node, axiom_element_t *KeyExchange_type0_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _KeyExchange_type0 adb_KeyExchange_type0_t object
         * @param env pointer to environment struct
         * @param KeyExchange_type0_om_node node to serialize from
         * @param KeyExchange_type0_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_KeyExchange_type0_serialize_obj(
            adb_KeyExchange_type0_t* _KeyExchange_type0,
            const axutil_env_t *env,
            axiom_node_t* KeyExchange_type0_om_node, axiom_element_t *KeyExchange_type0_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_KeyExchange_type0 is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_KeyExchange_type0_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_KeyExchange_type0_t
         * @param env pointer to environment struct
         * @param _Issuer adb_IssuerType_t*
         * @param _KeyExchangeChoice_type1 axutil_array_list_t*
         * @return newly created adb_KeyExchange_type0_t object
         */
        adb_KeyExchange_type0_t* AXIS2_CALL
        adb_KeyExchange_type0_create_with_values(
            const axutil_env_t *env,
                adb_IssuerType_t* _Issuer,
                axutil_array_list_t* _KeyExchangeChoice_type1);

        


                /**
                 * Free adb_KeyExchange_type0_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _KeyExchange_type0 adb_KeyExchange_type0_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                adb_IssuerType_t* AXIS2_CALL
                adb_KeyExchange_type0_free_popping_value(
                        adb_KeyExchange_type0_t* _KeyExchange_type0,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for Issuer by property number (1)
         * @param  _KeyExchange_type0 adb_KeyExchange_type0_t object
         * @param env pointer to environment struct
         * @return adb_IssuerType_t*
         */
        adb_IssuerType_t* AXIS2_CALL
        adb_KeyExchange_type0_get_property1(
            adb_KeyExchange_type0_t* _KeyExchange_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for KeyExchangeChoice_type1 by property number (2)
         * @param  _KeyExchange_type0 adb_KeyExchange_type0_t object
         * @param env pointer to environment struct
         * @return Array of adb_KeyExchangeChoice_type1_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_KeyExchange_type0_get_property2(
            adb_KeyExchange_type0_t* _KeyExchange_type0,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_KEYEXCHANGE_TYPE0_H */
    

