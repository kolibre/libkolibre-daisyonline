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
         * adb_audio_type1.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_audio_type1.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = audio_type1
                 * Namespace URI = http://www.daisy.org/z3986/2005/bookmark/
                 * Namespace Prefix = ns4
                 */
           


        struct adb_audio_type1
        {
            axis2_char_t *property_TypeName;

            axutil_uri_t* property_src;

                
                axis2_bool_t is_valid_src;
            axis2_char_t* property_clipBegin;

                
                axis2_bool_t is_valid_clipBegin;
            axis2_char_t* property_clipEnd;

                
                axis2_bool_t is_valid_clipEnd;
            
        };


       /************************* Private Function prototypes ********************************/
        


       /************************* Function Implmentations ********************************/
        adb_audio_type1_t* AXIS2_CALL
        adb_audio_type1_create(
            const axutil_env_t *env)
        {
            adb_audio_type1_t *_audio_type1 = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _audio_type1 = (adb_audio_type1_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_audio_type1_t));

            if(NULL == _audio_type1)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_audio_type1, 0, sizeof(adb_audio_type1_t));

            _audio_type1->property_TypeName = axutil_strdup(env, "adb_audio_type1");
            _audio_type1->property_src  = NULL;
                  _audio_type1->is_valid_src  = AXIS2_FALSE;
            _audio_type1->property_clipBegin  = NULL;
                  _audio_type1->is_valid_clipBegin  = AXIS2_FALSE;
            _audio_type1->property_clipEnd  = NULL;
                  _audio_type1->is_valid_clipEnd  = AXIS2_FALSE;
            

            return _audio_type1;
        }

        adb_audio_type1_t* AXIS2_CALL
        adb_audio_type1_create_with_values(
            const axutil_env_t *env,
                axutil_uri_t* _src,
                axis2_char_t* _clipBegin,
                axis2_char_t* _clipEnd)
        {
            adb_audio_type1_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_audio_type1_create(env);

            
              status = adb_audio_type1_set_src(
                                     adb_obj,
                                     env,
                                     _src);
              if(status == AXIS2_FAILURE) {
                  adb_audio_type1_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_audio_type1_set_clipBegin(
                                     adb_obj,
                                     env,
                                     _clipBegin);
              if(status == AXIS2_FAILURE) {
                  adb_audio_type1_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_audio_type1_set_clipEnd(
                                     adb_obj,
                                     env,
                                     _clipEnd);
              if(status == AXIS2_FAILURE) {
                  adb_audio_type1_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axutil_uri_t* AXIS2_CALL
                adb_audio_type1_free_popping_value(
                        adb_audio_type1_t* _audio_type1,
                        const axutil_env_t *env)
                {
                    axutil_uri_t* value;

                    
                    
                    value = _audio_type1->property_src;

                    _audio_type1->property_src = (axutil_uri_t*)NULL;
                    adb_audio_type1_free(_audio_type1, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_audio_type1_free(
                adb_audio_type1_t* _audio_type1,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _audio_type1,
                env,
                "adb_audio_type1");
            
        }

        axis2_status_t AXIS2_CALL
        adb_audio_type1_free_obj(
                adb_audio_type1_t* _audio_type1,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _audio_type1, AXIS2_FAILURE);

            if (_audio_type1->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _audio_type1->property_TypeName);
            }

            adb_audio_type1_reset_src(_audio_type1, env);
            adb_audio_type1_reset_clipBegin(_audio_type1, env);
            adb_audio_type1_reset_clipEnd(_audio_type1, env);
            

            if(_audio_type1)
            {
                AXIS2_FREE(env->allocator, _audio_type1);
                _audio_type1 = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_audio_type1_deserialize(
                adb_audio_type1_t* _audio_type1,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _audio_type1,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_audio_type1");
            
        }

        axis2_status_t AXIS2_CALL
        adb_audio_type1_deserialize_obj(
                adb_audio_type1_t* _audio_type1,
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
            AXIS2_PARAM_CHECK(env->error, _audio_type1, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for audio_type1 : "
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "src"))
                             
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
                    /* this is hoping that attribute is stored in "src", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "src");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_audio_type1_set_src(_audio_type1,
                                                          env, axutil_uri_parse_string(env, attrib_text));
                        
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "clipBegin"))
                             
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
                    /* this is hoping that attribute is stored in "clipBegin", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "clipBegin");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_audio_type1_set_clipBegin(_audio_type1,
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "clipEnd"))
                             
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
                    /* this is hoping that attribute is stored in "clipEnd", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "clipEnd");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_audio_type1_set_clipEnd(_audio_type1,
                                                          env, attrib_text);
                        
                    }
                  
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_audio_type1_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_audio_type1_declare_parent_namespaces(
                    adb_audio_type1_t* _audio_type1,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_audio_type1_serialize(
                adb_audio_type1_t* _audio_type1,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_audio_type1 == NULL)
            {
                return adb_audio_type1_serialize_obj(
                    _audio_type1, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _audio_type1, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_audio_type1");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_audio_type1_serialize_obj(
                adb_audio_type1_t* _audio_type1,
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
                    
                    axis2_char_t *text_value_3;
                    axis2_char_t *text_value_3_temp;
                    
                axis2_char_t *text_value = NULL;
             
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _audio_type1, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
                if(_audio_type1->is_valid_src)
                {
                
                        p_prefix = NULL;
                      
                           text_value = axutil_uri_to_string(_audio_type1->property_src, env, AXIS2_URI_UNP_OMITUSERINFO);
                           string_to_stream = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) *
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(text_value) + 
                                                             axutil_strlen("src")));
                           sprintf(string_to_stream, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "src",  text_value);
                           axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
                           AXIS2_FREE(env-> allocator, string_to_stream);
                        
                   }
                   
                if(_audio_type1->is_valid_clipBegin)
                {
                
                        p_prefix = NULL;
                      
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(_audio_type1->property_clipBegin) + 
                                                                axutil_strlen("clipBegin")));
                           sprintf(text_value, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "clipBegin", _audio_type1->property_clipBegin);
                           axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
                if(_audio_type1->is_valid_clipEnd)
                {
                
                        p_prefix = NULL;
                      
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(_audio_type1->property_clipEnd) + 
                                                                axutil_strlen("clipEnd")));
                           sprintf(text_value, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "clipEnd", _audio_type1->property_clipEnd);
                           axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
              string_to_stream = ">"; 
              axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
              tag_closed = 1;
            
            }
        
                    
                    if(parent_tag_closed)
                    {
                       if(_audio_type1->is_valid_src)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = axutil_uri_to_string(_audio_type1->property_src, env, AXIS2_URI_UNP_OMITUSERINFO);
                           text_attri = axiom_attribute_create (env, "src", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                       
                  }
                
                    
                    if(parent_tag_closed)
                    {
                       if(_audio_type1->is_valid_clipBegin)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = _audio_type1->property_clipBegin;
                           text_attri = axiom_attribute_create (env, "clipBegin", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                       
                  }
                
                    
                    if(parent_tag_closed)
                    {
                       if(_audio_type1->is_valid_clipEnd)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = _audio_type1->property_clipEnd;
                           text_attri = axiom_attribute_create (env, "clipEnd", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                       
                  }
                

            return parent;
        }


        

            /**
             * Getter for src by  Property Number 1
             */
            axutil_uri_t* AXIS2_CALL
            adb_audio_type1_get_property1(
                adb_audio_type1_t* _audio_type1,
                const axutil_env_t *env)
            {
                return adb_audio_type1_get_src(_audio_type1,
                                             env);
            }

            /**
             * getter for src.
             */
            axutil_uri_t* AXIS2_CALL
            adb_audio_type1_get_src(
                    adb_audio_type1_t* _audio_type1,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _audio_type1, NULL);
                  

                return _audio_type1->property_src;
             }

            /**
             * setter for src
             */
            axis2_status_t AXIS2_CALL
            adb_audio_type1_set_src(
                    adb_audio_type1_t* _audio_type1,
                    const axutil_env_t *env,
                    axutil_uri_t*  arg_src)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _audio_type1, AXIS2_FAILURE);
                
                if(_audio_type1->is_valid_src &&
                        arg_src == _audio_type1->property_src)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_src)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "src is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_audio_type1_reset_src(_audio_type1, env);

                
                if(NULL == arg_src)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _audio_type1->property_src = arg_src;
                        _audio_type1->is_valid_src = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for src
            */
           axis2_status_t AXIS2_CALL
           adb_audio_type1_reset_src(
                   adb_audio_type1_t* _audio_type1,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _audio_type1, AXIS2_FAILURE);
               

               
            
                
                if(_audio_type1->property_src != NULL)
                {
                   
                   
                      axutil_uri_free(_audio_type1->property_src, env);
                     _audio_type1->property_src = NULL;
                }
            
                
                
                _audio_type1->is_valid_src = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether src is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_audio_type1_is_src_nil(
                   adb_audio_type1_t* _audio_type1,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _audio_type1, AXIS2_TRUE);
               
               return !_audio_type1->is_valid_src;
           }

           /**
            * Set src to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_audio_type1_set_src_nil(
                   adb_audio_type1_t* _audio_type1,
                   const axutil_env_t *env)
           {
               return adb_audio_type1_reset_src(_audio_type1, env);
           }

           

            /**
             * Getter for clipBegin by  Property Number 2
             */
            axis2_char_t* AXIS2_CALL
            adb_audio_type1_get_property2(
                adb_audio_type1_t* _audio_type1,
                const axutil_env_t *env)
            {
                return adb_audio_type1_get_clipBegin(_audio_type1,
                                             env);
            }

            /**
             * getter for clipBegin.
             */
            axis2_char_t* AXIS2_CALL
            adb_audio_type1_get_clipBegin(
                    adb_audio_type1_t* _audio_type1,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _audio_type1, NULL);
                  

                return _audio_type1->property_clipBegin;
             }

            /**
             * setter for clipBegin
             */
            axis2_status_t AXIS2_CALL
            adb_audio_type1_set_clipBegin(
                    adb_audio_type1_t* _audio_type1,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_clipBegin)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _audio_type1, AXIS2_FAILURE);
                
                if(_audio_type1->is_valid_clipBegin &&
                        arg_clipBegin == _audio_type1->property_clipBegin)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_clipBegin)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "clipBegin is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_audio_type1_reset_clipBegin(_audio_type1, env);

                
                if(NULL == arg_clipBegin)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _audio_type1->property_clipBegin = (axis2_char_t *)axutil_strdup(env, arg_clipBegin);
                        if(NULL == _audio_type1->property_clipBegin)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for clipBegin");
                            return AXIS2_FAILURE;
                        }
                        _audio_type1->is_valid_clipBegin = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for clipBegin
            */
           axis2_status_t AXIS2_CALL
           adb_audio_type1_reset_clipBegin(
                   adb_audio_type1_t* _audio_type1,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _audio_type1, AXIS2_FAILURE);
               

               
            
                
                if(_audio_type1->property_clipBegin != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _audio_type1->property_clipBegin);
                     _audio_type1->property_clipBegin = NULL;
                }
            
                
                
                _audio_type1->is_valid_clipBegin = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether clipBegin is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_audio_type1_is_clipBegin_nil(
                   adb_audio_type1_t* _audio_type1,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _audio_type1, AXIS2_TRUE);
               
               return !_audio_type1->is_valid_clipBegin;
           }

           /**
            * Set clipBegin to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_audio_type1_set_clipBegin_nil(
                   adb_audio_type1_t* _audio_type1,
                   const axutil_env_t *env)
           {
               return adb_audio_type1_reset_clipBegin(_audio_type1, env);
           }

           

            /**
             * Getter for clipEnd by  Property Number 3
             */
            axis2_char_t* AXIS2_CALL
            adb_audio_type1_get_property3(
                adb_audio_type1_t* _audio_type1,
                const axutil_env_t *env)
            {
                return adb_audio_type1_get_clipEnd(_audio_type1,
                                             env);
            }

            /**
             * getter for clipEnd.
             */
            axis2_char_t* AXIS2_CALL
            adb_audio_type1_get_clipEnd(
                    adb_audio_type1_t* _audio_type1,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _audio_type1, NULL);
                  

                return _audio_type1->property_clipEnd;
             }

            /**
             * setter for clipEnd
             */
            axis2_status_t AXIS2_CALL
            adb_audio_type1_set_clipEnd(
                    adb_audio_type1_t* _audio_type1,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_clipEnd)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _audio_type1, AXIS2_FAILURE);
                
                if(_audio_type1->is_valid_clipEnd &&
                        arg_clipEnd == _audio_type1->property_clipEnd)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_clipEnd)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "clipEnd is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_audio_type1_reset_clipEnd(_audio_type1, env);

                
                if(NULL == arg_clipEnd)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _audio_type1->property_clipEnd = (axis2_char_t *)axutil_strdup(env, arg_clipEnd);
                        if(NULL == _audio_type1->property_clipEnd)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for clipEnd");
                            return AXIS2_FAILURE;
                        }
                        _audio_type1->is_valid_clipEnd = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for clipEnd
            */
           axis2_status_t AXIS2_CALL
           adb_audio_type1_reset_clipEnd(
                   adb_audio_type1_t* _audio_type1,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _audio_type1, AXIS2_FAILURE);
               

               
            
                
                if(_audio_type1->property_clipEnd != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _audio_type1->property_clipEnd);
                     _audio_type1->property_clipEnd = NULL;
                }
            
                
                
                _audio_type1->is_valid_clipEnd = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether clipEnd is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_audio_type1_is_clipEnd_nil(
                   adb_audio_type1_t* _audio_type1,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _audio_type1, AXIS2_TRUE);
               
               return !_audio_type1->is_valid_clipEnd;
           }

           /**
            * Set clipEnd to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_audio_type1_set_clipEnd_nil(
                   adb_audio_type1_t* _audio_type1,
                   const axutil_env_t *env)
           {
               return adb_audio_type1_reset_clipEnd(_audio_type1, env);
           }

           

