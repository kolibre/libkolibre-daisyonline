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
         * adb_announcements_type0.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_announcements_type0.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = announcements_type0
                 * Namespace URI = http://www.daisy.org/ns/daisy-online/
                 * Namespace Prefix = ns3
                 */
           


        struct adb_announcements_type0
        {
            axis2_char_t *property_TypeName;

            axutil_array_list_t* property_announcement;

                
                axis2_bool_t is_valid_announcement;
            
        };


       /************************* Private Function prototypes ********************************/
        
                 axis2_status_t AXIS2_CALL
                 adb_announcements_type0_set_announcement_nil_at(
                        adb_announcements_type0_t* _announcements_type0, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_announcements_type0_set_announcement_nil(
                        adb_announcements_type0_t* _announcements_type0,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_announcements_type0_t* AXIS2_CALL
        adb_announcements_type0_create(
            const axutil_env_t *env)
        {
            adb_announcements_type0_t *_announcements_type0 = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _announcements_type0 = (adb_announcements_type0_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_announcements_type0_t));

            if(NULL == _announcements_type0)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_announcements_type0, 0, sizeof(adb_announcements_type0_t));

            _announcements_type0->property_TypeName = axutil_strdup(env, "adb_announcements_type0");
            _announcements_type0->property_announcement  = NULL;
                  _announcements_type0->is_valid_announcement  = AXIS2_FALSE;
            

            return _announcements_type0;
        }

        adb_announcements_type0_t* AXIS2_CALL
        adb_announcements_type0_create_with_values(
            const axutil_env_t *env,
                axutil_array_list_t* _announcement)
        {
            adb_announcements_type0_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_announcements_type0_create(env);

            
              status = adb_announcements_type0_set_announcement(
                                     adb_obj,
                                     env,
                                     _announcement);
              if(status == AXIS2_FAILURE) {
                  adb_announcements_type0_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axutil_array_list_t* AXIS2_CALL
                adb_announcements_type0_free_popping_value(
                        adb_announcements_type0_t* _announcements_type0,
                        const axutil_env_t *env)
                {
                    axutil_array_list_t* value;

                    
                    
                    value = _announcements_type0->property_announcement;

                    _announcements_type0->property_announcement = (axutil_array_list_t*)NULL;
                    adb_announcements_type0_free(_announcements_type0, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_announcements_type0_free(
                adb_announcements_type0_t* _announcements_type0,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _announcements_type0,
                env,
                "adb_announcements_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_announcements_type0_free_obj(
                adb_announcements_type0_t* _announcements_type0,
                const axutil_env_t *env)
        {
            
                int i = 0;
                int count = 0;
                void *element = NULL;
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _announcements_type0, AXIS2_FAILURE);

            if (_announcements_type0->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _announcements_type0->property_TypeName);
            }

            adb_announcements_type0_reset_announcement(_announcements_type0, env);
            

            if(_announcements_type0)
            {
                AXIS2_FREE(env->allocator, _announcements_type0);
                _announcements_type0 = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_announcements_type0_deserialize(
                adb_announcements_type0_t* _announcements_type0,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _announcements_type0,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_announcements_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_announcements_type0_deserialize_obj(
                adb_announcements_type0_t* _announcements_type0,
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
            AXIS2_PARAM_CHECK(env->error, _announcements_type0, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for announcements_type0 : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    
                    /*
                     * building announcement array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building announcement element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "announcement", "http://www.daisy.org/ns/daisy-online/", NULL);
                                  
                               
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

                                  if (adb_announcement_type0_is_particle() ||  
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_announcement_type0");
                                          
                                          status =  adb_announcement_type0_deserialize((adb_announcement_type0_t*)element, env,
                                                                                 &current_node, &is_early_node_valid, AXIS2_FALSE);
                                          
                                          if(AXIS2_FAILURE ==  status)
                                          {
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element announcement ");
                                          }
                                          else
                                          {
                                            axutil_array_list_add_at(arr_list, env, i, element);
                                          }
                                        
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for announcement ");
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
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "announcement (@minOccurs = '0') only have %d elements", i);
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
                                    status = adb_announcements_type0_set_announcement(_announcements_type0, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_announcements_type0_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_announcements_type0_declare_parent_namespaces(
                    adb_announcements_type0_t* _announcements_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_announcements_type0_serialize(
                adb_announcements_type0_t* _announcements_type0,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_announcements_type0 == NULL)
            {
                return adb_announcements_type0_serialize_obj(
                    _announcements_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _announcements_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_announcements_type0");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_announcements_type0_serialize_obj(
                adb_announcements_type0_t* _announcements_type0,
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
            
               int i = 0;
               int count = 0;
               void *element = NULL;
             
                    axis2_char_t text_value_1[ADB_DEFAULT_DIGIT_LIMIT];
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _announcements_type0, NULL);
            
            
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
        
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.daisy.org/ns/daisy-online/",
                                            p_prefix));
                       }
                      

                   if (!_announcements_type0->is_valid_announcement)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("announcement"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("announcement")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing announcement array
                      */
                     if (_announcements_type0->property_announcement != NULL)
                     {
                        

                            sprintf(start_input_str, "<%s%sannouncement",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%sannouncement>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_announcements_type0->property_announcement, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_announcements_type0->property_announcement, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing announcement element
                      */

                    
                     
                            if(!adb_announcement_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_announcement_type0_serialize((adb_announcement_type0_t*)element, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_announcement_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_announcement_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 

            return parent;
        }


        

            /**
             * Getter for announcement by  Property Number 1
             */
            axutil_array_list_t* AXIS2_CALL
            adb_announcements_type0_get_property1(
                adb_announcements_type0_t* _announcements_type0,
                const axutil_env_t *env)
            {
                return adb_announcements_type0_get_announcement(_announcements_type0,
                                             env);
            }

            /**
             * getter for announcement.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_announcements_type0_get_announcement(
                    adb_announcements_type0_t* _announcements_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _announcements_type0, NULL);
                  

                return _announcements_type0->property_announcement;
             }

            /**
             * setter for announcement
             */
            axis2_status_t AXIS2_CALL
            adb_announcements_type0_set_announcement(
                    adb_announcements_type0_t* _announcements_type0,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_announcement)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _announcements_type0, AXIS2_FAILURE);
                
                if(_announcements_type0->is_valid_announcement &&
                        arg_announcement == _announcements_type0->property_announcement)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_announcement, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "announcement has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_announcement, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_announcements_type0_reset_announcement(_announcements_type0, env);

                
                if(NULL == arg_announcement)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _announcements_type0->property_announcement = arg_announcement;
                        if(non_nil_exists)
                        {
                            _announcements_type0->is_valid_announcement = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of announcement.
             */
            adb_announcement_type0_t* AXIS2_CALL
            adb_announcements_type0_get_announcement_at(
                    adb_announcements_type0_t* _announcements_type0,
                    const axutil_env_t *env, int i)
            {
                adb_announcement_type0_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _announcements_type0, NULL);
                  

                if(_announcements_type0->property_announcement == NULL)
                {
                    return (adb_announcement_type0_t*)0;
                }
                ret_val = (adb_announcement_type0_t*)axutil_array_list_get(_announcements_type0->property_announcement, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of announcement.
             */
            axis2_status_t AXIS2_CALL
            adb_announcements_type0_set_announcement_at(
                    adb_announcements_type0_t* _announcements_type0,
                    const axutil_env_t *env, int i,
                    adb_announcement_type0_t* arg_announcement)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _announcements_type0, AXIS2_FAILURE);
                
                if( _announcements_type0->is_valid_announcement &&
                    _announcements_type0->property_announcement &&
                
                    arg_announcement == (adb_announcement_type0_t*)axutil_array_list_get(_announcements_type0->property_announcement, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_announcement)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_announcements_type0->property_announcement != NULL)
                        {
                            size = axutil_array_list_size(_announcements_type0->property_announcement, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_announcements_type0->property_announcement, env, i))
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
                  

                if(_announcements_type0->property_announcement == NULL)
                {
                    _announcements_type0->property_announcement = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_announcements_type0->property_announcement, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_announcement_type0_free((adb_announcement_type0_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _announcements_type0->is_valid_announcement = AXIS2_FALSE;
                        axutil_array_list_set(_announcements_type0->property_announcement , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_announcements_type0->property_announcement , env, i, arg_announcement);
                  _announcements_type0->is_valid_announcement = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to announcement.
             */
            axis2_status_t AXIS2_CALL
            adb_announcements_type0_add_announcement(
                    adb_announcements_type0_t* _announcements_type0,
                    const axutil_env_t *env,
                    adb_announcement_type0_t* arg_announcement)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _announcements_type0, AXIS2_FAILURE);

                
                    if(NULL == arg_announcement)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_announcements_type0->property_announcement == NULL)
                {
                    _announcements_type0->property_announcement = axutil_array_list_create(env, 10);
                }
                if(_announcements_type0->property_announcement == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for announcement");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_announcements_type0->property_announcement , env, arg_announcement);
                  _announcements_type0->is_valid_announcement = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the announcement array.
             */
            int AXIS2_CALL
            adb_announcements_type0_sizeof_announcement(
                    adb_announcements_type0_t* _announcements_type0,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _announcements_type0, -1);
                if(_announcements_type0->property_announcement == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_announcements_type0->property_announcement, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_announcements_type0_remove_announcement_at(
                    adb_announcements_type0_t* _announcements_type0,
                    const axutil_env_t *env, int i)
            {
                return adb_announcements_type0_set_announcement_nil_at(_announcements_type0, env, i);
            }

            

           /**
            * resetter for announcement
            */
           axis2_status_t AXIS2_CALL
           adb_announcements_type0_reset_announcement(
                   adb_announcements_type0_t* _announcements_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _announcements_type0, AXIS2_FAILURE);
               

               
                  if (_announcements_type0->property_announcement != NULL)
                  {
                      count = axutil_array_list_size(_announcements_type0->property_announcement, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_announcements_type0->property_announcement, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   adb_announcement_type0_free((adb_announcement_type0_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_announcements_type0->property_announcement, env);
                  }
                _announcements_type0->is_valid_announcement = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether announcement is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_announcements_type0_is_announcement_nil(
                   adb_announcements_type0_t* _announcements_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _announcements_type0, AXIS2_TRUE);
               
               return !_announcements_type0->is_valid_announcement;
           }

           /**
            * Set announcement to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_announcements_type0_set_announcement_nil(
                   adb_announcements_type0_t* _announcements_type0,
                   const axutil_env_t *env)
           {
               return adb_announcements_type0_reset_announcement(_announcements_type0, env);
           }

           
           /**
            * Check whether announcement is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_announcements_type0_is_announcement_nil_at(
                   adb_announcements_type0_t* _announcements_type0,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _announcements_type0, AXIS2_TRUE);
               
               return (_announcements_type0->is_valid_announcement == AXIS2_FALSE ||
                        NULL == _announcements_type0->property_announcement || 
                        NULL == axutil_array_list_get(_announcements_type0->property_announcement, env, i));
           }

           /**
            * Set announcement to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_announcements_type0_set_announcement_nil_at(
                   adb_announcements_type0_t* _announcements_type0,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _announcements_type0, AXIS2_FAILURE);

                if(_announcements_type0->property_announcement == NULL ||
                            _announcements_type0->is_valid_announcement == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_announcements_type0->property_announcement, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_announcements_type0->property_announcement, env, i))
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
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of announcement is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_announcements_type0->property_announcement == NULL)
                {
                    _announcements_type0->is_valid_announcement = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_announcements_type0->property_announcement, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_announcement_type0_free((adb_announcement_type0_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _announcements_type0->is_valid_announcement = AXIS2_FALSE;
                        axutil_array_list_set(_announcements_type0->property_announcement , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_announcements_type0->property_announcement , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

