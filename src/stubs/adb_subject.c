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
         * adb_subject.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_subject.h"
        
               /*
                * implmentation of the subject|http://purl.org/dc/elements/1.1/ element
                */
           


        struct adb_subject
        {
            axis2_char_t *property_TypeName;

            
                axutil_qname_t* qname;
            axiom_node_t* property_subject;

                
                axis2_bool_t is_valid_subject;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_subject_set_subject_nil(
                        adb_subject_t* _subject,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_subject_t* AXIS2_CALL
        adb_subject_create(
            const axutil_env_t *env)
        {
            adb_subject_t *_subject = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _subject = (adb_subject_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_subject_t));

            if(NULL == _subject)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_subject, 0, sizeof(adb_subject_t));

            _subject->property_TypeName = axutil_strdup(env, "adb_subject");
            _subject->is_valid_subject  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "subject",
                        "http://purl.org/dc/elements/1.1/",
                        NULL);
                _subject->qname = qname;
            

            return _subject;
        }

        adb_subject_t* AXIS2_CALL
        adb_subject_create_with_values(
            const axutil_env_t *env,
                axiom_node_t* _subject)
        {
            adb_subject_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_subject_create(env);

            
              status = adb_subject_set_subject(
                                     adb_obj,
                                     env,
                                     _subject);
              if(status == AXIS2_FAILURE) {
                  adb_subject_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axiom_node_t* AXIS2_CALL
                adb_subject_free_popping_value(
                        adb_subject_t* _subject,
                        const axutil_env_t *env)
                {
                    axiom_node_t* value;

                    
                    
                    value = _subject->property_subject;

                    adb_subject_free(_subject, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_subject_free(
                adb_subject_t* _subject,
                const axutil_env_t *env)
        {
            
            
            return adb_subject_free_obj(
                _subject,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_subject_free_obj(
                adb_subject_t* _subject,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _subject, AXIS2_FAILURE);

            if (_subject->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _subject->property_TypeName);
            }

            adb_subject_reset_subject(_subject, env);
            
              if(_subject->qname)
              {
                  axutil_qname_free (_subject->qname, env);
                  _subject->qname = NULL;
              }
            

            if(_subject)
            {
                AXIS2_FREE(env->allocator, _subject);
                _subject = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_subject_deserialize(
                adb_subject_t* _subject,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_subject_deserialize_obj(
                _subject,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_subject_deserialize_obj(
                adb_subject_t* _subject,
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
            AXIS2_PARAM_CHECK(env->error, _subject, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for subject : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              

                    current_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                    qname = axiom_element_get_qname(current_element, env, parent);
                    if (axutil_qname_equals(qname, env, _subject-> qname))
                    {
                        
                          first_node = parent;
                          
                    }
                    else
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                              "Failed in building adb object for subject : "
                              "Expected %s but returned %s",
                              axutil_qname_to_string(_subject-> qname, env),
                              axutil_qname_to_string(qname, env));
                        
                        return AXIS2_FAILURE;
                    }
                    

                     
                     /*
                      * building subject element
                      */
                     
                     
                     
                                   current_node = first_node;
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
                                          status = adb_subject_set_subject(_subject, env,
                                                                          current_property_node);
                                        }
                                        
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for subject ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element subject missing");
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
          adb_subject_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_subject_declare_parent_namespaces(
                    adb_subject_t* _subject,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_subject_serialize(
                adb_subject_t* _subject,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_subject_serialize_obj(
                    _subject, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_subject_serialize_obj(
                adb_subject_t* _subject,
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
            
                    axis2_char_t *text_value_1;
                    axis2_char_t *text_value_1_temp;
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

             
                int next_ns_index_value = 0;
            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _subject, NULL);
            
             
                    namespaces = axutil_hash_make(env);
                    next_ns_index = &next_ns_index_value;
                     
                           ns1 = axiom_namespace_create (env,
                                             "http://purl.org/dc/elements/1.1/",
                                             "n"); 
                           axutil_hash_set(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING, axutil_strdup(env, "n"));
                       
                     
                    parent_element = axiom_element_create (env, NULL, "subject", ns1 , &parent);
                    
                    
                    axiom_element_set_namespace(parent_element, env, ns1, parent);


            
                    data_source = axiom_data_source_create(env, parent, &current_node);
                    stream = axiom_data_source_get_stream(data_source, env);
                  
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://purl.org/dc/elements/1.1/",
                                            p_prefix));
                       }
                      

                   if (!_subject->is_valid_subject)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property subject");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("subject"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("subject")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing subject element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%ssubject>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%ssubject>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                                text_value_1 = NULL; /* just to bypass the warning unused variable */
                                axiom_node_add_child(parent, env, _subject->property_subject);
                              
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
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
             * Getter for subject by  Property Number 1
             */
            axiom_node_t* AXIS2_CALL
            adb_subject_get_property1(
                adb_subject_t* _subject,
                const axutil_env_t *env)
            {
                return adb_subject_get_subject(_subject,
                                             env);
            }

            /**
             * getter for subject.
             */
            axiom_node_t* AXIS2_CALL
            adb_subject_get_subject(
                    adb_subject_t* _subject,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _subject, NULL);
                  

                return _subject->property_subject;
             }

            /**
             * setter for subject
             */
            axis2_status_t AXIS2_CALL
            adb_subject_set_subject(
                    adb_subject_t* _subject,
                    const axutil_env_t *env,
                    axiom_node_t*  arg_subject)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _subject, AXIS2_FAILURE);
                
                if(_subject->is_valid_subject &&
                        arg_subject == _subject->property_subject)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_subject)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "subject is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_subject_reset_subject(_subject, env);

                
                if(NULL == arg_subject)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _subject->property_subject = arg_subject;
                        _subject->is_valid_subject = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for subject
            */
           axis2_status_t AXIS2_CALL
           adb_subject_reset_subject(
                   adb_subject_t* _subject,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _subject, AXIS2_FAILURE);
               

               _subject->is_valid_subject = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether subject is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_subject_is_subject_nil(
                   adb_subject_t* _subject,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _subject, AXIS2_TRUE);
               
               return !_subject->is_valid_subject;
           }

           /**
            * Set subject to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_subject_set_subject_nil(
                   adb_subject_t* _subject,
                   const axutil_env_t *env)
           {
               return adb_subject_reset_subject(_subject, env);
           }

           

