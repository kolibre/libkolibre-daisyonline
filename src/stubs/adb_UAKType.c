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
         * adb_UAKType.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_UAKType.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = UAKType
                 * Namespace URI = http://www.daisy.org/DRM/2005/KeyExchange
                 * Namespace Prefix = ns7
                 */
           


        struct adb_UAKType
        {
            axis2_char_t *property_TypeName;

            axutil_base64_binary_t* property_base64Binary;

                
                axis2_bool_t is_valid_base64Binary;
            axis2_char_t* property_issuerID;

                
                axis2_bool_t is_valid_issuerID;
            axis2_char_t* property_collectionID;

                
                axis2_bool_t is_valid_collectionID;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_UAKType_set_base64Binary_nil(
                        adb_UAKType_t* _UAKType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_UAKType_set_issuerID_nil(
                        adb_UAKType_t* _UAKType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_UAKType_set_collectionID_nil(
                        adb_UAKType_t* _UAKType,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_UAKType_t* AXIS2_CALL
        adb_UAKType_create(
            const axutil_env_t *env)
        {
            adb_UAKType_t *_UAKType = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _UAKType = (adb_UAKType_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_UAKType_t));

            if(NULL == _UAKType)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_UAKType, 0, sizeof(adb_UAKType_t));

            _UAKType->property_TypeName = axutil_strdup(env, "adb_UAKType");
            _UAKType->property_base64Binary  = NULL;
                  _UAKType->is_valid_base64Binary  = AXIS2_FALSE;
            _UAKType->property_issuerID  = NULL;
                  _UAKType->is_valid_issuerID  = AXIS2_FALSE;
            _UAKType->property_collectionID  = NULL;
                  _UAKType->is_valid_collectionID  = AXIS2_FALSE;
            

            return _UAKType;
        }

        adb_UAKType_t* AXIS2_CALL
        adb_UAKType_create_with_values(
            const axutil_env_t *env,
                axutil_base64_binary_t* _base64Binary,
                axis2_char_t* _issuerID,
                axis2_char_t* _collectionID)
        {
            adb_UAKType_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_UAKType_create(env);

            
              status = adb_UAKType_set_base64Binary(
                                     adb_obj,
                                     env,
                                     _base64Binary);
              if(status == AXIS2_FAILURE) {
                  adb_UAKType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_UAKType_set_issuerID(
                                     adb_obj,
                                     env,
                                     _issuerID);
              if(status == AXIS2_FAILURE) {
                  adb_UAKType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_UAKType_set_collectionID(
                                     adb_obj,
                                     env,
                                     _collectionID);
              if(status == AXIS2_FAILURE) {
                  adb_UAKType_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axutil_base64_binary_t* AXIS2_CALL
                adb_UAKType_free_popping_value(
                        adb_UAKType_t* _UAKType,
                        const axutil_env_t *env)
                {
                    axutil_base64_binary_t* value;

                    
                    
                    value = _UAKType->property_base64Binary;

                    _UAKType->property_base64Binary = (axutil_base64_binary_t*)NULL;
                    adb_UAKType_free(_UAKType, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_UAKType_free(
                adb_UAKType_t* _UAKType,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _UAKType,
                env,
                "adb_UAKType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_UAKType_free_obj(
                adb_UAKType_t* _UAKType,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _UAKType, AXIS2_FAILURE);

            if (_UAKType->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _UAKType->property_TypeName);
            }

            adb_UAKType_reset_base64Binary(_UAKType, env);
            adb_UAKType_reset_issuerID(_UAKType, env);
            adb_UAKType_reset_collectionID(_UAKType, env);
            

            if(_UAKType)
            {
                AXIS2_FREE(env->allocator, _UAKType);
                _UAKType = NULL;
            }

            return AXIS2_SUCCESS;
        }


        
            axis2_status_t AXIS2_CALL
            adb_UAKType_deserialize_from_string(
                            adb_UAKType_t* _UAKType,
                                            const axutil_env_t *env,
                                            const axis2_char_t *node_value,
                                            axiom_node_t *parent)
            {
              axis2_status_t status = AXIS2_SUCCESS;
            
              void *element = NULL;
            
                       element = (void*)axutil_base64_binary_create(env);
                       axutil_base64_binary_set_encoded_binary((axutil_base64_binary_t*)element, env,
                                                                  node_value);
                       adb_UAKType_set_base64Binary(_UAKType,
                                                      env, (axutil_base64_binary_t*)element);
                    
              return status;
            }
        

        axis2_status_t AXIS2_CALL
        adb_UAKType_deserialize(
                adb_UAKType_t* _UAKType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _UAKType,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_UAKType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_UAKType_deserialize_obj(
                adb_UAKType_t* _UAKType,
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
          
            
            status = AXIS2_FAILURE;
            if(parent)
            {
                axis2_char_t *attrib_text = NULL;
                attrib_text = axiom_element_get_attribute_value_by_name(axiom_node_get_data_element(parent, env), env, "nil");
                if (attrib_text != NULL && !axutil_strcasecmp(attrib_text, "true"))
                {
                  
                   /* but the wsdl says that, this is non nillable */
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element UAKType");
                    status = AXIS2_FAILURE;
                   
                }
                else
                {
                    axiom_node_t *text_node = NULL;
                    axiom_text_t *text_element = NULL;
                    text_node = axiom_node_get_first_child(parent, env);
                    if (text_node &&
                            axiom_node_get_node_type(text_node, env) == AXIOM_TEXT)
                        text_element = (axiom_text_t*)axiom_node_get_data_element(text_node, env);
                    text_value = "";
                    if(text_element && axiom_text_get_value(text_element, env))
                    {
                        text_value = (axis2_char_t*)axiom_text_get_value(text_element, env);
                    }
                    status = adb_UAKType_deserialize_from_string(_UAKType, env, text_value, parent);
                }
            }
            
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "issuerID"))
                             
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
                    /* this is hoping that attribute is stored in "issuerID", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "issuerID");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_UAKType_set_issuerID(_UAKType,
                                                          env, attrib_text);
                        
                    }
                  
                    else if(!dont_care_minoccurs)
                    {
                        /*
                        if(element_qname)
                        {
                            axutil_qname_free(element_qname, env);
                        }
                        */
                        /* this is not a nillable element*/
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "required attribute issuerID missing");
                        return AXIS2_FAILURE;
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "collectionID"))
                             
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
                    /* this is hoping that attribute is stored in "collectionID", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "collectionID");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_UAKType_set_collectionID(_UAKType,
                                                          env, attrib_text);
                        
                    }
                  
                    else if(!dont_care_minoccurs)
                    {
                        /*
                        if(element_qname)
                        {
                            axutil_qname_free(element_qname, env);
                        }
                        */
                        /* this is not a nillable element*/
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "required attribute collectionID missing");
                        return AXIS2_FAILURE;
                    }
                  
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_UAKType_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_UAKType_declare_parent_namespaces(
                    adb_UAKType_t* _UAKType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
            axis2_char_t* AXIS2_CALL
            adb_UAKType_serialize_to_string(
                    adb_UAKType_t* _UAKType,
                    const axutil_env_t *env, axutil_hash_t *namespaces)
            {
                axis2_char_t *text_value = NULL;
                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                
                         text_value =  axutil_base64_binary_get_encoded_binary(_UAKType->property_base64Binary, env);
                      
                return text_value;
            }
        
        
        axiom_node_t* AXIS2_CALL
        adb_UAKType_serialize(
                adb_UAKType_t* _UAKType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_UAKType == NULL)
            {
                return adb_UAKType_serialize_obj(
                    _UAKType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _UAKType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_UAKType");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_UAKType_serialize_obj(
                adb_UAKType_t* _UAKType,
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
         
            axiom_data_source_t *data_source = NULL;
            axutil_stream_t *stream = NULL;
            axis2_char_t *text_value;
             
               axiom_namespace_t *ns1 = NULL;
               axis2_char_t *p_prefix = NULL;
              
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
                if(_UAKType->is_valid_issuerID)
                {
                
                        p_prefix = NULL;
                      
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(_UAKType->property_issuerID) + 
                                                                axutil_strlen("issuerID")));
                           sprintf(text_value, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "issuerID", _UAKType->property_issuerID);
                           axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
                   else
                   {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute issuerID");
                      return NULL;
                   }
                   
                if(_UAKType->is_valid_collectionID)
                {
                
                        p_prefix = NULL;
                      
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(_UAKType->property_collectionID) + 
                                                                axutil_strlen("collectionID")));
                           sprintf(text_value, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "collectionID", _UAKType->property_collectionID);
                           axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
                   else
                   {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute collectionID");
                      return NULL;
                   }
                   
              string_to_stream = ">"; 
              axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
              tag_closed = 1;
            
            }
        
               if(!parent_tag_closed && !tag_closed)
               {
                  text_value = ">"; 
                  axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
               }
               
               text_value = adb_UAKType_serialize_to_string(_UAKType, env, namespaces);
               if(text_value)
               {
                    axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                    AXIS2_FREE(env->allocator, text_value);
               }
            
                    
                    if(parent_tag_closed)
                    {
                       if(_UAKType->is_valid_issuerID)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = _UAKType->property_issuerID;
                           text_attri = axiom_attribute_create (env, "issuerID", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                      
                      else
                      {
                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute issuerID");
                         return NULL;
                      }
                       
                  }
                
                    
                    if(parent_tag_closed)
                    {
                       if(_UAKType->is_valid_collectionID)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = _UAKType->property_collectionID;
                           text_attri = axiom_attribute_create (env, "collectionID", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                      
                      else
                      {
                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute collectionID");
                         return NULL;
                      }
                       
                  }
                

            return parent;
        }


        

            /**
             * Getter for base64Binary by  Property Number 1
             */
            axutil_base64_binary_t* AXIS2_CALL
            adb_UAKType_get_property1(
                adb_UAKType_t* _UAKType,
                const axutil_env_t *env)
            {
                return adb_UAKType_get_base64Binary(_UAKType,
                                             env);
            }

            /**
             * getter for base64Binary.
             */
            axutil_base64_binary_t* AXIS2_CALL
            adb_UAKType_get_base64Binary(
                    adb_UAKType_t* _UAKType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _UAKType, NULL);
                  

                return _UAKType->property_base64Binary;
             }

            /**
             * setter for base64Binary
             */
            axis2_status_t AXIS2_CALL
            adb_UAKType_set_base64Binary(
                    adb_UAKType_t* _UAKType,
                    const axutil_env_t *env,
                    axutil_base64_binary_t*  arg_base64Binary)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _UAKType, AXIS2_FAILURE);
                
                if(_UAKType->is_valid_base64Binary &&
                        arg_base64Binary == _UAKType->property_base64Binary)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_base64Binary)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "base64Binary is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_UAKType_reset_base64Binary(_UAKType, env);

                
                if(NULL == arg_base64Binary)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _UAKType->property_base64Binary = arg_base64Binary;
                        _UAKType->is_valid_base64Binary = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for base64Binary
            */
           axis2_status_t AXIS2_CALL
           adb_UAKType_reset_base64Binary(
                   adb_UAKType_t* _UAKType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _UAKType, AXIS2_FAILURE);
               

               
            
                
                if(_UAKType->property_base64Binary != NULL)
                {
                   
                   
                      axutil_base64_binary_free (_UAKType->property_base64Binary, env);
                     _UAKType->property_base64Binary = NULL;
                }
            
                
                
                _UAKType->is_valid_base64Binary = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether base64Binary is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_UAKType_is_base64Binary_nil(
                   adb_UAKType_t* _UAKType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _UAKType, AXIS2_TRUE);
               
               return !_UAKType->is_valid_base64Binary;
           }

           /**
            * Set base64Binary to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_UAKType_set_base64Binary_nil(
                   adb_UAKType_t* _UAKType,
                   const axutil_env_t *env)
           {
               return adb_UAKType_reset_base64Binary(_UAKType, env);
           }

           

            /**
             * Getter for issuerID by  Property Number 2
             */
            axis2_char_t* AXIS2_CALL
            adb_UAKType_get_property2(
                adb_UAKType_t* _UAKType,
                const axutil_env_t *env)
            {
                return adb_UAKType_get_issuerID(_UAKType,
                                             env);
            }

            /**
             * getter for issuerID.
             */
            axis2_char_t* AXIS2_CALL
            adb_UAKType_get_issuerID(
                    adb_UAKType_t* _UAKType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _UAKType, NULL);
                  

                return _UAKType->property_issuerID;
             }

            /**
             * setter for issuerID
             */
            axis2_status_t AXIS2_CALL
            adb_UAKType_set_issuerID(
                    adb_UAKType_t* _UAKType,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_issuerID)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _UAKType, AXIS2_FAILURE);
                
                if(_UAKType->is_valid_issuerID &&
                        arg_issuerID == _UAKType->property_issuerID)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_issuerID)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "issuerID is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_UAKType_reset_issuerID(_UAKType, env);

                
                if(NULL == arg_issuerID)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _UAKType->property_issuerID = (axis2_char_t *)axutil_strdup(env, arg_issuerID);
                        if(NULL == _UAKType->property_issuerID)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for issuerID");
                            return AXIS2_FAILURE;
                        }
                        _UAKType->is_valid_issuerID = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for issuerID
            */
           axis2_status_t AXIS2_CALL
           adb_UAKType_reset_issuerID(
                   adb_UAKType_t* _UAKType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _UAKType, AXIS2_FAILURE);
               

               
            
                
                if(_UAKType->property_issuerID != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _UAKType->property_issuerID);
                     _UAKType->property_issuerID = NULL;
                }
            
                
                
                _UAKType->is_valid_issuerID = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether issuerID is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_UAKType_is_issuerID_nil(
                   adb_UAKType_t* _UAKType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _UAKType, AXIS2_TRUE);
               
               return !_UAKType->is_valid_issuerID;
           }

           /**
            * Set issuerID to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_UAKType_set_issuerID_nil(
                   adb_UAKType_t* _UAKType,
                   const axutil_env_t *env)
           {
               return adb_UAKType_reset_issuerID(_UAKType, env);
           }

           

            /**
             * Getter for collectionID by  Property Number 3
             */
            axis2_char_t* AXIS2_CALL
            adb_UAKType_get_property3(
                adb_UAKType_t* _UAKType,
                const axutil_env_t *env)
            {
                return adb_UAKType_get_collectionID(_UAKType,
                                             env);
            }

            /**
             * getter for collectionID.
             */
            axis2_char_t* AXIS2_CALL
            adb_UAKType_get_collectionID(
                    adb_UAKType_t* _UAKType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _UAKType, NULL);
                  

                return _UAKType->property_collectionID;
             }

            /**
             * setter for collectionID
             */
            axis2_status_t AXIS2_CALL
            adb_UAKType_set_collectionID(
                    adb_UAKType_t* _UAKType,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_collectionID)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _UAKType, AXIS2_FAILURE);
                
                if(_UAKType->is_valid_collectionID &&
                        arg_collectionID == _UAKType->property_collectionID)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_collectionID)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "collectionID is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_UAKType_reset_collectionID(_UAKType, env);

                
                if(NULL == arg_collectionID)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _UAKType->property_collectionID = (axis2_char_t *)axutil_strdup(env, arg_collectionID);
                        if(NULL == _UAKType->property_collectionID)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for collectionID");
                            return AXIS2_FAILURE;
                        }
                        _UAKType->is_valid_collectionID = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for collectionID
            */
           axis2_status_t AXIS2_CALL
           adb_UAKType_reset_collectionID(
                   adb_UAKType_t* _UAKType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _UAKType, AXIS2_FAILURE);
               

               
            
                
                if(_UAKType->property_collectionID != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _UAKType->property_collectionID);
                     _UAKType->property_collectionID = NULL;
                }
            
                
                
                _UAKType->is_valid_collectionID = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether collectionID is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_UAKType_is_collectionID_nil(
                   adb_UAKType_t* _UAKType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _UAKType, AXIS2_TRUE);
               
               return !_UAKType->is_valid_collectionID;
           }

           /**
            * Set collectionID to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_UAKType_set_collectionID_nil(
                   adb_UAKType_t* _UAKType,
                   const axutil_env_t *env)
           {
               return adb_UAKType_reset_collectionID(_UAKType, env);
           }

           

