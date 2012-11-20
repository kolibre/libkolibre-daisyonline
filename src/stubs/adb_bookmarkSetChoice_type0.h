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



        #ifndef ADB_BOOKMARKSETCHOICE_TYPE0_H
        #define ADB_BOOKMARKSETCHOICE_TYPE0_H

       /**
        * adb_bookmarkSetChoice_type0.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Oct 19, 2012 (02:20:52 EEST)
        */

       /**
        *  adb_bookmarkSetChoice_type0 class
        */

        
          #include "adb_bookmark_type0.h"
          
          #include "adb_hilite_type0.h"
          

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
        

        typedef struct adb_bookmarkSetChoice_type0 adb_bookmarkSetChoice_type0_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_bookmarkSetChoice_type0_t
         * @param env pointer to environment struct
         * @return newly created adb_bookmarkSetChoice_type0_t object
         */
        adb_bookmarkSetChoice_type0_t* AXIS2_CALL
        adb_bookmarkSetChoice_type0_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _bookmarkSetChoice_type0 adb_bookmarkSetChoice_type0_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkSetChoice_type0_free (
            adb_bookmarkSetChoice_type0_t* _bookmarkSetChoice_type0,
            const axutil_env_t *env);

        /**
         * Free adb_bookmarkSetChoice_type0_t object
         * @param  _bookmarkSetChoice_type0 adb_bookmarkSetChoice_type0_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkSetChoice_type0_free_obj (
            adb_bookmarkSetChoice_type0_t* _bookmarkSetChoice_type0,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        /******** In a case of a choose among elements, the last one to set will be chooosen *********/
        

        /**
         * Getter for bookmark. 
         * @param  _bookmarkSetChoice_type0 adb_bookmarkSetChoice_type0_t object
         * @param env pointer to environment struct
         * @return adb_bookmark_type0_t*
         */
        adb_bookmark_type0_t* AXIS2_CALL
        adb_bookmarkSetChoice_type0_get_bookmark(
            adb_bookmarkSetChoice_type0_t* _bookmarkSetChoice_type0,
            const axutil_env_t *env);

        /**
         * Setter for bookmark.
         * @param  _bookmarkSetChoice_type0 adb_bookmarkSetChoice_type0_t object
         * @param env pointer to environment struct
         * @param arg_bookmark adb_bookmark_type0_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkSetChoice_type0_set_bookmark(
            adb_bookmarkSetChoice_type0_t* _bookmarkSetChoice_type0,
            const axutil_env_t *env,
            adb_bookmark_type0_t*  arg_bookmark);

        /**
         * Resetter for bookmark
         * @param  _bookmarkSetChoice_type0 adb_bookmarkSetChoice_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkSetChoice_type0_reset_bookmark(
            adb_bookmarkSetChoice_type0_t* _bookmarkSetChoice_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for hilite. 
         * @param  _bookmarkSetChoice_type0 adb_bookmarkSetChoice_type0_t object
         * @param env pointer to environment struct
         * @return adb_hilite_type0_t*
         */
        adb_hilite_type0_t* AXIS2_CALL
        adb_bookmarkSetChoice_type0_get_hilite(
            adb_bookmarkSetChoice_type0_t* _bookmarkSetChoice_type0,
            const axutil_env_t *env);

        /**
         * Setter for hilite.
         * @param  _bookmarkSetChoice_type0 adb_bookmarkSetChoice_type0_t object
         * @param env pointer to environment struct
         * @param arg_hilite adb_hilite_type0_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkSetChoice_type0_set_hilite(
            adb_bookmarkSetChoice_type0_t* _bookmarkSetChoice_type0,
            const axutil_env_t *env,
            adb_hilite_type0_t*  arg_hilite);

        /**
         * Resetter for hilite
         * @param  _bookmarkSetChoice_type0 adb_bookmarkSetChoice_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkSetChoice_type0_reset_hilite(
            adb_bookmarkSetChoice_type0_t* _bookmarkSetChoice_type0,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether bookmark is nill
         * @param  _bookmarkSetChoice_type0 adb_bookmarkSetChoice_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_bookmarkSetChoice_type0_is_bookmark_nil(
                adb_bookmarkSetChoice_type0_t* _bookmarkSetChoice_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether hilite is nill
         * @param  _bookmarkSetChoice_type0 adb_bookmarkSetChoice_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_bookmarkSetChoice_type0_is_hilite_nil(
                adb_bookmarkSetChoice_type0_t* _bookmarkSetChoice_type0,
                const axutil_env_t *env);


        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _bookmarkSetChoice_type0 adb_bookmarkSetChoice_type0_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkSetChoice_type0_deserialize(
            adb_bookmarkSetChoice_type0_t* _bookmarkSetChoice_type0,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _bookmarkSetChoice_type0 adb_bookmarkSetChoice_type0_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_bookmarkSetChoice_type0_deserialize_obj(
            adb_bookmarkSetChoice_type0_t* _bookmarkSetChoice_type0,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _bookmarkSetChoice_type0 adb_bookmarkSetChoice_type0_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_bookmarkSetChoice_type0_declare_parent_namespaces(
                    adb_bookmarkSetChoice_type0_t* _bookmarkSetChoice_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _bookmarkSetChoice_type0 adb_bookmarkSetChoice_type0_t object
         * @param env pointer to environment struct
         * @param bookmarkSetChoice_type0_om_node node to serialize from
         * @param bookmarkSetChoice_type0_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_bookmarkSetChoice_type0_serialize(
            adb_bookmarkSetChoice_type0_t* _bookmarkSetChoice_type0,
            const axutil_env_t *env,
            axiom_node_t* bookmarkSetChoice_type0_om_node, axiom_element_t *bookmarkSetChoice_type0_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _bookmarkSetChoice_type0 adb_bookmarkSetChoice_type0_t object
         * @param env pointer to environment struct
         * @param bookmarkSetChoice_type0_om_node node to serialize from
         * @param bookmarkSetChoice_type0_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_bookmarkSetChoice_type0_serialize_obj(
            adb_bookmarkSetChoice_type0_t* _bookmarkSetChoice_type0,
            const axutil_env_t *env,
            axiom_node_t* bookmarkSetChoice_type0_om_node, axiom_element_t *bookmarkSetChoice_type0_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_bookmarkSetChoice_type0 is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_bookmarkSetChoice_type0_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_bookmarkSetChoice_type0_t
         * @param env pointer to environment struct
         * @param _bookmark adb_bookmark_type0_t*
         * @param _hilite adb_hilite_type0_t*
         * @return newly created adb_bookmarkSetChoice_type0_t object
         */
        adb_bookmarkSetChoice_type0_t* AXIS2_CALL
        adb_bookmarkSetChoice_type0_create_with_values(
            const axutil_env_t *env,
                adb_bookmark_type0_t* _bookmark,
                adb_hilite_type0_t* _hilite);

        


                /**
                 * Free adb_bookmarkSetChoice_type0_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _bookmarkSetChoice_type0 adb_bookmarkSetChoice_type0_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                adb_bookmark_type0_t* AXIS2_CALL
                adb_bookmarkSetChoice_type0_free_popping_value(
                        adb_bookmarkSetChoice_type0_t* _bookmarkSetChoice_type0,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for bookmark by property number (1)
         * @param  _bookmarkSetChoice_type0 adb_bookmarkSetChoice_type0_t object
         * @param env pointer to environment struct
         * @return adb_bookmark_type0_t*
         */
        adb_bookmark_type0_t* AXIS2_CALL
        adb_bookmarkSetChoice_type0_get_property1(
            adb_bookmarkSetChoice_type0_t* _bookmarkSetChoice_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for hilite by property number (2)
         * @param  _bookmarkSetChoice_type0 adb_bookmarkSetChoice_type0_t object
         * @param env pointer to environment struct
         * @return adb_hilite_type0_t*
         */
        adb_hilite_type0_t* AXIS2_CALL
        adb_bookmarkSetChoice_type0_get_property2(
            adb_bookmarkSetChoice_type0_t* _bookmarkSetChoice_type0,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_BOOKMARKSETCHOICE_TYPE0_H */
    

