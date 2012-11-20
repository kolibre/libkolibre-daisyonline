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
         * adb_resources_type0.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_resources_type0.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = resources_type0
                 * Namespace URI = http://www.daisy.org/ns/daisy-online/
                 * Namespace Prefix = ns3
                 */
           


        struct adb_resources_type0
        {
            axis2_char_t *property_TypeName;

            axutil_array_list_t* property_resource;

                
                axis2_bool_t is_valid_resource;
            axutil_date_time_t* property_returnBy;

                
                axis2_bool_t is_valid_returnBy;
            axutil_date_time_t* property_lastModifiedDate;

                
                axis2_bool_t is_valid_lastModifiedDate;
            
        };


       /************************* Private Function prototypes ********************************/
        
                 axis2_status_t AXIS2_CALL
                 adb_resources_type0_set_resource_nil_at(
                        adb_resources_type0_t* _resources_type0, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_resources_type0_set_resource_nil(
                        adb_resources_type0_t* _resources_type0,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_resources_type0_t* AXIS2_CALL
        adb_resources_type0_create(
            const axutil_env_t *env)
        {
            adb_resources_type0_t *_resources_type0 = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _resources_type0 = (adb_resources_type0_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_resources_type0_t));

            if(NULL == _resources_type0)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_resources_type0, 0, sizeof(adb_resources_type0_t));

            _resources_type0->property_TypeName = axutil_strdup(env, "adb_resources_type0");
            _resources_type0->property_resource  = NULL;
                  _resources_type0->is_valid_resource  = AXIS2_FALSE;
            _resources_type0->property_returnBy  = NULL;
                  _resources_type0->is_valid_returnBy  = AXIS2_FALSE;
            _resources_type0->property_lastModifiedDate  = NULL;
                  _resources_type0->is_valid_lastModifiedDate  = AXIS2_FALSE;
            

            return _resources_type0;
        }

        adb_resources_type0_t* AXIS2_CALL
        adb_resources_type0_create_with_values(
            const axutil_env_t *env,
                axutil_array_list_t* _resource,
                axutil_date_time_t* _returnBy,
                axutil_date_time_t* _lastModifiedDate)
        {
            adb_resources_type0_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_resources_type0_create(env);

            
              status = adb_resources_type0_set_resource(
                                     adb_obj,
                                     env,
                                     _resource);
              if(status == AXIS2_FAILURE) {
                  adb_resources_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_resources_type0_set_returnBy(
                                     adb_obj,
                                     env,
                                     _returnBy);
              if(status == AXIS2_FAILURE) {
                  adb_resources_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_resources_type0_set_lastModifiedDate(
                                     adb_obj,
                                     env,
                                     _lastModifiedDate);
              if(status == AXIS2_FAILURE) {
                  adb_resources_type0_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axutil_array_list_t* AXIS2_CALL
                adb_resources_type0_free_popping_value(
                        adb_resources_type0_t* _resources_type0,
                        const axutil_env_t *env)
                {
                    axutil_array_list_t* value;

                    
                    
                    value = _resources_type0->property_resource;

                    _resources_type0->property_resource = (axutil_array_list_t*)NULL;
                    adb_resources_type0_free(_resources_type0, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_resources_type0_free(
                adb_resources_type0_t* _resources_type0,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _resources_type0,
                env,
                "adb_resources_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_resources_type0_free_obj(
                adb_resources_type0_t* _resources_type0,
                const axutil_env_t *env)
        {
            
                int i = 0;
                int count = 0;
                void *element = NULL;
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _resources_type0, AXIS2_FAILURE);

            if (_resources_type0->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _resources_type0->property_TypeName);
            }

            adb_resources_type0_reset_resource(_resources_type0, env);
            adb_resources_type0_reset_returnBy(_resources_type0, env);
            adb_resources_type0_reset_lastModifiedDate(_resources_type0, env);
            

            if(_resources_type0)
            {
                AXIS2_FREE(env->allocator, _resources_type0);
                _resources_type0 = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_resources_type0_deserialize(
                adb_resources_type0_t* _resources_type0,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _resources_type0,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_resources_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_resources_type0_deserialize_obj(
                adb_resources_type0_t* _resources_type0,
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
            AXIS2_PARAM_CHECK(env->error, _resources_type0, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for resources_type0 : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    
                 parent_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                 attribute_hash = axiom_element_get_all_attributes(parent_element, env);
              
                    /*
                     * building resource array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building resource element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "resource", "http://www.daisy.org/ns/daisy-online/", NULL);
                                  
                               
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

                                  if (adb_resource_type0_is_particle() ||  
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_resource_type0");
                                          
                                          status =  adb_resource_type0_deserialize((adb_resource_type0_t*)element, env,
                                                                                 &current_node, &is_early_node_valid, AXIS2_FALSE);
                                          
                                          if(AXIS2_FAILURE ==  status)
                                          {
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element resource ");
                                          }
                                          else
                                          {
                                            axutil_array_list_add_at(arr_list, env, i, element);
                                          }
                                        
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for resource ");
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
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "resource (@minOccurs = '1') only have %d elements", i);
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
                                    status = adb_resources_type0_set_resource(_resources_type0, env,
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "returnBy"))
                             
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
                    /* this is hoping that attribute is stored in "returnBy", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "returnBy");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      
                           element = (void*)axutil_date_time_create(env);
                           axutil_date_time_deserialize_date_time((axutil_date_time_t*)element, env,
                                                                      attrib_text);
                           adb_resources_type0_set_returnBy(_resources_type0,
                                                          env, (axutil_date_time_t*)element);
                        
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "lastModifiedDate"))
                             
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
                    /* this is hoping that attribute is stored in "lastModifiedDate", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "lastModifiedDate");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      
                           element = (void*)axutil_date_time_create(env);
                           axutil_date_time_deserialize_date_time((axutil_date_time_t*)element, env,
                                                                      attrib_text);
                           adb_resources_type0_set_lastModifiedDate(_resources_type0,
                                                          env, (axutil_date_time_t*)element);
                        
                    }
                  
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_resources_type0_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_resources_type0_declare_parent_namespaces(
                    adb_resources_type0_t* _resources_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_resources_type0_serialize(
                adb_resources_type0_t* _resources_type0,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_resources_type0 == NULL)
            {
                return adb_resources_type0_serialize_obj(
                    _resources_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _resources_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_resources_type0");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_resources_type0_serialize_obj(
                adb_resources_type0_t* _resources_type0,
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
             
                    axis2_char_t text_value_1[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t *text_value_2;
                    axis2_char_t *text_value_2_temp;
                    
                    axis2_char_t *text_value_3;
                    axis2_char_t *text_value_3_temp;
                    
                axis2_char_t *text_value = NULL;
             
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _resources_type0, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
                if(_resources_type0->is_valid_returnBy)
                {
                
                        p_prefix = NULL;
                      
                           text_value =  axutil_date_time_serialize_date_time(_resources_type0->property_returnBy, env);
                           string_to_stream = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) *
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(text_value) + 
                                                             axutil_strlen("returnBy")));
                           sprintf(string_to_stream, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "returnBy",  text_value);
                           axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
                           AXIS2_FREE(env-> allocator, string_to_stream);
                        
                   }
                   
                if(_resources_type0->is_valid_lastModifiedDate)
                {
                
                        p_prefix = NULL;
                      
                           text_value =  axutil_date_time_serialize_date_time(_resources_type0->property_lastModifiedDate, env);
                           string_to_stream = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) *
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(text_value) + 
                                                             axutil_strlen("lastModifiedDate")));
                           sprintf(string_to_stream, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "lastModifiedDate",  text_value);
                           axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
                           AXIS2_FREE(env-> allocator, string_to_stream);
                        
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
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"resources_type0\"", NULL);
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
                                 "http://www.daisy.org/ns/daisy-online/",
                                 xsi_prefix);
            xsi_type_attri = axiom_attribute_create (env, "type", "resources_type0", xsi_ns);
            
            axiom_element_add_attribute (parent_element, env, xsi_type_attri, parent);
        
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.daisy.org/ns/daisy-online/",
                                            p_prefix));
                       }
                      

                   if (!_resources_type0->is_valid_resource)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property resource");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("resource"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("resource")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing resource array
                      */
                     if (_resources_type0->property_resource != NULL)
                     {
                        

                            sprintf(start_input_str, "<%s%sresource",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%sresource>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_resources_type0->property_resource, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_resources_type0->property_resource, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing resource element
                      */

                    
                     
                            if(!adb_resource_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_resource_type0_serialize((adb_resource_type0_t*)element, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_resource_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_resource_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                    
                    if(parent_tag_closed)
                    {
                       if(_resources_type0->is_valid_returnBy)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value =  axutil_date_time_serialize_date_time(_resources_type0->property_returnBy, env);
                           text_attri = axiom_attribute_create (env, "returnBy", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                       
                  }
                
                    
                    if(parent_tag_closed)
                    {
                       if(_resources_type0->is_valid_lastModifiedDate)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value =  axutil_date_time_serialize_date_time(_resources_type0->property_lastModifiedDate, env);
                           text_attri = axiom_attribute_create (env, "lastModifiedDate", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                       
                  }
                

            return parent;
        }


        

            /**
             * Getter for resource by  Property Number 1
             */
            axutil_array_list_t* AXIS2_CALL
            adb_resources_type0_get_property1(
                adb_resources_type0_t* _resources_type0,
                const axutil_env_t *env)
            {
                return adb_resources_type0_get_resource(_resources_type0,
                                             env);
            }

            /**
             * getter for resource.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_resources_type0_get_resource(
                    adb_resources_type0_t* _resources_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _resources_type0, NULL);
                  

                return _resources_type0->property_resource;
             }

            /**
             * setter for resource
             */
            axis2_status_t AXIS2_CALL
            adb_resources_type0_set_resource(
                    adb_resources_type0_t* _resources_type0,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_resource)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _resources_type0, AXIS2_FAILURE);
                
                if(_resources_type0->is_valid_resource &&
                        arg_resource == _resources_type0->property_resource)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_resource, env);
                 
                 if (size < 1)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "resource has less than minOccurs(1)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_resource, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 
                    if(!non_nil_exists)
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of resource is being set to NULL, but it is not a nullable or minOccurs=0 element");
                        return AXIS2_FAILURE;
                    }
                 
                  if(NULL == arg_resource)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "resource is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_resources_type0_reset_resource(_resources_type0, env);

                
                if(NULL == arg_resource)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _resources_type0->property_resource = arg_resource;
                        if(non_nil_exists)
                        {
                            _resources_type0->is_valid_resource = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of resource.
             */
            adb_resource_type0_t* AXIS2_CALL
            adb_resources_type0_get_resource_at(
                    adb_resources_type0_t* _resources_type0,
                    const axutil_env_t *env, int i)
            {
                adb_resource_type0_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _resources_type0, NULL);
                  

                if(_resources_type0->property_resource == NULL)
                {
                    return (adb_resource_type0_t*)0;
                }
                ret_val = (adb_resource_type0_t*)axutil_array_list_get(_resources_type0->property_resource, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of resource.
             */
            axis2_status_t AXIS2_CALL
            adb_resources_type0_set_resource_at(
                    adb_resources_type0_t* _resources_type0,
                    const axutil_env_t *env, int i,
                    adb_resource_type0_t* arg_resource)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _resources_type0, AXIS2_FAILURE);
                
                if( _resources_type0->is_valid_resource &&
                    _resources_type0->property_resource &&
                
                    arg_resource == (adb_resource_type0_t*)axutil_array_list_get(_resources_type0->property_resource, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_resource)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_resources_type0->property_resource != NULL)
                        {
                            size = axutil_array_list_size(_resources_type0->property_resource, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_resources_type0->property_resource, env, i))
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
                                   AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of resource is beinng set to be smaller than the specificed number of minOccurs(1)");
                                   return AXIS2_FAILURE;
                            }
                        
                        }
                    }
                  
                   if(!non_nil_exists)
                   {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of resource is being set to NULL, but it is not a nullable or minOccurs=0 element");
                       return AXIS2_FAILURE;
                   }
                

                if(_resources_type0->property_resource == NULL)
                {
                    _resources_type0->property_resource = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_resources_type0->property_resource, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_resource_type0_free((adb_resource_type0_t*)element, env);
                     
                }

                
                   axutil_array_list_set(_resources_type0->property_resource , env, i, arg_resource);
                  _resources_type0->is_valid_resource = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to resource.
             */
            axis2_status_t AXIS2_CALL
            adb_resources_type0_add_resource(
                    adb_resources_type0_t* _resources_type0,
                    const axutil_env_t *env,
                    adb_resource_type0_t* arg_resource)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _resources_type0, AXIS2_FAILURE);

                
                    if(NULL == arg_resource)
                    {
                      
                           AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of resource is being set to NULL, but it is not a nullable or minOccurs=0 element");
                           return AXIS2_FAILURE;
                        
                    }
                  

                if(_resources_type0->property_resource == NULL)
                {
                    _resources_type0->property_resource = axutil_array_list_create(env, 10);
                }
                if(_resources_type0->property_resource == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for resource");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_resources_type0->property_resource , env, arg_resource);
                  _resources_type0->is_valid_resource = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the resource array.
             */
            int AXIS2_CALL
            adb_resources_type0_sizeof_resource(
                    adb_resources_type0_t* _resources_type0,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _resources_type0, -1);
                if(_resources_type0->property_resource == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_resources_type0->property_resource, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_resources_type0_remove_resource_at(
                    adb_resources_type0_t* _resources_type0,
                    const axutil_env_t *env, int i)
            {
                return adb_resources_type0_set_resource_nil_at(_resources_type0, env, i);
            }

            

           /**
            * resetter for resource
            */
           axis2_status_t AXIS2_CALL
           adb_resources_type0_reset_resource(
                   adb_resources_type0_t* _resources_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _resources_type0, AXIS2_FAILURE);
               

               
                  if (_resources_type0->property_resource != NULL)
                  {
                      count = axutil_array_list_size(_resources_type0->property_resource, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_resources_type0->property_resource, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   adb_resource_type0_free((adb_resource_type0_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_resources_type0->property_resource, env);
                  }
                _resources_type0->is_valid_resource = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether resource is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_resources_type0_is_resource_nil(
                   adb_resources_type0_t* _resources_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _resources_type0, AXIS2_TRUE);
               
               return !_resources_type0->is_valid_resource;
           }

           /**
            * Set resource to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_resources_type0_set_resource_nil(
                   adb_resources_type0_t* _resources_type0,
                   const axutil_env_t *env)
           {
               return adb_resources_type0_reset_resource(_resources_type0, env);
           }

           
           /**
            * Check whether resource is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_resources_type0_is_resource_nil_at(
                   adb_resources_type0_t* _resources_type0,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _resources_type0, AXIS2_TRUE);
               
               return (_resources_type0->is_valid_resource == AXIS2_FALSE ||
                        NULL == _resources_type0->property_resource || 
                        NULL == axutil_array_list_get(_resources_type0->property_resource, env, i));
           }

           /**
            * Set resource to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_resources_type0_set_resource_nil_at(
                   adb_resources_type0_t* _resources_type0,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _resources_type0, AXIS2_FAILURE);

                if(_resources_type0->property_resource == NULL ||
                            _resources_type0->is_valid_resource == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_resources_type0->property_resource, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_resources_type0->property_resource, env, i))
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
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of resource is being set to NULL, but it is not a nullable or minOccurs=0 element");
                       return AXIS2_FAILURE;
                   }
                

                if( k < 1)
                {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of resource is beinng set to be smaller than the specificed number of minOccurs(1)");
                       return AXIS2_FAILURE;
                }
 
                if(_resources_type0->property_resource == NULL)
                {
                    _resources_type0->is_valid_resource = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_resources_type0->property_resource, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_resource_type0_free((adb_resource_type0_t*)element, env);
                     
                }

                

                
                axutil_array_list_set(_resources_type0->property_resource , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for returnBy by  Property Number 2
             */
            axutil_date_time_t* AXIS2_CALL
            adb_resources_type0_get_property2(
                adb_resources_type0_t* _resources_type0,
                const axutil_env_t *env)
            {
                return adb_resources_type0_get_returnBy(_resources_type0,
                                             env);
            }

            /**
             * getter for returnBy.
             */
            axutil_date_time_t* AXIS2_CALL
            adb_resources_type0_get_returnBy(
                    adb_resources_type0_t* _resources_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _resources_type0, NULL);
                  

                return _resources_type0->property_returnBy;
             }

            /**
             * setter for returnBy
             */
            axis2_status_t AXIS2_CALL
            adb_resources_type0_set_returnBy(
                    adb_resources_type0_t* _resources_type0,
                    const axutil_env_t *env,
                    axutil_date_time_t*  arg_returnBy)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _resources_type0, AXIS2_FAILURE);
                
                if(_resources_type0->is_valid_returnBy &&
                        arg_returnBy == _resources_type0->property_returnBy)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_returnBy)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "returnBy is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_resources_type0_reset_returnBy(_resources_type0, env);

                
                if(NULL == arg_returnBy)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _resources_type0->property_returnBy = arg_returnBy;
                        _resources_type0->is_valid_returnBy = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for returnBy
            */
           axis2_status_t AXIS2_CALL
           adb_resources_type0_reset_returnBy(
                   adb_resources_type0_t* _resources_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _resources_type0, AXIS2_FAILURE);
               

               
            
                
                if(_resources_type0->property_returnBy != NULL)
                {
                   
                   
                      axutil_date_time_free(_resources_type0->property_returnBy, env);
                     _resources_type0->property_returnBy = NULL;
                }
            
                
                
                _resources_type0->is_valid_returnBy = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether returnBy is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_resources_type0_is_returnBy_nil(
                   adb_resources_type0_t* _resources_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _resources_type0, AXIS2_TRUE);
               
               return !_resources_type0->is_valid_returnBy;
           }

           /**
            * Set returnBy to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_resources_type0_set_returnBy_nil(
                   adb_resources_type0_t* _resources_type0,
                   const axutil_env_t *env)
           {
               return adb_resources_type0_reset_returnBy(_resources_type0, env);
           }

           

            /**
             * Getter for lastModifiedDate by  Property Number 3
             */
            axutil_date_time_t* AXIS2_CALL
            adb_resources_type0_get_property3(
                adb_resources_type0_t* _resources_type0,
                const axutil_env_t *env)
            {
                return adb_resources_type0_get_lastModifiedDate(_resources_type0,
                                             env);
            }

            /**
             * getter for lastModifiedDate.
             */
            axutil_date_time_t* AXIS2_CALL
            adb_resources_type0_get_lastModifiedDate(
                    adb_resources_type0_t* _resources_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _resources_type0, NULL);
                  

                return _resources_type0->property_lastModifiedDate;
             }

            /**
             * setter for lastModifiedDate
             */
            axis2_status_t AXIS2_CALL
            adb_resources_type0_set_lastModifiedDate(
                    adb_resources_type0_t* _resources_type0,
                    const axutil_env_t *env,
                    axutil_date_time_t*  arg_lastModifiedDate)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _resources_type0, AXIS2_FAILURE);
                
                if(_resources_type0->is_valid_lastModifiedDate &&
                        arg_lastModifiedDate == _resources_type0->property_lastModifiedDate)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_lastModifiedDate)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "lastModifiedDate is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_resources_type0_reset_lastModifiedDate(_resources_type0, env);

                
                if(NULL == arg_lastModifiedDate)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _resources_type0->property_lastModifiedDate = arg_lastModifiedDate;
                        _resources_type0->is_valid_lastModifiedDate = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for lastModifiedDate
            */
           axis2_status_t AXIS2_CALL
           adb_resources_type0_reset_lastModifiedDate(
                   adb_resources_type0_t* _resources_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _resources_type0, AXIS2_FAILURE);
               

               
            
                
                if(_resources_type0->property_lastModifiedDate != NULL)
                {
                   
                   
                      axutil_date_time_free(_resources_type0->property_lastModifiedDate, env);
                     _resources_type0->property_lastModifiedDate = NULL;
                }
            
                
                
                _resources_type0->is_valid_lastModifiedDate = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether lastModifiedDate is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_resources_type0_is_lastModifiedDate_nil(
                   adb_resources_type0_t* _resources_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _resources_type0, AXIS2_TRUE);
               
               return !_resources_type0->is_valid_lastModifiedDate;
           }

           /**
            * Set lastModifiedDate to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_resources_type0_set_lastModifiedDate_nil(
                   adb_resources_type0_t* _resources_type0,
                   const axutil_env_t *env)
           {
               return adb_resources_type0_reset_lastModifiedDate(_resources_type0, env);
           }

           

