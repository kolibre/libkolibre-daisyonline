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
         * adb_audio.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_audio.h"
        
               /*
                * implmentation of the audio|http://www.daisy.org/z3986/2005/bookmark/ element
                */
           


        struct adb_audio
        {
            axis2_char_t *property_TypeName;

            
                axutil_qname_t* qname;
            adb_audio_type1_t* property_audio;

                
                axis2_bool_t is_valid_audio;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_audio_set_audio_nil(
                        adb_audio_t* _audio,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_audio_t* AXIS2_CALL
        adb_audio_create(
            const axutil_env_t *env)
        {
            adb_audio_t *_audio = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _audio = (adb_audio_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_audio_t));

            if(NULL == _audio)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_audio, 0, sizeof(adb_audio_t));

            _audio->property_TypeName = axutil_strdup(env, "adb_audio");
            _audio->property_audio  = NULL;
                  _audio->is_valid_audio  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "audio",
                        "http://www.daisy.org/z3986/2005/bookmark/",
                        NULL);
                _audio->qname = qname;
            

            return _audio;
        }

        adb_audio_t* AXIS2_CALL
        adb_audio_create_with_values(
            const axutil_env_t *env,
                adb_audio_type1_t* _audio)
        {
            adb_audio_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_audio_create(env);

            
              status = adb_audio_set_audio(
                                     adb_obj,
                                     env,
                                     _audio);
              if(status == AXIS2_FAILURE) {
                  adb_audio_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        adb_audio_type1_t* AXIS2_CALL
                adb_audio_free_popping_value(
                        adb_audio_t* _audio,
                        const axutil_env_t *env)
                {
                    adb_audio_type1_t* value;

                    
                    
                    value = _audio->property_audio;

                    _audio->property_audio = (adb_audio_type1_t*)NULL;
                    adb_audio_free(_audio, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_audio_free(
                adb_audio_t* _audio,
                const axutil_env_t *env)
        {
            
            
            return adb_audio_free_obj(
                _audio,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_audio_free_obj(
                adb_audio_t* _audio,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _audio, AXIS2_FAILURE);

            if (_audio->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _audio->property_TypeName);
            }

            adb_audio_reset_audio(_audio, env);
            
              if(_audio->qname)
              {
                  axutil_qname_free (_audio->qname, env);
                  _audio->qname = NULL;
              }
            

            if(_audio)
            {
                AXIS2_FREE(env->allocator, _audio);
                _audio = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_audio_deserialize(
                adb_audio_t* _audio,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_audio_deserialize_obj(
                _audio,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_audio_deserialize_obj(
                adb_audio_t* _audio,
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
            AXIS2_PARAM_CHECK(env->error, _audio, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for audio : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              

                    current_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                    qname = axiom_element_get_qname(current_element, env, parent);
                    if (axutil_qname_equals(qname, env, _audio-> qname))
                    {
                        
                          first_node = parent;
                          
                    }
                    else
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                              "Failed in building adb object for audio : "
                              "Expected %s but returned %s",
                              axutil_qname_to_string(_audio-> qname, env),
                              axutil_qname_to_string(qname, env));
                        
                        return AXIS2_FAILURE;
                    }
                    

                     
                     /*
                      * building audio element
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
                                   
                                 element_qname = axutil_qname_create(env, "audio", "http://www.daisy.org/z3986/2005/bookmark/", NULL);
                                 

                           if (adb_audio_type1_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_audio_type1");

                                      status =  adb_audio_type1_deserialize((adb_audio_type1_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element audio");
                                      }
                                      else
                                      {
                                          status = adb_audio_set_audio(_audio, env,
                                                                   (adb_audio_type1_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for audio ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element audio missing");
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
          adb_audio_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_audio_declare_parent_namespaces(
                    adb_audio_t* _audio,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_audio_serialize(
                adb_audio_t* _audio,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_audio_serialize_obj(
                    _audio, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_audio_serialize_obj(
                adb_audio_t* _audio,
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
            
                    axis2_char_t text_value_1[ADB_DEFAULT_DIGIT_LIMIT];
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

             
                int next_ns_index_value = 0;
            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _audio, NULL);
            
             
                    namespaces = axutil_hash_make(env);
                    next_ns_index = &next_ns_index_value;
                     
                           ns1 = axiom_namespace_create (env,
                                             "http://www.daisy.org/z3986/2005/bookmark/",
                                             "n"); 
                           axutil_hash_set(namespaces, "http://www.daisy.org/z3986/2005/bookmark/", AXIS2_HASH_KEY_STRING, axutil_strdup(env, "n"));
                       
                     
                    parent_element = axiom_element_create (env, NULL, "audio", ns1 , &parent);
                    
                    
                    axiom_element_set_namespace(parent_element, env, ns1, parent);


            
                    data_source = axiom_data_source_create(env, parent, &current_node);
                    stream = axiom_data_source_get_stream(data_source, env);
                  
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.daisy.org/z3986/2005/bookmark/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.daisy.org/z3986/2005/bookmark/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.daisy.org/z3986/2005/bookmark/",
                                            p_prefix));
                       }
                      

                   if (!_audio->is_valid_audio)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property audio");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("audio"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("audio")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing audio element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%saudio",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%saudio>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    adb_audio_type1_serialize(_audio->property_audio, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_audio_type1_is_particle() || AXIS2_TRUE, namespaces, next_ns_index);
                            
                     
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
             * Getter for audio by  Property Number 1
             */
            adb_audio_type1_t* AXIS2_CALL
            adb_audio_get_property1(
                adb_audio_t* _audio,
                const axutil_env_t *env)
            {
                return adb_audio_get_audio(_audio,
                                             env);
            }

            /**
             * getter for audio.
             */
            adb_audio_type1_t* AXIS2_CALL
            adb_audio_get_audio(
                    adb_audio_t* _audio,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _audio, NULL);
                  

                return _audio->property_audio;
             }

            /**
             * setter for audio
             */
            axis2_status_t AXIS2_CALL
            adb_audio_set_audio(
                    adb_audio_t* _audio,
                    const axutil_env_t *env,
                    adb_audio_type1_t*  arg_audio)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _audio, AXIS2_FAILURE);
                
                if(_audio->is_valid_audio &&
                        arg_audio == _audio->property_audio)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_audio)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "audio is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_audio_reset_audio(_audio, env);

                
                if(NULL == arg_audio)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _audio->property_audio = arg_audio;
                        _audio->is_valid_audio = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for audio
            */
           axis2_status_t AXIS2_CALL
           adb_audio_reset_audio(
                   adb_audio_t* _audio,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _audio, AXIS2_FAILURE);
               

               
            
                
                if(_audio->property_audio != NULL)
                {
                   
                   adb_audio_type1_free(_audio->property_audio, env);
                     _audio->property_audio = NULL;
                }
            
                
                
                _audio->is_valid_audio = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether audio is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_audio_is_audio_nil(
                   adb_audio_t* _audio,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _audio, AXIS2_TRUE);
               
               return !_audio->is_valid_audio;
           }

           /**
            * Set audio to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_audio_set_audio_nil(
                   adb_audio_t* _audio,
                   const axutil_env_t *env)
           {
               return adb_audio_reset_audio(_audio, env);
           }

           

