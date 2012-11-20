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
         * adb_priority_type0.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_priority_type0.h"
        
               /*
                * implmentation of the priority_type0|http://www.daisy.org/ns/daisy-online/ element
                */
           


        struct adb_priority_type0
        {
            axis2_char_t *property_TypeName;

            
                axutil_qname_t* qname;
            int property_priority_type0;

                
                axis2_bool_t is_valid_priority_type0;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_priority_type0_set_priority_type0_nil(
                        adb_priority_type0_t* _priority_type0,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_priority_type0_t* AXIS2_CALL
        adb_priority_type0_create(
            const axutil_env_t *env)
        {
            adb_priority_type0_t *_priority_type0 = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _priority_type0 = (adb_priority_type0_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_priority_type0_t));

            if(NULL == _priority_type0)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_priority_type0, 0, sizeof(adb_priority_type0_t));

            _priority_type0->property_TypeName = axutil_strdup(env, "adb_priority_type0");
            _priority_type0->is_valid_priority_type0  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "priority_type0",
                        "http://www.daisy.org/ns/daisy-online/",
                        NULL);
                _priority_type0->qname = qname;
            

            return _priority_type0;
        }

        adb_priority_type0_t* AXIS2_CALL
        adb_priority_type0_create_with_values(
            const axutil_env_t *env,
                int _priority_type0)
        {
            adb_priority_type0_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_priority_type0_create(env);

            
              status = adb_priority_type0_set_priority_type0(
                                     adb_obj,
                                     env,
                                     _priority_type0);
              if(status == AXIS2_FAILURE) {
                  adb_priority_type0_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        int AXIS2_CALL
                adb_priority_type0_free_popping_value(
                        adb_priority_type0_t* _priority_type0,
                        const axutil_env_t *env)
                {
                    int value;

                    
                    
                    value = _priority_type0->property_priority_type0;

                    adb_priority_type0_free(_priority_type0, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_priority_type0_free(
                adb_priority_type0_t* _priority_type0,
                const axutil_env_t *env)
        {
            
            
            return adb_priority_type0_free_obj(
                _priority_type0,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_priority_type0_free_obj(
                adb_priority_type0_t* _priority_type0,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _priority_type0, AXIS2_FAILURE);

            if (_priority_type0->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _priority_type0->property_TypeName);
            }

            adb_priority_type0_reset_priority_type0(_priority_type0, env);
            
              if(_priority_type0->qname)
              {
                  axutil_qname_free (_priority_type0->qname, env);
                  _priority_type0->qname = NULL;
              }
            

            if(_priority_type0)
            {
                AXIS2_FREE(env->allocator, _priority_type0);
                _priority_type0 = NULL;
            }

            return AXIS2_SUCCESS;
        }


        
            axis2_status_t AXIS2_CALL
            adb_priority_type0_deserialize_from_string(
                            adb_priority_type0_t* _priority_type0,
                                            const axutil_env_t *env,
                                            const axis2_char_t *node_value,
                                            axiom_node_t *parent)
            {
              axis2_status_t status = AXIS2_SUCCESS;
            adb_priority_type0_set_priority_type0(_priority_type0,
                                                      env, atoi(node_value));
                    
              return status;
            }
        

        axis2_status_t AXIS2_CALL
        adb_priority_type0_deserialize(
                adb_priority_type0_t* _priority_type0,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_priority_type0_deserialize_obj(
                _priority_type0,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_priority_type0_deserialize_obj(
                adb_priority_type0_t* _priority_type0,
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
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element priority_type0");
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
                    status = adb_priority_type0_deserialize_from_string(_priority_type0, env, text_value, parent);
                }
            }
            
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_priority_type0_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_priority_type0_declare_parent_namespaces(
                    adb_priority_type0_t* _priority_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
            axis2_char_t* AXIS2_CALL
            adb_priority_type0_serialize_to_string(
                    adb_priority_type0_t* _priority_type0,
                    const axutil_env_t *env, axutil_hash_t *namespaces)
            {
                axis2_char_t *text_value = NULL;
                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                
                         text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * ADB_DEFAULT_DIGIT_LIMIT);
                         sprintf (text_value, "%d", _priority_type0->property_priority_type0);
                      
                return text_value;
            }
        
        
        axiom_node_t* AXIS2_CALL
        adb_priority_type0_serialize(
                adb_priority_type0_t* _priority_type0,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_priority_type0_serialize_obj(
                    _priority_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_priority_type0_serialize_obj(
                adb_priority_type0_t* _priority_type0,
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
               
               text_value = adb_priority_type0_serialize_to_string(_priority_type0, env, namespaces);
               if(text_value)
               {
                    axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                    AXIS2_FREE(env->allocator, text_value);
               }
            

            return parent;
        }


        

            /**
             * Getter for priority_type0 by  Property Number 1
             */
            int AXIS2_CALL
            adb_priority_type0_get_property1(
                adb_priority_type0_t* _priority_type0,
                const axutil_env_t *env)
            {
                return adb_priority_type0_get_priority_type0(_priority_type0,
                                             env);
            }

            /**
             * getter for priority_type0.
             */
            int AXIS2_CALL
            adb_priority_type0_get_priority_type0(
                    adb_priority_type0_t* _priority_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (int)0);
                    AXIS2_PARAM_CHECK(env->error, _priority_type0, (int)0);
                  

                return _priority_type0->property_priority_type0;
             }

            /**
             * setter for priority_type0
             */
            axis2_status_t AXIS2_CALL
            adb_priority_type0_set_priority_type0(
                    adb_priority_type0_t* _priority_type0,
                    const axutil_env_t *env,
                    const int  arg_priority_type0)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _priority_type0, AXIS2_FAILURE);
                
                if(_priority_type0->is_valid_priority_type0 &&
                        arg_priority_type0 == _priority_type0->property_priority_type0)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_priority_type0_reset_priority_type0(_priority_type0, env);

                _priority_type0->property_priority_type0 = arg_priority_type0;
                        _priority_type0->is_valid_priority_type0 = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for priority_type0
            */
           axis2_status_t AXIS2_CALL
           adb_priority_type0_reset_priority_type0(
                   adb_priority_type0_t* _priority_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _priority_type0, AXIS2_FAILURE);
               

               _priority_type0->is_valid_priority_type0 = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether priority_type0 is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_priority_type0_is_priority_type0_nil(
                   adb_priority_type0_t* _priority_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _priority_type0, AXIS2_TRUE);
               
               return !_priority_type0->is_valid_priority_type0;
           }

           /**
            * Set priority_type0 to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_priority_type0_set_priority_type0_nil(
                   adb_priority_type0_t* _priority_type0,
                   const axutil_env_t *env)
           {
               return adb_priority_type0_reset_priority_type0(_priority_type0, env);
           }

           

