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



        #ifndef ADB_SIGNATUREPROPERTIESTYPE_H
        #define ADB_SIGNATUREPROPERTIESTYPE_H

       /**
        * adb_SignaturePropertiesType.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Nov 05, 2013 (09:21:13 EET)
        */

       /**
        *  adb_SignaturePropertiesType class
        */

        
          #include "adb_SignaturePropertyType.h"
          

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
        

        typedef struct adb_SignaturePropertiesType adb_SignaturePropertiesType_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_SignaturePropertiesType_t
         * @param env pointer to environment struct
         * @return newly created adb_SignaturePropertiesType_t object
         */
        adb_SignaturePropertiesType_t* AXIS2_CALL
        adb_SignaturePropertiesType_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _SignaturePropertiesType adb_SignaturePropertiesType_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignaturePropertiesType_free (
            adb_SignaturePropertiesType_t* _SignaturePropertiesType,
            const axutil_env_t *env);

        /**
         * Free adb_SignaturePropertiesType_t object
         * @param  _SignaturePropertiesType adb_SignaturePropertiesType_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignaturePropertiesType_free_obj (
            adb_SignaturePropertiesType_t* _SignaturePropertiesType,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        /******** Deprecated for array types, Use 'Getters and Setters for Arrays' instead ***********/
        

        /**
         * Getter for SignatureProperty. Deprecated for array types, Use adb_SignaturePropertiesType_get_SignatureProperty_at instead
         * @param  _SignaturePropertiesType adb_SignaturePropertiesType_t object
         * @param env pointer to environment struct
         * @return Array of adb_SignaturePropertyType_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_SignaturePropertiesType_get_SignatureProperty(
            adb_SignaturePropertiesType_t* _SignaturePropertiesType,
            const axutil_env_t *env);

        /**
         * Setter for SignatureProperty.Deprecated for array types, Use adb_SignaturePropertiesType_set_SignatureProperty_at
         * or adb_SignaturePropertiesType_add_SignatureProperty instead.
         * @param  _SignaturePropertiesType adb_SignaturePropertiesType_t object
         * @param env pointer to environment struct
         * @param arg_SignatureProperty Array of adb_SignaturePropertyType_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignaturePropertiesType_set_SignatureProperty(
            adb_SignaturePropertiesType_t* _SignaturePropertiesType,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_SignatureProperty);

        /**
         * Resetter for SignatureProperty
         * @param  _SignaturePropertiesType adb_SignaturePropertiesType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignaturePropertiesType_reset_SignatureProperty(
            adb_SignaturePropertiesType_t* _SignaturePropertiesType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for Id. 
         * @param  _SignaturePropertiesType adb_SignaturePropertiesType_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_SignaturePropertiesType_get_Id(
            adb_SignaturePropertiesType_t* _SignaturePropertiesType,
            const axutil_env_t *env);

        /**
         * Setter for Id.
         * @param  _SignaturePropertiesType adb_SignaturePropertiesType_t object
         * @param env pointer to environment struct
         * @param arg_Id axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignaturePropertiesType_set_Id(
            adb_SignaturePropertiesType_t* _SignaturePropertiesType,
            const axutil_env_t *env,
            const axis2_char_t*  arg_Id);

        /**
         * Resetter for Id
         * @param  _SignaturePropertiesType adb_SignaturePropertiesType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignaturePropertiesType_reset_Id(
            adb_SignaturePropertiesType_t* _SignaturePropertiesType,
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
         * Get the ith element of SignatureProperty.
         * @param  _SignaturePropertiesType adb_SignaturePropertiesType_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith adb_SignaturePropertyType_t* of the array
         */
        adb_SignaturePropertyType_t* AXIS2_CALL
        adb_SignaturePropertiesType_get_SignatureProperty_at(
                adb_SignaturePropertiesType_t* _SignaturePropertiesType,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of SignatureProperty. (If the ith already exist, it will be replaced)
         * @param  _SignaturePropertiesType adb_SignaturePropertiesType_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_SignatureProperty element to set adb_SignaturePropertyType_t* to the array
         * @return ith adb_SignaturePropertyType_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_SignaturePropertiesType_set_SignatureProperty_at(
                adb_SignaturePropertiesType_t* _SignaturePropertiesType,
                const axutil_env_t *env, int i,
                adb_SignaturePropertyType_t* arg_SignatureProperty);


        /**
         * Add to SignatureProperty.
         * @param  _SignaturePropertiesType adb_SignaturePropertiesType_t object
         * @param env pointer to environment struct
         * @param arg_SignatureProperty element to add adb_SignaturePropertyType_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignaturePropertiesType_add_SignatureProperty(
                adb_SignaturePropertiesType_t* _SignaturePropertiesType,
                const axutil_env_t *env,
                adb_SignaturePropertyType_t* arg_SignatureProperty);

        /**
         * Get the size of the SignatureProperty array.
         * @param  _SignaturePropertiesType adb_SignaturePropertiesType_t object
         * @param env pointer to environment struct.
         * @return the size of the SignatureProperty array.
         */
        int AXIS2_CALL
        adb_SignaturePropertiesType_sizeof_SignatureProperty(
                    adb_SignaturePropertiesType_t* _SignaturePropertiesType,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of SignatureProperty.
         * @param  _SignaturePropertiesType adb_SignaturePropertiesType_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignaturePropertiesType_remove_SignatureProperty_at(
                adb_SignaturePropertiesType_t* _SignaturePropertiesType,
                const axutil_env_t *env, int i);

        


        /******************************* Checking and Setting NIL values *********************************/
        /* Use 'Checking and Setting NIL values for Arrays' to check and set nil for individual elements */

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether SignatureProperty is nill
         * @param  _SignaturePropertiesType adb_SignaturePropertiesType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_SignaturePropertiesType_is_SignatureProperty_nil(
                adb_SignaturePropertiesType_t* _SignaturePropertiesType,
                const axutil_env_t *env);


        

        /**
         * Check whether Id is nill
         * @param  _SignaturePropertiesType adb_SignaturePropertiesType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_SignaturePropertiesType_is_Id_nil(
                adb_SignaturePropertiesType_t* _SignaturePropertiesType,
                const axutil_env_t *env);


        
        /**
         * Set Id to nill (currently the same as reset)
         * @param  _SignaturePropertiesType adb_SignaturePropertiesType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignaturePropertiesType_set_Id_nil(
                adb_SignaturePropertiesType_t* _SignaturePropertiesType,
                const axutil_env_t *env);
        
        /*************************** Checking and Setting 'NIL' values in Arrays *****************************/

        /**
         * NOTE: You may set this to remove specific elements in the array
         *       But you can not remove elements, if the specific property is declared to be non-nillable or sizeof(array) < minOccurs
         */
        
        /**
         * Check whether SignatureProperty is nill at i
         * @param  _SignaturePropertiesType adb_SignaturePropertiesType_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_SignaturePropertiesType_is_SignatureProperty_nil_at(
                adb_SignaturePropertiesType_t* _SignaturePropertiesType,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set SignatureProperty to nill at i
         * @param  _SignaturePropertiesType _ adb_SignaturePropertiesType_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_SignaturePropertiesType_set_SignatureProperty_nil_at(
                adb_SignaturePropertiesType_t* _SignaturePropertiesType, 
                const axutil_env_t *env, int i);

        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _SignaturePropertiesType adb_SignaturePropertiesType_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignaturePropertiesType_deserialize(
            adb_SignaturePropertiesType_t* _SignaturePropertiesType,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _SignaturePropertiesType adb_SignaturePropertiesType_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignaturePropertiesType_deserialize_obj(
            adb_SignaturePropertiesType_t* _SignaturePropertiesType,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _SignaturePropertiesType adb_SignaturePropertiesType_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_SignaturePropertiesType_declare_parent_namespaces(
                    adb_SignaturePropertiesType_t* _SignaturePropertiesType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _SignaturePropertiesType adb_SignaturePropertiesType_t object
         * @param env pointer to environment struct
         * @param SignaturePropertiesType_om_node node to serialize from
         * @param SignaturePropertiesType_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_SignaturePropertiesType_serialize(
            adb_SignaturePropertiesType_t* _SignaturePropertiesType,
            const axutil_env_t *env,
            axiom_node_t* SignaturePropertiesType_om_node, axiom_element_t *SignaturePropertiesType_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _SignaturePropertiesType adb_SignaturePropertiesType_t object
         * @param env pointer to environment struct
         * @param SignaturePropertiesType_om_node node to serialize from
         * @param SignaturePropertiesType_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_SignaturePropertiesType_serialize_obj(
            adb_SignaturePropertiesType_t* _SignaturePropertiesType,
            const axutil_env_t *env,
            axiom_node_t* SignaturePropertiesType_om_node, axiom_element_t *SignaturePropertiesType_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_SignaturePropertiesType is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_SignaturePropertiesType_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_SignaturePropertiesType_t
         * @param env pointer to environment struct
         * @param _SignatureProperty axutil_array_list_t*
         * @param _Id axis2_char_t*
         * @return newly created adb_SignaturePropertiesType_t object
         */
        adb_SignaturePropertiesType_t* AXIS2_CALL
        adb_SignaturePropertiesType_create_with_values(
            const axutil_env_t *env,
                axutil_array_list_t* _SignatureProperty,
                axis2_char_t* _Id);

        


                /**
                 * Free adb_SignaturePropertiesType_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _SignaturePropertiesType adb_SignaturePropertiesType_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                axutil_array_list_t* AXIS2_CALL
                adb_SignaturePropertiesType_free_popping_value(
                        adb_SignaturePropertiesType_t* _SignaturePropertiesType,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for SignatureProperty by property number (1)
         * @param  _SignaturePropertiesType adb_SignaturePropertiesType_t object
         * @param env pointer to environment struct
         * @return Array of adb_SignaturePropertyType_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_SignaturePropertiesType_get_property1(
            adb_SignaturePropertiesType_t* _SignaturePropertiesType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for Id by property number (2)
         * @param  _SignaturePropertiesType adb_SignaturePropertiesType_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_SignaturePropertiesType_get_property2(
            adb_SignaturePropertiesType_t* _SignaturePropertiesType,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_SIGNATUREPROPERTIESTYPE_H */
    

