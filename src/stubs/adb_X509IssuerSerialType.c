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
         * adb_X509IssuerSerialType.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_X509IssuerSerialType.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = X509IssuerSerialType
                 * Namespace URI = http://www.w3.org/2000/09/xmldsig#
                 * Namespace Prefix = ns5
                 */
           


        struct adb_X509IssuerSerialType
        {
            axis2_char_t *property_TypeName;

            axis2_char_t* property_X509IssuerName;

                
                axis2_bool_t is_valid_X509IssuerName;
            int property_X509SerialNumber;

                
                axis2_bool_t is_valid_X509SerialNumber;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_X509IssuerSerialType_set_X509IssuerName_nil(
                        adb_X509IssuerSerialType_t* _X509IssuerSerialType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_X509IssuerSerialType_set_X509SerialNumber_nil(
                        adb_X509IssuerSerialType_t* _X509IssuerSerialType,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_X509IssuerSerialType_t* AXIS2_CALL
        adb_X509IssuerSerialType_create(
            const axutil_env_t *env)
        {
            adb_X509IssuerSerialType_t *_X509IssuerSerialType = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _X509IssuerSerialType = (adb_X509IssuerSerialType_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_X509IssuerSerialType_t));

            if(NULL == _X509IssuerSerialType)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_X509IssuerSerialType, 0, sizeof(adb_X509IssuerSerialType_t));

            _X509IssuerSerialType->property_TypeName = axutil_strdup(env, "adb_X509IssuerSerialType");
            _X509IssuerSerialType->property_X509IssuerName  = NULL;
                  _X509IssuerSerialType->is_valid_X509IssuerName  = AXIS2_FALSE;
            _X509IssuerSerialType->is_valid_X509SerialNumber  = AXIS2_FALSE;
            

            return _X509IssuerSerialType;
        }

        adb_X509IssuerSerialType_t* AXIS2_CALL
        adb_X509IssuerSerialType_create_with_values(
            const axutil_env_t *env,
                axis2_char_t* _X509IssuerName,
                int _X509SerialNumber)
        {
            adb_X509IssuerSerialType_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_X509IssuerSerialType_create(env);

            
              status = adb_X509IssuerSerialType_set_X509IssuerName(
                                     adb_obj,
                                     env,
                                     _X509IssuerName);
              if(status == AXIS2_FAILURE) {
                  adb_X509IssuerSerialType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_X509IssuerSerialType_set_X509SerialNumber(
                                     adb_obj,
                                     env,
                                     _X509SerialNumber);
              if(status == AXIS2_FAILURE) {
                  adb_X509IssuerSerialType_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axis2_char_t* AXIS2_CALL
                adb_X509IssuerSerialType_free_popping_value(
                        adb_X509IssuerSerialType_t* _X509IssuerSerialType,
                        const axutil_env_t *env)
                {
                    axis2_char_t* value;

                    
                    
                    value = _X509IssuerSerialType->property_X509IssuerName;

                    _X509IssuerSerialType->property_X509IssuerName = (axis2_char_t*)NULL;
                    adb_X509IssuerSerialType_free(_X509IssuerSerialType, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_X509IssuerSerialType_free(
                adb_X509IssuerSerialType_t* _X509IssuerSerialType,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _X509IssuerSerialType,
                env,
                "adb_X509IssuerSerialType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_X509IssuerSerialType_free_obj(
                adb_X509IssuerSerialType_t* _X509IssuerSerialType,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _X509IssuerSerialType, AXIS2_FAILURE);

            if (_X509IssuerSerialType->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _X509IssuerSerialType->property_TypeName);
            }

            adb_X509IssuerSerialType_reset_X509IssuerName(_X509IssuerSerialType, env);
            adb_X509IssuerSerialType_reset_X509SerialNumber(_X509IssuerSerialType, env);
            

            if(_X509IssuerSerialType)
            {
                AXIS2_FREE(env->allocator, _X509IssuerSerialType);
                _X509IssuerSerialType = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_X509IssuerSerialType_deserialize(
                adb_X509IssuerSerialType_t* _X509IssuerSerialType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _X509IssuerSerialType,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_X509IssuerSerialType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_X509IssuerSerialType_deserialize_obj(
                adb_X509IssuerSerialType_t* _X509IssuerSerialType,
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
            AXIS2_PARAM_CHECK(env->error, _X509IssuerSerialType, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for X509IssuerSerialType : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    

                     
                     /*
                      * building X509IssuerName element
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
                                   
                                 element_qname = axutil_qname_create(env, "X509IssuerName", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

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
                                            status = adb_X509IssuerSerialType_set_X509IssuerName(_X509IssuerSerialType, env,
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
                                                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element X509IssuerName");
                                                status = AXIS2_FAILURE;
                                            }
                                            else
                                            {
                                                /* after all, we found this is a empty string */
                                                status = adb_X509IssuerSerialType_set_X509IssuerName(_X509IssuerSerialType, env,
                                                                   "");
                                            }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for X509IssuerName ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element X509IssuerName missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building X509SerialNumber element
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
                                 
                                 element_qname = axutil_qname_create(env, "X509SerialNumber", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

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
                                            status = adb_X509IssuerSerialType_set_X509SerialNumber(_X509IssuerSerialType, env,
                                                                   atoi(text_value));
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element X509SerialNumber");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for X509SerialNumber ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element X509SerialNumber missing");
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
          adb_X509IssuerSerialType_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_X509IssuerSerialType_declare_parent_namespaces(
                    adb_X509IssuerSerialType_t* _X509IssuerSerialType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_X509IssuerSerialType_serialize(
                adb_X509IssuerSerialType_t* _X509IssuerSerialType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_X509IssuerSerialType == NULL)
            {
                return adb_X509IssuerSerialType_serialize_obj(
                    _X509IssuerSerialType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _X509IssuerSerialType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_X509IssuerSerialType");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_X509IssuerSerialType_serialize_obj(
                adb_X509IssuerSerialType_t* _X509IssuerSerialType,
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
            AXIS2_PARAM_CHECK(env->error, _X509IssuerSerialType, NULL);
            
            
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
                      

                   if (!_X509IssuerSerialType->is_valid_X509IssuerName)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property X509IssuerName");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("X509IssuerName"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("X509IssuerName")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing X509IssuerName element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sX509IssuerName>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sX509IssuerName>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_1 = _X509IssuerSerialType->property_X509IssuerName;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
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
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
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
                      

                   if (!_X509IssuerSerialType->is_valid_X509SerialNumber)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property X509SerialNumber");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("X509SerialNumber"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("X509SerialNumber")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing X509SerialNumber element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sX509SerialNumber>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sX509SerialNumber>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                               sprintf (text_value_2, AXIS2_PRINTF_INT32_FORMAT_SPECIFIER, _X509IssuerSerialType->property_X509SerialNumber);
                             
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_2, axutil_strlen(text_value_2));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 

            return parent;
        }


        

            /**
             * Getter for X509IssuerName by  Property Number 1
             */
            axis2_char_t* AXIS2_CALL
            adb_X509IssuerSerialType_get_property1(
                adb_X509IssuerSerialType_t* _X509IssuerSerialType,
                const axutil_env_t *env)
            {
                return adb_X509IssuerSerialType_get_X509IssuerName(_X509IssuerSerialType,
                                             env);
            }

            /**
             * getter for X509IssuerName.
             */
            axis2_char_t* AXIS2_CALL
            adb_X509IssuerSerialType_get_X509IssuerName(
                    adb_X509IssuerSerialType_t* _X509IssuerSerialType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _X509IssuerSerialType, NULL);
                  

                return _X509IssuerSerialType->property_X509IssuerName;
             }

            /**
             * setter for X509IssuerName
             */
            axis2_status_t AXIS2_CALL
            adb_X509IssuerSerialType_set_X509IssuerName(
                    adb_X509IssuerSerialType_t* _X509IssuerSerialType,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_X509IssuerName)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _X509IssuerSerialType, AXIS2_FAILURE);
                
                if(_X509IssuerSerialType->is_valid_X509IssuerName &&
                        arg_X509IssuerName == _X509IssuerSerialType->property_X509IssuerName)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_X509IssuerName)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "X509IssuerName is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_X509IssuerSerialType_reset_X509IssuerName(_X509IssuerSerialType, env);

                
                if(NULL == arg_X509IssuerName)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _X509IssuerSerialType->property_X509IssuerName = (axis2_char_t *)axutil_strdup(env, arg_X509IssuerName);
                        if(NULL == _X509IssuerSerialType->property_X509IssuerName)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for X509IssuerName");
                            return AXIS2_FAILURE;
                        }
                        _X509IssuerSerialType->is_valid_X509IssuerName = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for X509IssuerName
            */
           axis2_status_t AXIS2_CALL
           adb_X509IssuerSerialType_reset_X509IssuerName(
                   adb_X509IssuerSerialType_t* _X509IssuerSerialType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _X509IssuerSerialType, AXIS2_FAILURE);
               

               
            
                
                if(_X509IssuerSerialType->property_X509IssuerName != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _X509IssuerSerialType->property_X509IssuerName);
                     _X509IssuerSerialType->property_X509IssuerName = NULL;
                }
            
                
                
                _X509IssuerSerialType->is_valid_X509IssuerName = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether X509IssuerName is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_X509IssuerSerialType_is_X509IssuerName_nil(
                   adb_X509IssuerSerialType_t* _X509IssuerSerialType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _X509IssuerSerialType, AXIS2_TRUE);
               
               return !_X509IssuerSerialType->is_valid_X509IssuerName;
           }

           /**
            * Set X509IssuerName to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_X509IssuerSerialType_set_X509IssuerName_nil(
                   adb_X509IssuerSerialType_t* _X509IssuerSerialType,
                   const axutil_env_t *env)
           {
               return adb_X509IssuerSerialType_reset_X509IssuerName(_X509IssuerSerialType, env);
           }

           

            /**
             * Getter for X509SerialNumber by  Property Number 2
             */
            int AXIS2_CALL
            adb_X509IssuerSerialType_get_property2(
                adb_X509IssuerSerialType_t* _X509IssuerSerialType,
                const axutil_env_t *env)
            {
                return adb_X509IssuerSerialType_get_X509SerialNumber(_X509IssuerSerialType,
                                             env);
            }

            /**
             * getter for X509SerialNumber.
             */
            int AXIS2_CALL
            adb_X509IssuerSerialType_get_X509SerialNumber(
                    adb_X509IssuerSerialType_t* _X509IssuerSerialType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (int)0);
                    AXIS2_PARAM_CHECK(env->error, _X509IssuerSerialType, (int)0);
                  

                return _X509IssuerSerialType->property_X509SerialNumber;
             }

            /**
             * setter for X509SerialNumber
             */
            axis2_status_t AXIS2_CALL
            adb_X509IssuerSerialType_set_X509SerialNumber(
                    adb_X509IssuerSerialType_t* _X509IssuerSerialType,
                    const axutil_env_t *env,
                    const int  arg_X509SerialNumber)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _X509IssuerSerialType, AXIS2_FAILURE);
                
                if(_X509IssuerSerialType->is_valid_X509SerialNumber &&
                        arg_X509SerialNumber == _X509IssuerSerialType->property_X509SerialNumber)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_X509IssuerSerialType_reset_X509SerialNumber(_X509IssuerSerialType, env);

                _X509IssuerSerialType->property_X509SerialNumber = arg_X509SerialNumber;
                        _X509IssuerSerialType->is_valid_X509SerialNumber = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for X509SerialNumber
            */
           axis2_status_t AXIS2_CALL
           adb_X509IssuerSerialType_reset_X509SerialNumber(
                   adb_X509IssuerSerialType_t* _X509IssuerSerialType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _X509IssuerSerialType, AXIS2_FAILURE);
               

               _X509IssuerSerialType->is_valid_X509SerialNumber = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether X509SerialNumber is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_X509IssuerSerialType_is_X509SerialNumber_nil(
                   adb_X509IssuerSerialType_t* _X509IssuerSerialType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _X509IssuerSerialType, AXIS2_TRUE);
               
               return !_X509IssuerSerialType->is_valid_X509SerialNumber;
           }

           /**
            * Set X509SerialNumber to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_X509IssuerSerialType_set_X509SerialNumber_nil(
                   adb_X509IssuerSerialType_t* _X509IssuerSerialType,
                   const axutil_env_t *env)
           {
               return adb_X509IssuerSerialType_reset_X509SerialNumber(_X509IssuerSerialType, env);
           }

           

