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



        #ifndef ADB_BOOKMARKSET_TYPE0_H
        #define ADB_BOOKMARKSET_TYPE0_H

       /**
        * adb_bookmarkSet_type0.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Nov 05, 2013 (09:21:13 EET)
        */

       /**
        *  adb_bookmarkSet_type0 class
        */

        
          #include "adb_title_type0.h"
          
          #include "adb_lastmark_type0.h"
          
          #include "adb_bookmarkSetChoice_type1.h"
          

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
        

        typedef struct adb_bookmarkSet_type0 adb_bookmarkSet_type0_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_bookmarkSet_type0_t
         * @param env pointer to environment struct
         * @return newly created adb_bookmarkSet_type0_t object
         */
        adb_bookmarkSet_type0_t* AXIS2_CALL
        adb_bookmarkSet_type0_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkSet_type0_free (
            adb_bookmarkSet_type0_t* _bookmarkSet_type0,
            const axutil_env_t *env);

        /**
         * Free adb_bookmarkSet_type0_t object
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkSet_type0_free_obj (
            adb_bookmarkSet_type0_t* _bookmarkSet_type0,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        /******** Deprecated for array types, Use 'Getters and Setters for Arrays' instead ***********/
        

        /**
         * Getter for title. 
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @return adb_title_type0_t*
         */
        adb_title_type0_t* AXIS2_CALL
        adb_bookmarkSet_type0_get_title(
            adb_bookmarkSet_type0_t* _bookmarkSet_type0,
            const axutil_env_t *env);

        /**
         * Setter for title.
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @param arg_title adb_title_type0_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkSet_type0_set_title(
            adb_bookmarkSet_type0_t* _bookmarkSet_type0,
            const axutil_env_t *env,
            adb_title_type0_t*  arg_title);

        /**
         * Resetter for title
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkSet_type0_reset_title(
            adb_bookmarkSet_type0_t* _bookmarkSet_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for uid. 
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_bookmarkSet_type0_get_uid(
            adb_bookmarkSet_type0_t* _bookmarkSet_type0,
            const axutil_env_t *env);

        /**
         * Setter for uid.
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @param arg_uid axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkSet_type0_set_uid(
            adb_bookmarkSet_type0_t* _bookmarkSet_type0,
            const axutil_env_t *env,
            const axis2_char_t*  arg_uid);

        /**
         * Resetter for uid
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkSet_type0_reset_uid(
            adb_bookmarkSet_type0_t* _bookmarkSet_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for lastmark. 
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @return adb_lastmark_type0_t*
         */
        adb_lastmark_type0_t* AXIS2_CALL
        adb_bookmarkSet_type0_get_lastmark(
            adb_bookmarkSet_type0_t* _bookmarkSet_type0,
            const axutil_env_t *env);

        /**
         * Setter for lastmark.
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @param arg_lastmark adb_lastmark_type0_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkSet_type0_set_lastmark(
            adb_bookmarkSet_type0_t* _bookmarkSet_type0,
            const axutil_env_t *env,
            adb_lastmark_type0_t*  arg_lastmark);

        /**
         * Resetter for lastmark
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkSet_type0_reset_lastmark(
            adb_bookmarkSet_type0_t* _bookmarkSet_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for bookmarkSetChoice_type1. Deprecated for array types, Use adb_bookmarkSet_type0_get_bookmarkSetChoice_type1_at instead
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @return Array of adb_bookmarkSetChoice_type1_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_bookmarkSet_type0_get_bookmarkSetChoice_type1(
            adb_bookmarkSet_type0_t* _bookmarkSet_type0,
            const axutil_env_t *env);

        /**
         * Setter for bookmarkSetChoice_type1.Deprecated for array types, Use adb_bookmarkSet_type0_set_bookmarkSetChoice_type1_at
         * or adb_bookmarkSet_type0_add_bookmarkSetChoice_type1 instead.
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @param arg_bookmarkSetChoice_type1 Array of adb_bookmarkSetChoice_type1_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkSet_type0_set_bookmarkSetChoice_type1(
            adb_bookmarkSet_type0_t* _bookmarkSet_type0,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_bookmarkSetChoice_type1);

        /**
         * Resetter for bookmarkSetChoice_type1
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkSet_type0_reset_bookmarkSetChoice_type1(
            adb_bookmarkSet_type0_t* _bookmarkSet_type0,
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
         * Get the ith element of bookmarkSetChoice_type1.
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith adb_bookmarkSetChoice_type1_t* of the array
         */
        adb_bookmarkSetChoice_type1_t* AXIS2_CALL
        adb_bookmarkSet_type0_get_bookmarkSetChoice_type1_at(
                adb_bookmarkSet_type0_t* _bookmarkSet_type0,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of bookmarkSetChoice_type1. (If the ith already exist, it will be replaced)
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_bookmarkSetChoice_type1 element to set adb_bookmarkSetChoice_type1_t* to the array
         * @return ith adb_bookmarkSetChoice_type1_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkSet_type0_set_bookmarkSetChoice_type1_at(
                adb_bookmarkSet_type0_t* _bookmarkSet_type0,
                const axutil_env_t *env, int i,
                adb_bookmarkSetChoice_type1_t* arg_bookmarkSetChoice_type1);


        /**
         * Add to bookmarkSetChoice_type1.
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @param arg_bookmarkSetChoice_type1 element to add adb_bookmarkSetChoice_type1_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkSet_type0_add_bookmarkSetChoice_type1(
                adb_bookmarkSet_type0_t* _bookmarkSet_type0,
                const axutil_env_t *env,
                adb_bookmarkSetChoice_type1_t* arg_bookmarkSetChoice_type1);

        /**
         * Get the size of the bookmarkSetChoice_type1 array.
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct.
         * @return the size of the bookmarkSetChoice_type1 array.
         */
        int AXIS2_CALL
        adb_bookmarkSet_type0_sizeof_bookmarkSetChoice_type1(
                    adb_bookmarkSet_type0_t* _bookmarkSet_type0,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of bookmarkSetChoice_type1.
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkSet_type0_remove_bookmarkSetChoice_type1_at(
                adb_bookmarkSet_type0_t* _bookmarkSet_type0,
                const axutil_env_t *env, int i);

        


        /******************************* Checking and Setting NIL values *********************************/
        /* Use 'Checking and Setting NIL values for Arrays' to check and set nil for individual elements */

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether title is nill
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_bookmarkSet_type0_is_title_nil(
                adb_bookmarkSet_type0_t* _bookmarkSet_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether uid is nill
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_bookmarkSet_type0_is_uid_nil(
                adb_bookmarkSet_type0_t* _bookmarkSet_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether lastmark is nill
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_bookmarkSet_type0_is_lastmark_nil(
                adb_bookmarkSet_type0_t* _bookmarkSet_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether bookmarkSetChoice_type1 is nill
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_bookmarkSet_type0_is_bookmarkSetChoice_type1_nil(
                adb_bookmarkSet_type0_t* _bookmarkSet_type0,
                const axutil_env_t *env);


        
        /*************************** Checking and Setting 'NIL' values in Arrays *****************************/

        /**
         * NOTE: You may set this to remove specific elements in the array
         *       But you can not remove elements, if the specific property is declared to be non-nillable or sizeof(array) < minOccurs
         */
        
        /**
         * Check whether bookmarkSetChoice_type1 is nill at i
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_bookmarkSet_type0_is_bookmarkSetChoice_type1_nil_at(
                adb_bookmarkSet_type0_t* _bookmarkSet_type0,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set bookmarkSetChoice_type1 to nill at i
         * @param  _bookmarkSet_type0 _ adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkSet_type0_set_bookmarkSetChoice_type1_nil_at(
                adb_bookmarkSet_type0_t* _bookmarkSet_type0, 
                const axutil_env_t *env, int i);

        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkSet_type0_deserialize(
            adb_bookmarkSet_type0_t* _bookmarkSet_type0,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkSet_type0_deserialize_obj(
            adb_bookmarkSet_type0_t* _bookmarkSet_type0,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_bookmarkSet_type0_declare_parent_namespaces(
                    adb_bookmarkSet_type0_t* _bookmarkSet_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @param bookmarkSet_type0_om_node node to serialize from
         * @param bookmarkSet_type0_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_bookmarkSet_type0_serialize(
            adb_bookmarkSet_type0_t* _bookmarkSet_type0,
            const axutil_env_t *env,
            axiom_node_t* bookmarkSet_type0_om_node, axiom_element_t *bookmarkSet_type0_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @param bookmarkSet_type0_om_node node to serialize from
         * @param bookmarkSet_type0_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_bookmarkSet_type0_serialize_obj(
            adb_bookmarkSet_type0_t* _bookmarkSet_type0,
            const axutil_env_t *env,
            axiom_node_t* bookmarkSet_type0_om_node, axiom_element_t *bookmarkSet_type0_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_bookmarkSet_type0 is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_bookmarkSet_type0_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_bookmarkSet_type0_t
         * @param env pointer to environment struct
         * @param _title adb_title_type0_t*
         * @param _uid axis2_char_t*
         * @param _lastmark adb_lastmark_type0_t*
         * @param _bookmarkSetChoice_type1 axutil_array_list_t*
         * @return newly created adb_bookmarkSet_type0_t object
         */
        adb_bookmarkSet_type0_t* AXIS2_CALL
        adb_bookmarkSet_type0_create_with_values(
            const axutil_env_t *env,
                adb_title_type0_t* _title,
                axis2_char_t* _uid,
                adb_lastmark_type0_t* _lastmark,
                axutil_array_list_t* _bookmarkSetChoice_type1);

        


                /**
                 * Free adb_bookmarkSet_type0_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                adb_title_type0_t* AXIS2_CALL
                adb_bookmarkSet_type0_free_popping_value(
                        adb_bookmarkSet_type0_t* _bookmarkSet_type0,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for title by property number (1)
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @return adb_title_type0_t*
         */
        adb_title_type0_t* AXIS2_CALL
        adb_bookmarkSet_type0_get_property1(
            adb_bookmarkSet_type0_t* _bookmarkSet_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for uid by property number (2)
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_bookmarkSet_type0_get_property2(
            adb_bookmarkSet_type0_t* _bookmarkSet_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for lastmark by property number (3)
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @return adb_lastmark_type0_t*
         */
        adb_lastmark_type0_t* AXIS2_CALL
        adb_bookmarkSet_type0_get_property3(
            adb_bookmarkSet_type0_t* _bookmarkSet_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for bookmarkSetChoice_type1 by property number (4)
         * @param  _bookmarkSet_type0 adb_bookmarkSet_type0_t object
         * @param env pointer to environment struct
         * @return Array of adb_bookmarkSetChoice_type1_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_bookmarkSet_type0_get_property4(
            adb_bookmarkSet_type0_t* _bookmarkSet_type0,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_BOOKMARKSET_TYPE0_H */
    

