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
         * adb_IdString.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_IdString.h"
        
               /*
                * implmentation of the IdString|http://www.daisy.org/DRM/2005/KeyExchange element
                */
           


        struct adb_IdString
        {
            axis2_char_t *property_TypeName;

            
                axutil_qname_t* qname;
            axis2_char_t* property_IdString;

                
                axis2_bool_t is_valid_IdString;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_IdString_set_IdString_nil(
                        adb_IdString_t* _IdString,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_IdString_t* AXIS2_CALL
        adb_IdString_create(
            const axutil_env_t *env)
        {
            adb_IdString_t *_IdString = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _IdString = (adb_IdString_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_IdString_t));

            if(NULL == _IdString)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_IdString, 0, sizeof(adb_IdString_t));

            _IdString->property_TypeName = axutil_strdup(env, "adb_IdString");
            _IdString->property_IdString  = NULL;
                  _IdString->is_valid_IdString  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "IdString",
                        "http://www.daisy.org/DRM/2005/KeyExchange",
                        NULL);
                _IdString->qname = qname;
            

            return _IdString;
        }

        adb_IdString_t* AXIS2_CALL
        adb_IdString_create_with_values(
            const axutil_env_t *env,
                axis2_char_t* _IdString)
        {
            adb_IdString_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_IdString_create(env);

            
              status = adb_IdString_set_IdString(
                                     adb_obj,
                                     env,
                                     _IdString);
              if(status == AXIS2_FAILURE) {
                  adb_IdString_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axis2_char_t* AXIS2_CALL
                adb_IdString_free_popping_value(
                        adb_IdString_t* _IdString,
                        const axutil_env_t *env)
                {
                    axis2_char_t* value;

                    
                    
                    value = _IdString->property_IdString;

                    _IdString->property_IdString = (axis2_char_t*)NULL;
                    adb_IdString_free(_IdString, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_IdString_free(
                adb_IdString_t* _IdString,
                const axutil_env_t *env)
        {
            
            
            return adb_IdString_free_obj(
                _IdString,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_IdString_free_obj(
                adb_IdString_t* _IdString,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _IdString, AXIS2_FAILURE);

            if (_IdString->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _IdString->property_TypeName);
            }

            adb_IdString_reset_IdString(_IdString, env);
            
              if(_IdString->qname)
              {
                  axutil_qname_free (_IdString->qname, env);
                  _IdString->qname = NULL;
              }
            

            if(_IdString)
            {
                AXIS2_FREE(env->allocator, _IdString);
                _IdString = NULL;
            }

            return AXIS2_SUCCESS;
        }


        
            axis2_status_t AXIS2_CALL
            adb_IdString_deserialize_from_string(
                            adb_IdString_t* _IdString,
                                            const axutil_env_t *env,
                                            const axis2_char_t *node_value,
                                            axiom_node_t *parent)
            {
              axis2_status_t status = AXIS2_SUCCESS;
            adb_IdString_set_IdString(_IdString,
                                                      env, node_value);
                    
              return status;
            }
        

        axis2_status_t AXIS2_CALL
        adb_IdString_deserialize(
                adb_IdString_t* _IdString,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_IdString_deserialize_obj(
                _IdString,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_IdString_deserialize_obj(
                adb_IdString_t* _IdString,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
           
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
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element IdString");
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
                    status = adb_IdString_deserialize_from_string(_IdString, env, text_value, parent);
                }
            }
            
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_IdString_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_IdString_declare_parent_namespaces(
                    adb_IdString_t* _IdString,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
            axis2_char_t* AXIS2_CALL
            adb_IdString_serialize_to_string(
                    adb_IdString_t* _IdString,
                    const axutil_env_t *env, axutil_hash_t *namespaces)
            {
                axis2_char_t *text_value = NULL;
                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                
                         text_value = (axis2_char_t*)axutil_xml_quote_string(env, _IdString->property_IdString, AXIS2_FALSE);
                         if (!text_value)
                         {
                             text_value = (axis2_char_t*)axutil_strdup(env, _IdString->property_IdString);
                         }
                      
                return text_value;
            }
        
        
        axiom_node_t* AXIS2_CALL
        adb_IdString_serialize(
                adb_IdString_t* _IdString,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_IdString_serialize_obj(
                    _IdString, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_IdString_serialize_obj(
                adb_IdString_t* _IdString,
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
               
               text_value = adb_IdString_serialize_to_string(_IdString, env, namespaces);
               if(text_value)
               {
                    axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                    AXIS2_FREE(env->allocator, text_value);
               }
            

            return parent;
        }


        

            /**
             * Getter for IdString by  Property Number 1
             */
            axis2_char_t* AXIS2_CALL
            adb_IdString_get_property1(
                adb_IdString_t* _IdString,
                const axutil_env_t *env)
            {
                return adb_IdString_get_IdString(_IdString,
                                             env);
            }

            /**
             * getter for IdString.
             */
            axis2_char_t* AXIS2_CALL
            adb_IdString_get_IdString(
                    adb_IdString_t* _IdString,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _IdString, NULL);
                  

                return _IdString->property_IdString;
             }

            /**
             * setter for IdString
             */
            axis2_status_t AXIS2_CALL
            adb_IdString_set_IdString(
                    adb_IdString_t* _IdString,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_IdString)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _IdString, AXIS2_FAILURE);
                
                if(_IdString->is_valid_IdString &&
                        arg_IdString == _IdString->property_IdString)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_IdString)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "IdString is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_IdString_reset_IdString(_IdString, env);

                
                if(NULL == arg_IdString)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _IdString->property_IdString = (axis2_char_t *)axutil_strdup(env, arg_IdString);
                        if(NULL == _IdString->property_IdString)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for IdString");
                            return AXIS2_FAILURE;
                        }
                        _IdString->is_valid_IdString = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for IdString
            */
           axis2_status_t AXIS2_CALL
           adb_IdString_reset_IdString(
                   adb_IdString_t* _IdString,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _IdString, AXIS2_FAILURE);
               

               
            
                
                if(_IdString->property_IdString != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _IdString->property_IdString);
                     _IdString->property_IdString = NULL;
                }
            
                
                
                _IdString->is_valid_IdString = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether IdString is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_IdString_is_IdString_nil(
                   adb_IdString_t* _IdString,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _IdString, AXIS2_TRUE);
               
               return !_IdString->is_valid_IdString;
           }

           /**
            * Set IdString to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_IdString_set_IdString_nil(
                   adb_IdString_t* _IdString,
                   const axutil_env_t *env)
           {
               return adb_IdString_reset_IdString(_IdString, env);
           }

           

