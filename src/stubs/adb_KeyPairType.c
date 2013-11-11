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
         * adb_KeyPairType.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_KeyPairType.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = KeyPairType
                 * Namespace URI = http://www.daisy.org/DRM/2005/KeyExchange
                 * Namespace Prefix = ns7
                 */
           


        struct adb_KeyPairType
        {
            axis2_char_t *property_TypeName;

            adb_KeyInfoType_t* property_KeyInfo;

                
                axis2_bool_t is_valid_KeyInfo;
            adb_EncryptedKeyType_t* property_EncryptedKey;

                
                axis2_bool_t is_valid_EncryptedKey;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_KeyPairType_set_KeyInfo_nil(
                        adb_KeyPairType_t* _KeyPairType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_KeyPairType_set_EncryptedKey_nil(
                        adb_KeyPairType_t* _KeyPairType,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_KeyPairType_t* AXIS2_CALL
        adb_KeyPairType_create(
            const axutil_env_t *env)
        {
            adb_KeyPairType_t *_KeyPairType = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _KeyPairType = (adb_KeyPairType_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_KeyPairType_t));

            if(NULL == _KeyPairType)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_KeyPairType, 0, sizeof(adb_KeyPairType_t));

            _KeyPairType->property_TypeName = axutil_strdup(env, "adb_KeyPairType");
            _KeyPairType->property_KeyInfo  = NULL;
                  _KeyPairType->is_valid_KeyInfo  = AXIS2_FALSE;
            _KeyPairType->property_EncryptedKey  = NULL;
                  _KeyPairType->is_valid_EncryptedKey  = AXIS2_FALSE;
            

            return _KeyPairType;
        }

        adb_KeyPairType_t* AXIS2_CALL
        adb_KeyPairType_create_with_values(
            const axutil_env_t *env,
                adb_KeyInfoType_t* _KeyInfo,
                adb_EncryptedKeyType_t* _EncryptedKey)
        {
            adb_KeyPairType_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_KeyPairType_create(env);

            
              status = adb_KeyPairType_set_KeyInfo(
                                     adb_obj,
                                     env,
                                     _KeyInfo);
              if(status == AXIS2_FAILURE) {
                  adb_KeyPairType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_KeyPairType_set_EncryptedKey(
                                     adb_obj,
                                     env,
                                     _EncryptedKey);
              if(status == AXIS2_FAILURE) {
                  adb_KeyPairType_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        adb_KeyInfoType_t* AXIS2_CALL
                adb_KeyPairType_free_popping_value(
                        adb_KeyPairType_t* _KeyPairType,
                        const axutil_env_t *env)
                {
                    adb_KeyInfoType_t* value;

                    
                    
                    value = _KeyPairType->property_KeyInfo;

                    _KeyPairType->property_KeyInfo = (adb_KeyInfoType_t*)NULL;
                    adb_KeyPairType_free(_KeyPairType, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_KeyPairType_free(
                adb_KeyPairType_t* _KeyPairType,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _KeyPairType,
                env,
                "adb_KeyPairType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_KeyPairType_free_obj(
                adb_KeyPairType_t* _KeyPairType,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _KeyPairType, AXIS2_FAILURE);

            if (_KeyPairType->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _KeyPairType->property_TypeName);
            }

            adb_KeyPairType_reset_KeyInfo(_KeyPairType, env);
            adb_KeyPairType_reset_EncryptedKey(_KeyPairType, env);
            

            if(_KeyPairType)
            {
                AXIS2_FREE(env->allocator, _KeyPairType);
                _KeyPairType = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_KeyPairType_deserialize(
                adb_KeyPairType_t* _KeyPairType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _KeyPairType,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_KeyPairType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_KeyPairType_deserialize_obj(
                adb_KeyPairType_t* _KeyPairType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
          
              void *element = NULL;
           
             const axis2_char_t* text_value = NULL;
             axutil_qname_t *qname = NULL;
          
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _KeyPairType, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for KeyPairType : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    

                     
                     /*
                      * building KeyInfo element
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
                                          status = adb_KeyPairType_set_KeyInfo(_KeyPairType, env,
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
                           
                              else if(!dont_care_minoccurs)
                              {
                                  if(element_qname)
                                  {
                                      axutil_qname_free(element_qname, env);
                                  }
                                  /* this is not a nillable element*/
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element KeyInfo missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building EncryptedKey element
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
                                 
                                 element_qname = axutil_qname_create(env, "EncryptedKey", "http://www.w3.org/2001/04/xmlenc#", NULL);
                                 

                           if (adb_EncryptedKeyType_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_EncryptedKeyType");

                                      status =  adb_EncryptedKeyType_deserialize((adb_EncryptedKeyType_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element EncryptedKey");
                                      }
                                      else
                                      {
                                          status = adb_KeyPairType_set_EncryptedKey(_KeyPairType, env,
                                                                   (adb_EncryptedKeyType_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for EncryptedKey ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element EncryptedKey missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_KeyPairType_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_KeyPairType_declare_parent_namespaces(
                    adb_KeyPairType_t* _KeyPairType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_KeyPairType_serialize(
                adb_KeyPairType_t* _KeyPairType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_KeyPairType == NULL)
            {
                return adb_KeyPairType_serialize_obj(
                    _KeyPairType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _KeyPairType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_KeyPairType");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_KeyPairType_serialize_obj(
                adb_KeyPairType_t* _KeyPairType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
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
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _KeyPairType, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
              
 
              if(!(xsi_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING)))
              {
                  /* it is better to stick with the standard prefix */
                  xsi_prefix = (axis2_char_t*)axutil_strdup(env, "xsi");
                  
                  axutil_hash_set(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING, xsi_prefix);

                  if(parent_element)
                  {
                        axiom_namespace_t *element_ns = NULL;
                        element_ns = axiom_namespace_create(env, "http://www.w3.org/2001/XMLSchema-instance",
                                                            xsi_prefix);
                        axiom_element_declare_namespace_assume_param_ownership(parent_element, env, element_ns);
                  }
              }
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"KeyPairType\"", NULL);
              axutil_stream_write(stream, env, type_attrib, axutil_strlen(type_attrib));

              AXIS2_FREE(env->allocator, type_attrib);
                
              string_to_stream = ">"; 
              axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
              tag_closed = 1;
            
            }
            else {
              /* if the parent tag closed we would be able to declare the type directly on the parent element */ 
              if(!(xsi_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING)))
              {
                  /* it is better to stick with the standard prefix */
                  xsi_prefix = (axis2_char_t*)axutil_strdup(env, "xsi");
                  
                  axutil_hash_set(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING, xsi_prefix);

                  if(parent_element)
                  {
                        axiom_namespace_t *element_ns = NULL;
                        element_ns = axiom_namespace_create(env, "http://www.w3.org/2001/XMLSchema-instance",
                                                            xsi_prefix);
                        axiom_element_declare_namespace_assume_param_ownership(parent_element, env, element_ns);
                  }
              }
            }
            xsi_ns = axiom_namespace_create (env,
                                 "http://www.daisy.org/DRM/2005/KeyExchange",
                                 xsi_prefix);
            xsi_type_attri = axiom_attribute_create (env, "type", "KeyPairType", xsi_ns);
            
            axiom_element_add_attribute (parent_element, env, xsi_type_attri, parent);
        
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.w3.org/2000/09/xmldsig#",
                                            p_prefix));
                       }
                      

                   if (!_KeyPairType->is_valid_KeyInfo)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property KeyInfo");
                            return NULL;
                          
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
                            adb_KeyInfoType_serialize(_KeyPairType->property_KeyInfo, 
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
                      

                   if (!_KeyPairType->is_valid_EncryptedKey)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property EncryptedKey");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("EncryptedKey"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("EncryptedKey")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing EncryptedKey element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sEncryptedKey",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sEncryptedKey>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_EncryptedKeyType_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_EncryptedKeyType_serialize(_KeyPairType->property_EncryptedKey, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_EncryptedKeyType_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_EncryptedKeyType_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 

            return parent;
        }


        

            /**
             * Getter for KeyInfo by  Property Number 1
             */
            adb_KeyInfoType_t* AXIS2_CALL
            adb_KeyPairType_get_property1(
                adb_KeyPairType_t* _KeyPairType,
                const axutil_env_t *env)
            {
                return adb_KeyPairType_get_KeyInfo(_KeyPairType,
                                             env);
            }

            /**
             * getter for KeyInfo.
             */
            adb_KeyInfoType_t* AXIS2_CALL
            adb_KeyPairType_get_KeyInfo(
                    adb_KeyPairType_t* _KeyPairType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _KeyPairType, NULL);
                  

                return _KeyPairType->property_KeyInfo;
             }

            /**
             * setter for KeyInfo
             */
            axis2_status_t AXIS2_CALL
            adb_KeyPairType_set_KeyInfo(
                    adb_KeyPairType_t* _KeyPairType,
                    const axutil_env_t *env,
                    adb_KeyInfoType_t*  arg_KeyInfo)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _KeyPairType, AXIS2_FAILURE);
                
                if(_KeyPairType->is_valid_KeyInfo &&
                        arg_KeyInfo == _KeyPairType->property_KeyInfo)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_KeyInfo)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "KeyInfo is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_KeyPairType_reset_KeyInfo(_KeyPairType, env);

                
                if(NULL == arg_KeyInfo)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _KeyPairType->property_KeyInfo = arg_KeyInfo;
                        _KeyPairType->is_valid_KeyInfo = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for KeyInfo
            */
           axis2_status_t AXIS2_CALL
           adb_KeyPairType_reset_KeyInfo(
                   adb_KeyPairType_t* _KeyPairType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _KeyPairType, AXIS2_FAILURE);
               

               
            
                
                if(_KeyPairType->property_KeyInfo != NULL)
                {
                   
                   adb_KeyInfoType_free(_KeyPairType->property_KeyInfo, env);
                     _KeyPairType->property_KeyInfo = NULL;
                }
            
                
                
                _KeyPairType->is_valid_KeyInfo = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether KeyInfo is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_KeyPairType_is_KeyInfo_nil(
                   adb_KeyPairType_t* _KeyPairType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _KeyPairType, AXIS2_TRUE);
               
               return !_KeyPairType->is_valid_KeyInfo;
           }

           /**
            * Set KeyInfo to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_KeyPairType_set_KeyInfo_nil(
                   adb_KeyPairType_t* _KeyPairType,
                   const axutil_env_t *env)
           {
               return adb_KeyPairType_reset_KeyInfo(_KeyPairType, env);
           }

           

            /**
             * Getter for EncryptedKey by  Property Number 2
             */
            adb_EncryptedKeyType_t* AXIS2_CALL
            adb_KeyPairType_get_property2(
                adb_KeyPairType_t* _KeyPairType,
                const axutil_env_t *env)
            {
                return adb_KeyPairType_get_EncryptedKey(_KeyPairType,
                                             env);
            }

            /**
             * getter for EncryptedKey.
             */
            adb_EncryptedKeyType_t* AXIS2_CALL
            adb_KeyPairType_get_EncryptedKey(
                    adb_KeyPairType_t* _KeyPairType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _KeyPairType, NULL);
                  

                return _KeyPairType->property_EncryptedKey;
             }

            /**
             * setter for EncryptedKey
             */
            axis2_status_t AXIS2_CALL
            adb_KeyPairType_set_EncryptedKey(
                    adb_KeyPairType_t* _KeyPairType,
                    const axutil_env_t *env,
                    adb_EncryptedKeyType_t*  arg_EncryptedKey)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _KeyPairType, AXIS2_FAILURE);
                
                if(_KeyPairType->is_valid_EncryptedKey &&
                        arg_EncryptedKey == _KeyPairType->property_EncryptedKey)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_EncryptedKey)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "EncryptedKey is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_KeyPairType_reset_EncryptedKey(_KeyPairType, env);

                
                if(NULL == arg_EncryptedKey)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _KeyPairType->property_EncryptedKey = arg_EncryptedKey;
                        _KeyPairType->is_valid_EncryptedKey = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for EncryptedKey
            */
           axis2_status_t AXIS2_CALL
           adb_KeyPairType_reset_EncryptedKey(
                   adb_KeyPairType_t* _KeyPairType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _KeyPairType, AXIS2_FAILURE);
               

               
            
                
                if(_KeyPairType->property_EncryptedKey != NULL)
                {
                   
                   adb_EncryptedKeyType_free(_KeyPairType->property_EncryptedKey, env);
                     _KeyPairType->property_EncryptedKey = NULL;
                }
            
                
                
                _KeyPairType->is_valid_EncryptedKey = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether EncryptedKey is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_KeyPairType_is_EncryptedKey_nil(
                   adb_KeyPairType_t* _KeyPairType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _KeyPairType, AXIS2_TRUE);
               
               return !_KeyPairType->is_valid_EncryptedKey;
           }

           /**
            * Set EncryptedKey to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_KeyPairType_set_EncryptedKey_nil(
                   adb_KeyPairType_t* _KeyPairType,
                   const axutil_env_t *env)
           {
               return adb_KeyPairType_reset_EncryptedKey(_KeyPairType, env);
           }

           

