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
         * adb_EncryptionPropertyType.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_EncryptionPropertyType.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = EncryptionPropertyType
                 * Namespace URI = http://www.w3.org/2001/04/xmlenc#
                 * Namespace Prefix = ns6
                 */
           


        struct adb_EncryptionPropertyType
        {
            axis2_char_t *property_TypeName;

            axutil_array_list_t* property_EncryptionPropertyTypeChoice;

                
                axis2_bool_t is_valid_EncryptionPropertyTypeChoice;
            axutil_uri_t* property_Target;

                
                axis2_bool_t is_valid_Target;
            axis2_char_t* property_Id;

                
                axis2_bool_t is_valid_Id;
            axutil_array_list_t* property_extraAttributes;

                
                axis2_bool_t is_valid_extraAttributes;
            
        };


       /************************* Private Function prototypes ********************************/
        
                 axis2_status_t AXIS2_CALL
                 adb_EncryptionPropertyType_set_EncryptionPropertyTypeChoice_nil_at(
                        adb_EncryptionPropertyType_t* _EncryptionPropertyType, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_EncryptionPropertyType_set_EncryptionPropertyTypeChoice_nil(
                        adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                        const axutil_env_t *env);
            
                 axis2_status_t AXIS2_CALL
                 adb_EncryptionPropertyType_set_extraAttributes_nil_at(
                        adb_EncryptionPropertyType_t* _EncryptionPropertyType, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_EncryptionPropertyType_set_extraAttributes_nil(
                        adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_EncryptionPropertyType_t* AXIS2_CALL
        adb_EncryptionPropertyType_create(
            const axutil_env_t *env)
        {
            adb_EncryptionPropertyType_t *_EncryptionPropertyType = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _EncryptionPropertyType = (adb_EncryptionPropertyType_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_EncryptionPropertyType_t));

            if(NULL == _EncryptionPropertyType)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_EncryptionPropertyType, 0, sizeof(adb_EncryptionPropertyType_t));

            _EncryptionPropertyType->property_TypeName = axutil_strdup(env, "adb_EncryptionPropertyType");
            _EncryptionPropertyType->property_EncryptionPropertyTypeChoice  = NULL;
                  _EncryptionPropertyType->is_valid_EncryptionPropertyTypeChoice  = AXIS2_FALSE;
            _EncryptionPropertyType->property_Target  = NULL;
                  _EncryptionPropertyType->is_valid_Target  = AXIS2_FALSE;
            _EncryptionPropertyType->property_Id  = NULL;
                  _EncryptionPropertyType->is_valid_Id  = AXIS2_FALSE;
            _EncryptionPropertyType->is_valid_extraAttributes  = AXIS2_FALSE;
            

            return _EncryptionPropertyType;
        }

        adb_EncryptionPropertyType_t* AXIS2_CALL
        adb_EncryptionPropertyType_create_with_values(
            const axutil_env_t *env,
                axutil_array_list_t* _EncryptionPropertyTypeChoice,
                axutil_uri_t* _Target,
                axis2_char_t* _Id,
                axutil_array_list_t* _extraAttributes)
        {
            adb_EncryptionPropertyType_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_EncryptionPropertyType_create(env);

            
              status = adb_EncryptionPropertyType_set_EncryptionPropertyTypeChoice(
                                     adb_obj,
                                     env,
                                     _EncryptionPropertyTypeChoice);
              if(status == AXIS2_FAILURE) {
                  adb_EncryptionPropertyType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_EncryptionPropertyType_set_Target(
                                     adb_obj,
                                     env,
                                     _Target);
              if(status == AXIS2_FAILURE) {
                  adb_EncryptionPropertyType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_EncryptionPropertyType_set_Id(
                                     adb_obj,
                                     env,
                                     _Id);
              if(status == AXIS2_FAILURE) {
                  adb_EncryptionPropertyType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_EncryptionPropertyType_set_extraAttributes(
                                     adb_obj,
                                     env,
                                     _extraAttributes);
              if(status == AXIS2_FAILURE) {
                  adb_EncryptionPropertyType_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axutil_array_list_t* AXIS2_CALL
                adb_EncryptionPropertyType_free_popping_value(
                        adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                        const axutil_env_t *env)
                {
                    axutil_array_list_t* value;

                    
                    
                    value = _EncryptionPropertyType->property_EncryptionPropertyTypeChoice;

                    _EncryptionPropertyType->property_EncryptionPropertyTypeChoice = (axutil_array_list_t*)NULL;
                    adb_EncryptionPropertyType_free(_EncryptionPropertyType, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyType_free(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _EncryptionPropertyType,
                env,
                "adb_EncryptionPropertyType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyType_free_obj(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                const axutil_env_t *env)
        {
            
                int i = 0;
                int count = 0;
                void *element = NULL;
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, AXIS2_FAILURE);

            if (_EncryptionPropertyType->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _EncryptionPropertyType->property_TypeName);
            }

            adb_EncryptionPropertyType_reset_EncryptionPropertyTypeChoice(_EncryptionPropertyType, env);
            adb_EncryptionPropertyType_reset_Target(_EncryptionPropertyType, env);
            adb_EncryptionPropertyType_reset_Id(_EncryptionPropertyType, env);
            adb_EncryptionPropertyType_reset_extraAttributes(_EncryptionPropertyType, env);
            

            if(_EncryptionPropertyType)
            {
                AXIS2_FREE(env->allocator, _EncryptionPropertyType);
                _EncryptionPropertyType = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyType_deserialize(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _EncryptionPropertyType,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_EncryptionPropertyType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyType_deserialize_obj(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType,
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
            AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for EncryptionPropertyType : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    
                 parent_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                 attribute_hash = axiom_element_get_all_attributes(parent_element, env);
              
                    /*
                     * building EncryptionPropertyTypeChoice array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building EncryptionPropertyTypeChoice element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "EncryptionPropertyTypeChoice", "http://www.w3.org/2001/04/xmlenc#", NULL);
                                  
                               
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

                                  if (adb_EncryptionPropertyTypeChoice_is_particle() ||  
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_EncryptionPropertyTypeChoice");
                                          
                                          status =  adb_EncryptionPropertyTypeChoice_deserialize((adb_EncryptionPropertyTypeChoice_t*)element, env,
                                                                                 &current_node, &is_early_node_valid, AXIS2_FALSE);
                                          
                                          if(AXIS2_FAILURE ==  status)
                                          {
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element EncryptionPropertyTypeChoice ");
                                          }
                                          else
                                          {
                                            axutil_array_list_add_at(arr_list, env, i, element);
                                          }
                                        
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for EncryptionPropertyTypeChoice ");
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
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "EncryptionPropertyTypeChoice (@minOccurs = '1') only have %d elements", i);
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
                                    status = adb_EncryptionPropertyType_set_EncryptionPropertyTypeChoice(_EncryptionPropertyType, env,
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
                      
                      adb_EncryptionPropertyType_set_Target(_EncryptionPropertyType,
                                                          env, axutil_uri_parse_string(env, attrib_text));
                        
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
                      
                      adb_EncryptionPropertyType_set_Id(_EncryptionPropertyType,
                                                          env, attrib_text);
                        
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
                       axis2_char_t *dup_key;


                       char *seperator = NULL;
                       axis2_char_t *uri = NULL;
                       axiom_namespace_t *namespace = NULL;

                       axiom_attribute_t *new_attrib = NULL;

                       for (hi = axutil_hash_first(attribute_hash, env); hi; hi = axutil_hash_next(env, hi)) 
                       {
                           axutil_hash_this(hi, &key, NULL, &val);
                          
                           dup_key = axutil_strdup(env, key);
                           seperator = strstr(dup_key, "|");
                          
                           uri = NULL;
                           if(seperator) /* this means the attribute is qualified with a namespace */
                           {
                             *seperator = '\0';
                             seperator ++; /* represent the namespace */
                             uri = seperator;
                           }

                           namespace  = axiom_namespace_create(env, uri, NULL);
                           parent_attri = (axiom_attribute_t*)val;
                           attrib_text = axiom_attribute_get_value(parent_attri, env);

                           new_attrib = axiom_attribute_create(env, dup_key, attrib_text, namespace);


                           adb_EncryptionPropertyType_add_extraAttributes(_EncryptionPropertyType,
                                                          env, new_attrib);
                           AXIS2_FREE(env->allocator, dup_key);
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
          adb_EncryptionPropertyType_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_EncryptionPropertyType_declare_parent_namespaces(
                    adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_EncryptionPropertyType_serialize(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_EncryptionPropertyType == NULL)
            {
                return adb_EncryptionPropertyType_serialize_obj(
                    _EncryptionPropertyType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _EncryptionPropertyType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_EncryptionPropertyType");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_EncryptionPropertyType_serialize_obj(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType,
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
                    
                    axis2_char_t text_value_4[ADB_DEFAULT_DIGIT_LIMIT];
                    
                axis2_char_t *text_value = NULL;
             
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
                if(_EncryptionPropertyType->is_valid_Target)
                {
                
                        p_prefix = NULL;
                      
                           text_value = axutil_uri_to_string(_EncryptionPropertyType->property_Target, env, AXIS2_URI_UNP_OMITUSERINFO);
                           string_to_stream = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) *
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(text_value) + 
                                                             axutil_strlen("Target")));
                           sprintf(string_to_stream, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "Target",  text_value);
                           axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
                           AXIS2_FREE(env-> allocator, string_to_stream);
                        
                   }
                   
                if(_EncryptionPropertyType->is_valid_Id)
                {
                
                        p_prefix = NULL;
                      
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(_EncryptionPropertyType->property_Id) + 
                                                                axutil_strlen("Id")));
                           sprintf(text_value, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "Id", _EncryptionPropertyType->property_Id);
                           axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
                if(_EncryptionPropertyType->is_valid_extraAttributes)
                {
                
                    int i = 0;
                    for( i = 0; i < axutil_array_list_size(_EncryptionPropertyType->property_extraAttributes, env); i ++)
                    {
                        axiom_attribute_t *the_attrib = NULL;
                        axiom_attribute_t *dup_attrib = NULL;
                        axis2_char_t *uri = NULL;
                        axis2_char_t *p_prefix = NULL;
                        axutil_qname_t *qname = NULL;
                        axis2_char_t *value = NULL;
                        axis2_char_t *local_name = NULL;

                        the_attrib = axutil_array_list_get(_EncryptionPropertyType->property_extraAttributes, env, i);
                        qname = axiom_attribute_get_qname(the_attrib, env);
                        uri = axutil_qname_get_uri(qname, env);
                        value = axiom_attribute_get_value(the_attrib, env);
                        local_name = axutil_qname_get_localpart(qname, env);

                        p_prefix = NULL;
                        if(uri) /* means we have to go for a prefix */
                        {
                            if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, uri, AXIS2_HASH_KEY_STRING)))
                            {
                                p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                                sprintf(p_prefix, "n%d", (*next_ns_index)++);
                                axutil_hash_set(namespaces, uri, AXIS2_HASH_KEY_STRING, p_prefix);
                                axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                                         uri,
                                                         p_prefix));
                                 
                            }

                        }

                        text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                         (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                          axutil_strlen(local_name) + 
                                                             axutil_strlen(value)));
                        sprintf(text_value, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                             local_name, value);
                        axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                        AXIS2_FREE(env-> allocator, text_value);
                    }
                
                   }
                   
              
 
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
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"EncryptionPropertyType\"", NULL);
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
                                 "http://www.w3.org/2001/04/xmlenc#",
                                 xsi_prefix);
            xsi_type_attri = axiom_attribute_create (env, "type", "EncryptionPropertyType", xsi_ns);
            
            axiom_element_add_attribute (parent_element, env, xsi_type_attri, parent);
        
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/04/xmlenc#", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.w3.org/2001/04/xmlenc#", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.w3.org/2001/04/xmlenc#",
                                            p_prefix));
                       }
                      

                   if (!_EncryptionPropertyType->is_valid_EncryptionPropertyTypeChoice)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property EncryptionPropertyTypeChoice");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("EncryptionPropertyTypeChoice"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("EncryptionPropertyTypeChoice")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing EncryptionPropertyTypeChoice array
                      */
                     if (_EncryptionPropertyType->property_EncryptionPropertyTypeChoice != NULL)
                     {
                        

                            sprintf(start_input_str, "<%s%sEncryptionPropertyTypeChoice",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%sEncryptionPropertyTypeChoice>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_EncryptionPropertyType->property_EncryptionPropertyTypeChoice, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_EncryptionPropertyType->property_EncryptionPropertyTypeChoice, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing EncryptionPropertyTypeChoice element
                      */

                    
                     
                            if(!adb_EncryptionPropertyTypeChoice_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_EncryptionPropertyTypeChoice_serialize((adb_EncryptionPropertyTypeChoice_t*)element, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_EncryptionPropertyTypeChoice_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_EncryptionPropertyTypeChoice_is_particle())
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
                       if(_EncryptionPropertyType->is_valid_Target)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = axutil_uri_to_string(_EncryptionPropertyType->property_Target, env, AXIS2_URI_UNP_OMITUSERINFO);
                           text_attri = axiom_attribute_create (env, "Target", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                       
                  }
                
                    
                    if(parent_tag_closed)
                    {
                       if(_EncryptionPropertyType->is_valid_Id)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = _EncryptionPropertyType->property_Id;
                           text_attri = axiom_attribute_create (env, "Id", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                       
                  }
                
                    
                    if(parent_tag_closed)
                    {
                       if(_EncryptionPropertyType->is_valid_extraAttributes)
                       {
                       
                        int i = 0;
                        for( i = 0; i < axutil_array_list_size(_EncryptionPropertyType->property_extraAttributes, env); i ++)
                        {
                            axiom_attribute_t *the_attrib = NULL;
                            axiom_attribute_t *dup_attrib = NULL;
                            axis2_char_t *uri = NULL;
                            axis2_char_t *p_prefix = NULL;
                            axutil_qname_t *qname = NULL;
                            axis2_char_t *value = NULL;
                            axis2_char_t *local_name = NULL;
                            axiom_namespace_t *ns1 = NULL;

                            the_attrib = axutil_array_list_get(_EncryptionPropertyType->property_extraAttributes, env, i);
                            qname = axiom_attribute_get_qname(the_attrib, env);
                            uri = axutil_qname_get_uri(qname, env);
                            value = axiom_attribute_get_value(the_attrib, env);
                            local_name = axutil_qname_get_localpart(qname, env);

                            p_prefix = NULL;
                            if(uri) /* means we have to go for a prefix */
                            {
                                if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, uri, AXIS2_HASH_KEY_STRING)))
                                {
                                    p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                                    sprintf(p_prefix, "n%d", (*next_ns_index)++);
                                    axutil_hash_set(namespaces, uri, AXIS2_HASH_KEY_STRING, p_prefix);
                                    axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                                             uri,
                                                             p_prefix));
                                     
                                }

                            }

                            ns1 = axiom_namespace_create (env,
                                                uri,
                                                p_prefix);

                            dup_attrib = axiom_attribute_create (env, local_name, value, ns1);
                            
                            axiom_element_add_attribute (parent_element, env, dup_attrib, parent);

                        }
                       
                      }
                       
                  }
                

            return parent;
        }


        

            /**
             * Getter for EncryptionPropertyTypeChoice by  Property Number 1
             */
            axutil_array_list_t* AXIS2_CALL
            adb_EncryptionPropertyType_get_property1(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                const axutil_env_t *env)
            {
                return adb_EncryptionPropertyType_get_EncryptionPropertyTypeChoice(_EncryptionPropertyType,
                                             env);
            }

            /**
             * getter for EncryptionPropertyTypeChoice.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_EncryptionPropertyType_get_EncryptionPropertyTypeChoice(
                    adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, NULL);
                  

                return _EncryptionPropertyType->property_EncryptionPropertyTypeChoice;
             }

            /**
             * setter for EncryptionPropertyTypeChoice
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptionPropertyType_set_EncryptionPropertyTypeChoice(
                    adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_EncryptionPropertyTypeChoice)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, AXIS2_FAILURE);
                
                if(_EncryptionPropertyType->is_valid_EncryptionPropertyTypeChoice &&
                        arg_EncryptionPropertyTypeChoice == _EncryptionPropertyType->property_EncryptionPropertyTypeChoice)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_EncryptionPropertyTypeChoice, env);
                 
                 if (size < 1)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "EncryptionPropertyTypeChoice has less than minOccurs(1)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_EncryptionPropertyTypeChoice, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 
                    if(!non_nil_exists)
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of EncryptionPropertyTypeChoice is being set to NULL, but it is not a nullable or minOccurs=0 element");
                        return AXIS2_FAILURE;
                    }
                 
                  if(NULL == arg_EncryptionPropertyTypeChoice)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "EncryptionPropertyTypeChoice is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_EncryptionPropertyType_reset_EncryptionPropertyTypeChoice(_EncryptionPropertyType, env);

                
                if(NULL == arg_EncryptionPropertyTypeChoice)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _EncryptionPropertyType->property_EncryptionPropertyTypeChoice = arg_EncryptionPropertyTypeChoice;
                        if(non_nil_exists)
                        {
                            _EncryptionPropertyType->is_valid_EncryptionPropertyTypeChoice = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of EncryptionPropertyTypeChoice.
             */
            adb_EncryptionPropertyTypeChoice_t* AXIS2_CALL
            adb_EncryptionPropertyType_get_EncryptionPropertyTypeChoice_at(
                    adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                    const axutil_env_t *env, int i)
            {
                adb_EncryptionPropertyTypeChoice_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, NULL);
                  

                if(_EncryptionPropertyType->property_EncryptionPropertyTypeChoice == NULL)
                {
                    return (adb_EncryptionPropertyTypeChoice_t*)0;
                }
                ret_val = (adb_EncryptionPropertyTypeChoice_t*)axutil_array_list_get(_EncryptionPropertyType->property_EncryptionPropertyTypeChoice, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of EncryptionPropertyTypeChoice.
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptionPropertyType_set_EncryptionPropertyTypeChoice_at(
                    adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                    const axutil_env_t *env, int i,
                    adb_EncryptionPropertyTypeChoice_t* arg_EncryptionPropertyTypeChoice)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, AXIS2_FAILURE);
                
                if( _EncryptionPropertyType->is_valid_EncryptionPropertyTypeChoice &&
                    _EncryptionPropertyType->property_EncryptionPropertyTypeChoice &&
                
                    arg_EncryptionPropertyTypeChoice == (adb_EncryptionPropertyTypeChoice_t*)axutil_array_list_get(_EncryptionPropertyType->property_EncryptionPropertyTypeChoice, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_EncryptionPropertyTypeChoice)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_EncryptionPropertyType->property_EncryptionPropertyTypeChoice != NULL)
                        {
                            size = axutil_array_list_size(_EncryptionPropertyType->property_EncryptionPropertyTypeChoice, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_EncryptionPropertyType->property_EncryptionPropertyTypeChoice, env, i))
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
                                   AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of EncryptionPropertyTypeChoice is beinng set to be smaller than the specificed number of minOccurs(1)");
                                   return AXIS2_FAILURE;
                            }
                        
                        }
                    }
                  
                   if(!non_nil_exists)
                   {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of EncryptionPropertyTypeChoice is being set to NULL, but it is not a nullable or minOccurs=0 element");
                       return AXIS2_FAILURE;
                   }
                

                if(_EncryptionPropertyType->property_EncryptionPropertyTypeChoice == NULL)
                {
                    _EncryptionPropertyType->property_EncryptionPropertyTypeChoice = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_EncryptionPropertyType->property_EncryptionPropertyTypeChoice, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_EncryptionPropertyTypeChoice_free((adb_EncryptionPropertyTypeChoice_t*)element, env);
                     
                }

                
                   axutil_array_list_set(_EncryptionPropertyType->property_EncryptionPropertyTypeChoice , env, i, arg_EncryptionPropertyTypeChoice);
                  _EncryptionPropertyType->is_valid_EncryptionPropertyTypeChoice = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to EncryptionPropertyTypeChoice.
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptionPropertyType_add_EncryptionPropertyTypeChoice(
                    adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                    const axutil_env_t *env,
                    adb_EncryptionPropertyTypeChoice_t* arg_EncryptionPropertyTypeChoice)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, AXIS2_FAILURE);

                
                    if(NULL == arg_EncryptionPropertyTypeChoice)
                    {
                      
                           AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of EncryptionPropertyTypeChoice is being set to NULL, but it is not a nullable or minOccurs=0 element");
                           return AXIS2_FAILURE;
                        
                    }
                  

                if(_EncryptionPropertyType->property_EncryptionPropertyTypeChoice == NULL)
                {
                    _EncryptionPropertyType->property_EncryptionPropertyTypeChoice = axutil_array_list_create(env, 10);
                }
                if(_EncryptionPropertyType->property_EncryptionPropertyTypeChoice == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for EncryptionPropertyTypeChoice");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_EncryptionPropertyType->property_EncryptionPropertyTypeChoice , env, arg_EncryptionPropertyTypeChoice);
                  _EncryptionPropertyType->is_valid_EncryptionPropertyTypeChoice = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the EncryptionPropertyTypeChoice array.
             */
            int AXIS2_CALL
            adb_EncryptionPropertyType_sizeof_EncryptionPropertyTypeChoice(
                    adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, -1);
                if(_EncryptionPropertyType->property_EncryptionPropertyTypeChoice == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_EncryptionPropertyType->property_EncryptionPropertyTypeChoice, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptionPropertyType_remove_EncryptionPropertyTypeChoice_at(
                    adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                    const axutil_env_t *env, int i)
            {
                return adb_EncryptionPropertyType_set_EncryptionPropertyTypeChoice_nil_at(_EncryptionPropertyType, env, i);
            }

            

           /**
            * resetter for EncryptionPropertyTypeChoice
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptionPropertyType_reset_EncryptionPropertyTypeChoice(
                   adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, AXIS2_FAILURE);
               

               
                  if (_EncryptionPropertyType->property_EncryptionPropertyTypeChoice != NULL)
                  {
                      count = axutil_array_list_size(_EncryptionPropertyType->property_EncryptionPropertyTypeChoice, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_EncryptionPropertyType->property_EncryptionPropertyTypeChoice, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   adb_EncryptionPropertyTypeChoice_free((adb_EncryptionPropertyTypeChoice_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_EncryptionPropertyType->property_EncryptionPropertyTypeChoice, env);
                  }
                _EncryptionPropertyType->is_valid_EncryptionPropertyTypeChoice = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether EncryptionPropertyTypeChoice is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_EncryptionPropertyType_is_EncryptionPropertyTypeChoice_nil(
                   adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, AXIS2_TRUE);
               
               return !_EncryptionPropertyType->is_valid_EncryptionPropertyTypeChoice;
           }

           /**
            * Set EncryptionPropertyTypeChoice to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptionPropertyType_set_EncryptionPropertyTypeChoice_nil(
                   adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                   const axutil_env_t *env)
           {
               return adb_EncryptionPropertyType_reset_EncryptionPropertyTypeChoice(_EncryptionPropertyType, env);
           }

           
           /**
            * Check whether EncryptionPropertyTypeChoice is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_EncryptionPropertyType_is_EncryptionPropertyTypeChoice_nil_at(
                   adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, AXIS2_TRUE);
               
               return (_EncryptionPropertyType->is_valid_EncryptionPropertyTypeChoice == AXIS2_FALSE ||
                        NULL == _EncryptionPropertyType->property_EncryptionPropertyTypeChoice || 
                        NULL == axutil_array_list_get(_EncryptionPropertyType->property_EncryptionPropertyTypeChoice, env, i));
           }

           /**
            * Set EncryptionPropertyTypeChoice to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptionPropertyType_set_EncryptionPropertyTypeChoice_nil_at(
                   adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, AXIS2_FAILURE);

                if(_EncryptionPropertyType->property_EncryptionPropertyTypeChoice == NULL ||
                            _EncryptionPropertyType->is_valid_EncryptionPropertyTypeChoice == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_EncryptionPropertyType->property_EncryptionPropertyTypeChoice, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_EncryptionPropertyType->property_EncryptionPropertyTypeChoice, env, i))
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
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of EncryptionPropertyTypeChoice is being set to NULL, but it is not a nullable or minOccurs=0 element");
                       return AXIS2_FAILURE;
                   }
                

                if( k < 1)
                {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of EncryptionPropertyTypeChoice is beinng set to be smaller than the specificed number of minOccurs(1)");
                       return AXIS2_FAILURE;
                }
 
                if(_EncryptionPropertyType->property_EncryptionPropertyTypeChoice == NULL)
                {
                    _EncryptionPropertyType->is_valid_EncryptionPropertyTypeChoice = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_EncryptionPropertyType->property_EncryptionPropertyTypeChoice, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_EncryptionPropertyTypeChoice_free((adb_EncryptionPropertyTypeChoice_t*)element, env);
                     
                }

                

                
                axutil_array_list_set(_EncryptionPropertyType->property_EncryptionPropertyTypeChoice , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for Target by  Property Number 2
             */
            axutil_uri_t* AXIS2_CALL
            adb_EncryptionPropertyType_get_property2(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                const axutil_env_t *env)
            {
                return adb_EncryptionPropertyType_get_Target(_EncryptionPropertyType,
                                             env);
            }

            /**
             * getter for Target.
             */
            axutil_uri_t* AXIS2_CALL
            adb_EncryptionPropertyType_get_Target(
                    adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, NULL);
                  

                return _EncryptionPropertyType->property_Target;
             }

            /**
             * setter for Target
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptionPropertyType_set_Target(
                    adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                    const axutil_env_t *env,
                    axutil_uri_t*  arg_Target)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, AXIS2_FAILURE);
                
                if(_EncryptionPropertyType->is_valid_Target &&
                        arg_Target == _EncryptionPropertyType->property_Target)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_Target)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Target is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_EncryptionPropertyType_reset_Target(_EncryptionPropertyType, env);

                
                if(NULL == arg_Target)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _EncryptionPropertyType->property_Target = arg_Target;
                        _EncryptionPropertyType->is_valid_Target = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for Target
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptionPropertyType_reset_Target(
                   adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, AXIS2_FAILURE);
               

               
            
                
                if(_EncryptionPropertyType->property_Target != NULL)
                {
                   
                   
                      axutil_uri_free(_EncryptionPropertyType->property_Target, env);
                     _EncryptionPropertyType->property_Target = NULL;
                }
            
                
                
                _EncryptionPropertyType->is_valid_Target = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether Target is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_EncryptionPropertyType_is_Target_nil(
                   adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, AXIS2_TRUE);
               
               return !_EncryptionPropertyType->is_valid_Target;
           }

           /**
            * Set Target to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptionPropertyType_set_Target_nil(
                   adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                   const axutil_env_t *env)
           {
               return adb_EncryptionPropertyType_reset_Target(_EncryptionPropertyType, env);
           }

           

            /**
             * Getter for Id by  Property Number 3
             */
            axis2_char_t* AXIS2_CALL
            adb_EncryptionPropertyType_get_property3(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                const axutil_env_t *env)
            {
                return adb_EncryptionPropertyType_get_Id(_EncryptionPropertyType,
                                             env);
            }

            /**
             * getter for Id.
             */
            axis2_char_t* AXIS2_CALL
            adb_EncryptionPropertyType_get_Id(
                    adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, NULL);
                  

                return _EncryptionPropertyType->property_Id;
             }

            /**
             * setter for Id
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptionPropertyType_set_Id(
                    adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_Id)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, AXIS2_FAILURE);
                
                if(_EncryptionPropertyType->is_valid_Id &&
                        arg_Id == _EncryptionPropertyType->property_Id)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_Id)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Id is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_EncryptionPropertyType_reset_Id(_EncryptionPropertyType, env);

                
                if(NULL == arg_Id)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _EncryptionPropertyType->property_Id = (axis2_char_t *)axutil_strdup(env, arg_Id);
                        if(NULL == _EncryptionPropertyType->property_Id)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for Id");
                            return AXIS2_FAILURE;
                        }
                        _EncryptionPropertyType->is_valid_Id = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for Id
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptionPropertyType_reset_Id(
                   adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, AXIS2_FAILURE);
               

               
            
                
                if(_EncryptionPropertyType->property_Id != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _EncryptionPropertyType->property_Id);
                     _EncryptionPropertyType->property_Id = NULL;
                }
            
                
                
                _EncryptionPropertyType->is_valid_Id = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether Id is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_EncryptionPropertyType_is_Id_nil(
                   adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, AXIS2_TRUE);
               
               return !_EncryptionPropertyType->is_valid_Id;
           }

           /**
            * Set Id to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptionPropertyType_set_Id_nil(
                   adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                   const axutil_env_t *env)
           {
               return adb_EncryptionPropertyType_reset_Id(_EncryptionPropertyType, env);
           }

           

            /**
             * Getter for extraAttributes by  Property Number 4
             */
            axutil_array_list_t* AXIS2_CALL
            adb_EncryptionPropertyType_get_property4(
                adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                const axutil_env_t *env)
            {
                return adb_EncryptionPropertyType_get_extraAttributes(_EncryptionPropertyType,
                                             env);
            }

            /**
             * getter for extraAttributes.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_EncryptionPropertyType_get_extraAttributes(
                    adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, NULL);
                  

                return _EncryptionPropertyType->property_extraAttributes;
             }

            /**
             * setter for extraAttributes
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptionPropertyType_set_extraAttributes(
                    adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_extraAttributes)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, AXIS2_FAILURE);
                
                if(_EncryptionPropertyType->is_valid_extraAttributes &&
                        arg_extraAttributes == _EncryptionPropertyType->property_extraAttributes)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_extraAttributes, env);
                 
                     if (size > 1)
                     {
                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "extraAttributes has exceed the maxOccurs(1)");
                         return AXIS2_FAILURE;
                     }
                 
                 if (size < 1)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "extraAttributes has less than minOccurs(1)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_extraAttributes, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 
                    if(!non_nil_exists)
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of extraAttributes is being set to NULL, but it is not a nullable or minOccurs=0 element");
                        return AXIS2_FAILURE;
                    }
                 
                  if(NULL == arg_extraAttributes)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "extraAttributes is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_EncryptionPropertyType_reset_extraAttributes(_EncryptionPropertyType, env);

                
                if(NULL == arg_extraAttributes)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _EncryptionPropertyType->property_extraAttributes = arg_extraAttributes;
                        if(non_nil_exists)
                        {
                            _EncryptionPropertyType->is_valid_extraAttributes = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of extraAttributes.
             */
            axiom_attribute_t* AXIS2_CALL
            adb_EncryptionPropertyType_get_extraAttributes_at(
                    adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                    const axutil_env_t *env, int i)
            {
                axiom_attribute_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, NULL);
                  

                if(_EncryptionPropertyType->property_extraAttributes == NULL)
                {
                    return (axiom_attribute_t*)0;
                }
                ret_val = (axiom_attribute_t*)axutil_array_list_get(_EncryptionPropertyType->property_extraAttributes, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of extraAttributes.
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptionPropertyType_set_extraAttributes_at(
                    adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                    const axutil_env_t *env, int i,
                    axiom_attribute_t* arg_extraAttributes)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, AXIS2_FAILURE);
                
                if( _EncryptionPropertyType->is_valid_extraAttributes &&
                    _EncryptionPropertyType->property_extraAttributes &&
                
                    arg_extraAttributes == (axiom_attribute_t*)axutil_array_list_get(_EncryptionPropertyType->property_extraAttributes, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_extraAttributes)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_EncryptionPropertyType->property_extraAttributes != NULL)
                        {
                            size = axutil_array_list_size(_EncryptionPropertyType->property_extraAttributes, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_EncryptionPropertyType->property_extraAttributes, env, i))
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
                                   AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of extraAttributes is beinng set to be smaller than the specificed number of minOccurs(1)");
                                   return AXIS2_FAILURE;
                            }
                        
                        }
                    }
                  
                   if(!non_nil_exists)
                   {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of extraAttributes is being set to NULL, but it is not a nullable or minOccurs=0 element");
                       return AXIS2_FAILURE;
                   }
                

                if(_EncryptionPropertyType->property_extraAttributes == NULL)
                {
                    _EncryptionPropertyType->property_extraAttributes = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_EncryptionPropertyType->property_extraAttributes, env, i);
                if(NULL != element)
                {
                  
                  
                  
                       /* This is an unknown type or a primitive. Please free this manually*/
                     
                }

                
                   axutil_array_list_set(_EncryptionPropertyType->property_extraAttributes , env, i, arg_extraAttributes);
                  _EncryptionPropertyType->is_valid_extraAttributes = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to extraAttributes.
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptionPropertyType_add_extraAttributes(
                    adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                    const axutil_env_t *env,
                    axiom_attribute_t* arg_extraAttributes)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, AXIS2_FAILURE);

                
                    if(NULL == arg_extraAttributes)
                    {
                      
                           AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of extraAttributes is being set to NULL, but it is not a nullable or minOccurs=0 element");
                           return AXIS2_FAILURE;
                        
                    }
                  

                if(_EncryptionPropertyType->property_extraAttributes == NULL)
                {
                    _EncryptionPropertyType->property_extraAttributes = axutil_array_list_create(env, 10);
                }
                if(_EncryptionPropertyType->property_extraAttributes == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for extraAttributes");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_EncryptionPropertyType->property_extraAttributes , env, arg_extraAttributes);
                  _EncryptionPropertyType->is_valid_extraAttributes = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the extraAttributes array.
             */
            int AXIS2_CALL
            adb_EncryptionPropertyType_sizeof_extraAttributes(
                    adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, -1);
                if(_EncryptionPropertyType->property_extraAttributes == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_EncryptionPropertyType->property_extraAttributes, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptionPropertyType_remove_extraAttributes_at(
                    adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                    const axutil_env_t *env, int i)
            {
                return adb_EncryptionPropertyType_set_extraAttributes_nil_at(_EncryptionPropertyType, env, i);
            }

            

           /**
            * resetter for extraAttributes
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptionPropertyType_reset_extraAttributes(
                   adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, AXIS2_FAILURE);
               

               
                  if (_EncryptionPropertyType->property_extraAttributes != NULL)
                  {
                      count = axutil_array_list_size(_EncryptionPropertyType->property_extraAttributes, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_EncryptionPropertyType->property_extraAttributes, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   
                       /* This is an unknown type or a primitive. Please free this manually*/
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_EncryptionPropertyType->property_extraAttributes, env);
                  }
                _EncryptionPropertyType->is_valid_extraAttributes = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether extraAttributes is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_EncryptionPropertyType_is_extraAttributes_nil(
                   adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, AXIS2_TRUE);
               
               return !_EncryptionPropertyType->is_valid_extraAttributes;
           }

           /**
            * Set extraAttributes to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptionPropertyType_set_extraAttributes_nil(
                   adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                   const axutil_env_t *env)
           {
               return adb_EncryptionPropertyType_reset_extraAttributes(_EncryptionPropertyType, env);
           }

           
           /**
            * Check whether extraAttributes is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_EncryptionPropertyType_is_extraAttributes_nil_at(
                   adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, AXIS2_TRUE);
               
               return (_EncryptionPropertyType->is_valid_extraAttributes == AXIS2_FALSE ||
                        NULL == _EncryptionPropertyType->property_extraAttributes || 
                        NULL == axutil_array_list_get(_EncryptionPropertyType->property_extraAttributes, env, i));
           }

           /**
            * Set extraAttributes to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptionPropertyType_set_extraAttributes_nil_at(
                   adb_EncryptionPropertyType_t* _EncryptionPropertyType,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyType, AXIS2_FAILURE);

                if(_EncryptionPropertyType->property_extraAttributes == NULL ||
                            _EncryptionPropertyType->is_valid_extraAttributes == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_EncryptionPropertyType->property_extraAttributes, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_EncryptionPropertyType->property_extraAttributes, env, i))
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
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of extraAttributes is being set to NULL, but it is not a nullable or minOccurs=0 element");
                       return AXIS2_FAILURE;
                   }
                

                if( k < 1)
                {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of extraAttributes is beinng set to be smaller than the specificed number of minOccurs(1)");
                       return AXIS2_FAILURE;
                }
 
                if(_EncryptionPropertyType->property_extraAttributes == NULL)
                {
                    _EncryptionPropertyType->is_valid_extraAttributes = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_EncryptionPropertyType->property_extraAttributes, env, i);
                if(NULL != element)
                {
                  
                  
                  
                       /* This is an unknown type or a primitive. Please free this manually*/
                     
                }

                

                
                axutil_array_list_set(_EncryptionPropertyType->property_extraAttributes , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

