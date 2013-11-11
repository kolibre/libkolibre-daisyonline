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
         * adb_CipherDataType.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_CipherDataType.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = CipherDataType
                 * Namespace URI = http://www.w3.org/2001/04/xmlenc#
                 * Namespace Prefix = ns6
                 */
           


        struct adb_CipherDataType
        {
            axis2_char_t *property_TypeName;

            axutil_base64_binary_t* property_CipherValue;

                
                axis2_bool_t is_valid_CipherValue;
            adb_CipherReferenceType_t* property_CipherReference;

                
                axis2_bool_t is_valid_CipherReference;
            
                axis2_char_t *current_choice;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_CipherDataType_set_CipherValue_nil(
                        adb_CipherDataType_t* _CipherDataType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_CipherDataType_set_CipherReference_nil(
                        adb_CipherDataType_t* _CipherDataType,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_CipherDataType_t* AXIS2_CALL
        adb_CipherDataType_create(
            const axutil_env_t *env)
        {
            adb_CipherDataType_t *_CipherDataType = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _CipherDataType = (adb_CipherDataType_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_CipherDataType_t));

            if(NULL == _CipherDataType)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_CipherDataType, 0, sizeof(adb_CipherDataType_t));

            _CipherDataType->property_TypeName = axutil_strdup(env, "adb_CipherDataType");
            _CipherDataType->property_CipherValue  = NULL;
                  _CipherDataType->is_valid_CipherValue  = AXIS2_FALSE;
            _CipherDataType->property_CipherReference  = NULL;
                  _CipherDataType->is_valid_CipherReference  = AXIS2_FALSE;
            _CipherDataType->current_choice = "";
            

            return _CipherDataType;
        }

        adb_CipherDataType_t* AXIS2_CALL
        adb_CipherDataType_create_with_values(
            const axutil_env_t *env,
                axutil_base64_binary_t* _CipherValue,
                adb_CipherReferenceType_t* _CipherReference)
        {
            adb_CipherDataType_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_CipherDataType_create(env);

            
              status = adb_CipherDataType_set_CipherValue(
                                     adb_obj,
                                     env,
                                     _CipherValue);
              if(status == AXIS2_FAILURE) {
                  adb_CipherDataType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_CipherDataType_set_CipherReference(
                                     adb_obj,
                                     env,
                                     _CipherReference);
              if(status == AXIS2_FAILURE) {
                  adb_CipherDataType_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axutil_base64_binary_t* AXIS2_CALL
                adb_CipherDataType_free_popping_value(
                        adb_CipherDataType_t* _CipherDataType,
                        const axutil_env_t *env)
                {
                    axutil_base64_binary_t* value;

                    
                    
                    value = _CipherDataType->property_CipherValue;

                    _CipherDataType->property_CipherValue = (axutil_base64_binary_t*)NULL;
                    adb_CipherDataType_free(_CipherDataType, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_CipherDataType_free(
                adb_CipherDataType_t* _CipherDataType,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _CipherDataType,
                env,
                "adb_CipherDataType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_CipherDataType_free_obj(
                adb_CipherDataType_t* _CipherDataType,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _CipherDataType, AXIS2_FAILURE);

            if (_CipherDataType->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _CipherDataType->property_TypeName);
            }

            adb_CipherDataType_reset_CipherValue(_CipherDataType, env);
            adb_CipherDataType_reset_CipherReference(_CipherDataType, env);
            

            if(_CipherDataType)
            {
                AXIS2_FREE(env->allocator, _CipherDataType);
                _CipherDataType = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_CipherDataType_deserialize(
                adb_CipherDataType_t* _CipherDataType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _CipherDataType,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_CipherDataType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_CipherDataType_deserialize_obj(
                adb_CipherDataType_t* _CipherDataType,
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
            AXIS2_PARAM_CHECK(env->error, _CipherDataType, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for CipherDataType : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    

                     
                     /*
                      * building CipherValue element
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
                                   
                                 element_qname = axutil_qname_create(env, "CipherValue", "http://www.w3.org/2001/04/xmlenc#", NULL);
                                 

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
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element CipherValue ");
                                          }
                                          else
                                          {
                                            status = adb_CipherDataType_set_CipherValue(_CipherDataType, env,
                                                                       (axutil_base64_binary_t*)element);
                                          }
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element CipherValue");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for CipherValue ");
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
                 

                     
                     /*
                      * building CipherReference element
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
                                 
                                 element_qname = axutil_qname_create(env, "CipherReference", "http://www.w3.org/2001/04/xmlenc#", NULL);
                                 

                           if (adb_CipherReferenceType_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_CipherReferenceType");

                                      status =  adb_CipherReferenceType_deserialize((adb_CipherReferenceType_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_TRUE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element CipherReference");
                                      }
                                      else
                                      {
                                          status = adb_CipherDataType_set_CipherReference(_CipherDataType, env,
                                                                   (adb_CipherReferenceType_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for CipherReference ");
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
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_CipherDataType_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_CipherDataType_declare_parent_namespaces(
                    adb_CipherDataType_t* _CipherDataType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_CipherDataType_serialize(
                adb_CipherDataType_t* _CipherDataType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_CipherDataType == NULL)
            {
                return adb_CipherDataType_serialize_obj(
                    _CipherDataType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _CipherDataType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_CipherDataType");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_CipherDataType_serialize_obj(
                adb_CipherDataType_t* _CipherDataType,
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
                    
                    axis2_char_t text_value_2[ADB_DEFAULT_DIGIT_LIMIT];
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _CipherDataType, NULL);
            
            
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
                  }
              }
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"CipherDataType\"", NULL);
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
                  }
              }
            }
            xsi_ns = axiom_namespace_create (env,
                                 "http://www.w3.org/2001/04/xmlenc#",
                                 xsi_prefix);
            xsi_type_attri = axiom_attribute_create (env, "type", "CipherDataType", xsi_ns);
            
            axiom_element_add_attribute (parent_element, env, xsi_type_attri, parent);
        
                if(0 == axutil_strcmp(_CipherDataType->current_choice, "http://www.w3.org/2001/04/xmlenc#:CipherValue"))
                {
                
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/04/xmlenc#", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.w3.org/2001/04/xmlenc#", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.w3.org/2001/04/xmlenc#",
                                            p_prefix));
                       }
                      

                   if (!_CipherDataType->is_valid_CipherValue)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property CipherValue");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("CipherValue"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("CipherValue")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing CipherValue element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sCipherValue>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sCipherValue>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                          text_value_1 =axutil_base64_binary_get_encoded_binary(_CipherDataType->property_CipherValue, env);
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 
                if(0 == axutil_strcmp(_CipherDataType->current_choice, "http://www.w3.org/2001/04/xmlenc#:CipherReference"))
                {
                
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/04/xmlenc#", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.w3.org/2001/04/xmlenc#", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.w3.org/2001/04/xmlenc#",
                                            p_prefix));
                       }
                      

                   if (!_CipherDataType->is_valid_CipherReference)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property CipherReference");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("CipherReference"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("CipherReference")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing CipherReference element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sCipherReference",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sCipherReference>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_CipherReferenceType_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_CipherReferenceType_serialize(_CipherDataType->property_CipherReference, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_CipherReferenceType_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_CipherReferenceType_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 

            return parent;
        }


        

            /**
             * Getter for CipherValue by  Property Number 1
             */
            axutil_base64_binary_t* AXIS2_CALL
            adb_CipherDataType_get_property1(
                adb_CipherDataType_t* _CipherDataType,
                const axutil_env_t *env)
            {
                return adb_CipherDataType_get_CipherValue(_CipherDataType,
                                             env);
            }

            /**
             * getter for CipherValue.
             */
            axutil_base64_binary_t* AXIS2_CALL
            adb_CipherDataType_get_CipherValue(
                    adb_CipherDataType_t* _CipherDataType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _CipherDataType, NULL);
                  

                return _CipherDataType->property_CipherValue;
             }

            /**
             * setter for CipherValue
             */
            axis2_status_t AXIS2_CALL
            adb_CipherDataType_set_CipherValue(
                    adb_CipherDataType_t* _CipherDataType,
                    const axutil_env_t *env,
                    axutil_base64_binary_t*  arg_CipherValue)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _CipherDataType, AXIS2_FAILURE);
                
                if(_CipherDataType->is_valid_CipherValue &&
                        arg_CipherValue == _CipherDataType->property_CipherValue)
                {
                    _CipherDataType->current_choice = "http://www.w3.org/2001/04/xmlenc#:CipherValue";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_CipherValue)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "CipherValue is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_CipherDataType_reset_CipherValue(_CipherDataType, env);

                
                if(NULL == arg_CipherValue)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _CipherDataType->property_CipherValue = arg_CipherValue;
                        _CipherDataType->is_valid_CipherValue = AXIS2_TRUE;
                    _CipherDataType->current_choice = "http://www.w3.org/2001/04/xmlenc#:CipherValue";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for CipherValue
            */
           axis2_status_t AXIS2_CALL
           adb_CipherDataType_reset_CipherValue(
                   adb_CipherDataType_t* _CipherDataType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _CipherDataType, AXIS2_FAILURE);
               

               
            
                
                if(_CipherDataType->property_CipherValue != NULL)
                {
                   
                   
                      axutil_base64_binary_free (_CipherDataType->property_CipherValue, env);
                     _CipherDataType->property_CipherValue = NULL;
                }
            
                
                
                _CipherDataType->is_valid_CipherValue = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether CipherValue is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_CipherDataType_is_CipherValue_nil(
                   adb_CipherDataType_t* _CipherDataType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _CipherDataType, AXIS2_TRUE);
               
               return !_CipherDataType->is_valid_CipherValue;
           }

           /**
            * Set CipherValue to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_CipherDataType_set_CipherValue_nil(
                   adb_CipherDataType_t* _CipherDataType,
                   const axutil_env_t *env)
           {
               return adb_CipherDataType_reset_CipherValue(_CipherDataType, env);
           }

           

            /**
             * Getter for CipherReference by  Property Number 2
             */
            adb_CipherReferenceType_t* AXIS2_CALL
            adb_CipherDataType_get_property2(
                adb_CipherDataType_t* _CipherDataType,
                const axutil_env_t *env)
            {
                return adb_CipherDataType_get_CipherReference(_CipherDataType,
                                             env);
            }

            /**
             * getter for CipherReference.
             */
            adb_CipherReferenceType_t* AXIS2_CALL
            adb_CipherDataType_get_CipherReference(
                    adb_CipherDataType_t* _CipherDataType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _CipherDataType, NULL);
                  

                return _CipherDataType->property_CipherReference;
             }

            /**
             * setter for CipherReference
             */
            axis2_status_t AXIS2_CALL
            adb_CipherDataType_set_CipherReference(
                    adb_CipherDataType_t* _CipherDataType,
                    const axutil_env_t *env,
                    adb_CipherReferenceType_t*  arg_CipherReference)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _CipherDataType, AXIS2_FAILURE);
                
                if(_CipherDataType->is_valid_CipherReference &&
                        arg_CipherReference == _CipherDataType->property_CipherReference)
                {
                    _CipherDataType->current_choice = "http://www.w3.org/2001/04/xmlenc#:CipherReference";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_CipherReference)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "CipherReference is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_CipherDataType_reset_CipherReference(_CipherDataType, env);

                
                if(NULL == arg_CipherReference)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _CipherDataType->property_CipherReference = arg_CipherReference;
                        _CipherDataType->is_valid_CipherReference = AXIS2_TRUE;
                    _CipherDataType->current_choice = "http://www.w3.org/2001/04/xmlenc#:CipherReference";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for CipherReference
            */
           axis2_status_t AXIS2_CALL
           adb_CipherDataType_reset_CipherReference(
                   adb_CipherDataType_t* _CipherDataType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _CipherDataType, AXIS2_FAILURE);
               

               
            
                
                if(_CipherDataType->property_CipherReference != NULL)
                {
                   
                   adb_CipherReferenceType_free(_CipherDataType->property_CipherReference, env);
                     _CipherDataType->property_CipherReference = NULL;
                }
            
                
                
                _CipherDataType->is_valid_CipherReference = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether CipherReference is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_CipherDataType_is_CipherReference_nil(
                   adb_CipherDataType_t* _CipherDataType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _CipherDataType, AXIS2_TRUE);
               
               return !_CipherDataType->is_valid_CipherReference;
           }

           /**
            * Set CipherReference to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_CipherDataType_set_CipherReference_nil(
                   adb_CipherDataType_t* _CipherDataType,
                   const axutil_env_t *env)
           {
               return adb_CipherDataType_reset_CipherReference(_CipherDataType, env);
           }

           

