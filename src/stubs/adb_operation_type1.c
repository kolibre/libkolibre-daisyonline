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
         * adb_operation_type1.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_operation_type1.h"
        
               /*
                * implmentation of the operation_type1|http://www.daisy.org/ns/daisy-online/ element
                */
           


        struct adb_operation_type1
        {
            axis2_char_t *property_TypeName;

            
                axutil_qname_t* qname;
            axis2_char_t* property_operation_type0;

                
                axis2_bool_t is_valid_operation_type0;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_operation_type1_set_operation_type0_nil(
                        adb_operation_type1_t* _operation_type1,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_operation_type1_t* AXIS2_CALL
        adb_operation_type1_create(
            const axutil_env_t *env)
        {
            adb_operation_type1_t *_operation_type1 = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _operation_type1 = (adb_operation_type1_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_operation_type1_t));

            if(NULL == _operation_type1)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_operation_type1, 0, sizeof(adb_operation_type1_t));

            _operation_type1->property_TypeName = axutil_strdup(env, "adb_operation_type1");
            _operation_type1->property_operation_type0  = NULL;
                  _operation_type1->is_valid_operation_type0  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "operation_type1",
                        "http://www.daisy.org/ns/daisy-online/",
                        NULL);
                _operation_type1->qname = qname;
            

            return _operation_type1;
        }

        adb_operation_type1_t* AXIS2_CALL
        adb_operation_type1_create_with_values(
            const axutil_env_t *env,
                axis2_char_t* _operation_type0)
        {
            adb_operation_type1_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_operation_type1_create(env);

            
              status = adb_operation_type1_set_operation_type0(
                                     adb_obj,
                                     env,
                                     _operation_type0);
              if(status == AXIS2_FAILURE) {
                  adb_operation_type1_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axis2_char_t* AXIS2_CALL
                adb_operation_type1_free_popping_value(
                        adb_operation_type1_t* _operation_type1,
                        const axutil_env_t *env)
                {
                    axis2_char_t* value;

                    
                    
                    value = _operation_type1->property_operation_type0;

                    _operation_type1->property_operation_type0 = (axis2_char_t*)NULL;
                    adb_operation_type1_free(_operation_type1, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_operation_type1_free(
                adb_operation_type1_t* _operation_type1,
                const axutil_env_t *env)
        {
            
            
            return adb_operation_type1_free_obj(
                _operation_type1,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_operation_type1_free_obj(
                adb_operation_type1_t* _operation_type1,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _operation_type1, AXIS2_FAILURE);

            if (_operation_type1->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _operation_type1->property_TypeName);
            }

            adb_operation_type1_reset_operation_type0(_operation_type1, env);
            
              if(_operation_type1->qname)
              {
                  axutil_qname_free (_operation_type1->qname, env);
                  _operation_type1->qname = NULL;
              }
            

            if(_operation_type1)
            {
                AXIS2_FREE(env->allocator, _operation_type1);
                _operation_type1 = NULL;
            }

            return AXIS2_SUCCESS;
        }


        
            axis2_status_t AXIS2_CALL
            adb_operation_type1_deserialize_from_string(
                            adb_operation_type1_t* _operation_type1,
                                            const axutil_env_t *env,
                                            const axis2_char_t *node_value,
                                            axiom_node_t *parent)
            {
              axis2_status_t status = AXIS2_SUCCESS;
            adb_operation_type1_set_operation_type0(_operation_type1,
                                                      env, node_value);
                    
              return status;
            }
        

        axis2_status_t AXIS2_CALL
        adb_operation_type1_deserialize(
                adb_operation_type1_t* _operation_type1,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_operation_type1_deserialize_obj(
                _operation_type1,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_operation_type1_deserialize_obj(
                adb_operation_type1_t* _operation_type1,
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
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element operation_type1");
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
                    status = adb_operation_type1_deserialize_from_string(_operation_type1, env, text_value, parent);
                }
            }
            
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_operation_type1_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_operation_type1_declare_parent_namespaces(
                    adb_operation_type1_t* _operation_type1,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
            axis2_char_t* AXIS2_CALL
            adb_operation_type1_serialize_to_string(
                    adb_operation_type1_t* _operation_type1,
                    const axutil_env_t *env, axutil_hash_t *namespaces)
            {
                axis2_char_t *text_value = NULL;
                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                
                         text_value = (axis2_char_t*)axutil_xml_quote_string(env, _operation_type1->property_operation_type0, AXIS2_FALSE);
                         if (!text_value)
                         {
                             text_value = (axis2_char_t*)axutil_strdup(env, _operation_type1->property_operation_type0);
                         }
                      
                return text_value;
            }
        
        
        axiom_node_t* AXIS2_CALL
        adb_operation_type1_serialize(
                adb_operation_type1_t* _operation_type1,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_operation_type1_serialize_obj(
                    _operation_type1, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_operation_type1_serialize_obj(
                adb_operation_type1_t* _operation_type1,
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
               
               text_value = adb_operation_type1_serialize_to_string(_operation_type1, env, namespaces);
               if(text_value)
               {
                    axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                    AXIS2_FREE(env->allocator, text_value);
               }
            

            return parent;
        }


        

            /**
             * Getter for operation_type0 by  Property Number 1
             */
            axis2_char_t* AXIS2_CALL
            adb_operation_type1_get_property1(
                adb_operation_type1_t* _operation_type1,
                const axutil_env_t *env)
            {
                return adb_operation_type1_get_operation_type0(_operation_type1,
                                             env);
            }

            /**
             * getter for operation_type0.
             */
            axis2_char_t* AXIS2_CALL
            adb_operation_type1_get_operation_type0(
                    adb_operation_type1_t* _operation_type1,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _operation_type1, NULL);
                  

                return _operation_type1->property_operation_type0;
             }

            /**
             * setter for operation_type0
             */
            axis2_status_t AXIS2_CALL
            adb_operation_type1_set_operation_type0(
                    adb_operation_type1_t* _operation_type1,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_operation_type0)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _operation_type1, AXIS2_FAILURE);
                
                if(_operation_type1->is_valid_operation_type0 &&
                        arg_operation_type0 == _operation_type1->property_operation_type0)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_operation_type0)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "operation_type0 is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_operation_type1_reset_operation_type0(_operation_type1, env);

                
                if(NULL == arg_operation_type0)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _operation_type1->property_operation_type0 = (axis2_char_t *)axutil_strdup(env, arg_operation_type0);
                        if(NULL == _operation_type1->property_operation_type0)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for operation_type0");
                            return AXIS2_FAILURE;
                        }
                        _operation_type1->is_valid_operation_type0 = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

            
             /**
             * specialized enum getter for operation_type0.
             */
             adb_operation_type0_enum_t AXIS2_CALL
             adb_operation_type1_get_operation_type0_enum(
                 adb_operation_type1_t* _operation_type1,
                 const axutil_env_t *env)
             {
                 AXIS2_ENV_CHECK(env, -1);
                 AXIS2_PARAM_CHECK(env->error, _operation_type1, -1);
             
             
                 if (axutil_strcmp(_operation_type1->property_operation_type0, "SET_BOOKMARKS") == 0)
                    return OPERATION_TYPE0_SET_BOOKMARKS;
             
                 if (axutil_strcmp(_operation_type1->property_operation_type0, "GET_BOOKMARKS") == 0)
                    return OPERATION_TYPE0_GET_BOOKMARKS;
             
                 if (axutil_strcmp(_operation_type1->property_operation_type0, "DYNAMIC_MENUS") == 0)
                    return OPERATION_TYPE0_DYNAMIC_MENUS;
             
                 if (axutil_strcmp(_operation_type1->property_operation_type0, "SERVICE_ANNOUNCEMENTS") == 0)
                    return OPERATION_TYPE0_SERVICE_ANNOUNCEMENTS;
             
                 if (axutil_strcmp(_operation_type1->property_operation_type0, "PDTB2_KEY_PROVISION") == 0)
                    return OPERATION_TYPE0_PDTB2_KEY_PROVISION;
             
             
                 /* Error: none of the strings matched; invalid enum value */
                 return -1;
             }
             
             
             /**
             * specialized enum setter for operation_type0.
             */
             axis2_status_t AXIS2_CALL
            adb_operation_type1_set_operation_type0_enum(
                    adb_operation_type1_t* _operation_type1,
                    const axutil_env_t *env,
                    const adb_operation_type0_enum_t  arg_operation_type0)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _operation_type1, AXIS2_FAILURE);

                
                   adb_operation_type1_reset_operation_type0(_operation_type1, env);

                   
                   switch (arg_operation_type0)
                   {
                     
                       case OPERATION_TYPE0_SET_BOOKMARKS :
                          _operation_type1->property_operation_type0 = (axis2_char_t *)axutil_strdup(env, "SET_BOOKMARKS");
                          break;
                     
                       case OPERATION_TYPE0_GET_BOOKMARKS :
                          _operation_type1->property_operation_type0 = (axis2_char_t *)axutil_strdup(env, "GET_BOOKMARKS");
                          break;
                     
                       case OPERATION_TYPE0_DYNAMIC_MENUS :
                          _operation_type1->property_operation_type0 = (axis2_char_t *)axutil_strdup(env, "DYNAMIC_MENUS");
                          break;
                     
                       case OPERATION_TYPE0_SERVICE_ANNOUNCEMENTS :
                          _operation_type1->property_operation_type0 = (axis2_char_t *)axutil_strdup(env, "SERVICE_ANNOUNCEMENTS");
                          break;
                     
                       case OPERATION_TYPE0_PDTB2_KEY_PROVISION :
                          _operation_type1->property_operation_type0 = (axis2_char_t *)axutil_strdup(env, "PDTB2_KEY_PROVISION");
                          break;
                     
                     
                       default:
                          _operation_type1->is_valid_operation_type0 = AXIS2_FALSE;
                          _operation_type1->property_operation_type0 = NULL;
                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error setting operation_type0: undefined enum value");
                          return AXIS2_FAILURE;
                   }
                
                   if(NULL == _operation_type1->property_operation_type0)
                   {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memory for operation_type0");
                       return AXIS2_FAILURE;
                   }
                        _operation_type1->is_valid_operation_type0 = AXIS2_TRUE;
                        
                
                return AXIS2_SUCCESS;
             }
             

           /**
            * resetter for operation_type0
            */
           axis2_status_t AXIS2_CALL
           adb_operation_type1_reset_operation_type0(
                   adb_operation_type1_t* _operation_type1,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _operation_type1, AXIS2_FAILURE);
               

               
            
                
                if(_operation_type1->property_operation_type0 != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _operation_type1->property_operation_type0);
                     _operation_type1->property_operation_type0 = NULL;
                }
            
                
                
                _operation_type1->is_valid_operation_type0 = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether operation_type0 is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_operation_type1_is_operation_type0_nil(
                   adb_operation_type1_t* _operation_type1,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _operation_type1, AXIS2_TRUE);
               
               return !_operation_type1->is_valid_operation_type0;
           }

           /**
            * Set operation_type0 to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_operation_type1_set_operation_type0_nil(
                   adb_operation_type1_t* _operation_type1,
                   const axutil_env_t *env)
           {
               return adb_operation_type1_reset_operation_type0(_operation_type1, env);
           }

           

