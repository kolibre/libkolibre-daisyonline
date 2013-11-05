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



        #ifndef ADB_SIGNATURETYPE_H
        #define ADB_SIGNATURETYPE_H

       /**
        * adb_SignatureType.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Nov 05, 2013 (09:21:13 EET)
        */

       /**
        *  adb_SignatureType class
        */

        
          #include "adb_SignedInfoType.h"
          
          #include "adb_SignatureValueType.h"
          
          #include "adb_KeyInfoType.h"
          
          #include "adb_ObjectType.h"
          

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
        

        typedef struct adb_SignatureType adb_SignatureType_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_SignatureType_t
         * @param env pointer to environment struct
         * @return newly created adb_SignatureType_t object
         */
        adb_SignatureType_t* AXIS2_CALL
        adb_SignatureType_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _SignatureType adb_SignatureType_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureType_free (
            adb_SignatureType_t* _SignatureType,
            const axutil_env_t *env);

        /**
         * Free adb_SignatureType_t object
         * @param  _SignatureType adb_SignatureType_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureType_free_obj (
            adb_SignatureType_t* _SignatureType,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        /******** Deprecated for array types, Use 'Getters and Setters for Arrays' instead ***********/
        

        /**
         * Getter for SignedInfo. 
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @return adb_SignedInfoType_t*
         */
        adb_SignedInfoType_t* AXIS2_CALL
        adb_SignatureType_get_SignedInfo(
            adb_SignatureType_t* _SignatureType,
            const axutil_env_t *env);

        /**
         * Setter for SignedInfo.
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @param arg_SignedInfo adb_SignedInfoType_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureType_set_SignedInfo(
            adb_SignatureType_t* _SignatureType,
            const axutil_env_t *env,
            adb_SignedInfoType_t*  arg_SignedInfo);

        /**
         * Resetter for SignedInfo
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureType_reset_SignedInfo(
            adb_SignatureType_t* _SignatureType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for SignatureValue. 
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @return adb_SignatureValueType_t*
         */
        adb_SignatureValueType_t* AXIS2_CALL
        adb_SignatureType_get_SignatureValue(
            adb_SignatureType_t* _SignatureType,
            const axutil_env_t *env);

        /**
         * Setter for SignatureValue.
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @param arg_SignatureValue adb_SignatureValueType_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureType_set_SignatureValue(
            adb_SignatureType_t* _SignatureType,
            const axutil_env_t *env,
            adb_SignatureValueType_t*  arg_SignatureValue);

        /**
         * Resetter for SignatureValue
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureType_reset_SignatureValue(
            adb_SignatureType_t* _SignatureType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for KeyInfo. 
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @return adb_KeyInfoType_t*
         */
        adb_KeyInfoType_t* AXIS2_CALL
        adb_SignatureType_get_KeyInfo(
            adb_SignatureType_t* _SignatureType,
            const axutil_env_t *env);

        /**
         * Setter for KeyInfo.
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @param arg_KeyInfo adb_KeyInfoType_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureType_set_KeyInfo(
            adb_SignatureType_t* _SignatureType,
            const axutil_env_t *env,
            adb_KeyInfoType_t*  arg_KeyInfo);

        /**
         * Resetter for KeyInfo
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureType_reset_KeyInfo(
            adb_SignatureType_t* _SignatureType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for Object. Deprecated for array types, Use adb_SignatureType_get_Object_at instead
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @return Array of adb_ObjectType_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_SignatureType_get_Object(
            adb_SignatureType_t* _SignatureType,
            const axutil_env_t *env);

        /**
         * Setter for Object.Deprecated for array types, Use adb_SignatureType_set_Object_at
         * or adb_SignatureType_add_Object instead.
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @param arg_Object Array of adb_ObjectType_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureType_set_Object(
            adb_SignatureType_t* _SignatureType,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_Object);

        /**
         * Resetter for Object
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureType_reset_Object(
            adb_SignatureType_t* _SignatureType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for Id. 
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_SignatureType_get_Id(
            adb_SignatureType_t* _SignatureType,
            const axutil_env_t *env);

        /**
         * Setter for Id.
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @param arg_Id axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureType_set_Id(
            adb_SignatureType_t* _SignatureType,
            const axutil_env_t *env,
            const axis2_char_t*  arg_Id);

        /**
         * Resetter for Id
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureType_reset_Id(
            adb_SignatureType_t* _SignatureType,
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
         * Get the ith element of Object.
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith adb_ObjectType_t* of the array
         */
        adb_ObjectType_t* AXIS2_CALL
        adb_SignatureType_get_Object_at(
                adb_SignatureType_t* _SignatureType,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of Object. (If the ith already exist, it will be replaced)
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_Object element to set adb_ObjectType_t* to the array
         * @return ith adb_ObjectType_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureType_set_Object_at(
                adb_SignatureType_t* _SignatureType,
                const axutil_env_t *env, int i,
                adb_ObjectType_t* arg_Object);


        /**
         * Add to Object.
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @param arg_Object element to add adb_ObjectType_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureType_add_Object(
                adb_SignatureType_t* _SignatureType,
                const axutil_env_t *env,
                adb_ObjectType_t* arg_Object);

        /**
         * Get the size of the Object array.
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct.
         * @return the size of the Object array.
         */
        int AXIS2_CALL
        adb_SignatureType_sizeof_Object(
                    adb_SignatureType_t* _SignatureType,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of Object.
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureType_remove_Object_at(
                adb_SignatureType_t* _SignatureType,
                const axutil_env_t *env, int i);

        


        /******************************* Checking and Setting NIL values *********************************/
        /* Use 'Checking and Setting NIL values for Arrays' to check and set nil for individual elements */

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether SignedInfo is nill
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_SignatureType_is_SignedInfo_nil(
                adb_SignatureType_t* _SignatureType,
                const axutil_env_t *env);


        

        /**
         * Check whether SignatureValue is nill
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_SignatureType_is_SignatureValue_nil(
                adb_SignatureType_t* _SignatureType,
                const axutil_env_t *env);


        

        /**
         * Check whether KeyInfo is nill
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_SignatureType_is_KeyInfo_nil(
                adb_SignatureType_t* _SignatureType,
                const axutil_env_t *env);


        

        /**
         * Check whether Object is nill
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_SignatureType_is_Object_nil(
                adb_SignatureType_t* _SignatureType,
                const axutil_env_t *env);


        

        /**
         * Check whether Id is nill
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_SignatureType_is_Id_nil(
                adb_SignatureType_t* _SignatureType,
                const axutil_env_t *env);


        
        /**
         * Set Id to nill (currently the same as reset)
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureType_set_Id_nil(
                adb_SignatureType_t* _SignatureType,
                const axutil_env_t *env);
        
        /*************************** Checking and Setting 'NIL' values in Arrays *****************************/

        /**
         * NOTE: You may set this to remove specific elements in the array
         *       But you can not remove elements, if the specific property is declared to be non-nillable or sizeof(array) < minOccurs
         */
        
        /**
         * Check whether Object is nill at i
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_SignatureType_is_Object_nil_at(
                adb_SignatureType_t* _SignatureType,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set Object to nill at i
         * @param  _SignatureType _ adb_SignatureType_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureType_set_Object_nil_at(
                adb_SignatureType_t* _SignatureType, 
                const axutil_env_t *env, int i);

        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureType_deserialize(
            adb_SignatureType_t* _SignatureType,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureType_deserialize_obj(
            adb_SignatureType_t* _SignatureType,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_SignatureType_declare_parent_namespaces(
                    adb_SignatureType_t* _SignatureType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @param SignatureType_om_node node to serialize from
         * @param SignatureType_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_SignatureType_serialize(
            adb_SignatureType_t* _SignatureType,
            const axutil_env_t *env,
            axiom_node_t* SignatureType_om_node, axiom_element_t *SignatureType_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @param SignatureType_om_node node to serialize from
         * @param SignatureType_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_SignatureType_serialize_obj(
            adb_SignatureType_t* _SignatureType,
            const axutil_env_t *env,
            axiom_node_t* SignatureType_om_node, axiom_element_t *SignatureType_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_SignatureType is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_SignatureType_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_SignatureType_t
         * @param env pointer to environment struct
         * @param _SignedInfo adb_SignedInfoType_t*
         * @param _SignatureValue adb_SignatureValueType_t*
         * @param _KeyInfo adb_KeyInfoType_t*
         * @param _Object axutil_array_list_t*
         * @param _Id axis2_char_t*
         * @return newly created adb_SignatureType_t object
         */
        adb_SignatureType_t* AXIS2_CALL
        adb_SignatureType_create_with_values(
            const axutil_env_t *env,
                adb_SignedInfoType_t* _SignedInfo,
                adb_SignatureValueType_t* _SignatureValue,
                adb_KeyInfoType_t* _KeyInfo,
                axutil_array_list_t* _Object,
                axis2_char_t* _Id);

        


                /**
                 * Free adb_SignatureType_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _SignatureType adb_SignatureType_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                adb_SignedInfoType_t* AXIS2_CALL
                adb_SignatureType_free_popping_value(
                        adb_SignatureType_t* _SignatureType,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for SignedInfo by property number (1)
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @return adb_SignedInfoType_t*
         */
        adb_SignedInfoType_t* AXIS2_CALL
        adb_SignatureType_get_property1(
            adb_SignatureType_t* _SignatureType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for SignatureValue by property number (2)
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @return adb_SignatureValueType_t*
         */
        adb_SignatureValueType_t* AXIS2_CALL
        adb_SignatureType_get_property2(
            adb_SignatureType_t* _SignatureType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for KeyInfo by property number (3)
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @return adb_KeyInfoType_t*
         */
        adb_KeyInfoType_t* AXIS2_CALL
        adb_SignatureType_get_property3(
            adb_SignatureType_t* _SignatureType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for Object by property number (4)
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @return Array of adb_ObjectType_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_SignatureType_get_property4(
            adb_SignatureType_t* _SignatureType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for Id by property number (5)
         * @param  _SignatureType adb_SignatureType_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_SignatureType_get_property5(
            adb_SignatureType_t* _SignatureType,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_SIGNATURETYPE_H */
    

