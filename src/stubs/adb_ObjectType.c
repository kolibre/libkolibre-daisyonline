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
         * adb_ObjectType.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_ObjectType.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = ObjectType
                 * Namespace URI = http://www.w3.org/2000/09/xmldsig#
                 * Namespace Prefix = ns5
                 */
           


        struct adb_ObjectType
        {
            axis2_char_t *property_TypeName;

            axutil_array_list_t* property_ObjectTypeSequence;

                
                axis2_bool_t is_valid_ObjectTypeSequence;
            axis2_char_t* property_Id;

                
                axis2_bool_t is_valid_Id;
            axis2_char_t* property_MimeType;

                
                axis2_bool_t is_valid_MimeType;
            axutil_uri_t* property_Encoding;

                
                axis2_bool_t is_valid_Encoding;
            
        };


       /************************* Private Function prototypes ********************************/
        
                 axis2_status_t AXIS2_CALL
                 adb_ObjectType_set_ObjectTypeSequence_nil_at(
                        adb_ObjectType_t* _ObjectType, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_ObjectType_set_ObjectTypeSequence_nil(
                        adb_ObjectType_t* _ObjectType,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_ObjectType_t* AXIS2_CALL
        adb_ObjectType_create(
            const axutil_env_t *env)
        {
            adb_ObjectType_t *_ObjectType = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _ObjectType = (adb_ObjectType_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_ObjectType_t));

            if(NULL == _ObjectType)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_ObjectType, 0, sizeof(adb_ObjectType_t));

            _ObjectType->property_TypeName = axutil_strdup(env, "adb_ObjectType");
            _ObjectType->property_ObjectTypeSequence  = NULL;
                  _ObjectType->is_valid_ObjectTypeSequence  = AXIS2_FALSE;
            _ObjectType->property_Id  = NULL;
                  _ObjectType->is_valid_Id  = AXIS2_FALSE;
            _ObjectType->property_MimeType  = NULL;
                  _ObjectType->is_valid_MimeType  = AXIS2_FALSE;
            _ObjectType->property_Encoding  = NULL;
                  _ObjectType->is_valid_Encoding  = AXIS2_FALSE;
            

            return _ObjectType;
        }

        adb_ObjectType_t* AXIS2_CALL
        adb_ObjectType_create_with_values(
            const axutil_env_t *env,
                axutil_array_list_t* _ObjectTypeSequence,
                axis2_char_t* _Id,
                axis2_char_t* _MimeType,
                axutil_uri_t* _Encoding)
        {
            adb_ObjectType_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_ObjectType_create(env);

            
              status = adb_ObjectType_set_ObjectTypeSequence(
                                     adb_obj,
                                     env,
                                     _ObjectTypeSequence);
              if(status == AXIS2_FAILURE) {
                  adb_ObjectType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_ObjectType_set_Id(
                                     adb_obj,
                                     env,
                                     _Id);
              if(status == AXIS2_FAILURE) {
                  adb_ObjectType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_ObjectType_set_MimeType(
                                     adb_obj,
                                     env,
                                     _MimeType);
              if(status == AXIS2_FAILURE) {
                  adb_ObjectType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_ObjectType_set_Encoding(
                                     adb_obj,
                                     env,
                                     _Encoding);
              if(status == AXIS2_FAILURE) {
                  adb_ObjectType_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axutil_array_list_t* AXIS2_CALL
                adb_ObjectType_free_popping_value(
                        adb_ObjectType_t* _ObjectType,
                        const axutil_env_t *env)
                {
                    axutil_array_list_t* value;

                    
                    
                    value = _ObjectType->property_ObjectTypeSequence;

                    _ObjectType->property_ObjectTypeSequence = (axutil_array_list_t*)NULL;
                    adb_ObjectType_free(_ObjectType, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_ObjectType_free(
                adb_ObjectType_t* _ObjectType,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _ObjectType,
                env,
                "adb_ObjectType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_ObjectType_free_obj(
                adb_ObjectType_t* _ObjectType,
                const axutil_env_t *env)
        {
            
                int i = 0;
                int count = 0;
                void *element = NULL;
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _ObjectType, AXIS2_FAILURE);

            if (_ObjectType->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _ObjectType->property_TypeName);
            }

            adb_ObjectType_reset_ObjectTypeSequence(_ObjectType, env);
            adb_ObjectType_reset_Id(_ObjectType, env);
            adb_ObjectType_reset_MimeType(_ObjectType, env);
            adb_ObjectType_reset_Encoding(_ObjectType, env);
            

            if(_ObjectType)
            {
                AXIS2_FREE(env->allocator, _ObjectType);
                _ObjectType = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_ObjectType_deserialize(
                adb_ObjectType_t* _ObjectType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _ObjectType,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_ObjectType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_ObjectType_deserialize_obj(
                adb_ObjectType_t* _ObjectType,
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
            AXIS2_PARAM_CHECK(env->error, _ObjectType, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for ObjectType : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    
                 parent_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                 attribute_hash = axiom_element_get_all_attributes(parent_element, env);
              
                    /*
                     * building ObjectTypeSequence array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building ObjectTypeSequence element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "ObjectTypeSequence", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                  
                               
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

                                  if (adb_ObjectTypeSequence_is_particle() ||  
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_ObjectTypeSequence");
                                          
                                          status =  adb_ObjectTypeSequence_deserialize((adb_ObjectTypeSequence_t*)element, env,
                                                                                 &current_node, &is_early_node_valid, AXIS2_FALSE);
                                          
                                          if(AXIS2_FAILURE ==  status)
                                          {
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element ObjectTypeSequence ");
                                          }
                                          else
                                          {
                                            axutil_array_list_add_at(arr_list, env, i, element);
                                          }
                                        
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for ObjectTypeSequence ");
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

                               
                                   if (i < 0)
                                   {
                                     /* found element out of order */
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "ObjectTypeSequence (@minOccurs = '0') only have %d elements", i);
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
                                    status = adb_ObjectType_set_ObjectTypeSequence(_ObjectType, env,
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
                      
                      adb_ObjectType_set_Id(_ObjectType,
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

                       for (hi = axutil_hash_first(attribute_hash, env); hi; hi = axutil_hash_next(env, hi)) 
                       {
                           axutil_hash_this(hi, &key, NULL, &val);
                           
                           
                               if(!strcmp((axis2_char_t*)key, "MimeType"))
                             
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
                    /* this is hoping that attribute is stored in "MimeType", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "MimeType");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_ObjectType_set_MimeType(_ObjectType,
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

                       for (hi = axutil_hash_first(attribute_hash, env); hi; hi = axutil_hash_next(env, hi)) 
                       {
                           axutil_hash_this(hi, &key, NULL, &val);
                           
                           
                               if(!strcmp((axis2_char_t*)key, "Encoding"))
                             
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
                    /* this is hoping that attribute is stored in "Encoding", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "Encoding");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_ObjectType_set_Encoding(_ObjectType,
                                                          env, axutil_uri_parse_string(env, attrib_text));
                        
                    }
                  
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_ObjectType_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_ObjectType_declare_parent_namespaces(
                    adb_ObjectType_t* _ObjectType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_ObjectType_serialize(
                adb_ObjectType_t* _ObjectType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_ObjectType == NULL)
            {
                return adb_ObjectType_serialize_obj(
                    _ObjectType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _ObjectType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_ObjectType");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_ObjectType_serialize_obj(
                adb_ObjectType_t* _ObjectType,
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
                    
                    axis2_char_t *text_value_4;
                    axis2_char_t *text_value_4_temp;
                    
                axis2_char_t *text_value = NULL;
             
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _ObjectType, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
                if(_ObjectType->is_valid_Id)
                {
                
                        p_prefix = NULL;
                      
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(_ObjectType->property_Id) + 
                                                                axutil_strlen("Id")));
                           sprintf(text_value, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "Id", _ObjectType->property_Id);
                           axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
                if(_ObjectType->is_valid_MimeType)
                {
                
                        p_prefix = NULL;
                      
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(_ObjectType->property_MimeType) + 
                                                                axutil_strlen("MimeType")));
                           sprintf(text_value, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "MimeType", _ObjectType->property_MimeType);
                           axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
                if(_ObjectType->is_valid_Encoding)
                {
                
                        p_prefix = NULL;
                      
                           text_value = axutil_uri_to_string(_ObjectType->property_Encoding, env, AXIS2_URI_UNP_OMITUSERINFO);
                           string_to_stream = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) *
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(text_value) + 
                                                             axutil_strlen("Encoding")));
                           sprintf(string_to_stream, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "Encoding",  text_value);
                           axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
                           AXIS2_FREE(env-> allocator, string_to_stream);
                        
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
                      

                   if (!_ObjectType->is_valid_ObjectTypeSequence)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("ObjectTypeSequence"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("ObjectTypeSequence")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing ObjectTypeSequence array
                      */
                     if (_ObjectType->property_ObjectTypeSequence != NULL)
                     {
                        

                            sprintf(start_input_str, "<%s%sObjectTypeSequence",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%sObjectTypeSequence>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_ObjectType->property_ObjectTypeSequence, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_ObjectType->property_ObjectTypeSequence, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing ObjectTypeSequence element
                      */

                    
                     
                            if(!adb_ObjectTypeSequence_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_ObjectTypeSequence_serialize((adb_ObjectTypeSequence_t*)element, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_ObjectTypeSequence_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_ObjectTypeSequence_is_particle())
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
                       if(_ObjectType->is_valid_Id)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = _ObjectType->property_Id;
                           text_attri = axiom_attribute_create (env, "Id", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                       
                  }
                
                    
                    if(parent_tag_closed)
                    {
                       if(_ObjectType->is_valid_MimeType)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = _ObjectType->property_MimeType;
                           text_attri = axiom_attribute_create (env, "MimeType", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                       
                  }
                
                    
                    if(parent_tag_closed)
                    {
                       if(_ObjectType->is_valid_Encoding)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = axutil_uri_to_string(_ObjectType->property_Encoding, env, AXIS2_URI_UNP_OMITUSERINFO);
                           text_attri = axiom_attribute_create (env, "Encoding", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                       
                  }
                

            return parent;
        }


        

            /**
             * Getter for ObjectTypeSequence by  Property Number 1
             */
            axutil_array_list_t* AXIS2_CALL
            adb_ObjectType_get_property1(
                adb_ObjectType_t* _ObjectType,
                const axutil_env_t *env)
            {
                return adb_ObjectType_get_ObjectTypeSequence(_ObjectType,
                                             env);
            }

            /**
             * getter for ObjectTypeSequence.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_ObjectType_get_ObjectTypeSequence(
                    adb_ObjectType_t* _ObjectType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _ObjectType, NULL);
                  

                return _ObjectType->property_ObjectTypeSequence;
             }

            /**
             * setter for ObjectTypeSequence
             */
            axis2_status_t AXIS2_CALL
            adb_ObjectType_set_ObjectTypeSequence(
                    adb_ObjectType_t* _ObjectType,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_ObjectTypeSequence)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ObjectType, AXIS2_FAILURE);
                
                if(_ObjectType->is_valid_ObjectTypeSequence &&
                        arg_ObjectTypeSequence == _ObjectType->property_ObjectTypeSequence)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_ObjectTypeSequence, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "ObjectTypeSequence has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_ObjectTypeSequence, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_ObjectType_reset_ObjectTypeSequence(_ObjectType, env);

                
                if(NULL == arg_ObjectTypeSequence)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _ObjectType->property_ObjectTypeSequence = arg_ObjectTypeSequence;
                        if(non_nil_exists)
                        {
                            _ObjectType->is_valid_ObjectTypeSequence = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of ObjectTypeSequence.
             */
            adb_ObjectTypeSequence_t* AXIS2_CALL
            adb_ObjectType_get_ObjectTypeSequence_at(
                    adb_ObjectType_t* _ObjectType,
                    const axutil_env_t *env, int i)
            {
                adb_ObjectTypeSequence_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _ObjectType, NULL);
                  

                if(_ObjectType->property_ObjectTypeSequence == NULL)
                {
                    return (adb_ObjectTypeSequence_t*)0;
                }
                ret_val = (adb_ObjectTypeSequence_t*)axutil_array_list_get(_ObjectType->property_ObjectTypeSequence, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of ObjectTypeSequence.
             */
            axis2_status_t AXIS2_CALL
            adb_ObjectType_set_ObjectTypeSequence_at(
                    adb_ObjectType_t* _ObjectType,
                    const axutil_env_t *env, int i,
                    adb_ObjectTypeSequence_t* arg_ObjectTypeSequence)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ObjectType, AXIS2_FAILURE);
                
                if( _ObjectType->is_valid_ObjectTypeSequence &&
                    _ObjectType->property_ObjectTypeSequence &&
                
                    arg_ObjectTypeSequence == (adb_ObjectTypeSequence_t*)axutil_array_list_get(_ObjectType->property_ObjectTypeSequence, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_ObjectTypeSequence)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_ObjectType->property_ObjectTypeSequence != NULL)
                        {
                            size = axutil_array_list_size(_ObjectType->property_ObjectTypeSequence, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_ObjectType->property_ObjectTypeSequence, env, i))
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
                  

                if(_ObjectType->property_ObjectTypeSequence == NULL)
                {
                    _ObjectType->property_ObjectTypeSequence = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_ObjectType->property_ObjectTypeSequence, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_ObjectTypeSequence_free((adb_ObjectTypeSequence_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _ObjectType->is_valid_ObjectTypeSequence = AXIS2_FALSE;
                        axutil_array_list_set(_ObjectType->property_ObjectTypeSequence , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_ObjectType->property_ObjectTypeSequence , env, i, arg_ObjectTypeSequence);
                  _ObjectType->is_valid_ObjectTypeSequence = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to ObjectTypeSequence.
             */
            axis2_status_t AXIS2_CALL
            adb_ObjectType_add_ObjectTypeSequence(
                    adb_ObjectType_t* _ObjectType,
                    const axutil_env_t *env,
                    adb_ObjectTypeSequence_t* arg_ObjectTypeSequence)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ObjectType, AXIS2_FAILURE);

                
                    if(NULL == arg_ObjectTypeSequence)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_ObjectType->property_ObjectTypeSequence == NULL)
                {
                    _ObjectType->property_ObjectTypeSequence = axutil_array_list_create(env, 10);
                }
                if(_ObjectType->property_ObjectTypeSequence == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for ObjectTypeSequence");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_ObjectType->property_ObjectTypeSequence , env, arg_ObjectTypeSequence);
                  _ObjectType->is_valid_ObjectTypeSequence = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the ObjectTypeSequence array.
             */
            int AXIS2_CALL
            adb_ObjectType_sizeof_ObjectTypeSequence(
                    adb_ObjectType_t* _ObjectType,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _ObjectType, -1);
                if(_ObjectType->property_ObjectTypeSequence == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_ObjectType->property_ObjectTypeSequence, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_ObjectType_remove_ObjectTypeSequence_at(
                    adb_ObjectType_t* _ObjectType,
                    const axutil_env_t *env, int i)
            {
                return adb_ObjectType_set_ObjectTypeSequence_nil_at(_ObjectType, env, i);
            }

            

           /**
            * resetter for ObjectTypeSequence
            */
           axis2_status_t AXIS2_CALL
           adb_ObjectType_reset_ObjectTypeSequence(
                   adb_ObjectType_t* _ObjectType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _ObjectType, AXIS2_FAILURE);
               

               
                  if (_ObjectType->property_ObjectTypeSequence != NULL)
                  {
                      count = axutil_array_list_size(_ObjectType->property_ObjectTypeSequence, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_ObjectType->property_ObjectTypeSequence, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   adb_ObjectTypeSequence_free((adb_ObjectTypeSequence_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_ObjectType->property_ObjectTypeSequence, env);
                  }
                _ObjectType->is_valid_ObjectTypeSequence = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether ObjectTypeSequence is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_ObjectType_is_ObjectTypeSequence_nil(
                   adb_ObjectType_t* _ObjectType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ObjectType, AXIS2_TRUE);
               
               return !_ObjectType->is_valid_ObjectTypeSequence;
           }

           /**
            * Set ObjectTypeSequence to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_ObjectType_set_ObjectTypeSequence_nil(
                   adb_ObjectType_t* _ObjectType,
                   const axutil_env_t *env)
           {
               return adb_ObjectType_reset_ObjectTypeSequence(_ObjectType, env);
           }

           
           /**
            * Check whether ObjectTypeSequence is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_ObjectType_is_ObjectTypeSequence_nil_at(
                   adb_ObjectType_t* _ObjectType,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ObjectType, AXIS2_TRUE);
               
               return (_ObjectType->is_valid_ObjectTypeSequence == AXIS2_FALSE ||
                        NULL == _ObjectType->property_ObjectTypeSequence || 
                        NULL == axutil_array_list_get(_ObjectType->property_ObjectTypeSequence, env, i));
           }

           /**
            * Set ObjectTypeSequence to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_ObjectType_set_ObjectTypeSequence_nil_at(
                   adb_ObjectType_t* _ObjectType,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ObjectType, AXIS2_FAILURE);

                if(_ObjectType->property_ObjectTypeSequence == NULL ||
                            _ObjectType->is_valid_ObjectTypeSequence == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_ObjectType->property_ObjectTypeSequence, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_ObjectType->property_ObjectTypeSequence, env, i))
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
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of ObjectTypeSequence is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_ObjectType->property_ObjectTypeSequence == NULL)
                {
                    _ObjectType->is_valid_ObjectTypeSequence = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_ObjectType->property_ObjectTypeSequence, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_ObjectTypeSequence_free((adb_ObjectTypeSequence_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _ObjectType->is_valid_ObjectTypeSequence = AXIS2_FALSE;
                        axutil_array_list_set(_ObjectType->property_ObjectTypeSequence , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_ObjectType->property_ObjectTypeSequence , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for Id by  Property Number 2
             */
            axis2_char_t* AXIS2_CALL
            adb_ObjectType_get_property2(
                adb_ObjectType_t* _ObjectType,
                const axutil_env_t *env)
            {
                return adb_ObjectType_get_Id(_ObjectType,
                                             env);
            }

            /**
             * getter for Id.
             */
            axis2_char_t* AXIS2_CALL
            adb_ObjectType_get_Id(
                    adb_ObjectType_t* _ObjectType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _ObjectType, NULL);
                  

                return _ObjectType->property_Id;
             }

            /**
             * setter for Id
             */
            axis2_status_t AXIS2_CALL
            adb_ObjectType_set_Id(
                    adb_ObjectType_t* _ObjectType,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_Id)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ObjectType, AXIS2_FAILURE);
                
                if(_ObjectType->is_valid_Id &&
                        arg_Id == _ObjectType->property_Id)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_Id)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Id is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_ObjectType_reset_Id(_ObjectType, env);

                
                if(NULL == arg_Id)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _ObjectType->property_Id = (axis2_char_t *)axutil_strdup(env, arg_Id);
                        if(NULL == _ObjectType->property_Id)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for Id");
                            return AXIS2_FAILURE;
                        }
                        _ObjectType->is_valid_Id = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for Id
            */
           axis2_status_t AXIS2_CALL
           adb_ObjectType_reset_Id(
                   adb_ObjectType_t* _ObjectType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _ObjectType, AXIS2_FAILURE);
               

               
            
                
                if(_ObjectType->property_Id != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _ObjectType->property_Id);
                     _ObjectType->property_Id = NULL;
                }
            
                
                
                _ObjectType->is_valid_Id = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether Id is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_ObjectType_is_Id_nil(
                   adb_ObjectType_t* _ObjectType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ObjectType, AXIS2_TRUE);
               
               return !_ObjectType->is_valid_Id;
           }

           /**
            * Set Id to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_ObjectType_set_Id_nil(
                   adb_ObjectType_t* _ObjectType,
                   const axutil_env_t *env)
           {
               return adb_ObjectType_reset_Id(_ObjectType, env);
           }

           

            /**
             * Getter for MimeType by  Property Number 3
             */
            axis2_char_t* AXIS2_CALL
            adb_ObjectType_get_property3(
                adb_ObjectType_t* _ObjectType,
                const axutil_env_t *env)
            {
                return adb_ObjectType_get_MimeType(_ObjectType,
                                             env);
            }

            /**
             * getter for MimeType.
             */
            axis2_char_t* AXIS2_CALL
            adb_ObjectType_get_MimeType(
                    adb_ObjectType_t* _ObjectType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _ObjectType, NULL);
                  

                return _ObjectType->property_MimeType;
             }

            /**
             * setter for MimeType
             */
            axis2_status_t AXIS2_CALL
            adb_ObjectType_set_MimeType(
                    adb_ObjectType_t* _ObjectType,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_MimeType)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ObjectType, AXIS2_FAILURE);
                
                if(_ObjectType->is_valid_MimeType &&
                        arg_MimeType == _ObjectType->property_MimeType)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_MimeType)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "MimeType is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_ObjectType_reset_MimeType(_ObjectType, env);

                
                if(NULL == arg_MimeType)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _ObjectType->property_MimeType = (axis2_char_t *)axutil_strdup(env, arg_MimeType);
                        if(NULL == _ObjectType->property_MimeType)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for MimeType");
                            return AXIS2_FAILURE;
                        }
                        _ObjectType->is_valid_MimeType = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for MimeType
            */
           axis2_status_t AXIS2_CALL
           adb_ObjectType_reset_MimeType(
                   adb_ObjectType_t* _ObjectType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _ObjectType, AXIS2_FAILURE);
               

               
            
                
                if(_ObjectType->property_MimeType != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _ObjectType->property_MimeType);
                     _ObjectType->property_MimeType = NULL;
                }
            
                
                
                _ObjectType->is_valid_MimeType = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether MimeType is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_ObjectType_is_MimeType_nil(
                   adb_ObjectType_t* _ObjectType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ObjectType, AXIS2_TRUE);
               
               return !_ObjectType->is_valid_MimeType;
           }

           /**
            * Set MimeType to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_ObjectType_set_MimeType_nil(
                   adb_ObjectType_t* _ObjectType,
                   const axutil_env_t *env)
           {
               return adb_ObjectType_reset_MimeType(_ObjectType, env);
           }

           

            /**
             * Getter for Encoding by  Property Number 4
             */
            axutil_uri_t* AXIS2_CALL
            adb_ObjectType_get_property4(
                adb_ObjectType_t* _ObjectType,
                const axutil_env_t *env)
            {
                return adb_ObjectType_get_Encoding(_ObjectType,
                                             env);
            }

            /**
             * getter for Encoding.
             */
            axutil_uri_t* AXIS2_CALL
            adb_ObjectType_get_Encoding(
                    adb_ObjectType_t* _ObjectType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _ObjectType, NULL);
                  

                return _ObjectType->property_Encoding;
             }

            /**
             * setter for Encoding
             */
            axis2_status_t AXIS2_CALL
            adb_ObjectType_set_Encoding(
                    adb_ObjectType_t* _ObjectType,
                    const axutil_env_t *env,
                    axutil_uri_t*  arg_Encoding)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ObjectType, AXIS2_FAILURE);
                
                if(_ObjectType->is_valid_Encoding &&
                        arg_Encoding == _ObjectType->property_Encoding)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_Encoding)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Encoding is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_ObjectType_reset_Encoding(_ObjectType, env);

                
                if(NULL == arg_Encoding)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _ObjectType->property_Encoding = arg_Encoding;
                        _ObjectType->is_valid_Encoding = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for Encoding
            */
           axis2_status_t AXIS2_CALL
           adb_ObjectType_reset_Encoding(
                   adb_ObjectType_t* _ObjectType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _ObjectType, AXIS2_FAILURE);
               

               
            
                
                if(_ObjectType->property_Encoding != NULL)
                {
                   
                   
                      axutil_uri_free(_ObjectType->property_Encoding, env);
                     _ObjectType->property_Encoding = NULL;
                }
            
                
                
                _ObjectType->is_valid_Encoding = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether Encoding is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_ObjectType_is_Encoding_nil(
                   adb_ObjectType_t* _ObjectType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ObjectType, AXIS2_TRUE);
               
               return !_ObjectType->is_valid_Encoding;
           }

           /**
            * Set Encoding to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_ObjectType_set_Encoding_nil(
                   adb_ObjectType_t* _ObjectType,
                   const axutil_env_t *env)
           {
               return adb_ObjectType_reset_Encoding(_ObjectType, env);
           }

           

