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
         * adb_hiliteContentChoice_type0.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_hiliteContentChoice_type0.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = hiliteContentChoice_type0
                 * Namespace URI = http://www.daisy.org/z3986/2005/bookmark/
                 * Namespace Prefix = ns4
                 */
           


        struct adb_hiliteContentChoice_type0
        {
            axis2_char_t *property_TypeName;

            adb_hiliteContentSequence_type0_t* property_hiliteContentSequence_type0;

                
                axis2_bool_t is_valid_hiliteContentSequence_type0;
            int64_t property_charOffset;

                
                axis2_bool_t is_valid_charOffset;
            
                axis2_char_t *current_choice;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_hiliteContentChoice_type0_set_hiliteContentSequence_type0_nil(
                        adb_hiliteContentChoice_type0_t* _hiliteContentChoice_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_hiliteContentChoice_type0_set_charOffset_nil(
                        adb_hiliteContentChoice_type0_t* _hiliteContentChoice_type0,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_hiliteContentChoice_type0_t* AXIS2_CALL
        adb_hiliteContentChoice_type0_create(
            const axutil_env_t *env)
        {
            adb_hiliteContentChoice_type0_t *_hiliteContentChoice_type0 = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _hiliteContentChoice_type0 = (adb_hiliteContentChoice_type0_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_hiliteContentChoice_type0_t));

            if(NULL == _hiliteContentChoice_type0)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_hiliteContentChoice_type0, 0, sizeof(adb_hiliteContentChoice_type0_t));

            _hiliteContentChoice_type0->property_TypeName = axutil_strdup(env, "adb_hiliteContentChoice_type0");
            _hiliteContentChoice_type0->property_hiliteContentSequence_type0  = NULL;
                  _hiliteContentChoice_type0->is_valid_hiliteContentSequence_type0  = AXIS2_FALSE;
            _hiliteContentChoice_type0->is_valid_charOffset  = AXIS2_FALSE;
            _hiliteContentChoice_type0->current_choice = "";
            

            return _hiliteContentChoice_type0;
        }

        adb_hiliteContentChoice_type0_t* AXIS2_CALL
        adb_hiliteContentChoice_type0_create_with_values(
            const axutil_env_t *env,
                adb_hiliteContentSequence_type0_t* _hiliteContentSequence_type0,
                int64_t _charOffset)
        {
            adb_hiliteContentChoice_type0_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_hiliteContentChoice_type0_create(env);

            
              status = adb_hiliteContentChoice_type0_set_hiliteContentSequence_type0(
                                     adb_obj,
                                     env,
                                     _hiliteContentSequence_type0);
              if(status == AXIS2_FAILURE) {
                  adb_hiliteContentChoice_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_hiliteContentChoice_type0_set_charOffset(
                                     adb_obj,
                                     env,
                                     _charOffset);
              if(status == AXIS2_FAILURE) {
                  adb_hiliteContentChoice_type0_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        adb_hiliteContentSequence_type0_t* AXIS2_CALL
                adb_hiliteContentChoice_type0_free_popping_value(
                        adb_hiliteContentChoice_type0_t* _hiliteContentChoice_type0,
                        const axutil_env_t *env)
                {
                    adb_hiliteContentSequence_type0_t* value;

                    
                    
                    value = _hiliteContentChoice_type0->property_hiliteContentSequence_type0;

                    _hiliteContentChoice_type0->property_hiliteContentSequence_type0 = (adb_hiliteContentSequence_type0_t*)NULL;
                    adb_hiliteContentChoice_type0_free(_hiliteContentChoice_type0, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_hiliteContentChoice_type0_free(
                adb_hiliteContentChoice_type0_t* _hiliteContentChoice_type0,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _hiliteContentChoice_type0,
                env,
                "adb_hiliteContentChoice_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_hiliteContentChoice_type0_free_obj(
                adb_hiliteContentChoice_type0_t* _hiliteContentChoice_type0,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _hiliteContentChoice_type0, AXIS2_FAILURE);

            if (_hiliteContentChoice_type0->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _hiliteContentChoice_type0->property_TypeName);
            }

            adb_hiliteContentChoice_type0_reset_hiliteContentSequence_type0(_hiliteContentChoice_type0, env);
            adb_hiliteContentChoice_type0_reset_charOffset(_hiliteContentChoice_type0, env);
            

            if(_hiliteContentChoice_type0)
            {
                AXIS2_FREE(env->allocator, _hiliteContentChoice_type0);
                _hiliteContentChoice_type0 = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_hiliteContentChoice_type0_deserialize(
                adb_hiliteContentChoice_type0_t* _hiliteContentChoice_type0,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _hiliteContentChoice_type0,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_hiliteContentChoice_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_hiliteContentChoice_type0_deserialize_obj(
                adb_hiliteContentChoice_type0_t* _hiliteContentChoice_type0,
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
            AXIS2_PARAM_CHECK(env->error, _hiliteContentChoice_type0, AXIS2_FAILURE);

            
                         first_node = parent;
                    

                     
                     /*
                      * building hiliteContentSequence_type0 element
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
                                   
                                 element_qname = axutil_qname_create(env, "timeOffset", "http://www.daisy.org/z3986/2005/bookmark/", NULL);
                                 

                           if (
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_hiliteContentSequence_type0");

                                      status =  adb_hiliteContentSequence_type0_deserialize((adb_hiliteContentSequence_type0_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_TRUE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element hiliteContentSequence_type0");
                                      }
                                      else
                                      {
                                          status = adb_hiliteContentChoice_type0_set_hiliteContentSequence_type0(_hiliteContentChoice_type0, env,
                                                                   (adb_hiliteContentSequence_type0_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for hiliteContentSequence_type0 ");
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
                      * building charOffset element
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
                                 
                                 element_qname = axutil_qname_create(env, "charOffset", "http://www.daisy.org/z3986/2005/bookmark/", NULL);
                                 

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
                                            status = adb_hiliteContentChoice_type0_set_charOffset(_hiliteContentChoice_type0, env,
                                                                   axutil_strtol(text_value, (char**)NULL, 0));
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element charOffset");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for charOffset ");
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
          adb_hiliteContentChoice_type0_is_particle()
          {
            
                 return AXIS2_TRUE;
              
          }


          void AXIS2_CALL
          adb_hiliteContentChoice_type0_declare_parent_namespaces(
                    adb_hiliteContentChoice_type0_t* _hiliteContentChoice_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_hiliteContentChoice_type0_serialize(
                adb_hiliteContentChoice_type0_t* _hiliteContentChoice_type0,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_hiliteContentChoice_type0 == NULL)
            {
                return adb_hiliteContentChoice_type0_serialize_obj(
                    _hiliteContentChoice_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _hiliteContentChoice_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_hiliteContentChoice_type0");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_hiliteContentChoice_type0_serialize_obj(
                adb_hiliteContentChoice_type0_t* _hiliteContentChoice_type0,
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
            AXIS2_PARAM_CHECK(env->error, _hiliteContentChoice_type0, NULL);
            
            
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
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"hiliteContentChoice_type0\"", NULL);
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
                                 "http://www.daisy.org/z3986/2005/bookmark/",
                                 xsi_prefix);
            xsi_type_attri = axiom_attribute_create (env, "type", "hiliteContentChoice_type0", xsi_ns);
            
            axiom_element_add_attribute (parent_element, env, xsi_type_attri, parent);
        
                if(0 == axutil_strcmp(_hiliteContentChoice_type0->current_choice, "http://www.daisy.org/z3986/2005/bookmark/:hiliteContentSequence_type0"))
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
                      

                   if (!_hiliteContentChoice_type0->is_valid_hiliteContentSequence_type0)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property hiliteContentSequence_type0");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("hiliteContentSequence_type0"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("hiliteContentSequence_type0")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing hiliteContentSequence_type0 element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%shiliteContentSequence_type0",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%shiliteContentSequence_type0>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_hiliteContentSequence_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_hiliteContentSequence_type0_serialize(_hiliteContentChoice_type0->property_hiliteContentSequence_type0, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_hiliteContentSequence_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_hiliteContentSequence_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 
                if(0 == axutil_strcmp(_hiliteContentChoice_type0->current_choice, "http://www.daisy.org/z3986/2005/bookmark/:charOffset"))
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
                      

                   if (!_hiliteContentChoice_type0->is_valid_charOffset)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property charOffset");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("charOffset"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("charOffset")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing charOffset element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%scharOffset>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%scharOffset>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                               sprintf (text_value_2, AXIS2_PRINTF_INT64_FORMAT_SPECIFIER, (int64_t) _hiliteContentChoice_type0->property_charOffset);
                             
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_2, axutil_strlen(text_value_2));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 

            return parent;
        }


        

            /**
             * Getter for hiliteContentSequence_type0 by  Property Number 1
             */
            adb_hiliteContentSequence_type0_t* AXIS2_CALL
            adb_hiliteContentChoice_type0_get_property1(
                adb_hiliteContentChoice_type0_t* _hiliteContentChoice_type0,
                const axutil_env_t *env)
            {
                return adb_hiliteContentChoice_type0_get_hiliteContentSequence_type0(_hiliteContentChoice_type0,
                                             env);
            }

            /**
             * getter for hiliteContentSequence_type0.
             */
            adb_hiliteContentSequence_type0_t* AXIS2_CALL
            adb_hiliteContentChoice_type0_get_hiliteContentSequence_type0(
                    adb_hiliteContentChoice_type0_t* _hiliteContentChoice_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _hiliteContentChoice_type0, NULL);
                  

                return _hiliteContentChoice_type0->property_hiliteContentSequence_type0;
             }

            /**
             * setter for hiliteContentSequence_type0
             */
            axis2_status_t AXIS2_CALL
            adb_hiliteContentChoice_type0_set_hiliteContentSequence_type0(
                    adb_hiliteContentChoice_type0_t* _hiliteContentChoice_type0,
                    const axutil_env_t *env,
                    adb_hiliteContentSequence_type0_t*  arg_hiliteContentSequence_type0)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _hiliteContentChoice_type0, AXIS2_FAILURE);
                
                if(_hiliteContentChoice_type0->is_valid_hiliteContentSequence_type0 &&
                        arg_hiliteContentSequence_type0 == _hiliteContentChoice_type0->property_hiliteContentSequence_type0)
                {
                    _hiliteContentChoice_type0->current_choice = "http://www.daisy.org/z3986/2005/bookmark/:hiliteContentSequence_type0";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_hiliteContentSequence_type0)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "hiliteContentSequence_type0 is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_hiliteContentChoice_type0_reset_hiliteContentSequence_type0(_hiliteContentChoice_type0, env);

                
                if(NULL == arg_hiliteContentSequence_type0)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _hiliteContentChoice_type0->property_hiliteContentSequence_type0 = arg_hiliteContentSequence_type0;
                        _hiliteContentChoice_type0->is_valid_hiliteContentSequence_type0 = AXIS2_TRUE;
                    _hiliteContentChoice_type0->current_choice = "http://www.daisy.org/z3986/2005/bookmark/:hiliteContentSequence_type0";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for hiliteContentSequence_type0
            */
           axis2_status_t AXIS2_CALL
           adb_hiliteContentChoice_type0_reset_hiliteContentSequence_type0(
                   adb_hiliteContentChoice_type0_t* _hiliteContentChoice_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _hiliteContentChoice_type0, AXIS2_FAILURE);
               

               
            
                
                if(_hiliteContentChoice_type0->property_hiliteContentSequence_type0 != NULL)
                {
                   
                   adb_hiliteContentSequence_type0_free(_hiliteContentChoice_type0->property_hiliteContentSequence_type0, env);
                     _hiliteContentChoice_type0->property_hiliteContentSequence_type0 = NULL;
                }
            
                
                
                _hiliteContentChoice_type0->is_valid_hiliteContentSequence_type0 = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether hiliteContentSequence_type0 is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_hiliteContentChoice_type0_is_hiliteContentSequence_type0_nil(
                   adb_hiliteContentChoice_type0_t* _hiliteContentChoice_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _hiliteContentChoice_type0, AXIS2_TRUE);
               
               return !_hiliteContentChoice_type0->is_valid_hiliteContentSequence_type0;
           }

           /**
            * Set hiliteContentSequence_type0 to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_hiliteContentChoice_type0_set_hiliteContentSequence_type0_nil(
                   adb_hiliteContentChoice_type0_t* _hiliteContentChoice_type0,
                   const axutil_env_t *env)
           {
               return adb_hiliteContentChoice_type0_reset_hiliteContentSequence_type0(_hiliteContentChoice_type0, env);
           }

           

            /**
             * Getter for charOffset by  Property Number 2
             */
            int64_t AXIS2_CALL
            adb_hiliteContentChoice_type0_get_property2(
                adb_hiliteContentChoice_type0_t* _hiliteContentChoice_type0,
                const axutil_env_t *env)
            {
                return adb_hiliteContentChoice_type0_get_charOffset(_hiliteContentChoice_type0,
                                             env);
            }

            /**
             * getter for charOffset.
             */
            int64_t AXIS2_CALL
            adb_hiliteContentChoice_type0_get_charOffset(
                    adb_hiliteContentChoice_type0_t* _hiliteContentChoice_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (int64_t)0);
                    AXIS2_PARAM_CHECK(env->error, _hiliteContentChoice_type0, (int64_t)0);
                  

                return _hiliteContentChoice_type0->property_charOffset;
             }

            /**
             * setter for charOffset
             */
            axis2_status_t AXIS2_CALL
            adb_hiliteContentChoice_type0_set_charOffset(
                    adb_hiliteContentChoice_type0_t* _hiliteContentChoice_type0,
                    const axutil_env_t *env,
                    const int64_t  arg_charOffset)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _hiliteContentChoice_type0, AXIS2_FAILURE);
                
                if(_hiliteContentChoice_type0->is_valid_charOffset &&
                        arg_charOffset == _hiliteContentChoice_type0->property_charOffset)
                {
                    _hiliteContentChoice_type0->current_choice = "http://www.daisy.org/z3986/2005/bookmark/:charOffset";
                    
                    return AXIS2_SUCCESS; 
                }

                adb_hiliteContentChoice_type0_reset_charOffset(_hiliteContentChoice_type0, env);

                _hiliteContentChoice_type0->property_charOffset = arg_charOffset;
                        _hiliteContentChoice_type0->is_valid_charOffset = AXIS2_TRUE;
                    _hiliteContentChoice_type0->current_choice = "http://www.daisy.org/z3986/2005/bookmark/:charOffset";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for charOffset
            */
           axis2_status_t AXIS2_CALL
           adb_hiliteContentChoice_type0_reset_charOffset(
                   adb_hiliteContentChoice_type0_t* _hiliteContentChoice_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _hiliteContentChoice_type0, AXIS2_FAILURE);
               

               _hiliteContentChoice_type0->is_valid_charOffset = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether charOffset is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_hiliteContentChoice_type0_is_charOffset_nil(
                   adb_hiliteContentChoice_type0_t* _hiliteContentChoice_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _hiliteContentChoice_type0, AXIS2_TRUE);
               
               return !_hiliteContentChoice_type0->is_valid_charOffset;
           }

           /**
            * Set charOffset to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_hiliteContentChoice_type0_set_charOffset_nil(
                   adb_hiliteContentChoice_type0_t* _hiliteContentChoice_type0,
                   const axutil_env_t *env)
           {
               return adb_hiliteContentChoice_type0_reset_charOffset(_hiliteContentChoice_type0, env);
           }

           

