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



        #ifndef ADB_REFERENCETYPE_H
        #define ADB_REFERENCETYPE_H

       /**
        * adb_ReferenceType.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Nov 05, 2013 (09:21:13 EET)
        */

       /**
        *  adb_ReferenceType class
        */

        
          #include "adb_TransformsType.h"
          
          #include "adb_DigestMethodType.h"
          
          #include "adb_DigestValueType.h"
          

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
        

        typedef struct adb_ReferenceType adb_ReferenceType_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_ReferenceType_t
         * @param env pointer to environment struct
         * @return newly created adb_ReferenceType_t object
         */
        adb_ReferenceType_t* AXIS2_CALL
        adb_ReferenceType_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _ReferenceType adb_ReferenceType_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ReferenceType_free (
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env);

        /**
         * Free adb_ReferenceType_t object
         * @param  _ReferenceType adb_ReferenceType_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ReferenceType_free_obj (
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        
        

        /**
         * Getter for Transforms. 
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @return adb_TransformsType_t*
         */
        adb_TransformsType_t* AXIS2_CALL
        adb_ReferenceType_get_Transforms(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env);

        /**
         * Setter for Transforms.
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @param arg_Transforms adb_TransformsType_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ReferenceType_set_Transforms(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env,
            adb_TransformsType_t*  arg_Transforms);

        /**
         * Resetter for Transforms
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ReferenceType_reset_Transforms(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for DigestMethod. 
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @return adb_DigestMethodType_t*
         */
        adb_DigestMethodType_t* AXIS2_CALL
        adb_ReferenceType_get_DigestMethod(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env);

        /**
         * Setter for DigestMethod.
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @param arg_DigestMethod adb_DigestMethodType_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ReferenceType_set_DigestMethod(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env,
            adb_DigestMethodType_t*  arg_DigestMethod);

        /**
         * Resetter for DigestMethod
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ReferenceType_reset_DigestMethod(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for DigestValue. 
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @return adb_DigestValueType_t*
         */
        adb_DigestValueType_t* AXIS2_CALL
        adb_ReferenceType_get_DigestValue(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env);

        /**
         * Setter for DigestValue.
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @param arg_DigestValue adb_DigestValueType_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ReferenceType_set_DigestValue(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env,
            adb_DigestValueType_t*  arg_DigestValue);

        /**
         * Resetter for DigestValue
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ReferenceType_reset_DigestValue(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for Id. 
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_ReferenceType_get_Id(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env);

        /**
         * Setter for Id.
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @param arg_Id axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ReferenceType_set_Id(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env,
            const axis2_char_t*  arg_Id);

        /**
         * Resetter for Id
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ReferenceType_reset_Id(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for URI. 
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @return axutil_uri_t*
         */
        axutil_uri_t* AXIS2_CALL
        adb_ReferenceType_get_URI(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env);

        /**
         * Setter for URI.
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @param arg_URI axutil_uri_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ReferenceType_set_URI(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env,
            axutil_uri_t*  arg_URI);

        /**
         * Resetter for URI
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ReferenceType_reset_URI(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env);

        
        

        /**
         * Getter for Type. 
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @return axutil_uri_t*
         */
        axutil_uri_t* AXIS2_CALL
        adb_ReferenceType_get_Type(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env);

        /**
         * Setter for Type.
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @param arg_Type axutil_uri_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ReferenceType_set_Type(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env,
            axutil_uri_t*  arg_Type);

        /**
         * Resetter for Type
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ReferenceType_reset_Type(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env);

        


        /******************************* Checking and Setting NIL values *********************************/
        

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether Transforms is nill
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_ReferenceType_is_Transforms_nil(
                adb_ReferenceType_t* _ReferenceType,
                const axutil_env_t *env);


        

        /**
         * Check whether DigestMethod is nill
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_ReferenceType_is_DigestMethod_nil(
                adb_ReferenceType_t* _ReferenceType,
                const axutil_env_t *env);


        

        /**
         * Check whether DigestValue is nill
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_ReferenceType_is_DigestValue_nil(
                adb_ReferenceType_t* _ReferenceType,
                const axutil_env_t *env);


        

        /**
         * Check whether Id is nill
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_ReferenceType_is_Id_nil(
                adb_ReferenceType_t* _ReferenceType,
                const axutil_env_t *env);


        
        /**
         * Set Id to nill (currently the same as reset)
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ReferenceType_set_Id_nil(
                adb_ReferenceType_t* _ReferenceType,
                const axutil_env_t *env);
        

        /**
         * Check whether URI is nill
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_ReferenceType_is_URI_nil(
                adb_ReferenceType_t* _ReferenceType,
                const axutil_env_t *env);


        
        /**
         * Set URI to nill (currently the same as reset)
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ReferenceType_set_URI_nil(
                adb_ReferenceType_t* _ReferenceType,
                const axutil_env_t *env);
        

        /**
         * Check whether Type is nill
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_ReferenceType_is_Type_nil(
                adb_ReferenceType_t* _ReferenceType,
                const axutil_env_t *env);


        
        /**
         * Set Type to nill (currently the same as reset)
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ReferenceType_set_Type_nil(
                adb_ReferenceType_t* _ReferenceType,
                const axutil_env_t *env);
        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ReferenceType_deserialize(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_ReferenceType_deserialize_obj(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_ReferenceType_declare_parent_namespaces(
                    adb_ReferenceType_t* _ReferenceType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @param ReferenceType_om_node node to serialize from
         * @param ReferenceType_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_ReferenceType_serialize(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env,
            axiom_node_t* ReferenceType_om_node, axiom_element_t *ReferenceType_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @param ReferenceType_om_node node to serialize from
         * @param ReferenceType_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_ReferenceType_serialize_obj(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env,
            axiom_node_t* ReferenceType_om_node, axiom_element_t *ReferenceType_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_ReferenceType is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_ReferenceType_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_ReferenceType_t
         * @param env pointer to environment struct
         * @param _Transforms adb_TransformsType_t*
         * @param _DigestMethod adb_DigestMethodType_t*
         * @param _DigestValue adb_DigestValueType_t*
         * @param _Id axis2_char_t*
         * @param _URI axutil_uri_t*
         * @param _Type axutil_uri_t*
         * @return newly created adb_ReferenceType_t object
         */
        adb_ReferenceType_t* AXIS2_CALL
        adb_ReferenceType_create_with_values(
            const axutil_env_t *env,
                adb_TransformsType_t* _Transforms,
                adb_DigestMethodType_t* _DigestMethod,
                adb_DigestValueType_t* _DigestValue,
                axis2_char_t* _Id,
                axutil_uri_t* _URI,
                axutil_uri_t* _Type);

        


                /**
                 * Free adb_ReferenceType_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _ReferenceType adb_ReferenceType_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                adb_TransformsType_t* AXIS2_CALL
                adb_ReferenceType_free_popping_value(
                        adb_ReferenceType_t* _ReferenceType,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for Transforms by property number (1)
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @return adb_TransformsType_t*
         */
        adb_TransformsType_t* AXIS2_CALL
        adb_ReferenceType_get_property1(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for DigestMethod by property number (2)
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @return adb_DigestMethodType_t*
         */
        adb_DigestMethodType_t* AXIS2_CALL
        adb_ReferenceType_get_property2(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for DigestValue by property number (3)
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @return adb_DigestValueType_t*
         */
        adb_DigestValueType_t* AXIS2_CALL
        adb_ReferenceType_get_property3(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for Id by property number (4)
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_ReferenceType_get_property4(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for URI by property number (5)
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @return axutil_uri_t*
         */
        axutil_uri_t* AXIS2_CALL
        adb_ReferenceType_get_property5(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env);

    
        

        /**
         * Getter for Type by property number (6)
         * @param  _ReferenceType adb_ReferenceType_t object
         * @param env pointer to environment struct
         * @return axutil_uri_t*
         */
        axutil_uri_t* AXIS2_CALL
        adb_ReferenceType_get_property6(
            adb_ReferenceType_t* _ReferenceType,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_REFERENCETYPE_H */
    

