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
         * adb_TransformType.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_TransformType.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = TransformType
                 * Namespace URI = http://www.w3.org/2000/09/xmldsig#
                 * Namespace Prefix = ns5
                 */
           


        struct adb_TransformType
        {
            axis2_char_t *property_TypeName;

            axutil_array_list_t* property_TransformTypeChoice;

                
                axis2_bool_t is_valid_TransformTypeChoice;
            axutil_uri_t* property_Algorithm;

                
                axis2_bool_t is_valid_Algorithm;
            
        };


       /************************* Private Function prototypes ********************************/
        
                 axis2_status_t AXIS2_CALL
                 adb_TransformType_set_TransformTypeChoice_nil_at(
                        adb_TransformType_t* _TransformType, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_TransformType_set_TransformTypeChoice_nil(
                        adb_TransformType_t* _TransformType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_TransformType_set_Algorithm_nil(
                        adb_TransformType_t* _TransformType,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_TransformType_t* AXIS2_CALL
        adb_TransformType_create(
            const axutil_env_t *env)
        {
            adb_TransformType_t *_TransformType = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _TransformType = (adb_TransformType_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_TransformType_t));

            if(NULL == _TransformType)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_TransformType, 0, sizeof(adb_TransformType_t));

            _TransformType->property_TypeName = axutil_strdup(env, "adb_TransformType");
            _TransformType->property_TransformTypeChoice  = NULL;
                  _TransformType->is_valid_TransformTypeChoice  = AXIS2_FALSE;
            _TransformType->property_Algorithm  = NULL;
                  _TransformType->is_valid_Algorithm  = AXIS2_FALSE;
            

            return _TransformType;
        }

        adb_TransformType_t* AXIS2_CALL
        adb_TransformType_create_with_values(
            const axutil_env_t *env,
                axutil_array_list_t* _TransformTypeChoice,
                axutil_uri_t* _Algorithm)
        {
            adb_TransformType_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_TransformType_create(env);

            
              status = adb_TransformType_set_TransformTypeChoice(
                                     adb_obj,
                                     env,
                                     _TransformTypeChoice);
              if(status == AXIS2_FAILURE) {
                  adb_TransformType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_TransformType_set_Algorithm(
                                     adb_obj,
                                     env,
                                     _Algorithm);
              if(status == AXIS2_FAILURE) {
                  adb_TransformType_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axutil_array_list_t* AXIS2_CALL
                adb_TransformType_free_popping_value(
                        adb_TransformType_t* _TransformType,
                        const axutil_env_t *env)
                {
                    axutil_array_list_t* value;

                    
                    
                    value = _TransformType->property_TransformTypeChoice;

                    _TransformType->property_TransformTypeChoice = (axutil_array_list_t*)NULL;
                    adb_TransformType_free(_TransformType, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_TransformType_free(
                adb_TransformType_t* _TransformType,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _TransformType,
                env,
                "adb_TransformType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_TransformType_free_obj(
                adb_TransformType_t* _TransformType,
                const axutil_env_t *env)
        {
            
                int i = 0;
                int count = 0;
                void *element = NULL;
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _TransformType, AXIS2_FAILURE);

            if (_TransformType->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _TransformType->property_TypeName);
            }

            adb_TransformType_reset_TransformTypeChoice(_TransformType, env);
            adb_TransformType_reset_Algorithm(_TransformType, env);
            

            if(_TransformType)
            {
                AXIS2_FREE(env->allocator, _TransformType);
                _TransformType = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_TransformType_deserialize(
                adb_TransformType_t* _TransformType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _TransformType,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_TransformType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_TransformType_deserialize_obj(
                adb_TransformType_t* _TransformType,
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
            AXIS2_PARAM_CHECK(env->error, _TransformType, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for TransformType : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    
                 parent_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                 attribute_hash = axiom_element_get_all_attributes(parent_element, env);
              
                    /*
                     * building TransformTypeChoice array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building TransformTypeChoice element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "TransformTypeChoice", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                  
                               
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

                                  if (adb_TransformTypeChoice_is_particle() ||  
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_TransformTypeChoice");
                                          
                                          status =  adb_TransformTypeChoice_deserialize((adb_TransformTypeChoice_t*)element, env,
                                                                                 &current_node, &is_early_node_valid, AXIS2_FALSE);
                                          
                                          if(AXIS2_FAILURE ==  status)
                                          {
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element TransformTypeChoice ");
                                          }
                                          else
                                          {
                                            axutil_array_list_add_at(arr_list, env, i, element);
                                          }
                                        
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for TransformTypeChoice ");
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
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "TransformTypeChoice (@minOccurs = '0') only have %d elements", i);
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
                                    status = adb_TransformType_set_TransformTypeChoice(_TransformType, env,
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "Algorithm"))
                             
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
                    /* this is hoping that attribute is stored in "Algorithm", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "Algorithm");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_TransformType_set_Algorithm(_TransformType,
                                                          env, axutil_uri_parse_string(env, attrib_text));
                        
                    }
                  
                    else if(!dont_care_minoccurs)
                    {
                        if(element_qname)
                        {
                            axutil_qname_free(element_qname, env);
                        }
                        /* this is not a nillable element*/
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "required attribute Algorithm missing");
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
          adb_TransformType_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_TransformType_declare_parent_namespaces(
                    adb_TransformType_t* _TransformType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_TransformType_serialize(
                adb_TransformType_t* _TransformType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_TransformType == NULL)
            {
                return adb_TransformType_serialize_obj(
                    _TransformType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _TransformType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_TransformType");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_TransformType_serialize_obj(
                adb_TransformType_t* _TransformType,
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
                    
                axis2_char_t *text_value = NULL;
             
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _TransformType, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
                if(_TransformType->is_valid_Algorithm)
                {
                
                        p_prefix = NULL;
                      
                           text_value = axutil_uri_to_string(_TransformType->property_Algorithm, env, AXIS2_URI_UNP_OMITUSERINFO);
                           string_to_stream = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) *
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(text_value) + 
                                                             axutil_strlen("Algorithm")));
                           sprintf(string_to_stream, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "Algorithm",  text_value);
                           axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
                           AXIS2_FREE(env-> allocator, string_to_stream);
                        
                   }
                   
                   else
                   {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute Algorithm");
                      return NULL;
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
                      

                   if (!_TransformType->is_valid_TransformTypeChoice)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("TransformTypeChoice"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("TransformTypeChoice")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing TransformTypeChoice array
                      */
                     if (_TransformType->property_TransformTypeChoice != NULL)
                     {
                        

                            sprintf(start_input_str, "<%s%sTransformTypeChoice",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%sTransformTypeChoice>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_TransformType->property_TransformTypeChoice, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_TransformType->property_TransformTypeChoice, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing TransformTypeChoice element
                      */

                    
                     
                            if(!adb_TransformTypeChoice_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_TransformTypeChoice_serialize((adb_TransformTypeChoice_t*)element, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_TransformTypeChoice_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_TransformTypeChoice_is_particle())
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
                       if(_TransformType->is_valid_Algorithm)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = axutil_uri_to_string(_TransformType->property_Algorithm, env, AXIS2_URI_UNP_OMITUSERINFO);
                           text_attri = axiom_attribute_create (env, "Algorithm", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                      
                      else
                      {
                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute Algorithm");
                         return NULL;
                      }
                       
                  }
                

            return parent;
        }


        

            /**
             * Getter for TransformTypeChoice by  Property Number 1
             */
            axutil_array_list_t* AXIS2_CALL
            adb_TransformType_get_property1(
                adb_TransformType_t* _TransformType,
                const axutil_env_t *env)
            {
                return adb_TransformType_get_TransformTypeChoice(_TransformType,
                                             env);
            }

            /**
             * getter for TransformTypeChoice.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_TransformType_get_TransformTypeChoice(
                    adb_TransformType_t* _TransformType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _TransformType, NULL);
                  

                return _TransformType->property_TransformTypeChoice;
             }

            /**
             * setter for TransformTypeChoice
             */
            axis2_status_t AXIS2_CALL
            adb_TransformType_set_TransformTypeChoice(
                    adb_TransformType_t* _TransformType,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_TransformTypeChoice)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _TransformType, AXIS2_FAILURE);
                
                if(_TransformType->is_valid_TransformTypeChoice &&
                        arg_TransformTypeChoice == _TransformType->property_TransformTypeChoice)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_TransformTypeChoice, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "TransformTypeChoice has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_TransformTypeChoice, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_TransformType_reset_TransformTypeChoice(_TransformType, env);

                
                if(NULL == arg_TransformTypeChoice)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _TransformType->property_TransformTypeChoice = arg_TransformTypeChoice;
                        if(non_nil_exists)
                        {
                            _TransformType->is_valid_TransformTypeChoice = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of TransformTypeChoice.
             */
            adb_TransformTypeChoice_t* AXIS2_CALL
            adb_TransformType_get_TransformTypeChoice_at(
                    adb_TransformType_t* _TransformType,
                    const axutil_env_t *env, int i)
            {
                adb_TransformTypeChoice_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _TransformType, NULL);
                  

                if(_TransformType->property_TransformTypeChoice == NULL)
                {
                    return (adb_TransformTypeChoice_t*)0;
                }
                ret_val = (adb_TransformTypeChoice_t*)axutil_array_list_get(_TransformType->property_TransformTypeChoice, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of TransformTypeChoice.
             */
            axis2_status_t AXIS2_CALL
            adb_TransformType_set_TransformTypeChoice_at(
                    adb_TransformType_t* _TransformType,
                    const axutil_env_t *env, int i,
                    adb_TransformTypeChoice_t* arg_TransformTypeChoice)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _TransformType, AXIS2_FAILURE);
                
                if( _TransformType->is_valid_TransformTypeChoice &&
                    _TransformType->property_TransformTypeChoice &&
                
                    arg_TransformTypeChoice == (adb_TransformTypeChoice_t*)axutil_array_list_get(_TransformType->property_TransformTypeChoice, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_TransformTypeChoice)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_TransformType->property_TransformTypeChoice != NULL)
                        {
                            size = axutil_array_list_size(_TransformType->property_TransformTypeChoice, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_TransformType->property_TransformTypeChoice, env, i))
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
                  

                if(_TransformType->property_TransformTypeChoice == NULL)
                {
                    _TransformType->property_TransformTypeChoice = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_TransformType->property_TransformTypeChoice, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_TransformTypeChoice_free((adb_TransformTypeChoice_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _TransformType->is_valid_TransformTypeChoice = AXIS2_FALSE;
                        axutil_array_list_set(_TransformType->property_TransformTypeChoice , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_TransformType->property_TransformTypeChoice , env, i, arg_TransformTypeChoice);
                  _TransformType->is_valid_TransformTypeChoice = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to TransformTypeChoice.
             */
            axis2_status_t AXIS2_CALL
            adb_TransformType_add_TransformTypeChoice(
                    adb_TransformType_t* _TransformType,
                    const axutil_env_t *env,
                    adb_TransformTypeChoice_t* arg_TransformTypeChoice)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _TransformType, AXIS2_FAILURE);

                
                    if(NULL == arg_TransformTypeChoice)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_TransformType->property_TransformTypeChoice == NULL)
                {
                    _TransformType->property_TransformTypeChoice = axutil_array_list_create(env, 10);
                }
                if(_TransformType->property_TransformTypeChoice == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for TransformTypeChoice");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_TransformType->property_TransformTypeChoice , env, arg_TransformTypeChoice);
                  _TransformType->is_valid_TransformTypeChoice = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the TransformTypeChoice array.
             */
            int AXIS2_CALL
            adb_TransformType_sizeof_TransformTypeChoice(
                    adb_TransformType_t* _TransformType,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _TransformType, -1);
                if(_TransformType->property_TransformTypeChoice == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_TransformType->property_TransformTypeChoice, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_TransformType_remove_TransformTypeChoice_at(
                    adb_TransformType_t* _TransformType,
                    const axutil_env_t *env, int i)
            {
                return adb_TransformType_set_TransformTypeChoice_nil_at(_TransformType, env, i);
            }

            

           /**
            * resetter for TransformTypeChoice
            */
           axis2_status_t AXIS2_CALL
           adb_TransformType_reset_TransformTypeChoice(
                   adb_TransformType_t* _TransformType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _TransformType, AXIS2_FAILURE);
               

               
                  if (_TransformType->property_TransformTypeChoice != NULL)
                  {
                      count = axutil_array_list_size(_TransformType->property_TransformTypeChoice, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_TransformType->property_TransformTypeChoice, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   adb_TransformTypeChoice_free((adb_TransformTypeChoice_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_TransformType->property_TransformTypeChoice, env);
                  }
                _TransformType->is_valid_TransformTypeChoice = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether TransformTypeChoice is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_TransformType_is_TransformTypeChoice_nil(
                   adb_TransformType_t* _TransformType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _TransformType, AXIS2_TRUE);
               
               return !_TransformType->is_valid_TransformTypeChoice;
           }

           /**
            * Set TransformTypeChoice to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_TransformType_set_TransformTypeChoice_nil(
                   adb_TransformType_t* _TransformType,
                   const axutil_env_t *env)
           {
               return adb_TransformType_reset_TransformTypeChoice(_TransformType, env);
           }

           
           /**
            * Check whether TransformTypeChoice is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_TransformType_is_TransformTypeChoice_nil_at(
                   adb_TransformType_t* _TransformType,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _TransformType, AXIS2_TRUE);
               
               return (_TransformType->is_valid_TransformTypeChoice == AXIS2_FALSE ||
                        NULL == _TransformType->property_TransformTypeChoice || 
                        NULL == axutil_array_list_get(_TransformType->property_TransformTypeChoice, env, i));
           }

           /**
            * Set TransformTypeChoice to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_TransformType_set_TransformTypeChoice_nil_at(
                   adb_TransformType_t* _TransformType,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _TransformType, AXIS2_FAILURE);

                if(_TransformType->property_TransformTypeChoice == NULL ||
                            _TransformType->is_valid_TransformTypeChoice == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_TransformType->property_TransformTypeChoice, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_TransformType->property_TransformTypeChoice, env, i))
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
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of TransformTypeChoice is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_TransformType->property_TransformTypeChoice == NULL)
                {
                    _TransformType->is_valid_TransformTypeChoice = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_TransformType->property_TransformTypeChoice, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_TransformTypeChoice_free((adb_TransformTypeChoice_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _TransformType->is_valid_TransformTypeChoice = AXIS2_FALSE;
                        axutil_array_list_set(_TransformType->property_TransformTypeChoice , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_TransformType->property_TransformTypeChoice , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for Algorithm by  Property Number 2
             */
            axutil_uri_t* AXIS2_CALL
            adb_TransformType_get_property2(
                adb_TransformType_t* _TransformType,
                const axutil_env_t *env)
            {
                return adb_TransformType_get_Algorithm(_TransformType,
                                             env);
            }

            /**
             * getter for Algorithm.
             */
            axutil_uri_t* AXIS2_CALL
            adb_TransformType_get_Algorithm(
                    adb_TransformType_t* _TransformType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _TransformType, NULL);
                  

                return _TransformType->property_Algorithm;
             }

            /**
             * setter for Algorithm
             */
            axis2_status_t AXIS2_CALL
            adb_TransformType_set_Algorithm(
                    adb_TransformType_t* _TransformType,
                    const axutil_env_t *env,
                    axutil_uri_t*  arg_Algorithm)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _TransformType, AXIS2_FAILURE);
                
                if(_TransformType->is_valid_Algorithm &&
                        arg_Algorithm == _TransformType->property_Algorithm)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_Algorithm)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Algorithm is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_TransformType_reset_Algorithm(_TransformType, env);

                
                if(NULL == arg_Algorithm)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _TransformType->property_Algorithm = arg_Algorithm;
                        _TransformType->is_valid_Algorithm = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for Algorithm
            */
           axis2_status_t AXIS2_CALL
           adb_TransformType_reset_Algorithm(
                   adb_TransformType_t* _TransformType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _TransformType, AXIS2_FAILURE);
               

               
            
                
                if(_TransformType->property_Algorithm != NULL)
                {
                   
                   
                      axutil_uri_free(_TransformType->property_Algorithm, env);
                     _TransformType->property_Algorithm = NULL;
                }
            
                
                
                _TransformType->is_valid_Algorithm = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether Algorithm is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_TransformType_is_Algorithm_nil(
                   adb_TransformType_t* _TransformType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _TransformType, AXIS2_TRUE);
               
               return !_TransformType->is_valid_Algorithm;
           }

           /**
            * Set Algorithm to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_TransformType_set_Algorithm_nil(
                   adb_TransformType_t* _TransformType,
                   const axutil_env_t *env)
           {
               return adb_TransformType_reset_Algorithm(_TransformType, env);
           }

           

