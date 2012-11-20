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
         * adb_title.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_title.h"
        
               /*
                * implmentation of the title|http://purl.org/dc/elements/1.1/ element
                */
           


        struct adb_title
        {
            axis2_char_t *property_TypeName;

            
                axutil_qname_t* qname;
            axiom_node_t* property_title;

                
                axis2_bool_t is_valid_title;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_title_set_title_nil(
                        adb_title_t* _title,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_title_t* AXIS2_CALL
        adb_title_create(
            const axutil_env_t *env)
        {
            adb_title_t *_title = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _title = (adb_title_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_title_t));

            if(NULL == _title)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_title, 0, sizeof(adb_title_t));

            _title->property_TypeName = axutil_strdup(env, "adb_title");
            _title->is_valid_title  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "title",
                        "http://purl.org/dc/elements/1.1/",
                        NULL);
                _title->qname = qname;
            

            return _title;
        }

        adb_title_t* AXIS2_CALL
        adb_title_create_with_values(
            const axutil_env_t *env,
                axiom_node_t* _title)
        {
            adb_title_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_title_create(env);

            
              status = adb_title_set_title(
                                     adb_obj,
                                     env,
                                     _title);
              if(status == AXIS2_FAILURE) {
                  adb_title_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axiom_node_t* AXIS2_CALL
                adb_title_free_popping_value(
                        adb_title_t* _title,
                        const axutil_env_t *env)
                {
                    axiom_node_t* value;

                    
                    
                    value = _title->property_title;

                    adb_title_free(_title, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_title_free(
                adb_title_t* _title,
                const axutil_env_t *env)
        {
            
            
            return adb_title_free_obj(
                _title,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_title_free_obj(
                adb_title_t* _title,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _title, AXIS2_FAILURE);

            if (_title->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _title->property_TypeName);
            }

            adb_title_reset_title(_title, env);
            
              if(_title->qname)
              {
                  axutil_qname_free (_title->qname, env);
                  _title->qname = NULL;
              }
            

            if(_title)
            {
                AXIS2_FREE(env->allocator, _title);
                _title = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_title_deserialize(
                adb_title_t* _title,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_title_deserialize_obj(
                _title,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_title_deserialize_obj(
                adb_title_t* _title,
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
            AXIS2_PARAM_CHECK(env->error, _title, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for title : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              

                    current_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                    qname = axiom_element_get_qname(current_element, env, parent);
                    if (axutil_qname_equals(qname, env, _title-> qname))
                    {
                        
                          first_node = parent;
                          
                    }
                    else
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                              "Failed in building adb object for title : "
                              "Expected %s but returned %s",
                              axutil_qname_to_string(_title-> qname, env),
                              axutil_qname_to_string(qname, env));
                        
                        return AXIS2_FAILURE;
                    }
                    

                     
                     /*
                      * building title element
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
                                          status = adb_title_set_title(_title, env,
                                                                          current_property_node);
                                        }
                                        
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for title ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element title missing");
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
          adb_title_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_title_declare_parent_namespaces(
                    adb_title_t* _title,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_title_serialize(
                adb_title_t* _title,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_title_serialize_obj(
                    _title, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_title_serialize_obj(
                adb_title_t* _title,
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
            AXIS2_PARAM_CHECK(env->error, _title, NULL);
            
             
                    namespaces = axutil_hash_make(env);
                    next_ns_index = &next_ns_index_value;
                     
                           ns1 = axiom_namespace_create (env,
                                             "http://purl.org/dc/elements/1.1/",
                                             "n"); 
                           axutil_hash_set(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING, axutil_strdup(env, "n"));
                       
                     
                    parent_element = axiom_element_create (env, NULL, "title", ns1 , &parent);
                    
                    
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
                      

                   if (!_title->is_valid_title)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property title");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("title"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("title")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing title element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%stitle>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%stitle>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                                text_value_1 = NULL; /* just to bypass the warning unused variable */
                                axiom_node_add_child(parent, env, _title->property_title);
                              
                     
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
             * Getter for title by  Property Number 1
             */
            axiom_node_t* AXIS2_CALL
            adb_title_get_property1(
                adb_title_t* _title,
                const axutil_env_t *env)
            {
                return adb_title_get_title(_title,
                                             env);
            }

            /**
             * getter for title.
             */
            axiom_node_t* AXIS2_CALL
            adb_title_get_title(
                    adb_title_t* _title,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _title, NULL);
                  

                return _title->property_title;
             }

            /**
             * setter for title
             */
            axis2_status_t AXIS2_CALL
            adb_title_set_title(
                    adb_title_t* _title,
                    const axutil_env_t *env,
                    axiom_node_t*  arg_title)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _title, AXIS2_FAILURE);
                
                if(_title->is_valid_title &&
                        arg_title == _title->property_title)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_title)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "title is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_title_reset_title(_title, env);

                
                if(NULL == arg_title)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _title->property_title = arg_title;
                        _title->is_valid_title = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for title
            */
           axis2_status_t AXIS2_CALL
           adb_title_reset_title(
                   adb_title_t* _title,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _title, AXIS2_FAILURE);
               

               _title->is_valid_title = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether title is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_title_is_title_nil(
                   adb_title_t* _title,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _title, AXIS2_TRUE);
               
               return !_title->is_valid_title;
           }

           /**
            * Set title to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_title_set_title_nil(
                   adb_title_t* _title,
                   const axutil_env_t *env)
           {
               return adb_title_reset_title(_title, env);
           }

           

