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
         * adb_hiliteStart_type0.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_hiliteStart_type0.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = hiliteStart_type0
                 * Namespace URI = http://www.daisy.org/z3986/2005/bookmark/
                 * Namespace Prefix = ns4
                 */
           


        struct adb_hiliteStart_type0
        {
            axis2_char_t *property_TypeName;

            adb_hiliteContent_t* property_hiliteContent;

                
                axis2_bool_t is_valid_hiliteContent;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_hiliteStart_type0_set_hiliteContent_nil(
                        adb_hiliteStart_type0_t* _hiliteStart_type0,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_hiliteStart_type0_t* AXIS2_CALL
        adb_hiliteStart_type0_create(
            const axutil_env_t *env)
        {
            adb_hiliteStart_type0_t *_hiliteStart_type0 = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _hiliteStart_type0 = (adb_hiliteStart_type0_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_hiliteStart_type0_t));

            if(NULL == _hiliteStart_type0)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_hiliteStart_type0, 0, sizeof(adb_hiliteStart_type0_t));

            _hiliteStart_type0->property_TypeName = axutil_strdup(env, "adb_hiliteStart_type0");
            _hiliteStart_type0->property_hiliteContent  = NULL;
                  _hiliteStart_type0->is_valid_hiliteContent  = AXIS2_FALSE;
            

            return _hiliteStart_type0;
        }

        adb_hiliteStart_type0_t* AXIS2_CALL
        adb_hiliteStart_type0_create_with_values(
            const axutil_env_t *env,
                adb_hiliteContent_t* _hiliteContent)
        {
            adb_hiliteStart_type0_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_hiliteStart_type0_create(env);

            
              status = adb_hiliteStart_type0_set_hiliteContent(
                                     adb_obj,
                                     env,
                                     _hiliteContent);
              if(status == AXIS2_FAILURE) {
                  adb_hiliteStart_type0_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        adb_hiliteContent_t* AXIS2_CALL
                adb_hiliteStart_type0_free_popping_value(
                        adb_hiliteStart_type0_t* _hiliteStart_type0,
                        const axutil_env_t *env)
                {
                    adb_hiliteContent_t* value;

                    
                    
                    value = _hiliteStart_type0->property_hiliteContent;

                    _hiliteStart_type0->property_hiliteContent = (adb_hiliteContent_t*)NULL;
                    adb_hiliteStart_type0_free(_hiliteStart_type0, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_hiliteStart_type0_free(
                adb_hiliteStart_type0_t* _hiliteStart_type0,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _hiliteStart_type0,
                env,
                "adb_hiliteStart_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_hiliteStart_type0_free_obj(
                adb_hiliteStart_type0_t* _hiliteStart_type0,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _hiliteStart_type0, AXIS2_FAILURE);

            if (_hiliteStart_type0->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _hiliteStart_type0->property_TypeName);
            }

            adb_hiliteStart_type0_reset_hiliteContent(_hiliteStart_type0, env);
            

            if(_hiliteStart_type0)
            {
                AXIS2_FREE(env->allocator, _hiliteStart_type0);
                _hiliteStart_type0 = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_hiliteStart_type0_deserialize(
                adb_hiliteStart_type0_t* _hiliteStart_type0,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _hiliteStart_type0,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_hiliteStart_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_hiliteStart_type0_deserialize_obj(
                adb_hiliteStart_type0_t* _hiliteStart_type0,
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
            AXIS2_PARAM_CHECK(env->error, _hiliteStart_type0, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for hiliteStart_type0 : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    

                     
                     /*
                      * building hiliteContent element
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
                                   
                                 element_qname = axutil_qname_create(env, "hiliteContent", "http://www.daisy.org/z3986/2005/bookmark/", NULL);
                                 

                           if (adb_hiliteContent_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_hiliteContent");

                                      status =  adb_hiliteContent_deserialize((adb_hiliteContent_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element hiliteContent");
                                      }
                                      else
                                      {
                                          status = adb_hiliteStart_type0_set_hiliteContent(_hiliteStart_type0, env,
                                                                   (adb_hiliteContent_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for hiliteContent ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element hiliteContent missing");
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
          adb_hiliteStart_type0_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_hiliteStart_type0_declare_parent_namespaces(
                    adb_hiliteStart_type0_t* _hiliteStart_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_hiliteStart_type0_serialize(
                adb_hiliteStart_type0_t* _hiliteStart_type0,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_hiliteStart_type0 == NULL)
            {
                return adb_hiliteStart_type0_serialize_obj(
                    _hiliteStart_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _hiliteStart_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_hiliteStart_type0");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_hiliteStart_type0_serialize_obj(
                adb_hiliteStart_type0_t* _hiliteStart_type0,
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
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _hiliteStart_type0, NULL);
            
            
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
        
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.daisy.org/z3986/2005/bookmark/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.daisy.org/z3986/2005/bookmark/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.daisy.org/z3986/2005/bookmark/",
                                            p_prefix));
                       }
                      

                   if (!_hiliteStart_type0->is_valid_hiliteContent)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property hiliteContent");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("hiliteContent"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("hiliteContent")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing hiliteContent element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%shiliteContent",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%shiliteContent>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_hiliteContent_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_hiliteContent_serialize(_hiliteStart_type0->property_hiliteContent, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_hiliteContent_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_hiliteContent_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 

            return parent;
        }


        

            /**
             * Getter for hiliteContent by  Property Number 1
             */
            adb_hiliteContent_t* AXIS2_CALL
            adb_hiliteStart_type0_get_property1(
                adb_hiliteStart_type0_t* _hiliteStart_type0,
                const axutil_env_t *env)
            {
                return adb_hiliteStart_type0_get_hiliteContent(_hiliteStart_type0,
                                             env);
            }

            /**
             * getter for hiliteContent.
             */
            adb_hiliteContent_t* AXIS2_CALL
            adb_hiliteStart_type0_get_hiliteContent(
                    adb_hiliteStart_type0_t* _hiliteStart_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _hiliteStart_type0, NULL);
                  

                return _hiliteStart_type0->property_hiliteContent;
             }

            /**
             * setter for hiliteContent
             */
            axis2_status_t AXIS2_CALL
            adb_hiliteStart_type0_set_hiliteContent(
                    adb_hiliteStart_type0_t* _hiliteStart_type0,
                    const axutil_env_t *env,
                    adb_hiliteContent_t*  arg_hiliteContent)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _hiliteStart_type0, AXIS2_FAILURE);
                
                if(_hiliteStart_type0->is_valid_hiliteContent &&
                        arg_hiliteContent == _hiliteStart_type0->property_hiliteContent)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_hiliteContent)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "hiliteContent is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_hiliteStart_type0_reset_hiliteContent(_hiliteStart_type0, env);

                
                if(NULL == arg_hiliteContent)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _hiliteStart_type0->property_hiliteContent = arg_hiliteContent;
                        _hiliteStart_type0->is_valid_hiliteContent = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for hiliteContent
            */
           axis2_status_t AXIS2_CALL
           adb_hiliteStart_type0_reset_hiliteContent(
                   adb_hiliteStart_type0_t* _hiliteStart_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _hiliteStart_type0, AXIS2_FAILURE);
               

               
            
                
                if(_hiliteStart_type0->property_hiliteContent != NULL)
                {
                   
                   adb_hiliteContent_free(_hiliteStart_type0->property_hiliteContent, env);
                     _hiliteStart_type0->property_hiliteContent = NULL;
                }
            
                
                
                _hiliteStart_type0->is_valid_hiliteContent = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether hiliteContent is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_hiliteStart_type0_is_hiliteContent_nil(
                   adb_hiliteStart_type0_t* _hiliteStart_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _hiliteStart_type0, AXIS2_TRUE);
               
               return !_hiliteStart_type0->is_valid_hiliteContent;
           }

           /**
            * Set hiliteContent to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_hiliteStart_type0_set_hiliteContent_nil(
                   adb_hiliteStart_type0_t* _hiliteStart_type0,
                   const axutil_env_t *env)
           {
               return adb_hiliteStart_type0_reset_hiliteContent(_hiliteStart_type0, env);
           }

           

