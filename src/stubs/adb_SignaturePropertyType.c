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
         * adb_SignaturePropertyType.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_SignaturePropertyType.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = SignaturePropertyType
                 * Namespace URI = http://www.w3.org/2000/09/xmldsig#
                 * Namespace Prefix = ns5
                 */
           


        struct adb_SignaturePropertyType
        {
            axis2_char_t *property_TypeName;

            axutil_array_list_t* property_SignaturePropertyTypeChoice;

                
                axis2_bool_t is_valid_SignaturePropertyTypeChoice;
            axutil_uri_t* property_Target;

                
                axis2_bool_t is_valid_Target;
            axis2_char_t* property_Id;

                
                axis2_bool_t is_valid_Id;
            
        };


       /************************* Private Function prototypes ********************************/
        
                 axis2_status_t AXIS2_CALL
                 adb_SignaturePropertyType_set_SignaturePropertyTypeChoice_nil_at(
                        adb_SignaturePropertyType_t* _SignaturePropertyType, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_SignaturePropertyType_set_SignaturePropertyTypeChoice_nil(
                        adb_SignaturePropertyType_t* _SignaturePropertyType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_SignaturePropertyType_set_Target_nil(
                        adb_SignaturePropertyType_t* _SignaturePropertyType,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_SignaturePropertyType_t* AXIS2_CALL
        adb_SignaturePropertyType_create(
            const axutil_env_t *env)
        {
            adb_SignaturePropertyType_t *_SignaturePropertyType = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _SignaturePropertyType = (adb_SignaturePropertyType_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_SignaturePropertyType_t));

            if(NULL == _SignaturePropertyType)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_SignaturePropertyType, 0, sizeof(adb_SignaturePropertyType_t));

            _SignaturePropertyType->property_TypeName = axutil_strdup(env, "adb_SignaturePropertyType");
            _SignaturePropertyType->property_SignaturePropertyTypeChoice  = NULL;
                  _SignaturePropertyType->is_valid_SignaturePropertyTypeChoice  = AXIS2_FALSE;
            _SignaturePropertyType->property_Target  = NULL;
                  _SignaturePropertyType->is_valid_Target  = AXIS2_FALSE;
            _SignaturePropertyType->property_Id  = NULL;
                  _SignaturePropertyType->is_valid_Id  = AXIS2_FALSE;
            

            return _SignaturePropertyType;
        }

        adb_SignaturePropertyType_t* AXIS2_CALL
        adb_SignaturePropertyType_create_with_values(
            const axutil_env_t *env,
                axutil_array_list_t* _SignaturePropertyTypeChoice,
                axutil_uri_t* _Target,
                axis2_char_t* _Id)
        {
            adb_SignaturePropertyType_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_SignaturePropertyType_create(env);

            
              status = adb_SignaturePropertyType_set_SignaturePropertyTypeChoice(
                                     adb_obj,
                                     env,
                                     _SignaturePropertyTypeChoice);
              if(status == AXIS2_FAILURE) {
                  adb_SignaturePropertyType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_SignaturePropertyType_set_Target(
                                     adb_obj,
                                     env,
                                     _Target);
              if(status == AXIS2_FAILURE) {
                  adb_SignaturePropertyType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_SignaturePropertyType_set_Id(
                                     adb_obj,
                                     env,
                                     _Id);
              if(status == AXIS2_FAILURE) {
                  adb_SignaturePropertyType_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axutil_array_list_t* AXIS2_CALL
                adb_SignaturePropertyType_free_popping_value(
                        adb_SignaturePropertyType_t* _SignaturePropertyType,
                        const axutil_env_t *env)
                {
                    axutil_array_list_t* value;

                    
                    
                    value = _SignaturePropertyType->property_SignaturePropertyTypeChoice;

                    _SignaturePropertyType->property_SignaturePropertyTypeChoice = (axutil_array_list_t*)NULL;
                    adb_SignaturePropertyType_free(_SignaturePropertyType, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_SignaturePropertyType_free(
                adb_SignaturePropertyType_t* _SignaturePropertyType,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _SignaturePropertyType,
                env,
                "adb_SignaturePropertyType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_SignaturePropertyType_free_obj(
                adb_SignaturePropertyType_t* _SignaturePropertyType,
                const axutil_env_t *env)
        {
            
                int i = 0;
                int count = 0;
                void *element = NULL;
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _SignaturePropertyType, AXIS2_FAILURE);

            if (_SignaturePropertyType->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _SignaturePropertyType->property_TypeName);
            }

            adb_SignaturePropertyType_reset_SignaturePropertyTypeChoice(_SignaturePropertyType, env);
            adb_SignaturePropertyType_reset_Target(_SignaturePropertyType, env);
            adb_SignaturePropertyType_reset_Id(_SignaturePropertyType, env);
            

            if(_SignaturePropertyType)
            {
                AXIS2_FREE(env->allocator, _SignaturePropertyType);
                _SignaturePropertyType = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_SignaturePropertyType_deserialize(
                adb_SignaturePropertyType_t* _SignaturePropertyType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _SignaturePropertyType,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_SignaturePropertyType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_SignaturePropertyType_deserialize_obj(
                adb_SignaturePropertyType_t* _SignaturePropertyType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
          
              axiom_attribute_t *parent_attri = NULL;
              axiom_element_t *parent_element = NULL;
              axis2_char_t *attrib_text = NULL;

              axutil_hash_t *attribute_hash = NULL;

          
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
            AXIS2_PARAM_CHECK(env->error, _SignaturePropertyType, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for SignaturePropertyType : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    
                 parent_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                 attribute_hash = axiom_element_get_all_attributes(parent_element, env);
              
                    /*
                     * building SignaturePropertyTypeChoice array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building SignaturePropertyTypeChoice element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "SignaturePropertyTypeChoice", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                  
                               
                               for (i = 0, sequence_broken = 0, current_node = first_node; !sequence_broken && current_node != NULL;) 
                                             
                               {
                                  if(axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                  {
                                     current_node =axiom_node_get_next_sibling(current_node, env);
                                     is_early_node_valid = AXIS2_FALSE;
                                     continue;
                                  }
                                  
                                  current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                  qname = axiom_element_get_qname(current_element, env, current_node);

                                  if (adb_SignaturePropertyTypeChoice_is_particle() ||  
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_SignaturePropertyTypeChoice");
                                          
                                          status =  adb_SignaturePropertyTypeChoice_deserialize((adb_SignaturePropertyTypeChoice_t*)element, env,
                                                                                 &current_node, &is_early_node_valid, AXIS2_FALSE);
                                          
                                          if(AXIS2_FAILURE ==  status)
                                          {
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element SignaturePropertyTypeChoice ");
                                          }
                                          else
                                          {
                                            axutil_array_list_add_at(arr_list, env, i, element);
                                          }
                                        
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for SignaturePropertyTypeChoice ");
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
                                    current_node = axiom_node_get_next_sibling(current_node, env);
                                  }
                                  else
                                  {
                                      is_early_node_valid = AXIS2_FALSE;
                                      sequence_broken = 1;
                                  }
                                  
                               }

                               
                                   if (i < 1)
                                   {
                                     /* found element out of order */
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "SignaturePropertyTypeChoice (@minOccurs = '1') only have %d elements", i);
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
                               

                               if(0 == axutil_array_list_size(arr_list,env))
                               {
                                    axutil_array_list_free(arr_list, env);
                               }
                               else
                               {
                                    status = adb_SignaturePropertyType_set_SignaturePropertyTypeChoice(_SignaturePropertyType, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                
                
                  parent_attri = NULL;
                  attrib_text = NULL;
                  if(attribute_hash)
                  {
                       axutil_hash_index_t *hi;
                       void *val;
                       const void *key;

                       for (hi = axutil_hash_first(attribute_hash, env); hi; hi = axutil_hash_next(env, hi)) 
                       {
                           axutil_hash_this(hi, &key, NULL, &val);
                           
                           
                               if(!strcmp((axis2_char_t*)key, "Target"))
                             
                               {
                                   parent_attri = (axiom_attribute_t*)val;
                                   AXIS2_FREE(env->allocator, hi);
                                   break;
                               }
                       }
                  }

                  if(parent_attri)
                  {
                    attrib_text = axiom_attribute_get_value(parent_attri, env);
                  }
                  else
                  {
                    /* this is hoping that attribute is stored in "Target", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "Target");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_SignaturePropertyType_set_Target(_SignaturePropertyType,
                                                          env, axutil_uri_parse_string(env, attrib_text));
                        
                    }
                  
                    else if(!dont_care_minoccurs)
                    {
                        if(element_qname)
                        {
                            axutil_qname_free(element_qname, env);
                        }
                        /* this is not a nillable element*/
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "required attribute Target missing");
                        return AXIS2_FAILURE;
                    }
                  
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                
                
                  parent_attri = NULL;
                  attrib_text = NULL;
                  if(attribute_hash)
                  {
                       axutil_hash_index_t *hi;
                       void *val;
                       const void *key;

                       for (hi = axutil_hash_first(attribute_hash, env); hi; hi = axutil_hash_next(env, hi)) 
                       {
                           axutil_hash_this(hi, &key, NULL, &val);
                           
                           
                               if(!strcmp((axis2_char_t*)key, "Id"))
                             
                               {
                                   parent_attri = (axiom_attribute_t*)val;
                                   AXIS2_FREE(env->allocator, hi);
                                   break;
                               }
                       }
                  }

                  if(parent_attri)
                  {
                    attrib_text = axiom_attribute_get_value(parent_attri, env);
                  }
                  else
                  {
                    /* this is hoping that attribute is stored in "Id", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "Id");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_SignaturePropertyType_set_Id(_SignaturePropertyType,
                                                          env, attrib_text);
                        
                    }
                  
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_SignaturePropertyType_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_SignaturePropertyType_declare_parent_namespaces(
                    adb_SignaturePropertyType_t* _SignaturePropertyType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_SignaturePropertyType_serialize(
                adb_SignaturePropertyType_t* _SignaturePropertyType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_SignaturePropertyType == NULL)
            {
                return adb_SignaturePropertyType_serialize_obj(
                    _SignaturePropertyType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _SignaturePropertyType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_SignaturePropertyType");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_SignaturePropertyType_serialize_obj(
                adb_SignaturePropertyType_t* _SignaturePropertyType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
               axiom_attribute_t *text_attri = NULL;
             
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
             
                    axis2_char_t text_value_1[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t *text_value_2;
                    axis2_char_t *text_value_2_temp;
                    
                    axis2_char_t *text_value_3;
                    axis2_char_t *text_value_3_temp;
                    
                axis2_char_t *text_value = NULL;
             
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _SignaturePropertyType, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
                if(_SignaturePropertyType->is_valid_Target)
                {
                
                        p_prefix = NULL;
                      
                           text_value = axutil_uri_to_string(_SignaturePropertyType->property_Target, env, AXIS2_URI_UNP_OMITUSERINFO);
                           string_to_stream = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) *
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(text_value) + 
                                                             axutil_strlen("Target")));
                           sprintf(string_to_stream, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "Target",  text_value);
                           axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
                           AXIS2_FREE(env-> allocator, string_to_stream);
                        
                   }
                   
                   else
                   {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute Target");
                      return NULL;
                   }
                   
                if(_SignaturePropertyType->is_valid_Id)
                {
                
                        p_prefix = NULL;
                      
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(_SignaturePropertyType->property_Id) + 
                                                                axutil_strlen("Id")));
                           sprintf(text_value, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "Id", _SignaturePropertyType->property_Id);
                           axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
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
                      

                   if (!_SignaturePropertyType->is_valid_SignaturePropertyTypeChoice)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property SignaturePropertyTypeChoice");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("SignaturePropertyTypeChoice"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("SignaturePropertyTypeChoice")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing SignaturePropertyTypeChoice array
                      */
                     if (_SignaturePropertyType->property_SignaturePropertyTypeChoice != NULL)
                     {
                        

                            sprintf(start_input_str, "<%s%sSignaturePropertyTypeChoice",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%sSignaturePropertyTypeChoice>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_SignaturePropertyType->property_SignaturePropertyTypeChoice, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_SignaturePropertyType->property_SignaturePropertyTypeChoice, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing SignaturePropertyTypeChoice element
                      */

                    
                     
                            if(!adb_SignaturePropertyTypeChoice_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_SignaturePropertyTypeChoice_serialize((adb_SignaturePropertyTypeChoice_t*)element, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_SignaturePropertyTypeChoice_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_SignaturePropertyTypeChoice_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                    
                    if(parent_tag_closed)
                    {
                       if(_SignaturePropertyType->is_valid_Target)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = axutil_uri_to_string(_SignaturePropertyType->property_Target, env, AXIS2_URI_UNP_OMITUSERINFO);
                           text_attri = axiom_attribute_create (env, "Target", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                      
                      else
                      {
                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute Target");
                         return NULL;
                      }
                       
                  }
                
                    
                    if(parent_tag_closed)
                    {
                       if(_SignaturePropertyType->is_valid_Id)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = _SignaturePropertyType->property_Id;
                           text_attri = axiom_attribute_create (env, "Id", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                       
                  }
                

            return parent;
        }


        

            /**
             * Getter for SignaturePropertyTypeChoice by  Property Number 1
             */
            axutil_array_list_t* AXIS2_CALL
            adb_SignaturePropertyType_get_property1(
                adb_SignaturePropertyType_t* _SignaturePropertyType,
                const axutil_env_t *env)
            {
                return adb_SignaturePropertyType_get_SignaturePropertyTypeChoice(_SignaturePropertyType,
                                             env);
            }

            /**
             * getter for SignaturePropertyTypeChoice.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_SignaturePropertyType_get_SignaturePropertyTypeChoice(
                    adb_SignaturePropertyType_t* _SignaturePropertyType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _SignaturePropertyType, NULL);
                  

                return _SignaturePropertyType->property_SignaturePropertyTypeChoice;
             }

            /**
             * setter for SignaturePropertyTypeChoice
             */
            axis2_status_t AXIS2_CALL
            adb_SignaturePropertyType_set_SignaturePropertyTypeChoice(
                    adb_SignaturePropertyType_t* _SignaturePropertyType,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_SignaturePropertyTypeChoice)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _SignaturePropertyType, AXIS2_FAILURE);
                
                if(_SignaturePropertyType->is_valid_SignaturePropertyTypeChoice &&
                        arg_SignaturePropertyTypeChoice == _SignaturePropertyType->property_SignaturePropertyTypeChoice)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_SignaturePropertyTypeChoice, env);
                 
                 if (size < 1)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "SignaturePropertyTypeChoice has less than minOccurs(1)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_SignaturePropertyTypeChoice, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 
                    if(!non_nil_exists)
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of SignaturePropertyTypeChoice is being set to NULL, but it is not a nullable or minOccurs=0 element");
                        return AXIS2_FAILURE;
                    }
                 
                  if(NULL == arg_SignaturePropertyTypeChoice)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "SignaturePropertyTypeChoice is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_SignaturePropertyType_reset_SignaturePropertyTypeChoice(_SignaturePropertyType, env);

                
                if(NULL == arg_SignaturePropertyTypeChoice)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _SignaturePropertyType->property_SignaturePropertyTypeChoice = arg_SignaturePropertyTypeChoice;
                        if(non_nil_exists)
                        {
                            _SignaturePropertyType->is_valid_SignaturePropertyTypeChoice = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of SignaturePropertyTypeChoice.
             */
            adb_SignaturePropertyTypeChoice_t* AXIS2_CALL
            adb_SignaturePropertyType_get_SignaturePropertyTypeChoice_at(
                    adb_SignaturePropertyType_t* _SignaturePropertyType,
                    const axutil_env_t *env, int i)
            {
                adb_SignaturePropertyTypeChoice_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _SignaturePropertyType, NULL);
                  

                if(_SignaturePropertyType->property_SignaturePropertyTypeChoice == NULL)
                {
                    return (adb_SignaturePropertyTypeChoice_t*)0;
                }
                ret_val = (adb_SignaturePropertyTypeChoice_t*)axutil_array_list_get(_SignaturePropertyType->property_SignaturePropertyTypeChoice, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of SignaturePropertyTypeChoice.
             */
            axis2_status_t AXIS2_CALL
            adb_SignaturePropertyType_set_SignaturePropertyTypeChoice_at(
                    adb_SignaturePropertyType_t* _SignaturePropertyType,
                    const axutil_env_t *env, int i,
                    adb_SignaturePropertyTypeChoice_t* arg_SignaturePropertyTypeChoice)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _SignaturePropertyType, AXIS2_FAILURE);
                
                if( _SignaturePropertyType->is_valid_SignaturePropertyTypeChoice &&
                    _SignaturePropertyType->property_SignaturePropertyTypeChoice &&
                
                    arg_SignaturePropertyTypeChoice == (adb_SignaturePropertyTypeChoice_t*)axutil_array_list_get(_SignaturePropertyType->property_SignaturePropertyTypeChoice, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_SignaturePropertyTypeChoice)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_SignaturePropertyType->property_SignaturePropertyTypeChoice != NULL)
                        {
                            size = axutil_array_list_size(_SignaturePropertyType->property_SignaturePropertyTypeChoice, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_SignaturePropertyType->property_SignaturePropertyTypeChoice, env, i))
                                {
                                    non_nil_count ++;
                                    non_nil_exists = AXIS2_TRUE;
                                    if(non_nil_count >= 1)
                                    {
                                        break;
                                    }
                                }
                            }

                         
                            if( non_nil_count < 1)
                            {
                                   AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of SignaturePropertyTypeChoice is beinng set to be smaller than the specificed number of minOccurs(1)");
                                   return AXIS2_FAILURE;
                            }
                        
                        }
                    }
                  
                   if(!non_nil_exists)
                   {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of SignaturePropertyTypeChoice is being set to NULL, but it is not a nullable or minOccurs=0 element");
                       return AXIS2_FAILURE;
                   }
                

                if(_SignaturePropertyType->property_SignaturePropertyTypeChoice == NULL)
                {
                    _SignaturePropertyType->property_SignaturePropertyTypeChoice = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_SignaturePropertyType->property_SignaturePropertyTypeChoice, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_SignaturePropertyTypeChoice_free((adb_SignaturePropertyTypeChoice_t*)element, env);
                     
                }

                
                   axutil_array_list_set(_SignaturePropertyType->property_SignaturePropertyTypeChoice , env, i, arg_SignaturePropertyTypeChoice);
                  _SignaturePropertyType->is_valid_SignaturePropertyTypeChoice = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to SignaturePropertyTypeChoice.
             */
            axis2_status_t AXIS2_CALL
            adb_SignaturePropertyType_add_SignaturePropertyTypeChoice(
                    adb_SignaturePropertyType_t* _SignaturePropertyType,
                    const axutil_env_t *env,
                    adb_SignaturePropertyTypeChoice_t* arg_SignaturePropertyTypeChoice)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _SignaturePropertyType, AXIS2_FAILURE);

                
                    if(NULL == arg_SignaturePropertyTypeChoice)
                    {
                      
                           AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of SignaturePropertyTypeChoice is being set to NULL, but it is not a nullable or minOccurs=0 element");
                           return AXIS2_FAILURE;
                        
                    }
                  

                if(_SignaturePropertyType->property_SignaturePropertyTypeChoice == NULL)
                {
                    _SignaturePropertyType->property_SignaturePropertyTypeChoice = axutil_array_list_create(env, 10);
                }
                if(_SignaturePropertyType->property_SignaturePropertyTypeChoice == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for SignaturePropertyTypeChoice");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_SignaturePropertyType->property_SignaturePropertyTypeChoice , env, arg_SignaturePropertyTypeChoice);
                  _SignaturePropertyType->is_valid_SignaturePropertyTypeChoice = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the SignaturePropertyTypeChoice array.
             */
            int AXIS2_CALL
            adb_SignaturePropertyType_sizeof_SignaturePropertyTypeChoice(
                    adb_SignaturePropertyType_t* _SignaturePropertyType,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _SignaturePropertyType, -1);
                if(_SignaturePropertyType->property_SignaturePropertyTypeChoice == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_SignaturePropertyType->property_SignaturePropertyTypeChoice, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_SignaturePropertyType_remove_SignaturePropertyTypeChoice_at(
                    adb_SignaturePropertyType_t* _SignaturePropertyType,
                    const axutil_env_t *env, int i)
            {
                return adb_SignaturePropertyType_set_SignaturePropertyTypeChoice_nil_at(_SignaturePropertyType, env, i);
            }

            

           /**
            * resetter for SignaturePropertyTypeChoice
            */
           axis2_status_t AXIS2_CALL
           adb_SignaturePropertyType_reset_SignaturePropertyTypeChoice(
                   adb_SignaturePropertyType_t* _SignaturePropertyType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _SignaturePropertyType, AXIS2_FAILURE);
               

               
                  if (_SignaturePropertyType->property_SignaturePropertyTypeChoice != NULL)
                  {
                      count = axutil_array_list_size(_SignaturePropertyType->property_SignaturePropertyTypeChoice, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_SignaturePropertyType->property_SignaturePropertyTypeChoice, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   adb_SignaturePropertyTypeChoice_free((adb_SignaturePropertyTypeChoice_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_SignaturePropertyType->property_SignaturePropertyTypeChoice, env);
                  }
                _SignaturePropertyType->is_valid_SignaturePropertyTypeChoice = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether SignaturePropertyTypeChoice is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_SignaturePropertyType_is_SignaturePropertyTypeChoice_nil(
                   adb_SignaturePropertyType_t* _SignaturePropertyType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _SignaturePropertyType, AXIS2_TRUE);
               
               return !_SignaturePropertyType->is_valid_SignaturePropertyTypeChoice;
           }

           /**
            * Set SignaturePropertyTypeChoice to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_SignaturePropertyType_set_SignaturePropertyTypeChoice_nil(
                   adb_SignaturePropertyType_t* _SignaturePropertyType,
                   const axutil_env_t *env)
           {
               return adb_SignaturePropertyType_reset_SignaturePropertyTypeChoice(_SignaturePropertyType, env);
           }

           
           /**
            * Check whether SignaturePropertyTypeChoice is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_SignaturePropertyType_is_SignaturePropertyTypeChoice_nil_at(
                   adb_SignaturePropertyType_t* _SignaturePropertyType,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _SignaturePropertyType, AXIS2_TRUE);
               
               return (_SignaturePropertyType->is_valid_SignaturePropertyTypeChoice == AXIS2_FALSE ||
                        NULL == _SignaturePropertyType->property_SignaturePropertyTypeChoice || 
                        NULL == axutil_array_list_get(_SignaturePropertyType->property_SignaturePropertyTypeChoice, env, i));
           }

           /**
            * Set SignaturePropertyTypeChoice to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_SignaturePropertyType_set_SignaturePropertyTypeChoice_nil_at(
                   adb_SignaturePropertyType_t* _SignaturePropertyType,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _SignaturePropertyType, AXIS2_FAILURE);

                if(_SignaturePropertyType->property_SignaturePropertyTypeChoice == NULL ||
                            _SignaturePropertyType->is_valid_SignaturePropertyTypeChoice == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_SignaturePropertyType->property_SignaturePropertyTypeChoice, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_SignaturePropertyType->property_SignaturePropertyTypeChoice, env, i))
                        {
                            k ++;
                            non_nil_exists = AXIS2_TRUE;
                            if( k >= 1)
                            {
                                break;
                            }
                        }
                    }
                }
                
                   if(!non_nil_exists)
                   {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of SignaturePropertyTypeChoice is being set to NULL, but it is not a nullable or minOccurs=0 element");
                       return AXIS2_FAILURE;
                   }
                

                if( k < 1)
                {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of SignaturePropertyTypeChoice is beinng set to be smaller than the specificed number of minOccurs(1)");
                       return AXIS2_FAILURE;
                }
 
                if(_SignaturePropertyType->property_SignaturePropertyTypeChoice == NULL)
                {
                    _SignaturePropertyType->is_valid_SignaturePropertyTypeChoice = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_SignaturePropertyType->property_SignaturePropertyTypeChoice, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_SignaturePropertyTypeChoice_free((adb_SignaturePropertyTypeChoice_t*)element, env);
                     
                }

                

                
                axutil_array_list_set(_SignaturePropertyType->property_SignaturePropertyTypeChoice , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for Target by  Property Number 2
             */
            axutil_uri_t* AXIS2_CALL
            adb_SignaturePropertyType_get_property2(
                adb_SignaturePropertyType_t* _SignaturePropertyType,
                const axutil_env_t *env)
            {
                return adb_SignaturePropertyType_get_Target(_SignaturePropertyType,
                                             env);
            }

            /**
             * getter for Target.
             */
            axutil_uri_t* AXIS2_CALL
            adb_SignaturePropertyType_get_Target(
                    adb_SignaturePropertyType_t* _SignaturePropertyType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _SignaturePropertyType, NULL);
                  

                return _SignaturePropertyType->property_Target;
             }

            /**
             * setter for Target
             */
            axis2_status_t AXIS2_CALL
            adb_SignaturePropertyType_set_Target(
                    adb_SignaturePropertyType_t* _SignaturePropertyType,
                    const axutil_env_t *env,
                    axutil_uri_t*  arg_Target)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _SignaturePropertyType, AXIS2_FAILURE);
                
                if(_SignaturePropertyType->is_valid_Target &&
                        arg_Target == _SignaturePropertyType->property_Target)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_Target)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Target is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_SignaturePropertyType_reset_Target(_SignaturePropertyType, env);

                
                if(NULL == arg_Target)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _SignaturePropertyType->property_Target = arg_Target;
                        _SignaturePropertyType->is_valid_Target = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for Target
            */
           axis2_status_t AXIS2_CALL
           adb_SignaturePropertyType_reset_Target(
                   adb_SignaturePropertyType_t* _SignaturePropertyType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _SignaturePropertyType, AXIS2_FAILURE);
               

               
            
                
                if(_SignaturePropertyType->property_Target != NULL)
                {
                   
                   
                      axutil_uri_free(_SignaturePropertyType->property_Target, env);
                     _SignaturePropertyType->property_Target = NULL;
                }
            
                
                
                _SignaturePropertyType->is_valid_Target = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether Target is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_SignaturePropertyType_is_Target_nil(
                   adb_SignaturePropertyType_t* _SignaturePropertyType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _SignaturePropertyType, AXIS2_TRUE);
               
               return !_SignaturePropertyType->is_valid_Target;
           }

           /**
            * Set Target to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_SignaturePropertyType_set_Target_nil(
                   adb_SignaturePropertyType_t* _SignaturePropertyType,
                   const axutil_env_t *env)
           {
               return adb_SignaturePropertyType_reset_Target(_SignaturePropertyType, env);
           }

           

            /**
             * Getter for Id by  Property Number 3
             */
            axis2_char_t* AXIS2_CALL
            adb_SignaturePropertyType_get_property3(
                adb_SignaturePropertyType_t* _SignaturePropertyType,
                const axutil_env_t *env)
            {
                return adb_SignaturePropertyType_get_Id(_SignaturePropertyType,
                                             env);
            }

            /**
             * getter for Id.
             */
            axis2_char_t* AXIS2_CALL
            adb_SignaturePropertyType_get_Id(
                    adb_SignaturePropertyType_t* _SignaturePropertyType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _SignaturePropertyType, NULL);
                  

                return _SignaturePropertyType->property_Id;
             }

            /**
             * setter for Id
             */
            axis2_status_t AXIS2_CALL
            adb_SignaturePropertyType_set_Id(
                    adb_SignaturePropertyType_t* _SignaturePropertyType,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_Id)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _SignaturePropertyType, AXIS2_FAILURE);
                
                if(_SignaturePropertyType->is_valid_Id &&
                        arg_Id == _SignaturePropertyType->property_Id)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_Id)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Id is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_SignaturePropertyType_reset_Id(_SignaturePropertyType, env);

                
                if(NULL == arg_Id)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _SignaturePropertyType->property_Id = (axis2_char_t *)axutil_strdup(env, arg_Id);
                        if(NULL == _SignaturePropertyType->property_Id)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for Id");
                            return AXIS2_FAILURE;
                        }
                        _SignaturePropertyType->is_valid_Id = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for Id
            */
           axis2_status_t AXIS2_CALL
           adb_SignaturePropertyType_reset_Id(
                   adb_SignaturePropertyType_t* _SignaturePropertyType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _SignaturePropertyType, AXIS2_FAILURE);
               

               
            
                
                if(_SignaturePropertyType->property_Id != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _SignaturePropertyType->property_Id);
                     _SignaturePropertyType->property_Id = NULL;
                }
            
                
                
                _SignaturePropertyType->is_valid_Id = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether Id is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_SignaturePropertyType_is_Id_nil(
                   adb_SignaturePropertyType_t* _SignaturePropertyType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _SignaturePropertyType, AXIS2_TRUE);
               
               return !_SignaturePropertyType->is_valid_Id;
           }

           /**
            * Set Id to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_SignaturePropertyType_set_Id_nil(
                   adb_SignaturePropertyType_t* _SignaturePropertyType,
                   const axutil_env_t *env)
           {
               return adb_SignaturePropertyType_reset_Id(_SignaturePropertyType, env);
           }

           

