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
         * adb_RSAKeyValueType.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_RSAKeyValueType.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = RSAKeyValueType
                 * Namespace URI = http://www.w3.org/2000/09/xmldsig#
                 * Namespace Prefix = ns5
                 */
           


        struct adb_RSAKeyValueType
        {
            axis2_char_t *property_TypeName;

            adb_CryptoBinary_t* property_Modulus;

                
                axis2_bool_t is_valid_Modulus;
            adb_CryptoBinary_t* property_Exponent;

                
                axis2_bool_t is_valid_Exponent;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_RSAKeyValueType_set_Modulus_nil(
                        adb_RSAKeyValueType_t* _RSAKeyValueType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_RSAKeyValueType_set_Exponent_nil(
                        adb_RSAKeyValueType_t* _RSAKeyValueType,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_RSAKeyValueType_t* AXIS2_CALL
        adb_RSAKeyValueType_create(
            const axutil_env_t *env)
        {
            adb_RSAKeyValueType_t *_RSAKeyValueType = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _RSAKeyValueType = (adb_RSAKeyValueType_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_RSAKeyValueType_t));

            if(NULL == _RSAKeyValueType)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_RSAKeyValueType, 0, sizeof(adb_RSAKeyValueType_t));

            _RSAKeyValueType->property_TypeName = axutil_strdup(env, "adb_RSAKeyValueType");
            _RSAKeyValueType->property_Modulus  = NULL;
                  _RSAKeyValueType->is_valid_Modulus  = AXIS2_FALSE;
            _RSAKeyValueType->property_Exponent  = NULL;
                  _RSAKeyValueType->is_valid_Exponent  = AXIS2_FALSE;
            

            return _RSAKeyValueType;
        }

        adb_RSAKeyValueType_t* AXIS2_CALL
        adb_RSAKeyValueType_create_with_values(
            const axutil_env_t *env,
                adb_CryptoBinary_t* _Modulus,
                adb_CryptoBinary_t* _Exponent)
        {
            adb_RSAKeyValueType_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_RSAKeyValueType_create(env);

            
              status = adb_RSAKeyValueType_set_Modulus(
                                     adb_obj,
                                     env,
                                     _Modulus);
              if(status == AXIS2_FAILURE) {
                  adb_RSAKeyValueType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_RSAKeyValueType_set_Exponent(
                                     adb_obj,
                                     env,
                                     _Exponent);
              if(status == AXIS2_FAILURE) {
                  adb_RSAKeyValueType_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        adb_CryptoBinary_t* AXIS2_CALL
                adb_RSAKeyValueType_free_popping_value(
                        adb_RSAKeyValueType_t* _RSAKeyValueType,
                        const axutil_env_t *env)
                {
                    adb_CryptoBinary_t* value;

                    
                    
                    value = _RSAKeyValueType->property_Modulus;

                    _RSAKeyValueType->property_Modulus = (adb_CryptoBinary_t*)NULL;
                    adb_RSAKeyValueType_free(_RSAKeyValueType, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_RSAKeyValueType_free(
                adb_RSAKeyValueType_t* _RSAKeyValueType,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _RSAKeyValueType,
                env,
                "adb_RSAKeyValueType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_RSAKeyValueType_free_obj(
                adb_RSAKeyValueType_t* _RSAKeyValueType,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _RSAKeyValueType, AXIS2_FAILURE);

            if (_RSAKeyValueType->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _RSAKeyValueType->property_TypeName);
            }

            adb_RSAKeyValueType_reset_Modulus(_RSAKeyValueType, env);
            adb_RSAKeyValueType_reset_Exponent(_RSAKeyValueType, env);
            

            if(_RSAKeyValueType)
            {
                AXIS2_FREE(env->allocator, _RSAKeyValueType);
                _RSAKeyValueType = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_RSAKeyValueType_deserialize(
                adb_RSAKeyValueType_t* _RSAKeyValueType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _RSAKeyValueType,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_RSAKeyValueType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_RSAKeyValueType_deserialize_obj(
                adb_RSAKeyValueType_t* _RSAKeyValueType,
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
            AXIS2_PARAM_CHECK(env->error, _RSAKeyValueType, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for RSAKeyValueType : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    

                     
                     /*
                      * building Modulus element
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
                                   
                                 element_qname = axutil_qname_create(env, "Modulus", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

                           if (adb_CryptoBinary_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_CryptoBinary");

                                      status =  adb_CryptoBinary_deserialize((adb_CryptoBinary_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element Modulus");
                                      }
                                      else
                                      {
                                          status = adb_RSAKeyValueType_set_Modulus(_RSAKeyValueType, env,
                                                                   (adb_CryptoBinary_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for Modulus ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element Modulus missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building Exponent element
                      */
                     
                     
                     
                                    /*
                                     * because elements are ordered this works fine
                                     */
                                  
                                   
                                   if(current_node != NULL && is_early_node_valid)
                                   {
                                       current_node = axiom_node_get_next_sibling(current_node, env);
                                       
                                       
                                        while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                        {
                                            current_node = axiom_node_get_next_sibling(current_node, env);
                                        }
                                        if(current_node != NULL)
                                        {
                                            current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                            qname = axiom_element_get_qname(current_element, env, current_node);
                                        }
                                       
                                   }
                                   is_early_node_valid = AXIS2_FALSE;
                                 
                                 element_qname = axutil_qname_create(env, "Exponent", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

                           if (adb_CryptoBinary_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_CryptoBinary");

                                      status =  adb_CryptoBinary_deserialize((adb_CryptoBinary_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element Exponent");
                                      }
                                      else
                                      {
                                          status = adb_RSAKeyValueType_set_Exponent(_RSAKeyValueType, env,
                                                                   (adb_CryptoBinary_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for Exponent ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element Exponent missing");
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
          adb_RSAKeyValueType_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_RSAKeyValueType_declare_parent_namespaces(
                    adb_RSAKeyValueType_t* _RSAKeyValueType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_RSAKeyValueType_serialize(
                adb_RSAKeyValueType_t* _RSAKeyValueType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_RSAKeyValueType == NULL)
            {
                return adb_RSAKeyValueType_serialize_obj(
                    _RSAKeyValueType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _RSAKeyValueType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_RSAKeyValueType");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_RSAKeyValueType_serialize_obj(
                adb_RSAKeyValueType_t* _RSAKeyValueType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
             axis2_char_t *string_to_stream;
            
         
         axiom_node_t* current_node = NULL;
         int tag_closed = 0;
         axis2_char_t* xsi_prefix = NULL;
         axiom_namespace_t* xsi_ns = NULL;
         axiom_attribute_t* xsi_type_attri = NULL;
         
         axis2_char_t* type_attrib = NULL;
         
                axiom_namespace_t *ns1 = NULL;

                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                axis2_char_t *p_prefix = NULL;
                axis2_bool_t ns_already_defined;
            
                    axis2_char_t text_value_1[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_2[ADB_DEFAULT_DIGIT_LIMIT];
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _RSAKeyValueType, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
              string_to_stream = ">"; 
              axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
              tag_closed = 1;
            
            }
        
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.w3.org/2000/09/xmldsig#",
                                            p_prefix));
                       }
                      

                   if (!_RSAKeyValueType->is_valid_Modulus)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property Modulus");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("Modulus"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("Modulus")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing Modulus element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sModulus",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sModulus>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_CryptoBinary_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_CryptoBinary_serialize(_RSAKeyValueType->property_Modulus, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_CryptoBinary_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_CryptoBinary_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.w3.org/2000/09/xmldsig#",
                                            p_prefix));
                       }
                      

                   if (!_RSAKeyValueType->is_valid_Exponent)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property Exponent");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("Exponent"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("Exponent")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing Exponent element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sExponent",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sExponent>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_CryptoBinary_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_CryptoBinary_serialize(_RSAKeyValueType->property_Exponent, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_CryptoBinary_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_CryptoBinary_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 

            return parent;
        }


        

            /**
             * Getter for Modulus by  Property Number 1
             */
            adb_CryptoBinary_t* AXIS2_CALL
            adb_RSAKeyValueType_get_property1(
                adb_RSAKeyValueType_t* _RSAKeyValueType,
                const axutil_env_t *env)
            {
                return adb_RSAKeyValueType_get_Modulus(_RSAKeyValueType,
                                             env);
            }

            /**
             * getter for Modulus.
             */
            adb_CryptoBinary_t* AXIS2_CALL
            adb_RSAKeyValueType_get_Modulus(
                    adb_RSAKeyValueType_t* _RSAKeyValueType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _RSAKeyValueType, NULL);
                  

                return _RSAKeyValueType->property_Modulus;
             }

            /**
             * setter for Modulus
             */
            axis2_status_t AXIS2_CALL
            adb_RSAKeyValueType_set_Modulus(
                    adb_RSAKeyValueType_t* _RSAKeyValueType,
                    const axutil_env_t *env,
                    adb_CryptoBinary_t*  arg_Modulus)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _RSAKeyValueType, AXIS2_FAILURE);
                
                if(_RSAKeyValueType->is_valid_Modulus &&
                        arg_Modulus == _RSAKeyValueType->property_Modulus)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_Modulus)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Modulus is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_RSAKeyValueType_reset_Modulus(_RSAKeyValueType, env);

                
                if(NULL == arg_Modulus)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _RSAKeyValueType->property_Modulus = arg_Modulus;
                        _RSAKeyValueType->is_valid_Modulus = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for Modulus
            */
           axis2_status_t AXIS2_CALL
           adb_RSAKeyValueType_reset_Modulus(
                   adb_RSAKeyValueType_t* _RSAKeyValueType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _RSAKeyValueType, AXIS2_FAILURE);
               

               
            
                
                if(_RSAKeyValueType->property_Modulus != NULL)
                {
                   
                   adb_CryptoBinary_free(_RSAKeyValueType->property_Modulus, env);
                     _RSAKeyValueType->property_Modulus = NULL;
                }
            
                
                
                _RSAKeyValueType->is_valid_Modulus = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether Modulus is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_RSAKeyValueType_is_Modulus_nil(
                   adb_RSAKeyValueType_t* _RSAKeyValueType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _RSAKeyValueType, AXIS2_TRUE);
               
               return !_RSAKeyValueType->is_valid_Modulus;
           }

           /**
            * Set Modulus to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_RSAKeyValueType_set_Modulus_nil(
                   adb_RSAKeyValueType_t* _RSAKeyValueType,
                   const axutil_env_t *env)
           {
               return adb_RSAKeyValueType_reset_Modulus(_RSAKeyValueType, env);
           }

           

            /**
             * Getter for Exponent by  Property Number 2
             */
            adb_CryptoBinary_t* AXIS2_CALL
            adb_RSAKeyValueType_get_property2(
                adb_RSAKeyValueType_t* _RSAKeyValueType,
                const axutil_env_t *env)
            {
                return adb_RSAKeyValueType_get_Exponent(_RSAKeyValueType,
                                             env);
            }

            /**
             * getter for Exponent.
             */
            adb_CryptoBinary_t* AXIS2_CALL
            adb_RSAKeyValueType_get_Exponent(
                    adb_RSAKeyValueType_t* _RSAKeyValueType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _RSAKeyValueType, NULL);
                  

                return _RSAKeyValueType->property_Exponent;
             }

            /**
             * setter for Exponent
             */
            axis2_status_t AXIS2_CALL
            adb_RSAKeyValueType_set_Exponent(
                    adb_RSAKeyValueType_t* _RSAKeyValueType,
                    const axutil_env_t *env,
                    adb_CryptoBinary_t*  arg_Exponent)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _RSAKeyValueType, AXIS2_FAILURE);
                
                if(_RSAKeyValueType->is_valid_Exponent &&
                        arg_Exponent == _RSAKeyValueType->property_Exponent)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_Exponent)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Exponent is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_RSAKeyValueType_reset_Exponent(_RSAKeyValueType, env);

                
                if(NULL == arg_Exponent)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _RSAKeyValueType->property_Exponent = arg_Exponent;
                        _RSAKeyValueType->is_valid_Exponent = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for Exponent
            */
           axis2_status_t AXIS2_CALL
           adb_RSAKeyValueType_reset_Exponent(
                   adb_RSAKeyValueType_t* _RSAKeyValueType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _RSAKeyValueType, AXIS2_FAILURE);
               

               
            
                
                if(_RSAKeyValueType->property_Exponent != NULL)
                {
                   
                   adb_CryptoBinary_free(_RSAKeyValueType->property_Exponent, env);
                     _RSAKeyValueType->property_Exponent = NULL;
                }
            
                
                
                _RSAKeyValueType->is_valid_Exponent = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether Exponent is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_RSAKeyValueType_is_Exponent_nil(
                   adb_RSAKeyValueType_t* _RSAKeyValueType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _RSAKeyValueType, AXIS2_TRUE);
               
               return !_RSAKeyValueType->is_valid_Exponent;
           }

           /**
            * Set Exponent to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_RSAKeyValueType_set_Exponent_nil(
                   adb_RSAKeyValueType_t* _RSAKeyValueType,
                   const axutil_env_t *env)
           {
               return adb_RSAKeyValueType_reset_Exponent(_RSAKeyValueType, env);
           }

           

