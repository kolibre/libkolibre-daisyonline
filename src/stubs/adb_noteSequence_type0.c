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
         * adb_noteSequence_type0.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_noteSequence_type0.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = noteSequence_type0
                 * Namespace URI = http://www.daisy.org/z3986/2005/bookmark/
                 * Namespace Prefix = ns4
                 */
           


        struct adb_noteSequence_type0
        {
            axis2_char_t *property_TypeName;

            axis2_char_t* property_text;

                
                axis2_bool_t is_valid_text;
            adb_audio_type1_t* property_audio;

                
                axis2_bool_t is_valid_audio;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_noteSequence_type0_set_text_nil(
                        adb_noteSequence_type0_t* _noteSequence_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_noteSequence_type0_set_audio_nil(
                        adb_noteSequence_type0_t* _noteSequence_type0,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_noteSequence_type0_t* AXIS2_CALL
        adb_noteSequence_type0_create(
            const axutil_env_t *env)
        {
            adb_noteSequence_type0_t *_noteSequence_type0 = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _noteSequence_type0 = (adb_noteSequence_type0_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_noteSequence_type0_t));

            if(NULL == _noteSequence_type0)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_noteSequence_type0, 0, sizeof(adb_noteSequence_type0_t));

            _noteSequence_type0->property_TypeName = axutil_strdup(env, "adb_noteSequence_type0");
            _noteSequence_type0->property_text  = NULL;
                  _noteSequence_type0->is_valid_text  = AXIS2_FALSE;
            _noteSequence_type0->property_audio  = NULL;
                  _noteSequence_type0->is_valid_audio  = AXIS2_FALSE;
            

            return _noteSequence_type0;
        }

        adb_noteSequence_type0_t* AXIS2_CALL
        adb_noteSequence_type0_create_with_values(
            const axutil_env_t *env,
                axis2_char_t* _text,
                adb_audio_type1_t* _audio)
        {
            adb_noteSequence_type0_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_noteSequence_type0_create(env);

            
              status = adb_noteSequence_type0_set_text(
                                     adb_obj,
                                     env,
                                     _text);
              if(status == AXIS2_FAILURE) {
                  adb_noteSequence_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_noteSequence_type0_set_audio(
                                     adb_obj,
                                     env,
                                     _audio);
              if(status == AXIS2_FAILURE) {
                  adb_noteSequence_type0_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axis2_char_t* AXIS2_CALL
                adb_noteSequence_type0_free_popping_value(
                        adb_noteSequence_type0_t* _noteSequence_type0,
                        const axutil_env_t *env)
                {
                    axis2_char_t* value;

                    
                    
                    value = _noteSequence_type0->property_text;

                    _noteSequence_type0->property_text = (axis2_char_t*)NULL;
                    adb_noteSequence_type0_free(_noteSequence_type0, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_noteSequence_type0_free(
                adb_noteSequence_type0_t* _noteSequence_type0,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _noteSequence_type0,
                env,
                "adb_noteSequence_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_noteSequence_type0_free_obj(
                adb_noteSequence_type0_t* _noteSequence_type0,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _noteSequence_type0, AXIS2_FAILURE);

            if (_noteSequence_type0->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _noteSequence_type0->property_TypeName);
            }

            adb_noteSequence_type0_reset_text(_noteSequence_type0, env);
            adb_noteSequence_type0_reset_audio(_noteSequence_type0, env);
            

            if(_noteSequence_type0)
            {
                AXIS2_FREE(env->allocator, _noteSequence_type0);
                _noteSequence_type0 = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_noteSequence_type0_deserialize(
                adb_noteSequence_type0_t* _noteSequence_type0,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _noteSequence_type0,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_noteSequence_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_noteSequence_type0_deserialize_obj(
                adb_noteSequence_type0_t* _noteSequence_type0,
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
            AXIS2_PARAM_CHECK(env->error, _noteSequence_type0, AXIS2_FAILURE);

            
                         first_node = parent;
                    

                     
                     /*
                      * building text element
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
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_noteSequence_type0_set_text(_noteSequence_type0, env,
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
                                                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element text");
                                                status = AXIS2_FAILURE;
                                            }
                                            else
                                            {
                                                /* after all, we found this is a empty string */
                                                status = adb_noteSequence_type0_set_text(_noteSequence_type0, env,
                                                                   "");
                                            }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for text ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element text missing");
                                  return AXIS2_FAILURE;
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
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element audio");
                                      }
                                      else
                                      {
                                          status = adb_noteSequence_type0_set_audio(_noteSequence_type0, env,
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
                 
                *dp_parent = current_node;
                *dp_is_early_node_valid = is_early_node_valid;
            
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_noteSequence_type0_is_particle()
          {
            
                 return AXIS2_TRUE;
              
          }


          void AXIS2_CALL
          adb_noteSequence_type0_declare_parent_namespaces(
                    adb_noteSequence_type0_t* _noteSequence_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_noteSequence_type0_serialize(
                adb_noteSequence_type0_t* _noteSequence_type0,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_noteSequence_type0 == NULL)
            {
                return adb_noteSequence_type0_serialize_obj(
                    _noteSequence_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _noteSequence_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_noteSequence_type0");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_noteSequence_type0_serialize_obj(
                adb_noteSequence_type0_t* _noteSequence_type0,
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
            
                    axis2_char_t *text_value_1;
                    axis2_char_t *text_value_1_temp;
                    
                    axis2_char_t text_value_2[ADB_DEFAULT_DIGIT_LIMIT];
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _noteSequence_type0, NULL);
            
            
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
                        if(element_ns)
                        {
                            axiom_namespace_free(element_ns, env);
                        }
                  }
              }
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"noteSequence_type0\"", NULL);
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
                        if(element_ns)
                        {
                            axiom_namespace_free(element_ns, env);
                        }
                  }
              }
            }
            xsi_ns = axiom_namespace_create (env,
                                 "http://www.daisy.org/z3986/2005/bookmark/",
                                 xsi_prefix);
            xsi_type_attri = axiom_attribute_create (env, "type", "noteSequence_type0", xsi_ns);
            
            axiom_element_add_attribute (parent_element, env, xsi_type_attri, parent);
        
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.daisy.org/z3986/2005/bookmark/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.daisy.org/z3986/2005/bookmark/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.daisy.org/z3986/2005/bookmark/",
                                            p_prefix));
                       }
                      

                   if (!_noteSequence_type0->is_valid_text)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property text");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("text"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("text")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing text element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%stext>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%stext>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_1 = _noteSequence_type0->property_text;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_1_temp = axutil_xml_quote_string(env, text_value_1, AXIS2_TRUE);
                           if (text_value_1_temp)
                           {
                               axutil_stream_write(stream, env, text_value_1_temp, axutil_strlen(text_value_1_temp));
                               AXIS2_FREE(env->allocator, text_value_1_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.daisy.org/z3986/2005/bookmark/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.daisy.org/z3986/2005/bookmark/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.daisy.org/z3986/2005/bookmark/",
                                            p_prefix));
                       }
                      

                   if (!_noteSequence_type0->is_valid_audio)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
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
                            adb_audio_type1_serialize(_noteSequence_type0->property_audio, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_audio_type1_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_audio_type1_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 

            return parent;
        }


        

            /**
             * Getter for text by  Property Number 1
             */
            axis2_char_t* AXIS2_CALL
            adb_noteSequence_type0_get_property1(
                adb_noteSequence_type0_t* _noteSequence_type0,
                const axutil_env_t *env)
            {
                return adb_noteSequence_type0_get_text(_noteSequence_type0,
                                             env);
            }

            /**
             * getter for text.
             */
            axis2_char_t* AXIS2_CALL
            adb_noteSequence_type0_get_text(
                    adb_noteSequence_type0_t* _noteSequence_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _noteSequence_type0, NULL);
                  

                return _noteSequence_type0->property_text;
             }

            /**
             * setter for text
             */
            axis2_status_t AXIS2_CALL
            adb_noteSequence_type0_set_text(
                    adb_noteSequence_type0_t* _noteSequence_type0,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_text)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _noteSequence_type0, AXIS2_FAILURE);
                
                if(_noteSequence_type0->is_valid_text &&
                        arg_text == _noteSequence_type0->property_text)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_text)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "text is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_noteSequence_type0_reset_text(_noteSequence_type0, env);

                
                if(NULL == arg_text)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _noteSequence_type0->property_text = (axis2_char_t *)axutil_strdup(env, arg_text);
                        if(NULL == _noteSequence_type0->property_text)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for text");
                            return AXIS2_FAILURE;
                        }
                        _noteSequence_type0->is_valid_text = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for text
            */
           axis2_status_t AXIS2_CALL
           adb_noteSequence_type0_reset_text(
                   adb_noteSequence_type0_t* _noteSequence_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _noteSequence_type0, AXIS2_FAILURE);
               

               
            
                
                if(_noteSequence_type0->property_text != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _noteSequence_type0->property_text);
                     _noteSequence_type0->property_text = NULL;
                }
            
                
                
                _noteSequence_type0->is_valid_text = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether text is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_noteSequence_type0_is_text_nil(
                   adb_noteSequence_type0_t* _noteSequence_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _noteSequence_type0, AXIS2_TRUE);
               
               return !_noteSequence_type0->is_valid_text;
           }

           /**
            * Set text to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_noteSequence_type0_set_text_nil(
                   adb_noteSequence_type0_t* _noteSequence_type0,
                   const axutil_env_t *env)
           {
               return adb_noteSequence_type0_reset_text(_noteSequence_type0, env);
           }

           

            /**
             * Getter for audio by  Property Number 2
             */
            adb_audio_type1_t* AXIS2_CALL
            adb_noteSequence_type0_get_property2(
                adb_noteSequence_type0_t* _noteSequence_type0,
                const axutil_env_t *env)
            {
                return adb_noteSequence_type0_get_audio(_noteSequence_type0,
                                             env);
            }

            /**
             * getter for audio.
             */
            adb_audio_type1_t* AXIS2_CALL
            adb_noteSequence_type0_get_audio(
                    adb_noteSequence_type0_t* _noteSequence_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _noteSequence_type0, NULL);
                  

                return _noteSequence_type0->property_audio;
             }

            /**
             * setter for audio
             */
            axis2_status_t AXIS2_CALL
            adb_noteSequence_type0_set_audio(
                    adb_noteSequence_type0_t* _noteSequence_type0,
                    const axutil_env_t *env,
                    adb_audio_type1_t*  arg_audio)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _noteSequence_type0, AXIS2_FAILURE);
                
                if(_noteSequence_type0->is_valid_audio &&
                        arg_audio == _noteSequence_type0->property_audio)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_noteSequence_type0_reset_audio(_noteSequence_type0, env);

                
                if(NULL == arg_audio)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _noteSequence_type0->property_audio = arg_audio;
                        _noteSequence_type0->is_valid_audio = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for audio
            */
           axis2_status_t AXIS2_CALL
           adb_noteSequence_type0_reset_audio(
                   adb_noteSequence_type0_t* _noteSequence_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _noteSequence_type0, AXIS2_FAILURE);
               

               
            
                
                if(_noteSequence_type0->property_audio != NULL)
                {
                   
                   adb_audio_type1_free(_noteSequence_type0->property_audio, env);
                     _noteSequence_type0->property_audio = NULL;
                }
            
                
                
                _noteSequence_type0->is_valid_audio = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether audio is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_noteSequence_type0_is_audio_nil(
                   adb_noteSequence_type0_t* _noteSequence_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _noteSequence_type0, AXIS2_TRUE);
               
               return !_noteSequence_type0->is_valid_audio;
           }

           /**
            * Set audio to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_noteSequence_type0_set_audio_nil(
                   adb_noteSequence_type0_t* _noteSequence_type0,
                   const axutil_env_t *env)
           {
               return adb_noteSequence_type0_reset_audio(_noteSequence_type0, env);
           }

           

