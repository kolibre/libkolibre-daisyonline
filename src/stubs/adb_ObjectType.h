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



        #ifndef ADB_OBJECTTYPE_H
        #define ADB_OBJECTTYPE_H

       /**
        * adb_ObjectType.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Nov 05, 2013 (09:21:13 EET)
        */

       /**
        *  adb_ObjectType class
        */

        
          #include "adb_ObjectTypeSequence.h"
          

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
        

        typedef struct adb_ObjectType adb_ObjectType_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_ObjectType_t
         * @param env pointer to environment struct
         * @return newly created adb_ObjectType_t object
         */
        adb_ObjectType_t* AXIS2_CALL
        adb_ObjectType_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _ObjectType adb_ObjectType_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ObjectType_free (
            adb_ObjectType_t* _ObjectType,
            const axutil_env_t *env);

        /**
         * Free adb_ObjectType_t object
         * @param  _ObjectType adb_ObjectType_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ObjectType_free_obj (
            adb_ObjectType_t* _ObjectType,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        /******** Deprecated for array types, Use 'Getters and Setters for Arrays' instead ***********/
        

        /**
         * Getter for ObjectTypeSequence. Deprecated for array types, Use adb_ObjectType_get_ObjectTypeSequence_at instead
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @return Array of adb_ObjectTypeSequence_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_ObjectType_get_ObjectTypeSequence(
            adb_ObjectType_t* _ObjectType,
            const axutil_env_t *env);

        /**
         * Setter for ObjectTypeSequence.Deprecated for array types, Use adb_ObjectType_set_ObjectTypeSequence_at
         * or adb_ObjectType_add_ObjectTypeSequence instead.
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @param arg_ObjectTypeSequence Array of adb_ObjectTypeSequence_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ObjectType_set_ObjectTypeSequence(
            adb_ObjectType_t* _ObjectType,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_ObjectTypeSequence);

        /**
         * Resetter for ObjectTypeSequence
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ObjectType_reset_ObjectTypeSequence(
            adb_ObjectType_t* _ObjectType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for Id. 
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_ObjectType_get_Id(
            adb_ObjectType_t* _ObjectType,
            const axutil_env_t *env);

        /**
         * Setter for Id.
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @param arg_Id axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ObjectType_set_Id(
            adb_ObjectType_t* _ObjectType,
            const axutil_env_t *env,
            const axis2_char_t*  arg_Id);

        /**
         * Resetter for Id
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ObjectType_reset_Id(
            adb_ObjectType_t* _ObjectType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for MimeType. 
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_ObjectType_get_MimeType(
            adb_ObjectType_t* _ObjectType,
            const axutil_env_t *env);

        /**
         * Setter for MimeType.
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @param arg_MimeType axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ObjectType_set_MimeType(
            adb_ObjectType_t* _ObjectType,
            const axutil_env_t *env,
            const axis2_char_t*  arg_MimeType);

        /**
         * Resetter for MimeType
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ObjectType_reset_MimeType(
            adb_ObjectType_t* _ObjectType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for Encoding. 
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @return axutil_uri_t*
         */
        axutil_uri_t* AXIS2_CALL
        adb_ObjectType_get_Encoding(
            adb_ObjectType_t* _ObjectType,
            const axutil_env_t *env);

        /**
         * Setter for Encoding.
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @param arg_Encoding axutil_uri_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ObjectType_set_Encoding(
            adb_ObjectType_t* _ObjectType,
            const axutil_env_t *env,
            axutil_uri_t*  arg_Encoding);

        /**
         * Resetter for Encoding
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ObjectType_reset_Encoding(
            adb_ObjectType_t* _ObjectType,
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
         * Get the ith element of ObjectTypeSequence.
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith adb_ObjectTypeSequence_t* of the array
         */
        adb_ObjectTypeSequence_t* AXIS2_CALL
        adb_ObjectType_get_ObjectTypeSequence_at(
                adb_ObjectType_t* _ObjectType,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of ObjectTypeSequence. (If the ith already exist, it will be replaced)
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_ObjectTypeSequence element to set adb_ObjectTypeSequence_t* to the array
         * @return ith adb_ObjectTypeSequence_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_ObjectType_set_ObjectTypeSequence_at(
                adb_ObjectType_t* _ObjectType,
                const axutil_env_t *env, int i,
                adb_ObjectTypeSequence_t* arg_ObjectTypeSequence);


        /**
         * Add to ObjectTypeSequence.
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @param arg_ObjectTypeSequence element to add adb_ObjectTypeSequence_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ObjectType_add_ObjectTypeSequence(
                adb_ObjectType_t* _ObjectType,
                const axutil_env_t *env,
                adb_ObjectTypeSequence_t* arg_ObjectTypeSequence);

        /**
         * Get the size of the ObjectTypeSequence array.
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct.
         * @return the size of the ObjectTypeSequence array.
         */
        int AXIS2_CALL
        adb_ObjectType_sizeof_ObjectTypeSequence(
                    adb_ObjectType_t* _ObjectType,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of ObjectTypeSequence.
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ObjectType_remove_ObjectTypeSequence_at(
                adb_ObjectType_t* _ObjectType,
                const axutil_env_t *env, int i);

        


        /******************************* Checking and Setting NIL values *********************************/
        /* Use 'Checking and Setting NIL values for Arrays' to check and set nil for individual elements */

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether ObjectTypeSequence is nill
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_ObjectType_is_ObjectTypeSequence_nil(
                adb_ObjectType_t* _ObjectType,
                const axutil_env_t *env);


        

        /**
         * Check whether Id is nill
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_ObjectType_is_Id_nil(
                adb_ObjectType_t* _ObjectType,
                const axutil_env_t *env);


        
        /**
         * Set Id to nill (currently the same as reset)
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ObjectType_set_Id_nil(
                adb_ObjectType_t* _ObjectType,
                const axutil_env_t *env);
        

        /**
         * Check whether MimeType is nill
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_ObjectType_is_MimeType_nil(
                adb_ObjectType_t* _ObjectType,
                const axutil_env_t *env);


        
        /**
         * Set MimeType to nill (currently the same as reset)
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ObjectType_set_MimeType_nil(
                adb_ObjectType_t* _ObjectType,
                const axutil_env_t *env);
        

        /**
         * Check whether Encoding is nill
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_ObjectType_is_Encoding_nil(
                adb_ObjectType_t* _ObjectType,
                const axutil_env_t *env);


        
        /**
         * Set Encoding to nill (currently the same as reset)
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ObjectType_set_Encoding_nil(
                adb_ObjectType_t* _ObjectType,
                const axutil_env_t *env);
        
        /*************************** Checking and Setting 'NIL' values in Arrays *****************************/

        /**
         * NOTE: You may set this to remove specific elements in the array
         *       But you can not remove elements, if the specific property is declared to be non-nillable or sizeof(array) < minOccurs
         */
        
        /**
         * Check whether ObjectTypeSequence is nill at i
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_ObjectType_is_ObjectTypeSequence_nil_at(
                adb_ObjectType_t* _ObjectType,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set ObjectTypeSequence to nill at i
         * @param  _ObjectType _ adb_ObjectType_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_ObjectType_set_ObjectTypeSequence_nil_at(
                adb_ObjectType_t* _ObjectType, 
                const axutil_env_t *env, int i);

        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ObjectType_deserialize(
            adb_ObjectType_t* _ObjectType,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ObjectType_deserialize_obj(
            adb_ObjectType_t* _ObjectType,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_ObjectType_declare_parent_namespaces(
                    adb_ObjectType_t* _ObjectType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @param ObjectType_om_node node to serialize from
         * @param ObjectType_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_ObjectType_serialize(
            adb_ObjectType_t* _ObjectType,
            const axutil_env_t *env,
            axiom_node_t* ObjectType_om_node, axiom_element_t *ObjectType_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @param ObjectType_om_node node to serialize from
         * @param ObjectType_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_ObjectType_serialize_obj(
            adb_ObjectType_t* _ObjectType,
            const axutil_env_t *env,
            axiom_node_t* ObjectType_om_node, axiom_element_t *ObjectType_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_ObjectType is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_ObjectType_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_ObjectType_t
         * @param env pointer to environment struct
         * @param _ObjectTypeSequence axutil_array_list_t*
         * @param _Id axis2_char_t*
         * @param _MimeType axis2_char_t*
         * @param _Encoding axutil_uri_t*
         * @return newly created adb_ObjectType_t object
         */
        adb_ObjectType_t* AXIS2_CALL
        adb_ObjectType_create_with_values(
            const axutil_env_t *env,
                axutil_array_list_t* _ObjectTypeSequence,
                axis2_char_t* _Id,
                axis2_char_t* _MimeType,
                axutil_uri_t* _Encoding);

        


                /**
                 * Free adb_ObjectType_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _ObjectType adb_ObjectType_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                axutil_array_list_t* AXIS2_CALL
                adb_ObjectType_free_popping_value(
                        adb_ObjectType_t* _ObjectType,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for ObjectTypeSequence by property number (1)
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @return Array of adb_ObjectTypeSequence_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_ObjectType_get_property1(
            adb_ObjectType_t* _ObjectType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for Id by property number (2)
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_ObjectType_get_property2(
            adb_ObjectType_t* _ObjectType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for MimeType by property number (3)
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_ObjectType_get_property3(
            adb_ObjectType_t* _ObjectType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for Encoding by property number (4)
         * @param  _ObjectType adb_ObjectType_t object
         * @param env pointer to environment struct
         * @return axutil_uri_t*
         */
        axutil_uri_t* AXIS2_CALL
        adb_ObjectType_get_property4(
            adb_ObjectType_t* _ObjectType,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_OBJECTTYPE_H */
    

