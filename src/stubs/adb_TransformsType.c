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
         * adb_TransformsType.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_TransformsType.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = TransformsType
                 * Namespace URI = http://www.w3.org/2000/09/xmldsig#
                 * Namespace Prefix = ns5
                 */
           


        struct adb_TransformsType
        {
            axis2_char_t *property_TypeName;

            axutil_array_list_t* property_Transform;

                
                axis2_bool_t is_valid_Transform;
            
        };


       /************************* Private Function prototypes ********************************/
        
                 axis2_status_t AXIS2_CALL
                 adb_TransformsType_set_Transform_nil_at(
                        adb_TransformsType_t* _TransformsType, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_TransformsType_set_Transform_nil(
                        adb_TransformsType_t* _TransformsType,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_TransformsType_t* AXIS2_CALL
        adb_TransformsType_create(
            const axutil_env_t *env)
        {
            adb_TransformsType_t *_TransformsType = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _TransformsType = (adb_TransformsType_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_TransformsType_t));

            if(NULL == _TransformsType)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_TransformsType, 0, sizeof(adb_TransformsType_t));

            _TransformsType->property_TypeName = axutil_strdup(env, "adb_TransformsType");
            _TransformsType->property_Transform  = NULL;
                  _TransformsType->is_valid_Transform  = AXIS2_FALSE;
            

            return _TransformsType;
        }

        adb_TransformsType_t* AXIS2_CALL
        adb_TransformsType_create_with_values(
            const axutil_env_t *env,
                axutil_array_list_t* _Transform)
        {
            adb_TransformsType_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_TransformsType_create(env);

            
              status = adb_TransformsType_set_Transform(
                                     adb_obj,
                                     env,
                                     _Transform);
              if(status == AXIS2_FAILURE) {
                  adb_TransformsType_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axutil_array_list_t* AXIS2_CALL
                adb_TransformsType_free_popping_value(
                        adb_TransformsType_t* _TransformsType,
                        const axutil_env_t *env)
                {
                    axutil_array_list_t* value;

                    
                    
                    value = _TransformsType->property_Transform;

                    _TransformsType->property_Transform = (axutil_array_list_t*)NULL;
                    adb_TransformsType_free(_TransformsType, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_TransformsType_free(
                adb_TransformsType_t* _TransformsType,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _TransformsType,
                env,
                "adb_TransformsType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_TransformsType_free_obj(
                adb_TransformsType_t* _TransformsType,
                const axutil_env_t *env)
        {
            
                int i = 0;
                int count = 0;
                void *element = NULL;
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _TransformsType, AXIS2_FAILURE);

            if (_TransformsType->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _TransformsType->property_TypeName);
            }

            adb_TransformsType_reset_Transform(_TransformsType, env);
            

            if(_TransformsType)
            {
                AXIS2_FREE(env->allocator, _TransformsType);
                _TransformsType = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_TransformsType_deserialize(
                adb_TransformsType_t* _TransformsType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _TransformsType,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_TransformsType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_TransformsType_deserialize_obj(
                adb_TransformsType_t* _TransformsType,
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
            AXIS2_PARAM_CHECK(env->error, _TransformsType, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for TransformsType : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    
                    /*
                     * building Transform array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building Transform element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "Transform", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                  
                               
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

                                  if (adb_TransformType_is_particle() ||  
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_TransformType");
                                          
                                          status =  adb_TransformType_deserialize((adb_TransformType_t*)element, env,
                                                                                 &current_node, &is_early_node_valid, AXIS2_FALSE);
                                          
                                          if(AXIS2_FAILURE ==  status)
                                          {
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element Transform ");
                                          }
                                          else
                                          {
                                            axutil_array_list_add_at(arr_list, env, i, element);
                                          }
                                        
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for Transform ");
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
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Transform (@minOccurs = '1') only have %d elements", i);
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
                                    status = adb_TransformsType_set_Transform(_TransformsType, env,
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
          adb_TransformsType_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_TransformsType_declare_parent_namespaces(
                    adb_TransformsType_t* _TransformsType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_TransformsType_serialize(
                adb_TransformsType_t* _TransformsType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_TransformsType == NULL)
            {
                return adb_TransformsType_serialize_obj(
                    _TransformsType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _TransformsType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_TransformsType");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_TransformsType_serialize_obj(
                adb_TransformsType_t* _TransformsType,
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
            AXIS2_PARAM_CHECK(env->error, _TransformsType, NULL);
            
            
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
        
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.w3.org/2000/09/xmldsig#",
                                            p_prefix));
                       }
                      

                   if (!_TransformsType->is_valid_Transform)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property Transform");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("Transform"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("Transform")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing Transform array
                      */
                     if (_TransformsType->property_Transform != NULL)
                     {
                        

                            sprintf(start_input_str, "<%s%sTransform",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%sTransform>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_TransformsType->property_Transform, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_TransformsType->property_Transform, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing Transform element
                      */

                    
                     
                            if(!adb_TransformType_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_TransformType_serialize((adb_TransformType_t*)element, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_TransformType_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_TransformType_is_particle())
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
             * Getter for Transform by  Property Number 1
             */
            axutil_array_list_t* AXIS2_CALL
            adb_TransformsType_get_property1(
                adb_TransformsType_t* _TransformsType,
                const axutil_env_t *env)
            {
                return adb_TransformsType_get_Transform(_TransformsType,
                                             env);
            }

            /**
             * getter for Transform.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_TransformsType_get_Transform(
                    adb_TransformsType_t* _TransformsType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _TransformsType, NULL);
                  

                return _TransformsType->property_Transform;
             }

            /**
             * setter for Transform
             */
            axis2_status_t AXIS2_CALL
            adb_TransformsType_set_Transform(
                    adb_TransformsType_t* _TransformsType,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_Transform)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _TransformsType, AXIS2_FAILURE);
                
                if(_TransformsType->is_valid_Transform &&
                        arg_Transform == _TransformsType->property_Transform)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_Transform, env);
                 
                 if (size < 1)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Transform has less than minOccurs(1)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_Transform, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 
                    if(!non_nil_exists)
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of Transform is being set to NULL, but it is not a nullable or minOccurs=0 element");
                        return AXIS2_FAILURE;
                    }
                 
                  if(NULL == arg_Transform)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Transform is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_TransformsType_reset_Transform(_TransformsType, env);

                
                if(NULL == arg_Transform)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _TransformsType->property_Transform = arg_Transform;
                        if(non_nil_exists)
                        {
                            _TransformsType->is_valid_Transform = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of Transform.
             */
            adb_TransformType_t* AXIS2_CALL
            adb_TransformsType_get_Transform_at(
                    adb_TransformsType_t* _TransformsType,
                    const axutil_env_t *env, int i)
            {
                adb_TransformType_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _TransformsType, NULL);
                  

                if(_TransformsType->property_Transform == NULL)
                {
                    return (adb_TransformType_t*)0;
                }
                ret_val = (adb_TransformType_t*)axutil_array_list_get(_TransformsType->property_Transform, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of Transform.
             */
            axis2_status_t AXIS2_CALL
            adb_TransformsType_set_Transform_at(
                    adb_TransformsType_t* _TransformsType,
                    const axutil_env_t *env, int i,
                    adb_TransformType_t* arg_Transform)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _TransformsType, AXIS2_FAILURE);
                
                if( _TransformsType->is_valid_Transform &&
                    _TransformsType->property_Transform &&
                
                    arg_Transform == (adb_TransformType_t*)axutil_array_list_get(_TransformsType->property_Transform, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_Transform)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_TransformsType->property_Transform != NULL)
                        {
                            size = axutil_array_list_size(_TransformsType->property_Transform, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_TransformsType->property_Transform, env, i))
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
                                   AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of Transform is beinng set to be smaller than the specificed number of minOccurs(1)");
                                   return AXIS2_FAILURE;
                            }
                        
                        }
                    }
                  
                   if(!non_nil_exists)
                   {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of Transform is being set to NULL, but it is not a nullable or minOccurs=0 element");
                       return AXIS2_FAILURE;
                   }
                

                if(_TransformsType->property_Transform == NULL)
                {
                    _TransformsType->property_Transform = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_TransformsType->property_Transform, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_TransformType_free((adb_TransformType_t*)element, env);
                     
                }

                
                   axutil_array_list_set(_TransformsType->property_Transform , env, i, arg_Transform);
                  _TransformsType->is_valid_Transform = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to Transform.
             */
            axis2_status_t AXIS2_CALL
            adb_TransformsType_add_Transform(
                    adb_TransformsType_t* _TransformsType,
                    const axutil_env_t *env,
                    adb_TransformType_t* arg_Transform)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _TransformsType, AXIS2_FAILURE);

                
                    if(NULL == arg_Transform)
                    {
                      
                           AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of Transform is being set to NULL, but it is not a nullable or minOccurs=0 element");
                           return AXIS2_FAILURE;
                        
                    }
                  

                if(_TransformsType->property_Transform == NULL)
                {
                    _TransformsType->property_Transform = axutil_array_list_create(env, 10);
                }
                if(_TransformsType->property_Transform == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for Transform");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_TransformsType->property_Transform , env, arg_Transform);
                  _TransformsType->is_valid_Transform = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the Transform array.
             */
            int AXIS2_CALL
            adb_TransformsType_sizeof_Transform(
                    adb_TransformsType_t* _TransformsType,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _TransformsType, -1);
                if(_TransformsType->property_Transform == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_TransformsType->property_Transform, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_TransformsType_remove_Transform_at(
                    adb_TransformsType_t* _TransformsType,
                    const axutil_env_t *env, int i)
            {
                return adb_TransformsType_set_Transform_nil_at(_TransformsType, env, i);
            }

            

           /**
            * resetter for Transform
            */
           axis2_status_t AXIS2_CALL
           adb_TransformsType_reset_Transform(
                   adb_TransformsType_t* _TransformsType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _TransformsType, AXIS2_FAILURE);
               

               
                  if (_TransformsType->property_Transform != NULL)
                  {
                      count = axutil_array_list_size(_TransformsType->property_Transform, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_TransformsType->property_Transform, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   adb_TransformType_free((adb_TransformType_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_TransformsType->property_Transform, env);
                  }
                _TransformsType->is_valid_Transform = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether Transform is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_TransformsType_is_Transform_nil(
                   adb_TransformsType_t* _TransformsType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _TransformsType, AXIS2_TRUE);
               
               return !_TransformsType->is_valid_Transform;
           }

           /**
            * Set Transform to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_TransformsType_set_Transform_nil(
                   adb_TransformsType_t* _TransformsType,
                   const axutil_env_t *env)
           {
               return adb_TransformsType_reset_Transform(_TransformsType, env);
           }

           
           /**
            * Check whether Transform is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_TransformsType_is_Transform_nil_at(
                   adb_TransformsType_t* _TransformsType,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _TransformsType, AXIS2_TRUE);
               
               return (_TransformsType->is_valid_Transform == AXIS2_FALSE ||
                        NULL == _TransformsType->property_Transform || 
                        NULL == axutil_array_list_get(_TransformsType->property_Transform, env, i));
           }

           /**
            * Set Transform to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_TransformsType_set_Transform_nil_at(
                   adb_TransformsType_t* _TransformsType,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _TransformsType, AXIS2_FAILURE);

                if(_TransformsType->property_Transform == NULL ||
                            _TransformsType->is_valid_Transform == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_TransformsType->property_Transform, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_TransformsType->property_Transform, env, i))
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
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "All the elements in the array of Transform is being set to NULL, but it is not a nullable or minOccurs=0 element");
                       return AXIS2_FAILURE;
                   }
                

                if( k < 1)
                {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of Transform is beinng set to be smaller than the specificed number of minOccurs(1)");
                       return AXIS2_FAILURE;
                }
 
                if(_TransformsType->property_Transform == NULL)
                {
                    _TransformsType->is_valid_Transform = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_TransformsType->property_Transform, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_TransformType_free((adb_TransformType_t*)element, env);
                     
                }

                

                
                axutil_array_list_set(_TransformsType->property_Transform , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

