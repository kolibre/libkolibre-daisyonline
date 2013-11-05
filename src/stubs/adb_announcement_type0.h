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



        #ifndef ADB_ANNOUNCEMENT_TYPE0_H
        #define ADB_ANNOUNCEMENT_TYPE0_H

       /**
        * adb_announcement_type0.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Nov 05, 2013 (09:21:13 EET)
        */

       /**
        *  adb_announcement_type0 class
        */

        
          #include "adb_label_type0.h"
          
          #include "adb_type_type1.h"
          
          #include "adb_priority_type0.h"
          

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
        

        typedef struct adb_announcement_type0 adb_announcement_type0_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_announcement_type0_t
         * @param env pointer to environment struct
         * @return newly created adb_announcement_type0_t object
         */
        adb_announcement_type0_t* AXIS2_CALL
        adb_announcement_type0_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _announcement_type0 adb_announcement_type0_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_announcement_type0_free (
            adb_announcement_type0_t* _announcement_type0,
            const axutil_env_t *env);

        /**
         * Free adb_announcement_type0_t object
         * @param  _announcement_type0 adb_announcement_type0_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_announcement_type0_free_obj (
            adb_announcement_type0_t* _announcement_type0,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        
        

        /**
         * Getter for label. 
         * @param  _announcement_type0 adb_announcement_type0_t object
         * @param env pointer to environment struct
         * @return adb_label_type0_t*
         */
        adb_label_type0_t* AXIS2_CALL
        adb_announcement_type0_get_label(
            adb_announcement_type0_t* _announcement_type0,
            const axutil_env_t *env);

        /**
         * Setter for label.
         * @param  _announcement_type0 adb_announcement_type0_t object
         * @param env pointer to environment struct
         * @param arg_label adb_label_type0_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_announcement_type0_set_label(
            adb_announcement_type0_t* _announcement_type0,
            const axutil_env_t *env,
            adb_label_type0_t*  arg_label);

        /**
         * Resetter for label
         * @param  _announcement_type0 adb_announcement_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_announcement_type0_reset_label(
            adb_announcement_type0_t* _announcement_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for id. 
         * @param  _announcement_type0 adb_announcement_type0_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_announcement_type0_get_id(
            adb_announcement_type0_t* _announcement_type0,
            const axutil_env_t *env);

        /**
         * Setter for id.
         * @param  _announcement_type0 adb_announcement_type0_t object
         * @param env pointer to environment struct
         * @param arg_id axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_announcement_type0_set_id(
            adb_announcement_type0_t* _announcement_type0,
            const axutil_env_t *env,
            const axis2_char_t*  arg_id);

        /**
         * Resetter for id
         * @param  _announcement_type0 adb_announcement_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_announcement_type0_reset_id(
            adb_announcement_type0_t* _announcement_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for type. 
         * @param  _announcement_type0 adb_announcement_type0_t object
         * @param env pointer to environment struct
         * @return adb_type_type1_t*
         */
        adb_type_type1_t* AXIS2_CALL
        adb_announcement_type0_get_type(
            adb_announcement_type0_t* _announcement_type0,
            const axutil_env_t *env);

        /**
         * Setter for type.
         * @param  _announcement_type0 adb_announcement_type0_t object
         * @param env pointer to environment struct
         * @param arg_type adb_type_type1_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_announcement_type0_set_type(
            adb_announcement_type0_t* _announcement_type0,
            const axutil_env_t *env,
            adb_type_type1_t*  arg_type);

        /**
         * Resetter for type
         * @param  _announcement_type0 adb_announcement_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_announcement_type0_reset_type(
            adb_announcement_type0_t* _announcement_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for priority. 
         * @param  _announcement_type0 adb_announcement_type0_t object
         * @param env pointer to environment struct
         * @return adb_priority_type0_t*
         */
        adb_priority_type0_t* AXIS2_CALL
        adb_announcement_type0_get_priority(
            adb_announcement_type0_t* _announcement_type0,
            const axutil_env_t *env);

        /**
         * Setter for priority.
         * @param  _announcement_type0 adb_announcement_type0_t object
         * @param env pointer to environment struct
         * @param arg_priority adb_priority_type0_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_announcement_type0_set_priority(
            adb_announcement_type0_t* _announcement_type0,
            const axutil_env_t *env,
            adb_priority_type0_t*  arg_priority);

        /**
         * Resetter for priority
         * @param  _announcement_type0 adb_announcement_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_announcement_type0_reset_priority(
            adb_announcement_type0_t* _announcement_type0,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether label is nill
         * @param  _announcement_type0 adb_announcement_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_announcement_type0_is_label_nil(
                adb_announcement_type0_t* _announcement_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether id is nill
         * @param  _announcement_type0 adb_announcement_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_announcement_type0_is_id_nil(
                adb_announcement_type0_t* _announcement_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether type is nill
         * @param  _announcement_type0 adb_announcement_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_announcement_type0_is_type_nil(
                adb_announcement_type0_t* _announcement_type0,
                const axutil_env_t *env);


        
        /**
         * Set type to nill (currently the same as reset)
         * @param  _announcement_type0 adb_announcement_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_announcement_type0_set_type_nil(
                adb_announcement_type0_t* _announcement_type0,
                const axutil_env_t *env);
        

        /**
         * Check whether priority is nill
         * @param  _announcement_type0 adb_announcement_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_announcement_type0_is_priority_nil(
                adb_announcement_type0_t* _announcement_type0,
                const axutil_env_t *env);


        
        /**
         * Set priority to nill (currently the same as reset)
         * @param  _announcement_type0 adb_announcement_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_announcement_type0_set_priority_nil(
                adb_announcement_type0_t* _announcement_type0,
                const axutil_env_t *env);
        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _announcement_type0 adb_announcement_type0_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_announcement_type0_deserialize(
            adb_announcement_type0_t* _announcement_type0,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _announcement_type0 adb_announcement_type0_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_announcement_type0_deserialize_obj(
            adb_announcement_type0_t* _announcement_type0,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _announcement_type0 adb_announcement_type0_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_announcement_type0_declare_parent_namespaces(
                    adb_announcement_type0_t* _announcement_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _announcement_type0 adb_announcement_type0_t object
         * @param env pointer to environment struct
         * @param announcement_type0_om_node node to serialize from
         * @param announcement_type0_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_announcement_type0_serialize(
            adb_announcement_type0_t* _announcement_type0,
            const axutil_env_t *env,
            axiom_node_t* announcement_type0_om_node, axiom_element_t *announcement_type0_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _announcement_type0 adb_announcement_type0_t object
         * @param env pointer to environment struct
         * @param announcement_type0_om_node node to serialize from
         * @param announcement_type0_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_announcement_type0_serialize_obj(
            adb_announcement_type0_t* _announcement_type0,
            const axutil_env_t *env,
            axiom_node_t* announcement_type0_om_node, axiom_element_t *announcement_type0_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_announcement_type0 is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_announcement_type0_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_announcement_type0_t
         * @param env pointer to environment struct
         * @param _label adb_label_type0_t*
         * @param _id axis2_char_t*
         * @param _type adb_type_type1_t*
         * @param _priority adb_priority_type0_t*
         * @return newly created adb_announcement_type0_t object
         */
        adb_announcement_type0_t* AXIS2_CALL
        adb_announcement_type0_create_with_values(
            const axutil_env_t *env,
                adb_label_type0_t* _label,
                axis2_char_t* _id,
                adb_type_type1_t* _type,
                adb_priority_type0_t* _priority);

        


                /**
                 * Free adb_announcement_type0_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _announcement_type0 adb_announcement_type0_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                adb_label_type0_t* AXIS2_CALL
                adb_announcement_type0_free_popping_value(
                        adb_announcement_type0_t* _announcement_type0,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for label by property number (1)
         * @param  _announcement_type0 adb_announcement_type0_t object
         * @param env pointer to environment struct
         * @return adb_label_type0_t*
         */
        adb_label_type0_t* AXIS2_CALL
        adb_announcement_type0_get_property1(
            adb_announcement_type0_t* _announcement_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for id by property number (2)
         * @param  _announcement_type0 adb_announcement_type0_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_announcement_type0_get_property2(
            adb_announcement_type0_t* _announcement_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for type by property number (3)
         * @param  _announcement_type0 adb_announcement_type0_t object
         * @param env pointer to environment struct
         * @return adb_type_type1_t*
         */
        adb_type_type1_t* AXIS2_CALL
        adb_announcement_type0_get_property3(
            adb_announcement_type0_t* _announcement_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for priority by property number (4)
         * @param  _announcement_type0 adb_announcement_type0_t object
         * @param env pointer to environment struct
         * @return adb_priority_type0_t*
         */
        adb_priority_type0_t* AXIS2_CALL
        adb_announcement_type0_get_property4(
            adb_announcement_type0_t* _announcement_type0,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_ANNOUNCEMENT_TYPE0_H */
    

