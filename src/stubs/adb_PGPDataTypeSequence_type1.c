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
         * adb_PGPDataTypeSequence_type1.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_PGPDataTypeSequence_type1.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = PGPDataTypeSequence_type1
                 * Namespace URI = http://www.w3.org/2000/09/xmldsig#
                 * Namespace Prefix = ns5
                 */
           


        struct adb_PGPDataTypeSequence_type1
        {
            axis2_char_t *property_TypeName;

            axutil_base64_binary_t* property_PGPKeyPacket;

                
                axis2_bool_t is_valid_PGPKeyPacket;
            axutil_array_list_t* property_extraElement;

                
                axis2_bool_t is_valid_extraElement;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_PGPDataTypeSequence_type1_set_PGPKeyPacket_nil(
                        adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
                        const axutil_env_t *env);
            
                 axis2_status_t AXIS2_CALL
                 adb_PGPDataTypeSequence_type1_set_extraElement_nil_at(
                        adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_PGPDataTypeSequence_type1_set_extraElement_nil(
                        adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_PGPDataTypeSequence_type1_t* AXIS2_CALL
        adb_PGPDataTypeSequence_type1_create(
            const axutil_env_t *env)
        {
            adb_PGPDataTypeSequence_type1_t *_PGPDataTypeSequence_type1 = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _PGPDataTypeSequence_type1 = (adb_PGPDataTypeSequence_type1_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_PGPDataTypeSequence_type1_t));

            if(NULL == _PGPDataTypeSequence_type1)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_PGPDataTypeSequence_type1, 0, sizeof(adb_PGPDataTypeSequence_type1_t));

            _PGPDataTypeSequence_type1->property_TypeName = axutil_strdup(env, "adb_PGPDataTypeSequence_type1");
            _PGPDataTypeSequence_type1->property_PGPKeyPacket  = NULL;
                  _PGPDataTypeSequence_type1->is_valid_PGPKeyPacket  = AXIS2_FALSE;
            _PGPDataTypeSequence_type1->is_valid_extraElement  = AXIS2_FALSE;
            

            return _PGPDataTypeSequence_type1;
        }

        adb_PGPDataTypeSequence_type1_t* AXIS2_CALL
        adb_PGPDataTypeSequence_type1_create_with_values(
            const axutil_env_t *env,
                axutil_base64_binary_t* _PGPKeyPacket,
                axutil_array_list_t* _extraElement)
        {
            adb_PGPDataTypeSequence_type1_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_PGPDataTypeSequence_type1_create(env);

            
              status = adb_PGPDataTypeSequence_type1_set_PGPKeyPacket(
                                     adb_obj,
                                     env,
                                     _PGPKeyPacket);
              if(status == AXIS2_FAILURE) {
                  adb_PGPDataTypeSequence_type1_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_PGPDataTypeSequence_type1_set_extraElement(
                                     adb_obj,
                                     env,
                                     _extraElement);
              if(status == AXIS2_FAILURE) {
                  adb_PGPDataTypeSequence_type1_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axutil_base64_binary_t* AXIS2_CALL
                adb_PGPDataTypeSequence_type1_free_popping_value(
                        adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
                        const axutil_env_t *env)
                {
                    axutil_base64_binary_t* value;

                    
                    
                    value = _PGPDataTypeSequence_type1->property_PGPKeyPacket;

                    _PGPDataTypeSequence_type1->property_PGPKeyPacket = (axutil_base64_binary_t*)NULL;
                    adb_PGPDataTypeSequence_type1_free(_PGPDataTypeSequence_type1, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_PGPDataTypeSequence_type1_free(
                adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _PGPDataTypeSequence_type1,
                env,
                "adb_PGPDataTypeSequence_type1");
            
        }

        axis2_status_t AXIS2_CALL
        adb_PGPDataTypeSequence_type1_free_obj(
                adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
                const axutil_env_t *env)
        {
            
                int i = 0;
                int count = 0;
                void *element = NULL;
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _PGPDataTypeSequence_type1, AXIS2_FAILURE);

            if (_PGPDataTypeSequence_type1->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _PGPDataTypeSequence_type1->property_TypeName);
            }

            adb_PGPDataTypeSequence_type1_reset_PGPKeyPacket(_PGPDataTypeSequence_type1, env);
            adb_PGPDataTypeSequence_type1_reset_extraElement(_PGPDataTypeSequence_type1, env);
            

            if(_PGPDataTypeSequence_type1)
            {
                AXIS2_FREE(env->allocator, _PGPDataTypeSequence_type1);
                _PGPDataTypeSequence_type1 = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_PGPDataTypeSequence_type1_deserialize(
                adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _PGPDataTypeSequence_type1,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_PGPDataTypeSequence_type1");
            
        }

        axis2_status_t AXIS2_CALL
        adb_PGPDataTypeSequence_type1_deserialize_obj(
                adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
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
          
               int i = 0;
               axutil_array_list_t *arr_list = NULL;
            
               int sequence_broken = 0;
               axiom_node_t *tmp_node = NULL;
            
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _PGPDataTypeSequence_type1, AXIS2_FAILURE);

            
                         first_node = parent;
                    

                     
                     /*
                      * building PGPKeyPacket element
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
                                   
                                 element_qname = axutil_qname_create(env, "PGPKeyPacket", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

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
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element PGPKeyPacket ");
                                          }
                                          else
                                          {
                                            status = adb_PGPDataTypeSequence_type1_set_PGPKeyPacket(_PGPDataTypeSequence_type1, env,
                                                                       (axutil_base64_binary_t*)element);
                                          }
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element PGPKeyPacket");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for PGPKeyPacket ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element PGPKeyPacket missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                    /*
                     * building extraElement array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building extraElement element
                      */
                     
                     
                     
                            /* 'any' arrays are not handling correctly when there are other elements mixed with the 'any' element. */
                           
                               
                               for (i = 0, sequence_broken = 0, current_node = (is_early_node_valid?axiom_node_get_next_sibling(current_node, env):current_node); !sequence_broken && current_node != NULL;) 
                                             
                               {
                                  if(axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                  {
                                     current_node =axiom_node_get_next_sibling(current_node, env);
                                     is_early_node_valid = AXIS2_FALSE;
                                     continue;
                                  }
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname) || !axutil_strcmp("extraElement", axiom_element_get_localname(current_element, env))))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          text_value = NULL; /* just to avoid warning */
                                          
                                            {
                                              axiom_node_t *current_property_node = current_node;
                                              current_node = axiom_node_get_next_sibling(current_node, env);
                                              axiom_node_detach(current_property_node, env);
                                              axutil_array_list_add_at(arr_list, env, i, (void*)current_property_node);
                                            }
                                            
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for extraElement ");
                                         if(element_qname)
                                         {
                                            axutil_qname_free(element_qname, env);
                                         }
                                         if(arr_list)
                                         {
                                            axutil_array_list_free(arr_list, env);
                                         }
                                         return AXIS2_FAILURE;
                                     }

                                     i ++;
                                    
                               }

                               

                               if(0 == axutil_array_list_size(arr_list,env))
                               {
                                    axutil_array_list_free(arr_list, env);
                               }
                               else
                               {
                                    status = adb_PGPDataTypeSequence_type1_set_extraElement(_PGPDataTypeSequence_type1, env,
                                                                   arr_list);
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
          adb_PGPDataTypeSequence_type1_is_particle()
          {
            
                 return AXIS2_TRUE;
              
          }


          void AXIS2_CALL
          adb_PGPDataTypeSequence_type1_declare_parent_namespaces(
                    adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_PGPDataTypeSequence_type1_serialize(
                adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_PGPDataTypeSequence_type1 == NULL)
            {
                return adb_PGPDataTypeSequence_type1_serialize_obj(
                    _PGPDataTypeSequence_type1, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _PGPDataTypeSequence_type1, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_PGPDataTypeSequence_type1");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_PGPDataTypeSequence_type1_serialize_obj(
                adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
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
            
               int i = 0;
               int count = 0;
               void *element = NULL;
             
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
            AXIS2_PARAM_CHECK(env->error, _PGPDataTypeSequence_type1, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
              
 
              if(!(xsi_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING)))
              {
                  /* it is better to stick with the standard prefix */
                  xsi_prefix = (axis2_char_t*)axutil_strdup(env, "xsi");
                  
                  axutil_hash_set(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING, xsi_prefix);

                  if(parent_element)
                  {
                        axiom_namespace_t *element_ns = NULL;
                        element_ns = axiom_namespace_create(env, "http://www.w3.org/2001/XMLSchema-instance",
                                                            xsi_prefix);
                        axiom_element_declare_namespace_assume_param_ownership(parent_element, env, element_ns);
                        if(element_ns)
                        {
                            axiom_namespace_free(element_ns, env);
                        }
                  }
              }
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"PGPDataTypeSequence_type1\"", NULL);
              axutil_stream_write(stream, env, type_attrib, axutil_strlen(type_attrib));

              AXIS2_FREE(env->allocator, type_attrib);
                
              string_to_stream = ">"; 
              axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
              tag_closed = 1;
            
            }
            else {
              /* if the parent tag closed we would be able to declare the type directly on the parent element */ 
              if(!(xsi_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING)))
              {
                  /* it is better to stick with the standard prefix */
                  xsi_prefix = (axis2_char_t*)axutil_strdup(env, "xsi");
                  
                  axutil_hash_set(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING, xsi_prefix);

                  if(parent_element)
                  {
                        axiom_namespace_t *element_ns = NULL;
                        element_ns = axiom_namespace_create(env, "http://www.w3.org/2001/XMLSchema-instance",
                                                            xsi_prefix);
                        axiom_element_declare_namespace_assume_param_ownership(parent_element, env, element_ns);
                        if(element_ns)
                        {
                            axiom_namespace_free(element_ns, env);
                        }
                  }
              }
            }
            xsi_ns = axiom_namespace_create (env,
                                 "http://www.w3.org/2000/09/xmldsig#",
                                 xsi_prefix);
            xsi_type_attri = axiom_attribute_create (env, "type", "PGPDataTypeSequence_type1", xsi_ns);
            
            axiom_element_add_attribute (parent_element, env, xsi_type_attri, parent);
        
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.w3.org/2000/09/xmldsig#",
                                            p_prefix));
                       }
                      

                   if (!_PGPDataTypeSequence_type1->is_valid_PGPKeyPacket)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property PGPKeyPacket");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("PGPKeyPacket"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("PGPKeyPacket")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing PGPKeyPacket element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sPGPKeyPacket>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sPGPKeyPacket>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                          text_value_1 =axutil_base64_binary_get_encoded_binary(_PGPDataTypeSequence_type1->property_PGPKeyPacket, env);
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       p_prefix = NULL;
                      

                   if (!_PGPDataTypeSequence_type1->is_valid_extraElement)
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
                      * Parsing extraElement array
                      */
                     if (_PGPDataTypeSequence_type1->property_extraElement != NULL)
                     {
                        
                            sprintf(start_input_str, "<%s%sextraElement>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%sextraElement>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_PGPDataTypeSequence_type1->property_extraElement, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_PGPDataTypeSequence_type1->property_extraElement, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing extraElement element
                      */

                    
                    
                                text_value_2 = axiom_node_to_string((axiom_node_t*)element, env);
                                
                                axutil_stream_write(stream, env, text_value_2, axutil_strlen(text_value_2));
                                
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 

            return parent;
        }


        

            /**
             * Getter for PGPKeyPacket by  Property Number 1
             */
            axutil_base64_binary_t* AXIS2_CALL
            adb_PGPDataTypeSequence_type1_get_property1(
                adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
                const axutil_env_t *env)
            {
                return adb_PGPDataTypeSequence_type1_get_PGPKeyPacket(_PGPDataTypeSequence_type1,
                                             env);
            }

            /**
             * getter for PGPKeyPacket.
             */
            axutil_base64_binary_t* AXIS2_CALL
            adb_PGPDataTypeSequence_type1_get_PGPKeyPacket(
                    adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _PGPDataTypeSequence_type1, NULL);
                  

                return _PGPDataTypeSequence_type1->property_PGPKeyPacket;
             }

            /**
             * setter for PGPKeyPacket
             */
            axis2_status_t AXIS2_CALL
            adb_PGPDataTypeSequence_type1_set_PGPKeyPacket(
                    adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
                    const axutil_env_t *env,
                    axutil_base64_binary_t*  arg_PGPKeyPacket)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _PGPDataTypeSequence_type1, AXIS2_FAILURE);
                
                if(_PGPDataTypeSequence_type1->is_valid_PGPKeyPacket &&
                        arg_PGPKeyPacket == _PGPDataTypeSequence_type1->property_PGPKeyPacket)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_PGPKeyPacket)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "PGPKeyPacket is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_PGPDataTypeSequence_type1_reset_PGPKeyPacket(_PGPDataTypeSequence_type1, env);

                
                if(NULL == arg_PGPKeyPacket)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _PGPDataTypeSequence_type1->property_PGPKeyPacket = arg_PGPKeyPacket;
                        _PGPDataTypeSequence_type1->is_valid_PGPKeyPacket = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for PGPKeyPacket
            */
           axis2_status_t AXIS2_CALL
           adb_PGPDataTypeSequence_type1_reset_PGPKeyPacket(
                   adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _PGPDataTypeSequence_type1, AXIS2_FAILURE);
               

               
            
                
                if(_PGPDataTypeSequence_type1->property_PGPKeyPacket != NULL)
                {
                   
                   
                      axutil_base64_binary_free (_PGPDataTypeSequence_type1->property_PGPKeyPacket, env);
                     _PGPDataTypeSequence_type1->property_PGPKeyPacket = NULL;
                }
            
                
                
                _PGPDataTypeSequence_type1->is_valid_PGPKeyPacket = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether PGPKeyPacket is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_PGPDataTypeSequence_type1_is_PGPKeyPacket_nil(
                   adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _PGPDataTypeSequence_type1, AXIS2_TRUE);
               
               return !_PGPDataTypeSequence_type1->is_valid_PGPKeyPacket;
           }

           /**
            * Set PGPKeyPacket to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_PGPDataTypeSequence_type1_set_PGPKeyPacket_nil(
                   adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
                   const axutil_env_t *env)
           {
               return adb_PGPDataTypeSequence_type1_reset_PGPKeyPacket(_PGPDataTypeSequence_type1, env);
           }

           

            /**
             * Getter for extraElement by  Property Number 2
             */
            axutil_array_list_t* AXIS2_CALL
            adb_PGPDataTypeSequence_type1_get_property2(
                adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
                const axutil_env_t *env)
            {
                return adb_PGPDataTypeSequence_type1_get_extraElement(_PGPDataTypeSequence_type1,
                                             env);
            }

            /**
             * getter for extraElement.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_PGPDataTypeSequence_type1_get_extraElement(
                    adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _PGPDataTypeSequence_type1, NULL);
                  

                return _PGPDataTypeSequence_type1->property_extraElement;
             }

            /**
             * setter for extraElement
             */
            axis2_status_t AXIS2_CALL
            adb_PGPDataTypeSequence_type1_set_extraElement(
                    adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_extraElement)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _PGPDataTypeSequence_type1, AXIS2_FAILURE);
                
                if(_PGPDataTypeSequence_type1->is_valid_extraElement &&
                        arg_extraElement == _PGPDataTypeSequence_type1->property_extraElement)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_extraElement, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "extraElement has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_extraElement, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_PGPDataTypeSequence_type1_reset_extraElement(_PGPDataTypeSequence_type1, env);

                
                if(NULL == arg_extraElement)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _PGPDataTypeSequence_type1->property_extraElement = arg_extraElement;
                        if(non_nil_exists)
                        {
                            _PGPDataTypeSequence_type1->is_valid_extraElement = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of extraElement.
             */
            axiom_node_t* AXIS2_CALL
            adb_PGPDataTypeSequence_type1_get_extraElement_at(
                    adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
                    const axutil_env_t *env, int i)
            {
                axiom_node_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _PGPDataTypeSequence_type1, NULL);
                  

                if(_PGPDataTypeSequence_type1->property_extraElement == NULL)
                {
                    return (axiom_node_t*)0;
                }
                ret_val = (axiom_node_t*)axutil_array_list_get(_PGPDataTypeSequence_type1->property_extraElement, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of extraElement.
             */
            axis2_status_t AXIS2_CALL
            adb_PGPDataTypeSequence_type1_set_extraElement_at(
                    adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
                    const axutil_env_t *env, int i,
                    axiom_node_t* arg_extraElement)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _PGPDataTypeSequence_type1, AXIS2_FAILURE);
                
                if( _PGPDataTypeSequence_type1->is_valid_extraElement &&
                    _PGPDataTypeSequence_type1->property_extraElement &&
                
                    arg_extraElement == (axiom_node_t*)axutil_array_list_get(_PGPDataTypeSequence_type1->property_extraElement, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_extraElement)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_PGPDataTypeSequence_type1->property_extraElement != NULL)
                        {
                            size = axutil_array_list_size(_PGPDataTypeSequence_type1->property_extraElement, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_PGPDataTypeSequence_type1->property_extraElement, env, i))
                                {
                                    non_nil_count ++;
                                    non_nil_exists = AXIS2_TRUE;
                                    if(non_nil_count >= 0)
                                    {
                                        break;
                                    }
                                }
                            }

                        
                        }
                    }
                  

                if(_PGPDataTypeSequence_type1->property_extraElement == NULL)
                {
                    _PGPDataTypeSequence_type1->property_extraElement = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_PGPDataTypeSequence_type1->property_extraElement, env, i);
                if(NULL != element)
                {
                  
                  
                  
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _PGPDataTypeSequence_type1->is_valid_extraElement = AXIS2_FALSE;
                        axutil_array_list_set(_PGPDataTypeSequence_type1->property_extraElement , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_PGPDataTypeSequence_type1->property_extraElement , env, i, arg_extraElement);
                  _PGPDataTypeSequence_type1->is_valid_extraElement = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to extraElement.
             */
            axis2_status_t AXIS2_CALL
            adb_PGPDataTypeSequence_type1_add_extraElement(
                    adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
                    const axutil_env_t *env,
                    axiom_node_t* arg_extraElement)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _PGPDataTypeSequence_type1, AXIS2_FAILURE);

                
                    if(NULL == arg_extraElement)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_PGPDataTypeSequence_type1->property_extraElement == NULL)
                {
                    _PGPDataTypeSequence_type1->property_extraElement = axutil_array_list_create(env, 10);
                }
                if(_PGPDataTypeSequence_type1->property_extraElement == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for extraElement");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_PGPDataTypeSequence_type1->property_extraElement , env, arg_extraElement);
                  _PGPDataTypeSequence_type1->is_valid_extraElement = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the extraElement array.
             */
            int AXIS2_CALL
            adb_PGPDataTypeSequence_type1_sizeof_extraElement(
                    adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _PGPDataTypeSequence_type1, -1);
                if(_PGPDataTypeSequence_type1->property_extraElement == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_PGPDataTypeSequence_type1->property_extraElement, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_PGPDataTypeSequence_type1_remove_extraElement_at(
                    adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
                    const axutil_env_t *env, int i)
            {
                return adb_PGPDataTypeSequence_type1_set_extraElement_nil_at(_PGPDataTypeSequence_type1, env, i);
            }

            

           /**
            * resetter for extraElement
            */
           axis2_status_t AXIS2_CALL
           adb_PGPDataTypeSequence_type1_reset_extraElement(
                   adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _PGPDataTypeSequence_type1, AXIS2_FAILURE);
               

               
                  if (_PGPDataTypeSequence_type1->property_extraElement != NULL)
                  {
                      count = axutil_array_list_size(_PGPDataTypeSequence_type1->property_extraElement, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_PGPDataTypeSequence_type1->property_extraElement, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_PGPDataTypeSequence_type1->property_extraElement, env);
                  }
                _PGPDataTypeSequence_type1->is_valid_extraElement = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether extraElement is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_PGPDataTypeSequence_type1_is_extraElement_nil(
                   adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _PGPDataTypeSequence_type1, AXIS2_TRUE);
               
               return !_PGPDataTypeSequence_type1->is_valid_extraElement;
           }

           /**
            * Set extraElement to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_PGPDataTypeSequence_type1_set_extraElement_nil(
                   adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
                   const axutil_env_t *env)
           {
               return adb_PGPDataTypeSequence_type1_reset_extraElement(_PGPDataTypeSequence_type1, env);
           }

           
           /**
            * Check whether extraElement is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_PGPDataTypeSequence_type1_is_extraElement_nil_at(
                   adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _PGPDataTypeSequence_type1, AXIS2_TRUE);
               
               return (_PGPDataTypeSequence_type1->is_valid_extraElement == AXIS2_FALSE ||
                        NULL == _PGPDataTypeSequence_type1->property_extraElement || 
                        NULL == axutil_array_list_get(_PGPDataTypeSequence_type1->property_extraElement, env, i));
           }

           /**
            * Set extraElement to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_PGPDataTypeSequence_type1_set_extraElement_nil_at(
                   adb_PGPDataTypeSequence_type1_t* _PGPDataTypeSequence_type1,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _PGPDataTypeSequence_type1, AXIS2_FAILURE);

                if(_PGPDataTypeSequence_type1->property_extraElement == NULL ||
                            _PGPDataTypeSequence_type1->is_valid_extraElement == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_PGPDataTypeSequence_type1->property_extraElement, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_PGPDataTypeSequence_type1->property_extraElement, env, i))
                        {
                            k ++;
                            non_nil_exists = AXIS2_TRUE;
                            if( k >= 0)
                            {
                                break;
                            }
                        }
                    }
                }
                

                if( k < 0)
                {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of extraElement is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_PGPDataTypeSequence_type1->property_extraElement == NULL)
                {
                    _PGPDataTypeSequence_type1->is_valid_extraElement = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_PGPDataTypeSequence_type1->property_extraElement, env, i);
                if(NULL != element)
                {
                  
                  
                  
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _PGPDataTypeSequence_type1->is_valid_extraElement = AXIS2_FALSE;
                        axutil_array_list_set(_PGPDataTypeSequence_type1->property_extraElement , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_PGPDataTypeSequence_type1->property_extraElement , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

