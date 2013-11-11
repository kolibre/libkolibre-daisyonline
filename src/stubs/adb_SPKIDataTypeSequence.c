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
         * adb_SPKIDataTypeSequence.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_SPKIDataTypeSequence.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = SPKIDataTypeSequence
                 * Namespace URI = http://www.w3.org/2000/09/xmldsig#
                 * Namespace Prefix = ns5
                 */
           


        struct adb_SPKIDataTypeSequence
        {
            axis2_char_t *property_TypeName;

            axutil_base64_binary_t* property_SPKISexp;

                
                axis2_bool_t is_valid_SPKISexp;
            axiom_node_t* property_extraElement;

                
                axis2_bool_t is_valid_extraElement;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_SPKIDataTypeSequence_set_SPKISexp_nil(
                        adb_SPKIDataTypeSequence_t* _SPKIDataTypeSequence,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_SPKIDataTypeSequence_set_extraElement_nil(
                        adb_SPKIDataTypeSequence_t* _SPKIDataTypeSequence,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_SPKIDataTypeSequence_t* AXIS2_CALL
        adb_SPKIDataTypeSequence_create(
            const axutil_env_t *env)
        {
            adb_SPKIDataTypeSequence_t *_SPKIDataTypeSequence = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _SPKIDataTypeSequence = (adb_SPKIDataTypeSequence_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_SPKIDataTypeSequence_t));

            if(NULL == _SPKIDataTypeSequence)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_SPKIDataTypeSequence, 0, sizeof(adb_SPKIDataTypeSequence_t));

            _SPKIDataTypeSequence->property_TypeName = axutil_strdup(env, "adb_SPKIDataTypeSequence");
            _SPKIDataTypeSequence->property_SPKISexp  = NULL;
                  _SPKIDataTypeSequence->is_valid_SPKISexp  = AXIS2_FALSE;
            _SPKIDataTypeSequence->is_valid_extraElement  = AXIS2_FALSE;
            

            return _SPKIDataTypeSequence;
        }

        adb_SPKIDataTypeSequence_t* AXIS2_CALL
        adb_SPKIDataTypeSequence_create_with_values(
            const axutil_env_t *env,
                axutil_base64_binary_t* _SPKISexp,
                axiom_node_t* _extraElement)
        {
            adb_SPKIDataTypeSequence_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_SPKIDataTypeSequence_create(env);

            
              status = adb_SPKIDataTypeSequence_set_SPKISexp(
                                     adb_obj,
                                     env,
                                     _SPKISexp);
              if(status == AXIS2_FAILURE) {
                  adb_SPKIDataTypeSequence_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_SPKIDataTypeSequence_set_extraElement(
                                     adb_obj,
                                     env,
                                     _extraElement);
              if(status == AXIS2_FAILURE) {
                  adb_SPKIDataTypeSequence_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axutil_base64_binary_t* AXIS2_CALL
                adb_SPKIDataTypeSequence_free_popping_value(
                        adb_SPKIDataTypeSequence_t* _SPKIDataTypeSequence,
                        const axutil_env_t *env)
                {
                    axutil_base64_binary_t* value;

                    
                    
                    value = _SPKIDataTypeSequence->property_SPKISexp;

                    _SPKIDataTypeSequence->property_SPKISexp = (axutil_base64_binary_t*)NULL;
                    adb_SPKIDataTypeSequence_free(_SPKIDataTypeSequence, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_SPKIDataTypeSequence_free(
                adb_SPKIDataTypeSequence_t* _SPKIDataTypeSequence,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _SPKIDataTypeSequence,
                env,
                "adb_SPKIDataTypeSequence");
            
        }

        axis2_status_t AXIS2_CALL
        adb_SPKIDataTypeSequence_free_obj(
                adb_SPKIDataTypeSequence_t* _SPKIDataTypeSequence,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _SPKIDataTypeSequence, AXIS2_FAILURE);

            if (_SPKIDataTypeSequence->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _SPKIDataTypeSequence->property_TypeName);
            }

            adb_SPKIDataTypeSequence_reset_SPKISexp(_SPKIDataTypeSequence, env);
            adb_SPKIDataTypeSequence_reset_extraElement(_SPKIDataTypeSequence, env);
            

            if(_SPKIDataTypeSequence)
            {
                AXIS2_FREE(env->allocator, _SPKIDataTypeSequence);
                _SPKIDataTypeSequence = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_SPKIDataTypeSequence_deserialize(
                adb_SPKIDataTypeSequence_t* _SPKIDataTypeSequence,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _SPKIDataTypeSequence,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_SPKIDataTypeSequence");
            
        }

        axis2_status_t AXIS2_CALL
        adb_SPKIDataTypeSequence_deserialize_obj(
                adb_SPKIDataTypeSequence_t* _SPKIDataTypeSequence,
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
            AXIS2_PARAM_CHECK(env->error, _SPKIDataTypeSequence, AXIS2_FAILURE);

            
                         first_node = parent;
                    

                     
                     /*
                      * building SPKISexp element
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
                                   
                                 element_qname = axutil_qname_create(env, "SPKISexp", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

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
                                          element = (void*)axutil_base64_binary_create(env);
                                          status = axutil_base64_binary_set_encoded_binary((axutil_base64_binary_t*)element, env,
                                                                          text_value);
                                          if(AXIS2_FAILURE ==  status)
                                          {
                                              if(element != NULL)
                                              {
                                                 axutil_base64_binary_free((axutil_base64_binary_t*)element, env);
                                              }
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element SPKISexp ");
                                          }
                                          else
                                          {
                                            status = adb_SPKIDataTypeSequence_set_SPKISexp(_SPKIDataTypeSequence, env,
                                                                       (axutil_base64_binary_t*)element);
                                          }
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element SPKISexp");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for SPKISexp ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element SPKISexp missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building extraElement element
                      */
                     
                     
                     
                                    /*
                                     * because elements are ordered this works fine
                                     */
                                  
                                   
                                   if(current_node != NULL && is_early_node_valid)
                                   {
                                       current_node = axiom_node_get_next_sibling(current_node, env);
                                       
                                       
                                   }
                                   is_early_node_valid = AXIS2_FALSE;
                                 

                           if ( 
                                (current_node ))
                           {
                              if( current_node )
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = NULL; /* just to avoid warning */
                                      
                                        {
                                          axiom_node_t *current_property_node = current_node;
                                          current_node = axiom_node_get_next_sibling(current_node, env);
                                          axiom_node_detach(current_property_node, env);
                                          status = adb_SPKIDataTypeSequence_set_extraElement(_SPKIDataTypeSequence, env,
                                                                          current_property_node);
                                        }
                                        
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for extraElement ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                *dp_parent = current_node;
                *dp_is_early_node_valid = is_early_node_valid;
            
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_SPKIDataTypeSequence_is_particle()
          {
            
                 return AXIS2_TRUE;
              
          }


          void AXIS2_CALL
          adb_SPKIDataTypeSequence_declare_parent_namespaces(
                    adb_SPKIDataTypeSequence_t* _SPKIDataTypeSequence,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_SPKIDataTypeSequence_serialize(
                adb_SPKIDataTypeSequence_t* _SPKIDataTypeSequence,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_SPKIDataTypeSequence == NULL)
            {
                return adb_SPKIDataTypeSequence_serialize_obj(
                    _SPKIDataTypeSequence, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _SPKIDataTypeSequence, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_SPKIDataTypeSequence");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_SPKIDataTypeSequence_serialize_obj(
                adb_SPKIDataTypeSequence_t* _SPKIDataTypeSequence,
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
            
                    axis2_char_t *text_value_1;
                    axis2_char_t *text_value_1_temp;
                    
                    axis2_char_t *text_value_2;
                    axis2_char_t *text_value_2_temp;
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _SPKIDataTypeSequence, NULL);
            
            
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
                      

                   if (!_SPKIDataTypeSequence->is_valid_SPKISexp)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property SPKISexp");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("SPKISexp"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("SPKISexp")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing SPKISexp element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sSPKISexp>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sSPKISexp>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                          text_value_1 =axutil_base64_binary_get_encoded_binary(_SPKIDataTypeSequence->property_SPKISexp, env);
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       p_prefix = NULL;
                      

                   if (!_SPKIDataTypeSequence->is_valid_extraElement)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("extraElement"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("extraElement")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing extraElement element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sextraElement>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sextraElement>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                                text_value_2 = axiom_node_to_string(_SPKIDataTypeSequence->property_extraElement, env);
                                
                                axutil_stream_write(stream, env, text_value_2, axutil_strlen(text_value_2));
                                
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 

            return parent;
        }


        

            /**
             * Getter for SPKISexp by  Property Number 1
             */
            axutil_base64_binary_t* AXIS2_CALL
            adb_SPKIDataTypeSequence_get_property1(
                adb_SPKIDataTypeSequence_t* _SPKIDataTypeSequence,
                const axutil_env_t *env)
            {
                return adb_SPKIDataTypeSequence_get_SPKISexp(_SPKIDataTypeSequence,
                                             env);
            }

            /**
             * getter for SPKISexp.
             */
            axutil_base64_binary_t* AXIS2_CALL
            adb_SPKIDataTypeSequence_get_SPKISexp(
                    adb_SPKIDataTypeSequence_t* _SPKIDataTypeSequence,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _SPKIDataTypeSequence, NULL);
                  

                return _SPKIDataTypeSequence->property_SPKISexp;
             }

            /**
             * setter for SPKISexp
             */
            axis2_status_t AXIS2_CALL
            adb_SPKIDataTypeSequence_set_SPKISexp(
                    adb_SPKIDataTypeSequence_t* _SPKIDataTypeSequence,
                    const axutil_env_t *env,
                    axutil_base64_binary_t*  arg_SPKISexp)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _SPKIDataTypeSequence, AXIS2_FAILURE);
                
                if(_SPKIDataTypeSequence->is_valid_SPKISexp &&
                        arg_SPKISexp == _SPKIDataTypeSequence->property_SPKISexp)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_SPKISexp)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "SPKISexp is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_SPKIDataTypeSequence_reset_SPKISexp(_SPKIDataTypeSequence, env);

                
                if(NULL == arg_SPKISexp)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _SPKIDataTypeSequence->property_SPKISexp = arg_SPKISexp;
                        _SPKIDataTypeSequence->is_valid_SPKISexp = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for SPKISexp
            */
           axis2_status_t AXIS2_CALL
           adb_SPKIDataTypeSequence_reset_SPKISexp(
                   adb_SPKIDataTypeSequence_t* _SPKIDataTypeSequence,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _SPKIDataTypeSequence, AXIS2_FAILURE);
               

               
            
                
                if(_SPKIDataTypeSequence->property_SPKISexp != NULL)
                {
                   
                   
                      axutil_base64_binary_free (_SPKIDataTypeSequence->property_SPKISexp, env);
                     _SPKIDataTypeSequence->property_SPKISexp = NULL;
                }
            
                
                
                _SPKIDataTypeSequence->is_valid_SPKISexp = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether SPKISexp is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_SPKIDataTypeSequence_is_SPKISexp_nil(
                   adb_SPKIDataTypeSequence_t* _SPKIDataTypeSequence,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _SPKIDataTypeSequence, AXIS2_TRUE);
               
               return !_SPKIDataTypeSequence->is_valid_SPKISexp;
           }

           /**
            * Set SPKISexp to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_SPKIDataTypeSequence_set_SPKISexp_nil(
                   adb_SPKIDataTypeSequence_t* _SPKIDataTypeSequence,
                   const axutil_env_t *env)
           {
               return adb_SPKIDataTypeSequence_reset_SPKISexp(_SPKIDataTypeSequence, env);
           }

           

            /**
             * Getter for extraElement by  Property Number 2
             */
            axiom_node_t* AXIS2_CALL
            adb_SPKIDataTypeSequence_get_property2(
                adb_SPKIDataTypeSequence_t* _SPKIDataTypeSequence,
                const axutil_env_t *env)
            {
                return adb_SPKIDataTypeSequence_get_extraElement(_SPKIDataTypeSequence,
                                             env);
            }

            /**
             * getter for extraElement.
             */
            axiom_node_t* AXIS2_CALL
            adb_SPKIDataTypeSequence_get_extraElement(
                    adb_SPKIDataTypeSequence_t* _SPKIDataTypeSequence,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _SPKIDataTypeSequence, NULL);
                  

                return _SPKIDataTypeSequence->property_extraElement;
             }

            /**
             * setter for extraElement
             */
            axis2_status_t AXIS2_CALL
            adb_SPKIDataTypeSequence_set_extraElement(
                    adb_SPKIDataTypeSequence_t* _SPKIDataTypeSequence,
                    const axutil_env_t *env,
                    axiom_node_t*  arg_extraElement)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _SPKIDataTypeSequence, AXIS2_FAILURE);
                
                if(_SPKIDataTypeSequence->is_valid_extraElement &&
                        arg_extraElement == _SPKIDataTypeSequence->property_extraElement)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_SPKIDataTypeSequence_reset_extraElement(_SPKIDataTypeSequence, env);

                
                if(NULL == arg_extraElement)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _SPKIDataTypeSequence->property_extraElement = arg_extraElement;
                        _SPKIDataTypeSequence->is_valid_extraElement = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for extraElement
            */
           axis2_status_t AXIS2_CALL
           adb_SPKIDataTypeSequence_reset_extraElement(
                   adb_SPKIDataTypeSequence_t* _SPKIDataTypeSequence,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _SPKIDataTypeSequence, AXIS2_FAILURE);
               

               _SPKIDataTypeSequence->is_valid_extraElement = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether extraElement is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_SPKIDataTypeSequence_is_extraElement_nil(
                   adb_SPKIDataTypeSequence_t* _SPKIDataTypeSequence,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _SPKIDataTypeSequence, AXIS2_TRUE);
               
               return !_SPKIDataTypeSequence->is_valid_extraElement;
           }

           /**
            * Set extraElement to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_SPKIDataTypeSequence_set_extraElement_nil(
                   adb_SPKIDataTypeSequence_t* _SPKIDataTypeSequence,
                   const axutil_env_t *env)
           {
               return adb_SPKIDataTypeSequence_reset_extraElement(_SPKIDataTypeSequence, env);
           }

           

