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
         * adb_TransformTypeChoice.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_TransformTypeChoice.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = TransformTypeChoice
                 * Namespace URI = http://www.w3.org/2000/09/xmldsig#
                 * Namespace Prefix = ns5
                 */
           


        struct adb_TransformTypeChoice
        {
            axis2_char_t *property_TypeName;

            axiom_node_t* property_extraElement;

                
                axis2_bool_t is_valid_extraElement;
            axis2_char_t* property_XPath;

                
                axis2_bool_t is_valid_XPath;
            
                axis2_char_t *current_choice;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_TransformTypeChoice_set_extraElement_nil(
                        adb_TransformTypeChoice_t* _TransformTypeChoice,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_TransformTypeChoice_set_XPath_nil(
                        adb_TransformTypeChoice_t* _TransformTypeChoice,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_TransformTypeChoice_t* AXIS2_CALL
        adb_TransformTypeChoice_create(
            const axutil_env_t *env)
        {
            adb_TransformTypeChoice_t *_TransformTypeChoice = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _TransformTypeChoice = (adb_TransformTypeChoice_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_TransformTypeChoice_t));

            if(NULL == _TransformTypeChoice)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_TransformTypeChoice, 0, sizeof(adb_TransformTypeChoice_t));

            _TransformTypeChoice->property_TypeName = axutil_strdup(env, "adb_TransformTypeChoice");
            _TransformTypeChoice->is_valid_extraElement  = AXIS2_FALSE;
            _TransformTypeChoice->property_XPath  = NULL;
                  _TransformTypeChoice->is_valid_XPath  = AXIS2_FALSE;
            _TransformTypeChoice->current_choice = "";
            

            return _TransformTypeChoice;
        }

        adb_TransformTypeChoice_t* AXIS2_CALL
        adb_TransformTypeChoice_create_with_values(
            const axutil_env_t *env,
                axiom_node_t* _extraElement,
                axis2_char_t* _XPath)
        {
            adb_TransformTypeChoice_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_TransformTypeChoice_create(env);

            
              status = adb_TransformTypeChoice_set_extraElement(
                                     adb_obj,
                                     env,
                                     _extraElement);
              if(status == AXIS2_FAILURE) {
                  adb_TransformTypeChoice_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_TransformTypeChoice_set_XPath(
                                     adb_obj,
                                     env,
                                     _XPath);
              if(status == AXIS2_FAILURE) {
                  adb_TransformTypeChoice_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axiom_node_t* AXIS2_CALL
                adb_TransformTypeChoice_free_popping_value(
                        adb_TransformTypeChoice_t* _TransformTypeChoice,
                        const axutil_env_t *env)
                {
                    axiom_node_t* value;

                    
                    
                    value = _TransformTypeChoice->property_extraElement;

                    adb_TransformTypeChoice_free(_TransformTypeChoice, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_TransformTypeChoice_free(
                adb_TransformTypeChoice_t* _TransformTypeChoice,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _TransformTypeChoice,
                env,
                "adb_TransformTypeChoice");
            
        }

        axis2_status_t AXIS2_CALL
        adb_TransformTypeChoice_free_obj(
                adb_TransformTypeChoice_t* _TransformTypeChoice,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _TransformTypeChoice, AXIS2_FAILURE);

            if (_TransformTypeChoice->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _TransformTypeChoice->property_TypeName);
            }

            adb_TransformTypeChoice_reset_extraElement(_TransformTypeChoice, env);
            adb_TransformTypeChoice_reset_XPath(_TransformTypeChoice, env);
            

            if(_TransformTypeChoice)
            {
                AXIS2_FREE(env->allocator, _TransformTypeChoice);
                _TransformTypeChoice = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_TransformTypeChoice_deserialize(
                adb_TransformTypeChoice_t* _TransformTypeChoice,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _TransformTypeChoice,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_TransformTypeChoice");
            
        }

        axis2_status_t AXIS2_CALL
        adb_TransformTypeChoice_deserialize_obj(
                adb_TransformTypeChoice_t* _TransformTypeChoice,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
           
             const axis2_char_t* text_value = NULL;
             axutil_qname_t *qname = NULL;
          
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _TransformTypeChoice, AXIS2_FAILURE);

            
                         first_node = parent;
                    

                     
                     /*
                      * building extraElement element
                      */
                     
                     
                     
                                   current_node = first_node;
                                   is_early_node_valid = AXIS2_FALSE;
                                   
                                   

                           if ( 
                                (current_node ))
                           {
                              if( current_node )
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = NULL; /* just to avoid warning */
                                      
                                        {
                                          axiom_node_t *current_property_node = current_node;
                                          current_node = axiom_node_get_next_sibling(current_node, env);
                                          axiom_node_detach(current_property_node, env);
                                          status = adb_TransformTypeChoice_set_extraElement(_TransformTypeChoice, env,
                                                                          current_property_node);
                                        }
                                        
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for extraElement ");
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
                      * building XPath element
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
                                 
                                 element_qname = axutil_qname_create(env, "XPath", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

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
                                            status = adb_TransformTypeChoice_set_XPath(_TransformTypeChoice, env,
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
                                                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element XPath");
                                                status = AXIS2_FAILURE;
                                            }
                                            else
                                            {
                                                /* after all, we found this is a empty string */
                                                status = adb_TransformTypeChoice_set_XPath(_TransformTypeChoice, env,
                                                                   "");
                                            }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for XPath ");
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
          adb_TransformTypeChoice_is_particle()
          {
            
                 return AXIS2_TRUE;
              
          }


          void AXIS2_CALL
          adb_TransformTypeChoice_declare_parent_namespaces(
                    adb_TransformTypeChoice_t* _TransformTypeChoice,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_TransformTypeChoice_serialize(
                adb_TransformTypeChoice_t* _TransformTypeChoice,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_TransformTypeChoice == NULL)
            {
                return adb_TransformTypeChoice_serialize_obj(
                    _TransformTypeChoice, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _TransformTypeChoice, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_TransformTypeChoice");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_TransformTypeChoice_serialize_obj(
                adb_TransformTypeChoice_t* _TransformTypeChoice,
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
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _TransformTypeChoice, NULL);
            
            
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
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"TransformTypeChoice\"", NULL);
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
                                 "http://www.w3.org/2000/09/xmldsig#",
                                 xsi_prefix);
            xsi_type_attri = axiom_attribute_create (env, "type", "TransformTypeChoice", xsi_ns);
            
            axiom_element_add_attribute (parent_element, env, xsi_type_attri, parent);
        
                if(0 == axutil_strcmp(_TransformTypeChoice->current_choice, ":extraElement"))
                {
                
                       p_prefix = NULL;
                      

                   if (!_TransformTypeChoice->is_valid_extraElement)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property extraElement");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("extraElement"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("extraElement")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing extraElement element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sextraElement>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sextraElement>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                                text_value_1 = axiom_node_to_string(_TransformTypeChoice->property_extraElement, env);
                                
                                axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                                
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 
                if(0 == axutil_strcmp(_TransformTypeChoice->current_choice, "http://www.w3.org/2000/09/xmldsig#:XPath"))
                {
                
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.w3.org/2000/09/xmldsig#",
                                            p_prefix));
                       }
                      

                   if (!_TransformTypeChoice->is_valid_XPath)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property XPath");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("XPath"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("XPath")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing XPath element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sXPath>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sXPath>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_2 = _TransformTypeChoice->property_XPath;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_2_temp = axutil_xml_quote_string(env, text_value_2, AXIS2_TRUE);
                           if (text_value_2_temp)
                           {
                               axutil_stream_write(stream, env, text_value_2_temp, axutil_strlen(text_value_2_temp));
                               AXIS2_FREE(env->allocator, text_value_2_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_2, axutil_strlen(text_value_2));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 

            return parent;
        }


        

            /**
             * Getter for extraElement by  Property Number 1
             */
            axiom_node_t* AXIS2_CALL
            adb_TransformTypeChoice_get_property1(
                adb_TransformTypeChoice_t* _TransformTypeChoice,
                const axutil_env_t *env)
            {
                return adb_TransformTypeChoice_get_extraElement(_TransformTypeChoice,
                                             env);
            }

            /**
             * getter for extraElement.
             */
            axiom_node_t* AXIS2_CALL
            adb_TransformTypeChoice_get_extraElement(
                    adb_TransformTypeChoice_t* _TransformTypeChoice,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _TransformTypeChoice, NULL);
                  

                return _TransformTypeChoice->property_extraElement;
             }

            /**
             * setter for extraElement
             */
            axis2_status_t AXIS2_CALL
            adb_TransformTypeChoice_set_extraElement(
                    adb_TransformTypeChoice_t* _TransformTypeChoice,
                    const axutil_env_t *env,
                    axiom_node_t*  arg_extraElement)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _TransformTypeChoice, AXIS2_FAILURE);
                
                if(_TransformTypeChoice->is_valid_extraElement &&
                        arg_extraElement == _TransformTypeChoice->property_extraElement)
                {
                    _TransformTypeChoice->current_choice = ":extraElement";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_extraElement)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "extraElement is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_TransformTypeChoice_reset_extraElement(_TransformTypeChoice, env);

                
                if(NULL == arg_extraElement)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _TransformTypeChoice->property_extraElement = arg_extraElement;
                        _TransformTypeChoice->is_valid_extraElement = AXIS2_TRUE;
                    _TransformTypeChoice->current_choice = ":extraElement";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for extraElement
            */
           axis2_status_t AXIS2_CALL
           adb_TransformTypeChoice_reset_extraElement(
                   adb_TransformTypeChoice_t* _TransformTypeChoice,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _TransformTypeChoice, AXIS2_FAILURE);
               

               _TransformTypeChoice->is_valid_extraElement = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether extraElement is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_TransformTypeChoice_is_extraElement_nil(
                   adb_TransformTypeChoice_t* _TransformTypeChoice,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _TransformTypeChoice, AXIS2_TRUE);
               
               return !_TransformTypeChoice->is_valid_extraElement;
           }

           /**
            * Set extraElement to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_TransformTypeChoice_set_extraElement_nil(
                   adb_TransformTypeChoice_t* _TransformTypeChoice,
                   const axutil_env_t *env)
           {
               return adb_TransformTypeChoice_reset_extraElement(_TransformTypeChoice, env);
           }

           

            /**
             * Getter for XPath by  Property Number 2
             */
            axis2_char_t* AXIS2_CALL
            adb_TransformTypeChoice_get_property2(
                adb_TransformTypeChoice_t* _TransformTypeChoice,
                const axutil_env_t *env)
            {
                return adb_TransformTypeChoice_get_XPath(_TransformTypeChoice,
                                             env);
            }

            /**
             * getter for XPath.
             */
            axis2_char_t* AXIS2_CALL
            adb_TransformTypeChoice_get_XPath(
                    adb_TransformTypeChoice_t* _TransformTypeChoice,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _TransformTypeChoice, NULL);
                  

                return _TransformTypeChoice->property_XPath;
             }

            /**
             * setter for XPath
             */
            axis2_status_t AXIS2_CALL
            adb_TransformTypeChoice_set_XPath(
                    adb_TransformTypeChoice_t* _TransformTypeChoice,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_XPath)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _TransformTypeChoice, AXIS2_FAILURE);
                
                if(_TransformTypeChoice->is_valid_XPath &&
                        arg_XPath == _TransformTypeChoice->property_XPath)
                {
                    _TransformTypeChoice->current_choice = "http://www.w3.org/2000/09/xmldsig#:XPath";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_XPath)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "XPath is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_TransformTypeChoice_reset_XPath(_TransformTypeChoice, env);

                
                if(NULL == arg_XPath)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _TransformTypeChoice->property_XPath = (axis2_char_t *)axutil_strdup(env, arg_XPath);
                        if(NULL == _TransformTypeChoice->property_XPath)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for XPath");
                            return AXIS2_FAILURE;
                        }
                        _TransformTypeChoice->is_valid_XPath = AXIS2_TRUE;
                    _TransformTypeChoice->current_choice = "http://www.w3.org/2000/09/xmldsig#:XPath";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for XPath
            */
           axis2_status_t AXIS2_CALL
           adb_TransformTypeChoice_reset_XPath(
                   adb_TransformTypeChoice_t* _TransformTypeChoice,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _TransformTypeChoice, AXIS2_FAILURE);
               

               
            
                
                if(_TransformTypeChoice->property_XPath != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _TransformTypeChoice->property_XPath);
                     _TransformTypeChoice->property_XPath = NULL;
                }
            
                
                
                _TransformTypeChoice->is_valid_XPath = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether XPath is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_TransformTypeChoice_is_XPath_nil(
                   adb_TransformTypeChoice_t* _TransformTypeChoice,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _TransformTypeChoice, AXIS2_TRUE);
               
               return !_TransformTypeChoice->is_valid_XPath;
           }

           /**
            * Set XPath to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_TransformTypeChoice_set_XPath_nil(
                   adb_TransformTypeChoice_t* _TransformTypeChoice,
                   const axutil_env_t *env)
           {
               return adb_TransformTypeChoice_reset_XPath(_TransformTypeChoice, env);
           }

           

