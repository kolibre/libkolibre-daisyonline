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



        #ifndef ADB_REFERENCELISTCHOICEE3_H
        #define ADB_REFERENCELISTCHOICEE3_H

       /**
        * adb_ReferenceListChoiceE3.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Nov 05, 2013 (09:21:13 EET)
        */

       /**
        *  adb_ReferenceListChoiceE3 class
        */

        
          #include "adb_ReferenceTypeE2.h"
          
          #include "adb_ReferenceTypeE2.h"
          

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
        

        typedef struct adb_ReferenceListChoiceE3 adb_ReferenceListChoiceE3_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_ReferenceListChoiceE3_t
         * @param env pointer to environment struct
         * @return newly created adb_ReferenceListChoiceE3_t object
         */
        adb_ReferenceListChoiceE3_t* AXIS2_CALL
        adb_ReferenceListChoiceE3_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _ReferenceListChoiceE3 adb_ReferenceListChoiceE3_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ReferenceListChoiceE3_free (
            adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
            const axutil_env_t *env);

        /**
         * Free adb_ReferenceListChoiceE3_t object
         * @param  _ReferenceListChoiceE3 adb_ReferenceListChoiceE3_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ReferenceListChoiceE3_free_obj (
            adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        /******** In a case of a choose among elements, the last one to set will be chooosen *********/
        

        /**
         * Getter for DataReference. 
         * @param  _ReferenceListChoiceE3 adb_ReferenceListChoiceE3_t object
         * @param env pointer to environment struct
         * @return adb_ReferenceTypeE2_t*
         */
        adb_ReferenceTypeE2_t* AXIS2_CALL
        adb_ReferenceListChoiceE3_get_DataReference(
            adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
            const axutil_env_t *env);

        /**
         * Setter for DataReference.
         * @param  _ReferenceListChoiceE3 adb_ReferenceListChoiceE3_t object
         * @param env pointer to environment struct
         * @param arg_DataReference adb_ReferenceTypeE2_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ReferenceListChoiceE3_set_DataReference(
            adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
            const axutil_env_t *env,
            adb_ReferenceTypeE2_t*  arg_DataReference);

        /**
         * Resetter for DataReference
         * @param  _ReferenceListChoiceE3 adb_ReferenceListChoiceE3_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ReferenceListChoiceE3_reset_DataReference(
            adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
            const axutil_env_t *env);

        
        

        /**
         * Getter for KeyReference. 
         * @param  _ReferenceListChoiceE3 adb_ReferenceListChoiceE3_t object
         * @param env pointer to environment struct
         * @return adb_ReferenceTypeE2_t*
         */
        adb_ReferenceTypeE2_t* AXIS2_CALL
        adb_ReferenceListChoiceE3_get_KeyReference(
            adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
            const axutil_env_t *env);

        /**
         * Setter for KeyReference.
         * @param  _ReferenceListChoiceE3 adb_ReferenceListChoiceE3_t object
         * @param env pointer to environment struct
         * @param arg_KeyReference adb_ReferenceTypeE2_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ReferenceListChoiceE3_set_KeyReference(
            adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
            const axutil_env_t *env,
            adb_ReferenceTypeE2_t*  arg_KeyReference);

        /**
         * Resetter for KeyReference
         * @param  _ReferenceListChoiceE3 adb_ReferenceListChoiceE3_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ReferenceListChoiceE3_reset_KeyReference(
            adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether DataReference is nill
         * @param  _ReferenceListChoiceE3 adb_ReferenceListChoiceE3_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_ReferenceListChoiceE3_is_DataReference_nil(
                adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
                const axutil_env_t *env);


        

        /**
         * Check whether KeyReference is nill
         * @param  _ReferenceListChoiceE3 adb_ReferenceListChoiceE3_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_ReferenceListChoiceE3_is_KeyReference_nil(
                adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
                const axutil_env_t *env);


        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _ReferenceListChoiceE3 adb_ReferenceListChoiceE3_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ReferenceListChoiceE3_deserialize(
            adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _ReferenceListChoiceE3 adb_ReferenceListChoiceE3_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ReferenceListChoiceE3_deserialize_obj(
            adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _ReferenceListChoiceE3 adb_ReferenceListChoiceE3_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_ReferenceListChoiceE3_declare_parent_namespaces(
                    adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _ReferenceListChoiceE3 adb_ReferenceListChoiceE3_t object
         * @param env pointer to environment struct
         * @param ReferenceListChoiceE3_om_node node to serialize from
         * @param ReferenceListChoiceE3_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_ReferenceListChoiceE3_serialize(
            adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
            const axutil_env_t *env,
            axiom_node_t* ReferenceListChoiceE3_om_node, axiom_element_t *ReferenceListChoiceE3_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _ReferenceListChoiceE3 adb_ReferenceListChoiceE3_t object
         * @param env pointer to environment struct
         * @param ReferenceListChoiceE3_om_node node to serialize from
         * @param ReferenceListChoiceE3_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_ReferenceListChoiceE3_serialize_obj(
            adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
            const axutil_env_t *env,
            axiom_node_t* ReferenceListChoiceE3_om_node, axiom_element_t *ReferenceListChoiceE3_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_ReferenceListChoiceE3 is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_ReferenceListChoiceE3_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_ReferenceListChoiceE3_t
         * @param env pointer to environment struct
         * @param _DataReference adb_ReferenceTypeE2_t*
         * @param _KeyReference adb_ReferenceTypeE2_t*
         * @return newly created adb_ReferenceListChoiceE3_t object
         */
        adb_ReferenceListChoiceE3_t* AXIS2_CALL
        adb_ReferenceListChoiceE3_create_with_values(
            const axutil_env_t *env,
                adb_ReferenceTypeE2_t* _DataReference,
                adb_ReferenceTypeE2_t* _KeyReference);

        


                /**
                 * Free adb_ReferenceListChoiceE3_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _ReferenceListChoiceE3 adb_ReferenceListChoiceE3_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                adb_ReferenceTypeE2_t* AXIS2_CALL
                adb_ReferenceListChoiceE3_free_popping_value(
                        adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for DataReference by property number (1)
         * @param  _ReferenceListChoiceE3 adb_ReferenceListChoiceE3_t object
         * @param env pointer to environment struct
         * @return adb_ReferenceTypeE2_t*
         */
        adb_ReferenceTypeE2_t* AXIS2_CALL
        adb_ReferenceListChoiceE3_get_property1(
            adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
            const axutil_env_t *env);

    
        

        /**
         * Getter for KeyReference by property number (2)
         * @param  _ReferenceListChoiceE3 adb_ReferenceListChoiceE3_t object
         * @param env pointer to environment struct
         * @return adb_ReferenceTypeE2_t*
         */
        adb_ReferenceTypeE2_t* AXIS2_CALL
        adb_ReferenceListChoiceE3_get_property2(
            adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_REFERENCELISTCHOICEE3_H */
    

