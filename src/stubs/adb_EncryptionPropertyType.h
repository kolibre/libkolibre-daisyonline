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



        #ifndef ADB_ENCRYPTIONPROPERTYTYPE_H
        #define ADB_ENCRYPTIONPROPERTYTYPE_H

       /**
        * adb_EncryptionPropertyType.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Oct 19, 2012 (02:20:52 EEST)
        */

       /**
        *  adb_EncryptionPropertyType class
        */

        
          #include "adb_EncryptionPropertyTypeChoice.h"
          

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
        

        typedef struct adb_EncryptionPropertyType adb_EncryptionPropertyType_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_EncryptionPropertyType_t
         * @param env pointer to environment struct
         * @return newly created adb_EncryptionPropertyType_t object
         */
        adb_EncryptionPropertyType_t* AXIS2_CALL
        adb_EncryptionPropertyType_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyType_free (
            adb_EncryptionPropertyType_t* _EncryptionPropertyType,
            const axutil_env_t *env);

        /**
         * Free adb_EncryptionPropertyType_t object
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyType_free_obj (
            adb_EncryptionPropertyType_t* _EncryptionPropertyType,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        /******** Deprecated for array types, Use 'Getters and Setters for Arrays' instead ***********/
        

        /**
         * Getter for EncryptionPropertyTypeChoice. Deprecated for array types, Use adb_EncryptionPropertyType_get_EncryptionPropertyTypeChoice_at instead
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @return Array of adb_EncryptionPropertyTypeChoice_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_EncryptionPropertyType_get_EncryptionPropertyTypeChoice(
            adb_EncryptionPropertyType_t* _EncryptionPropertyType,
            const axutil_env_t *env);

        /**
         * Setter for EncryptionPropertyTypeChoice.Deprecated for array types, Use adb_EncryptionPropertyType_set_EncryptionPropertyTypeChoice_at
         * or adb_EncryptionPropertyType_add_EncryptionPropertyTypeChoice instead.
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @param arg_EncryptionPropertyTypeChoice Array of adb_EncryptionPropertyTypeChoice_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyType_set_EncryptionPropertyTypeChoice(
            adb_EncryptionPropertyType_t* _EncryptionPropertyType,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_EncryptionPropertyTypeChoice);

        /**
         * Resetter for EncryptionPropertyTypeChoice
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyType_reset_EncryptionPropertyTypeChoice(
            adb_EncryptionPropertyType_t* _EncryptionPropertyType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for Target. 
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @return axutil_uri_t*
         */
        axutil_uri_t* AXIS2_CALL
        adb_EncryptionPropertyType_get_Target(
            adb_EncryptionPropertyType_t* _EncryptionPropertyType,
            const axutil_env_t *env);

        /**
         * Setter for Target.
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @param arg_Target axutil_uri_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyType_set_Target(
            adb_EncryptionPropertyType_t* _EncryptionPropertyType,
            const axutil_env_t *env,
            axutil_uri_t*  arg_Target);

        /**
         * Resetter for Target
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyType_reset_Target(
            adb_EncryptionPropertyType_t* _EncryptionPropertyType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for Id. 
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_EncryptionPropertyType_get_Id(
            adb_EncryptionPropertyType_t* _EncryptionPropertyType,
            const axutil_env_t *env);

        /**
         * Setter for Id.
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @param arg_Id axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyType_set_Id(
            adb_EncryptionPropertyType_t* _EncryptionPropertyType,
            const axutil_env_t *env,
            const axis2_char_t*  arg_Id);

        /**
         * Resetter for Id
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyType_reset_Id(
            adb_EncryptionPropertyType_t* _EncryptionPropertyType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for extraAttributes. Deprecated for array types, Use adb_EncryptionPropertyType_get_extraAttributes_at instead
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @return Array of axiom_attribute_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_EncryptionPropertyType_get_extraAttributes(
            adb_EncryptionPropertyType_t* _EncryptionPropertyType,
            const axutil_env_t *env);

        /**
         * Setter for extraAttributes.Deprecated for array types, Use adb_EncryptionPropertyType_set_extraAttributes_at
         * or adb_EncryptionPropertyType_add_extraAttributes instead.
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @param arg_extraAttributes Array of axiom_attribute_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyType_set_extraAttributes(
            adb_EncryptionPropertyType_t* _EncryptionPropertyType,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_extraAttributes);

        /**
         * Resetter for extraAttributes
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyType_reset_extraAttributes(
            adb_EncryptionPropertyType_t* _EncryptionPropertyType,
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
         * Get the ith element of EncryptionPropertyTypeChoice.
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith adb_EncryptionPropertyTypeChoice_t* of the array
         */
        adb_EncryptionPropertyTypeChoice_t* AXIS2_CALL
        adb_EncryptionPropertyType_get_EncryptionPropertyTypeChoice_at(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of EncryptionPropertyTypeChoice. (If the ith already exist, it will be replaced)
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_EncryptionPropertyTypeChoice element to set adb_EncryptionPropertyTypeChoice_t* to the array
         * @return ith adb_EncryptionPropertyTypeChoice_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyType_set_EncryptionPropertyTypeChoice_at(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                const axutil_env_t *env, int i,
                adb_EncryptionPropertyTypeChoice_t* arg_EncryptionPropertyTypeChoice);


        /**
         * Add to EncryptionPropertyTypeChoice.
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @param arg_EncryptionPropertyTypeChoice element to add adb_EncryptionPropertyTypeChoice_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyType_add_EncryptionPropertyTypeChoice(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                const axutil_env_t *env,
                adb_EncryptionPropertyTypeChoice_t* arg_EncryptionPropertyTypeChoice);

        /**
         * Get the size of the EncryptionPropertyTypeChoice array.
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct.
         * @return the size of the EncryptionPropertyTypeChoice array.
         */
        int AXIS2_CALL
        adb_EncryptionPropertyType_sizeof_EncryptionPropertyTypeChoice(
                    adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of EncryptionPropertyTypeChoice.
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyType_remove_EncryptionPropertyTypeChoice_at(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                const axutil_env_t *env, int i);

        
        
        /**
         * Get the ith element of extraAttributes.
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith axiom_attribute_t* of the array
         */
        axiom_attribute_t* AXIS2_CALL
        adb_EncryptionPropertyType_get_extraAttributes_at(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of extraAttributes. (If the ith already exist, it will be replaced)
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_extraAttributes element to set axiom_attribute_t* to the array
         * @return ith axiom_attribute_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyType_set_extraAttributes_at(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                const axutil_env_t *env, int i,
                axiom_attribute_t* arg_extraAttributes);


        /**
         * Add to extraAttributes.
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @param arg_extraAttributes element to add axiom_attribute_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyType_add_extraAttributes(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                const axutil_env_t *env,
                axiom_attribute_t* arg_extraAttributes);

        /**
         * Get the size of the extraAttributes array.
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct.
         * @return the size of the extraAttributes array.
         */
        int AXIS2_CALL
        adb_EncryptionPropertyType_sizeof_extraAttributes(
                    adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of extraAttributes.
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyType_remove_extraAttributes_at(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                const axutil_env_t *env, int i);

        


        /******************************* Checking and Setting NIL values *********************************/
        /* Use 'Checking and Setting NIL values for Arrays' to check and set nil for individual elements */

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether EncryptionPropertyTypeChoice is nill
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_EncryptionPropertyType_is_EncryptionPropertyTypeChoice_nil(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                const axutil_env_t *env);


        

        /**
         * Check whether Target is nill
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_EncryptionPropertyType_is_Target_nil(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                const axutil_env_t *env);


        
        /**
         * Set Target to nill (currently the same as reset)
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyType_set_Target_nil(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                const axutil_env_t *env);
        

        /**
         * Check whether Id is nill
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_EncryptionPropertyType_is_Id_nil(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                const axutil_env_t *env);


        
        /**
         * Set Id to nill (currently the same as reset)
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyType_set_Id_nil(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                const axutil_env_t *env);
        

        /**
         * Check whether extraAttributes is nill
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_EncryptionPropertyType_is_extraAttributes_nil(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                const axutil_env_t *env);


        
        /*************************** Checking and Setting 'NIL' values in Arrays *****************************/

        /**
         * NOTE: You may set this to remove specific elements in the array
         *       But you can not remove elements, if the specific property is declared to be non-nillable or sizeof(array) < minOccurs
         */
        
        /**
         * Check whether EncryptionPropertyTypeChoice is nill at i
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_EncryptionPropertyType_is_EncryptionPropertyTypeChoice_nil_at(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set EncryptionPropertyTypeChoice to nill at i
         * @param  _EncryptionPropertyType _ adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyType_set_EncryptionPropertyTypeChoice_nil_at(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType, 
                const axutil_env_t *env, int i);

        
        /**
         * Check whether extraAttributes is nill at i
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_EncryptionPropertyType_is_extraAttributes_nil_at(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set extraAttributes to nill at i
         * @param  _EncryptionPropertyType _ adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyType_set_extraAttributes_nil_at(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType, 
                const axutil_env_t *env, int i);

        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyType_deserialize(
            adb_EncryptionPropertyType_t* _EncryptionPropertyType,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyType_deserialize_obj(
            adb_EncryptionPropertyType_t* _EncryptionPropertyType,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_EncryptionPropertyType_declare_parent_namespaces(
                    adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @param EncryptionPropertyType_om_node node to serialize from
         * @param EncryptionPropertyType_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_EncryptionPropertyType_serialize(
            adb_EncryptionPropertyType_t* _EncryptionPropertyType,
            const axutil_env_t *env,
            axiom_node_t* EncryptionPropertyType_om_node, axiom_element_t *EncryptionPropertyType_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @param EncryptionPropertyType_om_node node to serialize from
         * @param EncryptionPropertyType_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_EncryptionPropertyType_serialize_obj(
            adb_EncryptionPropertyType_t* _EncryptionPropertyType,
            const axutil_env_t *env,
            axiom_node_t* EncryptionPropertyType_om_node, axiom_element_t *EncryptionPropertyType_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_EncryptionPropertyType is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_EncryptionPropertyType_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_EncryptionPropertyType_t
         * @param env pointer to environment struct
         * @param _EncryptionPropertyTypeChoice axutil_array_list_t*
         * @param _Target axutil_uri_t*
         * @param _Id axis2_char_t*
         * @param _extraAttributes axutil_array_list_t*
         * @return newly created adb_EncryptionPropertyType_t object
         */
        adb_EncryptionPropertyType_t* AXIS2_CALL
        adb_EncryptionPropertyType_create_with_values(
            const axutil_env_t *env,
                axutil_array_list_t* _EncryptionPropertyTypeChoice,
                axutil_uri_t* _Target,
                axis2_char_t* _Id,
                axutil_array_list_t* _extraAttributes);

        


                /**
                 * Free adb_EncryptionPropertyType_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                axutil_array_list_t* AXIS2_CALL
                adb_EncryptionPropertyType_free_popping_value(
                        adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for EncryptionPropertyTypeChoice by property number (1)
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @return Array of adb_EncryptionPropertyTypeChoice_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_EncryptionPropertyType_get_property1(
            adb_EncryptionPropertyType_t* _EncryptionPropertyType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for Target by property number (2)
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @return axutil_uri_t*
         */
        axutil_uri_t* AXIS2_CALL
        adb_EncryptionPropertyType_get_property2(
            adb_EncryptionPropertyType_t* _EncryptionPropertyType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for Id by property number (3)
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_EncryptionPropertyType_get_property3(
            adb_EncryptionPropertyType_t* _EncryptionPropertyType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for extraAttributes by property number (4)
         * @param  _EncryptionPropertyType adb_EncryptionPropertyType_t object
         * @param env pointer to environment struct
         * @return Array of axiom_attribute_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_EncryptionPropertyType_get_property4(
            adb_EncryptionPropertyType_t* _EncryptionPropertyType,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_ENCRYPTIONPROPERTYTYPE_H */
    

