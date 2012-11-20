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



        #ifndef ADB_ENCRYPTEDDATATYPE_H
        #define ADB_ENCRYPTEDDATATYPE_H

       /**
        * adb_EncryptedDataType.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Oct 19, 2012 (02:20:52 EEST)
        */

       /**
        *  adb_EncryptedDataType class
        */

        
          #include "adb_EncryptionMethodType.h"
          
          #include "adb_KeyInfoType.h"
          
          #include "adb_CipherDataType.h"
          
          #include "adb_EncryptionPropertiesType.h"
          

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
        

        typedef struct adb_EncryptedDataType adb_EncryptedDataType_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_EncryptedDataType_t
         * @param env pointer to environment struct
         * @return newly created adb_EncryptedDataType_t object
         */
        adb_EncryptedDataType_t* AXIS2_CALL
        adb_EncryptedDataType_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _EncryptedDataType adb_EncryptedDataType_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptedDataType_free (
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env);

        /**
         * Free adb_EncryptedDataType_t object
         * @param  _EncryptedDataType adb_EncryptedDataType_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptedDataType_free_obj (
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        
        

        /**
         * Getter for EncryptionMethod. 
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return adb_EncryptionMethodType_t*
         */
        adb_EncryptionMethodType_t* AXIS2_CALL
        adb_EncryptedDataType_get_EncryptionMethod(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env);

        /**
         * Setter for EncryptionMethod.
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @param arg_EncryptionMethod adb_EncryptionMethodType_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptedDataType_set_EncryptionMethod(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env,
            adb_EncryptionMethodType_t*  arg_EncryptionMethod);

        /**
         * Resetter for EncryptionMethod
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptedDataType_reset_EncryptionMethod(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for KeyInfo. 
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return adb_KeyInfoType_t*
         */
        adb_KeyInfoType_t* AXIS2_CALL
        adb_EncryptedDataType_get_KeyInfo(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env);

        /**
         * Setter for KeyInfo.
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @param arg_KeyInfo adb_KeyInfoType_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptedDataType_set_KeyInfo(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env,
            adb_KeyInfoType_t*  arg_KeyInfo);

        /**
         * Resetter for KeyInfo
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptedDataType_reset_KeyInfo(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for CipherData. 
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return adb_CipherDataType_t*
         */
        adb_CipherDataType_t* AXIS2_CALL
        adb_EncryptedDataType_get_CipherData(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env);

        /**
         * Setter for CipherData.
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @param arg_CipherData adb_CipherDataType_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptedDataType_set_CipherData(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env,
            adb_CipherDataType_t*  arg_CipherData);

        /**
         * Resetter for CipherData
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptedDataType_reset_CipherData(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for EncryptionProperties. 
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return adb_EncryptionPropertiesType_t*
         */
        adb_EncryptionPropertiesType_t* AXIS2_CALL
        adb_EncryptedDataType_get_EncryptionProperties(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env);

        /**
         * Setter for EncryptionProperties.
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @param arg_EncryptionProperties adb_EncryptionPropertiesType_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptedDataType_set_EncryptionProperties(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env,
            adb_EncryptionPropertiesType_t*  arg_EncryptionProperties);

        /**
         * Resetter for EncryptionProperties
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptedDataType_reset_EncryptionProperties(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for Id. 
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_EncryptedDataType_get_Id(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env);

        /**
         * Setter for Id.
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @param arg_Id axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptedDataType_set_Id(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env,
            const axis2_char_t*  arg_Id);

        /**
         * Resetter for Id
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptedDataType_reset_Id(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for Type. 
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return axutil_uri_t*
         */
        axutil_uri_t* AXIS2_CALL
        adb_EncryptedDataType_get_Type(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env);

        /**
         * Setter for Type.
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @param arg_Type axutil_uri_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptedDataType_set_Type(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env,
            axutil_uri_t*  arg_Type);

        /**
         * Resetter for Type
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptedDataType_reset_Type(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for MimeType. 
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_EncryptedDataType_get_MimeType(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env);

        /**
         * Setter for MimeType.
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @param arg_MimeType axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptedDataType_set_MimeType(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env,
            const axis2_char_t*  arg_MimeType);

        /**
         * Resetter for MimeType
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptedDataType_reset_MimeType(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for Encoding. 
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return axutil_uri_t*
         */
        axutil_uri_t* AXIS2_CALL
        adb_EncryptedDataType_get_Encoding(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env);

        /**
         * Setter for Encoding.
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @param arg_Encoding axutil_uri_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptedDataType_set_Encoding(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env,
            axutil_uri_t*  arg_Encoding);

        /**
         * Resetter for Encoding
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptedDataType_reset_Encoding(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether EncryptionMethod is nill
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_EncryptedDataType_is_EncryptionMethod_nil(
                adb_EncryptedDataType_t* _EncryptedDataType,
                const axutil_env_t *env);


        

        /**
         * Check whether KeyInfo is nill
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_EncryptedDataType_is_KeyInfo_nil(
                adb_EncryptedDataType_t* _EncryptedDataType,
                const axutil_env_t *env);


        

        /**
         * Check whether CipherData is nill
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_EncryptedDataType_is_CipherData_nil(
                adb_EncryptedDataType_t* _EncryptedDataType,
                const axutil_env_t *env);


        

        /**
         * Check whether EncryptionProperties is nill
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_EncryptedDataType_is_EncryptionProperties_nil(
                adb_EncryptedDataType_t* _EncryptedDataType,
                const axutil_env_t *env);


        

        /**
         * Check whether Id is nill
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_EncryptedDataType_is_Id_nil(
                adb_EncryptedDataType_t* _EncryptedDataType,
                const axutil_env_t *env);


        
        /**
         * Set Id to nill (currently the same as reset)
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptedDataType_set_Id_nil(
                adb_EncryptedDataType_t* _EncryptedDataType,
                const axutil_env_t *env);
        

        /**
         * Check whether Type is nill
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_EncryptedDataType_is_Type_nil(
                adb_EncryptedDataType_t* _EncryptedDataType,
                const axutil_env_t *env);


        
        /**
         * Set Type to nill (currently the same as reset)
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptedDataType_set_Type_nil(
                adb_EncryptedDataType_t* _EncryptedDataType,
                const axutil_env_t *env);
        

        /**
         * Check whether MimeType is nill
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_EncryptedDataType_is_MimeType_nil(
                adb_EncryptedDataType_t* _EncryptedDataType,
                const axutil_env_t *env);


        
        /**
         * Set MimeType to nill (currently the same as reset)
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptedDataType_set_MimeType_nil(
                adb_EncryptedDataType_t* _EncryptedDataType,
                const axutil_env_t *env);
        

        /**
         * Check whether Encoding is nill
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_EncryptedDataType_is_Encoding_nil(
                adb_EncryptedDataType_t* _EncryptedDataType,
                const axutil_env_t *env);


        
        /**
         * Set Encoding to nill (currently the same as reset)
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptedDataType_set_Encoding_nil(
                adb_EncryptedDataType_t* _EncryptedDataType,
                const axutil_env_t *env);
        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptedDataType_deserialize(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_EncryptedDataType_deserialize_obj(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_EncryptedDataType_declare_parent_namespaces(
                    adb_EncryptedDataType_t* _EncryptedDataType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @param EncryptedDataType_om_node node to serialize from
         * @param EncryptedDataType_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_EncryptedDataType_serialize(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env,
            axiom_node_t* EncryptedDataType_om_node, axiom_element_t *EncryptedDataType_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @param EncryptedDataType_om_node node to serialize from
         * @param EncryptedDataType_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_EncryptedDataType_serialize_obj(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env,
            axiom_node_t* EncryptedDataType_om_node, axiom_element_t *EncryptedDataType_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_EncryptedDataType is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_EncryptedDataType_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_EncryptedDataType_t
         * @param env pointer to environment struct
         * @param _EncryptionMethod adb_EncryptionMethodType_t*
         * @param _KeyInfo adb_KeyInfoType_t*
         * @param _CipherData adb_CipherDataType_t*
         * @param _EncryptionProperties adb_EncryptionPropertiesType_t*
         * @param _Id axis2_char_t*
         * @param _Type axutil_uri_t*
         * @param _MimeType axis2_char_t*
         * @param _Encoding axutil_uri_t*
         * @return newly created adb_EncryptedDataType_t object
         */
        adb_EncryptedDataType_t* AXIS2_CALL
        adb_EncryptedDataType_create_with_values(
            const axutil_env_t *env,
                adb_EncryptionMethodType_t* _EncryptionMethod,
                adb_KeyInfoType_t* _KeyInfo,
                adb_CipherDataType_t* _CipherData,
                adb_EncryptionPropertiesType_t* _EncryptionProperties,
                axis2_char_t* _Id,
                axutil_uri_t* _Type,
                axis2_char_t* _MimeType,
                axutil_uri_t* _Encoding);

        


                /**
                 * Free adb_EncryptedDataType_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _EncryptedDataType adb_EncryptedDataType_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                adb_EncryptionMethodType_t* AXIS2_CALL
                adb_EncryptedDataType_free_popping_value(
                        adb_EncryptedDataType_t* _EncryptedDataType,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for EncryptionMethod by property number (1)
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return adb_EncryptionMethodType_t*
         */
        adb_EncryptionMethodType_t* AXIS2_CALL
        adb_EncryptedDataType_get_property1(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for KeyInfo by property number (2)
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return adb_KeyInfoType_t*
         */
        adb_KeyInfoType_t* AXIS2_CALL
        adb_EncryptedDataType_get_property2(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for CipherData by property number (3)
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return adb_CipherDataType_t*
         */
        adb_CipherDataType_t* AXIS2_CALL
        adb_EncryptedDataType_get_property3(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for EncryptionProperties by property number (4)
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return adb_EncryptionPropertiesType_t*
         */
        adb_EncryptionPropertiesType_t* AXIS2_CALL
        adb_EncryptedDataType_get_property4(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for Id by property number (5)
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_EncryptedDataType_get_property5(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for Type by property number (6)
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return axutil_uri_t*
         */
        axutil_uri_t* AXIS2_CALL
        adb_EncryptedDataType_get_property6(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for MimeType by property number (7)
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_EncryptedDataType_get_property7(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for Encoding by property number (8)
         * @param  _EncryptedDataType adb_EncryptedDataType_t object
         * @param env pointer to environment struct
         * @return axutil_uri_t*
         */
        axutil_uri_t* AXIS2_CALL
        adb_EncryptedDataType_get_property8(
            adb_EncryptedDataType_t* _EncryptedDataType,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_ENCRYPTEDDATATYPE_H */
    

