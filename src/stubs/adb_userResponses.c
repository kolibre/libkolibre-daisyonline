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
         * adb_userResponses.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_userResponses.h"
        
               /*
                * implmentation of the userResponses|http://www.daisy.org/ns/daisy-online/ element
                */
           


        struct adb_userResponses
        {
            axis2_char_t *property_TypeName;

            
                axutil_qname_t* qname;
            axutil_array_list_t* property_userResponse;

                
                axis2_bool_t is_valid_userResponse;
            
        };


       /************************* Private Function prototypes ********************************/
        
                 axis2_status_t AXIS2_CALL
                 adb_userResponses_set_userResponse_nil_at(
                        adb_userResponses_t* _userResponses, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_userResponses_set_userResponse_nil(
                        adb_userResponses_t* _userResponses,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_userResponses_t* AXIS2_CALL
        adb_userResponses_create(
            const axutil_env_t *env)
        {
            adb_userResponses_t *_userResponses = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _userResponses = (adb_userResponses_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_userResponses_t));

            if(NULL == _userResponses)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_userResponses, 0, sizeof(adb_userResponses_t));

            _userResponses->property_TypeName = axutil_strdup(env, "adb_userResponses");
            _userResponses->property_userResponse  = NULL;
                  _userResponses->is_valid_userResponse  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "userResponses",
                        "http://www.daisy.org/ns/daisy-online/",
                        NULL);
                _userResponses->qname = qname;
            

            return _userResponses;
        }

        adb_userResponses_t* AXIS2_CALL
        adb_userResponses_create_with_values(
            const axutil_env_t *env,
                axutil_array_list_t* _userResponse)
        {
            adb_userResponses_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_userResponses_create(env);

            
              status = adb_userResponses_set_userResponse(
                                     adb_obj,
                                     env,
                                     _userResponse);
              if(status == AXIS2_FAILURE) {
                  adb_userResponses_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axutil_array_list_t* AXIS2_CALL
                adb_userResponses_free_popping_value(
                        adb_userResponses_t* _userResponses,
                        const axutil_env_t *env)
                {
                    axutil_array_list_t* value;

                    
                    
                    value = _userResponses->property_userResponse;

                    _userResponses->property_userResponse = (axutil_array_list_t*)NULL;
                    adb_userResponses_free(_userResponses, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_userResponses_free(
                adb_userResponses_t* _userResponses,
                const axutil_env_t *env)
        {
            
            
            return adb_userResponses_free_obj(
                _userResponses,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_userResponses_free_obj(
                adb_userResponses_t* _userResponses,
                const axutil_env_t *env)
        {
            
                int i = 0;
                int count = 0;
                void *element = NULL;
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _userResponses, AXIS2_FAILURE);

            if (_userResponses->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _userResponses->property_TypeName);
            }

            adb_userResponses_reset_userResponse(_userResponses, env);
            
              if(_userResponses->qname)
              {
                  axutil_qname_free (_userResponses->qname, env);
                  _userResponses->qname = NULL;
              }
            

            if(_userResponses)
            {
                AXIS2_FREE(env->allocator, _userResponses);
                _userResponses = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_userResponses_deserialize(
                adb_userResponses_t* _userResponses,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_userResponses_deserialize_obj(
                _userResponses,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_userResponses_deserialize_obj(
                adb_userResponses_t* _userResponses,
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
            AXIS2_PARAM_CHECK(env->error, _userResponses, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for userResponses : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              

                    current_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                    qname = axiom_element_get_qname(current_element, env, parent);
                    if (axutil_qname_equals(qname, env, _userResponses-> qname))
                    {
                        
                          first_node = axiom_node_get_first_child(parent, env);
                          
                    }
                    else
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                              "Failed in building adb object for userResponses : "
                              "Expected %s but returned %s",
                              axutil_qname_to_string(_userResponses-> qname, env),
                              axutil_qname_to_string(qname, env));
                        
                        return AXIS2_FAILURE;
                    }
                    
                    /*
                     * building userResponse array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building userResponse element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "userResponse", "http://www.daisy.org/ns/daisy-online/", NULL);
                                  
                               
                               for (i = 0, sequence_broken = 0, current_node = first_node; !sequence_broken && current_node != NULL;) 
                                             
                               {
                                  if(axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                  {
                                     current_node =axiom_node_get_next_sibling(current_node, env);
                                     is_early_node_valid = AXIS2_FALSE;
                                     continue;
                                  }
                                  
                                  current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                  qname = axiom_element_get_qname(current_element, env, current_node);

                                  if (adb_userResponse_type0_is_particle() ||  
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_userResponse_type0");
                                          
                                          status =  adb_userResponse_type0_deserialize((adb_userResponse_type0_t*)element, env,
                                                                                 &current_node, &is_early_node_valid, AXIS2_FALSE);
                                          
                                          if(AXIS2_FAILURE ==  status)
                                          {
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element userResponse ");
                                          }
                                          else
                                          {
                                            axutil_array_list_add_at(arr_list, env, i, element);
                                          }
                                        
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for userResponse ");
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
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "userResponse (@minOccurs = '1') only have %d elements", i);
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
                                    status = adb_userResponses_set_userResponse(_userResponses, env,
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
          adb_userResponses_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_userResponses_declare_parent_namespaces(
                    adb_userResponses_t* _userResponses,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_userResponses_serialize(
                adb_userResponses_t* _userResponses,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_userResponses_serialize_obj(
                    _userResponses, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_userResponses_serialize_obj(
                adb_userResponses_t* _userResponses,
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
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

             
                int next_ns_index_value = 0;
            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _userResponses, NULL);
            
             
                    namespaces = axutil_hash_make(env);
                    next_ns_index = &next_ns_index_value;
                     
                           ns1 = axiom_namespace_create (env,
                                             "http://www.daisy.org/ns/daisy-online/",
                                             "n"); 
                           axutil_hash_set(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING, axutil_strdup(env, "n"));
                       
                     
                    parent_element = axiom_element_create (env, NULL, "userResponses", ns1 , &parent);
                    
                    
                    axiom_element_set_namespace(parent_element, env, ns1, parent);


            
                    data_source = axiom_data_source_create(env, parent, &current_node);
                    stream = axiom_data_source_get_stream(data_source, env);
                  
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.daisy.org/ns/daisy-online/",
                                            p_prefix));
                       }
                      

                   if (!_userResponses->is_valid_userResponse)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property userResponse");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("userResponse"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("userResponse")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing userResponse array
                      */
                     if (_userResponses->property_userResponse != NULL)
                     {
                        

                            sprintf(start_input_str, "<%s%suserResponse",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%suserResponse>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_userResponses->property_userResponse, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_userResponses->property_userResponse, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing userResponse element
                      */

                    
                     
                            if(!adb_userResponse_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_userResponse_type0_serialize((adb_userResponse_type0_t*)element, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_userResponse_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_userResponse_type0_is_particle())
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
             * Getter for userResponse by  Property Number 1
             */
            axutil_array_list_t* AXIS2_CALL
            adb_userResponses_get_property1(
                adb_userResponses_t* _userResponses,
                const axutil_env_t *env)
            {
                return adb_userResponses_get_userResponse(_userResponses,
                                             env);
            }

            /**
             * getter for userResponse.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_userResponses_get_userResponse(
                    adb_userResponses_t* _userResponses,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _userResponses, NULL);
                  

                return _userResponses->property_userResponse;
             }

            /**
             * setter for userResponse
             */
            axis2_status_t AXIS2_CALL
            adb_userResponses_set_userResponse(
                    adb_userResponses_t* _userResponses,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_userResponse)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _userResponses, AXIS2_FAILURE);
                
                if(_userResponses->is_valid_userResponse &&
                        arg_userResponse == _userResponses->property_userResponse)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_userResponse, env);
                 
                 if (size < 1)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "userResponse has less than minOccurs(1)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_userResponse, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 
                    if(!non_nil_exists)
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of userResponse is being set to NULL, but it is not a nullable or minOccurs=0 element");
                        return AXIS2_FAILURE;
                    }
                 
                  if(NULL == arg_userResponse)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "userResponse is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_userResponses_reset_userResponse(_userResponses, env);

                
                if(NULL == arg_userResponse)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _userResponses->property_userResponse = arg_userResponse;
                        if(non_nil_exists)
                        {
                            _userResponses->is_valid_userResponse = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of userResponse.
             */
            adb_userResponse_type0_t* AXIS2_CALL
            adb_userResponses_get_userResponse_at(
                    adb_userResponses_t* _userResponses,
                    const axutil_env_t *env, int i)
            {
                adb_userResponse_type0_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _userResponses, NULL);
                  

                if(_userResponses->property_userResponse == NULL)
                {
                    return (adb_userResponse_type0_t*)0;
                }
                ret_val = (adb_userResponse_type0_t*)axutil_array_list_get(_userResponses->property_userResponse, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of userResponse.
             */
            axis2_status_t AXIS2_CALL
            adb_userResponses_set_userResponse_at(
                    adb_userResponses_t* _userResponses,
                    const axutil_env_t *env, int i,
                    adb_userResponse_type0_t* arg_userResponse)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _userResponses, AXIS2_FAILURE);
                
                if( _userResponses->is_valid_userResponse &&
                    _userResponses->property_userResponse &&
                
                    arg_userResponse == (adb_userResponse_type0_t*)axutil_array_list_get(_userResponses->property_userResponse, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_userResponse)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_userResponses->property_userResponse != NULL)
                        {
                            size = axutil_array_list_size(_userResponses->property_userResponse, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_userResponses->property_userResponse, env, i))
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
                                   AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of userResponse is beinng set to be smaller than the specificed number of minOccurs(1)");
                                   return AXIS2_FAILURE;
                            }
                        
                        }
                    }
                  
                   if(!non_nil_exists)
                   {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of userResponse is being set to NULL, but it is not a nullable or minOccurs=0 element");
                       return AXIS2_FAILURE;
                   }
                

                if(_userResponses->property_userResponse == NULL)
                {
                    _userResponses->property_userResponse = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_userResponses->property_userResponse, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_userResponse_type0_free((adb_userResponse_type0_t*)element, env);
                     
                }

                
                   axutil_array_list_set(_userResponses->property_userResponse , env, i, arg_userResponse);
                  _userResponses->is_valid_userResponse = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to userResponse.
             */
            axis2_status_t AXIS2_CALL
            adb_userResponses_add_userResponse(
                    adb_userResponses_t* _userResponses,
                    const axutil_env_t *env,
                    adb_userResponse_type0_t* arg_userResponse)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _userResponses, AXIS2_FAILURE);

                
                    if(NULL == arg_userResponse)
                    {
                      
                           AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of userResponse is being set to NULL, but it is not a nullable or minOccurs=0 element");
                           return AXIS2_FAILURE;
                        
                    }
                  

                if(_userResponses->property_userResponse == NULL)
                {
                    _userResponses->property_userResponse = axutil_array_list_create(env, 10);
                }
                if(_userResponses->property_userResponse == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for userResponse");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_userResponses->property_userResponse , env, arg_userResponse);
                  _userResponses->is_valid_userResponse = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the userResponse array.
             */
            int AXIS2_CALL
            adb_userResponses_sizeof_userResponse(
                    adb_userResponses_t* _userResponses,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _userResponses, -1);
                if(_userResponses->property_userResponse == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_userResponses->property_userResponse, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_userResponses_remove_userResponse_at(
                    adb_userResponses_t* _userResponses,
                    const axutil_env_t *env, int i)
            {
                return adb_userResponses_set_userResponse_nil_at(_userResponses, env, i);
            }

            

           /**
            * resetter for userResponse
            */
           axis2_status_t AXIS2_CALL
           adb_userResponses_reset_userResponse(
                   adb_userResponses_t* _userResponses,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _userResponses, AXIS2_FAILURE);
               

               
                  if (_userResponses->property_userResponse != NULL)
                  {
                      count = axutil_array_list_size(_userResponses->property_userResponse, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_userResponses->property_userResponse, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   adb_userResponse_type0_free((adb_userResponse_type0_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_userResponses->property_userResponse, env);
                  }
                _userResponses->is_valid_userResponse = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether userResponse is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_userResponses_is_userResponse_nil(
                   adb_userResponses_t* _userResponses,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _userResponses, AXIS2_TRUE);
               
               return !_userResponses->is_valid_userResponse;
           }

           /**
            * Set userResponse to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_userResponses_set_userResponse_nil(
                   adb_userResponses_t* _userResponses,
                   const axutil_env_t *env)
           {
               return adb_userResponses_reset_userResponse(_userResponses, env);
           }

           
           /**
            * Check whether userResponse is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_userResponses_is_userResponse_nil_at(
                   adb_userResponses_t* _userResponses,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _userResponses, AXIS2_TRUE);
               
               return (_userResponses->is_valid_userResponse == AXIS2_FALSE ||
                        NULL == _userResponses->property_userResponse || 
                        NULL == axutil_array_list_get(_userResponses->property_userResponse, env, i));
           }

           /**
            * Set userResponse to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_userResponses_set_userResponse_nil_at(
                   adb_userResponses_t* _userResponses,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _userResponses, AXIS2_FAILURE);

                if(_userResponses->property_userResponse == NULL ||
                            _userResponses->is_valid_userResponse == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_userResponses->property_userResponse, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_userResponses->property_userResponse, env, i))
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
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of userResponse is being set to NULL, but it is not a nullable or minOccurs=0 element");
                       return AXIS2_FAILURE;
                   }
                

                if( k < 1)
                {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of userResponse is beinng set to be smaller than the specificed number of minOccurs(1)");
                       return AXIS2_FAILURE;
                }
 
                if(_userResponses->property_userResponse == NULL)
                {
                    _userResponses->is_valid_userResponse = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_userResponses->property_userResponse, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_userResponse_type0_free((adb_userResponse_type0_t*)element, env);
                     
                }

                

                
                axutil_array_list_set(_userResponses->property_userResponse , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

