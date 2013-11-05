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



        #ifndef ADB_DSAKEYVALUETYPE_H
        #define ADB_DSAKEYVALUETYPE_H

       /**
        * adb_DSAKeyValueType.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Nov 05, 2013 (03:44:52 EET)
        */

       /**
        *  adb_DSAKeyValueType class
        */

        
          #include "adb_DSAKeyValueTypeSequence_type0.h"
          
          #include "adb_CryptoBinary.h"
          
          #include "adb_CryptoBinary.h"
          
          #include "adb_CryptoBinary.h"
          
          #include "adb_DSAKeyValueTypeSequence_type1.h"
          

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
        

        typedef struct adb_DSAKeyValueType adb_DSAKeyValueType_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_DSAKeyValueType_t
         * @param env pointer to environment struct
         * @return newly created adb_DSAKeyValueType_t object
         */
        adb_DSAKeyValueType_t* AXIS2_CALL
        adb_DSAKeyValueType_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_DSAKeyValueType_free (
            adb_DSAKeyValueType_t* _DSAKeyValueType,
            const axutil_env_t *env);

        /**
         * Free adb_DSAKeyValueType_t object
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_DSAKeyValueType_free_obj (
            adb_DSAKeyValueType_t* _DSAKeyValueType,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        
        

        /**
         * Getter for DSAKeyValueTypeSequence_type0. 
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @return adb_DSAKeyValueTypeSequence_type0_t*
         */
        adb_DSAKeyValueTypeSequence_type0_t* AXIS2_CALL
        adb_DSAKeyValueType_get_DSAKeyValueTypeSequence_type0(
            adb_DSAKeyValueType_t* _DSAKeyValueType,
            const axutil_env_t *env);

        /**
         * Setter for DSAKeyValueTypeSequence_type0.
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @param arg_DSAKeyValueTypeSequence_type0 adb_DSAKeyValueTypeSequence_type0_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_DSAKeyValueType_set_DSAKeyValueTypeSequence_type0(
            adb_DSAKeyValueType_t* _DSAKeyValueType,
            const axutil_env_t *env,
            adb_DSAKeyValueTypeSequence_type0_t*  arg_DSAKeyValueTypeSequence_type0);

        /**
         * Resetter for DSAKeyValueTypeSequence_type0
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_DSAKeyValueType_reset_DSAKeyValueTypeSequence_type0(
            adb_DSAKeyValueType_t* _DSAKeyValueType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for G. 
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @return adb_CryptoBinary_t*
         */
        adb_CryptoBinary_t* AXIS2_CALL
        adb_DSAKeyValueType_get_G(
            adb_DSAKeyValueType_t* _DSAKeyValueType,
            const axutil_env_t *env);

        /**
         * Setter for G.
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @param arg_G adb_CryptoBinary_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_DSAKeyValueType_set_G(
            adb_DSAKeyValueType_t* _DSAKeyValueType,
            const axutil_env_t *env,
            adb_CryptoBinary_t*  arg_G);

        /**
         * Resetter for G
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_DSAKeyValueType_reset_G(
            adb_DSAKeyValueType_t* _DSAKeyValueType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for Y. 
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @return adb_CryptoBinary_t*
         */
        adb_CryptoBinary_t* AXIS2_CALL
        adb_DSAKeyValueType_get_Y(
            adb_DSAKeyValueType_t* _DSAKeyValueType,
            const axutil_env_t *env);

        /**
         * Setter for Y.
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @param arg_Y adb_CryptoBinary_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_DSAKeyValueType_set_Y(
            adb_DSAKeyValueType_t* _DSAKeyValueType,
            const axutil_env_t *env,
            adb_CryptoBinary_t*  arg_Y);

        /**
         * Resetter for Y
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_DSAKeyValueType_reset_Y(
            adb_DSAKeyValueType_t* _DSAKeyValueType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for J. 
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @return adb_CryptoBinary_t*
         */
        adb_CryptoBinary_t* AXIS2_CALL
        adb_DSAKeyValueType_get_J(
            adb_DSAKeyValueType_t* _DSAKeyValueType,
            const axutil_env_t *env);

        /**
         * Setter for J.
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @param arg_J adb_CryptoBinary_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_DSAKeyValueType_set_J(
            adb_DSAKeyValueType_t* _DSAKeyValueType,
            const axutil_env_t *env,
            adb_CryptoBinary_t*  arg_J);

        /**
         * Resetter for J
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_DSAKeyValueType_reset_J(
            adb_DSAKeyValueType_t* _DSAKeyValueType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for DSAKeyValueTypeSequence_type1. 
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @return adb_DSAKeyValueTypeSequence_type1_t*
         */
        adb_DSAKeyValueTypeSequence_type1_t* AXIS2_CALL
        adb_DSAKeyValueType_get_DSAKeyValueTypeSequence_type1(
            adb_DSAKeyValueType_t* _DSAKeyValueType,
            const axutil_env_t *env);

        /**
         * Setter for DSAKeyValueTypeSequence_type1.
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @param arg_DSAKeyValueTypeSequence_type1 adb_DSAKeyValueTypeSequence_type1_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_DSAKeyValueType_set_DSAKeyValueTypeSequence_type1(
            adb_DSAKeyValueType_t* _DSAKeyValueType,
            const axutil_env_t *env,
            adb_DSAKeyValueTypeSequence_type1_t*  arg_DSAKeyValueTypeSequence_type1);

        /**
         * Resetter for DSAKeyValueTypeSequence_type1
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_DSAKeyValueType_reset_DSAKeyValueTypeSequence_type1(
            adb_DSAKeyValueType_t* _DSAKeyValueType,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether DSAKeyValueTypeSequence_type0 is nill
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_DSAKeyValueType_is_DSAKeyValueTypeSequence_type0_nil(
                adb_DSAKeyValueType_t* _DSAKeyValueType,
                const axutil_env_t *env);


        

        /**
         * Check whether G is nill
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_DSAKeyValueType_is_G_nil(
                adb_DSAKeyValueType_t* _DSAKeyValueType,
                const axutil_env_t *env);


        

        /**
         * Check whether Y is nill
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_DSAKeyValueType_is_Y_nil(
                adb_DSAKeyValueType_t* _DSAKeyValueType,
                const axutil_env_t *env);


        

        /**
         * Check whether J is nill
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_DSAKeyValueType_is_J_nil(
                adb_DSAKeyValueType_t* _DSAKeyValueType,
                const axutil_env_t *env);


        

        /**
         * Check whether DSAKeyValueTypeSequence_type1 is nill
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_DSAKeyValueType_is_DSAKeyValueTypeSequence_type1_nil(
                adb_DSAKeyValueType_t* _DSAKeyValueType,
                const axutil_env_t *env);


        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_DSAKeyValueType_deserialize(
            adb_DSAKeyValueType_t* _DSAKeyValueType,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_DSAKeyValueType_deserialize_obj(
            adb_DSAKeyValueType_t* _DSAKeyValueType,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_DSAKeyValueType_declare_parent_namespaces(
                    adb_DSAKeyValueType_t* _DSAKeyValueType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @param DSAKeyValueType_om_node node to serialize from
         * @param DSAKeyValueType_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_DSAKeyValueType_serialize(
            adb_DSAKeyValueType_t* _DSAKeyValueType,
            const axutil_env_t *env,
            axiom_node_t* DSAKeyValueType_om_node, axiom_element_t *DSAKeyValueType_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @param DSAKeyValueType_om_node node to serialize from
         * @param DSAKeyValueType_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_DSAKeyValueType_serialize_obj(
            adb_DSAKeyValueType_t* _DSAKeyValueType,
            const axutil_env_t *env,
            axiom_node_t* DSAKeyValueType_om_node, axiom_element_t *DSAKeyValueType_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_DSAKeyValueType is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_DSAKeyValueType_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_DSAKeyValueType_t
         * @param env pointer to environment struct
         * @param _DSAKeyValueTypeSequence_type0 adb_DSAKeyValueTypeSequence_type0_t*
         * @param _G adb_CryptoBinary_t*
         * @param _Y adb_CryptoBinary_t*
         * @param _J adb_CryptoBinary_t*
         * @param _DSAKeyValueTypeSequence_type1 adb_DSAKeyValueTypeSequence_type1_t*
         * @return newly created adb_DSAKeyValueType_t object
         */
        adb_DSAKeyValueType_t* AXIS2_CALL
        adb_DSAKeyValueType_create_with_values(
            const axutil_env_t *env,
                adb_DSAKeyValueTypeSequence_type0_t* _DSAKeyValueTypeSequence_type0,
                adb_CryptoBinary_t* _G,
                adb_CryptoBinary_t* _Y,
                adb_CryptoBinary_t* _J,
                adb_DSAKeyValueTypeSequence_type1_t* _DSAKeyValueTypeSequence_type1);

        


                /**
                 * Free adb_DSAKeyValueType_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _DSAKeyValueType adb_DSAKeyValueType_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                adb_DSAKeyValueTypeSequence_type0_t* AXIS2_CALL
                adb_DSAKeyValueType_free_popping_value(
                        adb_DSAKeyValueType_t* _DSAKeyValueType,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for DSAKeyValueTypeSequence_type0 by property number (1)
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @return adb_DSAKeyValueTypeSequence_type0_t*
         */
        adb_DSAKeyValueTypeSequence_type0_t* AXIS2_CALL
        adb_DSAKeyValueType_get_property1(
            adb_DSAKeyValueType_t* _DSAKeyValueType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for G by property number (2)
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @return adb_CryptoBinary_t*
         */
        adb_CryptoBinary_t* AXIS2_CALL
        adb_DSAKeyValueType_get_property2(
            adb_DSAKeyValueType_t* _DSAKeyValueType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for Y by property number (3)
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @return adb_CryptoBinary_t*
         */
        adb_CryptoBinary_t* AXIS2_CALL
        adb_DSAKeyValueType_get_property3(
            adb_DSAKeyValueType_t* _DSAKeyValueType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for J by property number (4)
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @return adb_CryptoBinary_t*
         */
        adb_CryptoBinary_t* AXIS2_CALL
        adb_DSAKeyValueType_get_property4(
            adb_DSAKeyValueType_t* _DSAKeyValueType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for DSAKeyValueTypeSequence_type1 by property number (5)
         * @param  _DSAKeyValueType adb_DSAKeyValueType_t object
         * @param env pointer to environment struct
         * @return adb_DSAKeyValueTypeSequence_type1_t*
         */
        adb_DSAKeyValueTypeSequence_type1_t* AXIS2_CALL
        adb_DSAKeyValueType_get_property5(
            adb_DSAKeyValueType_t* _DSAKeyValueType,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_DSAKEYVALUETYPE_H */
    

