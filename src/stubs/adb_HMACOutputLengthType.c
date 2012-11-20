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
         * adb_HMACOutputLengthType.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_HMACOutputLengthType.h"
        
               /*
                * implmentation of the HMACOutputLengthType|http://www.w3.org/2000/09/xmldsig# element
                */
           


        struct adb_HMACOutputLengthType
        {
            axis2_char_t *property_TypeName;

            
                axutil_qname_t* qname;
            int property_HMACOutputLengthType;

                
                axis2_bool_t is_valid_HMACOutputLengthType;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_HMACOutputLengthType_set_HMACOutputLengthType_nil(
                        adb_HMACOutputLengthType_t* _HMACOutputLengthType,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_HMACOutputLengthType_t* AXIS2_CALL
        adb_HMACOutputLengthType_create(
            const axutil_env_t *env)
        {
            adb_HMACOutputLengthType_t *_HMACOutputLengthType = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _HMACOutputLengthType = (adb_HMACOutputLengthType_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_HMACOutputLengthType_t));

            if(NULL == _HMACOutputLengthType)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_HMACOutputLengthType, 0, sizeof(adb_HMACOutputLengthType_t));

            _HMACOutputLengthType->property_TypeName = axutil_strdup(env, "adb_HMACOutputLengthType");
            _HMACOutputLengthType->is_valid_HMACOutputLengthType  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "HMACOutputLengthType",
                        "http://www.w3.org/2000/09/xmldsig#",
                        NULL);
                _HMACOutputLengthType->qname = qname;
            

            return _HMACOutputLengthType;
        }

        adb_HMACOutputLengthType_t* AXIS2_CALL
        adb_HMACOutputLengthType_create_with_values(
            const axutil_env_t *env,
                int _HMACOutputLengthType)
        {
            adb_HMACOutputLengthType_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_HMACOutputLengthType_create(env);

            
              status = adb_HMACOutputLengthType_set_HMACOutputLengthType(
                                     adb_obj,
                                     env,
                                     _HMACOutputLengthType);
              if(status == AXIS2_FAILURE) {
                  adb_HMACOutputLengthType_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        int AXIS2_CALL
                adb_HMACOutputLengthType_free_popping_value(
                        adb_HMACOutputLengthType_t* _HMACOutputLengthType,
                        const axutil_env_t *env)
                {
                    int value;

                    
                    
                    value = _HMACOutputLengthType->property_HMACOutputLengthType;

                    adb_HMACOutputLengthType_free(_HMACOutputLengthType, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_HMACOutputLengthType_free(
                adb_HMACOutputLengthType_t* _HMACOutputLengthType,
                const axutil_env_t *env)
        {
            
            
            return adb_HMACOutputLengthType_free_obj(
                _HMACOutputLengthType,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_HMACOutputLengthType_free_obj(
                adb_HMACOutputLengthType_t* _HMACOutputLengthType,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _HMACOutputLengthType, AXIS2_FAILURE);

            if (_HMACOutputLengthType->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _HMACOutputLengthType->property_TypeName);
            }

            adb_HMACOutputLengthType_reset_HMACOutputLengthType(_HMACOutputLengthType, env);
            
              if(_HMACOutputLengthType->qname)
              {
                  axutil_qname_free (_HMACOutputLengthType->qname, env);
                  _HMACOutputLengthType->qname = NULL;
              }
            

            if(_HMACOutputLengthType)
            {
                AXIS2_FREE(env->allocator, _HMACOutputLengthType);
                _HMACOutputLengthType = NULL;
            }

            return AXIS2_SUCCESS;
        }


        
            axis2_status_t AXIS2_CALL
            adb_HMACOutputLengthType_deserialize_from_string(
                            adb_HMACOutputLengthType_t* _HMACOutputLengthType,
                                            const axutil_env_t *env,
                                            const axis2_char_t *node_value,
                                            axiom_node_t *parent)
            {
              axis2_status_t status = AXIS2_SUCCESS;
            adb_HMACOutputLengthType_set_HMACOutputLengthType(_HMACOutputLengthType,
                                                      env, atoi(node_value));
                    
              return status;
            }
        

        axis2_status_t AXIS2_CALL
        adb_HMACOutputLengthType_deserialize(
                adb_HMACOutputLengthType_t* _HMACOutputLengthType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_HMACOutputLengthType_deserialize_obj(
                _HMACOutputLengthType,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_HMACOutputLengthType_deserialize_obj(
                adb_HMACOutputLengthType_t* _HMACOutputLengthType,
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
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element HMACOutputLengthType");
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
                    status = adb_HMACOutputLengthType_deserialize_from_string(_HMACOutputLengthType, env, text_value, parent);
                }
            }
            
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_HMACOutputLengthType_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_HMACOutputLengthType_declare_parent_namespaces(
                    adb_HMACOutputLengthType_t* _HMACOutputLengthType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
            axis2_char_t* AXIS2_CALL
            adb_HMACOutputLengthType_serialize_to_string(
                    adb_HMACOutputLengthType_t* _HMACOutputLengthType,
                    const axutil_env_t *env, axutil_hash_t *namespaces)
            {
                axis2_char_t *text_value = NULL;
                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                
                         text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * ADB_DEFAULT_DIGIT_LIMIT);
                         sprintf (text_value, "%d", _HMACOutputLengthType->property_HMACOutputLengthType);
                      
                return text_value;
            }
        
        
        axiom_node_t* AXIS2_CALL
        adb_HMACOutputLengthType_serialize(
                adb_HMACOutputLengthType_t* _HMACOutputLengthType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_HMACOutputLengthType_serialize_obj(
                    _HMACOutputLengthType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_HMACOutputLengthType_serialize_obj(
                adb_HMACOutputLengthType_t* _HMACOutputLengthType,
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
               
               text_value = adb_HMACOutputLengthType_serialize_to_string(_HMACOutputLengthType, env, namespaces);
               if(text_value)
               {
                    axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                    AXIS2_FREE(env->allocator, text_value);
               }
            

            return parent;
        }


        

            /**
             * Getter for HMACOutputLengthType by  Property Number 1
             */
            int AXIS2_CALL
            adb_HMACOutputLengthType_get_property1(
                adb_HMACOutputLengthType_t* _HMACOutputLengthType,
                const axutil_env_t *env)
            {
                return adb_HMACOutputLengthType_get_HMACOutputLengthType(_HMACOutputLengthType,
                                             env);
            }

            /**
             * getter for HMACOutputLengthType.
             */
            int AXIS2_CALL
            adb_HMACOutputLengthType_get_HMACOutputLengthType(
                    adb_HMACOutputLengthType_t* _HMACOutputLengthType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (int)0);
                    AXIS2_PARAM_CHECK(env->error, _HMACOutputLengthType, (int)0);
                  

                return _HMACOutputLengthType->property_HMACOutputLengthType;
             }

            /**
             * setter for HMACOutputLengthType
             */
            axis2_status_t AXIS2_CALL
            adb_HMACOutputLengthType_set_HMACOutputLengthType(
                    adb_HMACOutputLengthType_t* _HMACOutputLengthType,
                    const axutil_env_t *env,
                    const int  arg_HMACOutputLengthType)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _HMACOutputLengthType, AXIS2_FAILURE);
                
                if(_HMACOutputLengthType->is_valid_HMACOutputLengthType &&
                        arg_HMACOutputLengthType == _HMACOutputLengthType->property_HMACOutputLengthType)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_HMACOutputLengthType_reset_HMACOutputLengthType(_HMACOutputLengthType, env);

                _HMACOutputLengthType->property_HMACOutputLengthType = arg_HMACOutputLengthType;
                        _HMACOutputLengthType->is_valid_HMACOutputLengthType = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for HMACOutputLengthType
            */
           axis2_status_t AXIS2_CALL
           adb_HMACOutputLengthType_reset_HMACOutputLengthType(
                   adb_HMACOutputLengthType_t* _HMACOutputLengthType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _HMACOutputLengthType, AXIS2_FAILURE);
               

               _HMACOutputLengthType->is_valid_HMACOutputLengthType = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether HMACOutputLengthType is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_HMACOutputLengthType_is_HMACOutputLengthType_nil(
                   adb_HMACOutputLengthType_t* _HMACOutputLengthType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _HMACOutputLengthType, AXIS2_TRUE);
               
               return !_HMACOutputLengthType->is_valid_HMACOutputLengthType;
           }

           /**
            * Set HMACOutputLengthType to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_HMACOutputLengthType_set_HMACOutputLengthType_nil(
                   adb_HMACOutputLengthType_t* _HMACOutputLengthType,
                   const axutil_env_t *env)
           {
               return adb_HMACOutputLengthType_reset_HMACOutputLengthType(_HMACOutputLengthType, env);
           }

           

