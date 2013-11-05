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
         * adb_IssuerType.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_IssuerType.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = IssuerType
                 * Namespace URI = http://www.daisy.org/DRM/2005/KeyExchange
                 * Namespace Prefix = ns7
                 */
           


        struct adb_IssuerType
        {
            axis2_char_t *property_TypeName;

            axis2_char_t* property_string;

                
                axis2_bool_t is_valid_string;
            adb_IdString_t* property_uid;

                
                axis2_bool_t is_valid_uid;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_IssuerType_set_string_nil(
                        adb_IssuerType_t* _IssuerType,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_IssuerType_t* AXIS2_CALL
        adb_IssuerType_create(
            const axutil_env_t *env)
        {
            adb_IssuerType_t *_IssuerType = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _IssuerType = (adb_IssuerType_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_IssuerType_t));

            if(NULL == _IssuerType)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_IssuerType, 0, sizeof(adb_IssuerType_t));

            _IssuerType->property_TypeName = axutil_strdup(env, "adb_IssuerType");
            _IssuerType->property_string  = NULL;
                  _IssuerType->is_valid_string  = AXIS2_FALSE;
            _IssuerType->property_uid  = NULL;
                  _IssuerType->is_valid_uid  = AXIS2_FALSE;
            

            return _IssuerType;
        }

        adb_IssuerType_t* AXIS2_CALL
        adb_IssuerType_create_with_values(
            const axutil_env_t *env,
                axis2_char_t* _string,
                adb_IdString_t* _uid)
        {
            adb_IssuerType_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_IssuerType_create(env);

            
              status = adb_IssuerType_set_string(
                                     adb_obj,
                                     env,
                                     _string);
              if(status == AXIS2_FAILURE) {
                  adb_IssuerType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_IssuerType_set_uid(
                                     adb_obj,
                                     env,
                                     _uid);
              if(status == AXIS2_FAILURE) {
                  adb_IssuerType_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axis2_char_t* AXIS2_CALL
                adb_IssuerType_free_popping_value(
                        adb_IssuerType_t* _IssuerType,
                        const axutil_env_t *env)
                {
                    axis2_char_t* value;

                    
                    
                    value = _IssuerType->property_string;

                    _IssuerType->property_string = (axis2_char_t*)NULL;
                    adb_IssuerType_free(_IssuerType, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_IssuerType_free(
                adb_IssuerType_t* _IssuerType,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _IssuerType,
                env,
                "adb_IssuerType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_IssuerType_free_obj(
                adb_IssuerType_t* _IssuerType,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _IssuerType, AXIS2_FAILURE);

            if (_IssuerType->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _IssuerType->property_TypeName);
            }

            adb_IssuerType_reset_string(_IssuerType, env);
            adb_IssuerType_reset_uid(_IssuerType, env);
            

            if(_IssuerType)
            {
                AXIS2_FREE(env->allocator, _IssuerType);
                _IssuerType = NULL;
            }

            return AXIS2_SUCCESS;
        }


        
            axis2_status_t AXIS2_CALL
            adb_IssuerType_deserialize_from_string(
                            adb_IssuerType_t* _IssuerType,
                                            const axutil_env_t *env,
                                            const axis2_char_t *node_value,
                                            axiom_node_t *parent)
            {
              axis2_status_t status = AXIS2_SUCCESS;
            adb_IssuerType_set_string(_IssuerType,
                                                      env, node_value);
                    
              return status;
            }
        

        axis2_status_t AXIS2_CALL
        adb_IssuerType_deserialize(
                adb_IssuerType_t* _IssuerType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _IssuerType,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_IssuerType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_IssuerType_deserialize_obj(
                adb_IssuerType_t* _IssuerType,
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
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element IssuerType");
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
                    status = adb_IssuerType_deserialize_from_string(_IssuerType, env, text_value, parent);
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "uid"))
                             
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
                    /* this is hoping that attribute is stored in "uid", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "uid");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      
                            element =  (void*)adb_IdString_create(env);
                            adb_IdString_deserialize_from_string((adb_IdString_t*)element, env, attrib_text, parent);
                           adb_IssuerType_set_uid(_IssuerType,
                                                          env, (adb_IdString_t*)element);
                        
                    }
                  
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_IssuerType_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_IssuerType_declare_parent_namespaces(
                    adb_IssuerType_t* _IssuerType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
            axis2_char_t* AXIS2_CALL
            adb_IssuerType_serialize_to_string(
                    adb_IssuerType_t* _IssuerType,
                    const axutil_env_t *env, axutil_hash_t *namespaces)
            {
                axis2_char_t *text_value = NULL;
                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                
                         text_value = (axis2_char_t*)axutil_xml_quote_string(env, _IssuerType->property_string, AXIS2_FALSE);
                         if (!text_value)
                         {
                             text_value = (axis2_char_t*)axutil_strdup(env, _IssuerType->property_string);
                         }
                      
                return text_value;
            }
        
        
        axiom_node_t* AXIS2_CALL
        adb_IssuerType_serialize(
                adb_IssuerType_t* _IssuerType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_IssuerType == NULL)
            {
                return adb_IssuerType_serialize_obj(
                    _IssuerType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _IssuerType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_IssuerType");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_IssuerType_serialize_obj(
                adb_IssuerType_t* _IssuerType,
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
            
                if(_IssuerType->is_valid_uid)
                {
                
                        p_prefix = NULL;
                      adb_IdString_declare_parent_namespaces(_IssuerType->property_uid,
                                                                                      env, parent_element, namespaces, next_ns_index);
                           text_value = adb_IdString_serialize_to_string(_IssuerType->property_uid, env, namespaces);
                           string_to_stream = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) *
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(text_value) + 
                                                             axutil_strlen("uid")));
                           sprintf(string_to_stream, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "uid",  text_value);
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
                  }
              }
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"IssuerType\"", NULL);
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
                                 "http://www.daisy.org/DRM/2005/KeyExchange",
                                 xsi_prefix);
            xsi_type_attri = axiom_attribute_create (env, "type", "IssuerType", xsi_ns);
            
            axiom_element_add_attribute (parent_element, env, xsi_type_attri, parent);
        
               if(!parent_tag_closed && !tag_closed)
               {
                  text_value = ">"; 
                  axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
               }
               
               text_value = adb_IssuerType_serialize_to_string(_IssuerType, env, namespaces);
               if(text_value)
               {
                    axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                    AXIS2_FREE(env->allocator, text_value);
               }
            
                    
                    if(parent_tag_closed)
                    {
                       if(_IssuerType->is_valid_uid)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         adb_IdString_declare_parent_namespaces(_IssuerType->property_uid,
                                                                                      env, parent_element, namespaces, next_ns_index);
                           text_value = adb_IdString_serialize_to_string(_IssuerType->property_uid, env, namespaces);
                           if(text_value)
                           {
                               text_attri = axiom_attribute_create (env, "uid", text_value, ns1);
                               axiom_element_add_attribute (parent_element, env, text_attri, parent);
                               AXIS2_FREE(env-> allocator, text_value);
                           }
                        
                      }
                       
                  }
                

            return parent;
        }


        

            /**
             * Getter for string by  Property Number 1
             */
            axis2_char_t* AXIS2_CALL
            adb_IssuerType_get_property1(
                adb_IssuerType_t* _IssuerType,
                const axutil_env_t *env)
            {
                return adb_IssuerType_get_string(_IssuerType,
                                             env);
            }

            /**
             * getter for string.
             */
            axis2_char_t* AXIS2_CALL
            adb_IssuerType_get_string(
                    adb_IssuerType_t* _IssuerType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _IssuerType, NULL);
                  

                return _IssuerType->property_string;
             }

            /**
             * setter for string
             */
            axis2_status_t AXIS2_CALL
            adb_IssuerType_set_string(
                    adb_IssuerType_t* _IssuerType,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_string)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _IssuerType, AXIS2_FAILURE);
                
                if(_IssuerType->is_valid_string &&
                        arg_string == _IssuerType->property_string)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_string)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "string is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_IssuerType_reset_string(_IssuerType, env);

                
                if(NULL == arg_string)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _IssuerType->property_string = (axis2_char_t *)axutil_strdup(env, arg_string);
                        if(NULL == _IssuerType->property_string)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for string");
                            return AXIS2_FAILURE;
                        }
                        _IssuerType->is_valid_string = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for string
            */
           axis2_status_t AXIS2_CALL
           adb_IssuerType_reset_string(
                   adb_IssuerType_t* _IssuerType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _IssuerType, AXIS2_FAILURE);
               

               
            
                
                if(_IssuerType->property_string != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _IssuerType->property_string);
                     _IssuerType->property_string = NULL;
                }
            
                
                
                _IssuerType->is_valid_string = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether string is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_IssuerType_is_string_nil(
                   adb_IssuerType_t* _IssuerType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _IssuerType, AXIS2_TRUE);
               
               return !_IssuerType->is_valid_string;
           }

           /**
            * Set string to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_IssuerType_set_string_nil(
                   adb_IssuerType_t* _IssuerType,
                   const axutil_env_t *env)
           {
               return adb_IssuerType_reset_string(_IssuerType, env);
           }

           

            /**
             * Getter for uid by  Property Number 2
             */
            adb_IdString_t* AXIS2_CALL
            adb_IssuerType_get_property2(
                adb_IssuerType_t* _IssuerType,
                const axutil_env_t *env)
            {
                return adb_IssuerType_get_uid(_IssuerType,
                                             env);
            }

            /**
             * getter for uid.
             */
            adb_IdString_t* AXIS2_CALL
            adb_IssuerType_get_uid(
                    adb_IssuerType_t* _IssuerType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _IssuerType, NULL);
                  

                return _IssuerType->property_uid;
             }

            /**
             * setter for uid
             */
            axis2_status_t AXIS2_CALL
            adb_IssuerType_set_uid(
                    adb_IssuerType_t* _IssuerType,
                    const axutil_env_t *env,
                    adb_IdString_t*  arg_uid)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _IssuerType, AXIS2_FAILURE);
                
                if(_IssuerType->is_valid_uid &&
                        arg_uid == _IssuerType->property_uid)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_uid)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "uid is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_IssuerType_reset_uid(_IssuerType, env);

                
                if(NULL == arg_uid)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _IssuerType->property_uid = arg_uid;
                        _IssuerType->is_valid_uid = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for uid
            */
           axis2_status_t AXIS2_CALL
           adb_IssuerType_reset_uid(
                   adb_IssuerType_t* _IssuerType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _IssuerType, AXIS2_FAILURE);
               

               
            
                
                if(_IssuerType->property_uid != NULL)
                {
                   
                   adb_IdString_free(_IssuerType->property_uid, env);
                     _IssuerType->property_uid = NULL;
                }
            
                
                
                _IssuerType->is_valid_uid = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether uid is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_IssuerType_is_uid_nil(
                   adb_IssuerType_t* _IssuerType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _IssuerType, AXIS2_TRUE);
               
               return !_IssuerType->is_valid_uid;
           }

           /**
            * Set uid to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_IssuerType_set_uid_nil(
                   adb_IssuerType_t* _IssuerType,
                   const axutil_env_t *env)
           {
               return adb_IssuerType_reset_uid(_IssuerType, env);
           }

           

