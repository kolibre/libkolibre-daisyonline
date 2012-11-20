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
         * adb_SignatureProperty.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_SignatureProperty.h"
        
               /*
                * implmentation of the SignatureProperty|http://www.w3.org/2000/09/xmldsig# element
                */
           


        struct adb_SignatureProperty
        {
            axis2_char_t *property_TypeName;

            
                axutil_qname_t* qname;
            adb_SignaturePropertyType_t* property_SignatureProperty;

                
                axis2_bool_t is_valid_SignatureProperty;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_SignatureProperty_set_SignatureProperty_nil(
                        adb_SignatureProperty_t* _SignatureProperty,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_SignatureProperty_t* AXIS2_CALL
        adb_SignatureProperty_create(
            const axutil_env_t *env)
        {
            adb_SignatureProperty_t *_SignatureProperty = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _SignatureProperty = (adb_SignatureProperty_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_SignatureProperty_t));

            if(NULL == _SignatureProperty)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_SignatureProperty, 0, sizeof(adb_SignatureProperty_t));

            _SignatureProperty->property_TypeName = axutil_strdup(env, "adb_SignatureProperty");
            _SignatureProperty->property_SignatureProperty  = NULL;
                  _SignatureProperty->is_valid_SignatureProperty  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "SignatureProperty",
                        "http://www.w3.org/2000/09/xmldsig#",
                        NULL);
                _SignatureProperty->qname = qname;
            

            return _SignatureProperty;
        }

        adb_SignatureProperty_t* AXIS2_CALL
        adb_SignatureProperty_create_with_values(
            const axutil_env_t *env,
                adb_SignaturePropertyType_t* _SignatureProperty)
        {
            adb_SignatureProperty_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_SignatureProperty_create(env);

            
              status = adb_SignatureProperty_set_SignatureProperty(
                                     adb_obj,
                                     env,
                                     _SignatureProperty);
              if(status == AXIS2_FAILURE) {
                  adb_SignatureProperty_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        adb_SignaturePropertyType_t* AXIS2_CALL
                adb_SignatureProperty_free_popping_value(
                        adb_SignatureProperty_t* _SignatureProperty,
                        const axutil_env_t *env)
                {
                    adb_SignaturePropertyType_t* value;

                    
                    
                    value = _SignatureProperty->property_SignatureProperty;

                    _SignatureProperty->property_SignatureProperty = (adb_SignaturePropertyType_t*)NULL;
                    adb_SignatureProperty_free(_SignatureProperty, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_SignatureProperty_free(
                adb_SignatureProperty_t* _SignatureProperty,
                const axutil_env_t *env)
        {
            
            
            return adb_SignatureProperty_free_obj(
                _SignatureProperty,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_SignatureProperty_free_obj(
                adb_SignatureProperty_t* _SignatureProperty,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _SignatureProperty, AXIS2_FAILURE);

            if (_SignatureProperty->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _SignatureProperty->property_TypeName);
            }

            adb_SignatureProperty_reset_SignatureProperty(_SignatureProperty, env);
            
              if(_SignatureProperty->qname)
              {
                  axutil_qname_free (_SignatureProperty->qname, env);
                  _SignatureProperty->qname = NULL;
              }
            

            if(_SignatureProperty)
            {
                AXIS2_FREE(env->allocator, _SignatureProperty);
                _SignatureProperty = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_SignatureProperty_deserialize(
                adb_SignatureProperty_t* _SignatureProperty,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_SignatureProperty_deserialize_obj(
                _SignatureProperty,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_SignatureProperty_deserialize_obj(
                adb_SignatureProperty_t* _SignatureProperty,
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
            AXIS2_PARAM_CHECK(env->error, _SignatureProperty, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for SignatureProperty : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              

                    current_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                    qname = axiom_element_get_qname(current_element, env, parent);
                    if (axutil_qname_equals(qname, env, _SignatureProperty-> qname))
                    {
                        
                          first_node = parent;
                          
                    }
                    else
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                              "Failed in building adb object for SignatureProperty : "
                              "Expected %s but returned %s",
                              axutil_qname_to_string(_SignatureProperty-> qname, env),
                              axutil_qname_to_string(qname, env));
                        
                        return AXIS2_FAILURE;
                    }
                    

                     
                     /*
                      * building SignatureProperty element
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
                                   
                                 element_qname = axutil_qname_create(env, "SignatureProperty", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

                           if (adb_SignaturePropertyType_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_SignaturePropertyType");

                                      status =  adb_SignaturePropertyType_deserialize((adb_SignaturePropertyType_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element SignatureProperty");
                                      }
                                      else
                                      {
                                          status = adb_SignatureProperty_set_SignatureProperty(_SignatureProperty, env,
                                                                   (adb_SignaturePropertyType_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for SignatureProperty ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element SignatureProperty missing");
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
          adb_SignatureProperty_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_SignatureProperty_declare_parent_namespaces(
                    adb_SignatureProperty_t* _SignatureProperty,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_SignatureProperty_serialize(
                adb_SignatureProperty_t* _SignatureProperty,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_SignatureProperty_serialize_obj(
                    _SignatureProperty, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_SignatureProperty_serialize_obj(
                adb_SignatureProperty_t* _SignatureProperty,
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
            AXIS2_PARAM_CHECK(env->error, _SignatureProperty, NULL);
            
             
                    namespaces = axutil_hash_make(env);
                    next_ns_index = &next_ns_index_value;
                     
                           ns1 = axiom_namespace_create (env,
                                             "http://www.w3.org/2000/09/xmldsig#",
                                             "n"); 
                           axutil_hash_set(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING, axutil_strdup(env, "n"));
                       
                     
                    parent_element = axiom_element_create (env, NULL, "SignatureProperty", ns1 , &parent);
                    
                    
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
                      

                   if (!_SignatureProperty->is_valid_SignatureProperty)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property SignatureProperty");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("SignatureProperty"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("SignatureProperty")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing SignatureProperty element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sSignatureProperty",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sSignatureProperty>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    adb_SignaturePropertyType_serialize(_SignatureProperty->property_SignatureProperty, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_SignaturePropertyType_is_particle() || AXIS2_TRUE, namespaces, next_ns_index);
                            
                     
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
             * Getter for SignatureProperty by  Property Number 1
             */
            adb_SignaturePropertyType_t* AXIS2_CALL
            adb_SignatureProperty_get_property1(
                adb_SignatureProperty_t* _SignatureProperty,
                const axutil_env_t *env)
            {
                return adb_SignatureProperty_get_SignatureProperty(_SignatureProperty,
                                             env);
            }

            /**
             * getter for SignatureProperty.
             */
            adb_SignaturePropertyType_t* AXIS2_CALL
            adb_SignatureProperty_get_SignatureProperty(
                    adb_SignatureProperty_t* _SignatureProperty,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _SignatureProperty, NULL);
                  

                return _SignatureProperty->property_SignatureProperty;
             }

            /**
             * setter for SignatureProperty
             */
            axis2_status_t AXIS2_CALL
            adb_SignatureProperty_set_SignatureProperty(
                    adb_SignatureProperty_t* _SignatureProperty,
                    const axutil_env_t *env,
                    adb_SignaturePropertyType_t*  arg_SignatureProperty)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _SignatureProperty, AXIS2_FAILURE);
                
                if(_SignatureProperty->is_valid_SignatureProperty &&
                        arg_SignatureProperty == _SignatureProperty->property_SignatureProperty)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_SignatureProperty)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "SignatureProperty is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_SignatureProperty_reset_SignatureProperty(_SignatureProperty, env);

                
                if(NULL == arg_SignatureProperty)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _SignatureProperty->property_SignatureProperty = arg_SignatureProperty;
                        _SignatureProperty->is_valid_SignatureProperty = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for SignatureProperty
            */
           axis2_status_t AXIS2_CALL
           adb_SignatureProperty_reset_SignatureProperty(
                   adb_SignatureProperty_t* _SignatureProperty,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _SignatureProperty, AXIS2_FAILURE);
               

               
            
                
                if(_SignatureProperty->property_SignatureProperty != NULL)
                {
                   
                   adb_SignaturePropertyType_free(_SignatureProperty->property_SignatureProperty, env);
                     _SignatureProperty->property_SignatureProperty = NULL;
                }
            
                
                
                _SignatureProperty->is_valid_SignatureProperty = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether SignatureProperty is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_SignatureProperty_is_SignatureProperty_nil(
                   adb_SignatureProperty_t* _SignatureProperty,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _SignatureProperty, AXIS2_TRUE);
               
               return !_SignatureProperty->is_valid_SignatureProperty;
           }

           /**
            * Set SignatureProperty to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_SignatureProperty_set_SignatureProperty_nil(
                   adb_SignatureProperty_t* _SignatureProperty,
                   const axutil_env_t *env)
           {
               return adb_SignatureProperty_reset_SignatureProperty(_SignatureProperty, env);
           }

           

