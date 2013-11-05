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
         * adb_resource_type0.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_resource_type0.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = resource_type0
                 * Namespace URI = http://www.daisy.org/ns/daisy-online/
                 * Namespace Prefix = ns3
                 */
           


        struct adb_resource_type0
        {
            axis2_char_t *property_TypeName;

            axutil_uri_t* property_uri;

                
                axis2_bool_t is_valid_uri;
            axis2_char_t* property_mimeType;

                
                axis2_bool_t is_valid_mimeType;
            int64_t property_size;

                
                axis2_bool_t is_valid_size;
            axutil_uri_t* property_localURI;

                
                axis2_bool_t is_valid_localURI;
            axutil_date_time_t* property_lastModifiedDate;

                
                axis2_bool_t is_valid_lastModifiedDate;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_resource_type0_set_uri_nil(
                        adb_resource_type0_t* _resource_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_resource_type0_set_mimeType_nil(
                        adb_resource_type0_t* _resource_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_resource_type0_set_size_nil(
                        adb_resource_type0_t* _resource_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_resource_type0_set_localURI_nil(
                        adb_resource_type0_t* _resource_type0,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_resource_type0_t* AXIS2_CALL
        adb_resource_type0_create(
            const axutil_env_t *env)
        {
            adb_resource_type0_t *_resource_type0 = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _resource_type0 = (adb_resource_type0_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_resource_type0_t));

            if(NULL == _resource_type0)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_resource_type0, 0, sizeof(adb_resource_type0_t));

            _resource_type0->property_TypeName = axutil_strdup(env, "adb_resource_type0");
            _resource_type0->property_uri  = NULL;
                  _resource_type0->is_valid_uri  = AXIS2_FALSE;
            _resource_type0->property_mimeType  = NULL;
                  _resource_type0->is_valid_mimeType  = AXIS2_FALSE;
            _resource_type0->is_valid_size  = AXIS2_FALSE;
            _resource_type0->property_localURI  = NULL;
                  _resource_type0->is_valid_localURI  = AXIS2_FALSE;
            _resource_type0->property_lastModifiedDate  = NULL;
                  _resource_type0->is_valid_lastModifiedDate  = AXIS2_FALSE;
            

            return _resource_type0;
        }

        adb_resource_type0_t* AXIS2_CALL
        adb_resource_type0_create_with_values(
            const axutil_env_t *env,
                axutil_uri_t* _uri,
                axis2_char_t* _mimeType,
                int64_t _size,
                axutil_uri_t* _localURI,
                axutil_date_time_t* _lastModifiedDate)
        {
            adb_resource_type0_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_resource_type0_create(env);

            
              status = adb_resource_type0_set_uri(
                                     adb_obj,
                                     env,
                                     _uri);
              if(status == AXIS2_FAILURE) {
                  adb_resource_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_resource_type0_set_mimeType(
                                     adb_obj,
                                     env,
                                     _mimeType);
              if(status == AXIS2_FAILURE) {
                  adb_resource_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_resource_type0_set_size(
                                     adb_obj,
                                     env,
                                     _size);
              if(status == AXIS2_FAILURE) {
                  adb_resource_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_resource_type0_set_localURI(
                                     adb_obj,
                                     env,
                                     _localURI);
              if(status == AXIS2_FAILURE) {
                  adb_resource_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_resource_type0_set_lastModifiedDate(
                                     adb_obj,
                                     env,
                                     _lastModifiedDate);
              if(status == AXIS2_FAILURE) {
                  adb_resource_type0_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axutil_uri_t* AXIS2_CALL
                adb_resource_type0_free_popping_value(
                        adb_resource_type0_t* _resource_type0,
                        const axutil_env_t *env)
                {
                    axutil_uri_t* value;

                    
                    
                    value = _resource_type0->property_uri;

                    _resource_type0->property_uri = (axutil_uri_t*)NULL;
                    adb_resource_type0_free(_resource_type0, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_resource_type0_free(
                adb_resource_type0_t* _resource_type0,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _resource_type0,
                env,
                "adb_resource_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_resource_type0_free_obj(
                adb_resource_type0_t* _resource_type0,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _resource_type0, AXIS2_FAILURE);

            if (_resource_type0->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _resource_type0->property_TypeName);
            }

            adb_resource_type0_reset_uri(_resource_type0, env);
            adb_resource_type0_reset_mimeType(_resource_type0, env);
            adb_resource_type0_reset_size(_resource_type0, env);
            adb_resource_type0_reset_localURI(_resource_type0, env);
            adb_resource_type0_reset_lastModifiedDate(_resource_type0, env);
            

            if(_resource_type0)
            {
                AXIS2_FREE(env->allocator, _resource_type0);
                _resource_type0 = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_resource_type0_deserialize(
                adb_resource_type0_t* _resource_type0,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _resource_type0,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_resource_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_resource_type0_deserialize_obj(
                adb_resource_type0_t* _resource_type0,
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
            AXIS2_PARAM_CHECK(env->error, _resource_type0, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for resource_type0 : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    
                 parent_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                 attribute_hash = axiom_element_get_all_attributes(parent_element, env);
              
                
                
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "uri"))
                             
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
                    /* this is hoping that attribute is stored in "uri", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "uri");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_resource_type0_set_uri(_resource_type0,
                                                          env, axutil_uri_parse_string(env, attrib_text));
                        
                    }
                  
                    else if(!dont_care_minoccurs)
                    {
                        if(element_qname)
                        {
                            axutil_qname_free(element_qname, env);
                        }
                        /* this is not a nillable element*/
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "required attribute uri missing");
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "mimeType"))
                             
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
                    /* this is hoping that attribute is stored in "mimeType", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "mimeType");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_resource_type0_set_mimeType(_resource_type0,
                                                          env, attrib_text);
                        
                    }
                  
                    else if(!dont_care_minoccurs)
                    {
                        if(element_qname)
                        {
                            axutil_qname_free(element_qname, env);
                        }
                        /* this is not a nillable element*/
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "required attribute mimeType missing");
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "size"))
                             
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
                    /* this is hoping that attribute is stored in "size", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "size");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_resource_type0_set_size(_resource_type0,
                                                          env, axutil_strtol(attrib_text, (char**)NULL, 0));
                        
                    }
                  
                    else if(!dont_care_minoccurs)
                    {
                        if(element_qname)
                        {
                            axutil_qname_free(element_qname, env);
                        }
                        /* this is not a nillable element*/
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "required attribute size missing");
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "localURI"))
                             
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
                    /* this is hoping that attribute is stored in "localURI", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "localURI");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_resource_type0_set_localURI(_resource_type0,
                                                          env, axutil_uri_parse_string(env, attrib_text));
                        
                    }
                  
                    else if(!dont_care_minoccurs)
                    {
                        if(element_qname)
                        {
                            axutil_qname_free(element_qname, env);
                        }
                        /* this is not a nillable element*/
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "required attribute localURI missing");
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
                           adb_resource_type0_set_lastModifiedDate(_resource_type0,
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
          adb_resource_type0_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_resource_type0_declare_parent_namespaces(
                    adb_resource_type0_t* _resource_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_resource_type0_serialize(
                adb_resource_type0_t* _resource_type0,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_resource_type0 == NULL)
            {
                return adb_resource_type0_serialize_obj(
                    _resource_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _resource_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_resource_type0");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_resource_type0_serialize_obj(
                adb_resource_type0_t* _resource_type0,
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
            
                    axis2_char_t *text_value_1;
                    axis2_char_t *text_value_1_temp;
                    
                    axis2_char_t *text_value_2;
                    axis2_char_t *text_value_2_temp;
                    
                    axis2_char_t text_value_3[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t *text_value_4;
                    axis2_char_t *text_value_4_temp;
                    
                    axis2_char_t *text_value_5;
                    axis2_char_t *text_value_5_temp;
                    
                axis2_char_t *text_value = NULL;
             
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _resource_type0, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
                if(_resource_type0->is_valid_uri)
                {
                
                        p_prefix = NULL;
                      
                           text_value = axutil_uri_to_string(_resource_type0->property_uri, env, AXIS2_URI_UNP_OMITUSERINFO);
                           string_to_stream = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) *
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(text_value) + 
                                                             axutil_strlen("uri")));
                           sprintf(string_to_stream, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "uri",  text_value);
                           axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
                           AXIS2_FREE(env-> allocator, string_to_stream);
                        
                   }
                   
                   else
                   {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute uri");
                      return NULL;
                   }
                   
                if(_resource_type0->is_valid_mimeType)
                {
                
                        p_prefix = NULL;
                      
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(_resource_type0->property_mimeType) + 
                                                                axutil_strlen("mimeType")));
                           sprintf(text_value, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "mimeType", _resource_type0->property_mimeType);
                           axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
                   else
                   {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute mimeType");
                      return NULL;
                   }
                   
                if(_resource_type0->is_valid_size)
                {
                
                        p_prefix = NULL;
                      
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                            (ADB_DEFAULT_DIGIT_LIMIT + 5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT + 
                                                                axutil_strlen("size")));
                           sprintf(text_value, " %s%s%s=\"" AXIS2_PRINTF_INT64_FORMAT_SPECIFIER  "\"", p_prefix?p_prefix:"", 
                                                (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "size", _resource_type0->property_size);
                           axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
                   else
                   {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute size");
                      return NULL;
                   }
                   
                if(_resource_type0->is_valid_localURI)
                {
                
                        p_prefix = NULL;
                      
                           text_value = axutil_uri_to_string(_resource_type0->property_localURI, env, AXIS2_URI_UNP_OMITUSERINFO);
                           string_to_stream = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) *
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(text_value) + 
                                                             axutil_strlen("localURI")));
                           sprintf(string_to_stream, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "localURI",  text_value);
                           axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
                           AXIS2_FREE(env-> allocator, string_to_stream);
                        
                   }
                   
                   else
                   {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute localURI");
                      return NULL;
                   }
                   
                if(_resource_type0->is_valid_lastModifiedDate)
                {
                
                        p_prefix = NULL;
                      
                           text_value =  axutil_date_time_serialize_date_time(_resource_type0->property_lastModifiedDate, env);
                           string_to_stream = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) *
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(text_value) + 
                                                             axutil_strlen("lastModifiedDate")));
                           sprintf(string_to_stream, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "lastModifiedDate",  text_value);
                           axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
                           AXIS2_FREE(env-> allocator, string_to_stream);
                        
                   }
                   
              string_to_stream = ">"; 
              axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
              tag_closed = 1;
            
            }
        
                    
                    if(parent_tag_closed)
                    {
                       if(_resource_type0->is_valid_uri)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = axutil_uri_to_string(_resource_type0->property_uri, env, AXIS2_URI_UNP_OMITUSERINFO);
                           text_attri = axiom_attribute_create (env, "uri", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                      
                      else
                      {
                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute uri");
                         return NULL;
                      }
                       
                  }
                
                    
                    if(parent_tag_closed)
                    {
                       if(_resource_type0->is_valid_mimeType)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = _resource_type0->property_mimeType;
                           text_attri = axiom_attribute_create (env, "mimeType", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                      
                      else
                      {
                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute mimeType");
                         return NULL;
                      }
                       
                  }
                
                    
                    if(parent_tag_closed)
                    {
                       if(_resource_type0->is_valid_size)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * ADB_DEFAULT_DIGIT_LIMIT);
                           sprintf (text_value, AXIS2_PRINTF_INT64_FORMAT_SPECIFIER, (int64_t)_resource_type0->property_size);
                           text_attri = axiom_attribute_create (env, "size", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                           AXIS2_FREE(env-> allocator, text_value);
                        
                      }
                      
                      else
                      {
                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute size");
                         return NULL;
                      }
                       
                  }
                
                    
                    if(parent_tag_closed)
                    {
                       if(_resource_type0->is_valid_localURI)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = axutil_uri_to_string(_resource_type0->property_localURI, env, AXIS2_URI_UNP_OMITUSERINFO);
                           text_attri = axiom_attribute_create (env, "localURI", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                      
                      else
                      {
                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute localURI");
                         return NULL;
                      }
                       
                  }
                
                    
                    if(parent_tag_closed)
                    {
                       if(_resource_type0->is_valid_lastModifiedDate)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value =  axutil_date_time_serialize_date_time(_resource_type0->property_lastModifiedDate, env);
                           text_attri = axiom_attribute_create (env, "lastModifiedDate", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                       
                  }
                

            return parent;
        }


        

            /**
             * Getter for uri by  Property Number 1
             */
            axutil_uri_t* AXIS2_CALL
            adb_resource_type0_get_property1(
                adb_resource_type0_t* _resource_type0,
                const axutil_env_t *env)
            {
                return adb_resource_type0_get_uri(_resource_type0,
                                             env);
            }

            /**
             * getter for uri.
             */
            axutil_uri_t* AXIS2_CALL
            adb_resource_type0_get_uri(
                    adb_resource_type0_t* _resource_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _resource_type0, NULL);
                  

                return _resource_type0->property_uri;
             }

            /**
             * setter for uri
             */
            axis2_status_t AXIS2_CALL
            adb_resource_type0_set_uri(
                    adb_resource_type0_t* _resource_type0,
                    const axutil_env_t *env,
                    axutil_uri_t*  arg_uri)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _resource_type0, AXIS2_FAILURE);
                
                if(_resource_type0->is_valid_uri &&
                        arg_uri == _resource_type0->property_uri)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_uri)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "uri is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_resource_type0_reset_uri(_resource_type0, env);

                
                if(NULL == arg_uri)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _resource_type0->property_uri = arg_uri;
                        _resource_type0->is_valid_uri = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for uri
            */
           axis2_status_t AXIS2_CALL
           adb_resource_type0_reset_uri(
                   adb_resource_type0_t* _resource_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _resource_type0, AXIS2_FAILURE);
               

               
            
                
                if(_resource_type0->property_uri != NULL)
                {
                   
                   
                      axutil_uri_free(_resource_type0->property_uri, env);
                     _resource_type0->property_uri = NULL;
                }
            
                
                
                _resource_type0->is_valid_uri = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether uri is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_resource_type0_is_uri_nil(
                   adb_resource_type0_t* _resource_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _resource_type0, AXIS2_TRUE);
               
               return !_resource_type0->is_valid_uri;
           }

           /**
            * Set uri to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_resource_type0_set_uri_nil(
                   adb_resource_type0_t* _resource_type0,
                   const axutil_env_t *env)
           {
               return adb_resource_type0_reset_uri(_resource_type0, env);
           }

           

            /**
             * Getter for mimeType by  Property Number 2
             */
            axis2_char_t* AXIS2_CALL
            adb_resource_type0_get_property2(
                adb_resource_type0_t* _resource_type0,
                const axutil_env_t *env)
            {
                return adb_resource_type0_get_mimeType(_resource_type0,
                                             env);
            }

            /**
             * getter for mimeType.
             */
            axis2_char_t* AXIS2_CALL
            adb_resource_type0_get_mimeType(
                    adb_resource_type0_t* _resource_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _resource_type0, NULL);
                  

                return _resource_type0->property_mimeType;
             }

            /**
             * setter for mimeType
             */
            axis2_status_t AXIS2_CALL
            adb_resource_type0_set_mimeType(
                    adb_resource_type0_t* _resource_type0,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_mimeType)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _resource_type0, AXIS2_FAILURE);
                
                if(_resource_type0->is_valid_mimeType &&
                        arg_mimeType == _resource_type0->property_mimeType)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_mimeType)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "mimeType is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_resource_type0_reset_mimeType(_resource_type0, env);

                
                if(NULL == arg_mimeType)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _resource_type0->property_mimeType = (axis2_char_t *)axutil_strdup(env, arg_mimeType);
                        if(NULL == _resource_type0->property_mimeType)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for mimeType");
                            return AXIS2_FAILURE;
                        }
                        _resource_type0->is_valid_mimeType = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for mimeType
            */
           axis2_status_t AXIS2_CALL
           adb_resource_type0_reset_mimeType(
                   adb_resource_type0_t* _resource_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _resource_type0, AXIS2_FAILURE);
               

               
            
                
                if(_resource_type0->property_mimeType != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _resource_type0->property_mimeType);
                     _resource_type0->property_mimeType = NULL;
                }
            
                
                
                _resource_type0->is_valid_mimeType = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether mimeType is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_resource_type0_is_mimeType_nil(
                   adb_resource_type0_t* _resource_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _resource_type0, AXIS2_TRUE);
               
               return !_resource_type0->is_valid_mimeType;
           }

           /**
            * Set mimeType to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_resource_type0_set_mimeType_nil(
                   adb_resource_type0_t* _resource_type0,
                   const axutil_env_t *env)
           {
               return adb_resource_type0_reset_mimeType(_resource_type0, env);
           }

           

            /**
             * Getter for size by  Property Number 3
             */
            int64_t AXIS2_CALL
            adb_resource_type0_get_property3(
                adb_resource_type0_t* _resource_type0,
                const axutil_env_t *env)
            {
                return adb_resource_type0_get_size(_resource_type0,
                                             env);
            }

            /**
             * getter for size.
             */
            int64_t AXIS2_CALL
            adb_resource_type0_get_size(
                    adb_resource_type0_t* _resource_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (int64_t)0);
                    AXIS2_PARAM_CHECK(env->error, _resource_type0, (int64_t)0);
                  

                return _resource_type0->property_size;
             }

            /**
             * setter for size
             */
            axis2_status_t AXIS2_CALL
            adb_resource_type0_set_size(
                    adb_resource_type0_t* _resource_type0,
                    const axutil_env_t *env,
                    const int64_t  arg_size)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _resource_type0, AXIS2_FAILURE);
                
                if(_resource_type0->is_valid_size &&
                        arg_size == _resource_type0->property_size)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_resource_type0_reset_size(_resource_type0, env);

                _resource_type0->property_size = arg_size;
                        _resource_type0->is_valid_size = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for size
            */
           axis2_status_t AXIS2_CALL
           adb_resource_type0_reset_size(
                   adb_resource_type0_t* _resource_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _resource_type0, AXIS2_FAILURE);
               

               _resource_type0->is_valid_size = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether size is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_resource_type0_is_size_nil(
                   adb_resource_type0_t* _resource_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _resource_type0, AXIS2_TRUE);
               
               return !_resource_type0->is_valid_size;
           }

           /**
            * Set size to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_resource_type0_set_size_nil(
                   adb_resource_type0_t* _resource_type0,
                   const axutil_env_t *env)
           {
               return adb_resource_type0_reset_size(_resource_type0, env);
           }

           

            /**
             * Getter for localURI by  Property Number 4
             */
            axutil_uri_t* AXIS2_CALL
            adb_resource_type0_get_property4(
                adb_resource_type0_t* _resource_type0,
                const axutil_env_t *env)
            {
                return adb_resource_type0_get_localURI(_resource_type0,
                                             env);
            }

            /**
             * getter for localURI.
             */
            axutil_uri_t* AXIS2_CALL
            adb_resource_type0_get_localURI(
                    adb_resource_type0_t* _resource_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _resource_type0, NULL);
                  

                return _resource_type0->property_localURI;
             }

            /**
             * setter for localURI
             */
            axis2_status_t AXIS2_CALL
            adb_resource_type0_set_localURI(
                    adb_resource_type0_t* _resource_type0,
                    const axutil_env_t *env,
                    axutil_uri_t*  arg_localURI)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _resource_type0, AXIS2_FAILURE);
                
                if(_resource_type0->is_valid_localURI &&
                        arg_localURI == _resource_type0->property_localURI)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_localURI)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "localURI is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_resource_type0_reset_localURI(_resource_type0, env);

                
                if(NULL == arg_localURI)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _resource_type0->property_localURI = arg_localURI;
                        _resource_type0->is_valid_localURI = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for localURI
            */
           axis2_status_t AXIS2_CALL
           adb_resource_type0_reset_localURI(
                   adb_resource_type0_t* _resource_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _resource_type0, AXIS2_FAILURE);
               

               
            
                
                if(_resource_type0->property_localURI != NULL)
                {
                   
                   
                      axutil_uri_free(_resource_type0->property_localURI, env);
                     _resource_type0->property_localURI = NULL;
                }
            
                
                
                _resource_type0->is_valid_localURI = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether localURI is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_resource_type0_is_localURI_nil(
                   adb_resource_type0_t* _resource_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _resource_type0, AXIS2_TRUE);
               
               return !_resource_type0->is_valid_localURI;
           }

           /**
            * Set localURI to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_resource_type0_set_localURI_nil(
                   adb_resource_type0_t* _resource_type0,
                   const axutil_env_t *env)
           {
               return adb_resource_type0_reset_localURI(_resource_type0, env);
           }

           

            /**
             * Getter for lastModifiedDate by  Property Number 5
             */
            axutil_date_time_t* AXIS2_CALL
            adb_resource_type0_get_property5(
                adb_resource_type0_t* _resource_type0,
                const axutil_env_t *env)
            {
                return adb_resource_type0_get_lastModifiedDate(_resource_type0,
                                             env);
            }

            /**
             * getter for lastModifiedDate.
             */
            axutil_date_time_t* AXIS2_CALL
            adb_resource_type0_get_lastModifiedDate(
                    adb_resource_type0_t* _resource_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _resource_type0, NULL);
                  

                return _resource_type0->property_lastModifiedDate;
             }

            /**
             * setter for lastModifiedDate
             */
            axis2_status_t AXIS2_CALL
            adb_resource_type0_set_lastModifiedDate(
                    adb_resource_type0_t* _resource_type0,
                    const axutil_env_t *env,
                    axutil_date_time_t*  arg_lastModifiedDate)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _resource_type0, AXIS2_FAILURE);
                
                if(_resource_type0->is_valid_lastModifiedDate &&
                        arg_lastModifiedDate == _resource_type0->property_lastModifiedDate)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_lastModifiedDate)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "lastModifiedDate is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_resource_type0_reset_lastModifiedDate(_resource_type0, env);

                
                if(NULL == arg_lastModifiedDate)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _resource_type0->property_lastModifiedDate = arg_lastModifiedDate;
                        _resource_type0->is_valid_lastModifiedDate = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for lastModifiedDate
            */
           axis2_status_t AXIS2_CALL
           adb_resource_type0_reset_lastModifiedDate(
                   adb_resource_type0_t* _resource_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _resource_type0, AXIS2_FAILURE);
               

               
            
                
                if(_resource_type0->property_lastModifiedDate != NULL)
                {
                   
                   
                      axutil_date_time_free(_resource_type0->property_lastModifiedDate, env);
                     _resource_type0->property_lastModifiedDate = NULL;
                }
            
                
                
                _resource_type0->is_valid_lastModifiedDate = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether lastModifiedDate is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_resource_type0_is_lastModifiedDate_nil(
                   adb_resource_type0_t* _resource_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _resource_type0, AXIS2_TRUE);
               
               return !_resource_type0->is_valid_lastModifiedDate;
           }

           /**
            * Set lastModifiedDate to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_resource_type0_set_lastModifiedDate_nil(
                   adb_resource_type0_t* _resource_type0,
                   const axutil_env_t *env)
           {
               return adb_resource_type0_reset_lastModifiedDate(_resource_type0, env);
           }

           

