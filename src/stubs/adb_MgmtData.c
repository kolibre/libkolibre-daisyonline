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
         * adb_MgmtData.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_MgmtData.h"
        
               /*
                * implmentation of the MgmtData|http://www.w3.org/2000/09/xmldsig# element
                */
           


        struct adb_MgmtData
        {
            axis2_char_t *property_TypeName;

            
                axutil_qname_t* qname;
            axis2_char_t* property_MgmtData;

                
                axis2_bool_t is_valid_MgmtData;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_MgmtData_set_MgmtData_nil(
                        adb_MgmtData_t* _MgmtData,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_MgmtData_t* AXIS2_CALL
        adb_MgmtData_create(
            const axutil_env_t *env)
        {
            adb_MgmtData_t *_MgmtData = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _MgmtData = (adb_MgmtData_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_MgmtData_t));

            if(NULL == _MgmtData)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_MgmtData, 0, sizeof(adb_MgmtData_t));

            _MgmtData->property_TypeName = axutil_strdup(env, "adb_MgmtData");
            _MgmtData->property_MgmtData  = NULL;
                  _MgmtData->is_valid_MgmtData  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "MgmtData",
                        "http://www.w3.org/2000/09/xmldsig#",
                        NULL);
                _MgmtData->qname = qname;
            

            return _MgmtData;
        }

        adb_MgmtData_t* AXIS2_CALL
        adb_MgmtData_create_with_values(
            const axutil_env_t *env,
                axis2_char_t* _MgmtData)
        {
            adb_MgmtData_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_MgmtData_create(env);

            
              status = adb_MgmtData_set_MgmtData(
                                     adb_obj,
                                     env,
                                     _MgmtData);
              if(status == AXIS2_FAILURE) {
                  adb_MgmtData_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axis2_char_t* AXIS2_CALL
                adb_MgmtData_free_popping_value(
                        adb_MgmtData_t* _MgmtData,
                        const axutil_env_t *env)
                {
                    axis2_char_t* value;

                    
                    
                    value = _MgmtData->property_MgmtData;

                    _MgmtData->property_MgmtData = (axis2_char_t*)NULL;
                    adb_MgmtData_free(_MgmtData, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_MgmtData_free(
                adb_MgmtData_t* _MgmtData,
                const axutil_env_t *env)
        {
            
            
            return adb_MgmtData_free_obj(
                _MgmtData,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_MgmtData_free_obj(
                adb_MgmtData_t* _MgmtData,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _MgmtData, AXIS2_FAILURE);

            if (_MgmtData->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _MgmtData->property_TypeName);
            }

            adb_MgmtData_reset_MgmtData(_MgmtData, env);
            
              if(_MgmtData->qname)
              {
                  axutil_qname_free (_MgmtData->qname, env);
                  _MgmtData->qname = NULL;
              }
            

            if(_MgmtData)
            {
                AXIS2_FREE(env->allocator, _MgmtData);
                _MgmtData = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_MgmtData_deserialize(
                adb_MgmtData_t* _MgmtData,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_MgmtData_deserialize_obj(
                _MgmtData,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_MgmtData_deserialize_obj(
                adb_MgmtData_t* _MgmtData,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
           
             const axis2_char_t* text_value = NULL;
             axutil_qname_t *qname = NULL;
          
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _MgmtData, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for MgmtData : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              

                    current_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                    qname = axiom_element_get_qname(current_element, env, parent);
                    if (axutil_qname_equals(qname, env, _MgmtData-> qname))
                    {
                        
                          first_node = parent;
                          
                    }
                    else
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                              "Failed in building adb object for MgmtData : "
                              "Expected %s but returned %s",
                              axutil_qname_to_string(_MgmtData-> qname, env),
                              axutil_qname_to_string(qname, env));
                        
                        return AXIS2_FAILURE;
                    }
                    

                     
                     /*
                      * building MgmtData element
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
                                   
                                 element_qname = axutil_qname_create(env, "MgmtData", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_MgmtData_set_MgmtData(_MgmtData, env,
                                                               text_value);
                                      }
                                      
                                      else
                                      {
                                            /*
                                             * axis2_qname_t *qname = NULL;
                                             * axiom_attribute_t *the_attri = NULL;
                                             * 
                                             * qname = axutil_qname_create(env, "nil", "http://www.w3.org/2001/XMLSchema-instance", "xsi");
                                             * the_attri = axiom_element_get_attribute(current_element, env, qname);
                                             */
                                            /* currently thereis a bug in the axiom_element_get_attribute, so we have to go to this bad method */

                                            axiom_attribute_t *the_attri = NULL;
                                            axis2_char_t *attrib_text = NULL;
                                            axutil_hash_t *attribute_hash = NULL;

                                            attribute_hash = axiom_element_get_all_attributes(current_element, env);

                                            attrib_text = NULL;
                                            if(attribute_hash)
                                            {
                                                 axutil_hash_index_t *hi;
                                                 void *val;
                                                 const void *key;
                                        
                                                 for (hi = axutil_hash_first(attribute_hash, env); hi; hi = axutil_hash_next(env, hi)) 
                                                 {
                                                     axutil_hash_this(hi, &key, NULL, &val);
                                                     
                                                     if(strstr((axis2_char_t*)key, "nil|http://www.w3.org/2001/XMLSchema-instance"))
                                                     {
                                                         the_attri = (axiom_attribute_t*)val;
                                                         break;
                                                     }
                                                 }
                                            }

                                            if(the_attri)
                                            {
                                                attrib_text = axiom_attribute_get_value(the_attri, env);
                                            }
                                            else
                                            {
                                                /* this is hoping that attribute is stored in "http://www.w3.org/2001/XMLSchema-instance", this happnes when name is in default namespace */
                                                attrib_text = axiom_element_get_attribute_value_by_name(current_element, env, "nil");
                                            }

                                            if(attrib_text && 0 == axutil_strcmp(attrib_text, "1"))
                                            {
                                                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element MgmtData");
                                                status = AXIS2_FAILURE;
                                            }
                                            else
                                            {
                                                /* after all, we found this is a empty string */
                                                status = adb_MgmtData_set_MgmtData(_MgmtData, env,
                                                                   "");
                                            }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for MgmtData ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element MgmtData missing");
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
          adb_MgmtData_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_MgmtData_declare_parent_namespaces(
                    adb_MgmtData_t* _MgmtData,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_MgmtData_serialize(
                adb_MgmtData_t* _MgmtData,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_MgmtData_serialize_obj(
                    _MgmtData, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_MgmtData_serialize_obj(
                adb_MgmtData_t* _MgmtData,
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
            
                    axis2_char_t *text_value_1;
                    axis2_char_t *text_value_1_temp;
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

             
                int next_ns_index_value = 0;
            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _MgmtData, NULL);
            
             
                    namespaces = axutil_hash_make(env);
                    next_ns_index = &next_ns_index_value;
                     
                           ns1 = axiom_namespace_create (env,
                                             "http://www.w3.org/2000/09/xmldsig#",
                                             "n"); 
                           axutil_hash_set(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING, axutil_strdup(env, "n"));
                       
                     
                    parent_element = axiom_element_create (env, NULL, "MgmtData", ns1 , &parent);
                    
                    
                    axiom_element_set_namespace(parent_element, env, ns1, parent);


            
                    data_source = axiom_data_source_create(env, parent, &current_node);
                    stream = axiom_data_source_get_stream(data_source, env);
                  
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.w3.org/2000/09/xmldsig#",
                                            p_prefix));
                       }
                      

                   if (!_MgmtData->is_valid_MgmtData)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property MgmtData");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("MgmtData"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("MgmtData")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing MgmtData element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sMgmtData>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sMgmtData>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_1 = _MgmtData->property_MgmtData;
                           
                            
                           text_value_1_temp = axutil_xml_quote_string(env, text_value_1, AXIS2_TRUE);
                           if (text_value_1_temp)
                           {
                               axutil_stream_write(stream, env, text_value_1_temp, axutil_strlen(text_value_1_temp));
                               AXIS2_FREE(env->allocator, text_value_1_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                           }
                           
                     
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
             * Getter for MgmtData by  Property Number 1
             */
            axis2_char_t* AXIS2_CALL
            adb_MgmtData_get_property1(
                adb_MgmtData_t* _MgmtData,
                const axutil_env_t *env)
            {
                return adb_MgmtData_get_MgmtData(_MgmtData,
                                             env);
            }

            /**
             * getter for MgmtData.
             */
            axis2_char_t* AXIS2_CALL
            adb_MgmtData_get_MgmtData(
                    adb_MgmtData_t* _MgmtData,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _MgmtData, NULL);
                  

                return _MgmtData->property_MgmtData;
             }

            /**
             * setter for MgmtData
             */
            axis2_status_t AXIS2_CALL
            adb_MgmtData_set_MgmtData(
                    adb_MgmtData_t* _MgmtData,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_MgmtData)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _MgmtData, AXIS2_FAILURE);
                
                if(_MgmtData->is_valid_MgmtData &&
                        arg_MgmtData == _MgmtData->property_MgmtData)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_MgmtData)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "MgmtData is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_MgmtData_reset_MgmtData(_MgmtData, env);

                
                if(NULL == arg_MgmtData)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _MgmtData->property_MgmtData = (axis2_char_t *)axutil_strdup(env, arg_MgmtData);
                        if(NULL == _MgmtData->property_MgmtData)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for MgmtData");
                            return AXIS2_FAILURE;
                        }
                        _MgmtData->is_valid_MgmtData = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for MgmtData
            */
           axis2_status_t AXIS2_CALL
           adb_MgmtData_reset_MgmtData(
                   adb_MgmtData_t* _MgmtData,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _MgmtData, AXIS2_FAILURE);
               

               
            
                
                if(_MgmtData->property_MgmtData != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _MgmtData->property_MgmtData);
                     _MgmtData->property_MgmtData = NULL;
                }
            
                
                
                _MgmtData->is_valid_MgmtData = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether MgmtData is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_MgmtData_is_MgmtData_nil(
                   adb_MgmtData_t* _MgmtData,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _MgmtData, AXIS2_TRUE);
               
               return !_MgmtData->is_valid_MgmtData;
           }

           /**
            * Set MgmtData to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_MgmtData_set_MgmtData_nil(
                   adb_MgmtData_t* _MgmtData,
                   const axutil_env_t *env)
           {
               return adb_MgmtData_reset_MgmtData(_MgmtData, env);
           }

           

