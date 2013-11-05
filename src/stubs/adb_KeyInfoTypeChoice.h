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



        #ifndef ADB_KEYINFOTYPECHOICE_H
        #define ADB_KEYINFOTYPECHOICE_H

       /**
        * adb_KeyInfoTypeChoice.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Nov 05, 2013 (03:44:52 EET)
        */

       /**
        *  adb_KeyInfoTypeChoice class
        */

        
          #include "adb_KeyValueType.h"
          
          #include "adb_RetrievalMethodType.h"
          
          #include "adb_X509DataType.h"
          
          #include "adb_PGPDataType.h"
          
          #include "adb_SPKIDataType.h"
          

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
        

        typedef struct adb_KeyInfoTypeChoice adb_KeyInfoTypeChoice_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_KeyInfoTypeChoice_t
         * @param env pointer to environment struct
         * @return newly created adb_KeyInfoTypeChoice_t object
         */
        adb_KeyInfoTypeChoice_t* AXIS2_CALL
        adb_KeyInfoTypeChoice_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyInfoTypeChoice_free (
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env);

        /**
         * Free adb_KeyInfoTypeChoice_t object
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyInfoTypeChoice_free_obj (
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        /******** In a case of a choose among elements, the last one to set will be chooosen *********/
        

        /**
         * Getter for KeyName. 
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_KeyInfoTypeChoice_get_KeyName(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env);

        /**
         * Setter for KeyName.
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @param arg_KeyName axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyInfoTypeChoice_set_KeyName(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env,
            const axis2_char_t*  arg_KeyName);

        /**
         * Resetter for KeyName
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyInfoTypeChoice_reset_KeyName(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env);

        
        

        /**
         * Getter for KeyValue. 
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return adb_KeyValueType_t*
         */
        adb_KeyValueType_t* AXIS2_CALL
        adb_KeyInfoTypeChoice_get_KeyValue(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env);

        /**
         * Setter for KeyValue.
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @param arg_KeyValue adb_KeyValueType_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyInfoTypeChoice_set_KeyValue(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env,
            adb_KeyValueType_t*  arg_KeyValue);

        /**
         * Resetter for KeyValue
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyInfoTypeChoice_reset_KeyValue(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env);

        
        

        /**
         * Getter for RetrievalMethod. 
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return adb_RetrievalMethodType_t*
         */
        adb_RetrievalMethodType_t* AXIS2_CALL
        adb_KeyInfoTypeChoice_get_RetrievalMethod(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env);

        /**
         * Setter for RetrievalMethod.
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @param arg_RetrievalMethod adb_RetrievalMethodType_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyInfoTypeChoice_set_RetrievalMethod(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env,
            adb_RetrievalMethodType_t*  arg_RetrievalMethod);

        /**
         * Resetter for RetrievalMethod
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyInfoTypeChoice_reset_RetrievalMethod(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env);

        
        

        /**
         * Getter for X509Data. 
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return adb_X509DataType_t*
         */
        adb_X509DataType_t* AXIS2_CALL
        adb_KeyInfoTypeChoice_get_X509Data(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env);

        /**
         * Setter for X509Data.
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @param arg_X509Data adb_X509DataType_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyInfoTypeChoice_set_X509Data(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env,
            adb_X509DataType_t*  arg_X509Data);

        /**
         * Resetter for X509Data
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyInfoTypeChoice_reset_X509Data(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env);

        
        

        /**
         * Getter for PGPData. 
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return adb_PGPDataType_t*
         */
        adb_PGPDataType_t* AXIS2_CALL
        adb_KeyInfoTypeChoice_get_PGPData(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env);

        /**
         * Setter for PGPData.
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @param arg_PGPData adb_PGPDataType_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyInfoTypeChoice_set_PGPData(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env,
            adb_PGPDataType_t*  arg_PGPData);

        /**
         * Resetter for PGPData
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyInfoTypeChoice_reset_PGPData(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env);

        
        

        /**
         * Getter for SPKIData. 
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return adb_SPKIDataType_t*
         */
        adb_SPKIDataType_t* AXIS2_CALL
        adb_KeyInfoTypeChoice_get_SPKIData(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env);

        /**
         * Setter for SPKIData.
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @param arg_SPKIData adb_SPKIDataType_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyInfoTypeChoice_set_SPKIData(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env,
            adb_SPKIDataType_t*  arg_SPKIData);

        /**
         * Resetter for SPKIData
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyInfoTypeChoice_reset_SPKIData(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env);

        
        

        /**
         * Getter for MgmtData. 
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_KeyInfoTypeChoice_get_MgmtData(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env);

        /**
         * Setter for MgmtData.
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @param arg_MgmtData axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyInfoTypeChoice_set_MgmtData(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env,
            const axis2_char_t*  arg_MgmtData);

        /**
         * Resetter for MgmtData
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyInfoTypeChoice_reset_MgmtData(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env);

        
        

        /**
         * Getter for extraElement. 
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return axiom_node_t*
         */
        axiom_node_t* AXIS2_CALL
        adb_KeyInfoTypeChoice_get_extraElement(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env);

        /**
         * Setter for extraElement.
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @param arg_extraElement axiom_node_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyInfoTypeChoice_set_extraElement(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env,
            axiom_node_t*  arg_extraElement);

        /**
         * Resetter for extraElement
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyInfoTypeChoice_reset_extraElement(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether KeyName is nill
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_KeyInfoTypeChoice_is_KeyName_nil(
                adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                const axutil_env_t *env);


        

        /**
         * Check whether KeyValue is nill
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_KeyInfoTypeChoice_is_KeyValue_nil(
                adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                const axutil_env_t *env);


        

        /**
         * Check whether RetrievalMethod is nill
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_KeyInfoTypeChoice_is_RetrievalMethod_nil(
                adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                const axutil_env_t *env);


        

        /**
         * Check whether X509Data is nill
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_KeyInfoTypeChoice_is_X509Data_nil(
                adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                const axutil_env_t *env);


        

        /**
         * Check whether PGPData is nill
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_KeyInfoTypeChoice_is_PGPData_nil(
                adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                const axutil_env_t *env);


        

        /**
         * Check whether SPKIData is nill
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_KeyInfoTypeChoice_is_SPKIData_nil(
                adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                const axutil_env_t *env);


        

        /**
         * Check whether MgmtData is nill
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_KeyInfoTypeChoice_is_MgmtData_nil(
                adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                const axutil_env_t *env);


        

        /**
         * Check whether extraElement is nill
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_KeyInfoTypeChoice_is_extraElement_nil(
                adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                const axutil_env_t *env);


        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyInfoTypeChoice_deserialize(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_KeyInfoTypeChoice_deserialize_obj(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_KeyInfoTypeChoice_declare_parent_namespaces(
                    adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @param KeyInfoTypeChoice_om_node node to serialize from
         * @param KeyInfoTypeChoice_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_KeyInfoTypeChoice_serialize(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env,
            axiom_node_t* KeyInfoTypeChoice_om_node, axiom_element_t *KeyInfoTypeChoice_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @param KeyInfoTypeChoice_om_node node to serialize from
         * @param KeyInfoTypeChoice_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_KeyInfoTypeChoice_serialize_obj(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env,
            axiom_node_t* KeyInfoTypeChoice_om_node, axiom_element_t *KeyInfoTypeChoice_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_KeyInfoTypeChoice is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_KeyInfoTypeChoice_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_KeyInfoTypeChoice_t
         * @param env pointer to environment struct
         * @param _KeyName axis2_char_t*
         * @param _KeyValue adb_KeyValueType_t*
         * @param _RetrievalMethod adb_RetrievalMethodType_t*
         * @param _X509Data adb_X509DataType_t*
         * @param _PGPData adb_PGPDataType_t*
         * @param _SPKIData adb_SPKIDataType_t*
         * @param _MgmtData axis2_char_t*
         * @param _extraElement axiom_node_t*
         * @return newly created adb_KeyInfoTypeChoice_t object
         */
        adb_KeyInfoTypeChoice_t* AXIS2_CALL
        adb_KeyInfoTypeChoice_create_with_values(
            const axutil_env_t *env,
                axis2_char_t* _KeyName,
                adb_KeyValueType_t* _KeyValue,
                adb_RetrievalMethodType_t* _RetrievalMethod,
                adb_X509DataType_t* _X509Data,
                adb_PGPDataType_t* _PGPData,
                adb_SPKIDataType_t* _SPKIData,
                axis2_char_t* _MgmtData,
                axiom_node_t* _extraElement);

        


                /**
                 * Free adb_KeyInfoTypeChoice_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                axis2_char_t* AXIS2_CALL
                adb_KeyInfoTypeChoice_free_popping_value(
                        adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for KeyName by property number (1)
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_KeyInfoTypeChoice_get_property1(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env);

    
        

        /**
         * Getter for KeyValue by property number (2)
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return adb_KeyValueType_t*
         */
        adb_KeyValueType_t* AXIS2_CALL
        adb_KeyInfoTypeChoice_get_property2(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env);

    
        

        /**
         * Getter for RetrievalMethod by property number (3)
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return adb_RetrievalMethodType_t*
         */
        adb_RetrievalMethodType_t* AXIS2_CALL
        adb_KeyInfoTypeChoice_get_property3(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env);

    
        

        /**
         * Getter for X509Data by property number (4)
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return adb_X509DataType_t*
         */
        adb_X509DataType_t* AXIS2_CALL
        adb_KeyInfoTypeChoice_get_property4(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env);

    
        

        /**
         * Getter for PGPData by property number (5)
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return adb_PGPDataType_t*
         */
        adb_PGPDataType_t* AXIS2_CALL
        adb_KeyInfoTypeChoice_get_property5(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env);

    
        

        /**
         * Getter for SPKIData by property number (6)
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return adb_SPKIDataType_t*
         */
        adb_SPKIDataType_t* AXIS2_CALL
        adb_KeyInfoTypeChoice_get_property6(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env);

    
        

        /**
         * Getter for MgmtData by property number (7)
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_KeyInfoTypeChoice_get_property7(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env);

    
        

        /**
         * Getter for extraElement by property number (8)
         * @param  _KeyInfoTypeChoice adb_KeyInfoTypeChoice_t object
         * @param env pointer to environment struct
         * @return axiom_node_t*
         */
        axiom_node_t* AXIS2_CALL
        adb_KeyInfoTypeChoice_get_property8(
            adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_KEYINFOTYPECHOICE_H */
    

