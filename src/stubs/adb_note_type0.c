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
         * adb_note_type0.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_note_type0.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = note_type0
                 * Namespace URI = http://www.daisy.org/z3986/2005/bookmark/
                 * Namespace Prefix = ns4
                 */
           


        struct adb_note_type0
        {
            axis2_char_t *property_TypeName;

            adb_noteSequence_type0_t* property_noteSequence_type0;

                
                axis2_bool_t is_valid_noteSequence_type0;
            adb_audio_type1_t* property_audio;

                
                axis2_bool_t is_valid_audio;
            
                axis2_char_t *current_choice;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_note_type0_set_noteSequence_type0_nil(
                        adb_note_type0_t* _note_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_note_type0_set_audio_nil(
                        adb_note_type0_t* _note_type0,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_note_type0_t* AXIS2_CALL
        adb_note_type0_create(
            const axutil_env_t *env)
        {
            adb_note_type0_t *_note_type0 = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _note_type0 = (adb_note_type0_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_note_type0_t));

            if(NULL == _note_type0)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_note_type0, 0, sizeof(adb_note_type0_t));

            _note_type0->property_TypeName = axutil_strdup(env, "adb_note_type0");
            _note_type0->property_noteSequence_type0  = NULL;
                  _note_type0->is_valid_noteSequence_type0  = AXIS2_FALSE;
            _note_type0->property_audio  = NULL;
                  _note_type0->is_valid_audio  = AXIS2_FALSE;
            _note_type0->current_choice = "";
            

            return _note_type0;
        }

        adb_note_type0_t* AXIS2_CALL
        adb_note_type0_create_with_values(
            const axutil_env_t *env,
                adb_noteSequence_type0_t* _noteSequence_type0,
                adb_audio_type1_t* _audio)
        {
            adb_note_type0_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_note_type0_create(env);

            
              status = adb_note_type0_set_noteSequence_type0(
                                     adb_obj,
                                     env,
                                     _noteSequence_type0);
              if(status == AXIS2_FAILURE) {
                  adb_note_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_note_type0_set_audio(
                                     adb_obj,
                                     env,
                                     _audio);
              if(status == AXIS2_FAILURE) {
                  adb_note_type0_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        adb_noteSequence_type0_t* AXIS2_CALL
                adb_note_type0_free_popping_value(
                        adb_note_type0_t* _note_type0,
                        const axutil_env_t *env)
                {
                    adb_noteSequence_type0_t* value;

                    
                    
                    value = _note_type0->property_noteSequence_type0;

                    _note_type0->property_noteSequence_type0 = (adb_noteSequence_type0_t*)NULL;
                    adb_note_type0_free(_note_type0, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_note_type0_free(
                adb_note_type0_t* _note_type0,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _note_type0,
                env,
                "adb_note_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_note_type0_free_obj(
                adb_note_type0_t* _note_type0,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _note_type0, AXIS2_FAILURE);

            if (_note_type0->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _note_type0->property_TypeName);
            }

            adb_note_type0_reset_noteSequence_type0(_note_type0, env);
            adb_note_type0_reset_audio(_note_type0, env);
            

            if(_note_type0)
            {
                AXIS2_FREE(env->allocator, _note_type0);
                _note_type0 = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_note_type0_deserialize(
                adb_note_type0_t* _note_type0,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _note_type0,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_note_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_note_type0_deserialize_obj(
                adb_note_type0_t* _note_type0,
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
            AXIS2_PARAM_CHECK(env->error, _note_type0, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for note_type0 : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    

                     
                     /*
                      * building noteSequence_type0 element
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
                                   
                                 element_qname = axutil_qname_create(env, "text", "http://www.daisy.org/z3986/2005/bookmark/", NULL);
                                 

                           if (
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_noteSequence_type0");

                                      status =  adb_noteSequence_type0_deserialize((adb_noteSequence_type0_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_TRUE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element noteSequence_type0");
                                      }
                                      else
                                      {
                                          status = adb_note_type0_set_noteSequence_type0(_note_type0, env,
                                                                   (adb_noteSequence_type0_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for noteSequence_type0 ");
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
                      * building audio element
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
                                                                            env, &current_node, &is_early_node_valid, AXIS2_TRUE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element audio");
                                      }
                                      else
                                      {
                                          status = adb_note_type0_set_audio(_note_type0, env,
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
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_note_type0_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_note_type0_declare_parent_namespaces(
                    adb_note_type0_t* _note_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_note_type0_serialize(
                adb_note_type0_t* _note_type0,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_note_type0 == NULL)
            {
                return adb_note_type0_serialize_obj(
                    _note_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _note_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_note_type0");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_note_type0_serialize_obj(
                adb_note_type0_t* _note_type0,
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
            AXIS2_PARAM_CHECK(env->error, _note_type0, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
              string_to_stream = ">"; 
              axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
              tag_closed = 1;
            
            }
        
                if(0 == axutil_strcmp(_note_type0->current_choice, "http://www.daisy.org/z3986/2005/bookmark/:noteSequence_type0"))
                {
                
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.daisy.org/z3986/2005/bookmark/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.daisy.org/z3986/2005/bookmark/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.daisy.org/z3986/2005/bookmark/",
                                            p_prefix));
                       }
                      

                   if (!_note_type0->is_valid_noteSequence_type0)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property noteSequence_type0");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("noteSequence_type0"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("noteSequence_type0")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing noteSequence_type0 element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%snoteSequence_type0",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%snoteSequence_type0>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_noteSequence_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_noteSequence_type0_serialize(_note_type0->property_noteSequence_type0, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_noteSequence_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_noteSequence_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 
                if(0 == axutil_strcmp(_note_type0->current_choice, "http://www.daisy.org/z3986/2005/bookmark/:audio"))
                {
                
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.daisy.org/z3986/2005/bookmark/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.daisy.org/z3986/2005/bookmark/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.daisy.org/z3986/2005/bookmark/",
                                            p_prefix));
                       }
                      

                   if (!_note_type0->is_valid_audio)
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
                     
                            if(!adb_audio_type1_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_audio_type1_serialize(_note_type0->property_audio, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_audio_type1_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_audio_type1_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 

            return parent;
        }


        

            /**
             * Getter for noteSequence_type0 by  Property Number 1
             */
            adb_noteSequence_type0_t* AXIS2_CALL
            adb_note_type0_get_property1(
                adb_note_type0_t* _note_type0,
                const axutil_env_t *env)
            {
                return adb_note_type0_get_noteSequence_type0(_note_type0,
                                             env);
            }

            /**
             * getter for noteSequence_type0.
             */
            adb_noteSequence_type0_t* AXIS2_CALL
            adb_note_type0_get_noteSequence_type0(
                    adb_note_type0_t* _note_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _note_type0, NULL);
                  

                return _note_type0->property_noteSequence_type0;
             }

            /**
             * setter for noteSequence_type0
             */
            axis2_status_t AXIS2_CALL
            adb_note_type0_set_noteSequence_type0(
                    adb_note_type0_t* _note_type0,
                    const axutil_env_t *env,
                    adb_noteSequence_type0_t*  arg_noteSequence_type0)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _note_type0, AXIS2_FAILURE);
                
                if(_note_type0->is_valid_noteSequence_type0 &&
                        arg_noteSequence_type0 == _note_type0->property_noteSequence_type0)
                {
                    _note_type0->current_choice = "http://www.daisy.org/z3986/2005/bookmark/:noteSequence_type0";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_noteSequence_type0)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "noteSequence_type0 is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_note_type0_reset_noteSequence_type0(_note_type0, env);

                
                if(NULL == arg_noteSequence_type0)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _note_type0->property_noteSequence_type0 = arg_noteSequence_type0;
                        _note_type0->is_valid_noteSequence_type0 = AXIS2_TRUE;
                    _note_type0->current_choice = "http://www.daisy.org/z3986/2005/bookmark/:noteSequence_type0";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for noteSequence_type0
            */
           axis2_status_t AXIS2_CALL
           adb_note_type0_reset_noteSequence_type0(
                   adb_note_type0_t* _note_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _note_type0, AXIS2_FAILURE);
               

               
            
                
                if(_note_type0->property_noteSequence_type0 != NULL)
                {
                   
                   adb_noteSequence_type0_free(_note_type0->property_noteSequence_type0, env);
                     _note_type0->property_noteSequence_type0 = NULL;
                }
            
                
                
                _note_type0->is_valid_noteSequence_type0 = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether noteSequence_type0 is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_note_type0_is_noteSequence_type0_nil(
                   adb_note_type0_t* _note_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _note_type0, AXIS2_TRUE);
               
               return !_note_type0->is_valid_noteSequence_type0;
           }

           /**
            * Set noteSequence_type0 to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_note_type0_set_noteSequence_type0_nil(
                   adb_note_type0_t* _note_type0,
                   const axutil_env_t *env)
           {
               return adb_note_type0_reset_noteSequence_type0(_note_type0, env);
           }

           

            /**
             * Getter for audio by  Property Number 2
             */
            adb_audio_type1_t* AXIS2_CALL
            adb_note_type0_get_property2(
                adb_note_type0_t* _note_type0,
                const axutil_env_t *env)
            {
                return adb_note_type0_get_audio(_note_type0,
                                             env);
            }

            /**
             * getter for audio.
             */
            adb_audio_type1_t* AXIS2_CALL
            adb_note_type0_get_audio(
                    adb_note_type0_t* _note_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _note_type0, NULL);
                  

                return _note_type0->property_audio;
             }

            /**
             * setter for audio
             */
            axis2_status_t AXIS2_CALL
            adb_note_type0_set_audio(
                    adb_note_type0_t* _note_type0,
                    const axutil_env_t *env,
                    adb_audio_type1_t*  arg_audio)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _note_type0, AXIS2_FAILURE);
                
                if(_note_type0->is_valid_audio &&
                        arg_audio == _note_type0->property_audio)
                {
                    _note_type0->current_choice = "http://www.daisy.org/z3986/2005/bookmark/:audio";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_audio)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "audio is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_note_type0_reset_audio(_note_type0, env);

                
                if(NULL == arg_audio)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _note_type0->property_audio = arg_audio;
                        _note_type0->is_valid_audio = AXIS2_TRUE;
                    _note_type0->current_choice = "http://www.daisy.org/z3986/2005/bookmark/:audio";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for audio
            */
           axis2_status_t AXIS2_CALL
           adb_note_type0_reset_audio(
                   adb_note_type0_t* _note_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _note_type0, AXIS2_FAILURE);
               

               
            
                
                if(_note_type0->property_audio != NULL)
                {
                   
                   adb_audio_type1_free(_note_type0->property_audio, env);
                     _note_type0->property_audio = NULL;
                }
            
                
                
                _note_type0->is_valid_audio = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether audio is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_note_type0_is_audio_nil(
                   adb_note_type0_t* _note_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _note_type0, AXIS2_TRUE);
               
               return !_note_type0->is_valid_audio;
           }

           /**
            * Set audio to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_note_type0_set_audio_nil(
                   adb_note_type0_t* _note_type0,
                   const axutil_env_t *env)
           {
               return adb_note_type0_reset_audio(_note_type0, env);
           }

           

