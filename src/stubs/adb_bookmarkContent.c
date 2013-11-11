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
         * adb_bookmarkContent.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_bookmarkContent.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = bookmarkContent
                 * Namespace URI = http://www.daisy.org/z3986/2005/bookmark/
                 * Namespace Prefix = ns4
                 */
           


        struct adb_bookmarkContent
        {
            axis2_char_t *property_TypeName;

            axutil_uri_t* property_ncxRef;

                
                axis2_bool_t is_valid_ncxRef;
            axutil_uri_t* property_URI;

                
                axis2_bool_t is_valid_URI;
            adb_bookmarkContentChoice_type0_t* property_bookmarkContentChoice_type0;

                
                axis2_bool_t is_valid_bookmarkContentChoice_type0;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_bookmarkContent_set_ncxRef_nil(
                        adb_bookmarkContent_t* _bookmarkContent,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_bookmarkContent_set_URI_nil(
                        adb_bookmarkContent_t* _bookmarkContent,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_bookmarkContent_set_bookmarkContentChoice_type0_nil(
                        adb_bookmarkContent_t* _bookmarkContent,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_bookmarkContent_t* AXIS2_CALL
        adb_bookmarkContent_create(
            const axutil_env_t *env)
        {
            adb_bookmarkContent_t *_bookmarkContent = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _bookmarkContent = (adb_bookmarkContent_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_bookmarkContent_t));

            if(NULL == _bookmarkContent)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_bookmarkContent, 0, sizeof(adb_bookmarkContent_t));

            _bookmarkContent->property_TypeName = axutil_strdup(env, "adb_bookmarkContent");
            _bookmarkContent->property_ncxRef  = NULL;
                  _bookmarkContent->is_valid_ncxRef  = AXIS2_FALSE;
            _bookmarkContent->property_URI  = NULL;
                  _bookmarkContent->is_valid_URI  = AXIS2_FALSE;
            _bookmarkContent->property_bookmarkContentChoice_type0  = NULL;
                  _bookmarkContent->is_valid_bookmarkContentChoice_type0  = AXIS2_FALSE;
            

            return _bookmarkContent;
        }

        adb_bookmarkContent_t* AXIS2_CALL
        adb_bookmarkContent_create_with_values(
            const axutil_env_t *env,
                axutil_uri_t* _ncxRef,
                axutil_uri_t* _URI,
                adb_bookmarkContentChoice_type0_t* _bookmarkContentChoice_type0)
        {
            adb_bookmarkContent_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_bookmarkContent_create(env);

            
              status = adb_bookmarkContent_set_ncxRef(
                                     adb_obj,
                                     env,
                                     _ncxRef);
              if(status == AXIS2_FAILURE) {
                  adb_bookmarkContent_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_bookmarkContent_set_URI(
                                     adb_obj,
                                     env,
                                     _URI);
              if(status == AXIS2_FAILURE) {
                  adb_bookmarkContent_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_bookmarkContent_set_bookmarkContentChoice_type0(
                                     adb_obj,
                                     env,
                                     _bookmarkContentChoice_type0);
              if(status == AXIS2_FAILURE) {
                  adb_bookmarkContent_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axutil_uri_t* AXIS2_CALL
                adb_bookmarkContent_free_popping_value(
                        adb_bookmarkContent_t* _bookmarkContent,
                        const axutil_env_t *env)
                {
                    axutil_uri_t* value;

                    
                    
                    value = _bookmarkContent->property_ncxRef;

                    _bookmarkContent->property_ncxRef = (axutil_uri_t*)NULL;
                    adb_bookmarkContent_free(_bookmarkContent, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_bookmarkContent_free(
                adb_bookmarkContent_t* _bookmarkContent,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _bookmarkContent,
                env,
                "adb_bookmarkContent");
            
        }

        axis2_status_t AXIS2_CALL
        adb_bookmarkContent_free_obj(
                adb_bookmarkContent_t* _bookmarkContent,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _bookmarkContent, AXIS2_FAILURE);

            if (_bookmarkContent->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _bookmarkContent->property_TypeName);
            }

            adb_bookmarkContent_reset_ncxRef(_bookmarkContent, env);
            adb_bookmarkContent_reset_URI(_bookmarkContent, env);
            adb_bookmarkContent_reset_bookmarkContentChoice_type0(_bookmarkContent, env);
            

            if(_bookmarkContent)
            {
                AXIS2_FREE(env->allocator, _bookmarkContent);
                _bookmarkContent = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_bookmarkContent_deserialize(
                adb_bookmarkContent_t* _bookmarkContent,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _bookmarkContent,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_bookmarkContent");
            
        }

        axis2_status_t AXIS2_CALL
        adb_bookmarkContent_deserialize_obj(
                adb_bookmarkContent_t* _bookmarkContent,
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
            AXIS2_PARAM_CHECK(env->error, _bookmarkContent, AXIS2_FAILURE);

            
                         first_node = parent;
                    

                     
                     /*
                      * building ncxRef element
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
                                   
                                 element_qname = axutil_qname_create(env, "ncxRef", "http://www.daisy.org/z3986/2005/bookmark/", NULL);
                                 

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
                                          status = adb_bookmarkContent_set_ncxRef(_bookmarkContent, env,
                                                             axutil_uri_parse_string(env, text_value));
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element ncxRef");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for ncxRef ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element ncxRef missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building URI element
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
                                 
                                 element_qname = axutil_qname_create(env, "URI", "http://www.daisy.org/z3986/2005/bookmark/", NULL);
                                 

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
                                          status = adb_bookmarkContent_set_URI(_bookmarkContent, env,
                                                             axutil_uri_parse_string(env, text_value));
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element URI");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for URI ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element URI missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building bookmarkContentChoice_type0 element
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
                                 
                                 element_qname = axutil_qname_create(env, "bookmarkContentChoice_type0", "http://www.daisy.org/z3986/2005/bookmark/", NULL);
                                 

                           if (adb_bookmarkContentChoice_type0_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_bookmarkContentChoice_type0");

                                      status =  adb_bookmarkContentChoice_type0_deserialize((adb_bookmarkContentChoice_type0_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element bookmarkContentChoice_type0");
                                      }
                                      else
                                      {
                                          status = adb_bookmarkContent_set_bookmarkContentChoice_type0(_bookmarkContent, env,
                                                                   (adb_bookmarkContentChoice_type0_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for bookmarkContentChoice_type0 ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element bookmarkContentChoice_type0 missing");
                                  return AXIS2_FAILURE;
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
          adb_bookmarkContent_is_particle()
          {
            
                 return AXIS2_TRUE;
              
          }


          void AXIS2_CALL
          adb_bookmarkContent_declare_parent_namespaces(
                    adb_bookmarkContent_t* _bookmarkContent,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_bookmarkContent_serialize(
                adb_bookmarkContent_t* _bookmarkContent,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_bookmarkContent == NULL)
            {
                return adb_bookmarkContent_serialize_obj(
                    _bookmarkContent, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _bookmarkContent, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_bookmarkContent");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_bookmarkContent_serialize_obj(
                adb_bookmarkContent_t* _bookmarkContent,
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
                    
                    axis2_char_t *text_value_2;
                    axis2_char_t *text_value_2_temp;
                    
                    axis2_char_t text_value_3[ADB_DEFAULT_DIGIT_LIMIT];
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _bookmarkContent, NULL);
            
            
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
        
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.daisy.org/z3986/2005/bookmark/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.daisy.org/z3986/2005/bookmark/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.daisy.org/z3986/2005/bookmark/",
                                            p_prefix));
                       }
                      

                   if (!_bookmarkContent->is_valid_ncxRef)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property ncxRef");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("ncxRef"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("ncxRef")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing ncxRef element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sncxRef>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sncxRef>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_1 = axutil_uri_to_string(_bookmarkContent->property_ncxRef, env, AXIS2_URI_UNP_OMITUSERINFO);
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                           
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
                      

                   if (!_bookmarkContent->is_valid_URI)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property URI");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("URI"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("URI")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing URI element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sURI>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sURI>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_2 = axutil_uri_to_string(_bookmarkContent->property_URI, env, AXIS2_URI_UNP_OMITUSERINFO);
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_2, axutil_strlen(text_value_2));
                           
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
                      

                   if (!_bookmarkContent->is_valid_bookmarkContentChoice_type0)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property bookmarkContentChoice_type0");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("bookmarkContentChoice_type0"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("bookmarkContentChoice_type0")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing bookmarkContentChoice_type0 element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sbookmarkContentChoice_type0",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sbookmarkContentChoice_type0>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_bookmarkContentChoice_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_bookmarkContentChoice_type0_serialize(_bookmarkContent->property_bookmarkContentChoice_type0, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_bookmarkContentChoice_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_bookmarkContentChoice_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 

            return parent;
        }


        

            /**
             * Getter for ncxRef by  Property Number 1
             */
            axutil_uri_t* AXIS2_CALL
            adb_bookmarkContent_get_property1(
                adb_bookmarkContent_t* _bookmarkContent,
                const axutil_env_t *env)
            {
                return adb_bookmarkContent_get_ncxRef(_bookmarkContent,
                                             env);
            }

            /**
             * getter for ncxRef.
             */
            axutil_uri_t* AXIS2_CALL
            adb_bookmarkContent_get_ncxRef(
                    adb_bookmarkContent_t* _bookmarkContent,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _bookmarkContent, NULL);
                  

                return _bookmarkContent->property_ncxRef;
             }

            /**
             * setter for ncxRef
             */
            axis2_status_t AXIS2_CALL
            adb_bookmarkContent_set_ncxRef(
                    adb_bookmarkContent_t* _bookmarkContent,
                    const axutil_env_t *env,
                    axutil_uri_t*  arg_ncxRef)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _bookmarkContent, AXIS2_FAILURE);
                
                if(_bookmarkContent->is_valid_ncxRef &&
                        arg_ncxRef == _bookmarkContent->property_ncxRef)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_ncxRef)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "ncxRef is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_bookmarkContent_reset_ncxRef(_bookmarkContent, env);

                
                if(NULL == arg_ncxRef)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _bookmarkContent->property_ncxRef = arg_ncxRef;
                        _bookmarkContent->is_valid_ncxRef = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for ncxRef
            */
           axis2_status_t AXIS2_CALL
           adb_bookmarkContent_reset_ncxRef(
                   adb_bookmarkContent_t* _bookmarkContent,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _bookmarkContent, AXIS2_FAILURE);
               

               
            
                
                if(_bookmarkContent->property_ncxRef != NULL)
                {
                   
                   
                      axutil_uri_free(_bookmarkContent->property_ncxRef, env);
                     _bookmarkContent->property_ncxRef = NULL;
                }
            
                
                
                _bookmarkContent->is_valid_ncxRef = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether ncxRef is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_bookmarkContent_is_ncxRef_nil(
                   adb_bookmarkContent_t* _bookmarkContent,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _bookmarkContent, AXIS2_TRUE);
               
               return !_bookmarkContent->is_valid_ncxRef;
           }

           /**
            * Set ncxRef to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_bookmarkContent_set_ncxRef_nil(
                   adb_bookmarkContent_t* _bookmarkContent,
                   const axutil_env_t *env)
           {
               return adb_bookmarkContent_reset_ncxRef(_bookmarkContent, env);
           }

           

            /**
             * Getter for URI by  Property Number 2
             */
            axutil_uri_t* AXIS2_CALL
            adb_bookmarkContent_get_property2(
                adb_bookmarkContent_t* _bookmarkContent,
                const axutil_env_t *env)
            {
                return adb_bookmarkContent_get_URI(_bookmarkContent,
                                             env);
            }

            /**
             * getter for URI.
             */
            axutil_uri_t* AXIS2_CALL
            adb_bookmarkContent_get_URI(
                    adb_bookmarkContent_t* _bookmarkContent,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _bookmarkContent, NULL);
                  

                return _bookmarkContent->property_URI;
             }

            /**
             * setter for URI
             */
            axis2_status_t AXIS2_CALL
            adb_bookmarkContent_set_URI(
                    adb_bookmarkContent_t* _bookmarkContent,
                    const axutil_env_t *env,
                    axutil_uri_t*  arg_URI)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _bookmarkContent, AXIS2_FAILURE);
                
                if(_bookmarkContent->is_valid_URI &&
                        arg_URI == _bookmarkContent->property_URI)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_URI)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "URI is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_bookmarkContent_reset_URI(_bookmarkContent, env);

                
                if(NULL == arg_URI)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _bookmarkContent->property_URI = arg_URI;
                        _bookmarkContent->is_valid_URI = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for URI
            */
           axis2_status_t AXIS2_CALL
           adb_bookmarkContent_reset_URI(
                   adb_bookmarkContent_t* _bookmarkContent,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _bookmarkContent, AXIS2_FAILURE);
               

               
            
                
                if(_bookmarkContent->property_URI != NULL)
                {
                   
                   
                      axutil_uri_free(_bookmarkContent->property_URI, env);
                     _bookmarkContent->property_URI = NULL;
                }
            
                
                
                _bookmarkContent->is_valid_URI = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether URI is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_bookmarkContent_is_URI_nil(
                   adb_bookmarkContent_t* _bookmarkContent,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _bookmarkContent, AXIS2_TRUE);
               
               return !_bookmarkContent->is_valid_URI;
           }

           /**
            * Set URI to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_bookmarkContent_set_URI_nil(
                   adb_bookmarkContent_t* _bookmarkContent,
                   const axutil_env_t *env)
           {
               return adb_bookmarkContent_reset_URI(_bookmarkContent, env);
           }

           

            /**
             * Getter for bookmarkContentChoice_type0 by  Property Number 3
             */
            adb_bookmarkContentChoice_type0_t* AXIS2_CALL
            adb_bookmarkContent_get_property3(
                adb_bookmarkContent_t* _bookmarkContent,
                const axutil_env_t *env)
            {
                return adb_bookmarkContent_get_bookmarkContentChoice_type0(_bookmarkContent,
                                             env);
            }

            /**
             * getter for bookmarkContentChoice_type0.
             */
            adb_bookmarkContentChoice_type0_t* AXIS2_CALL
            adb_bookmarkContent_get_bookmarkContentChoice_type0(
                    adb_bookmarkContent_t* _bookmarkContent,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _bookmarkContent, NULL);
                  

                return _bookmarkContent->property_bookmarkContentChoice_type0;
             }

            /**
             * setter for bookmarkContentChoice_type0
             */
            axis2_status_t AXIS2_CALL
            adb_bookmarkContent_set_bookmarkContentChoice_type0(
                    adb_bookmarkContent_t* _bookmarkContent,
                    const axutil_env_t *env,
                    adb_bookmarkContentChoice_type0_t*  arg_bookmarkContentChoice_type0)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _bookmarkContent, AXIS2_FAILURE);
                
                if(_bookmarkContent->is_valid_bookmarkContentChoice_type0 &&
                        arg_bookmarkContentChoice_type0 == _bookmarkContent->property_bookmarkContentChoice_type0)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_bookmarkContentChoice_type0)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "bookmarkContentChoice_type0 is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_bookmarkContent_reset_bookmarkContentChoice_type0(_bookmarkContent, env);

                
                if(NULL == arg_bookmarkContentChoice_type0)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _bookmarkContent->property_bookmarkContentChoice_type0 = arg_bookmarkContentChoice_type0;
                        _bookmarkContent->is_valid_bookmarkContentChoice_type0 = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for bookmarkContentChoice_type0
            */
           axis2_status_t AXIS2_CALL
           adb_bookmarkContent_reset_bookmarkContentChoice_type0(
                   adb_bookmarkContent_t* _bookmarkContent,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _bookmarkContent, AXIS2_FAILURE);
               

               
            
                
                if(_bookmarkContent->property_bookmarkContentChoice_type0 != NULL)
                {
                   
                   adb_bookmarkContentChoice_type0_free(_bookmarkContent->property_bookmarkContentChoice_type0, env);
                     _bookmarkContent->property_bookmarkContentChoice_type0 = NULL;
                }
            
                
                
                _bookmarkContent->is_valid_bookmarkContentChoice_type0 = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether bookmarkContentChoice_type0 is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_bookmarkContent_is_bookmarkContentChoice_type0_nil(
                   adb_bookmarkContent_t* _bookmarkContent,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _bookmarkContent, AXIS2_TRUE);
               
               return !_bookmarkContent->is_valid_bookmarkContentChoice_type0;
           }

           /**
            * Set bookmarkContentChoice_type0 to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_bookmarkContent_set_bookmarkContentChoice_type0_nil(
                   adb_bookmarkContent_t* _bookmarkContent,
                   const axutil_env_t *env)
           {
               return adb_bookmarkContent_reset_bookmarkContentChoice_type0(_bookmarkContent, env);
           }

           

