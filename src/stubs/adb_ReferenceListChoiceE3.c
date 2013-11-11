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
         * adb_ReferenceListChoiceE3.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_ReferenceListChoiceE3.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = ReferenceListChoice
                 * Namespace URI = http://www.w3.org/2001/04/xmlenc#
                 * Namespace Prefix = ns6
                 */
           


        struct adb_ReferenceListChoiceE3
        {
            axis2_char_t *property_TypeName;

            adb_ReferenceTypeE2_t* property_DataReference;

                
                axis2_bool_t is_valid_DataReference;
            adb_ReferenceTypeE2_t* property_KeyReference;

                
                axis2_bool_t is_valid_KeyReference;
            
                axis2_char_t *current_choice;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_ReferenceListChoiceE3_set_DataReference_nil(
                        adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_ReferenceListChoiceE3_set_KeyReference_nil(
                        adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_ReferenceListChoiceE3_t* AXIS2_CALL
        adb_ReferenceListChoiceE3_create(
            const axutil_env_t *env)
        {
            adb_ReferenceListChoiceE3_t *_ReferenceListChoiceE3 = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _ReferenceListChoiceE3 = (adb_ReferenceListChoiceE3_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_ReferenceListChoiceE3_t));

            if(NULL == _ReferenceListChoiceE3)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_ReferenceListChoiceE3, 0, sizeof(adb_ReferenceListChoiceE3_t));

            _ReferenceListChoiceE3->property_TypeName = axutil_strdup(env, "adb_ReferenceListChoiceE3");
            _ReferenceListChoiceE3->property_DataReference  = NULL;
                  _ReferenceListChoiceE3->is_valid_DataReference  = AXIS2_FALSE;
            _ReferenceListChoiceE3->property_KeyReference  = NULL;
                  _ReferenceListChoiceE3->is_valid_KeyReference  = AXIS2_FALSE;
            _ReferenceListChoiceE3->current_choice = "";
            

            return _ReferenceListChoiceE3;
        }

        adb_ReferenceListChoiceE3_t* AXIS2_CALL
        adb_ReferenceListChoiceE3_create_with_values(
            const axutil_env_t *env,
                adb_ReferenceTypeE2_t* _DataReference,
                adb_ReferenceTypeE2_t* _KeyReference)
        {
            adb_ReferenceListChoiceE3_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_ReferenceListChoiceE3_create(env);

            
              status = adb_ReferenceListChoiceE3_set_DataReference(
                                     adb_obj,
                                     env,
                                     _DataReference);
              if(status == AXIS2_FAILURE) {
                  adb_ReferenceListChoiceE3_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_ReferenceListChoiceE3_set_KeyReference(
                                     adb_obj,
                                     env,
                                     _KeyReference);
              if(status == AXIS2_FAILURE) {
                  adb_ReferenceListChoiceE3_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        adb_ReferenceTypeE2_t* AXIS2_CALL
                adb_ReferenceListChoiceE3_free_popping_value(
                        adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
                        const axutil_env_t *env)
                {
                    adb_ReferenceTypeE2_t* value;

                    
                    
                    value = _ReferenceListChoiceE3->property_DataReference;

                    _ReferenceListChoiceE3->property_DataReference = (adb_ReferenceTypeE2_t*)NULL;
                    adb_ReferenceListChoiceE3_free(_ReferenceListChoiceE3, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_ReferenceListChoiceE3_free(
                adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _ReferenceListChoiceE3,
                env,
                "adb_ReferenceListChoiceE3");
            
        }

        axis2_status_t AXIS2_CALL
        adb_ReferenceListChoiceE3_free_obj(
                adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _ReferenceListChoiceE3, AXIS2_FAILURE);

            if (_ReferenceListChoiceE3->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _ReferenceListChoiceE3->property_TypeName);
            }

            adb_ReferenceListChoiceE3_reset_DataReference(_ReferenceListChoiceE3, env);
            adb_ReferenceListChoiceE3_reset_KeyReference(_ReferenceListChoiceE3, env);
            

            if(_ReferenceListChoiceE3)
            {
                AXIS2_FREE(env->allocator, _ReferenceListChoiceE3);
                _ReferenceListChoiceE3 = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_ReferenceListChoiceE3_deserialize(
                adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _ReferenceListChoiceE3,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_ReferenceListChoiceE3");
            
        }

        axis2_status_t AXIS2_CALL
        adb_ReferenceListChoiceE3_deserialize_obj(
                adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
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
            AXIS2_PARAM_CHECK(env->error, _ReferenceListChoiceE3, AXIS2_FAILURE);

            
                         first_node = parent;
                    

                     
                     /*
                      * building DataReference element
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
                                   
                                 element_qname = axutil_qname_create(env, "DataReference", "http://www.w3.org/2001/04/xmlenc#", NULL);
                                 

                           if (adb_ReferenceTypeE2_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_ReferenceTypeE2");

                                      status =  adb_ReferenceTypeE2_deserialize((adb_ReferenceTypeE2_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_TRUE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element DataReference");
                                      }
                                      else
                                      {
                                          status = adb_ReferenceListChoiceE3_set_DataReference(_ReferenceListChoiceE3, env,
                                                                   (adb_ReferenceTypeE2_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for DataReference ");
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
                      * building KeyReference element
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
                                 
                                 element_qname = axutil_qname_create(env, "KeyReference", "http://www.w3.org/2001/04/xmlenc#", NULL);
                                 

                           if (adb_ReferenceTypeE2_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_ReferenceTypeE2");

                                      status =  adb_ReferenceTypeE2_deserialize((adb_ReferenceTypeE2_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_TRUE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element KeyReference");
                                      }
                                      else
                                      {
                                          status = adb_ReferenceListChoiceE3_set_KeyReference(_ReferenceListChoiceE3, env,
                                                                   (adb_ReferenceTypeE2_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for KeyReference ");
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
          adb_ReferenceListChoiceE3_is_particle()
          {
            
                 return AXIS2_TRUE;
              
          }


          void AXIS2_CALL
          adb_ReferenceListChoiceE3_declare_parent_namespaces(
                    adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_ReferenceListChoiceE3_serialize(
                adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_ReferenceListChoiceE3 == NULL)
            {
                return adb_ReferenceListChoiceE3_serialize_obj(
                    _ReferenceListChoiceE3, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _ReferenceListChoiceE3, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_ReferenceListChoiceE3");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_ReferenceListChoiceE3_serialize_obj(
                adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
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
            AXIS2_PARAM_CHECK(env->error, _ReferenceListChoiceE3, NULL);
            
            
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
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"ReferenceListChoiceE3\"", NULL);
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
            xsi_type_attri = axiom_attribute_create (env, "type", "ReferenceListChoiceE3", xsi_ns);
            
            axiom_element_add_attribute (parent_element, env, xsi_type_attri, parent);
        
                if(0 == axutil_strcmp(_ReferenceListChoiceE3->current_choice, "http://www.w3.org/2001/04/xmlenc#:DataReference"))
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
                      

                   if (!_ReferenceListChoiceE3->is_valid_DataReference)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property DataReference");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("DataReference"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("DataReference")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing DataReference element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sDataReference",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sDataReference>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_ReferenceTypeE2_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_ReferenceTypeE2_serialize(_ReferenceListChoiceE3->property_DataReference, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_ReferenceTypeE2_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_ReferenceTypeE2_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 
                if(0 == axutil_strcmp(_ReferenceListChoiceE3->current_choice, "http://www.w3.org/2001/04/xmlenc#:KeyReference"))
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
                      

                   if (!_ReferenceListChoiceE3->is_valid_KeyReference)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property KeyReference");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("KeyReference"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("KeyReference")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing KeyReference element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sKeyReference",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sKeyReference>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_ReferenceTypeE2_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_ReferenceTypeE2_serialize(_ReferenceListChoiceE3->property_KeyReference, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_ReferenceTypeE2_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_ReferenceTypeE2_is_particle())
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
             * Getter for DataReference by  Property Number 1
             */
            adb_ReferenceTypeE2_t* AXIS2_CALL
            adb_ReferenceListChoiceE3_get_property1(
                adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
                const axutil_env_t *env)
            {
                return adb_ReferenceListChoiceE3_get_DataReference(_ReferenceListChoiceE3,
                                             env);
            }

            /**
             * getter for DataReference.
             */
            adb_ReferenceTypeE2_t* AXIS2_CALL
            adb_ReferenceListChoiceE3_get_DataReference(
                    adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _ReferenceListChoiceE3, NULL);
                  

                return _ReferenceListChoiceE3->property_DataReference;
             }

            /**
             * setter for DataReference
             */
            axis2_status_t AXIS2_CALL
            adb_ReferenceListChoiceE3_set_DataReference(
                    adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
                    const axutil_env_t *env,
                    adb_ReferenceTypeE2_t*  arg_DataReference)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ReferenceListChoiceE3, AXIS2_FAILURE);
                
                if(_ReferenceListChoiceE3->is_valid_DataReference &&
                        arg_DataReference == _ReferenceListChoiceE3->property_DataReference)
                {
                    _ReferenceListChoiceE3->current_choice = "http://www.w3.org/2001/04/xmlenc#:DataReference";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_DataReference)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "DataReference is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_ReferenceListChoiceE3_reset_DataReference(_ReferenceListChoiceE3, env);

                
                if(NULL == arg_DataReference)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _ReferenceListChoiceE3->property_DataReference = arg_DataReference;
                        _ReferenceListChoiceE3->is_valid_DataReference = AXIS2_TRUE;
                    _ReferenceListChoiceE3->current_choice = "http://www.w3.org/2001/04/xmlenc#:DataReference";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for DataReference
            */
           axis2_status_t AXIS2_CALL
           adb_ReferenceListChoiceE3_reset_DataReference(
                   adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _ReferenceListChoiceE3, AXIS2_FAILURE);
               

               
            
                
                if(_ReferenceListChoiceE3->property_DataReference != NULL)
                {
                   
                   adb_ReferenceTypeE2_free(_ReferenceListChoiceE3->property_DataReference, env);
                     _ReferenceListChoiceE3->property_DataReference = NULL;
                }
            
                
                
                _ReferenceListChoiceE3->is_valid_DataReference = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether DataReference is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_ReferenceListChoiceE3_is_DataReference_nil(
                   adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ReferenceListChoiceE3, AXIS2_TRUE);
               
               return !_ReferenceListChoiceE3->is_valid_DataReference;
           }

           /**
            * Set DataReference to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_ReferenceListChoiceE3_set_DataReference_nil(
                   adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
                   const axutil_env_t *env)
           {
               return adb_ReferenceListChoiceE3_reset_DataReference(_ReferenceListChoiceE3, env);
           }

           

            /**
             * Getter for KeyReference by  Property Number 2
             */
            adb_ReferenceTypeE2_t* AXIS2_CALL
            adb_ReferenceListChoiceE3_get_property2(
                adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
                const axutil_env_t *env)
            {
                return adb_ReferenceListChoiceE3_get_KeyReference(_ReferenceListChoiceE3,
                                             env);
            }

            /**
             * getter for KeyReference.
             */
            adb_ReferenceTypeE2_t* AXIS2_CALL
            adb_ReferenceListChoiceE3_get_KeyReference(
                    adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _ReferenceListChoiceE3, NULL);
                  

                return _ReferenceListChoiceE3->property_KeyReference;
             }

            /**
             * setter for KeyReference
             */
            axis2_status_t AXIS2_CALL
            adb_ReferenceListChoiceE3_set_KeyReference(
                    adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
                    const axutil_env_t *env,
                    adb_ReferenceTypeE2_t*  arg_KeyReference)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ReferenceListChoiceE3, AXIS2_FAILURE);
                
                if(_ReferenceListChoiceE3->is_valid_KeyReference &&
                        arg_KeyReference == _ReferenceListChoiceE3->property_KeyReference)
                {
                    _ReferenceListChoiceE3->current_choice = "http://www.w3.org/2001/04/xmlenc#:KeyReference";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_KeyReference)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "KeyReference is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_ReferenceListChoiceE3_reset_KeyReference(_ReferenceListChoiceE3, env);

                
                if(NULL == arg_KeyReference)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _ReferenceListChoiceE3->property_KeyReference = arg_KeyReference;
                        _ReferenceListChoiceE3->is_valid_KeyReference = AXIS2_TRUE;
                    _ReferenceListChoiceE3->current_choice = "http://www.w3.org/2001/04/xmlenc#:KeyReference";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for KeyReference
            */
           axis2_status_t AXIS2_CALL
           adb_ReferenceListChoiceE3_reset_KeyReference(
                   adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _ReferenceListChoiceE3, AXIS2_FAILURE);
               

               
            
                
                if(_ReferenceListChoiceE3->property_KeyReference != NULL)
                {
                   
                   adb_ReferenceTypeE2_free(_ReferenceListChoiceE3->property_KeyReference, env);
                     _ReferenceListChoiceE3->property_KeyReference = NULL;
                }
            
                
                
                _ReferenceListChoiceE3->is_valid_KeyReference = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether KeyReference is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_ReferenceListChoiceE3_is_KeyReference_nil(
                   adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ReferenceListChoiceE3, AXIS2_TRUE);
               
               return !_ReferenceListChoiceE3->is_valid_KeyReference;
           }

           /**
            * Set KeyReference to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_ReferenceListChoiceE3_set_KeyReference_nil(
                   adb_ReferenceListChoiceE3_t* _ReferenceListChoiceE3,
                   const axutil_env_t *env)
           {
               return adb_ReferenceListChoiceE3_reset_KeyReference(_ReferenceListChoiceE3, env);
           }

           

