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



        #ifndef ADB_HILITE_TYPE0_H
        #define ADB_HILITE_TYPE0_H

       /**
        * adb_hilite_type0.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Nov 05, 2013 (09:21:13 EET)
        */

       /**
        *  adb_hilite_type0 class
        */

        
          #include "adb_hiliteStart_type0.h"
          
          #include "adb_hiliteEnd_type0.h"
          
          #include "adb_note_type0.h"
          

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
        

        typedef struct adb_hilite_type0 adb_hilite_type0_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_hilite_type0_t
         * @param env pointer to environment struct
         * @return newly created adb_hilite_type0_t object
         */
        adb_hilite_type0_t* AXIS2_CALL
        adb_hilite_type0_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _hilite_type0 adb_hilite_type0_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_hilite_type0_free (
            adb_hilite_type0_t* _hilite_type0,
            const axutil_env_t *env);

        /**
         * Free adb_hilite_type0_t object
         * @param  _hilite_type0 adb_hilite_type0_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_hilite_type0_free_obj (
            adb_hilite_type0_t* _hilite_type0,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        
        

        /**
         * Getter for hiliteStart. 
         * @param  _hilite_type0 adb_hilite_type0_t object
         * @param env pointer to environment struct
         * @return adb_hiliteStart_type0_t*
         */
        adb_hiliteStart_type0_t* AXIS2_CALL
        adb_hilite_type0_get_hiliteStart(
            adb_hilite_type0_t* _hilite_type0,
            const axutil_env_t *env);

        /**
         * Setter for hiliteStart.
         * @param  _hilite_type0 adb_hilite_type0_t object
         * @param env pointer to environment struct
         * @param arg_hiliteStart adb_hiliteStart_type0_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_hilite_type0_set_hiliteStart(
            adb_hilite_type0_t* _hilite_type0,
            const axutil_env_t *env,
            adb_hiliteStart_type0_t*  arg_hiliteStart);

        /**
         * Resetter for hiliteStart
         * @param  _hilite_type0 adb_hilite_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_hilite_type0_reset_hiliteStart(
            adb_hilite_type0_t* _hilite_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for hiliteEnd. 
         * @param  _hilite_type0 adb_hilite_type0_t object
         * @param env pointer to environment struct
         * @return adb_hiliteEnd_type0_t*
         */
        adb_hiliteEnd_type0_t* AXIS2_CALL
        adb_hilite_type0_get_hiliteEnd(
            adb_hilite_type0_t* _hilite_type0,
            const axutil_env_t *env);

        /**
         * Setter for hiliteEnd.
         * @param  _hilite_type0 adb_hilite_type0_t object
         * @param env pointer to environment struct
         * @param arg_hiliteEnd adb_hiliteEnd_type0_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_hilite_type0_set_hiliteEnd(
            adb_hilite_type0_t* _hilite_type0,
            const axutil_env_t *env,
            adb_hiliteEnd_type0_t*  arg_hiliteEnd);

        /**
         * Resetter for hiliteEnd
         * @param  _hilite_type0 adb_hilite_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_hilite_type0_reset_hiliteEnd(
            adb_hilite_type0_t* _hilite_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for note. 
         * @param  _hilite_type0 adb_hilite_type0_t object
         * @param env pointer to environment struct
         * @return adb_note_type0_t*
         */
        adb_note_type0_t* AXIS2_CALL
        adb_hilite_type0_get_note(
            adb_hilite_type0_t* _hilite_type0,
            const axutil_env_t *env);

        /**
         * Setter for note.
         * @param  _hilite_type0 adb_hilite_type0_t object
         * @param env pointer to environment struct
         * @param arg_note adb_note_type0_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_hilite_type0_set_note(
            adb_hilite_type0_t* _hilite_type0,
            const axutil_env_t *env,
            adb_note_type0_t*  arg_note);

        /**
         * Resetter for note
         * @param  _hilite_type0 adb_hilite_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_hilite_type0_reset_note(
            adb_hilite_type0_t* _hilite_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for label. 
         * @param  _hilite_type0 adb_hilite_type0_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_hilite_type0_get_label(
            adb_hilite_type0_t* _hilite_type0,
            const axutil_env_t *env);

        /**
         * Setter for label.
         * @param  _hilite_type0 adb_hilite_type0_t object
         * @param env pointer to environment struct
         * @param arg_label axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_hilite_type0_set_label(
            adb_hilite_type0_t* _hilite_type0,
            const axutil_env_t *env,
            const axis2_char_t*  arg_label);

        /**
         * Resetter for label
         * @param  _hilite_type0 adb_hilite_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_hilite_type0_reset_label(
            adb_hilite_type0_t* _hilite_type0,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether hiliteStart is nill
         * @param  _hilite_type0 adb_hilite_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_hilite_type0_is_hiliteStart_nil(
                adb_hilite_type0_t* _hilite_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether hiliteEnd is nill
         * @param  _hilite_type0 adb_hilite_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_hilite_type0_is_hiliteEnd_nil(
                adb_hilite_type0_t* _hilite_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether note is nill
         * @param  _hilite_type0 adb_hilite_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_hilite_type0_is_note_nil(
                adb_hilite_type0_t* _hilite_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether label is nill
         * @param  _hilite_type0 adb_hilite_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_hilite_type0_is_label_nil(
                adb_hilite_type0_t* _hilite_type0,
                const axutil_env_t *env);


        
        /**
         * Set label to nill (currently the same as reset)
         * @param  _hilite_type0 adb_hilite_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_hilite_type0_set_label_nil(
                adb_hilite_type0_t* _hilite_type0,
                const axutil_env_t *env);
        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _hilite_type0 adb_hilite_type0_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_hilite_type0_deserialize(
            adb_hilite_type0_t* _hilite_type0,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _hilite_type0 adb_hilite_type0_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_hilite_type0_deserialize_obj(
            adb_hilite_type0_t* _hilite_type0,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _hilite_type0 adb_hilite_type0_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_hilite_type0_declare_parent_namespaces(
                    adb_hilite_type0_t* _hilite_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _hilite_type0 adb_hilite_type0_t object
         * @param env pointer to environment struct
         * @param hilite_type0_om_node node to serialize from
         * @param hilite_type0_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_hilite_type0_serialize(
            adb_hilite_type0_t* _hilite_type0,
            const axutil_env_t *env,
            axiom_node_t* hilite_type0_om_node, axiom_element_t *hilite_type0_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _hilite_type0 adb_hilite_type0_t object
         * @param env pointer to environment struct
         * @param hilite_type0_om_node node to serialize from
         * @param hilite_type0_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_hilite_type0_serialize_obj(
            adb_hilite_type0_t* _hilite_type0,
            const axutil_env_t *env,
            axiom_node_t* hilite_type0_om_node, axiom_element_t *hilite_type0_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_hilite_type0 is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_hilite_type0_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_hilite_type0_t
         * @param env pointer to environment struct
         * @param _hiliteStart adb_hiliteStart_type0_t*
         * @param _hiliteEnd adb_hiliteEnd_type0_t*
         * @param _note adb_note_type0_t*
         * @param _label axis2_char_t*
         * @return newly created adb_hilite_type0_t object
         */
        adb_hilite_type0_t* AXIS2_CALL
        adb_hilite_type0_create_with_values(
            const axutil_env_t *env,
                adb_hiliteStart_type0_t* _hiliteStart,
                adb_hiliteEnd_type0_t* _hiliteEnd,
                adb_note_type0_t* _note,
                axis2_char_t* _label);

        


                /**
                 * Free adb_hilite_type0_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _hilite_type0 adb_hilite_type0_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                adb_hiliteStart_type0_t* AXIS2_CALL
                adb_hilite_type0_free_popping_value(
                        adb_hilite_type0_t* _hilite_type0,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for hiliteStart by property number (1)
         * @param  _hilite_type0 adb_hilite_type0_t object
         * @param env pointer to environment struct
         * @return adb_hiliteStart_type0_t*
         */
        adb_hiliteStart_type0_t* AXIS2_CALL
        adb_hilite_type0_get_property1(
            adb_hilite_type0_t* _hilite_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for hiliteEnd by property number (2)
         * @param  _hilite_type0 adb_hilite_type0_t object
         * @param env pointer to environment struct
         * @return adb_hiliteEnd_type0_t*
         */
        adb_hiliteEnd_type0_t* AXIS2_CALL
        adb_hilite_type0_get_property2(
            adb_hilite_type0_t* _hilite_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for note by property number (3)
         * @param  _hilite_type0 adb_hilite_type0_t object
         * @param env pointer to environment struct
         * @return adb_note_type0_t*
         */
        adb_note_type0_t* AXIS2_CALL
        adb_hilite_type0_get_property3(
            adb_hilite_type0_t* _hilite_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for label by property number (4)
         * @param  _hilite_type0 adb_hilite_type0_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_hilite_type0_get_property4(
            adb_hilite_type0_t* _hilite_type0,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_HILITE_TYPE0_H */
    

