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
         * adb_questions.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_questions.h"
        
               /*
                * implmentation of the questions|http://www.daisy.org/ns/daisy-online/ element
                */
           


        struct adb_questions
        {
            axis2_char_t *property_TypeName;

            
                axutil_qname_t* qname;
            axutil_array_list_t* property_questionsChoice_type0;

                
                axis2_bool_t is_valid_questionsChoice_type0;
            axis2_char_t* property_contentListRef;

                
                axis2_bool_t is_valid_contentListRef;
            adb_label_type0_t* property_label;

                
                axis2_bool_t is_valid_label;
            
                axis2_char_t *current_choice;
            
        };


       /************************* Private Function prototypes ********************************/
        
                 axis2_status_t AXIS2_CALL
                 adb_questions_set_questionsChoice_type0_nil_at(
                        adb_questions_t* _questions, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_questions_set_questionsChoice_type0_nil(
                        adb_questions_t* _questions,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_questions_set_contentListRef_nil(
                        adb_questions_t* _questions,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_questions_set_label_nil(
                        adb_questions_t* _questions,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_questions_t* AXIS2_CALL
        adb_questions_create(
            const axutil_env_t *env)
        {
            adb_questions_t *_questions = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _questions = (adb_questions_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_questions_t));

            if(NULL == _questions)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_questions, 0, sizeof(adb_questions_t));

            _questions->property_TypeName = axutil_strdup(env, "adb_questions");
            _questions->property_questionsChoice_type0  = NULL;
                  _questions->is_valid_questionsChoice_type0  = AXIS2_FALSE;
            _questions->property_contentListRef  = NULL;
                  _questions->is_valid_contentListRef  = AXIS2_FALSE;
            _questions->property_label  = NULL;
                  _questions->is_valid_label  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "questions",
                        "http://www.daisy.org/ns/daisy-online/",
                        NULL);
                _questions->qname = qname;
            _questions->current_choice = "";
            

            return _questions;
        }

        adb_questions_t* AXIS2_CALL
        adb_questions_create_with_values(
            const axutil_env_t *env,
                axutil_array_list_t* _questionsChoice_type0,
                axis2_char_t* _contentListRef,
                adb_label_type0_t* _label)
        {
            adb_questions_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_questions_create(env);

            
              status = adb_questions_set_questionsChoice_type0(
                                     adb_obj,
                                     env,
                                     _questionsChoice_type0);
              if(status == AXIS2_FAILURE) {
                  adb_questions_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_questions_set_contentListRef(
                                     adb_obj,
                                     env,
                                     _contentListRef);
              if(status == AXIS2_FAILURE) {
                  adb_questions_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_questions_set_label(
                                     adb_obj,
                                     env,
                                     _label);
              if(status == AXIS2_FAILURE) {
                  adb_questions_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axutil_array_list_t* AXIS2_CALL
                adb_questions_free_popping_value(
                        adb_questions_t* _questions,
                        const axutil_env_t *env)
                {
                    axutil_array_list_t* value;

                    
                    
                    value = _questions->property_questionsChoice_type0;

                    _questions->property_questionsChoice_type0 = (axutil_array_list_t*)NULL;
                    adb_questions_free(_questions, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_questions_free(
                adb_questions_t* _questions,
                const axutil_env_t *env)
        {
            
            
            return adb_questions_free_obj(
                _questions,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_questions_free_obj(
                adb_questions_t* _questions,
                const axutil_env_t *env)
        {
            
                int i = 0;
                int count = 0;
                void *element = NULL;
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _questions, AXIS2_FAILURE);

            if (_questions->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _questions->property_TypeName);
            }

            adb_questions_reset_questionsChoice_type0(_questions, env);
            adb_questions_reset_contentListRef(_questions, env);
            adb_questions_reset_label(_questions, env);
            
              if(_questions->qname)
              {
                  axutil_qname_free (_questions->qname, env);
                  _questions->qname = NULL;
              }
            

            if(_questions)
            {
                AXIS2_FREE(env->allocator, _questions);
                _questions = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_questions_deserialize(
                adb_questions_t* _questions,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_questions_deserialize_obj(
                _questions,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_questions_deserialize_obj(
                adb_questions_t* _questions,
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
            AXIS2_PARAM_CHECK(env->error, _questions, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for questions : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              

                    current_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                    qname = axiom_element_get_qname(current_element, env, parent);
                    if (axutil_qname_equals(qname, env, _questions-> qname))
                    {
                        
                          first_node = axiom_node_get_first_child(parent, env);
                          
                    }
                    else
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                              "Failed in building adb object for questions : "
                              "Expected %s but returned %s",
                              axutil_qname_to_string(_questions-> qname, env),
                              axutil_qname_to_string(qname, env));
                        
                        return AXIS2_FAILURE;
                    }
                    
                    /*
                     * building questionsChoice_type0 array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building questionsChoice_type0 element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "questionsChoice_type0", "http://www.daisy.org/ns/daisy-online/", NULL);
                                  
                               
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

                                  if (adb_questionsChoice_type0_is_particle() ||  
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_questionsChoice_type0");
                                          
                                          status =  adb_questionsChoice_type0_deserialize((adb_questionsChoice_type0_t*)element, env,
                                                                                 &current_node, &is_early_node_valid, AXIS2_TRUE);
                                          
                                          if(AXIS2_FAILURE ==  status)
                                          {
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element questionsChoice_type0 ");
                                          }
                                          else
                                          {
                                            axutil_array_list_add_at(arr_list, env, i, element);
                                          }
                                        
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for questionsChoice_type0 ");
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
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "questionsChoice_type0 (@minOccurs = '1') only have %d elements", i);
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
                                    status = adb_questions_set_questionsChoice_type0(_questions, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building contentListRef element
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
                                 
                                 element_qname = axutil_qname_create(env, "contentListRef", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

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
                                            status = adb_questions_set_contentListRef(_questions, env,
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
                                                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element contentListRef");
                                                status = AXIS2_FAILURE;
                                            }
                                            else
                                            {
                                                /* after all, we found this is a empty string */
                                                status = adb_questions_set_contentListRef(_questions, env,
                                                                   "");
                                            }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for contentListRef ");
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
                      * building label element
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
                                 
                                 element_qname = axutil_qname_create(env, "label", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

                           if (adb_label_type0_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_label_type0");

                                      status =  adb_label_type0_deserialize((adb_label_type0_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_TRUE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element label");
                                      }
                                      else
                                      {
                                          status = adb_questions_set_label(_questions, env,
                                                                   (adb_label_type0_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for label ");
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
          adb_questions_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_questions_declare_parent_namespaces(
                    adb_questions_t* _questions,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_questions_serialize(
                adb_questions_t* _questions,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_questions_serialize_obj(
                    _questions, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_questions_serialize_obj(
                adb_questions_t* _questions,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
         
         axiom_node_t* current_node = NULL;
         int tag_closed = 0;
         axis2_char_t* xsi_prefix = NULL;
         axiom_namespace_t* xsi_ns = NULL;
         axiom_attribute_t* xsi_type_attri = NULL;
         
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
                    
                    axis2_char_t text_value_3[ADB_DEFAULT_DIGIT_LIMIT];
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

             
                int next_ns_index_value = 0;
            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _questions, NULL);
            
             
                    namespaces = axutil_hash_make(env);
                    next_ns_index = &next_ns_index_value;
                     
                           ns1 = axiom_namespace_create (env,
                                             "http://www.daisy.org/ns/daisy-online/",
                                             "n"); 
                           axutil_hash_set(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING, axutil_strdup(env, "n"));
                       
                     
                    parent_element = axiom_element_create (env, NULL, "questions", ns1 , &parent);
                    
                    
                    axiom_element_set_namespace(parent_element, env, ns1, parent);


            
                    data_source = axiom_data_source_create(env, parent, &current_node);
                    stream = axiom_data_source_get_stream(data_source, env);
                  
                if(0 == axutil_strcmp(_questions->current_choice, "http://www.daisy.org/ns/daisy-online/:questionsChoice_type0"))
                {
                
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.daisy.org/ns/daisy-online/",
                                            p_prefix));
                       }
                      

                   if (!_questions->is_valid_questionsChoice_type0)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property questionsChoice_type0");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("questionsChoice_type0"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("questionsChoice_type0")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing questionsChoice_type0 array
                      */
                     if (_questions->property_questionsChoice_type0 != NULL)
                     {
                        

                            sprintf(start_input_str, "<%s%squestionsChoice_type0",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%squestionsChoice_type0>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_questions->property_questionsChoice_type0, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_questions->property_questionsChoice_type0, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing questionsChoice_type0 element
                      */

                    
                     
                            if(!adb_questionsChoice_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_questionsChoice_type0_serialize((adb_questionsChoice_type0_t*)element, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_questionsChoice_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_questionsChoice_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 
                if(0 == axutil_strcmp(_questions->current_choice, "http://www.daisy.org/ns/daisy-online/:contentListRef"))
                {
                
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.daisy.org/ns/daisy-online/",
                                            p_prefix));
                       }
                      

                   if (!_questions->is_valid_contentListRef)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property contentListRef");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("contentListRef"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("contentListRef")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing contentListRef element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%scontentListRef>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%scontentListRef>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_2 = _questions->property_contentListRef;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_2_temp = axutil_xml_quote_string(env, text_value_2, AXIS2_TRUE);
                           if (text_value_2_temp)
                           {
                               axutil_stream_write(stream, env, text_value_2_temp, axutil_strlen(text_value_2_temp));
                               AXIS2_FREE(env->allocator, text_value_2_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_2, axutil_strlen(text_value_2));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 
                if(0 == axutil_strcmp(_questions->current_choice, "http://www.daisy.org/ns/daisy-online/:label"))
                {
                
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.daisy.org/ns/daisy-online/",
                                            p_prefix));
                       }
                      

                   if (!_questions->is_valid_label)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property label");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("label"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("label")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing label element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%slabel",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%slabel>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_label_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_label_type0_serialize(_questions->property_label, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_label_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_label_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 
                   if(namespaces)
                   {
                       axutil_hash_index_t *hi;
                       void *val;
                       for (hi = axutil_hash_first(namespaces, env); hi; hi = axutil_hash_next(env, hi)) 
                       {
                           axutil_hash_this(hi, NULL, NULL, &val);
                           AXIS2_FREE(env->allocator, val);
                       }
                       axutil_hash_free(namespaces, env);
                   }
                

            return parent;
        }


        

            /**
             * Getter for questionsChoice_type0 by  Property Number 1
             */
            axutil_array_list_t* AXIS2_CALL
            adb_questions_get_property1(
                adb_questions_t* _questions,
                const axutil_env_t *env)
            {
                return adb_questions_get_questionsChoice_type0(_questions,
                                             env);
            }

            /**
             * getter for questionsChoice_type0.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_questions_get_questionsChoice_type0(
                    adb_questions_t* _questions,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _questions, NULL);
                  

                return _questions->property_questionsChoice_type0;
             }

            /**
             * setter for questionsChoice_type0
             */
            axis2_status_t AXIS2_CALL
            adb_questions_set_questionsChoice_type0(
                    adb_questions_t* _questions,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_questionsChoice_type0)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _questions, AXIS2_FAILURE);
                
                if(_questions->is_valid_questionsChoice_type0 &&
                        arg_questionsChoice_type0 == _questions->property_questionsChoice_type0)
                {
                    _questions->current_choice = "http://www.daisy.org/ns/daisy-online/:questionsChoice_type0";
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_questionsChoice_type0, env);
                 
                 if (size < 1)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "questionsChoice_type0 has less than minOccurs(1)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_questionsChoice_type0, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 
                    if(!non_nil_exists)
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of questionsChoice_type0 is being set to NULL, but it is not a nullable or minOccurs=0 element");
                        return AXIS2_FAILURE;
                    }
                 
                  if(NULL == arg_questionsChoice_type0)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "questionsChoice_type0 is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_questions_reset_questionsChoice_type0(_questions, env);

                
                if(NULL == arg_questionsChoice_type0)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _questions->property_questionsChoice_type0 = arg_questionsChoice_type0;
                        if(non_nil_exists)
                        {
                            _questions->is_valid_questionsChoice_type0 = AXIS2_TRUE;
                        }
                        
                    _questions->current_choice = "http://www.daisy.org/ns/daisy-online/:questionsChoice_type0";
                
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of questionsChoice_type0.
             */
            adb_questionsChoice_type0_t* AXIS2_CALL
            adb_questions_get_questionsChoice_type0_at(
                    adb_questions_t* _questions,
                    const axutil_env_t *env, int i)
            {
                adb_questionsChoice_type0_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _questions, NULL);
                  

                if(_questions->property_questionsChoice_type0 == NULL)
                {
                    return (adb_questionsChoice_type0_t*)0;
                }
                ret_val = (adb_questionsChoice_type0_t*)axutil_array_list_get(_questions->property_questionsChoice_type0, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of questionsChoice_type0.
             */
            axis2_status_t AXIS2_CALL
            adb_questions_set_questionsChoice_type0_at(
                    adb_questions_t* _questions,
                    const axutil_env_t *env, int i,
                    adb_questionsChoice_type0_t* arg_questionsChoice_type0)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _questions, AXIS2_FAILURE);
                
                if( _questions->is_valid_questionsChoice_type0 &&
                    _questions->property_questionsChoice_type0 &&
                
                    arg_questionsChoice_type0 == (adb_questionsChoice_type0_t*)axutil_array_list_get(_questions->property_questionsChoice_type0, env, i))
                  
                {
                    _questions->current_choice = "http://www.daisy.org/ns/daisy-online/:questionsChoice_type0";
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_questionsChoice_type0)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_questions->property_questionsChoice_type0 != NULL)
                        {
                            size = axutil_array_list_size(_questions->property_questionsChoice_type0, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_questions->property_questionsChoice_type0, env, i))
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
                                   AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of questionsChoice_type0 is beinng set to be smaller than the specificed number of minOccurs(1)");
                                   return AXIS2_FAILURE;
                            }
                        
                        }
                    }
                  
                   if(!non_nil_exists)
                   {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of questionsChoice_type0 is being set to NULL, but it is not a nullable or minOccurs=0 element");
                       return AXIS2_FAILURE;
                   }
                

                if(_questions->property_questionsChoice_type0 == NULL)
                {
                    _questions->property_questionsChoice_type0 = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_questions->property_questionsChoice_type0, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_questionsChoice_type0_free((adb_questionsChoice_type0_t*)element, env);
                     
                }

                
                   axutil_array_list_set(_questions->property_questionsChoice_type0 , env, i, arg_questionsChoice_type0);
                  _questions->is_valid_questionsChoice_type0 = AXIS2_TRUE;
                _questions->current_choice = "http://www.daisy.org/ns/daisy-online/:questionsChoice_type0";
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to questionsChoice_type0.
             */
            axis2_status_t AXIS2_CALL
            adb_questions_add_questionsChoice_type0(
                    adb_questions_t* _questions,
                    const axutil_env_t *env,
                    adb_questionsChoice_type0_t* arg_questionsChoice_type0)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _questions, AXIS2_FAILURE);

                
                    if(NULL == arg_questionsChoice_type0)
                    {
                      
                           AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of questionsChoice_type0 is being set to NULL, but it is not a nullable or minOccurs=0 element");
                           return AXIS2_FAILURE;
                        
                    }
                  

                if(_questions->property_questionsChoice_type0 == NULL)
                {
                    _questions->property_questionsChoice_type0 = axutil_array_list_create(env, 10);
                }
                if(_questions->property_questionsChoice_type0 == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for questionsChoice_type0");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_questions->property_questionsChoice_type0 , env, arg_questionsChoice_type0);
                  _questions->is_valid_questionsChoice_type0 = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the questionsChoice_type0 array.
             */
            int AXIS2_CALL
            adb_questions_sizeof_questionsChoice_type0(
                    adb_questions_t* _questions,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _questions, -1);
                if(_questions->property_questionsChoice_type0 == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_questions->property_questionsChoice_type0, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_questions_remove_questionsChoice_type0_at(
                    adb_questions_t* _questions,
                    const axutil_env_t *env, int i)
            {
                return adb_questions_set_questionsChoice_type0_nil_at(_questions, env, i);
            }

            

           /**
            * resetter for questionsChoice_type0
            */
           axis2_status_t AXIS2_CALL
           adb_questions_reset_questionsChoice_type0(
                   adb_questions_t* _questions,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _questions, AXIS2_FAILURE);
               

               
                  if (_questions->property_questionsChoice_type0 != NULL)
                  {
                      count = axutil_array_list_size(_questions->property_questionsChoice_type0, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_questions->property_questionsChoice_type0, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   adb_questionsChoice_type0_free((adb_questionsChoice_type0_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_questions->property_questionsChoice_type0, env);
                  }
                _questions->is_valid_questionsChoice_type0 = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether questionsChoice_type0 is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_questions_is_questionsChoice_type0_nil(
                   adb_questions_t* _questions,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _questions, AXIS2_TRUE);
               
               return !_questions->is_valid_questionsChoice_type0;
           }

           /**
            * Set questionsChoice_type0 to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_questions_set_questionsChoice_type0_nil(
                   adb_questions_t* _questions,
                   const axutil_env_t *env)
           {
               return adb_questions_reset_questionsChoice_type0(_questions, env);
           }

           
           /**
            * Check whether questionsChoice_type0 is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_questions_is_questionsChoice_type0_nil_at(
                   adb_questions_t* _questions,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _questions, AXIS2_TRUE);
               
               return (_questions->is_valid_questionsChoice_type0 == AXIS2_FALSE ||
                        NULL == _questions->property_questionsChoice_type0 || 
                        NULL == axutil_array_list_get(_questions->property_questionsChoice_type0, env, i));
           }

           /**
            * Set questionsChoice_type0 to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_questions_set_questionsChoice_type0_nil_at(
                   adb_questions_t* _questions,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _questions, AXIS2_FAILURE);

                if(_questions->property_questionsChoice_type0 == NULL ||
                            _questions->is_valid_questionsChoice_type0 == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_questions->property_questionsChoice_type0, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_questions->property_questionsChoice_type0, env, i))
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
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of questionsChoice_type0 is being set to NULL, but it is not a nullable or minOccurs=0 element");
                       return AXIS2_FAILURE;
                   }
                

                if( k < 1)
                {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of questionsChoice_type0 is beinng set to be smaller than the specificed number of minOccurs(1)");
                       return AXIS2_FAILURE;
                }
 
                if(_questions->property_questionsChoice_type0 == NULL)
                {
                    _questions->is_valid_questionsChoice_type0 = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_questions->property_questionsChoice_type0, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_questionsChoice_type0_free((adb_questionsChoice_type0_t*)element, env);
                     
                }

                

                
                axutil_array_list_set(_questions->property_questionsChoice_type0 , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for contentListRef by  Property Number 2
             */
            axis2_char_t* AXIS2_CALL
            adb_questions_get_property2(
                adb_questions_t* _questions,
                const axutil_env_t *env)
            {
                return adb_questions_get_contentListRef(_questions,
                                             env);
            }

            /**
             * getter for contentListRef.
             */
            axis2_char_t* AXIS2_CALL
            adb_questions_get_contentListRef(
                    adb_questions_t* _questions,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _questions, NULL);
                  

                return _questions->property_contentListRef;
             }

            /**
             * setter for contentListRef
             */
            axis2_status_t AXIS2_CALL
            adb_questions_set_contentListRef(
                    adb_questions_t* _questions,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_contentListRef)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _questions, AXIS2_FAILURE);
                
                if(_questions->is_valid_contentListRef &&
                        arg_contentListRef == _questions->property_contentListRef)
                {
                    _questions->current_choice = "http://www.daisy.org/ns/daisy-online/:contentListRef";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_contentListRef)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "contentListRef is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_questions_reset_contentListRef(_questions, env);

                
                if(NULL == arg_contentListRef)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _questions->property_contentListRef = (axis2_char_t *)axutil_strdup(env, arg_contentListRef);
                        if(NULL == _questions->property_contentListRef)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for contentListRef");
                            return AXIS2_FAILURE;
                        }
                        _questions->is_valid_contentListRef = AXIS2_TRUE;
                    _questions->current_choice = "http://www.daisy.org/ns/daisy-online/:contentListRef";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for contentListRef
            */
           axis2_status_t AXIS2_CALL
           adb_questions_reset_contentListRef(
                   adb_questions_t* _questions,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _questions, AXIS2_FAILURE);
               

               
            
                
                if(_questions->property_contentListRef != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _questions->property_contentListRef);
                     _questions->property_contentListRef = NULL;
                }
            
                
                
                _questions->is_valid_contentListRef = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether contentListRef is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_questions_is_contentListRef_nil(
                   adb_questions_t* _questions,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _questions, AXIS2_TRUE);
               
               return !_questions->is_valid_contentListRef;
           }

           /**
            * Set contentListRef to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_questions_set_contentListRef_nil(
                   adb_questions_t* _questions,
                   const axutil_env_t *env)
           {
               return adb_questions_reset_contentListRef(_questions, env);
           }

           

            /**
             * Getter for label by  Property Number 3
             */
            adb_label_type0_t* AXIS2_CALL
            adb_questions_get_property3(
                adb_questions_t* _questions,
                const axutil_env_t *env)
            {
                return adb_questions_get_label(_questions,
                                             env);
            }

            /**
             * getter for label.
             */
            adb_label_type0_t* AXIS2_CALL
            adb_questions_get_label(
                    adb_questions_t* _questions,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _questions, NULL);
                  

                return _questions->property_label;
             }

            /**
             * setter for label
             */
            axis2_status_t AXIS2_CALL
            adb_questions_set_label(
                    adb_questions_t* _questions,
                    const axutil_env_t *env,
                    adb_label_type0_t*  arg_label)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _questions, AXIS2_FAILURE);
                
                if(_questions->is_valid_label &&
                        arg_label == _questions->property_label)
                {
                    _questions->current_choice = "http://www.daisy.org/ns/daisy-online/:label";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_label)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "label is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_questions_reset_label(_questions, env);

                
                if(NULL == arg_label)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _questions->property_label = arg_label;
                        _questions->is_valid_label = AXIS2_TRUE;
                    _questions->current_choice = "http://www.daisy.org/ns/daisy-online/:label";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for label
            */
           axis2_status_t AXIS2_CALL
           adb_questions_reset_label(
                   adb_questions_t* _questions,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _questions, AXIS2_FAILURE);
               

               
            
                
                if(_questions->property_label != NULL)
                {
                   
                   adb_label_type0_free(_questions->property_label, env);
                     _questions->property_label = NULL;
                }
            
                
                
                _questions->is_valid_label = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether label is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_questions_is_label_nil(
                   adb_questions_t* _questions,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _questions, AXIS2_TRUE);
               
               return !_questions->is_valid_label;
           }

           /**
            * Set label to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_questions_set_label_nil(
                   adb_questions_t* _questions,
                   const axutil_env_t *env)
           {
               return adb_questions_reset_label(_questions, env);
           }

           

