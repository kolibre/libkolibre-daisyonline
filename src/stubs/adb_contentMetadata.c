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
         * adb_contentMetadata.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_contentMetadata.h"
        
               /*
                * implmentation of the contentMetadata|http://www.daisy.org/ns/daisy-online/ element
                */
           


        struct adb_contentMetadata
        {
            axis2_char_t *property_TypeName;

            
                axutil_qname_t* qname;
            adb_sample_type0_t* property_sample;

                
                axis2_bool_t is_valid_sample;
            adb_metadata_type0_t* property_metadata;

                
                axis2_bool_t is_valid_metadata;
            axis2_char_t* property_category;

                
                axis2_bool_t is_valid_category;
            axis2_bool_t property_requiresReturn;

                
                axis2_bool_t is_valid_requiresReturn;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_contentMetadata_set_sample_nil(
                        adb_contentMetadata_t* _contentMetadata,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_contentMetadata_set_metadata_nil(
                        adb_contentMetadata_t* _contentMetadata,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_contentMetadata_set_requiresReturn_nil(
                        adb_contentMetadata_t* _contentMetadata,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_contentMetadata_t* AXIS2_CALL
        adb_contentMetadata_create(
            const axutil_env_t *env)
        {
            adb_contentMetadata_t *_contentMetadata = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _contentMetadata = (adb_contentMetadata_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_contentMetadata_t));

            if(NULL == _contentMetadata)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_contentMetadata, 0, sizeof(adb_contentMetadata_t));

            _contentMetadata->property_TypeName = axutil_strdup(env, "adb_contentMetadata");
            _contentMetadata->property_sample  = NULL;
                  _contentMetadata->is_valid_sample  = AXIS2_FALSE;
            _contentMetadata->property_metadata  = NULL;
                  _contentMetadata->is_valid_metadata  = AXIS2_FALSE;
            _contentMetadata->property_category  = NULL;
                  _contentMetadata->is_valid_category  = AXIS2_FALSE;
            _contentMetadata->is_valid_requiresReturn  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "contentMetadata",
                        "http://www.daisy.org/ns/daisy-online/",
                        NULL);
                _contentMetadata->qname = qname;
            

            return _contentMetadata;
        }

        adb_contentMetadata_t* AXIS2_CALL
        adb_contentMetadata_create_with_values(
            const axutil_env_t *env,
                adb_sample_type0_t* _sample,
                adb_metadata_type0_t* _metadata,
                axis2_char_t* _category,
                axis2_bool_t _requiresReturn)
        {
            adb_contentMetadata_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_contentMetadata_create(env);

            
              status = adb_contentMetadata_set_sample(
                                     adb_obj,
                                     env,
                                     _sample);
              if(status == AXIS2_FAILURE) {
                  adb_contentMetadata_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_contentMetadata_set_metadata(
                                     adb_obj,
                                     env,
                                     _metadata);
              if(status == AXIS2_FAILURE) {
                  adb_contentMetadata_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_contentMetadata_set_category(
                                     adb_obj,
                                     env,
                                     _category);
              if(status == AXIS2_FAILURE) {
                  adb_contentMetadata_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_contentMetadata_set_requiresReturn(
                                     adb_obj,
                                     env,
                                     _requiresReturn);
              if(status == AXIS2_FAILURE) {
                  adb_contentMetadata_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        adb_sample_type0_t* AXIS2_CALL
                adb_contentMetadata_free_popping_value(
                        adb_contentMetadata_t* _contentMetadata,
                        const axutil_env_t *env)
                {
                    adb_sample_type0_t* value;

                    
                    
                    value = _contentMetadata->property_sample;

                    _contentMetadata->property_sample = (adb_sample_type0_t*)NULL;
                    adb_contentMetadata_free(_contentMetadata, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_contentMetadata_free(
                adb_contentMetadata_t* _contentMetadata,
                const axutil_env_t *env)
        {
            
            
            return adb_contentMetadata_free_obj(
                _contentMetadata,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_contentMetadata_free_obj(
                adb_contentMetadata_t* _contentMetadata,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _contentMetadata, AXIS2_FAILURE);

            if (_contentMetadata->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _contentMetadata->property_TypeName);
            }

            adb_contentMetadata_reset_sample(_contentMetadata, env);
            adb_contentMetadata_reset_metadata(_contentMetadata, env);
            adb_contentMetadata_reset_category(_contentMetadata, env);
            adb_contentMetadata_reset_requiresReturn(_contentMetadata, env);
            
              if(_contentMetadata->qname)
              {
                  axutil_qname_free (_contentMetadata->qname, env);
                  _contentMetadata->qname = NULL;
              }
            

            if(_contentMetadata)
            {
                AXIS2_FREE(env->allocator, _contentMetadata);
                _contentMetadata = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_contentMetadata_deserialize(
                adb_contentMetadata_t* _contentMetadata,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_contentMetadata_deserialize_obj(
                _contentMetadata,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_contentMetadata_deserialize_obj(
                adb_contentMetadata_t* _contentMetadata,
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
            AXIS2_PARAM_CHECK(env->error, _contentMetadata, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for contentMetadata : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              

                    current_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                    qname = axiom_element_get_qname(current_element, env, parent);
                    if (axutil_qname_equals(qname, env, _contentMetadata-> qname))
                    {
                        
                          first_node = axiom_node_get_first_child(parent, env);
                          
                    }
                    else
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                              "Failed in building adb object for contentMetadata : "
                              "Expected %s but returned %s",
                              axutil_qname_to_string(_contentMetadata-> qname, env),
                              axutil_qname_to_string(qname, env));
                        
                        return AXIS2_FAILURE;
                    }
                    
                 parent_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                 attribute_hash = axiom_element_get_all_attributes(parent_element, env);
              

                     
                     /*
                      * building sample element
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
                                   
                                 element_qname = axutil_qname_create(env, "sample", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

                           if (adb_sample_type0_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_sample_type0");

                                      status =  adb_sample_type0_deserialize((adb_sample_type0_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element sample");
                                      }
                                      else
                                      {
                                          status = adb_contentMetadata_set_sample(_contentMetadata, env,
                                                                   (adb_sample_type0_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for sample ");
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
                      * building metadata element
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
                                 
                                 element_qname = axutil_qname_create(env, "metadata", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

                           if (adb_metadata_type0_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_metadata_type0");

                                      status =  adb_metadata_type0_deserialize((adb_metadata_type0_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element metadata");
                                      }
                                      else
                                      {
                                          status = adb_contentMetadata_set_metadata(_contentMetadata, env,
                                                                   (adb_metadata_type0_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for metadata ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element metadata missing");
                                  return AXIS2_FAILURE;
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "category"))
                             
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
                    /* this is hoping that attribute is stored in "category", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "category");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_contentMetadata_set_category(_contentMetadata,
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "requiresReturn"))
                             
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
                    /* this is hoping that attribute is stored in "requiresReturn", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "requiresReturn");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      
                           if (!axutil_strcmp(attrib_text, "TRUE") || !axutil_strcmp(attrib_text, "true"))
                           {
                               adb_contentMetadata_set_requiresReturn(_contentMetadata,
                                                          env, AXIS2_TRUE);
                           }
                           else
                           {
                               adb_contentMetadata_set_requiresReturn(_contentMetadata,
                                                          env, AXIS2_FALSE);
                           }
                        
                    }
                  
                    else if(!dont_care_minoccurs)
                    {
                        if(element_qname)
                        {
                            axutil_qname_free(element_qname, env);
                        }
                        /* this is not a nillable element*/
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "required attribute requiresReturn missing");
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
          adb_contentMetadata_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_contentMetadata_declare_parent_namespaces(
                    adb_contentMetadata_t* _contentMetadata,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_contentMetadata_serialize(
                adb_contentMetadata_t* _contentMetadata,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_contentMetadata_serialize_obj(
                    _contentMetadata, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_contentMetadata_serialize_obj(
                adb_contentMetadata_t* _contentMetadata,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
               axiom_attribute_t *text_attri = NULL;
             
             axis2_char_t *string_to_stream;
            
         
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

             
                int next_ns_index_value = 0;
            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _contentMetadata, NULL);
            
             
                    namespaces = axutil_hash_make(env);
                    next_ns_index = &next_ns_index_value;
                     
                           ns1 = axiom_namespace_create (env,
                                             "http://www.daisy.org/ns/daisy-online/",
                                             "n"); 
                           axutil_hash_set(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING, axutil_strdup(env, "n"));
                       
                     
                    parent_element = axiom_element_create (env, NULL, "contentMetadata", ns1 , &parent);
                    
                    
                    axiom_element_set_namespace(parent_element, env, ns1, parent);


            
                    data_source = axiom_data_source_create(env, parent, &current_node);
                    stream = axiom_data_source_get_stream(data_source, env);
                  
            if(!parent_tag_closed)
            {
            
                if(_contentMetadata->is_valid_category)
                {
                
                        p_prefix = NULL;
                      
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(_contentMetadata->property_category) + 
                                                                axutil_strlen("category")));
                           sprintf(text_value, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "category", _contentMetadata->property_category);
                           axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
                if(_contentMetadata->is_valid_requiresReturn)
                {
                
                        p_prefix = NULL;
                      
                           
                           text_value = (axis2_char_t*)((_contentMetadata->property_requiresReturn)?"true":"false");
                           string_to_stream = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) *
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(text_value) + 
                                                             axutil_strlen("requiresReturn")));
                           sprintf(string_to_stream, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "requiresReturn",  text_value);
                           axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
                           AXIS2_FREE(env-> allocator, string_to_stream);
                        
                   }
                   
                   else
                   {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute requiresReturn");
                      return NULL;
                   }
                   
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
                                 "http://www.daisy.org/ns/daisy-online/",
                                 xsi_prefix);
            xsi_type_attri = axiom_attribute_create (env, "type", "contentMetadata", xsi_ns);
            
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
                      

                   if (!_contentMetadata->is_valid_sample)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("sample"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("sample")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing sample element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%ssample",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%ssample>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_sample_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_sample_type0_serialize(_contentMetadata->property_sample, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_sample_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_sample_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.daisy.org/ns/daisy-online/",
                                            p_prefix));
                       }
                      

                   if (!_contentMetadata->is_valid_metadata)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property metadata");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("metadata"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("metadata")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing metadata element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%smetadata",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%smetadata>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_metadata_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_metadata_type0_serialize(_contentMetadata->property_metadata, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_metadata_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_metadata_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                    
                    if(parent_tag_closed)
                    {
                       if(_contentMetadata->is_valid_category)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = _contentMetadata->property_category;
                           text_attri = axiom_attribute_create (env, "category", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                       
                  }
                
                    
                    if(parent_tag_closed)
                    {
                       if(_contentMetadata->is_valid_requiresReturn)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           
                           text_value =  (axis2_char_t*)((_contentMetadata->property_requiresReturn)?axutil_strdup(env, "true"):axutil_strdup(env, "false"));
                           text_attri = axiom_attribute_create (env, "requiresReturn", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                           AXIS2_FREE(env->allocator, text_value);
                        
                      }
                      
                      else
                      {
                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute requiresReturn");
                         return NULL;
                      }
                       
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
             * Getter for sample by  Property Number 1
             */
            adb_sample_type0_t* AXIS2_CALL
            adb_contentMetadata_get_property1(
                adb_contentMetadata_t* _contentMetadata,
                const axutil_env_t *env)
            {
                return adb_contentMetadata_get_sample(_contentMetadata,
                                             env);
            }

            /**
             * getter for sample.
             */
            adb_sample_type0_t* AXIS2_CALL
            adb_contentMetadata_get_sample(
                    adb_contentMetadata_t* _contentMetadata,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _contentMetadata, NULL);
                  

                return _contentMetadata->property_sample;
             }

            /**
             * setter for sample
             */
            axis2_status_t AXIS2_CALL
            adb_contentMetadata_set_sample(
                    adb_contentMetadata_t* _contentMetadata,
                    const axutil_env_t *env,
                    adb_sample_type0_t*  arg_sample)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _contentMetadata, AXIS2_FAILURE);
                
                if(_contentMetadata->is_valid_sample &&
                        arg_sample == _contentMetadata->property_sample)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_contentMetadata_reset_sample(_contentMetadata, env);

                
                if(NULL == arg_sample)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _contentMetadata->property_sample = arg_sample;
                        _contentMetadata->is_valid_sample = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for sample
            */
           axis2_status_t AXIS2_CALL
           adb_contentMetadata_reset_sample(
                   adb_contentMetadata_t* _contentMetadata,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _contentMetadata, AXIS2_FAILURE);
               

               
            
                
                if(_contentMetadata->property_sample != NULL)
                {
                   
                   adb_sample_type0_free(_contentMetadata->property_sample, env);
                     _contentMetadata->property_sample = NULL;
                }
            
                
                
                _contentMetadata->is_valid_sample = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether sample is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_contentMetadata_is_sample_nil(
                   adb_contentMetadata_t* _contentMetadata,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _contentMetadata, AXIS2_TRUE);
               
               return !_contentMetadata->is_valid_sample;
           }

           /**
            * Set sample to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_contentMetadata_set_sample_nil(
                   adb_contentMetadata_t* _contentMetadata,
                   const axutil_env_t *env)
           {
               return adb_contentMetadata_reset_sample(_contentMetadata, env);
           }

           

            /**
             * Getter for metadata by  Property Number 2
             */
            adb_metadata_type0_t* AXIS2_CALL
            adb_contentMetadata_get_property2(
                adb_contentMetadata_t* _contentMetadata,
                const axutil_env_t *env)
            {
                return adb_contentMetadata_get_metadata(_contentMetadata,
                                             env);
            }

            /**
             * getter for metadata.
             */
            adb_metadata_type0_t* AXIS2_CALL
            adb_contentMetadata_get_metadata(
                    adb_contentMetadata_t* _contentMetadata,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _contentMetadata, NULL);
                  

                return _contentMetadata->property_metadata;
             }

            /**
             * setter for metadata
             */
            axis2_status_t AXIS2_CALL
            adb_contentMetadata_set_metadata(
                    adb_contentMetadata_t* _contentMetadata,
                    const axutil_env_t *env,
                    adb_metadata_type0_t*  arg_metadata)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _contentMetadata, AXIS2_FAILURE);
                
                if(_contentMetadata->is_valid_metadata &&
                        arg_metadata == _contentMetadata->property_metadata)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_metadata)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "metadata is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_contentMetadata_reset_metadata(_contentMetadata, env);

                
                if(NULL == arg_metadata)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _contentMetadata->property_metadata = arg_metadata;
                        _contentMetadata->is_valid_metadata = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for metadata
            */
           axis2_status_t AXIS2_CALL
           adb_contentMetadata_reset_metadata(
                   adb_contentMetadata_t* _contentMetadata,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _contentMetadata, AXIS2_FAILURE);
               

               
            
                
                if(_contentMetadata->property_metadata != NULL)
                {
                   
                   adb_metadata_type0_free(_contentMetadata->property_metadata, env);
                     _contentMetadata->property_metadata = NULL;
                }
            
                
                
                _contentMetadata->is_valid_metadata = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether metadata is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_contentMetadata_is_metadata_nil(
                   adb_contentMetadata_t* _contentMetadata,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _contentMetadata, AXIS2_TRUE);
               
               return !_contentMetadata->is_valid_metadata;
           }

           /**
            * Set metadata to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_contentMetadata_set_metadata_nil(
                   adb_contentMetadata_t* _contentMetadata,
                   const axutil_env_t *env)
           {
               return adb_contentMetadata_reset_metadata(_contentMetadata, env);
           }

           

            /**
             * Getter for category by  Property Number 3
             */
            axis2_char_t* AXIS2_CALL
            adb_contentMetadata_get_property3(
                adb_contentMetadata_t* _contentMetadata,
                const axutil_env_t *env)
            {
                return adb_contentMetadata_get_category(_contentMetadata,
                                             env);
            }

            /**
             * getter for category.
             */
            axis2_char_t* AXIS2_CALL
            adb_contentMetadata_get_category(
                    adb_contentMetadata_t* _contentMetadata,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _contentMetadata, NULL);
                  

                return _contentMetadata->property_category;
             }

            /**
             * setter for category
             */
            axis2_status_t AXIS2_CALL
            adb_contentMetadata_set_category(
                    adb_contentMetadata_t* _contentMetadata,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_category)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _contentMetadata, AXIS2_FAILURE);
                
                if(_contentMetadata->is_valid_category &&
                        arg_category == _contentMetadata->property_category)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_category)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "category is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_contentMetadata_reset_category(_contentMetadata, env);

                
                if(NULL == arg_category)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _contentMetadata->property_category = (axis2_char_t *)axutil_strdup(env, arg_category);
                        if(NULL == _contentMetadata->property_category)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for category");
                            return AXIS2_FAILURE;
                        }
                        _contentMetadata->is_valid_category = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for category
            */
           axis2_status_t AXIS2_CALL
           adb_contentMetadata_reset_category(
                   adb_contentMetadata_t* _contentMetadata,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _contentMetadata, AXIS2_FAILURE);
               

               
            
                
                if(_contentMetadata->property_category != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _contentMetadata->property_category);
                     _contentMetadata->property_category = NULL;
                }
            
                
                
                _contentMetadata->is_valid_category = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether category is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_contentMetadata_is_category_nil(
                   adb_contentMetadata_t* _contentMetadata,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _contentMetadata, AXIS2_TRUE);
               
               return !_contentMetadata->is_valid_category;
           }

           /**
            * Set category to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_contentMetadata_set_category_nil(
                   adb_contentMetadata_t* _contentMetadata,
                   const axutil_env_t *env)
           {
               return adb_contentMetadata_reset_category(_contentMetadata, env);
           }

           

            /**
             * Getter for requiresReturn by  Property Number 4
             */
            axis2_bool_t AXIS2_CALL
            adb_contentMetadata_get_property4(
                adb_contentMetadata_t* _contentMetadata,
                const axutil_env_t *env)
            {
                return adb_contentMetadata_get_requiresReturn(_contentMetadata,
                                             env);
            }

            /**
             * getter for requiresReturn.
             */
            axis2_bool_t AXIS2_CALL
            adb_contentMetadata_get_requiresReturn(
                    adb_contentMetadata_t* _contentMetadata,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (axis2_bool_t)0);
                    AXIS2_PARAM_CHECK(env->error, _contentMetadata, (axis2_bool_t)0);
                  

                return _contentMetadata->property_requiresReturn;
             }

            /**
             * setter for requiresReturn
             */
            axis2_status_t AXIS2_CALL
            adb_contentMetadata_set_requiresReturn(
                    adb_contentMetadata_t* _contentMetadata,
                    const axutil_env_t *env,
                    axis2_bool_t  arg_requiresReturn)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _contentMetadata, AXIS2_FAILURE);
                
                if(_contentMetadata->is_valid_requiresReturn &&
                        arg_requiresReturn == _contentMetadata->property_requiresReturn)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_contentMetadata_reset_requiresReturn(_contentMetadata, env);

                _contentMetadata->property_requiresReturn = arg_requiresReturn;
                        _contentMetadata->is_valid_requiresReturn = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for requiresReturn
            */
           axis2_status_t AXIS2_CALL
           adb_contentMetadata_reset_requiresReturn(
                   adb_contentMetadata_t* _contentMetadata,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _contentMetadata, AXIS2_FAILURE);
               

               _contentMetadata->is_valid_requiresReturn = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether requiresReturn is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_contentMetadata_is_requiresReturn_nil(
                   adb_contentMetadata_t* _contentMetadata,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _contentMetadata, AXIS2_TRUE);
               
               return !_contentMetadata->is_valid_requiresReturn;
           }

           /**
            * Set requiresReturn to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_contentMetadata_set_requiresReturn_nil(
                   adb_contentMetadata_t* _contentMetadata,
                   const axutil_env_t *env)
           {
               return adb_contentMetadata_reset_requiresReturn(_contentMetadata, env);
           }

           

