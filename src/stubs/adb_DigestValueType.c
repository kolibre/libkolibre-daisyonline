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
         * adb_DigestValueType.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_DigestValueType.h"
        
               /*
                * implmentation of the DigestValueType|http://www.w3.org/2000/09/xmldsig# element
                */
           


        struct adb_DigestValueType
        {
            axis2_char_t *property_TypeName;

            
                axutil_qname_t* qname;
            axutil_base64_binary_t* property_DigestValueType;

                
                axis2_bool_t is_valid_DigestValueType;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_DigestValueType_set_DigestValueType_nil(
                        adb_DigestValueType_t* _DigestValueType,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_DigestValueType_t* AXIS2_CALL
        adb_DigestValueType_create(
            const axutil_env_t *env)
        {
            adb_DigestValueType_t *_DigestValueType = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _DigestValueType = (adb_DigestValueType_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_DigestValueType_t));

            if(NULL == _DigestValueType)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_DigestValueType, 0, sizeof(adb_DigestValueType_t));

            _DigestValueType->property_TypeName = axutil_strdup(env, "adb_DigestValueType");
            _DigestValueType->property_DigestValueType  = NULL;
                  _DigestValueType->is_valid_DigestValueType  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "DigestValueType",
                        "http://www.w3.org/2000/09/xmldsig#",
                        NULL);
                _DigestValueType->qname = qname;
            

            return _DigestValueType;
        }

        adb_DigestValueType_t* AXIS2_CALL
        adb_DigestValueType_create_with_values(
            const axutil_env_t *env,
                axutil_base64_binary_t* _DigestValueType)
        {
            adb_DigestValueType_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_DigestValueType_create(env);

            
              status = adb_DigestValueType_set_DigestValueType(
                                     adb_obj,
                                     env,
                                     _DigestValueType);
              if(status == AXIS2_FAILURE) {
                  adb_DigestValueType_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axutil_base64_binary_t* AXIS2_CALL
                adb_DigestValueType_free_popping_value(
                        adb_DigestValueType_t* _DigestValueType,
                        const axutil_env_t *env)
                {
                    axutil_base64_binary_t* value;

                    
                    
                    value = _DigestValueType->property_DigestValueType;

                    _DigestValueType->property_DigestValueType = (axutil_base64_binary_t*)NULL;
                    adb_DigestValueType_free(_DigestValueType, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_DigestValueType_free(
                adb_DigestValueType_t* _DigestValueType,
                const axutil_env_t *env)
        {
            
            
            return adb_DigestValueType_free_obj(
                _DigestValueType,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_DigestValueType_free_obj(
                adb_DigestValueType_t* _DigestValueType,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _DigestValueType, AXIS2_FAILURE);

            if (_DigestValueType->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _DigestValueType->property_TypeName);
            }

            adb_DigestValueType_reset_DigestValueType(_DigestValueType, env);
            
              if(_DigestValueType->qname)
              {
                  axutil_qname_free (_DigestValueType->qname, env);
                  _DigestValueType->qname = NULL;
              }
            

            if(_DigestValueType)
            {
                AXIS2_FREE(env->allocator, _DigestValueType);
                _DigestValueType = NULL;
            }

            return AXIS2_SUCCESS;
        }


        
            axis2_status_t AXIS2_CALL
            adb_DigestValueType_deserialize_from_string(
                            adb_DigestValueType_t* _DigestValueType,
                                            const axutil_env_t *env,
                                            const axis2_char_t *node_value,
                                            axiom_node_t *parent)
            {
              axis2_status_t status = AXIS2_SUCCESS;
            
              void *element = NULL;
            
                       element = (void*)axutil_base64_binary_create(env);
                       axutil_base64_binary_set_encoded_binary((axutil_base64_binary_t*)element, env,
                                                                  node_value);
                       adb_DigestValueType_set_DigestValueType(_DigestValueType,
                                                      env, (axutil_base64_binary_t*)element);
                    
              return status;
            }
        

        axis2_status_t AXIS2_CALL
        adb_DigestValueType_deserialize(
                adb_DigestValueType_t* _DigestValueType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_DigestValueType_deserialize_obj(
                _DigestValueType,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_DigestValueType_deserialize_obj(
                adb_DigestValueType_t* _DigestValueType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
          
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
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element DigestValueType");
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
                    status = adb_DigestValueType_deserialize_from_string(_DigestValueType, env, text_value, parent);
                }
            }
            
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_DigestValueType_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_DigestValueType_declare_parent_namespaces(
                    adb_DigestValueType_t* _DigestValueType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
            axis2_char_t* AXIS2_CALL
            adb_DigestValueType_serialize_to_string(
                    adb_DigestValueType_t* _DigestValueType,
                    const axutil_env_t *env, axutil_hash_t *namespaces)
            {
                axis2_char_t *text_value = NULL;
                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                
                         text_value =  axutil_base64_binary_get_encoded_binary(_DigestValueType->property_DigestValueType, env);
                      
                return text_value;
            }
        
        
        axiom_node_t* AXIS2_CALL
        adb_DigestValueType_serialize(
                adb_DigestValueType_t* _DigestValueType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_DigestValueType_serialize_obj(
                    _DigestValueType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_DigestValueType_serialize_obj(
                adb_DigestValueType_t* _DigestValueType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
         
         axiom_node_t* current_node = NULL;
         int tag_closed = 0;
         axis2_char_t* xsi_prefix = NULL;
         axiom_namespace_t* xsi_ns = NULL;
         axiom_attribute_t* xsi_type_attri = NULL;
         
            axiom_data_source_t *data_source = NULL;
            axutil_stream_t *stream = NULL;
            axis2_char_t *text_value;
             
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
               if(!parent_tag_closed && !tag_closed)
               {
                  text_value = ">"; 
                  axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
               }
               
               text_value = adb_DigestValueType_serialize_to_string(_DigestValueType, env, namespaces);
               if(text_value)
               {
                    axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                    AXIS2_FREE(env->allocator, text_value);
               }
            

            return parent;
        }


        

            /**
             * Getter for DigestValueType by  Property Number 1
             */
            axutil_base64_binary_t* AXIS2_CALL
            adb_DigestValueType_get_property1(
                adb_DigestValueType_t* _DigestValueType,
                const axutil_env_t *env)
            {
                return adb_DigestValueType_get_DigestValueType(_DigestValueType,
                                             env);
            }

            /**
             * getter for DigestValueType.
             */
            axutil_base64_binary_t* AXIS2_CALL
            adb_DigestValueType_get_DigestValueType(
                    adb_DigestValueType_t* _DigestValueType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _DigestValueType, NULL);
                  

                return _DigestValueType->property_DigestValueType;
             }

            /**
             * setter for DigestValueType
             */
            axis2_status_t AXIS2_CALL
            adb_DigestValueType_set_DigestValueType(
                    adb_DigestValueType_t* _DigestValueType,
                    const axutil_env_t *env,
                    axutil_base64_binary_t*  arg_DigestValueType)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _DigestValueType, AXIS2_FAILURE);
                
                if(_DigestValueType->is_valid_DigestValueType &&
                        arg_DigestValueType == _DigestValueType->property_DigestValueType)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_DigestValueType)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "DigestValueType is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_DigestValueType_reset_DigestValueType(_DigestValueType, env);

                
                if(NULL == arg_DigestValueType)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _DigestValueType->property_DigestValueType = arg_DigestValueType;
                        _DigestValueType->is_valid_DigestValueType = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for DigestValueType
            */
           axis2_status_t AXIS2_CALL
           adb_DigestValueType_reset_DigestValueType(
                   adb_DigestValueType_t* _DigestValueType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _DigestValueType, AXIS2_FAILURE);
               

               
            
                
                if(_DigestValueType->property_DigestValueType != NULL)
                {
                   
                   
                      axutil_base64_binary_free (_DigestValueType->property_DigestValueType, env);
                     _DigestValueType->property_DigestValueType = NULL;
                }
            
                
                
                _DigestValueType->is_valid_DigestValueType = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether DigestValueType is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_DigestValueType_is_DigestValueType_nil(
                   adb_DigestValueType_t* _DigestValueType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _DigestValueType, AXIS2_TRUE);
               
               return !_DigestValueType->is_valid_DigestValueType;
           }

           /**
            * Set DigestValueType to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_DigestValueType_set_DigestValueType_nil(
                   adb_DigestValueType_t* _DigestValueType,
                   const axutil_env_t *env)
           {
               return adb_DigestValueType_reset_DigestValueType(_DigestValueType, env);
           }

           

