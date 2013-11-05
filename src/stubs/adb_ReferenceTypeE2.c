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
         * adb_ReferenceTypeE2.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_ReferenceTypeE2.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = ReferenceType
                 * Namespace URI = http://www.w3.org/2001/04/xmlenc#
                 * Namespace Prefix = ns6
                 */
           


        struct adb_ReferenceTypeE2
        {
            axis2_char_t *property_TypeName;

            axutil_array_list_t* property_extraElement;

                
                axis2_bool_t is_valid_extraElement;
            axutil_uri_t* property_URI;

                
                axis2_bool_t is_valid_URI;
            
        };


       /************************* Private Function prototypes ********************************/
        
                 axis2_status_t AXIS2_CALL
                 adb_ReferenceTypeE2_set_extraElement_nil_at(
                        adb_ReferenceTypeE2_t* _ReferenceTypeE2, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_ReferenceTypeE2_set_extraElement_nil(
                        adb_ReferenceTypeE2_t* _ReferenceTypeE2,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_ReferenceTypeE2_set_URI_nil(
                        adb_ReferenceTypeE2_t* _ReferenceTypeE2,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_ReferenceTypeE2_t* AXIS2_CALL
        adb_ReferenceTypeE2_create(
            const axutil_env_t *env)
        {
            adb_ReferenceTypeE2_t *_ReferenceTypeE2 = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _ReferenceTypeE2 = (adb_ReferenceTypeE2_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_ReferenceTypeE2_t));

            if(NULL == _ReferenceTypeE2)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_ReferenceTypeE2, 0, sizeof(adb_ReferenceTypeE2_t));

            _ReferenceTypeE2->property_TypeName = axutil_strdup(env, "adb_ReferenceTypeE2");
            _ReferenceTypeE2->is_valid_extraElement  = AXIS2_FALSE;
            _ReferenceTypeE2->property_URI  = NULL;
                  _ReferenceTypeE2->is_valid_URI  = AXIS2_FALSE;
            

            return _ReferenceTypeE2;
        }

        adb_ReferenceTypeE2_t* AXIS2_CALL
        adb_ReferenceTypeE2_create_with_values(
            const axutil_env_t *env,
                axutil_array_list_t* _extraElement,
                axutil_uri_t* _URI)
        {
            adb_ReferenceTypeE2_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_ReferenceTypeE2_create(env);

            
              status = adb_ReferenceTypeE2_set_extraElement(
                                     adb_obj,
                                     env,
                                     _extraElement);
              if(status == AXIS2_FAILURE) {
                  adb_ReferenceTypeE2_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_ReferenceTypeE2_set_URI(
                                     adb_obj,
                                     env,
                                     _URI);
              if(status == AXIS2_FAILURE) {
                  adb_ReferenceTypeE2_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axutil_array_list_t* AXIS2_CALL
                adb_ReferenceTypeE2_free_popping_value(
                        adb_ReferenceTypeE2_t* _ReferenceTypeE2,
                        const axutil_env_t *env)
                {
                    axutil_array_list_t* value;

                    
                    
                    value = _ReferenceTypeE2->property_extraElement;

                    _ReferenceTypeE2->property_extraElement = (axutil_array_list_t*)NULL;
                    adb_ReferenceTypeE2_free(_ReferenceTypeE2, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_ReferenceTypeE2_free(
                adb_ReferenceTypeE2_t* _ReferenceTypeE2,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _ReferenceTypeE2,
                env,
                "adb_ReferenceTypeE2");
            
        }

        axis2_status_t AXIS2_CALL
        adb_ReferenceTypeE2_free_obj(
                adb_ReferenceTypeE2_t* _ReferenceTypeE2,
                const axutil_env_t *env)
        {
            
                int i = 0;
                int count = 0;
                void *element = NULL;
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _ReferenceTypeE2, AXIS2_FAILURE);

            if (_ReferenceTypeE2->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _ReferenceTypeE2->property_TypeName);
            }

            adb_ReferenceTypeE2_reset_extraElement(_ReferenceTypeE2, env);
            adb_ReferenceTypeE2_reset_URI(_ReferenceTypeE2, env);
            

            if(_ReferenceTypeE2)
            {
                AXIS2_FREE(env->allocator, _ReferenceTypeE2);
                _ReferenceTypeE2 = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_ReferenceTypeE2_deserialize(
                adb_ReferenceTypeE2_t* _ReferenceTypeE2,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _ReferenceTypeE2,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_ReferenceTypeE2");
            
        }

        axis2_status_t AXIS2_CALL
        adb_ReferenceTypeE2_deserialize_obj(
                adb_ReferenceTypeE2_t* _ReferenceTypeE2,
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
            AXIS2_PARAM_CHECK(env->error, _ReferenceTypeE2, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for ReferenceType : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    
                 parent_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                 attribute_hash = axiom_element_get_all_attributes(parent_element, env);
              
                    /*
                     * building extraElement array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building extraElement element
                      */
                     
                     
                     
                            /* 'any' arrays are not handling correctly when there are other elements mixed with the 'any' element. */
                           
                               
                               for (i = 0, sequence_broken = 0, current_node = first_node; !sequence_broken && current_node != NULL;) 
                                             
                               {
                                  if(axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                  {
                                     current_node =axiom_node_get_next_sibling(current_node, env);
                                     is_early_node_valid = AXIS2_FALSE;
                                     continue;
                                  }
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname) || !axutil_strcmp("extraElement", axiom_element_get_localname(current_element, env))))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          text_value = NULL; /* just to avoid warning */
                                          
                                            {
                                              axiom_node_t *current_property_node = current_node;
                                              current_node = axiom_node_get_next_sibling(current_node, env);
                                              axiom_node_detach(current_property_node, env);
                                              axutil_array_list_add_at(arr_list, env, i, (void*)current_property_node);
                                            }
                                            
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for extraElement ");
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
                                    
                               }

                               

                               if(0 == axutil_array_list_size(arr_list,env))
                               {
                                    axutil_array_list_free(arr_list, env);
                               }
                               else
                               {
                                    status = adb_ReferenceTypeE2_set_extraElement(_ReferenceTypeE2, env,
                                                                   arr_list);
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "URI"))
                             
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
                    /* this is hoping that attribute is stored in "URI", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "URI");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_ReferenceTypeE2_set_URI(_ReferenceTypeE2,
                                                          env, axutil_uri_parse_string(env, attrib_text));
                        
                    }
                  
                    else if(!dont_care_minoccurs)
                    {
                        if(element_qname)
                        {
                            axutil_qname_free(element_qname, env);
                        }
                        /* this is not a nillable element*/
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "required attribute URI missing");
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
          adb_ReferenceTypeE2_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_ReferenceTypeE2_declare_parent_namespaces(
                    adb_ReferenceTypeE2_t* _ReferenceTypeE2,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_ReferenceTypeE2_serialize(
                adb_ReferenceTypeE2_t* _ReferenceTypeE2,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_ReferenceTypeE2 == NULL)
            {
                return adb_ReferenceTypeE2_serialize_obj(
                    _ReferenceTypeE2, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _ReferenceTypeE2, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_ReferenceTypeE2");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_ReferenceTypeE2_serialize_obj(
                adb_ReferenceTypeE2_t* _ReferenceTypeE2,
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
            
               int i = 0;
               int count = 0;
               void *element = NULL;
             
                    axis2_char_t *text_value_1;
                    axis2_char_t *text_value_1_temp;
                    
                    axis2_char_t *text_value_2;
                    axis2_char_t *text_value_2_temp;
                    
                axis2_char_t *text_value = NULL;
             
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _ReferenceTypeE2, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
                if(_ReferenceTypeE2->is_valid_URI)
                {
                
                        p_prefix = NULL;
                      
                           text_value = axutil_uri_to_string(_ReferenceTypeE2->property_URI, env, AXIS2_URI_UNP_OMITUSERINFO);
                           string_to_stream = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) *
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(text_value) + 
                                                             axutil_strlen("URI")));
                           sprintf(string_to_stream, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "URI",  text_value);
                           axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
                           AXIS2_FREE(env-> allocator, string_to_stream);
                        
                   }
                   
                   else
                   {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute URI");
                      return NULL;
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
                  }
              }
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"ReferenceTypeE2\"", NULL);
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
                                 "http://www.w3.org/2001/04/xmlenc#",
                                 xsi_prefix);
            xsi_type_attri = axiom_attribute_create (env, "type", "ReferenceTypeE2", xsi_ns);
            
            axiom_element_add_attribute (parent_element, env, xsi_type_attri, parent);
        
                       p_prefix = NULL;
                      

                   if (!_ReferenceTypeE2->is_valid_extraElement)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
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
                      * Parsing extraElement array
                      */
                     if (_ReferenceTypeE2->property_extraElement != NULL)
                     {
                        
                            sprintf(start_input_str, "<%s%sextraElement>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%sextraElement>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_ReferenceTypeE2->property_extraElement, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_ReferenceTypeE2->property_extraElement, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing extraElement element
                      */

                    
                    
                                text_value_1 = axiom_node_to_string((axiom_node_t*)element, env);
                                
                                axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                                
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                    
                    if(parent_tag_closed)
                    {
                       if(_ReferenceTypeE2->is_valid_URI)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = axutil_uri_to_string(_ReferenceTypeE2->property_URI, env, AXIS2_URI_UNP_OMITUSERINFO);
                           text_attri = axiom_attribute_create (env, "URI", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                      
                      else
                      {
                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute URI");
                         return NULL;
                      }
                       
                  }
                

            return parent;
        }


        

            /**
             * Getter for extraElement by  Property Number 1
             */
            axutil_array_list_t* AXIS2_CALL
            adb_ReferenceTypeE2_get_property1(
                adb_ReferenceTypeE2_t* _ReferenceTypeE2,
                const axutil_env_t *env)
            {
                return adb_ReferenceTypeE2_get_extraElement(_ReferenceTypeE2,
                                             env);
            }

            /**
             * getter for extraElement.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_ReferenceTypeE2_get_extraElement(
                    adb_ReferenceTypeE2_t* _ReferenceTypeE2,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _ReferenceTypeE2, NULL);
                  

                return _ReferenceTypeE2->property_extraElement;
             }

            /**
             * setter for extraElement
             */
            axis2_status_t AXIS2_CALL
            adb_ReferenceTypeE2_set_extraElement(
                    adb_ReferenceTypeE2_t* _ReferenceTypeE2,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_extraElement)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ReferenceTypeE2, AXIS2_FAILURE);
                
                if(_ReferenceTypeE2->is_valid_extraElement &&
                        arg_extraElement == _ReferenceTypeE2->property_extraElement)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_extraElement, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "extraElement has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_extraElement, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_ReferenceTypeE2_reset_extraElement(_ReferenceTypeE2, env);

                
                if(NULL == arg_extraElement)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _ReferenceTypeE2->property_extraElement = arg_extraElement;
                        if(non_nil_exists)
                        {
                            _ReferenceTypeE2->is_valid_extraElement = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of extraElement.
             */
            axiom_node_t* AXIS2_CALL
            adb_ReferenceTypeE2_get_extraElement_at(
                    adb_ReferenceTypeE2_t* _ReferenceTypeE2,
                    const axutil_env_t *env, int i)
            {
                axiom_node_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _ReferenceTypeE2, NULL);
                  

                if(_ReferenceTypeE2->property_extraElement == NULL)
                {
                    return (axiom_node_t*)0;
                }
                ret_val = (axiom_node_t*)axutil_array_list_get(_ReferenceTypeE2->property_extraElement, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of extraElement.
             */
            axis2_status_t AXIS2_CALL
            adb_ReferenceTypeE2_set_extraElement_at(
                    adb_ReferenceTypeE2_t* _ReferenceTypeE2,
                    const axutil_env_t *env, int i,
                    axiom_node_t* arg_extraElement)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ReferenceTypeE2, AXIS2_FAILURE);
                
                if( _ReferenceTypeE2->is_valid_extraElement &&
                    _ReferenceTypeE2->property_extraElement &&
                
                    arg_extraElement == (axiom_node_t*)axutil_array_list_get(_ReferenceTypeE2->property_extraElement, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_extraElement)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_ReferenceTypeE2->property_extraElement != NULL)
                        {
                            size = axutil_array_list_size(_ReferenceTypeE2->property_extraElement, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_ReferenceTypeE2->property_extraElement, env, i))
                                {
                                    non_nil_count ++;
                                    non_nil_exists = AXIS2_TRUE;
                                    if(non_nil_count >= 0)
                                    {
                                        break;
                                    }
                                }
                            }

                        
                        }
                    }
                  

                if(_ReferenceTypeE2->property_extraElement == NULL)
                {
                    _ReferenceTypeE2->property_extraElement = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_ReferenceTypeE2->property_extraElement, env, i);
                if(NULL != element)
                {
                  
                  
                  
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _ReferenceTypeE2->is_valid_extraElement = AXIS2_FALSE;
                        axutil_array_list_set(_ReferenceTypeE2->property_extraElement , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_ReferenceTypeE2->property_extraElement , env, i, arg_extraElement);
                  _ReferenceTypeE2->is_valid_extraElement = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to extraElement.
             */
            axis2_status_t AXIS2_CALL
            adb_ReferenceTypeE2_add_extraElement(
                    adb_ReferenceTypeE2_t* _ReferenceTypeE2,
                    const axutil_env_t *env,
                    axiom_node_t* arg_extraElement)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ReferenceTypeE2, AXIS2_FAILURE);

                
                    if(NULL == arg_extraElement)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_ReferenceTypeE2->property_extraElement == NULL)
                {
                    _ReferenceTypeE2->property_extraElement = axutil_array_list_create(env, 10);
                }
                if(_ReferenceTypeE2->property_extraElement == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for extraElement");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_ReferenceTypeE2->property_extraElement , env, arg_extraElement);
                  _ReferenceTypeE2->is_valid_extraElement = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the extraElement array.
             */
            int AXIS2_CALL
            adb_ReferenceTypeE2_sizeof_extraElement(
                    adb_ReferenceTypeE2_t* _ReferenceTypeE2,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _ReferenceTypeE2, -1);
                if(_ReferenceTypeE2->property_extraElement == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_ReferenceTypeE2->property_extraElement, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_ReferenceTypeE2_remove_extraElement_at(
                    adb_ReferenceTypeE2_t* _ReferenceTypeE2,
                    const axutil_env_t *env, int i)
            {
                return adb_ReferenceTypeE2_set_extraElement_nil_at(_ReferenceTypeE2, env, i);
            }

            

           /**
            * resetter for extraElement
            */
           axis2_status_t AXIS2_CALL
           adb_ReferenceTypeE2_reset_extraElement(
                   adb_ReferenceTypeE2_t* _ReferenceTypeE2,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _ReferenceTypeE2, AXIS2_FAILURE);
               

               
                  if (_ReferenceTypeE2->property_extraElement != NULL)
                  {
                      count = axutil_array_list_size(_ReferenceTypeE2->property_extraElement, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_ReferenceTypeE2->property_extraElement, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_ReferenceTypeE2->property_extraElement, env);
                  }
                _ReferenceTypeE2->is_valid_extraElement = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether extraElement is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_ReferenceTypeE2_is_extraElement_nil(
                   adb_ReferenceTypeE2_t* _ReferenceTypeE2,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ReferenceTypeE2, AXIS2_TRUE);
               
               return !_ReferenceTypeE2->is_valid_extraElement;
           }

           /**
            * Set extraElement to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_ReferenceTypeE2_set_extraElement_nil(
                   adb_ReferenceTypeE2_t* _ReferenceTypeE2,
                   const axutil_env_t *env)
           {
               return adb_ReferenceTypeE2_reset_extraElement(_ReferenceTypeE2, env);
           }

           
           /**
            * Check whether extraElement is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_ReferenceTypeE2_is_extraElement_nil_at(
                   adb_ReferenceTypeE2_t* _ReferenceTypeE2,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ReferenceTypeE2, AXIS2_TRUE);
               
               return (_ReferenceTypeE2->is_valid_extraElement == AXIS2_FALSE ||
                        NULL == _ReferenceTypeE2->property_extraElement || 
                        NULL == axutil_array_list_get(_ReferenceTypeE2->property_extraElement, env, i));
           }

           /**
            * Set extraElement to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_ReferenceTypeE2_set_extraElement_nil_at(
                   adb_ReferenceTypeE2_t* _ReferenceTypeE2,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ReferenceTypeE2, AXIS2_FAILURE);

                if(_ReferenceTypeE2->property_extraElement == NULL ||
                            _ReferenceTypeE2->is_valid_extraElement == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_ReferenceTypeE2->property_extraElement, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_ReferenceTypeE2->property_extraElement, env, i))
                        {
                            k ++;
                            non_nil_exists = AXIS2_TRUE;
                            if( k >= 0)
                            {
                                break;
                            }
                        }
                    }
                }
                

                if( k < 0)
                {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of extraElement is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_ReferenceTypeE2->property_extraElement == NULL)
                {
                    _ReferenceTypeE2->is_valid_extraElement = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_ReferenceTypeE2->property_extraElement, env, i);
                if(NULL != element)
                {
                  
                  
                  
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _ReferenceTypeE2->is_valid_extraElement = AXIS2_FALSE;
                        axutil_array_list_set(_ReferenceTypeE2->property_extraElement , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_ReferenceTypeE2->property_extraElement , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for URI by  Property Number 2
             */
            axutil_uri_t* AXIS2_CALL
            adb_ReferenceTypeE2_get_property2(
                adb_ReferenceTypeE2_t* _ReferenceTypeE2,
                const axutil_env_t *env)
            {
                return adb_ReferenceTypeE2_get_URI(_ReferenceTypeE2,
                                             env);
            }

            /**
             * getter for URI.
             */
            axutil_uri_t* AXIS2_CALL
            adb_ReferenceTypeE2_get_URI(
                    adb_ReferenceTypeE2_t* _ReferenceTypeE2,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _ReferenceTypeE2, NULL);
                  

                return _ReferenceTypeE2->property_URI;
             }

            /**
             * setter for URI
             */
            axis2_status_t AXIS2_CALL
            adb_ReferenceTypeE2_set_URI(
                    adb_ReferenceTypeE2_t* _ReferenceTypeE2,
                    const axutil_env_t *env,
                    axutil_uri_t*  arg_URI)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ReferenceTypeE2, AXIS2_FAILURE);
                
                if(_ReferenceTypeE2->is_valid_URI &&
                        arg_URI == _ReferenceTypeE2->property_URI)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_URI)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "URI is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_ReferenceTypeE2_reset_URI(_ReferenceTypeE2, env);

                
                if(NULL == arg_URI)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _ReferenceTypeE2->property_URI = arg_URI;
                        _ReferenceTypeE2->is_valid_URI = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for URI
            */
           axis2_status_t AXIS2_CALL
           adb_ReferenceTypeE2_reset_URI(
                   adb_ReferenceTypeE2_t* _ReferenceTypeE2,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _ReferenceTypeE2, AXIS2_FAILURE);
               

               
            
                
                if(_ReferenceTypeE2->property_URI != NULL)
                {
                   
                   
                      axutil_uri_free(_ReferenceTypeE2->property_URI, env);
                     _ReferenceTypeE2->property_URI = NULL;
                }
            
                
                
                _ReferenceTypeE2->is_valid_URI = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether URI is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_ReferenceTypeE2_is_URI_nil(
                   adb_ReferenceTypeE2_t* _ReferenceTypeE2,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ReferenceTypeE2, AXIS2_TRUE);
               
               return !_ReferenceTypeE2->is_valid_URI;
           }

           /**
            * Set URI to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_ReferenceTypeE2_set_URI_nil(
                   adb_ReferenceTypeE2_t* _ReferenceTypeE2,
                   const axutil_env_t *env)
           {
               return adb_ReferenceTypeE2_reset_URI(_ReferenceTypeE2, env);
           }

           

