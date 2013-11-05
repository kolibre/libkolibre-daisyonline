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



        #ifndef ADB_CONTENTLIST_H
        #define ADB_CONTENTLIST_H

       /**
        * adb_contentList.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Nov 05, 2013 (09:21:13 EET)
        */

       /**
        *  adb_contentList class
        */

        
          #include "adb_label_type0.h"
          
          #include "adb_contentItem_type0.h"
          

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
        

        typedef struct adb_contentList adb_contentList_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_contentList_t
         * @param env pointer to environment struct
         * @return newly created adb_contentList_t object
         */
        adb_contentList_t* AXIS2_CALL
        adb_contentList_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _contentList adb_contentList_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentList_free (
            adb_contentList_t* _contentList,
            const axutil_env_t *env);

        /**
         * Free adb_contentList_t object
         * @param  _contentList adb_contentList_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentList_free_obj (
            adb_contentList_t* _contentList,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        /******** Deprecated for array types, Use 'Getters and Setters for Arrays' instead ***********/
        

        /**
         * Getter for label. 
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @return adb_label_type0_t*
         */
        adb_label_type0_t* AXIS2_CALL
        adb_contentList_get_label(
            adb_contentList_t* _contentList,
            const axutil_env_t *env);

        /**
         * Setter for label.
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @param arg_label adb_label_type0_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentList_set_label(
            adb_contentList_t* _contentList,
            const axutil_env_t *env,
            adb_label_type0_t*  arg_label);

        /**
         * Resetter for label
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentList_reset_label(
            adb_contentList_t* _contentList,
            const axutil_env_t *env);

        
        

        /**
         * Getter for contentItem. Deprecated for array types, Use adb_contentList_get_contentItem_at instead
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @return Array of adb_contentItem_type0_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_contentList_get_contentItem(
            adb_contentList_t* _contentList,
            const axutil_env_t *env);

        /**
         * Setter for contentItem.Deprecated for array types, Use adb_contentList_set_contentItem_at
         * or adb_contentList_add_contentItem instead.
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @param arg_contentItem Array of adb_contentItem_type0_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentList_set_contentItem(
            adb_contentList_t* _contentList,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_contentItem);

        /**
         * Resetter for contentItem
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentList_reset_contentItem(
            adb_contentList_t* _contentList,
            const axutil_env_t *env);

        
        

        /**
         * Getter for totalItems. 
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @return int
         */
        int AXIS2_CALL
        adb_contentList_get_totalItems(
            adb_contentList_t* _contentList,
            const axutil_env_t *env);

        /**
         * Setter for totalItems.
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @param arg_totalItems int
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentList_set_totalItems(
            adb_contentList_t* _contentList,
            const axutil_env_t *env,
            const int  arg_totalItems);

        /**
         * Resetter for totalItems
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentList_reset_totalItems(
            adb_contentList_t* _contentList,
            const axutil_env_t *env);

        
        

        /**
         * Getter for firstItem. 
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @return int
         */
        int AXIS2_CALL
        adb_contentList_get_firstItem(
            adb_contentList_t* _contentList,
            const axutil_env_t *env);

        /**
         * Setter for firstItem.
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @param arg_firstItem int
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentList_set_firstItem(
            adb_contentList_t* _contentList,
            const axutil_env_t *env,
            const int  arg_firstItem);

        /**
         * Resetter for firstItem
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentList_reset_firstItem(
            adb_contentList_t* _contentList,
            const axutil_env_t *env);

        
        

        /**
         * Getter for lastItem. 
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @return int
         */
        int AXIS2_CALL
        adb_contentList_get_lastItem(
            adb_contentList_t* _contentList,
            const axutil_env_t *env);

        /**
         * Setter for lastItem.
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @param arg_lastItem int
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentList_set_lastItem(
            adb_contentList_t* _contentList,
            const axutil_env_t *env,
            const int  arg_lastItem);

        /**
         * Resetter for lastItem
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentList_reset_lastItem(
            adb_contentList_t* _contentList,
            const axutil_env_t *env);

        
        

        /**
         * Getter for id. 
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_contentList_get_id(
            adb_contentList_t* _contentList,
            const axutil_env_t *env);

        /**
         * Setter for id.
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @param arg_id axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentList_set_id(
            adb_contentList_t* _contentList,
            const axutil_env_t *env,
            const axis2_char_t*  arg_id);

        /**
         * Resetter for id
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentList_reset_id(
            adb_contentList_t* _contentList,
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
         * Get the ith element of contentItem.
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith adb_contentItem_type0_t* of the array
         */
        adb_contentItem_type0_t* AXIS2_CALL
        adb_contentList_get_contentItem_at(
                adb_contentList_t* _contentList,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of contentItem. (If the ith already exist, it will be replaced)
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_contentItem element to set adb_contentItem_type0_t* to the array
         * @return ith adb_contentItem_type0_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_contentList_set_contentItem_at(
                adb_contentList_t* _contentList,
                const axutil_env_t *env, int i,
                adb_contentItem_type0_t* arg_contentItem);


        /**
         * Add to contentItem.
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @param arg_contentItem element to add adb_contentItem_type0_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentList_add_contentItem(
                adb_contentList_t* _contentList,
                const axutil_env_t *env,
                adb_contentItem_type0_t* arg_contentItem);

        /**
         * Get the size of the contentItem array.
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct.
         * @return the size of the contentItem array.
         */
        int AXIS2_CALL
        adb_contentList_sizeof_contentItem(
                    adb_contentList_t* _contentList,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of contentItem.
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentList_remove_contentItem_at(
                adb_contentList_t* _contentList,
                const axutil_env_t *env, int i);

        


        /******************************* Checking and Setting NIL values *********************************/
        /* Use 'Checking and Setting NIL values for Arrays' to check and set nil for individual elements */

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether label is nill
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_contentList_is_label_nil(
                adb_contentList_t* _contentList,
                const axutil_env_t *env);


        

        /**
         * Check whether contentItem is nill
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_contentList_is_contentItem_nil(
                adb_contentList_t* _contentList,
                const axutil_env_t *env);


        

        /**
         * Check whether totalItems is nill
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_contentList_is_totalItems_nil(
                adb_contentList_t* _contentList,
                const axutil_env_t *env);


        

        /**
         * Check whether firstItem is nill
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_contentList_is_firstItem_nil(
                adb_contentList_t* _contentList,
                const axutil_env_t *env);


        
        /**
         * Set firstItem to nill (currently the same as reset)
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentList_set_firstItem_nil(
                adb_contentList_t* _contentList,
                const axutil_env_t *env);
        

        /**
         * Check whether lastItem is nill
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_contentList_is_lastItem_nil(
                adb_contentList_t* _contentList,
                const axutil_env_t *env);


        
        /**
         * Set lastItem to nill (currently the same as reset)
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentList_set_lastItem_nil(
                adb_contentList_t* _contentList,
                const axutil_env_t *env);
        

        /**
         * Check whether id is nill
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_contentList_is_id_nil(
                adb_contentList_t* _contentList,
                const axutil_env_t *env);


        
        /*************************** Checking and Setting 'NIL' values in Arrays *****************************/

        /**
         * NOTE: You may set this to remove specific elements in the array
         *       But you can not remove elements, if the specific property is declared to be non-nillable or sizeof(array) < minOccurs
         */
        
        /**
         * Check whether contentItem is nill at i
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_contentList_is_contentItem_nil_at(
                adb_contentList_t* _contentList,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set contentItem to nill at i
         * @param  _contentList _ adb_contentList_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_contentList_set_contentItem_nil_at(
                adb_contentList_t* _contentList, 
                const axutil_env_t *env, int i);

        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentList_deserialize(
            adb_contentList_t* _contentList,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_contentList_deserialize_obj(
            adb_contentList_t* _contentList,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_contentList_declare_parent_namespaces(
                    adb_contentList_t* _contentList,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @param contentList_om_node node to serialize from
         * @param contentList_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_contentList_serialize(
            adb_contentList_t* _contentList,
            const axutil_env_t *env,
            axiom_node_t* contentList_om_node, axiom_element_t *contentList_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @param contentList_om_node node to serialize from
         * @param contentList_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_contentList_serialize_obj(
            adb_contentList_t* _contentList,
            const axutil_env_t *env,
            axiom_node_t* contentList_om_node, axiom_element_t *contentList_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_contentList is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_contentList_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_contentList_t
         * @param env pointer to environment struct
         * @param _label adb_label_type0_t*
         * @param _contentItem axutil_array_list_t*
         * @param _totalItems int
         * @param _firstItem int
         * @param _lastItem int
         * @param _id axis2_char_t*
         * @return newly created adb_contentList_t object
         */
        adb_contentList_t* AXIS2_CALL
        adb_contentList_create_with_values(
            const axutil_env_t *env,
                adb_label_type0_t* _label,
                axutil_array_list_t* _contentItem,
                int _totalItems,
                int _firstItem,
                int _lastItem,
                axis2_char_t* _id);

        


                /**
                 * Free adb_contentList_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _contentList adb_contentList_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                adb_label_type0_t* AXIS2_CALL
                adb_contentList_free_popping_value(
                        adb_contentList_t* _contentList,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for label by property number (1)
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @return adb_label_type0_t*
         */
        adb_label_type0_t* AXIS2_CALL
        adb_contentList_get_property1(
            adb_contentList_t* _contentList,
            const axutil_env_t *env);

    
        

        /**
         * Getter for contentItem by property number (2)
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @return Array of adb_contentItem_type0_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_contentList_get_property2(
            adb_contentList_t* _contentList,
            const axutil_env_t *env);

    
        

        /**
         * Getter for totalItems by property number (3)
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @return int
         */
        int AXIS2_CALL
        adb_contentList_get_property3(
            adb_contentList_t* _contentList,
            const axutil_env_t *env);

    
        

        /**
         * Getter for firstItem by property number (4)
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @return int
         */
        int AXIS2_CALL
        adb_contentList_get_property4(
            adb_contentList_t* _contentList,
            const axutil_env_t *env);

    
        

        /**
         * Getter for lastItem by property number (5)
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @return int
         */
        int AXIS2_CALL
        adb_contentList_get_property5(
            adb_contentList_t* _contentList,
            const axutil_env_t *env);

    
        

        /**
         * Getter for id by property number (6)
         * @param  _contentList adb_contentList_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_contentList_get_property6(
            adb_contentList_t* _contentList,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_CONTENTLIST_H */
    

