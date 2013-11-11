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



        /**
         * adb_EncryptedKeyType.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_EncryptedKeyType.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = EncryptedKeyType
                 * Namespace URI = http://www.w3.org/2001/04/xmlenc#
                 * Namespace Prefix = ns6
                 */
           


        struct adb_EncryptedKeyType
        {
            axis2_char_t *property_TypeName;

            adb_EncryptionMethodType_t* property_EncryptionMethod;

                
                axis2_bool_t is_valid_EncryptionMethod;
            adb_KeyInfoType_t* property_KeyInfo;

                
                axis2_bool_t is_valid_KeyInfo;
            adb_CipherDataType_t* property_CipherData;

                
                axis2_bool_t is_valid_CipherData;
            adb_EncryptionPropertiesType_t* property_EncryptionProperties;

                
                axis2_bool_t is_valid_EncryptionProperties;
            axis2_char_t* property_Id;

                
                axis2_bool_t is_valid_Id;
            axutil_uri_t* property_Type;

                
                axis2_bool_t is_valid_Type;
            axis2_char_t* property_MimeType;

                
                axis2_bool_t is_valid_MimeType;
            axutil_uri_t* property_Encoding;

                
                axis2_bool_t is_valid_Encoding;
            adb_ReferenceList_type0_t* property_ReferenceList;

                
                axis2_bool_t is_valid_ReferenceList;
            axis2_char_t* property_CarriedKeyName;

                
                axis2_bool_t is_valid_CarriedKeyName;
            axis2_char_t* property_Recipient;

                
                axis2_bool_t is_valid_Recipient;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_EncryptedKeyType_set_EncryptionMethod_nil(
                        adb_EncryptedKeyType_t* _EncryptedKeyType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_EncryptedKeyType_set_KeyInfo_nil(
                        adb_EncryptedKeyType_t* _EncryptedKeyType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_EncryptedKeyType_set_CipherData_nil(
                        adb_EncryptedKeyType_t* _EncryptedKeyType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_EncryptedKeyType_set_EncryptionProperties_nil(
                        adb_EncryptedKeyType_t* _EncryptedKeyType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_EncryptedKeyType_set_ReferenceList_nil(
                        adb_EncryptedKeyType_t* _EncryptedKeyType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_EncryptedKeyType_set_CarriedKeyName_nil(
                        adb_EncryptedKeyType_t* _EncryptedKeyType,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_EncryptedKeyType_t* AXIS2_CALL
        adb_EncryptedKeyType_create(
            const axutil_env_t *env)
        {
            adb_EncryptedKeyType_t *_EncryptedKeyType = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _EncryptedKeyType = (adb_EncryptedKeyType_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_EncryptedKeyType_t));

            if(NULL == _EncryptedKeyType)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_EncryptedKeyType, 0, sizeof(adb_EncryptedKeyType_t));

            _EncryptedKeyType->property_TypeName = axutil_strdup(env, "adb_EncryptedKeyType");
            _EncryptedKeyType->property_EncryptionMethod  = NULL;
                  _EncryptedKeyType->is_valid_EncryptionMethod  = AXIS2_FALSE;
            _EncryptedKeyType->property_KeyInfo  = NULL;
                  _EncryptedKeyType->is_valid_KeyInfo  = AXIS2_FALSE;
            _EncryptedKeyType->property_CipherData  = NULL;
                  _EncryptedKeyType->is_valid_CipherData  = AXIS2_FALSE;
            _EncryptedKeyType->property_EncryptionProperties  = NULL;
                  _EncryptedKeyType->is_valid_EncryptionProperties  = AXIS2_FALSE;
            _EncryptedKeyType->property_Id  = NULL;
                  _EncryptedKeyType->is_valid_Id  = AXIS2_FALSE;
            _EncryptedKeyType->property_Type  = NULL;
                  _EncryptedKeyType->is_valid_Type  = AXIS2_FALSE;
            _EncryptedKeyType->property_MimeType  = NULL;
                  _EncryptedKeyType->is_valid_MimeType  = AXIS2_FALSE;
            _EncryptedKeyType->property_Encoding  = NULL;
                  _EncryptedKeyType->is_valid_Encoding  = AXIS2_FALSE;
            _EncryptedKeyType->property_ReferenceList  = NULL;
                  _EncryptedKeyType->is_valid_ReferenceList  = AXIS2_FALSE;
            _EncryptedKeyType->property_CarriedKeyName  = NULL;
                  _EncryptedKeyType->is_valid_CarriedKeyName  = AXIS2_FALSE;
            _EncryptedKeyType->property_Recipient  = NULL;
                  _EncryptedKeyType->is_valid_Recipient  = AXIS2_FALSE;
            

            return _EncryptedKeyType;
        }

        adb_EncryptedKeyType_t* AXIS2_CALL
        adb_EncryptedKeyType_create_with_values(
            const axutil_env_t *env,
                adb_EncryptionMethodType_t* _EncryptionMethod,
                adb_KeyInfoType_t* _KeyInfo,
                adb_CipherDataType_t* _CipherData,
                adb_EncryptionPropertiesType_t* _EncryptionProperties,
                axis2_char_t* _Id,
                axutil_uri_t* _Type,
                axis2_char_t* _MimeType,
                axutil_uri_t* _Encoding,
                adb_ReferenceList_type0_t* _ReferenceList,
                axis2_char_t* _CarriedKeyName,
                axis2_char_t* _Recipient)
        {
            adb_EncryptedKeyType_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_EncryptedKeyType_create(env);

            
              status = adb_EncryptedKeyType_set_EncryptionMethod(
                                     adb_obj,
                                     env,
                                     _EncryptionMethod);
              if(status == AXIS2_FAILURE) {
                  adb_EncryptedKeyType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_EncryptedKeyType_set_KeyInfo(
                                     adb_obj,
                                     env,
                                     _KeyInfo);
              if(status == AXIS2_FAILURE) {
                  adb_EncryptedKeyType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_EncryptedKeyType_set_CipherData(
                                     adb_obj,
                                     env,
                                     _CipherData);
              if(status == AXIS2_FAILURE) {
                  adb_EncryptedKeyType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_EncryptedKeyType_set_EncryptionProperties(
                                     adb_obj,
                                     env,
                                     _EncryptionProperties);
              if(status == AXIS2_FAILURE) {
                  adb_EncryptedKeyType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_EncryptedKeyType_set_Id(
                                     adb_obj,
                                     env,
                                     _Id);
              if(status == AXIS2_FAILURE) {
                  adb_EncryptedKeyType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_EncryptedKeyType_set_Type(
                                     adb_obj,
                                     env,
                                     _Type);
              if(status == AXIS2_FAILURE) {
                  adb_EncryptedKeyType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_EncryptedKeyType_set_MimeType(
                                     adb_obj,
                                     env,
                                     _MimeType);
              if(status == AXIS2_FAILURE) {
                  adb_EncryptedKeyType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_EncryptedKeyType_set_Encoding(
                                     adb_obj,
                                     env,
                                     _Encoding);
              if(status == AXIS2_FAILURE) {
                  adb_EncryptedKeyType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_EncryptedKeyType_set_ReferenceList(
                                     adb_obj,
                                     env,
                                     _ReferenceList);
              if(status == AXIS2_FAILURE) {
                  adb_EncryptedKeyType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_EncryptedKeyType_set_CarriedKeyName(
                                     adb_obj,
                                     env,
                                     _CarriedKeyName);
              if(status == AXIS2_FAILURE) {
                  adb_EncryptedKeyType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_EncryptedKeyType_set_Recipient(
                                     adb_obj,
                                     env,
                                     _Recipient);
              if(status == AXIS2_FAILURE) {
                  adb_EncryptedKeyType_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        adb_EncryptionMethodType_t* AXIS2_CALL
                adb_EncryptedKeyType_free_popping_value(
                        adb_EncryptedKeyType_t* _EncryptedKeyType,
                        const axutil_env_t *env)
                {
                    adb_EncryptionMethodType_t* value;

                    
                    
                    value = _EncryptedKeyType->property_EncryptionMethod;

                    _EncryptedKeyType->property_EncryptionMethod = (adb_EncryptionMethodType_t*)NULL;
                    adb_EncryptedKeyType_free(_EncryptedKeyType, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_EncryptedKeyType_free(
                adb_EncryptedKeyType_t* _EncryptedKeyType,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _EncryptedKeyType,
                env,
                "adb_EncryptedKeyType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_EncryptedKeyType_free_obj(
                adb_EncryptedKeyType_t* _EncryptedKeyType,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_FAILURE);

            if (_EncryptedKeyType->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _EncryptedKeyType->property_TypeName);
            }

            adb_EncryptedKeyType_reset_EncryptionMethod(_EncryptedKeyType, env);
            adb_EncryptedKeyType_reset_KeyInfo(_EncryptedKeyType, env);
            adb_EncryptedKeyType_reset_CipherData(_EncryptedKeyType, env);
            adb_EncryptedKeyType_reset_EncryptionProperties(_EncryptedKeyType, env);
            adb_EncryptedKeyType_reset_Id(_EncryptedKeyType, env);
            adb_EncryptedKeyType_reset_Type(_EncryptedKeyType, env);
            adb_EncryptedKeyType_reset_MimeType(_EncryptedKeyType, env);
            adb_EncryptedKeyType_reset_Encoding(_EncryptedKeyType, env);
            adb_EncryptedKeyType_reset_ReferenceList(_EncryptedKeyType, env);
            adb_EncryptedKeyType_reset_CarriedKeyName(_EncryptedKeyType, env);
            adb_EncryptedKeyType_reset_Recipient(_EncryptedKeyType, env);
            

            if(_EncryptedKeyType)
            {
                AXIS2_FREE(env->allocator, _EncryptedKeyType);
                _EncryptedKeyType = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_EncryptedKeyType_deserialize(
                adb_EncryptedKeyType_t* _EncryptedKeyType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _EncryptedKeyType,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_EncryptedKeyType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_EncryptedKeyType_deserialize_obj(
                adb_EncryptedKeyType_t* _EncryptedKeyType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
          
              axiom_attribute_t *parent_attri = NULL;
              axiom_element_t *parent_element = NULL;
              axis2_char_t *attrib_text = NULL;

              axutil_hash_t *attribute_hash = NULL;

          
              void *element = NULL;
           
             const axis2_char_t* text_value = NULL;
             axutil_qname_t *qname = NULL;
          
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for EncryptedKeyType : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    
                 parent_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                 attribute_hash = axiom_element_get_all_attributes(parent_element, env);
              

                     
                     /*
                      * building EncryptionMethod element
                      */
                     
                     
                     
                                   current_node = first_node;
                                   is_early_node_valid = AXIS2_FALSE;
                                   
                                   
                                    while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                    {
                                        current_node = axiom_node_get_next_sibling(current_node, env);
                                    }
                                    if(current_node != NULL)
                                    {
                                        current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                        qname = axiom_element_get_qname(current_element, env, current_node);
                                    }
                                   
                                 element_qname = axutil_qname_create(env, "EncryptionMethod", "http://www.w3.org/2001/04/xmlenc#", NULL);
                                 

                           if (adb_EncryptionMethodType_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_EncryptionMethodType");

                                      status =  adb_EncryptionMethodType_deserialize((adb_EncryptionMethodType_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element EncryptionMethod");
                                      }
                                      else
                                      {
                                          status = adb_EncryptedKeyType_set_EncryptionMethod(_EncryptedKeyType, env,
                                                                   (adb_EncryptionMethodType_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for EncryptionMethod ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building KeyInfo element
                      */
                     
                     
                     
                                    /*
                                     * because elements are ordered this works fine
                                     */
                                  
                                   
                                   if(current_node != NULL && is_early_node_valid)
                                   {
                                       current_node = axiom_node_get_next_sibling(current_node, env);
                                       
                                       
                                        while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                        {
                                            current_node = axiom_node_get_next_sibling(current_node, env);
                                        }
                                        if(current_node != NULL)
                                        {
                                            current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                            qname = axiom_element_get_qname(current_element, env, current_node);
                                        }
                                       
                                   }
                                   is_early_node_valid = AXIS2_FALSE;
                                 
                                 element_qname = axutil_qname_create(env, "KeyInfo", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

                           if (adb_KeyInfoType_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_KeyInfoType");

                                      status =  adb_KeyInfoType_deserialize((adb_KeyInfoType_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element KeyInfo");
                                      }
                                      else
                                      {
                                          status = adb_EncryptedKeyType_set_KeyInfo(_EncryptedKeyType, env,
                                                                   (adb_KeyInfoType_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for KeyInfo ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building CipherData element
                      */
                     
                     
                     
                                    /*
                                     * because elements are ordered this works fine
                                     */
                                  
                                   
                                   if(current_node != NULL && is_early_node_valid)
                                   {
                                       current_node = axiom_node_get_next_sibling(current_node, env);
                                       
                                       
                                        while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                        {
                                            current_node = axiom_node_get_next_sibling(current_node, env);
                                        }
                                        if(current_node != NULL)
                                        {
                                            current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                            qname = axiom_element_get_qname(current_element, env, current_node);
                                        }
                                       
                                   }
                                   is_early_node_valid = AXIS2_FALSE;
                                 
                                 element_qname = axutil_qname_create(env, "CipherData", "http://www.w3.org/2001/04/xmlenc#", NULL);
                                 

                           if (adb_CipherDataType_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_CipherDataType");

                                      status =  adb_CipherDataType_deserialize((adb_CipherDataType_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element CipherData");
                                      }
                                      else
                                      {
                                          status = adb_EncryptedKeyType_set_CipherData(_EncryptedKeyType, env,
                                                                   (adb_CipherDataType_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for CipherData ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                              else if(!dont_care_minoccurs)
                              {
                                  if(element_qname)
                                  {
                                      axutil_qname_free(element_qname, env);
                                  }
                                  /* this is not a nillable element*/
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element CipherData missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building EncryptionProperties element
                      */
                     
                     
                     
                                    /*
                                     * because elements are ordered this works fine
                                     */
                                  
                                   
                                   if(current_node != NULL && is_early_node_valid)
                                   {
                                       current_node = axiom_node_get_next_sibling(current_node, env);
                                       
                                       
                                        while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                        {
                                            current_node = axiom_node_get_next_sibling(current_node, env);
                                        }
                                        if(current_node != NULL)
                                        {
                                            current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                            qname = axiom_element_get_qname(current_element, env, current_node);
                                        }
                                       
                                   }
                                   is_early_node_valid = AXIS2_FALSE;
                                 
                                 element_qname = axutil_qname_create(env, "EncryptionProperties", "http://www.w3.org/2001/04/xmlenc#", NULL);
                                 

                           if (adb_EncryptionPropertiesType_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_EncryptionPropertiesType");

                                      status =  adb_EncryptionPropertiesType_deserialize((adb_EncryptionPropertiesType_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element EncryptionProperties");
                                      }
                                      else
                                      {
                                          status = adb_EncryptedKeyType_set_EncryptionProperties(_EncryptedKeyType, env,
                                                                   (adb_EncryptionPropertiesType_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for EncryptionProperties ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                
                
                  parent_attri = NULL;
                  attrib_text = NULL;
                  if(attribute_hash)
                  {
                       axutil_hash_index_t *hi;
                       void *val;
                       const void *key;

                       for (hi = axutil_hash_first(attribute_hash, env); hi; hi = axutil_hash_next(env, hi)) 
                       {
                           axutil_hash_this(hi, &key, NULL, &val);
                           
                           
                               if(!strcmp((axis2_char_t*)key, "Id"))
                             
                               {
                                   parent_attri = (axiom_attribute_t*)val;
                                   AXIS2_FREE(env->allocator, hi);
                                   break;
                               }
                       }
                  }

                  if(parent_attri)
                  {
                    attrib_text = axiom_attribute_get_value(parent_attri, env);
                  }
                  else
                  {
                    /* this is hoping that attribute is stored in "Id", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "Id");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_EncryptedKeyType_set_Id(_EncryptedKeyType,
                                                          env, attrib_text);
                        
                    }
                  
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                
                
                  parent_attri = NULL;
                  attrib_text = NULL;
                  if(attribute_hash)
                  {
                       axutil_hash_index_t *hi;
                       void *val;
                       const void *key;

                       for (hi = axutil_hash_first(attribute_hash, env); hi; hi = axutil_hash_next(env, hi)) 
                       {
                           axutil_hash_this(hi, &key, NULL, &val);
                           
                           
                               if(!strcmp((axis2_char_t*)key, "Type"))
                             
                               {
                                   parent_attri = (axiom_attribute_t*)val;
                                   AXIS2_FREE(env->allocator, hi);
                                   break;
                               }
                       }
                  }

                  if(parent_attri)
                  {
                    attrib_text = axiom_attribute_get_value(parent_attri, env);
                  }
                  else
                  {
                    /* this is hoping that attribute is stored in "Type", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "Type");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_EncryptedKeyType_set_Type(_EncryptedKeyType,
                                                          env, axutil_uri_parse_string(env, attrib_text));
                        
                    }
                  
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                
                
                  parent_attri = NULL;
                  attrib_text = NULL;
                  if(attribute_hash)
                  {
                       axutil_hash_index_t *hi;
                       void *val;
                       const void *key;

                       for (hi = axutil_hash_first(attribute_hash, env); hi; hi = axutil_hash_next(env, hi)) 
                       {
                           axutil_hash_this(hi, &key, NULL, &val);
                           
                           
                               if(!strcmp((axis2_char_t*)key, "MimeType"))
                             
                               {
                                   parent_attri = (axiom_attribute_t*)val;
                                   AXIS2_FREE(env->allocator, hi);
                                   break;
                               }
                       }
                  }

                  if(parent_attri)
                  {
                    attrib_text = axiom_attribute_get_value(parent_attri, env);
                  }
                  else
                  {
                    /* this is hoping that attribute is stored in "MimeType", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "MimeType");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_EncryptedKeyType_set_MimeType(_EncryptedKeyType,
                                                          env, attrib_text);
                        
                    }
                  
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                
                
                  parent_attri = NULL;
                  attrib_text = NULL;
                  if(attribute_hash)
                  {
                       axutil_hash_index_t *hi;
                       void *val;
                       const void *key;

                       for (hi = axutil_hash_first(attribute_hash, env); hi; hi = axutil_hash_next(env, hi)) 
                       {
                           axutil_hash_this(hi, &key, NULL, &val);
                           
                           
                               if(!strcmp((axis2_char_t*)key, "Encoding"))
                             
                               {
                                   parent_attri = (axiom_attribute_t*)val;
                                   AXIS2_FREE(env->allocator, hi);
                                   break;
                               }
                       }
                  }

                  if(parent_attri)
                  {
                    attrib_text = axiom_attribute_get_value(parent_attri, env);
                  }
                  else
                  {
                    /* this is hoping that attribute is stored in "Encoding", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "Encoding");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_EncryptedKeyType_set_Encoding(_EncryptedKeyType,
                                                          env, axutil_uri_parse_string(env, attrib_text));
                        
                    }
                  
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building ReferenceList element
                      */
                     
                     
                     
                                    /*
                                     * because elements are ordered this works fine
                                     */
                                  
                                   
                                   if(current_node != NULL && is_early_node_valid)
                                   {
                                       current_node = axiom_node_get_next_sibling(current_node, env);
                                       
                                       
                                        while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                        {
                                            current_node = axiom_node_get_next_sibling(current_node, env);
                                        }
                                        if(current_node != NULL)
                                        {
                                            current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                            qname = axiom_element_get_qname(current_element, env, current_node);
                                        }
                                       
                                   }
                                   is_early_node_valid = AXIS2_FALSE;
                                 
                                 element_qname = axutil_qname_create(env, "ReferenceList", "http://www.w3.org/2001/04/xmlenc#", NULL);
                                 

                           if (adb_ReferenceList_type0_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_ReferenceList_type0");

                                      status =  adb_ReferenceList_type0_deserialize((adb_ReferenceList_type0_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element ReferenceList");
                                      }
                                      else
                                      {
                                          status = adb_EncryptedKeyType_set_ReferenceList(_EncryptedKeyType, env,
                                                                   (adb_ReferenceList_type0_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for ReferenceList ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building CarriedKeyName element
                      */
                     
                     
                     
                                    /*
                                     * because elements are ordered this works fine
                                     */
                                  
                                   
                                   if(current_node != NULL && is_early_node_valid)
                                   {
                                       current_node = axiom_node_get_next_sibling(current_node, env);
                                       
                                       
                                        while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                        {
                                            current_node = axiom_node_get_next_sibling(current_node, env);
                                        }
                                        if(current_node != NULL)
                                        {
                                            current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                            qname = axiom_element_get_qname(current_element, env, current_node);
                                        }
                                       
                                   }
                                   is_early_node_valid = AXIS2_FALSE;
                                 
                                 element_qname = axutil_qname_create(env, "CarriedKeyName", "http://www.w3.org/2001/04/xmlenc#", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_EncryptedKeyType_set_CarriedKeyName(_EncryptedKeyType, env,
                                                               text_value);
                                      }
                                      
                                      else
                                      {
                                            /*
                                             * axis2_qname_t *qname = NULL;
                                             * axiom_attribute_t *the_attri = NULL;
                                             * 
                                             * qname = axutil_qname_create(env, "nil", "http://www.w3.org/2001/XMLSchema-instance", "xsi");
                                             * the_attri = axiom_element_get_attribute(current_element, env, qname);
                                             */
                                            /* currently thereis a bug in the axiom_element_get_attribute, so we have to go to this bad method */

                                            axiom_attribute_t *the_attri = NULL;
                                            axis2_char_t *attrib_text = NULL;
                                            axutil_hash_t *attribute_hash = NULL;

                                            attribute_hash = axiom_element_get_all_attributes(current_element, env);

                                            attrib_text = NULL;
                                            if(attribute_hash)
                                            {
                                                 axutil_hash_index_t *hi;
                                                 void *val;
                                                 const void *key;
                                        
                                                 for (hi = axutil_hash_first(attribute_hash, env); hi; hi = axutil_hash_next(env, hi)) 
                                                 {
                                                     axutil_hash_this(hi, &key, NULL, &val);
                                                     
                                                     if(strstr((axis2_char_t*)key, "nil|http://www.w3.org/2001/XMLSchema-instance"))
                                                     {
                                                         the_attri = (axiom_attribute_t*)val;
                                                         break;
                                                     }
                                                 }
                                            }

                                            if(the_attri)
                                            {
                                                attrib_text = axiom_attribute_get_value(the_attri, env);
                                            }
                                            else
                                            {
                                                /* this is hoping that attribute is stored in "http://www.w3.org/2001/XMLSchema-instance", this happnes when name is in default namespace */
                                                attrib_text = axiom_element_get_attribute_value_by_name(current_element, env, "nil");
                                            }

                                            if(attrib_text && 0 == axutil_strcmp(attrib_text, "1"))
                                            {
                                                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element CarriedKeyName");
                                                status = AXIS2_FAILURE;
                                            }
                                            else
                                            {
                                                /* after all, we found this is a empty string */
                                                status = adb_EncryptedKeyType_set_CarriedKeyName(_EncryptedKeyType, env,
                                                                   "");
                                            }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for CarriedKeyName ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                
                
                  parent_attri = NULL;
                  attrib_text = NULL;
                  if(attribute_hash)
                  {
                       axutil_hash_index_t *hi;
                       void *val;
                       const void *key;

                       for (hi = axutil_hash_first(attribute_hash, env); hi; hi = axutil_hash_next(env, hi)) 
                       {
                           axutil_hash_this(hi, &key, NULL, &val);
                           
                           
                               if(!strcmp((axis2_char_t*)key, "Recipient"))
                             
                               {
                                   parent_attri = (axiom_attribute_t*)val;
                                   AXIS2_FREE(env->allocator, hi);
                                   break;
                               }
                       }
                  }

                  if(parent_attri)
                  {
                    attrib_text = axiom_attribute_get_value(parent_attri, env);
                  }
                  else
                  {
                    /* this is hoping that attribute is stored in "Recipient", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "Recipient");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_EncryptedKeyType_set_Recipient(_EncryptedKeyType,
                                                          env, attrib_text);
                        
                    }
                  
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_EncryptedKeyType_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_EncryptedKeyType_declare_parent_namespaces(
                    adb_EncryptedKeyType_t* _EncryptedKeyType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_EncryptedKeyType_serialize(
                adb_EncryptedKeyType_t* _EncryptedKeyType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_EncryptedKeyType == NULL)
            {
                return adb_EncryptedKeyType_serialize_obj(
                    _EncryptedKeyType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _EncryptedKeyType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_EncryptedKeyType");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_EncryptedKeyType_serialize_obj(
                adb_EncryptedKeyType_t* _EncryptedKeyType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
               axiom_attribute_t *text_attri = NULL;
             
             axis2_char_t *string_to_stream;
            
         
         axiom_node_t* current_node = NULL;
         int tag_closed = 0;
         axis2_char_t* xsi_prefix = NULL;
         axiom_namespace_t* xsi_ns = NULL;
         axiom_attribute_t* xsi_type_attri = NULL;
         
         axis2_char_t* type_attrib = NULL;
         
                axiom_namespace_t *ns1 = NULL;

                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                axis2_char_t *p_prefix = NULL;
                axis2_bool_t ns_already_defined;
            
                    axis2_char_t text_value_1[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_2[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_3[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_4[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t *text_value_5;
                    axis2_char_t *text_value_5_temp;
                    
                    axis2_char_t *text_value_6;
                    axis2_char_t *text_value_6_temp;
                    
                    axis2_char_t *text_value_7;
                    axis2_char_t *text_value_7_temp;
                    
                    axis2_char_t *text_value_8;
                    axis2_char_t *text_value_8_temp;
                    
                    axis2_char_t text_value_9[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t *text_value_10;
                    axis2_char_t *text_value_10_temp;
                    
                    axis2_char_t *text_value_11;
                    axis2_char_t *text_value_11_temp;
                    
                axis2_char_t *text_value = NULL;
             
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
                if(_EncryptedKeyType->is_valid_Id)
                {
                
                        p_prefix = NULL;
                      
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(_EncryptedKeyType->property_Id) + 
                                                                axutil_strlen("Id")));
                           sprintf(text_value, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "Id", _EncryptedKeyType->property_Id);
                           axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
                if(_EncryptedKeyType->is_valid_Type)
                {
                
                        p_prefix = NULL;
                      
                           text_value = axutil_uri_to_string(_EncryptedKeyType->property_Type, env, AXIS2_URI_UNP_OMITUSERINFO);
                           string_to_stream = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) *
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(text_value) + 
                                                             axutil_strlen("Type")));
                           sprintf(string_to_stream, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "Type",  text_value);
                           axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
                           AXIS2_FREE(env-> allocator, string_to_stream);
                        
                   }
                   
                if(_EncryptedKeyType->is_valid_MimeType)
                {
                
                        p_prefix = NULL;
                      
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(_EncryptedKeyType->property_MimeType) + 
                                                                axutil_strlen("MimeType")));
                           sprintf(text_value, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "MimeType", _EncryptedKeyType->property_MimeType);
                           axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
                if(_EncryptedKeyType->is_valid_Encoding)
                {
                
                        p_prefix = NULL;
                      
                           text_value = axutil_uri_to_string(_EncryptedKeyType->property_Encoding, env, AXIS2_URI_UNP_OMITUSERINFO);
                           string_to_stream = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) *
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(text_value) + 
                                                             axutil_strlen("Encoding")));
                           sprintf(string_to_stream, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "Encoding",  text_value);
                           axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
                           AXIS2_FREE(env-> allocator, string_to_stream);
                        
                   }
                   
                if(_EncryptedKeyType->is_valid_Recipient)
                {
                
                        p_prefix = NULL;
                      
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(_EncryptedKeyType->property_Recipient) + 
                                                                axutil_strlen("Recipient")));
                           sprintf(text_value, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "Recipient", _EncryptedKeyType->property_Recipient);
                           axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
              string_to_stream = ">"; 
              axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
              tag_closed = 1;
            
            }
        
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/04/xmlenc#", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.w3.org/2001/04/xmlenc#", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.w3.org/2001/04/xmlenc#",
                                            p_prefix));
                       }
                      

                   if (!_EncryptedKeyType->is_valid_EncryptionMethod)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("EncryptionMethod"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("EncryptionMethod")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing EncryptionMethod element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sEncryptionMethod",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sEncryptionMethod>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_EncryptionMethodType_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_EncryptionMethodType_serialize(_EncryptedKeyType->property_EncryptionMethod, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_EncryptionMethodType_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_EncryptionMethodType_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.w3.org/2000/09/xmldsig#",
                                            p_prefix));
                       }
                      

                   if (!_EncryptedKeyType->is_valid_KeyInfo)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("KeyInfo"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("KeyInfo")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing KeyInfo element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sKeyInfo",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sKeyInfo>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_KeyInfoType_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_KeyInfoType_serialize(_EncryptedKeyType->property_KeyInfo, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_KeyInfoType_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_KeyInfoType_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/04/xmlenc#", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.w3.org/2001/04/xmlenc#", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.w3.org/2001/04/xmlenc#",
                                            p_prefix));
                       }
                      

                   if (!_EncryptedKeyType->is_valid_CipherData)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property CipherData");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("CipherData"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("CipherData")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing CipherData element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sCipherData",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sCipherData>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_CipherDataType_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_CipherDataType_serialize(_EncryptedKeyType->property_CipherData, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_CipherDataType_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_CipherDataType_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/04/xmlenc#", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.w3.org/2001/04/xmlenc#", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.w3.org/2001/04/xmlenc#",
                                            p_prefix));
                       }
                      

                   if (!_EncryptedKeyType->is_valid_EncryptionProperties)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("EncryptionProperties"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("EncryptionProperties")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing EncryptionProperties element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sEncryptionProperties",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sEncryptionProperties>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_EncryptionPropertiesType_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_EncryptionPropertiesType_serialize(_EncryptedKeyType->property_EncryptionProperties, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_EncryptionPropertiesType_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_EncryptionPropertiesType_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                    
                    if(parent_tag_closed)
                    {
                       if(_EncryptedKeyType->is_valid_Id)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = _EncryptedKeyType->property_Id;
                           text_attri = axiom_attribute_create (env, "Id", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                       
                  }
                
                    
                    if(parent_tag_closed)
                    {
                       if(_EncryptedKeyType->is_valid_Type)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = axutil_uri_to_string(_EncryptedKeyType->property_Type, env, AXIS2_URI_UNP_OMITUSERINFO);
                           text_attri = axiom_attribute_create (env, "Type", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                       
                  }
                
                    
                    if(parent_tag_closed)
                    {
                       if(_EncryptedKeyType->is_valid_MimeType)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = _EncryptedKeyType->property_MimeType;
                           text_attri = axiom_attribute_create (env, "MimeType", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                       
                  }
                
                    
                    if(parent_tag_closed)
                    {
                       if(_EncryptedKeyType->is_valid_Encoding)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = axutil_uri_to_string(_EncryptedKeyType->property_Encoding, env, AXIS2_URI_UNP_OMITUSERINFO);
                           text_attri = axiom_attribute_create (env, "Encoding", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                       
                  }
                
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/04/xmlenc#", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.w3.org/2001/04/xmlenc#", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.w3.org/2001/04/xmlenc#",
                                            p_prefix));
                       }
                      

                   if (!_EncryptedKeyType->is_valid_ReferenceList)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("ReferenceList"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("ReferenceList")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing ReferenceList element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sReferenceList",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sReferenceList>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_ReferenceList_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_ReferenceList_type0_serialize(_EncryptedKeyType->property_ReferenceList, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_ReferenceList_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_ReferenceList_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/04/xmlenc#", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.w3.org/2001/04/xmlenc#", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.w3.org/2001/04/xmlenc#",
                                            p_prefix));
                       }
                      

                   if (!_EncryptedKeyType->is_valid_CarriedKeyName)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("CarriedKeyName"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("CarriedKeyName")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing CarriedKeyName element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sCarriedKeyName>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sCarriedKeyName>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_10 = _EncryptedKeyType->property_CarriedKeyName;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_10_temp = axutil_xml_quote_string(env, text_value_10, AXIS2_TRUE);
                           if (text_value_10_temp)
                           {
                               axutil_stream_write(stream, env, text_value_10_temp, axutil_strlen(text_value_10_temp));
                               AXIS2_FREE(env->allocator, text_value_10_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_10, axutil_strlen(text_value_10));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                    
                    if(parent_tag_closed)
                    {
                       if(_EncryptedKeyType->is_valid_Recipient)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = _EncryptedKeyType->property_Recipient;
                           text_attri = axiom_attribute_create (env, "Recipient", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                       
                  }
                

            return parent;
        }


        

            /**
             * Getter for EncryptionMethod by  Property Number 1
             */
            adb_EncryptionMethodType_t* AXIS2_CALL
            adb_EncryptedKeyType_get_property1(
                adb_EncryptedKeyType_t* _EncryptedKeyType,
                const axutil_env_t *env)
            {
                return adb_EncryptedKeyType_get_EncryptionMethod(_EncryptedKeyType,
                                             env);
            }

            /**
             * getter for EncryptionMethod.
             */
            adb_EncryptionMethodType_t* AXIS2_CALL
            adb_EncryptedKeyType_get_EncryptionMethod(
                    adb_EncryptedKeyType_t* _EncryptedKeyType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, NULL);
                  

                return _EncryptedKeyType->property_EncryptionMethod;
             }

            /**
             * setter for EncryptionMethod
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptedKeyType_set_EncryptionMethod(
                    adb_EncryptedKeyType_t* _EncryptedKeyType,
                    const axutil_env_t *env,
                    adb_EncryptionMethodType_t*  arg_EncryptionMethod)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_FAILURE);
                
                if(_EncryptedKeyType->is_valid_EncryptionMethod &&
                        arg_EncryptionMethod == _EncryptedKeyType->property_EncryptionMethod)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_EncryptedKeyType_reset_EncryptionMethod(_EncryptedKeyType, env);

                
                if(NULL == arg_EncryptionMethod)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _EncryptedKeyType->property_EncryptionMethod = arg_EncryptionMethod;
                        _EncryptedKeyType->is_valid_EncryptionMethod = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for EncryptionMethod
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptedKeyType_reset_EncryptionMethod(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_FAILURE);
               

               
            
                
                if(_EncryptedKeyType->property_EncryptionMethod != NULL)
                {
                   
                   adb_EncryptionMethodType_free(_EncryptedKeyType->property_EncryptionMethod, env);
                     _EncryptedKeyType->property_EncryptionMethod = NULL;
                }
            
                
                
                _EncryptedKeyType->is_valid_EncryptionMethod = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether EncryptionMethod is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_EncryptedKeyType_is_EncryptionMethod_nil(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_TRUE);
               
               return !_EncryptedKeyType->is_valid_EncryptionMethod;
           }

           /**
            * Set EncryptionMethod to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptedKeyType_set_EncryptionMethod_nil(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               return adb_EncryptedKeyType_reset_EncryptionMethod(_EncryptedKeyType, env);
           }

           

            /**
             * Getter for KeyInfo by  Property Number 2
             */
            adb_KeyInfoType_t* AXIS2_CALL
            adb_EncryptedKeyType_get_property2(
                adb_EncryptedKeyType_t* _EncryptedKeyType,
                const axutil_env_t *env)
            {
                return adb_EncryptedKeyType_get_KeyInfo(_EncryptedKeyType,
                                             env);
            }

            /**
             * getter for KeyInfo.
             */
            adb_KeyInfoType_t* AXIS2_CALL
            adb_EncryptedKeyType_get_KeyInfo(
                    adb_EncryptedKeyType_t* _EncryptedKeyType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, NULL);
                  

                return _EncryptedKeyType->property_KeyInfo;
             }

            /**
             * setter for KeyInfo
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptedKeyType_set_KeyInfo(
                    adb_EncryptedKeyType_t* _EncryptedKeyType,
                    const axutil_env_t *env,
                    adb_KeyInfoType_t*  arg_KeyInfo)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_FAILURE);
                
                if(_EncryptedKeyType->is_valid_KeyInfo &&
                        arg_KeyInfo == _EncryptedKeyType->property_KeyInfo)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_EncryptedKeyType_reset_KeyInfo(_EncryptedKeyType, env);

                
                if(NULL == arg_KeyInfo)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _EncryptedKeyType->property_KeyInfo = arg_KeyInfo;
                        _EncryptedKeyType->is_valid_KeyInfo = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for KeyInfo
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptedKeyType_reset_KeyInfo(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_FAILURE);
               

               
            
                
                if(_EncryptedKeyType->property_KeyInfo != NULL)
                {
                   
                   adb_KeyInfoType_free(_EncryptedKeyType->property_KeyInfo, env);
                     _EncryptedKeyType->property_KeyInfo = NULL;
                }
            
                
                
                _EncryptedKeyType->is_valid_KeyInfo = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether KeyInfo is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_EncryptedKeyType_is_KeyInfo_nil(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_TRUE);
               
               return !_EncryptedKeyType->is_valid_KeyInfo;
           }

           /**
            * Set KeyInfo to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptedKeyType_set_KeyInfo_nil(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               return adb_EncryptedKeyType_reset_KeyInfo(_EncryptedKeyType, env);
           }

           

            /**
             * Getter for CipherData by  Property Number 3
             */
            adb_CipherDataType_t* AXIS2_CALL
            adb_EncryptedKeyType_get_property3(
                adb_EncryptedKeyType_t* _EncryptedKeyType,
                const axutil_env_t *env)
            {
                return adb_EncryptedKeyType_get_CipherData(_EncryptedKeyType,
                                             env);
            }

            /**
             * getter for CipherData.
             */
            adb_CipherDataType_t* AXIS2_CALL
            adb_EncryptedKeyType_get_CipherData(
                    adb_EncryptedKeyType_t* _EncryptedKeyType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, NULL);
                  

                return _EncryptedKeyType->property_CipherData;
             }

            /**
             * setter for CipherData
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptedKeyType_set_CipherData(
                    adb_EncryptedKeyType_t* _EncryptedKeyType,
                    const axutil_env_t *env,
                    adb_CipherDataType_t*  arg_CipherData)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_FAILURE);
                
                if(_EncryptedKeyType->is_valid_CipherData &&
                        arg_CipherData == _EncryptedKeyType->property_CipherData)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_CipherData)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "CipherData is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_EncryptedKeyType_reset_CipherData(_EncryptedKeyType, env);

                
                if(NULL == arg_CipherData)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _EncryptedKeyType->property_CipherData = arg_CipherData;
                        _EncryptedKeyType->is_valid_CipherData = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for CipherData
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptedKeyType_reset_CipherData(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_FAILURE);
               

               
            
                
                if(_EncryptedKeyType->property_CipherData != NULL)
                {
                   
                   adb_CipherDataType_free(_EncryptedKeyType->property_CipherData, env);
                     _EncryptedKeyType->property_CipherData = NULL;
                }
            
                
                
                _EncryptedKeyType->is_valid_CipherData = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether CipherData is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_EncryptedKeyType_is_CipherData_nil(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_TRUE);
               
               return !_EncryptedKeyType->is_valid_CipherData;
           }

           /**
            * Set CipherData to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptedKeyType_set_CipherData_nil(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               return adb_EncryptedKeyType_reset_CipherData(_EncryptedKeyType, env);
           }

           

            /**
             * Getter for EncryptionProperties by  Property Number 4
             */
            adb_EncryptionPropertiesType_t* AXIS2_CALL
            adb_EncryptedKeyType_get_property4(
                adb_EncryptedKeyType_t* _EncryptedKeyType,
                const axutil_env_t *env)
            {
                return adb_EncryptedKeyType_get_EncryptionProperties(_EncryptedKeyType,
                                             env);
            }

            /**
             * getter for EncryptionProperties.
             */
            adb_EncryptionPropertiesType_t* AXIS2_CALL
            adb_EncryptedKeyType_get_EncryptionProperties(
                    adb_EncryptedKeyType_t* _EncryptedKeyType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, NULL);
                  

                return _EncryptedKeyType->property_EncryptionProperties;
             }

            /**
             * setter for EncryptionProperties
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptedKeyType_set_EncryptionProperties(
                    adb_EncryptedKeyType_t* _EncryptedKeyType,
                    const axutil_env_t *env,
                    adb_EncryptionPropertiesType_t*  arg_EncryptionProperties)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_FAILURE);
                
                if(_EncryptedKeyType->is_valid_EncryptionProperties &&
                        arg_EncryptionProperties == _EncryptedKeyType->property_EncryptionProperties)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_EncryptedKeyType_reset_EncryptionProperties(_EncryptedKeyType, env);

                
                if(NULL == arg_EncryptionProperties)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _EncryptedKeyType->property_EncryptionProperties = arg_EncryptionProperties;
                        _EncryptedKeyType->is_valid_EncryptionProperties = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for EncryptionProperties
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptedKeyType_reset_EncryptionProperties(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_FAILURE);
               

               
            
                
                if(_EncryptedKeyType->property_EncryptionProperties != NULL)
                {
                   
                   adb_EncryptionPropertiesType_free(_EncryptedKeyType->property_EncryptionProperties, env);
                     _EncryptedKeyType->property_EncryptionProperties = NULL;
                }
            
                
                
                _EncryptedKeyType->is_valid_EncryptionProperties = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether EncryptionProperties is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_EncryptedKeyType_is_EncryptionProperties_nil(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_TRUE);
               
               return !_EncryptedKeyType->is_valid_EncryptionProperties;
           }

           /**
            * Set EncryptionProperties to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptedKeyType_set_EncryptionProperties_nil(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               return adb_EncryptedKeyType_reset_EncryptionProperties(_EncryptedKeyType, env);
           }

           

            /**
             * Getter for Id by  Property Number 5
             */
            axis2_char_t* AXIS2_CALL
            adb_EncryptedKeyType_get_property5(
                adb_EncryptedKeyType_t* _EncryptedKeyType,
                const axutil_env_t *env)
            {
                return adb_EncryptedKeyType_get_Id(_EncryptedKeyType,
                                             env);
            }

            /**
             * getter for Id.
             */
            axis2_char_t* AXIS2_CALL
            adb_EncryptedKeyType_get_Id(
                    adb_EncryptedKeyType_t* _EncryptedKeyType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, NULL);
                  

                return _EncryptedKeyType->property_Id;
             }

            /**
             * setter for Id
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptedKeyType_set_Id(
                    adb_EncryptedKeyType_t* _EncryptedKeyType,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_Id)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_FAILURE);
                
                if(_EncryptedKeyType->is_valid_Id &&
                        arg_Id == _EncryptedKeyType->property_Id)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_Id)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Id is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_EncryptedKeyType_reset_Id(_EncryptedKeyType, env);

                
                if(NULL == arg_Id)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _EncryptedKeyType->property_Id = (axis2_char_t *)axutil_strdup(env, arg_Id);
                        if(NULL == _EncryptedKeyType->property_Id)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for Id");
                            return AXIS2_FAILURE;
                        }
                        _EncryptedKeyType->is_valid_Id = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for Id
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptedKeyType_reset_Id(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_FAILURE);
               

               
            
                
                if(_EncryptedKeyType->property_Id != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _EncryptedKeyType->property_Id);
                     _EncryptedKeyType->property_Id = NULL;
                }
            
                
                
                _EncryptedKeyType->is_valid_Id = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether Id is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_EncryptedKeyType_is_Id_nil(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_TRUE);
               
               return !_EncryptedKeyType->is_valid_Id;
           }

           /**
            * Set Id to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptedKeyType_set_Id_nil(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               return adb_EncryptedKeyType_reset_Id(_EncryptedKeyType, env);
           }

           

            /**
             * Getter for Type by  Property Number 6
             */
            axutil_uri_t* AXIS2_CALL
            adb_EncryptedKeyType_get_property6(
                adb_EncryptedKeyType_t* _EncryptedKeyType,
                const axutil_env_t *env)
            {
                return adb_EncryptedKeyType_get_Type(_EncryptedKeyType,
                                             env);
            }

            /**
             * getter for Type.
             */
            axutil_uri_t* AXIS2_CALL
            adb_EncryptedKeyType_get_Type(
                    adb_EncryptedKeyType_t* _EncryptedKeyType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, NULL);
                  

                return _EncryptedKeyType->property_Type;
             }

            /**
             * setter for Type
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptedKeyType_set_Type(
                    adb_EncryptedKeyType_t* _EncryptedKeyType,
                    const axutil_env_t *env,
                    axutil_uri_t*  arg_Type)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_FAILURE);
                
                if(_EncryptedKeyType->is_valid_Type &&
                        arg_Type == _EncryptedKeyType->property_Type)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_Type)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Type is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_EncryptedKeyType_reset_Type(_EncryptedKeyType, env);

                
                if(NULL == arg_Type)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _EncryptedKeyType->property_Type = arg_Type;
                        _EncryptedKeyType->is_valid_Type = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for Type
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptedKeyType_reset_Type(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_FAILURE);
               

               
            
                
                if(_EncryptedKeyType->property_Type != NULL)
                {
                   
                   
                      axutil_uri_free(_EncryptedKeyType->property_Type, env);
                     _EncryptedKeyType->property_Type = NULL;
                }
            
                
                
                _EncryptedKeyType->is_valid_Type = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether Type is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_EncryptedKeyType_is_Type_nil(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_TRUE);
               
               return !_EncryptedKeyType->is_valid_Type;
           }

           /**
            * Set Type to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptedKeyType_set_Type_nil(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               return adb_EncryptedKeyType_reset_Type(_EncryptedKeyType, env);
           }

           

            /**
             * Getter for MimeType by  Property Number 7
             */
            axis2_char_t* AXIS2_CALL
            adb_EncryptedKeyType_get_property7(
                adb_EncryptedKeyType_t* _EncryptedKeyType,
                const axutil_env_t *env)
            {
                return adb_EncryptedKeyType_get_MimeType(_EncryptedKeyType,
                                             env);
            }

            /**
             * getter for MimeType.
             */
            axis2_char_t* AXIS2_CALL
            adb_EncryptedKeyType_get_MimeType(
                    adb_EncryptedKeyType_t* _EncryptedKeyType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, NULL);
                  

                return _EncryptedKeyType->property_MimeType;
             }

            /**
             * setter for MimeType
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptedKeyType_set_MimeType(
                    adb_EncryptedKeyType_t* _EncryptedKeyType,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_MimeType)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_FAILURE);
                
                if(_EncryptedKeyType->is_valid_MimeType &&
                        arg_MimeType == _EncryptedKeyType->property_MimeType)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_MimeType)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "MimeType is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_EncryptedKeyType_reset_MimeType(_EncryptedKeyType, env);

                
                if(NULL == arg_MimeType)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _EncryptedKeyType->property_MimeType = (axis2_char_t *)axutil_strdup(env, arg_MimeType);
                        if(NULL == _EncryptedKeyType->property_MimeType)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for MimeType");
                            return AXIS2_FAILURE;
                        }
                        _EncryptedKeyType->is_valid_MimeType = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for MimeType
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptedKeyType_reset_MimeType(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_FAILURE);
               

               
            
                
                if(_EncryptedKeyType->property_MimeType != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _EncryptedKeyType->property_MimeType);
                     _EncryptedKeyType->property_MimeType = NULL;
                }
            
                
                
                _EncryptedKeyType->is_valid_MimeType = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether MimeType is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_EncryptedKeyType_is_MimeType_nil(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_TRUE);
               
               return !_EncryptedKeyType->is_valid_MimeType;
           }

           /**
            * Set MimeType to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptedKeyType_set_MimeType_nil(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               return adb_EncryptedKeyType_reset_MimeType(_EncryptedKeyType, env);
           }

           

            /**
             * Getter for Encoding by  Property Number 8
             */
            axutil_uri_t* AXIS2_CALL
            adb_EncryptedKeyType_get_property8(
                adb_EncryptedKeyType_t* _EncryptedKeyType,
                const axutil_env_t *env)
            {
                return adb_EncryptedKeyType_get_Encoding(_EncryptedKeyType,
                                             env);
            }

            /**
             * getter for Encoding.
             */
            axutil_uri_t* AXIS2_CALL
            adb_EncryptedKeyType_get_Encoding(
                    adb_EncryptedKeyType_t* _EncryptedKeyType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, NULL);
                  

                return _EncryptedKeyType->property_Encoding;
             }

            /**
             * setter for Encoding
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptedKeyType_set_Encoding(
                    adb_EncryptedKeyType_t* _EncryptedKeyType,
                    const axutil_env_t *env,
                    axutil_uri_t*  arg_Encoding)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_FAILURE);
                
                if(_EncryptedKeyType->is_valid_Encoding &&
                        arg_Encoding == _EncryptedKeyType->property_Encoding)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_Encoding)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Encoding is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_EncryptedKeyType_reset_Encoding(_EncryptedKeyType, env);

                
                if(NULL == arg_Encoding)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _EncryptedKeyType->property_Encoding = arg_Encoding;
                        _EncryptedKeyType->is_valid_Encoding = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for Encoding
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptedKeyType_reset_Encoding(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_FAILURE);
               

               
            
                
                if(_EncryptedKeyType->property_Encoding != NULL)
                {
                   
                   
                      axutil_uri_free(_EncryptedKeyType->property_Encoding, env);
                     _EncryptedKeyType->property_Encoding = NULL;
                }
            
                
                
                _EncryptedKeyType->is_valid_Encoding = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether Encoding is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_EncryptedKeyType_is_Encoding_nil(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_TRUE);
               
               return !_EncryptedKeyType->is_valid_Encoding;
           }

           /**
            * Set Encoding to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptedKeyType_set_Encoding_nil(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               return adb_EncryptedKeyType_reset_Encoding(_EncryptedKeyType, env);
           }

           

            /**
             * Getter for ReferenceList by  Property Number 9
             */
            adb_ReferenceList_type0_t* AXIS2_CALL
            adb_EncryptedKeyType_get_property9(
                adb_EncryptedKeyType_t* _EncryptedKeyType,
                const axutil_env_t *env)
            {
                return adb_EncryptedKeyType_get_ReferenceList(_EncryptedKeyType,
                                             env);
            }

            /**
             * getter for ReferenceList.
             */
            adb_ReferenceList_type0_t* AXIS2_CALL
            adb_EncryptedKeyType_get_ReferenceList(
                    adb_EncryptedKeyType_t* _EncryptedKeyType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, NULL);
                  

                return _EncryptedKeyType->property_ReferenceList;
             }

            /**
             * setter for ReferenceList
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptedKeyType_set_ReferenceList(
                    adb_EncryptedKeyType_t* _EncryptedKeyType,
                    const axutil_env_t *env,
                    adb_ReferenceList_type0_t*  arg_ReferenceList)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_FAILURE);
                
                if(_EncryptedKeyType->is_valid_ReferenceList &&
                        arg_ReferenceList == _EncryptedKeyType->property_ReferenceList)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_EncryptedKeyType_reset_ReferenceList(_EncryptedKeyType, env);

                
                if(NULL == arg_ReferenceList)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _EncryptedKeyType->property_ReferenceList = arg_ReferenceList;
                        _EncryptedKeyType->is_valid_ReferenceList = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for ReferenceList
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptedKeyType_reset_ReferenceList(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_FAILURE);
               

               
            
                
                if(_EncryptedKeyType->property_ReferenceList != NULL)
                {
                   
                   adb_ReferenceList_type0_free(_EncryptedKeyType->property_ReferenceList, env);
                     _EncryptedKeyType->property_ReferenceList = NULL;
                }
            
                
                
                _EncryptedKeyType->is_valid_ReferenceList = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether ReferenceList is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_EncryptedKeyType_is_ReferenceList_nil(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_TRUE);
               
               return !_EncryptedKeyType->is_valid_ReferenceList;
           }

           /**
            * Set ReferenceList to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptedKeyType_set_ReferenceList_nil(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               return adb_EncryptedKeyType_reset_ReferenceList(_EncryptedKeyType, env);
           }

           

            /**
             * Getter for CarriedKeyName by  Property Number 10
             */
            axis2_char_t* AXIS2_CALL
            adb_EncryptedKeyType_get_property10(
                adb_EncryptedKeyType_t* _EncryptedKeyType,
                const axutil_env_t *env)
            {
                return adb_EncryptedKeyType_get_CarriedKeyName(_EncryptedKeyType,
                                             env);
            }

            /**
             * getter for CarriedKeyName.
             */
            axis2_char_t* AXIS2_CALL
            adb_EncryptedKeyType_get_CarriedKeyName(
                    adb_EncryptedKeyType_t* _EncryptedKeyType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, NULL);
                  

                return _EncryptedKeyType->property_CarriedKeyName;
             }

            /**
             * setter for CarriedKeyName
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptedKeyType_set_CarriedKeyName(
                    adb_EncryptedKeyType_t* _EncryptedKeyType,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_CarriedKeyName)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_FAILURE);
                
                if(_EncryptedKeyType->is_valid_CarriedKeyName &&
                        arg_CarriedKeyName == _EncryptedKeyType->property_CarriedKeyName)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_EncryptedKeyType_reset_CarriedKeyName(_EncryptedKeyType, env);

                
                if(NULL == arg_CarriedKeyName)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _EncryptedKeyType->property_CarriedKeyName = (axis2_char_t *)axutil_strdup(env, arg_CarriedKeyName);
                        if(NULL == _EncryptedKeyType->property_CarriedKeyName)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for CarriedKeyName");
                            return AXIS2_FAILURE;
                        }
                        _EncryptedKeyType->is_valid_CarriedKeyName = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for CarriedKeyName
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptedKeyType_reset_CarriedKeyName(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_FAILURE);
               

               
            
                
                if(_EncryptedKeyType->property_CarriedKeyName != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _EncryptedKeyType->property_CarriedKeyName);
                     _EncryptedKeyType->property_CarriedKeyName = NULL;
                }
            
                
                
                _EncryptedKeyType->is_valid_CarriedKeyName = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether CarriedKeyName is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_EncryptedKeyType_is_CarriedKeyName_nil(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_TRUE);
               
               return !_EncryptedKeyType->is_valid_CarriedKeyName;
           }

           /**
            * Set CarriedKeyName to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptedKeyType_set_CarriedKeyName_nil(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               return adb_EncryptedKeyType_reset_CarriedKeyName(_EncryptedKeyType, env);
           }

           

            /**
             * Getter for Recipient by  Property Number 11
             */
            axis2_char_t* AXIS2_CALL
            adb_EncryptedKeyType_get_property11(
                adb_EncryptedKeyType_t* _EncryptedKeyType,
                const axutil_env_t *env)
            {
                return adb_EncryptedKeyType_get_Recipient(_EncryptedKeyType,
                                             env);
            }

            /**
             * getter for Recipient.
             */
            axis2_char_t* AXIS2_CALL
            adb_EncryptedKeyType_get_Recipient(
                    adb_EncryptedKeyType_t* _EncryptedKeyType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, NULL);
                  

                return _EncryptedKeyType->property_Recipient;
             }

            /**
             * setter for Recipient
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptedKeyType_set_Recipient(
                    adb_EncryptedKeyType_t* _EncryptedKeyType,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_Recipient)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_FAILURE);
                
                if(_EncryptedKeyType->is_valid_Recipient &&
                        arg_Recipient == _EncryptedKeyType->property_Recipient)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_Recipient)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Recipient is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_EncryptedKeyType_reset_Recipient(_EncryptedKeyType, env);

                
                if(NULL == arg_Recipient)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _EncryptedKeyType->property_Recipient = (axis2_char_t *)axutil_strdup(env, arg_Recipient);
                        if(NULL == _EncryptedKeyType->property_Recipient)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for Recipient");
                            return AXIS2_FAILURE;
                        }
                        _EncryptedKeyType->is_valid_Recipient = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for Recipient
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptedKeyType_reset_Recipient(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_FAILURE);
               

               
            
                
                if(_EncryptedKeyType->property_Recipient != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _EncryptedKeyType->property_Recipient);
                     _EncryptedKeyType->property_Recipient = NULL;
                }
            
                
                
                _EncryptedKeyType->is_valid_Recipient = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether Recipient is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_EncryptedKeyType_is_Recipient_nil(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _EncryptedKeyType, AXIS2_TRUE);
               
               return !_EncryptedKeyType->is_valid_Recipient;
           }

           /**
            * Set Recipient to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptedKeyType_set_Recipient_nil(
                   adb_EncryptedKeyType_t* _EncryptedKeyType,
                   const axutil_env_t *env)
           {
               return adb_EncryptedKeyType_reset_Recipient(_EncryptedKeyType, env);
           }

           

