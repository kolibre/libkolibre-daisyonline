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
         * adb_EncryptedData.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_EncryptedData.h"
        
               /*
                * implmentation of the EncryptedData|http://www.w3.org/2001/04/xmlenc# element
                */
           


        struct adb_EncryptedData
        {
            axis2_char_t *property_TypeName;

            
                axutil_qname_t* qname;
            adb_EncryptedDataType_t* property_EncryptedData;

                
                axis2_bool_t is_valid_EncryptedData;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_EncryptedData_set_EncryptedData_nil(
                        adb_EncryptedData_t* _EncryptedData,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_EncryptedData_t* AXIS2_CALL
        adb_EncryptedData_create(
            const axutil_env_t *env)
        {
            adb_EncryptedData_t *_EncryptedData = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _EncryptedData = (adb_EncryptedData_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_EncryptedData_t));

            if(NULL == _EncryptedData)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_EncryptedData, 0, sizeof(adb_EncryptedData_t));

            _EncryptedData->property_TypeName = axutil_strdup(env, "adb_EncryptedData");
            _EncryptedData->property_EncryptedData  = NULL;
                  _EncryptedData->is_valid_EncryptedData  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "EncryptedData",
                        "http://www.w3.org/2001/04/xmlenc#",
                        NULL);
                _EncryptedData->qname = qname;
            

            return _EncryptedData;
        }

        adb_EncryptedData_t* AXIS2_CALL
        adb_EncryptedData_create_with_values(
            const axutil_env_t *env,
                adb_EncryptedDataType_t* _EncryptedData)
        {
            adb_EncryptedData_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_EncryptedData_create(env);

            
              status = adb_EncryptedData_set_EncryptedData(
                                     adb_obj,
                                     env,
                                     _EncryptedData);
              if(status == AXIS2_FAILURE) {
                  adb_EncryptedData_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        adb_EncryptedDataType_t* AXIS2_CALL
                adb_EncryptedData_free_popping_value(
                        adb_EncryptedData_t* _EncryptedData,
                        const axutil_env_t *env)
                {
                    adb_EncryptedDataType_t* value;

                    
                    
                    value = _EncryptedData->property_EncryptedData;

                    _EncryptedData->property_EncryptedData = (adb_EncryptedDataType_t*)NULL;
                    adb_EncryptedData_free(_EncryptedData, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_EncryptedData_free(
                adb_EncryptedData_t* _EncryptedData,
                const axutil_env_t *env)
        {
            
            
            return adb_EncryptedData_free_obj(
                _EncryptedData,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_EncryptedData_free_obj(
                adb_EncryptedData_t* _EncryptedData,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _EncryptedData, AXIS2_FAILURE);

            if (_EncryptedData->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _EncryptedData->property_TypeName);
            }

            adb_EncryptedData_reset_EncryptedData(_EncryptedData, env);
            
              if(_EncryptedData->qname)
              {
                  axutil_qname_free (_EncryptedData->qname, env);
                  _EncryptedData->qname = NULL;
              }
            

            if(_EncryptedData)
            {
                AXIS2_FREE(env->allocator, _EncryptedData);
                _EncryptedData = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_EncryptedData_deserialize(
                adb_EncryptedData_t* _EncryptedData,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_EncryptedData_deserialize_obj(
                _EncryptedData,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_EncryptedData_deserialize_obj(
                adb_EncryptedData_t* _EncryptedData,
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
          
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _EncryptedData, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for EncryptedData : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              

                    current_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                    qname = axiom_element_get_qname(current_element, env, parent);
                    if (axutil_qname_equals(qname, env, _EncryptedData-> qname))
                    {
                        
                          first_node = parent;
                          
                    }
                    else
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                              "Failed in building adb object for EncryptedData : "
                              "Expected %s but returned %s",
                              axutil_qname_to_string(_EncryptedData-> qname, env),
                              axutil_qname_to_string(qname, env));
                        
                        return AXIS2_FAILURE;
                    }
                    

                     
                     /*
                      * building EncryptedData element
                      */
                     
                     
                     
                                   current_node = first_node;
                                   is_early_node_valid = AXIS2_FALSE;
                                   
                                   
                                    while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                    {
                                        current_node = axiom_node_get_next_sibling(current_node, env);
                                    }
                                    if(current_node != NULL)
                                    {
                                        current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                        qname = axiom_element_get_qname(current_element, env, current_node);
                                    }
                                   
                                 element_qname = axutil_qname_create(env, "EncryptedData", "http://www.w3.org/2001/04/xmlenc#", NULL);
                                 

                           if (adb_EncryptedDataType_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_EncryptedDataType");

                                      status =  adb_EncryptedDataType_deserialize((adb_EncryptedDataType_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element EncryptedData");
                                      }
                                      else
                                      {
                                          status = adb_EncryptedData_set_EncryptedData(_EncryptedData, env,
                                                                   (adb_EncryptedDataType_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for EncryptedData ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                              else if(!dont_care_minoccurs)
                              {
                                  if(element_qname)
                                  {
                                      axutil_qname_free(element_qname, env);
                                  }
                                  /* this is not a nillable element*/
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element EncryptedData missing");
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
          adb_EncryptedData_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_EncryptedData_declare_parent_namespaces(
                    adb_EncryptedData_t* _EncryptedData,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_EncryptedData_serialize(
                adb_EncryptedData_t* _EncryptedData,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_EncryptedData_serialize_obj(
                    _EncryptedData, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_EncryptedData_serialize_obj(
                adb_EncryptedData_t* _EncryptedData,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
         
         axiom_node_t* current_node = NULL;
         int tag_closed = 0;
         axis2_char_t* xsi_prefix = NULL;
         axiom_namespace_t* xsi_ns = NULL;
         axiom_attribute_t* xsi_type_attri = NULL;
         
                axiom_namespace_t *ns1 = NULL;

                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                axis2_char_t *p_prefix = NULL;
                axis2_bool_t ns_already_defined;
            
                    axis2_char_t text_value_1[ADB_DEFAULT_DIGIT_LIMIT];
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

             
                int next_ns_index_value = 0;
            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _EncryptedData, NULL);
            
             
                    namespaces = axutil_hash_make(env);
                    next_ns_index = &next_ns_index_value;
                     
                           ns1 = axiom_namespace_create (env,
                                             "http://www.w3.org/2001/04/xmlenc#",
                                             "n"); 
                           axutil_hash_set(namespaces, "http://www.w3.org/2001/04/xmlenc#", AXIS2_HASH_KEY_STRING, axutil_strdup(env, "n"));
                       
                     
                    parent_element = axiom_element_create (env, NULL, "EncryptedData", ns1 , &parent);
                    
                    
                    axiom_element_set_namespace(parent_element, env, ns1, parent);


            
                    data_source = axiom_data_source_create(env, parent, &current_node);
                    stream = axiom_data_source_get_stream(data_source, env);
                  
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/04/xmlenc#", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.w3.org/2001/04/xmlenc#", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.w3.org/2001/04/xmlenc#",
                                            p_prefix));
                       }
                      

                   if (!_EncryptedData->is_valid_EncryptedData)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property EncryptedData");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("EncryptedData"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("EncryptedData")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing EncryptedData element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sEncryptedData",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sEncryptedData>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    adb_EncryptedDataType_serialize(_EncryptedData->property_EncryptedData, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_EncryptedDataType_is_particle() || AXIS2_TRUE, namespaces, next_ns_index);
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                   if(namespaces)
                   {
                       axutil_hash_index_t *hi;
                       void *val;
                       for (hi = axutil_hash_first(namespaces, env); hi; hi = axutil_hash_next(env, hi)) 
                       {
                           axutil_hash_this(hi, NULL, NULL, &val);
                           AXIS2_FREE(env->allocator, val);
                       }
                       axutil_hash_free(namespaces, env);
                   }
                

            return parent;
        }


        

            /**
             * Getter for EncryptedData by  Property Number 1
             */
            adb_EncryptedDataType_t* AXIS2_CALL
            adb_EncryptedData_get_property1(
                adb_EncryptedData_t* _EncryptedData,
                const axutil_env_t *env)
            {
                return adb_EncryptedData_get_EncryptedData(_EncryptedData,
                                             env);
            }

            /**
             * getter for EncryptedData.
             */
            adb_EncryptedDataType_t* AXIS2_CALL
            adb_EncryptedData_get_EncryptedData(
                    adb_EncryptedData_t* _EncryptedData,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _EncryptedData, NULL);
                  

                return _EncryptedData->property_EncryptedData;
             }

            /**
             * setter for EncryptedData
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptedData_set_EncryptedData(
                    adb_EncryptedData_t* _EncryptedData,
                    const axutil_env_t *env,
                    adb_EncryptedDataType_t*  arg_EncryptedData)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptedData, AXIS2_FAILURE);
                
                if(_EncryptedData->is_valid_EncryptedData &&
                        arg_EncryptedData == _EncryptedData->property_EncryptedData)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_EncryptedData)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "EncryptedData is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_EncryptedData_reset_EncryptedData(_EncryptedData, env);

                
                if(NULL == arg_EncryptedData)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _EncryptedData->property_EncryptedData = arg_EncryptedData;
                        _EncryptedData->is_valid_EncryptedData = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for EncryptedData
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptedData_reset_EncryptedData(
                   adb_EncryptedData_t* _EncryptedData,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _EncryptedData, AXIS2_FAILURE);
               

               
            
                
                if(_EncryptedData->property_EncryptedData != NULL)
                {
                   
                   adb_EncryptedDataType_free(_EncryptedData->property_EncryptedData, env);
                     _EncryptedData->property_EncryptedData = NULL;
                }
            
                
                
                _EncryptedData->is_valid_EncryptedData = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether EncryptedData is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_EncryptedData_is_EncryptedData_nil(
                   adb_EncryptedData_t* _EncryptedData,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _EncryptedData, AXIS2_TRUE);
               
               return !_EncryptedData->is_valid_EncryptedData;
           }

           /**
            * Set EncryptedData to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptedData_set_EncryptedData_nil(
                   adb_EncryptedData_t* _EncryptedData,
                   const axutil_env_t *env)
           {
               return adb_EncryptedData_reset_EncryptedData(_EncryptedData, env);
           }

           

