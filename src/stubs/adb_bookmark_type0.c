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
         * adb_bookmark_type0.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_bookmark_type0.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = bookmark_type0
                 * Namespace URI = http://www.daisy.org/z3986/2005/bookmark/
                 * Namespace Prefix = ns4
                 */
           


        struct adb_bookmark_type0
        {
            axis2_char_t *property_TypeName;

            adb_bookmarkContent_t* property_bookmarkContent;

                
                axis2_bool_t is_valid_bookmarkContent;
            adb_note_type0_t* property_note;

                
                axis2_bool_t is_valid_note;
            axis2_char_t* property_label;

                
                axis2_bool_t is_valid_label;
            adb_lang_type0_t* property_lang;

                
                axis2_bool_t is_valid_lang;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_bookmark_type0_set_bookmarkContent_nil(
                        adb_bookmark_type0_t* _bookmark_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_bookmark_type0_set_note_nil(
                        adb_bookmark_type0_t* _bookmark_type0,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_bookmark_type0_t* AXIS2_CALL
        adb_bookmark_type0_create(
            const axutil_env_t *env)
        {
            adb_bookmark_type0_t *_bookmark_type0 = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _bookmark_type0 = (adb_bookmark_type0_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_bookmark_type0_t));

            if(NULL == _bookmark_type0)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_bookmark_type0, 0, sizeof(adb_bookmark_type0_t));

            _bookmark_type0->property_TypeName = axutil_strdup(env, "adb_bookmark_type0");
            _bookmark_type0->property_bookmarkContent  = NULL;
                  _bookmark_type0->is_valid_bookmarkContent  = AXIS2_FALSE;
            _bookmark_type0->property_note  = NULL;
                  _bookmark_type0->is_valid_note  = AXIS2_FALSE;
            _bookmark_type0->property_label  = NULL;
                  _bookmark_type0->is_valid_label  = AXIS2_FALSE;
            _bookmark_type0->property_lang  = NULL;
                  _bookmark_type0->is_valid_lang  = AXIS2_FALSE;
            

            return _bookmark_type0;
        }

        adb_bookmark_type0_t* AXIS2_CALL
        adb_bookmark_type0_create_with_values(
            const axutil_env_t *env,
                adb_bookmarkContent_t* _bookmarkContent,
                adb_note_type0_t* _note,
                axis2_char_t* _label,
                adb_lang_type0_t* _lang)
        {
            adb_bookmark_type0_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_bookmark_type0_create(env);

            
              status = adb_bookmark_type0_set_bookmarkContent(
                                     adb_obj,
                                     env,
                                     _bookmarkContent);
              if(status == AXIS2_FAILURE) {
                  adb_bookmark_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_bookmark_type0_set_note(
                                     adb_obj,
                                     env,
                                     _note);
              if(status == AXIS2_FAILURE) {
                  adb_bookmark_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_bookmark_type0_set_label(
                                     adb_obj,
                                     env,
                                     _label);
              if(status == AXIS2_FAILURE) {
                  adb_bookmark_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_bookmark_type0_set_lang(
                                     adb_obj,
                                     env,
                                     _lang);
              if(status == AXIS2_FAILURE) {
                  adb_bookmark_type0_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        adb_bookmarkContent_t* AXIS2_CALL
                adb_bookmark_type0_free_popping_value(
                        adb_bookmark_type0_t* _bookmark_type0,
                        const axutil_env_t *env)
                {
                    adb_bookmarkContent_t* value;

                    
                    
                    value = _bookmark_type0->property_bookmarkContent;

                    _bookmark_type0->property_bookmarkContent = (adb_bookmarkContent_t*)NULL;
                    adb_bookmark_type0_free(_bookmark_type0, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_bookmark_type0_free(
                adb_bookmark_type0_t* _bookmark_type0,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _bookmark_type0,
                env,
                "adb_bookmark_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_bookmark_type0_free_obj(
                adb_bookmark_type0_t* _bookmark_type0,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _bookmark_type0, AXIS2_FAILURE);

            if (_bookmark_type0->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _bookmark_type0->property_TypeName);
            }

            adb_bookmark_type0_reset_bookmarkContent(_bookmark_type0, env);
            adb_bookmark_type0_reset_note(_bookmark_type0, env);
            adb_bookmark_type0_reset_label(_bookmark_type0, env);
            adb_bookmark_type0_reset_lang(_bookmark_type0, env);
            

            if(_bookmark_type0)
            {
                AXIS2_FREE(env->allocator, _bookmark_type0);
                _bookmark_type0 = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_bookmark_type0_deserialize(
                adb_bookmark_type0_t* _bookmark_type0,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _bookmark_type0,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_bookmark_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_bookmark_type0_deserialize_obj(
                adb_bookmark_type0_t* _bookmark_type0,
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
            AXIS2_PARAM_CHECK(env->error, _bookmark_type0, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for bookmark_type0 : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    
                 parent_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                 attribute_hash = axiom_element_get_all_attributes(parent_element, env);
              

                     
                     /*
                      * building bookmarkContent element
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
                                   
                                 element_qname = axutil_qname_create(env, "bookmarkContent", "http://www.daisy.org/z3986/2005/bookmark/", NULL);
                                 

                           if (adb_bookmarkContent_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_bookmarkContent");

                                      status =  adb_bookmarkContent_deserialize((adb_bookmarkContent_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element bookmarkContent");
                                      }
                                      else
                                      {
                                          status = adb_bookmark_type0_set_bookmarkContent(_bookmark_type0, env,
                                                                   (adb_bookmarkContent_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for bookmarkContent ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element bookmarkContent missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building note element
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
                                 
                                 element_qname = axutil_qname_create(env, "note", "http://www.daisy.org/z3986/2005/bookmark/", NULL);
                                 

                           if (adb_note_type0_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_note_type0");

                                      status =  adb_note_type0_deserialize((adb_note_type0_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element note");
                                      }
                                      else
                                      {
                                          status = adb_bookmark_type0_set_note(_bookmark_type0, env,
                                                                   (adb_note_type0_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for note ");
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "label"))
                             
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
                    /* this is hoping that attribute is stored in "label", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "label");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_bookmark_type0_set_label(_bookmark_type0,
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
                           
                           
                               if(strstr((axis2_char_t*)key, "lang|http://www.w3.org/XML/1998/namespace"))
                             
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
                    /* this is hoping that attribute is stored in "lang", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "lang");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      
                            element =  (void*)adb_lang_type0_create(env);
                            adb_lang_type0_deserialize_from_string((adb_lang_type0_t*)element, env, attrib_text, parent);
                           adb_bookmark_type0_set_lang(_bookmark_type0,
                                                          env, (adb_lang_type0_t*)element);
                        
                    }
                  
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_bookmark_type0_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_bookmark_type0_declare_parent_namespaces(
                    adb_bookmark_type0_t* _bookmark_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_bookmark_type0_serialize(
                adb_bookmark_type0_t* _bookmark_type0,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_bookmark_type0 == NULL)
            {
                return adb_bookmark_type0_serialize_obj(
                    _bookmark_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _bookmark_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_bookmark_type0");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_bookmark_type0_serialize_obj(
                adb_bookmark_type0_t* _bookmark_type0,
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
                    
                    axis2_char_t *text_value_3;
                    axis2_char_t *text_value_3_temp;
                    
                    axis2_char_t text_value_4[ADB_DEFAULT_DIGIT_LIMIT];
                    
                axis2_char_t *text_value = NULL;
             
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _bookmark_type0, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
                if(_bookmark_type0->is_valid_label)
                {
                
                        p_prefix = NULL;
                      
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(_bookmark_type0->property_label) + 
                                                                axutil_strlen("label")));
                           sprintf(text_value, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "label", _bookmark_type0->property_label);
                           axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
                if(_bookmark_type0->is_valid_lang)
                {
                
                        p_prefix = (axis2_char_t*)axutil_strdup(env, "xml");
                           text_value = adb_lang_type0_serialize_to_string(_bookmark_type0->property_lang, env, namespaces);
                           string_to_stream = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) *
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(text_value) + 
                                                             axutil_strlen("lang")));
                           sprintf(string_to_stream, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "lang",  text_value);
                           axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
                           AXIS2_FREE(env-> allocator, string_to_stream);
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
              
 
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
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"bookmark_type0\"", NULL);
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
            xsi_type_attri = axiom_attribute_create (env, "type", "bookmark_type0", xsi_ns);
            
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
                      

                   if (!_bookmark_type0->is_valid_bookmarkContent)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property bookmarkContent");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("bookmarkContent"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("bookmarkContent")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing bookmarkContent element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sbookmarkContent",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sbookmarkContent>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_bookmarkContent_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_bookmarkContent_serialize(_bookmark_type0->property_bookmarkContent, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_bookmarkContent_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_bookmarkContent_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
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
                      

                   if (!_bookmark_type0->is_valid_note)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("note"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("note")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing note element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%snote",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%snote>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_note_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_note_type0_serialize(_bookmark_type0->property_note, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_note_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_note_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                    
                    if(parent_tag_closed)
                    {
                       if(_bookmark_type0->is_valid_label)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = _bookmark_type0->property_label;
                           text_attri = axiom_attribute_create (env, "label", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                       
                  }
                
                    
                    if(parent_tag_closed)
                    {
                       if(_bookmark_type0->is_valid_lang)
                       {
                       
                           text_value = adb_lang_type0_serialize_to_string(_bookmark_type0->property_lang, env, namespaces);
                           if(text_value)
                           {
                               text_attri = axiom_attribute_create (env, "lang", text_value, "xml");
                               axiom_element_add_attribute (parent_element, env, text_attri, parent);
                               AXIS2_FREE(env-> allocator, text_value);
                           }
                        
                      }
                       
                  }
                

            return parent;
        }


        

            /**
             * Getter for bookmarkContent by  Property Number 1
             */
            adb_bookmarkContent_t* AXIS2_CALL
            adb_bookmark_type0_get_property1(
                adb_bookmark_type0_t* _bookmark_type0,
                const axutil_env_t *env)
            {
                return adb_bookmark_type0_get_bookmarkContent(_bookmark_type0,
                                             env);
            }

            /**
             * getter for bookmarkContent.
             */
            adb_bookmarkContent_t* AXIS2_CALL
            adb_bookmark_type0_get_bookmarkContent(
                    adb_bookmark_type0_t* _bookmark_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _bookmark_type0, NULL);
                  

                return _bookmark_type0->property_bookmarkContent;
             }

            /**
             * setter for bookmarkContent
             */
            axis2_status_t AXIS2_CALL
            adb_bookmark_type0_set_bookmarkContent(
                    adb_bookmark_type0_t* _bookmark_type0,
                    const axutil_env_t *env,
                    adb_bookmarkContent_t*  arg_bookmarkContent)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _bookmark_type0, AXIS2_FAILURE);
                
                if(_bookmark_type0->is_valid_bookmarkContent &&
                        arg_bookmarkContent == _bookmark_type0->property_bookmarkContent)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_bookmarkContent)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "bookmarkContent is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_bookmark_type0_reset_bookmarkContent(_bookmark_type0, env);

                
                if(NULL == arg_bookmarkContent)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _bookmark_type0->property_bookmarkContent = arg_bookmarkContent;
                        _bookmark_type0->is_valid_bookmarkContent = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for bookmarkContent
            */
           axis2_status_t AXIS2_CALL
           adb_bookmark_type0_reset_bookmarkContent(
                   adb_bookmark_type0_t* _bookmark_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _bookmark_type0, AXIS2_FAILURE);
               

               
            
                
                if(_bookmark_type0->property_bookmarkContent != NULL)
                {
                   
                   adb_bookmarkContent_free(_bookmark_type0->property_bookmarkContent, env);
                     _bookmark_type0->property_bookmarkContent = NULL;
                }
            
                
                
                _bookmark_type0->is_valid_bookmarkContent = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether bookmarkContent is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_bookmark_type0_is_bookmarkContent_nil(
                   adb_bookmark_type0_t* _bookmark_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _bookmark_type0, AXIS2_TRUE);
               
               return !_bookmark_type0->is_valid_bookmarkContent;
           }

           /**
            * Set bookmarkContent to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_bookmark_type0_set_bookmarkContent_nil(
                   adb_bookmark_type0_t* _bookmark_type0,
                   const axutil_env_t *env)
           {
               return adb_bookmark_type0_reset_bookmarkContent(_bookmark_type0, env);
           }

           

            /**
             * Getter for note by  Property Number 2
             */
            adb_note_type0_t* AXIS2_CALL
            adb_bookmark_type0_get_property2(
                adb_bookmark_type0_t* _bookmark_type0,
                const axutil_env_t *env)
            {
                return adb_bookmark_type0_get_note(_bookmark_type0,
                                             env);
            }

            /**
             * getter for note.
             */
            adb_note_type0_t* AXIS2_CALL
            adb_bookmark_type0_get_note(
                    adb_bookmark_type0_t* _bookmark_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _bookmark_type0, NULL);
                  

                return _bookmark_type0->property_note;
             }

            /**
             * setter for note
             */
            axis2_status_t AXIS2_CALL
            adb_bookmark_type0_set_note(
                    adb_bookmark_type0_t* _bookmark_type0,
                    const axutil_env_t *env,
                    adb_note_type0_t*  arg_note)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _bookmark_type0, AXIS2_FAILURE);
                
                if(_bookmark_type0->is_valid_note &&
                        arg_note == _bookmark_type0->property_note)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_bookmark_type0_reset_note(_bookmark_type0, env);

                
                if(NULL == arg_note)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _bookmark_type0->property_note = arg_note;
                        _bookmark_type0->is_valid_note = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for note
            */
           axis2_status_t AXIS2_CALL
           adb_bookmark_type0_reset_note(
                   adb_bookmark_type0_t* _bookmark_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _bookmark_type0, AXIS2_FAILURE);
               

               
            
                
                if(_bookmark_type0->property_note != NULL)
                {
                   
                   adb_note_type0_free(_bookmark_type0->property_note, env);
                     _bookmark_type0->property_note = NULL;
                }
            
                
                
                _bookmark_type0->is_valid_note = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether note is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_bookmark_type0_is_note_nil(
                   adb_bookmark_type0_t* _bookmark_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _bookmark_type0, AXIS2_TRUE);
               
               return !_bookmark_type0->is_valid_note;
           }

           /**
            * Set note to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_bookmark_type0_set_note_nil(
                   adb_bookmark_type0_t* _bookmark_type0,
                   const axutil_env_t *env)
           {
               return adb_bookmark_type0_reset_note(_bookmark_type0, env);
           }

           

            /**
             * Getter for label by  Property Number 3
             */
            axis2_char_t* AXIS2_CALL
            adb_bookmark_type0_get_property3(
                adb_bookmark_type0_t* _bookmark_type0,
                const axutil_env_t *env)
            {
                return adb_bookmark_type0_get_label(_bookmark_type0,
                                             env);
            }

            /**
             * getter for label.
             */
            axis2_char_t* AXIS2_CALL
            adb_bookmark_type0_get_label(
                    adb_bookmark_type0_t* _bookmark_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _bookmark_type0, NULL);
                  

                return _bookmark_type0->property_label;
             }

            /**
             * setter for label
             */
            axis2_status_t AXIS2_CALL
            adb_bookmark_type0_set_label(
                    adb_bookmark_type0_t* _bookmark_type0,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_label)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _bookmark_type0, AXIS2_FAILURE);
                
                if(_bookmark_type0->is_valid_label &&
                        arg_label == _bookmark_type0->property_label)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_label)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "label is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_bookmark_type0_reset_label(_bookmark_type0, env);

                
                if(NULL == arg_label)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _bookmark_type0->property_label = (axis2_char_t *)axutil_strdup(env, arg_label);
                        if(NULL == _bookmark_type0->property_label)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for label");
                            return AXIS2_FAILURE;
                        }
                        _bookmark_type0->is_valid_label = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for label
            */
           axis2_status_t AXIS2_CALL
           adb_bookmark_type0_reset_label(
                   adb_bookmark_type0_t* _bookmark_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _bookmark_type0, AXIS2_FAILURE);
               

               
            
                
                if(_bookmark_type0->property_label != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _bookmark_type0->property_label);
                     _bookmark_type0->property_label = NULL;
                }
            
                
                
                _bookmark_type0->is_valid_label = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether label is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_bookmark_type0_is_label_nil(
                   adb_bookmark_type0_t* _bookmark_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _bookmark_type0, AXIS2_TRUE);
               
               return !_bookmark_type0->is_valid_label;
           }

           /**
            * Set label to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_bookmark_type0_set_label_nil(
                   adb_bookmark_type0_t* _bookmark_type0,
                   const axutil_env_t *env)
           {
               return adb_bookmark_type0_reset_label(_bookmark_type0, env);
           }

           

            /**
             * Getter for lang by  Property Number 4
             */
            adb_lang_type0_t* AXIS2_CALL
            adb_bookmark_type0_get_property4(
                adb_bookmark_type0_t* _bookmark_type0,
                const axutil_env_t *env)
            {
                return adb_bookmark_type0_get_lang(_bookmark_type0,
                                             env);
            }

            /**
             * getter for lang.
             */
            adb_lang_type0_t* AXIS2_CALL
            adb_bookmark_type0_get_lang(
                    adb_bookmark_type0_t* _bookmark_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _bookmark_type0, NULL);
                  

                return _bookmark_type0->property_lang;
             }

            /**
             * setter for lang
             */
            axis2_status_t AXIS2_CALL
            adb_bookmark_type0_set_lang(
                    adb_bookmark_type0_t* _bookmark_type0,
                    const axutil_env_t *env,
                    adb_lang_type0_t*  arg_lang)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _bookmark_type0, AXIS2_FAILURE);
                
                if(_bookmark_type0->is_valid_lang &&
                        arg_lang == _bookmark_type0->property_lang)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_lang)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "lang is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_bookmark_type0_reset_lang(_bookmark_type0, env);

                
                if(NULL == arg_lang)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _bookmark_type0->property_lang = arg_lang;
                        _bookmark_type0->is_valid_lang = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for lang
            */
           axis2_status_t AXIS2_CALL
           adb_bookmark_type0_reset_lang(
                   adb_bookmark_type0_t* _bookmark_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _bookmark_type0, AXIS2_FAILURE);
               

               
            
                
                if(_bookmark_type0->property_lang != NULL)
                {
                   
                   adb_lang_type0_free(_bookmark_type0->property_lang, env);
                     _bookmark_type0->property_lang = NULL;
                }
            
                
                
                _bookmark_type0->is_valid_lang = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether lang is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_bookmark_type0_is_lang_nil(
                   adb_bookmark_type0_t* _bookmark_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _bookmark_type0, AXIS2_TRUE);
               
               return !_bookmark_type0->is_valid_lang;
           }

           /**
            * Set lang to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_bookmark_type0_set_lang_nil(
                   adb_bookmark_type0_t* _bookmark_type0,
                   const axutil_env_t *env)
           {
               return adb_bookmark_type0_reset_lang(_bookmark_type0, env);
           }

           

