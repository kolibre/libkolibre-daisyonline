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
         * adb_KeyExchange.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_KeyExchange.h"
        
               /*
                * implmentation of the KeyExchange|http://www.daisy.org/DRM/2005/KeyExchange element
                */
           


        struct adb_KeyExchange
        {
            axis2_char_t *property_TypeName;

            
                axutil_qname_t* qname;
            adb_IssuerType_t* property_Issuer;

                
                axis2_bool_t is_valid_Issuer;
            axutil_array_list_t* property_KeyExchangeChoice_type0;

                
                axis2_bool_t is_valid_KeyExchangeChoice_type0;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_KeyExchange_set_Issuer_nil(
                        adb_KeyExchange_t* _KeyExchange,
                        const axutil_env_t *env);
            
                 axis2_status_t AXIS2_CALL
                 adb_KeyExchange_set_KeyExchangeChoice_type0_nil_at(
                        adb_KeyExchange_t* _KeyExchange, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_KeyExchange_set_KeyExchangeChoice_type0_nil(
                        adb_KeyExchange_t* _KeyExchange,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_KeyExchange_t* AXIS2_CALL
        adb_KeyExchange_create(
            const axutil_env_t *env)
        {
            adb_KeyExchange_t *_KeyExchange = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _KeyExchange = (adb_KeyExchange_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_KeyExchange_t));

            if(NULL == _KeyExchange)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_KeyExchange, 0, sizeof(adb_KeyExchange_t));

            _KeyExchange->property_TypeName = axutil_strdup(env, "adb_KeyExchange");
            _KeyExchange->property_Issuer  = NULL;
                  _KeyExchange->is_valid_Issuer  = AXIS2_FALSE;
            _KeyExchange->property_KeyExchangeChoice_type0  = NULL;
                  _KeyExchange->is_valid_KeyExchangeChoice_type0  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "KeyExchange",
                        "http://www.daisy.org/DRM/2005/KeyExchange",
                        NULL);
                _KeyExchange->qname = qname;
            

            return _KeyExchange;
        }

        adb_KeyExchange_t* AXIS2_CALL
        adb_KeyExchange_create_with_values(
            const axutil_env_t *env,
                adb_IssuerType_t* _Issuer,
                axutil_array_list_t* _KeyExchangeChoice_type0)
        {
            adb_KeyExchange_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_KeyExchange_create(env);

            
              status = adb_KeyExchange_set_Issuer(
                                     adb_obj,
                                     env,
                                     _Issuer);
              if(status == AXIS2_FAILURE) {
                  adb_KeyExchange_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_KeyExchange_set_KeyExchangeChoice_type0(
                                     adb_obj,
                                     env,
                                     _KeyExchangeChoice_type0);
              if(status == AXIS2_FAILURE) {
                  adb_KeyExchange_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        adb_IssuerType_t* AXIS2_CALL
                adb_KeyExchange_free_popping_value(
                        adb_KeyExchange_t* _KeyExchange,
                        const axutil_env_t *env)
                {
                    adb_IssuerType_t* value;

                    
                    
                    value = _KeyExchange->property_Issuer;

                    _KeyExchange->property_Issuer = (adb_IssuerType_t*)NULL;
                    adb_KeyExchange_free(_KeyExchange, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_KeyExchange_free(
                adb_KeyExchange_t* _KeyExchange,
                const axutil_env_t *env)
        {
            
            
            return adb_KeyExchange_free_obj(
                _KeyExchange,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_KeyExchange_free_obj(
                adb_KeyExchange_t* _KeyExchange,
                const axutil_env_t *env)
        {
            
                int i = 0;
                int count = 0;
                void *element = NULL;
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _KeyExchange, AXIS2_FAILURE);

            if (_KeyExchange->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _KeyExchange->property_TypeName);
            }

            adb_KeyExchange_reset_Issuer(_KeyExchange, env);
            adb_KeyExchange_reset_KeyExchangeChoice_type0(_KeyExchange, env);
            
              if(_KeyExchange->qname)
              {
                  axutil_qname_free (_KeyExchange->qname, env);
                  _KeyExchange->qname = NULL;
              }
            

            if(_KeyExchange)
            {
                AXIS2_FREE(env->allocator, _KeyExchange);
                _KeyExchange = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_KeyExchange_deserialize(
                adb_KeyExchange_t* _KeyExchange,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_KeyExchange_deserialize_obj(
                _KeyExchange,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_KeyExchange_deserialize_obj(
                adb_KeyExchange_t* _KeyExchange,
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
          
               int i = 0;
               axutil_array_list_t *arr_list = NULL;
            
               int sequence_broken = 0;
               axiom_node_t *tmp_node = NULL;
            
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _KeyExchange, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for KeyExchange : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              

                    current_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                    qname = axiom_element_get_qname(current_element, env, parent);
                    if (axutil_qname_equals(qname, env, _KeyExchange-> qname))
                    {
                        
                          first_node = axiom_node_get_first_child(parent, env);
                          
                    }
                    else
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                              "Failed in building adb object for KeyExchange : "
                              "Expected %s but returned %s",
                              axutil_qname_to_string(_KeyExchange-> qname, env),
                              axutil_qname_to_string(qname, env));
                        
                        return AXIS2_FAILURE;
                    }
                    

                     
                     /*
                      * building Issuer element
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
                                   
                                 element_qname = axutil_qname_create(env, "Issuer", "http://www.daisy.org/DRM/2005/KeyExchange", NULL);
                                 

                           if (adb_IssuerType_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_IssuerType");

                                      status =  adb_IssuerType_deserialize((adb_IssuerType_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element Issuer");
                                      }
                                      else
                                      {
                                          status = adb_KeyExchange_set_Issuer(_KeyExchange, env,
                                                                   (adb_IssuerType_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for Issuer ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element Issuer missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                    /*
                     * building KeyExchangeChoice_type0 array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building KeyExchangeChoice_type0 element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "KeyExchangeChoice_type0", "http://www.daisy.org/DRM/2005/KeyExchange", NULL);
                                  
                               
                               for (i = 0, sequence_broken = 0, current_node = (is_early_node_valid?axiom_node_get_next_sibling(current_node, env):current_node); !sequence_broken && current_node != NULL;) 
                                             
                               {
                                  if(axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                  {
                                     current_node =axiom_node_get_next_sibling(current_node, env);
                                     is_early_node_valid = AXIS2_FALSE;
                                     continue;
                                  }
                                  
                                  current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                  qname = axiom_element_get_qname(current_element, env, current_node);

                                  if (adb_KeyExchangeChoice_type0_is_particle() ||  
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_KeyExchangeChoice_type0");
                                          
                                          status =  adb_KeyExchangeChoice_type0_deserialize((adb_KeyExchangeChoice_type0_t*)element, env,
                                                                                 &current_node, &is_early_node_valid, AXIS2_FALSE);
                                          
                                          if(AXIS2_FAILURE ==  status)
                                          {
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element KeyExchangeChoice_type0 ");
                                          }
                                          else
                                          {
                                            axutil_array_list_add_at(arr_list, env, i, element);
                                          }
                                        
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for KeyExchangeChoice_type0 ");
                                         if(element_qname)
                                         {
                                            axutil_qname_free(element_qname, env);
                                         }
                                         if(arr_list)
                                         {
                                            axutil_array_list_free(arr_list, env);
                                         }
                                         return AXIS2_FAILURE;
                                     }

                                     i ++;
                                    current_node = axiom_node_get_next_sibling(current_node, env);
                                  }
                                  else
                                  {
                                      is_early_node_valid = AXIS2_FALSE;
                                      sequence_broken = 1;
                                  }
                                  
                               }

                               
                                   if (i < 1)
                                   {
                                     /* found element out of order */
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "KeyExchangeChoice_type0 (@minOccurs = '1') only have %d elements", i);
                                     if(element_qname)
                                     {
                                        axutil_qname_free(element_qname, env);
                                     }
                                     if(arr_list)
                                     {
                                        axutil_array_list_free(arr_list, env);
                                     }
                                     return AXIS2_FAILURE;
                                   }
                               

                               if(0 == axutil_array_list_size(arr_list,env))
                               {
                                    axutil_array_list_free(arr_list, env);
                               }
                               else
                               {
                                    status = adb_KeyExchange_set_KeyExchangeChoice_type0(_KeyExchange, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_KeyExchange_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_KeyExchange_declare_parent_namespaces(
                    adb_KeyExchange_t* _KeyExchange,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_KeyExchange_serialize(
                adb_KeyExchange_t* _KeyExchange,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_KeyExchange_serialize_obj(
                    _KeyExchange, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_KeyExchange_serialize_obj(
                adb_KeyExchange_t* _KeyExchange,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
         
         axiom_node_t* current_node = NULL;
         int tag_closed = 0;
         axis2_char_t* xsi_prefix = NULL;
         axiom_namespace_t* xsi_ns = NULL;
         axiom_attribute_t* xsi_type_attri = NULL;
         
                axiom_namespace_t *ns1 = NULL;

                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                axis2_char_t *p_prefix = NULL;
                axis2_bool_t ns_already_defined;
            
               int i = 0;
               int count = 0;
               void *element = NULL;
             
                    axis2_char_t text_value_1[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_2[ADB_DEFAULT_DIGIT_LIMIT];
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

             
                int next_ns_index_value = 0;
            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _KeyExchange, NULL);
            
             
                    namespaces = axutil_hash_make(env);
                    next_ns_index = &next_ns_index_value;
                     
                           ns1 = axiom_namespace_create (env,
                                             "http://www.daisy.org/DRM/2005/KeyExchange",
                                             "n"); 
                           axutil_hash_set(namespaces, "http://www.daisy.org/DRM/2005/KeyExchange", AXIS2_HASH_KEY_STRING, axutil_strdup(env, "n"));
                       
                     
                    parent_element = axiom_element_create (env, NULL, "KeyExchange", ns1 , &parent);
                    
                    
                    axiom_element_set_namespace(parent_element, env, ns1, parent);


            
                    data_source = axiom_data_source_create(env, parent, &current_node);
                    stream = axiom_data_source_get_stream(data_source, env);
                  
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.daisy.org/DRM/2005/KeyExchange", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.daisy.org/DRM/2005/KeyExchange", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.daisy.org/DRM/2005/KeyExchange",
                                            p_prefix));
                       }
                      

                   if (!_KeyExchange->is_valid_Issuer)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property Issuer");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("Issuer"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("Issuer")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing Issuer element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sIssuer",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sIssuer>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_IssuerType_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_IssuerType_serialize(_KeyExchange->property_Issuer, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_IssuerType_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_IssuerType_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.daisy.org/DRM/2005/KeyExchange", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.daisy.org/DRM/2005/KeyExchange", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.daisy.org/DRM/2005/KeyExchange",
                                            p_prefix));
                       }
                      

                   if (!_KeyExchange->is_valid_KeyExchangeChoice_type0)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property KeyExchangeChoice_type0");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("KeyExchangeChoice_type0"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("KeyExchangeChoice_type0")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing KeyExchangeChoice_type0 array
                      */
                     if (_KeyExchange->property_KeyExchangeChoice_type0 != NULL)
                     {
                        

                            sprintf(start_input_str, "<%s%sKeyExchangeChoice_type0",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%sKeyExchangeChoice_type0>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_KeyExchange->property_KeyExchangeChoice_type0, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_KeyExchange->property_KeyExchangeChoice_type0, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing KeyExchangeChoice_type0 element
                      */

                    
                     
                            if(!adb_KeyExchangeChoice_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_KeyExchangeChoice_type0_serialize((adb_KeyExchangeChoice_type0_t*)element, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_KeyExchangeChoice_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_KeyExchangeChoice_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                   if(namespaces)
                   {
                       axutil_hash_index_t *hi;
                       void *val;
                       for (hi = axutil_hash_first(namespaces, env); hi; hi = axutil_hash_next(env, hi)) 
                       {
                           axutil_hash_this(hi, NULL, NULL, &val);
                           AXIS2_FREE(env->allocator, val);
                       }
                       axutil_hash_free(namespaces, env);
                   }
                

            return parent;
        }


        

            /**
             * Getter for Issuer by  Property Number 1
             */
            adb_IssuerType_t* AXIS2_CALL
            adb_KeyExchange_get_property1(
                adb_KeyExchange_t* _KeyExchange,
                const axutil_env_t *env)
            {
                return adb_KeyExchange_get_Issuer(_KeyExchange,
                                             env);
            }

            /**
             * getter for Issuer.
             */
            adb_IssuerType_t* AXIS2_CALL
            adb_KeyExchange_get_Issuer(
                    adb_KeyExchange_t* _KeyExchange,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _KeyExchange, NULL);
                  

                return _KeyExchange->property_Issuer;
             }

            /**
             * setter for Issuer
             */
            axis2_status_t AXIS2_CALL
            adb_KeyExchange_set_Issuer(
                    adb_KeyExchange_t* _KeyExchange,
                    const axutil_env_t *env,
                    adb_IssuerType_t*  arg_Issuer)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _KeyExchange, AXIS2_FAILURE);
                
                if(_KeyExchange->is_valid_Issuer &&
                        arg_Issuer == _KeyExchange->property_Issuer)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_Issuer)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Issuer is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_KeyExchange_reset_Issuer(_KeyExchange, env);

                
                if(NULL == arg_Issuer)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _KeyExchange->property_Issuer = arg_Issuer;
                        _KeyExchange->is_valid_Issuer = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for Issuer
            */
           axis2_status_t AXIS2_CALL
           adb_KeyExchange_reset_Issuer(
                   adb_KeyExchange_t* _KeyExchange,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _KeyExchange, AXIS2_FAILURE);
               

               
            
                
                if(_KeyExchange->property_Issuer != NULL)
                {
                   
                   adb_IssuerType_free(_KeyExchange->property_Issuer, env);
                     _KeyExchange->property_Issuer = NULL;
                }
            
                
                
                _KeyExchange->is_valid_Issuer = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether Issuer is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_KeyExchange_is_Issuer_nil(
                   adb_KeyExchange_t* _KeyExchange,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _KeyExchange, AXIS2_TRUE);
               
               return !_KeyExchange->is_valid_Issuer;
           }

           /**
            * Set Issuer to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_KeyExchange_set_Issuer_nil(
                   adb_KeyExchange_t* _KeyExchange,
                   const axutil_env_t *env)
           {
               return adb_KeyExchange_reset_Issuer(_KeyExchange, env);
           }

           

            /**
             * Getter for KeyExchangeChoice_type0 by  Property Number 2
             */
            axutil_array_list_t* AXIS2_CALL
            adb_KeyExchange_get_property2(
                adb_KeyExchange_t* _KeyExchange,
                const axutil_env_t *env)
            {
                return adb_KeyExchange_get_KeyExchangeChoice_type0(_KeyExchange,
                                             env);
            }

            /**
             * getter for KeyExchangeChoice_type0.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_KeyExchange_get_KeyExchangeChoice_type0(
                    adb_KeyExchange_t* _KeyExchange,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _KeyExchange, NULL);
                  

                return _KeyExchange->property_KeyExchangeChoice_type0;
             }

            /**
             * setter for KeyExchangeChoice_type0
             */
            axis2_status_t AXIS2_CALL
            adb_KeyExchange_set_KeyExchangeChoice_type0(
                    adb_KeyExchange_t* _KeyExchange,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_KeyExchangeChoice_type0)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _KeyExchange, AXIS2_FAILURE);
                
                if(_KeyExchange->is_valid_KeyExchangeChoice_type0 &&
                        arg_KeyExchangeChoice_type0 == _KeyExchange->property_KeyExchangeChoice_type0)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_KeyExchangeChoice_type0, env);
                 
                 if (size < 1)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "KeyExchangeChoice_type0 has less than minOccurs(1)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_KeyExchangeChoice_type0, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 
                    if(!non_nil_exists)
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of KeyExchangeChoice_type0 is being set to NULL, but it is not a nullable or minOccurs=0 element");
                        return AXIS2_FAILURE;
                    }
                 
                  if(NULL == arg_KeyExchangeChoice_type0)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "KeyExchangeChoice_type0 is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_KeyExchange_reset_KeyExchangeChoice_type0(_KeyExchange, env);

                
                if(NULL == arg_KeyExchangeChoice_type0)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _KeyExchange->property_KeyExchangeChoice_type0 = arg_KeyExchangeChoice_type0;
                        if(non_nil_exists)
                        {
                            _KeyExchange->is_valid_KeyExchangeChoice_type0 = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of KeyExchangeChoice_type0.
             */
            adb_KeyExchangeChoice_type0_t* AXIS2_CALL
            adb_KeyExchange_get_KeyExchangeChoice_type0_at(
                    adb_KeyExchange_t* _KeyExchange,
                    const axutil_env_t *env, int i)
            {
                adb_KeyExchangeChoice_type0_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _KeyExchange, NULL);
                  

                if(_KeyExchange->property_KeyExchangeChoice_type0 == NULL)
                {
                    return (adb_KeyExchangeChoice_type0_t*)0;
                }
                ret_val = (adb_KeyExchangeChoice_type0_t*)axutil_array_list_get(_KeyExchange->property_KeyExchangeChoice_type0, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of KeyExchangeChoice_type0.
             */
            axis2_status_t AXIS2_CALL
            adb_KeyExchange_set_KeyExchangeChoice_type0_at(
                    adb_KeyExchange_t* _KeyExchange,
                    const axutil_env_t *env, int i,
                    adb_KeyExchangeChoice_type0_t* arg_KeyExchangeChoice_type0)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _KeyExchange, AXIS2_FAILURE);
                
                if( _KeyExchange->is_valid_KeyExchangeChoice_type0 &&
                    _KeyExchange->property_KeyExchangeChoice_type0 &&
                
                    arg_KeyExchangeChoice_type0 == (adb_KeyExchangeChoice_type0_t*)axutil_array_list_get(_KeyExchange->property_KeyExchangeChoice_type0, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_KeyExchangeChoice_type0)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_KeyExchange->property_KeyExchangeChoice_type0 != NULL)
                        {
                            size = axutil_array_list_size(_KeyExchange->property_KeyExchangeChoice_type0, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_KeyExchange->property_KeyExchangeChoice_type0, env, i))
                                {
                                    non_nil_count ++;
                                    non_nil_exists = AXIS2_TRUE;
                                    if(non_nil_count >= 1)
                                    {
                                        break;
                                    }
                                }
                            }

                         
                            if( non_nil_count < 1)
                            {
                                   AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of KeyExchangeChoice_type0 is beinng set to be smaller than the specificed number of minOccurs(1)");
                                   return AXIS2_FAILURE;
                            }
                        
                        }
                    }
                  
                   if(!non_nil_exists)
                   {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of KeyExchangeChoice_type0 is being set to NULL, but it is not a nullable or minOccurs=0 element");
                       return AXIS2_FAILURE;
                   }
                

                if(_KeyExchange->property_KeyExchangeChoice_type0 == NULL)
                {
                    _KeyExchange->property_KeyExchangeChoice_type0 = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_KeyExchange->property_KeyExchangeChoice_type0, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_KeyExchangeChoice_type0_free((adb_KeyExchangeChoice_type0_t*)element, env);
                     
                }

                
                   axutil_array_list_set(_KeyExchange->property_KeyExchangeChoice_type0 , env, i, arg_KeyExchangeChoice_type0);
                  _KeyExchange->is_valid_KeyExchangeChoice_type0 = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to KeyExchangeChoice_type0.
             */
            axis2_status_t AXIS2_CALL
            adb_KeyExchange_add_KeyExchangeChoice_type0(
                    adb_KeyExchange_t* _KeyExchange,
                    const axutil_env_t *env,
                    adb_KeyExchangeChoice_type0_t* arg_KeyExchangeChoice_type0)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _KeyExchange, AXIS2_FAILURE);

                
                    if(NULL == arg_KeyExchangeChoice_type0)
                    {
                      
                           AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of KeyExchangeChoice_type0 is being set to NULL, but it is not a nullable or minOccurs=0 element");
                           return AXIS2_FAILURE;
                        
                    }
                  

                if(_KeyExchange->property_KeyExchangeChoice_type0 == NULL)
                {
                    _KeyExchange->property_KeyExchangeChoice_type0 = axutil_array_list_create(env, 10);
                }
                if(_KeyExchange->property_KeyExchangeChoice_type0 == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for KeyExchangeChoice_type0");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_KeyExchange->property_KeyExchangeChoice_type0 , env, arg_KeyExchangeChoice_type0);
                  _KeyExchange->is_valid_KeyExchangeChoice_type0 = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the KeyExchangeChoice_type0 array.
             */
            int AXIS2_CALL
            adb_KeyExchange_sizeof_KeyExchangeChoice_type0(
                    adb_KeyExchange_t* _KeyExchange,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _KeyExchange, -1);
                if(_KeyExchange->property_KeyExchangeChoice_type0 == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_KeyExchange->property_KeyExchangeChoice_type0, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_KeyExchange_remove_KeyExchangeChoice_type0_at(
                    adb_KeyExchange_t* _KeyExchange,
                    const axutil_env_t *env, int i)
            {
                return adb_KeyExchange_set_KeyExchangeChoice_type0_nil_at(_KeyExchange, env, i);
            }

            

           /**
            * resetter for KeyExchangeChoice_type0
            */
           axis2_status_t AXIS2_CALL
           adb_KeyExchange_reset_KeyExchangeChoice_type0(
                   adb_KeyExchange_t* _KeyExchange,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _KeyExchange, AXIS2_FAILURE);
               

               
                  if (_KeyExchange->property_KeyExchangeChoice_type0 != NULL)
                  {
                      count = axutil_array_list_size(_KeyExchange->property_KeyExchangeChoice_type0, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_KeyExchange->property_KeyExchangeChoice_type0, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   adb_KeyExchangeChoice_type0_free((adb_KeyExchangeChoice_type0_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_KeyExchange->property_KeyExchangeChoice_type0, env);
                  }
                _KeyExchange->is_valid_KeyExchangeChoice_type0 = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether KeyExchangeChoice_type0 is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_KeyExchange_is_KeyExchangeChoice_type0_nil(
                   adb_KeyExchange_t* _KeyExchange,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _KeyExchange, AXIS2_TRUE);
               
               return !_KeyExchange->is_valid_KeyExchangeChoice_type0;
           }

           /**
            * Set KeyExchangeChoice_type0 to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_KeyExchange_set_KeyExchangeChoice_type0_nil(
                   adb_KeyExchange_t* _KeyExchange,
                   const axutil_env_t *env)
           {
               return adb_KeyExchange_reset_KeyExchangeChoice_type0(_KeyExchange, env);
           }

           
           /**
            * Check whether KeyExchangeChoice_type0 is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_KeyExchange_is_KeyExchangeChoice_type0_nil_at(
                   adb_KeyExchange_t* _KeyExchange,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _KeyExchange, AXIS2_TRUE);
               
               return (_KeyExchange->is_valid_KeyExchangeChoice_type0 == AXIS2_FALSE ||
                        NULL == _KeyExchange->property_KeyExchangeChoice_type0 || 
                        NULL == axutil_array_list_get(_KeyExchange->property_KeyExchangeChoice_type0, env, i));
           }

           /**
            * Set KeyExchangeChoice_type0 to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_KeyExchange_set_KeyExchangeChoice_type0_nil_at(
                   adb_KeyExchange_t* _KeyExchange,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _KeyExchange, AXIS2_FAILURE);

                if(_KeyExchange->property_KeyExchangeChoice_type0 == NULL ||
                            _KeyExchange->is_valid_KeyExchangeChoice_type0 == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_KeyExchange->property_KeyExchangeChoice_type0, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_KeyExchange->property_KeyExchangeChoice_type0, env, i))
                        {
                            k ++;
                            non_nil_exists = AXIS2_TRUE;
                            if( k >= 1)
                            {
                                break;
                            }
                        }
                    }
                }
                
                   if(!non_nil_exists)
                   {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of KeyExchangeChoice_type0 is being set to NULL, but it is not a nullable or minOccurs=0 element");
                       return AXIS2_FAILURE;
                   }
                

                if( k < 1)
                {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of KeyExchangeChoice_type0 is beinng set to be smaller than the specificed number of minOccurs(1)");
                       return AXIS2_FAILURE;
                }
 
                if(_KeyExchange->property_KeyExchangeChoice_type0 == NULL)
                {
                    _KeyExchange->is_valid_KeyExchangeChoice_type0 = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_KeyExchange->property_KeyExchangeChoice_type0, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_KeyExchangeChoice_type0_free((adb_KeyExchangeChoice_type0_t*)element, env);
                     
                }

                

                
                axutil_array_list_set(_KeyExchange->property_KeyExchangeChoice_type0 , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

