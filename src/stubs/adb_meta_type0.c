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
         * adb_meta_type0.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_meta_type0.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = meta_type0
                 * Namespace URI = http://www.daisy.org/ns/daisy-online/
                 * Namespace Prefix = ns3
                 */
           


        struct adb_meta_type0
        {
            axis2_char_t *property_TypeName;

            axis2_char_t* property_name;

                
                axis2_bool_t is_valid_name;
            axis2_char_t* property_content;

                
                axis2_bool_t is_valid_content;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_meta_type0_set_name_nil(
                        adb_meta_type0_t* _meta_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_meta_type0_set_content_nil(
                        adb_meta_type0_t* _meta_type0,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_meta_type0_t* AXIS2_CALL
        adb_meta_type0_create(
            const axutil_env_t *env)
        {
            adb_meta_type0_t *_meta_type0 = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _meta_type0 = (adb_meta_type0_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_meta_type0_t));

            if(NULL == _meta_type0)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_meta_type0, 0, sizeof(adb_meta_type0_t));

            _meta_type0->property_TypeName = axutil_strdup(env, "adb_meta_type0");
            _meta_type0->property_name  = NULL;
                  _meta_type0->is_valid_name  = AXIS2_FALSE;
            _meta_type0->property_content  = NULL;
                  _meta_type0->is_valid_content  = AXIS2_FALSE;
            

            return _meta_type0;
        }

        adb_meta_type0_t* AXIS2_CALL
        adb_meta_type0_create_with_values(
            const axutil_env_t *env,
                axis2_char_t* _name,
                axis2_char_t* _content)
        {
            adb_meta_type0_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_meta_type0_create(env);

            
              status = adb_meta_type0_set_name(
                                     adb_obj,
                                     env,
                                     _name);
              if(status == AXIS2_FAILURE) {
                  adb_meta_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_meta_type0_set_content(
                                     adb_obj,
                                     env,
                                     _content);
              if(status == AXIS2_FAILURE) {
                  adb_meta_type0_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axis2_char_t* AXIS2_CALL
                adb_meta_type0_free_popping_value(
                        adb_meta_type0_t* _meta_type0,
                        const axutil_env_t *env)
                {
                    axis2_char_t* value;

                    
                    
                    value = _meta_type0->property_name;

                    _meta_type0->property_name = (axis2_char_t*)NULL;
                    adb_meta_type0_free(_meta_type0, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_meta_type0_free(
                adb_meta_type0_t* _meta_type0,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _meta_type0,
                env,
                "adb_meta_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_meta_type0_free_obj(
                adb_meta_type0_t* _meta_type0,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _meta_type0, AXIS2_FAILURE);

            if (_meta_type0->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _meta_type0->property_TypeName);
            }

            adb_meta_type0_reset_name(_meta_type0, env);
            adb_meta_type0_reset_content(_meta_type0, env);
            

            if(_meta_type0)
            {
                AXIS2_FREE(env->allocator, _meta_type0);
                _meta_type0 = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_meta_type0_deserialize(
                adb_meta_type0_t* _meta_type0,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _meta_type0,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_meta_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_meta_type0_deserialize_obj(
                adb_meta_type0_t* _meta_type0,
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
          
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _meta_type0, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for meta_type0 : "
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "name"))
                             
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
                    /* this is hoping that attribute is stored in "name", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "name");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_meta_type0_set_name(_meta_type0,
                                                          env, attrib_text);
                        
                    }
                  
                    else if(!dont_care_minoccurs)
                    {
                        if(element_qname)
                        {
                            axutil_qname_free(element_qname, env);
                        }
                        /* this is not a nillable element*/
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "required attribute name missing");
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "content"))
                             
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
                    /* this is hoping that attribute is stored in "content", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "content");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_meta_type0_set_content(_meta_type0,
                                                          env, attrib_text);
                        
                    }
                  
                    else if(!dont_care_minoccurs)
                    {
                        if(element_qname)
                        {
                            axutil_qname_free(element_qname, env);
                        }
                        /* this is not a nillable element*/
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "required attribute content missing");
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
          adb_meta_type0_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_meta_type0_declare_parent_namespaces(
                    adb_meta_type0_t* _meta_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_meta_type0_serialize(
                adb_meta_type0_t* _meta_type0,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_meta_type0 == NULL)
            {
                return adb_meta_type0_serialize_obj(
                    _meta_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _meta_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_meta_type0");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_meta_type0_serialize_obj(
                adb_meta_type0_t* _meta_type0,
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
                    
                axis2_char_t *text_value = NULL;
             
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _meta_type0, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
                if(_meta_type0->is_valid_name)
                {
                
                        p_prefix = NULL;
                      
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(_meta_type0->property_name) + 
                                                                axutil_strlen("name")));
                           sprintf(text_value, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "name", _meta_type0->property_name);
                           axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
                   else
                   {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute name");
                      return NULL;
                   }
                   
                if(_meta_type0->is_valid_content)
                {
                
                        p_prefix = NULL;
                      
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(_meta_type0->property_content) + 
                                                                axutil_strlen("content")));
                           sprintf(text_value, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "content", _meta_type0->property_content);
                           axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
                   else
                   {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute content");
                      return NULL;
                   }
                   
              string_to_stream = ">"; 
              axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
              tag_closed = 1;
            
            }
        
                    
                    if(parent_tag_closed)
                    {
                       if(_meta_type0->is_valid_name)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = _meta_type0->property_name;
                           text_attri = axiom_attribute_create (env, "name", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                      
                      else
                      {
                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute name");
                         return NULL;
                      }
                       
                  }
                
                    
                    if(parent_tag_closed)
                    {
                       if(_meta_type0->is_valid_content)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = _meta_type0->property_content;
                           text_attri = axiom_attribute_create (env, "content", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                      
                      else
                      {
                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute content");
                         return NULL;
                      }
                       
                  }
                

            return parent;
        }


        

            /**
             * Getter for name by  Property Number 1
             */
            axis2_char_t* AXIS2_CALL
            adb_meta_type0_get_property1(
                adb_meta_type0_t* _meta_type0,
                const axutil_env_t *env)
            {
                return adb_meta_type0_get_name(_meta_type0,
                                             env);
            }

            /**
             * getter for name.
             */
            axis2_char_t* AXIS2_CALL
            adb_meta_type0_get_name(
                    adb_meta_type0_t* _meta_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _meta_type0, NULL);
                  

                return _meta_type0->property_name;
             }

            /**
             * setter for name
             */
            axis2_status_t AXIS2_CALL
            adb_meta_type0_set_name(
                    adb_meta_type0_t* _meta_type0,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_name)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _meta_type0, AXIS2_FAILURE);
                
                if(_meta_type0->is_valid_name &&
                        arg_name == _meta_type0->property_name)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_name)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "name is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_meta_type0_reset_name(_meta_type0, env);

                
                if(NULL == arg_name)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _meta_type0->property_name = (axis2_char_t *)axutil_strdup(env, arg_name);
                        if(NULL == _meta_type0->property_name)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for name");
                            return AXIS2_FAILURE;
                        }
                        _meta_type0->is_valid_name = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for name
            */
           axis2_status_t AXIS2_CALL
           adb_meta_type0_reset_name(
                   adb_meta_type0_t* _meta_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _meta_type0, AXIS2_FAILURE);
               

               
            
                
                if(_meta_type0->property_name != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _meta_type0->property_name);
                     _meta_type0->property_name = NULL;
                }
            
                
                
                _meta_type0->is_valid_name = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether name is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_meta_type0_is_name_nil(
                   adb_meta_type0_t* _meta_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _meta_type0, AXIS2_TRUE);
               
               return !_meta_type0->is_valid_name;
           }

           /**
            * Set name to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_meta_type0_set_name_nil(
                   adb_meta_type0_t* _meta_type0,
                   const axutil_env_t *env)
           {
               return adb_meta_type0_reset_name(_meta_type0, env);
           }

           

            /**
             * Getter for content by  Property Number 2
             */
            axis2_char_t* AXIS2_CALL
            adb_meta_type0_get_property2(
                adb_meta_type0_t* _meta_type0,
                const axutil_env_t *env)
            {
                return adb_meta_type0_get_content(_meta_type0,
                                             env);
            }

            /**
             * getter for content.
             */
            axis2_char_t* AXIS2_CALL
            adb_meta_type0_get_content(
                    adb_meta_type0_t* _meta_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _meta_type0, NULL);
                  

                return _meta_type0->property_content;
             }

            /**
             * setter for content
             */
            axis2_status_t AXIS2_CALL
            adb_meta_type0_set_content(
                    adb_meta_type0_t* _meta_type0,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_content)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _meta_type0, AXIS2_FAILURE);
                
                if(_meta_type0->is_valid_content &&
                        arg_content == _meta_type0->property_content)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_content)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "content is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_meta_type0_reset_content(_meta_type0, env);

                
                if(NULL == arg_content)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _meta_type0->property_content = (axis2_char_t *)axutil_strdup(env, arg_content);
                        if(NULL == _meta_type0->property_content)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for content");
                            return AXIS2_FAILURE;
                        }
                        _meta_type0->is_valid_content = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for content
            */
           axis2_status_t AXIS2_CALL
           adb_meta_type0_reset_content(
                   adb_meta_type0_t* _meta_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _meta_type0, AXIS2_FAILURE);
               

               
            
                
                if(_meta_type0->property_content != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _meta_type0->property_content);
                     _meta_type0->property_content = NULL;
                }
            
                
                
                _meta_type0->is_valid_content = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether content is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_meta_type0_is_content_nil(
                   adb_meta_type0_t* _meta_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _meta_type0, AXIS2_TRUE);
               
               return !_meta_type0->is_valid_content;
           }

           /**
            * Set content to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_meta_type0_set_content_nil(
                   adb_meta_type0_t* _meta_type0,
                   const axutil_env_t *env)
           {
               return adb_meta_type0_reset_content(_meta_type0, env);
           }

           

