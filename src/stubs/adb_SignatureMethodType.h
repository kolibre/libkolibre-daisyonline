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



        #ifndef ADB_SIGNATUREMETHODTYPE_H
        #define ADB_SIGNATUREMETHODTYPE_H

       /**
        * adb_SignatureMethodType.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Nov 05, 2013 (09:21:13 EET)
        */

       /**
        *  adb_SignatureMethodType class
        */

        
          #include "adb_HMACOutputLengthType.h"
          

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
        

        typedef struct adb_SignatureMethodType adb_SignatureMethodType_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_SignatureMethodType_t
         * @param env pointer to environment struct
         * @return newly created adb_SignatureMethodType_t object
         */
        adb_SignatureMethodType_t* AXIS2_CALL
        adb_SignatureMethodType_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _SignatureMethodType adb_SignatureMethodType_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureMethodType_free (
            adb_SignatureMethodType_t* _SignatureMethodType,
            const axutil_env_t *env);

        /**
         * Free adb_SignatureMethodType_t object
         * @param  _SignatureMethodType adb_SignatureMethodType_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureMethodType_free_obj (
            adb_SignatureMethodType_t* _SignatureMethodType,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        /******** Deprecated for array types, Use 'Getters and Setters for Arrays' instead ***********/
        

        /**
         * Getter for HMACOutputLength. 
         * @param  _SignatureMethodType adb_SignatureMethodType_t object
         * @param env pointer to environment struct
         * @return adb_HMACOutputLengthType_t*
         */
        adb_HMACOutputLengthType_t* AXIS2_CALL
        adb_SignatureMethodType_get_HMACOutputLength(
            adb_SignatureMethodType_t* _SignatureMethodType,
            const axutil_env_t *env);

        /**
         * Setter for HMACOutputLength.
         * @param  _SignatureMethodType adb_SignatureMethodType_t object
         * @param env pointer to environment struct
         * @param arg_HMACOutputLength adb_HMACOutputLengthType_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureMethodType_set_HMACOutputLength(
            adb_SignatureMethodType_t* _SignatureMethodType,
            const axutil_env_t *env,
            adb_HMACOutputLengthType_t*  arg_HMACOutputLength);

        /**
         * Resetter for HMACOutputLength
         * @param  _SignatureMethodType adb_SignatureMethodType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureMethodType_reset_HMACOutputLength(
            adb_SignatureMethodType_t* _SignatureMethodType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for extraElement. Deprecated for array types, Use adb_SignatureMethodType_get_extraElement_at instead
         * @param  _SignatureMethodType adb_SignatureMethodType_t object
         * @param env pointer to environment struct
         * @return Array of axiom_node_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_SignatureMethodType_get_extraElement(
            adb_SignatureMethodType_t* _SignatureMethodType,
            const axutil_env_t *env);

        /**
         * Setter for extraElement.Deprecated for array types, Use adb_SignatureMethodType_set_extraElement_at
         * or adb_SignatureMethodType_add_extraElement instead.
         * @param  _SignatureMethodType adb_SignatureMethodType_t object
         * @param env pointer to environment struct
         * @param arg_extraElement Array of axiom_node_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureMethodType_set_extraElement(
            adb_SignatureMethodType_t* _SignatureMethodType,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_extraElement);

        /**
         * Resetter for extraElement
         * @param  _SignatureMethodType adb_SignatureMethodType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureMethodType_reset_extraElement(
            adb_SignatureMethodType_t* _SignatureMethodType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for Algorithm. 
         * @param  _SignatureMethodType adb_SignatureMethodType_t object
         * @param env pointer to environment struct
         * @return axutil_uri_t*
         */
        axutil_uri_t* AXIS2_CALL
        adb_SignatureMethodType_get_Algorithm(
            adb_SignatureMethodType_t* _SignatureMethodType,
            const axutil_env_t *env);

        /**
         * Setter for Algorithm.
         * @param  _SignatureMethodType adb_SignatureMethodType_t object
         * @param env pointer to environment struct
         * @param arg_Algorithm axutil_uri_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureMethodType_set_Algorithm(
            adb_SignatureMethodType_t* _SignatureMethodType,
            const axutil_env_t *env,
            axutil_uri_t*  arg_Algorithm);

        /**
         * Resetter for Algorithm
         * @param  _SignatureMethodType adb_SignatureMethodType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureMethodType_reset_Algorithm(
            adb_SignatureMethodType_t* _SignatureMethodType,
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
         * Get the ith element of extraElement.
         * @param  _SignatureMethodType adb_SignatureMethodType_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith axiom_node_t* of the array
         */
        axiom_node_t* AXIS2_CALL
        adb_SignatureMethodType_get_extraElement_at(
                adb_SignatureMethodType_t* _SignatureMethodType,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of extraElement. (If the ith already exist, it will be replaced)
         * @param  _SignatureMethodType adb_SignatureMethodType_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_extraElement element to set axiom_node_t* to the array
         * @return ith axiom_node_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureMethodType_set_extraElement_at(
                adb_SignatureMethodType_t* _SignatureMethodType,
                const axutil_env_t *env, int i,
                axiom_node_t* arg_extraElement);


        /**
         * Add to extraElement.
         * @param  _SignatureMethodType adb_SignatureMethodType_t object
         * @param env pointer to environment struct
         * @param arg_extraElement element to add axiom_node_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureMethodType_add_extraElement(
                adb_SignatureMethodType_t* _SignatureMethodType,
                const axutil_env_t *env,
                axiom_node_t* arg_extraElement);

        /**
         * Get the size of the extraElement array.
         * @param  _SignatureMethodType adb_SignatureMethodType_t object
         * @param env pointer to environment struct.
         * @return the size of the extraElement array.
         */
        int AXIS2_CALL
        adb_SignatureMethodType_sizeof_extraElement(
                    adb_SignatureMethodType_t* _SignatureMethodType,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of extraElement.
         * @param  _SignatureMethodType adb_SignatureMethodType_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureMethodType_remove_extraElement_at(
                adb_SignatureMethodType_t* _SignatureMethodType,
                const axutil_env_t *env, int i);

        


        /******************************* Checking and Setting NIL values *********************************/
        /* Use 'Checking and Setting NIL values for Arrays' to check and set nil for individual elements */

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether HMACOutputLength is nill
         * @param  _SignatureMethodType adb_SignatureMethodType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_SignatureMethodType_is_HMACOutputLength_nil(
                adb_SignatureMethodType_t* _SignatureMethodType,
                const axutil_env_t *env);


        

        /**
         * Check whether extraElement is nill
         * @param  _SignatureMethodType adb_SignatureMethodType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_SignatureMethodType_is_extraElement_nil(
                adb_SignatureMethodType_t* _SignatureMethodType,
                const axutil_env_t *env);


        

        /**
         * Check whether Algorithm is nill
         * @param  _SignatureMethodType adb_SignatureMethodType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_SignatureMethodType_is_Algorithm_nil(
                adb_SignatureMethodType_t* _SignatureMethodType,
                const axutil_env_t *env);


        
        /*************************** Checking and Setting 'NIL' values in Arrays *****************************/

        /**
         * NOTE: You may set this to remove specific elements in the array
         *       But you can not remove elements, if the specific property is declared to be non-nillable or sizeof(array) < minOccurs
         */
        
        /**
         * Check whether extraElement is nill at i
         * @param  _SignatureMethodType adb_SignatureMethodType_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_SignatureMethodType_is_extraElement_nil_at(
                adb_SignatureMethodType_t* _SignatureMethodType,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set extraElement to nill at i
         * @param  _SignatureMethodType _ adb_SignatureMethodType_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureMethodType_set_extraElement_nil_at(
                adb_SignatureMethodType_t* _SignatureMethodType, 
                const axutil_env_t *env, int i);

        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _SignatureMethodType adb_SignatureMethodType_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureMethodType_deserialize(
            adb_SignatureMethodType_t* _SignatureMethodType,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _SignatureMethodType adb_SignatureMethodType_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_SignatureMethodType_deserialize_obj(
            adb_SignatureMethodType_t* _SignatureMethodType,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _SignatureMethodType adb_SignatureMethodType_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_SignatureMethodType_declare_parent_namespaces(
                    adb_SignatureMethodType_t* _SignatureMethodType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _SignatureMethodType adb_SignatureMethodType_t object
         * @param env pointer to environment struct
         * @param SignatureMethodType_om_node node to serialize from
         * @param SignatureMethodType_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_SignatureMethodType_serialize(
            adb_SignatureMethodType_t* _SignatureMethodType,
            const axutil_env_t *env,
            axiom_node_t* SignatureMethodType_om_node, axiom_element_t *SignatureMethodType_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _SignatureMethodType adb_SignatureMethodType_t object
         * @param env pointer to environment struct
         * @param SignatureMethodType_om_node node to serialize from
         * @param SignatureMethodType_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_SignatureMethodType_serialize_obj(
            adb_SignatureMethodType_t* _SignatureMethodType,
            const axutil_env_t *env,
            axiom_node_t* SignatureMethodType_om_node, axiom_element_t *SignatureMethodType_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_SignatureMethodType is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_SignatureMethodType_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_SignatureMethodType_t
         * @param env pointer to environment struct
         * @param _HMACOutputLength adb_HMACOutputLengthType_t*
         * @param _extraElement axutil_array_list_t*
         * @param _Algorithm axutil_uri_t*
         * @return newly created adb_SignatureMethodType_t object
         */
        adb_SignatureMethodType_t* AXIS2_CALL
        adb_SignatureMethodType_create_with_values(
            const axutil_env_t *env,
                adb_HMACOutputLengthType_t* _HMACOutputLength,
                axutil_array_list_t* _extraElement,
                axutil_uri_t* _Algorithm);

        


                /**
                 * Free adb_SignatureMethodType_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _SignatureMethodType adb_SignatureMethodType_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                adb_HMACOutputLengthType_t* AXIS2_CALL
                adb_SignatureMethodType_free_popping_value(
                        adb_SignatureMethodType_t* _SignatureMethodType,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for HMACOutputLength by property number (1)
         * @param  _SignatureMethodType adb_SignatureMethodType_t object
         * @param env pointer to environment struct
         * @return adb_HMACOutputLengthType_t*
         */
        adb_HMACOutputLengthType_t* AXIS2_CALL
        adb_SignatureMethodType_get_property1(
            adb_SignatureMethodType_t* _SignatureMethodType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for extraElement by property number (2)
         * @param  _SignatureMethodType adb_SignatureMethodType_t object
         * @param env pointer to environment struct
         * @return Array of axiom_node_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_SignatureMethodType_get_property2(
            adb_SignatureMethodType_t* _SignatureMethodType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for Algorithm by property number (3)
         * @param  _SignatureMethodType adb_SignatureMethodType_t object
         * @param env pointer to environment struct
         * @return axutil_uri_t*
         */
        axutil_uri_t* AXIS2_CALL
        adb_SignatureMethodType_get_property3(
            adb_SignatureMethodType_t* _SignatureMethodType,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_SIGNATUREMETHODTYPE_H */
    

