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



        #ifndef ADB_READINGSYSTEMATTRIBUTES_H
        #define ADB_READINGSYSTEMATTRIBUTES_H

       /**
        * adb_readingSystemAttributes.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Nov 05, 2013 (03:44:52 EET)
        */

       /**
        *  adb_readingSystemAttributes class
        */

        
          #include "adb_readingSystemAttributesChoice_type0.h"
          
          #include "adb_config_type0.h"
          

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
        

        typedef struct adb_readingSystemAttributes adb_readingSystemAttributes_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_readingSystemAttributes_t
         * @param env pointer to environment struct
         * @return newly created adb_readingSystemAttributes_t object
         */
        adb_readingSystemAttributes_t* AXIS2_CALL
        adb_readingSystemAttributes_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributes_free (
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env);

        /**
         * Free adb_readingSystemAttributes_t object
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributes_free_obj (
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        /******** Deprecated for array types, Use 'Getters and Setters for Arrays' instead ***********/
        

        /**
         * Getter for readingSystemAttributesChoice_type0. Deprecated for array types, Use adb_readingSystemAttributes_get_readingSystemAttributesChoice_type0_at instead
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @return Array of adb_readingSystemAttributesChoice_type0_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_readingSystemAttributes_get_readingSystemAttributesChoice_type0(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env);

        /**
         * Setter for readingSystemAttributesChoice_type0.Deprecated for array types, Use adb_readingSystemAttributes_set_readingSystemAttributesChoice_type0_at
         * or adb_readingSystemAttributes_add_readingSystemAttributesChoice_type0 instead.
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @param arg_readingSystemAttributesChoice_type0 Array of adb_readingSystemAttributesChoice_type0_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributes_set_readingSystemAttributesChoice_type0(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_readingSystemAttributesChoice_type0);

        /**
         * Resetter for readingSystemAttributesChoice_type0
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributes_reset_readingSystemAttributesChoice_type0(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env);

        
        

        /**
         * Getter for manufacturer. 
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_readingSystemAttributes_get_manufacturer(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env);

        /**
         * Setter for manufacturer.
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @param arg_manufacturer axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributes_set_manufacturer(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env,
            const axis2_char_t*  arg_manufacturer);

        /**
         * Resetter for manufacturer
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributes_reset_manufacturer(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env);

        
        

        /**
         * Getter for model. 
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_readingSystemAttributes_get_model(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env);

        /**
         * Setter for model.
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @param arg_model axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributes_set_model(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env,
            const axis2_char_t*  arg_model);

        /**
         * Resetter for model
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributes_reset_model(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env);

        
        

        /**
         * Getter for serialNumber. 
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_readingSystemAttributes_get_serialNumber(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env);

        /**
         * Setter for serialNumber.
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @param arg_serialNumber axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributes_set_serialNumber(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env,
            const axis2_char_t*  arg_serialNumber);

        /**
         * Resetter for serialNumber
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributes_reset_serialNumber(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env);

        
        

        /**
         * Getter for version. 
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_readingSystemAttributes_get_version(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env);

        /**
         * Setter for version.
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @param arg_version axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributes_set_version(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env,
            const axis2_char_t*  arg_version);

        /**
         * Resetter for version
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributes_reset_version(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env);

        
        

        /**
         * Getter for config. 
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @return adb_config_type0_t*
         */
        adb_config_type0_t* AXIS2_CALL
        adb_readingSystemAttributes_get_config(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env);

        /**
         * Setter for config.
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @param arg_config adb_config_type0_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributes_set_config(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env,
            adb_config_type0_t*  arg_config);

        /**
         * Resetter for config
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributes_reset_config(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
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
         * Get the ith element of readingSystemAttributesChoice_type0.
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith adb_readingSystemAttributesChoice_type0_t* of the array
         */
        adb_readingSystemAttributesChoice_type0_t* AXIS2_CALL
        adb_readingSystemAttributes_get_readingSystemAttributesChoice_type0_at(
                adb_readingSystemAttributes_t* _readingSystemAttributes,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of readingSystemAttributesChoice_type0. (If the ith already exist, it will be replaced)
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_readingSystemAttributesChoice_type0 element to set adb_readingSystemAttributesChoice_type0_t* to the array
         * @return ith adb_readingSystemAttributesChoice_type0_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributes_set_readingSystemAttributesChoice_type0_at(
                adb_readingSystemAttributes_t* _readingSystemAttributes,
                const axutil_env_t *env, int i,
                adb_readingSystemAttributesChoice_type0_t* arg_readingSystemAttributesChoice_type0);


        /**
         * Add to readingSystemAttributesChoice_type0.
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @param arg_readingSystemAttributesChoice_type0 element to add adb_readingSystemAttributesChoice_type0_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributes_add_readingSystemAttributesChoice_type0(
                adb_readingSystemAttributes_t* _readingSystemAttributes,
                const axutil_env_t *env,
                adb_readingSystemAttributesChoice_type0_t* arg_readingSystemAttributesChoice_type0);

        /**
         * Get the size of the readingSystemAttributesChoice_type0 array.
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct.
         * @return the size of the readingSystemAttributesChoice_type0 array.
         */
        int AXIS2_CALL
        adb_readingSystemAttributes_sizeof_readingSystemAttributesChoice_type0(
                    adb_readingSystemAttributes_t* _readingSystemAttributes,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of readingSystemAttributesChoice_type0.
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributes_remove_readingSystemAttributesChoice_type0_at(
                adb_readingSystemAttributes_t* _readingSystemAttributes,
                const axutil_env_t *env, int i);

        


        /******************************* Checking and Setting NIL values *********************************/
        /* Use 'Checking and Setting NIL values for Arrays' to check and set nil for individual elements */

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether readingSystemAttributesChoice_type0 is nill
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_readingSystemAttributes_is_readingSystemAttributesChoice_type0_nil(
                adb_readingSystemAttributes_t* _readingSystemAttributes,
                const axutil_env_t *env);


        

        /**
         * Check whether manufacturer is nill
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_readingSystemAttributes_is_manufacturer_nil(
                adb_readingSystemAttributes_t* _readingSystemAttributes,
                const axutil_env_t *env);


        

        /**
         * Check whether model is nill
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_readingSystemAttributes_is_model_nil(
                adb_readingSystemAttributes_t* _readingSystemAttributes,
                const axutil_env_t *env);


        

        /**
         * Check whether serialNumber is nill
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_readingSystemAttributes_is_serialNumber_nil(
                adb_readingSystemAttributes_t* _readingSystemAttributes,
                const axutil_env_t *env);


        

        /**
         * Check whether version is nill
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_readingSystemAttributes_is_version_nil(
                adb_readingSystemAttributes_t* _readingSystemAttributes,
                const axutil_env_t *env);


        

        /**
         * Check whether config is nill
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_readingSystemAttributes_is_config_nil(
                adb_readingSystemAttributes_t* _readingSystemAttributes,
                const axutil_env_t *env);


        
        /*************************** Checking and Setting 'NIL' values in Arrays *****************************/

        /**
         * NOTE: You may set this to remove specific elements in the array
         *       But you can not remove elements, if the specific property is declared to be non-nillable or sizeof(array) < minOccurs
         */
        
        /**
         * Check whether readingSystemAttributesChoice_type0 is nill at i
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_readingSystemAttributes_is_readingSystemAttributesChoice_type0_nil_at(
                adb_readingSystemAttributes_t* _readingSystemAttributes,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set readingSystemAttributesChoice_type0 to nill at i
         * @param  _readingSystemAttributes _ adb_readingSystemAttributes_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributes_set_readingSystemAttributesChoice_type0_nil_at(
                adb_readingSystemAttributes_t* _readingSystemAttributes, 
                const axutil_env_t *env, int i);

        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributes_deserialize(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributes_deserialize_obj(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_readingSystemAttributes_declare_parent_namespaces(
                    adb_readingSystemAttributes_t* _readingSystemAttributes,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @param readingSystemAttributes_om_node node to serialize from
         * @param readingSystemAttributes_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_readingSystemAttributes_serialize(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env,
            axiom_node_t* readingSystemAttributes_om_node, axiom_element_t *readingSystemAttributes_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @param readingSystemAttributes_om_node node to serialize from
         * @param readingSystemAttributes_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_readingSystemAttributes_serialize_obj(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env,
            axiom_node_t* readingSystemAttributes_om_node, axiom_element_t *readingSystemAttributes_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_readingSystemAttributes is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_readingSystemAttributes_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_readingSystemAttributes_t
         * @param env pointer to environment struct
         * @param _readingSystemAttributesChoice_type0 axutil_array_list_t*
         * @param _manufacturer axis2_char_t*
         * @param _model axis2_char_t*
         * @param _serialNumber axis2_char_t*
         * @param _version axis2_char_t*
         * @param _config adb_config_type0_t*
         * @return newly created adb_readingSystemAttributes_t object
         */
        adb_readingSystemAttributes_t* AXIS2_CALL
        adb_readingSystemAttributes_create_with_values(
            const axutil_env_t *env,
                axutil_array_list_t* _readingSystemAttributesChoice_type0,
                axis2_char_t* _manufacturer,
                axis2_char_t* _model,
                axis2_char_t* _serialNumber,
                axis2_char_t* _version,
                adb_config_type0_t* _config);

        


                /**
                 * Free adb_readingSystemAttributes_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _readingSystemAttributes adb_readingSystemAttributes_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                axutil_array_list_t* AXIS2_CALL
                adb_readingSystemAttributes_free_popping_value(
                        adb_readingSystemAttributes_t* _readingSystemAttributes,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for readingSystemAttributesChoice_type0 by property number (1)
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @return Array of adb_readingSystemAttributesChoice_type0_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_readingSystemAttributes_get_property1(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env);

    
        

        /**
         * Getter for manufacturer by property number (2)
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_readingSystemAttributes_get_property2(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env);

    
        

        /**
         * Getter for model by property number (3)
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_readingSystemAttributes_get_property3(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env);

    
        

        /**
         * Getter for serialNumber by property number (4)
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_readingSystemAttributes_get_property4(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env);

    
        

        /**
         * Getter for version by property number (5)
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_readingSystemAttributes_get_property5(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env);

    
        

        /**
         * Getter for config by property number (6)
         * @param  _readingSystemAttributes adb_readingSystemAttributes_t object
         * @param env pointer to environment struct
         * @return adb_config_type0_t*
         */
        adb_config_type0_t* AXIS2_CALL
        adb_readingSystemAttributes_get_property6(
            adb_readingSystemAttributes_t* _readingSystemAttributes,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_READINGSYSTEMATTRIBUTES_H */
    

