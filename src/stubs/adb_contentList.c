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
         * adb_contentList.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_contentList.h"
        
               /*
                * implmentation of the contentList|http://www.daisy.org/ns/daisy-online/ element
                */
           


        struct adb_contentList
        {
            axis2_char_t *property_TypeName;

            
                axutil_qname_t* qname;
            adb_label_type0_t* property_label;

                
                axis2_bool_t is_valid_label;
            axutil_array_list_t* property_contentItem;

                
                axis2_bool_t is_valid_contentItem;
            int property_totalItems;

                
                axis2_bool_t is_valid_totalItems;
            int property_firstItem;

                
                axis2_bool_t is_valid_firstItem;
            int property_lastItem;

                
                axis2_bool_t is_valid_lastItem;
            axis2_char_t* property_id;

                
                axis2_bool_t is_valid_id;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_contentList_set_label_nil(
                        adb_contentList_t* _contentList,
                        const axutil_env_t *env);
            
                 axis2_status_t AXIS2_CALL
                 adb_contentList_set_contentItem_nil_at(
                        adb_contentList_t* _contentList, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_contentList_set_contentItem_nil(
                        adb_contentList_t* _contentList,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_contentList_set_totalItems_nil(
                        adb_contentList_t* _contentList,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_contentList_set_id_nil(
                        adb_contentList_t* _contentList,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_contentList_t* AXIS2_CALL
        adb_contentList_create(
            const axutil_env_t *env)
        {
            adb_contentList_t *_contentList = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _contentList = (adb_contentList_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_contentList_t));

            if(NULL == _contentList)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_contentList, 0, sizeof(adb_contentList_t));

            _contentList->property_TypeName = axutil_strdup(env, "adb_contentList");
            _contentList->property_label  = NULL;
                  _contentList->is_valid_label  = AXIS2_FALSE;
            _contentList->property_contentItem  = NULL;
                  _contentList->is_valid_contentItem  = AXIS2_FALSE;
            _contentList->is_valid_totalItems  = AXIS2_FALSE;
            _contentList->is_valid_firstItem  = AXIS2_FALSE;
            _contentList->is_valid_lastItem  = AXIS2_FALSE;
            _contentList->property_id  = NULL;
                  _contentList->is_valid_id  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "contentList",
                        "http://www.daisy.org/ns/daisy-online/",
                        NULL);
                _contentList->qname = qname;
            

            return _contentList;
        }

        adb_contentList_t* AXIS2_CALL
        adb_contentList_create_with_values(
            const axutil_env_t *env,
                adb_label_type0_t* _label,
                axutil_array_list_t* _contentItem,
                int _totalItems,
                int _firstItem,
                int _lastItem,
                axis2_char_t* _id)
        {
            adb_contentList_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_contentList_create(env);

            
              status = adb_contentList_set_label(
                                     adb_obj,
                                     env,
                                     _label);
              if(status == AXIS2_FAILURE) {
                  adb_contentList_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_contentList_set_contentItem(
                                     adb_obj,
                                     env,
                                     _contentItem);
              if(status == AXIS2_FAILURE) {
                  adb_contentList_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_contentList_set_totalItems(
                                     adb_obj,
                                     env,
                                     _totalItems);
              if(status == AXIS2_FAILURE) {
                  adb_contentList_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_contentList_set_firstItem(
                                     adb_obj,
                                     env,
                                     _firstItem);
              if(status == AXIS2_FAILURE) {
                  adb_contentList_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_contentList_set_lastItem(
                                     adb_obj,
                                     env,
                                     _lastItem);
              if(status == AXIS2_FAILURE) {
                  adb_contentList_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_contentList_set_id(
                                     adb_obj,
                                     env,
                                     _id);
              if(status == AXIS2_FAILURE) {
                  adb_contentList_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        adb_label_type0_t* AXIS2_CALL
                adb_contentList_free_popping_value(
                        adb_contentList_t* _contentList,
                        const axutil_env_t *env)
                {
                    adb_label_type0_t* value;

                    
                    
                    value = _contentList->property_label;

                    _contentList->property_label = (adb_label_type0_t*)NULL;
                    adb_contentList_free(_contentList, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_contentList_free(
                adb_contentList_t* _contentList,
                const axutil_env_t *env)
        {
            
            
            return adb_contentList_free_obj(
                _contentList,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_contentList_free_obj(
                adb_contentList_t* _contentList,
                const axutil_env_t *env)
        {
            
                int i = 0;
                int count = 0;
                void *element = NULL;
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _contentList, AXIS2_FAILURE);

            if (_contentList->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _contentList->property_TypeName);
            }

            adb_contentList_reset_label(_contentList, env);
            adb_contentList_reset_contentItem(_contentList, env);
            adb_contentList_reset_totalItems(_contentList, env);
            adb_contentList_reset_firstItem(_contentList, env);
            adb_contentList_reset_lastItem(_contentList, env);
            adb_contentList_reset_id(_contentList, env);
            
              if(_contentList->qname)
              {
                  axutil_qname_free (_contentList->qname, env);
                  _contentList->qname = NULL;
              }
            

            if(_contentList)
            {
                AXIS2_FREE(env->allocator, _contentList);
                _contentList = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_contentList_deserialize(
                adb_contentList_t* _contentList,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_contentList_deserialize_obj(
                _contentList,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_contentList_deserialize_obj(
                adb_contentList_t* _contentList,
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
            AXIS2_PARAM_CHECK(env->error, _contentList, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for contentList : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              

                    current_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                    qname = axiom_element_get_qname(current_element, env, parent);
                    if (axutil_qname_equals(qname, env, _contentList-> qname))
                    {
                        
                          first_node = axiom_node_get_first_child(parent, env);
                          
                    }
                    else
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                              "Failed in building adb object for contentList : "
                              "Expected %s but returned %s",
                              axutil_qname_to_string(_contentList-> qname, env),
                              axutil_qname_to_string(qname, env));
                        
                        return AXIS2_FAILURE;
                    }
                    
                 parent_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                 attribute_hash = axiom_element_get_all_attributes(parent_element, env);
              

                     
                     /*
                      * building label element
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
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element label");
                                      }
                                      else
                                      {
                                          status = adb_contentList_set_label(_contentList, env,
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
                 
                    /*
                     * building contentItem array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building contentItem element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "contentItem", "http://www.daisy.org/ns/daisy-online/", NULL);
                                  
                               
                               for (i = 0, sequence_broken = 0, current_node = (is_early_node_valid?axiom_node_get_next_sibling(current_node, env):current_node); !sequence_broken && current_node != NULL;) 
                                             
                               {
                                  if(axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                  {
                                     current_node =axiom_node_get_next_sibling(current_node, env);
                                     is_early_node_valid = AXIS2_FALSE;
                                     continue;
                                  }
                                  
                                  current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                  qname = axiom_element_get_qname(current_element, env, current_node);

                                  if (adb_contentItem_type0_is_particle() ||  
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_contentItem_type0");
                                          
                                          status =  adb_contentItem_type0_deserialize((adb_contentItem_type0_t*)element, env,
                                                                                 &current_node, &is_early_node_valid, AXIS2_FALSE);
                                          
                                          if(AXIS2_FAILURE ==  status)
                                          {
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element contentItem ");
                                          }
                                          else
                                          {
                                            axutil_array_list_add_at(arr_list, env, i, element);
                                          }
                                        
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for contentItem ");
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
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "contentItem (@minOccurs = '0') only have %d elements", i);
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
                                    status = adb_contentList_set_contentItem(_contentList, env,
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "totalItems"))
                             
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
                    /* this is hoping that attribute is stored in "totalItems", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "totalItems");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_contentList_set_totalItems(_contentList,
                                                          env, atoi(attrib_text));
                        
                    }
                  
                    else if(!dont_care_minoccurs)
                    {
                        if(element_qname)
                        {
                            axutil_qname_free(element_qname, env);
                        }
                        /* this is not a nillable element*/
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "required attribute totalItems missing");
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "firstItem"))
                             
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
                    /* this is hoping that attribute is stored in "firstItem", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "firstItem");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_contentList_set_firstItem(_contentList,
                                                          env, atoi(attrib_text));
                        
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "lastItem"))
                             
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
                    /* this is hoping that attribute is stored in "lastItem", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "lastItem");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_contentList_set_lastItem(_contentList,
                                                          env, atoi(attrib_text));
                        
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "id"))
                             
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
                    /* this is hoping that attribute is stored in "id", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "id");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_contentList_set_id(_contentList,
                                                          env, attrib_text);
                        
                    }
                  
                    else if(!dont_care_minoccurs)
                    {
                        if(element_qname)
                        {
                            axutil_qname_free(element_qname, env);
                        }
                        /* this is not a nillable element*/
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "required attribute id missing");
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
          adb_contentList_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_contentList_declare_parent_namespaces(
                    adb_contentList_t* _contentList,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_contentList_serialize(
                adb_contentList_t* _contentList,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_contentList_serialize_obj(
                    _contentList, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_contentList_serialize_obj(
                adb_contentList_t* _contentList,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
               axiom_attribute_t *text_attri = NULL;
             
             axis2_char_t *string_to_stream;
            
         
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
                    
                    axis2_char_t text_value_2[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_3[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_4[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_5[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t *text_value_6;
                    axis2_char_t *text_value_6_temp;
                    
                axis2_char_t *text_value = NULL;
             
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

             
                int next_ns_index_value = 0;
            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _contentList, NULL);
            
             
                    namespaces = axutil_hash_make(env);
                    next_ns_index = &next_ns_index_value;
                     
                           ns1 = axiom_namespace_create (env,
                                             "http://www.daisy.org/ns/daisy-online/",
                                             "n"); 
                           axutil_hash_set(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING, axutil_strdup(env, "n"));
                       
                     
                    parent_element = axiom_element_create (env, NULL, "contentList", ns1 , &parent);
                    
                    
                    axiom_element_set_namespace(parent_element, env, ns1, parent);


            
                    data_source = axiom_data_source_create(env, parent, &current_node);
                    stream = axiom_data_source_get_stream(data_source, env);
                  
            if(!parent_tag_closed)
            {
            
                if(_contentList->is_valid_totalItems)
                {
                
                        p_prefix = NULL;
                      
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                            (ADB_DEFAULT_DIGIT_LIMIT + 5 + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT + 
                                                                axutil_strlen("totalItems")));
                                                            
                           sprintf(text_value, " %s%s%s=\"%d\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "totalItems", _contentList->property_totalItems);
                           axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
                   else
                   {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute totalItems");
                      return NULL;
                   }
                   
                if(_contentList->is_valid_firstItem)
                {
                
                        p_prefix = NULL;
                      
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                            (ADB_DEFAULT_DIGIT_LIMIT + 5 + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT + 
                                                                axutil_strlen("firstItem")));
                                                            
                           sprintf(text_value, " %s%s%s=\"%d\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "firstItem", _contentList->property_firstItem);
                           axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
                if(_contentList->is_valid_lastItem)
                {
                
                        p_prefix = NULL;
                      
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                            (ADB_DEFAULT_DIGIT_LIMIT + 5 + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT + 
                                                                axutil_strlen("lastItem")));
                                                            
                           sprintf(text_value, " %s%s%s=\"%d\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "lastItem", _contentList->property_lastItem);
                           axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
                if(_contentList->is_valid_id)
                {
                
                        p_prefix = NULL;
                      
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(_contentList->property_id) + 
                                                                axutil_strlen("id")));
                           sprintf(text_value, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "id", _contentList->property_id);
                           axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
                   else
                   {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute id");
                      return NULL;
                   }
                   
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
                      

                   if (!_contentList->is_valid_label)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
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
                            adb_label_type0_serialize(_contentList->property_label, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_label_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_label_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
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
                      

                   if (!_contentList->is_valid_contentItem)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("contentItem"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("contentItem")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing contentItem array
                      */
                     if (_contentList->property_contentItem != NULL)
                     {
                        

                            sprintf(start_input_str, "<%s%scontentItem",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%scontentItem>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_contentList->property_contentItem, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_contentList->property_contentItem, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing contentItem element
                      */

                    
                     
                            if(!adb_contentItem_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_contentItem_type0_serialize((adb_contentItem_type0_t*)element, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_contentItem_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_contentItem_type0_is_particle())
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
                       if(_contentList->is_valid_totalItems)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * ADB_DEFAULT_DIGIT_LIMIT);
                           sprintf (text_value, "%d", _contentList->property_totalItems);
                           text_attri = axiom_attribute_create (env, "totalItems", text_value, ns1);
                           
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                           AXIS2_FREE(env-> allocator, text_value);
                        
                      }
                      
                      else
                      {
                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute totalItems");
                         return NULL;
                      }
                       
                  }
                
                    
                    if(parent_tag_closed)
                    {
                       if(_contentList->is_valid_firstItem)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * ADB_DEFAULT_DIGIT_LIMIT);
                           sprintf (text_value, "%d", _contentList->property_firstItem);
                           text_attri = axiom_attribute_create (env, "firstItem", text_value, ns1);
                           
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                           AXIS2_FREE(env-> allocator, text_value);
                        
                      }
                       
                  }
                
                    
                    if(parent_tag_closed)
                    {
                       if(_contentList->is_valid_lastItem)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * ADB_DEFAULT_DIGIT_LIMIT);
                           sprintf (text_value, "%d", _contentList->property_lastItem);
                           text_attri = axiom_attribute_create (env, "lastItem", text_value, ns1);
                           
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                           AXIS2_FREE(env-> allocator, text_value);
                        
                      }
                       
                  }
                
                    
                    if(parent_tag_closed)
                    {
                       if(_contentList->is_valid_id)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = _contentList->property_id;
                           text_attri = axiom_attribute_create (env, "id", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                      
                      else
                      {
                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute id");
                         return NULL;
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
             * Getter for label by  Property Number 1
             */
            adb_label_type0_t* AXIS2_CALL
            adb_contentList_get_property1(
                adb_contentList_t* _contentList,
                const axutil_env_t *env)
            {
                return adb_contentList_get_label(_contentList,
                                             env);
            }

            /**
             * getter for label.
             */
            adb_label_type0_t* AXIS2_CALL
            adb_contentList_get_label(
                    adb_contentList_t* _contentList,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _contentList, NULL);
                  

                return _contentList->property_label;
             }

            /**
             * setter for label
             */
            axis2_status_t AXIS2_CALL
            adb_contentList_set_label(
                    adb_contentList_t* _contentList,
                    const axutil_env_t *env,
                    adb_label_type0_t*  arg_label)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _contentList, AXIS2_FAILURE);
                
                if(_contentList->is_valid_label &&
                        arg_label == _contentList->property_label)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_contentList_reset_label(_contentList, env);

                
                if(NULL == arg_label)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _contentList->property_label = arg_label;
                        _contentList->is_valid_label = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for label
            */
           axis2_status_t AXIS2_CALL
           adb_contentList_reset_label(
                   adb_contentList_t* _contentList,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _contentList, AXIS2_FAILURE);
               

               
            
                
                if(_contentList->property_label != NULL)
                {
                   
                   adb_label_type0_free(_contentList->property_label, env);
                     _contentList->property_label = NULL;
                }
            
                
                
                _contentList->is_valid_label = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether label is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_contentList_is_label_nil(
                   adb_contentList_t* _contentList,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _contentList, AXIS2_TRUE);
               
               return !_contentList->is_valid_label;
           }

           /**
            * Set label to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_contentList_set_label_nil(
                   adb_contentList_t* _contentList,
                   const axutil_env_t *env)
           {
               return adb_contentList_reset_label(_contentList, env);
           }

           

            /**
             * Getter for contentItem by  Property Number 2
             */
            axutil_array_list_t* AXIS2_CALL
            adb_contentList_get_property2(
                adb_contentList_t* _contentList,
                const axutil_env_t *env)
            {
                return adb_contentList_get_contentItem(_contentList,
                                             env);
            }

            /**
             * getter for contentItem.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_contentList_get_contentItem(
                    adb_contentList_t* _contentList,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _contentList, NULL);
                  

                return _contentList->property_contentItem;
             }

            /**
             * setter for contentItem
             */
            axis2_status_t AXIS2_CALL
            adb_contentList_set_contentItem(
                    adb_contentList_t* _contentList,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_contentItem)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _contentList, AXIS2_FAILURE);
                
                if(_contentList->is_valid_contentItem &&
                        arg_contentItem == _contentList->property_contentItem)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_contentItem, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "contentItem has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_contentItem, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_contentList_reset_contentItem(_contentList, env);

                
                if(NULL == arg_contentItem)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _contentList->property_contentItem = arg_contentItem;
                        if(non_nil_exists)
                        {
                            _contentList->is_valid_contentItem = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of contentItem.
             */
            adb_contentItem_type0_t* AXIS2_CALL
            adb_contentList_get_contentItem_at(
                    adb_contentList_t* _contentList,
                    const axutil_env_t *env, int i)
            {
                adb_contentItem_type0_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _contentList, NULL);
                  

                if(_contentList->property_contentItem == NULL)
                {
                    return (adb_contentItem_type0_t*)0;
                }
                ret_val = (adb_contentItem_type0_t*)axutil_array_list_get(_contentList->property_contentItem, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of contentItem.
             */
            axis2_status_t AXIS2_CALL
            adb_contentList_set_contentItem_at(
                    adb_contentList_t* _contentList,
                    const axutil_env_t *env, int i,
                    adb_contentItem_type0_t* arg_contentItem)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _contentList, AXIS2_FAILURE);
                
                if( _contentList->is_valid_contentItem &&
                    _contentList->property_contentItem &&
                
                    arg_contentItem == (adb_contentItem_type0_t*)axutil_array_list_get(_contentList->property_contentItem, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_contentItem)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_contentList->property_contentItem != NULL)
                        {
                            size = axutil_array_list_size(_contentList->property_contentItem, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_contentList->property_contentItem, env, i))
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
                  

                if(_contentList->property_contentItem == NULL)
                {
                    _contentList->property_contentItem = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_contentList->property_contentItem, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_contentItem_type0_free((adb_contentItem_type0_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _contentList->is_valid_contentItem = AXIS2_FALSE;
                        axutil_array_list_set(_contentList->property_contentItem , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_contentList->property_contentItem , env, i, arg_contentItem);
                  _contentList->is_valid_contentItem = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to contentItem.
             */
            axis2_status_t AXIS2_CALL
            adb_contentList_add_contentItem(
                    adb_contentList_t* _contentList,
                    const axutil_env_t *env,
                    adb_contentItem_type0_t* arg_contentItem)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _contentList, AXIS2_FAILURE);

                
                    if(NULL == arg_contentItem)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_contentList->property_contentItem == NULL)
                {
                    _contentList->property_contentItem = axutil_array_list_create(env, 10);
                }
                if(_contentList->property_contentItem == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for contentItem");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_contentList->property_contentItem , env, arg_contentItem);
                  _contentList->is_valid_contentItem = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the contentItem array.
             */
            int AXIS2_CALL
            adb_contentList_sizeof_contentItem(
                    adb_contentList_t* _contentList,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _contentList, -1);
                if(_contentList->property_contentItem == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_contentList->property_contentItem, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_contentList_remove_contentItem_at(
                    adb_contentList_t* _contentList,
                    const axutil_env_t *env, int i)
            {
                return adb_contentList_set_contentItem_nil_at(_contentList, env, i);
            }

            

           /**
            * resetter for contentItem
            */
           axis2_status_t AXIS2_CALL
           adb_contentList_reset_contentItem(
                   adb_contentList_t* _contentList,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _contentList, AXIS2_FAILURE);
               

               
                  if (_contentList->property_contentItem != NULL)
                  {
                      count = axutil_array_list_size(_contentList->property_contentItem, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_contentList->property_contentItem, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   adb_contentItem_type0_free((adb_contentItem_type0_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_contentList->property_contentItem, env);
                  }
                _contentList->is_valid_contentItem = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether contentItem is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_contentList_is_contentItem_nil(
                   adb_contentList_t* _contentList,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _contentList, AXIS2_TRUE);
               
               return !_contentList->is_valid_contentItem;
           }

           /**
            * Set contentItem to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_contentList_set_contentItem_nil(
                   adb_contentList_t* _contentList,
                   const axutil_env_t *env)
           {
               return adb_contentList_reset_contentItem(_contentList, env);
           }

           
           /**
            * Check whether contentItem is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_contentList_is_contentItem_nil_at(
                   adb_contentList_t* _contentList,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _contentList, AXIS2_TRUE);
               
               return (_contentList->is_valid_contentItem == AXIS2_FALSE ||
                        NULL == _contentList->property_contentItem || 
                        NULL == axutil_array_list_get(_contentList->property_contentItem, env, i));
           }

           /**
            * Set contentItem to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_contentList_set_contentItem_nil_at(
                   adb_contentList_t* _contentList,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _contentList, AXIS2_FAILURE);

                if(_contentList->property_contentItem == NULL ||
                            _contentList->is_valid_contentItem == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_contentList->property_contentItem, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_contentList->property_contentItem, env, i))
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
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of contentItem is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_contentList->property_contentItem == NULL)
                {
                    _contentList->is_valid_contentItem = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_contentList->property_contentItem, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_contentItem_type0_free((adb_contentItem_type0_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _contentList->is_valid_contentItem = AXIS2_FALSE;
                        axutil_array_list_set(_contentList->property_contentItem , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_contentList->property_contentItem , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for totalItems by  Property Number 3
             */
            int AXIS2_CALL
            adb_contentList_get_property3(
                adb_contentList_t* _contentList,
                const axutil_env_t *env)
            {
                return adb_contentList_get_totalItems(_contentList,
                                             env);
            }

            /**
             * getter for totalItems.
             */
            int AXIS2_CALL
            adb_contentList_get_totalItems(
                    adb_contentList_t* _contentList,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (int)0);
                    AXIS2_PARAM_CHECK(env->error, _contentList, (int)0);
                  

                return _contentList->property_totalItems;
             }

            /**
             * setter for totalItems
             */
            axis2_status_t AXIS2_CALL
            adb_contentList_set_totalItems(
                    adb_contentList_t* _contentList,
                    const axutil_env_t *env,
                    const int  arg_totalItems)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _contentList, AXIS2_FAILURE);
                
                if(_contentList->is_valid_totalItems &&
                        arg_totalItems == _contentList->property_totalItems)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_contentList_reset_totalItems(_contentList, env);

                _contentList->property_totalItems = arg_totalItems;
                        _contentList->is_valid_totalItems = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for totalItems
            */
           axis2_status_t AXIS2_CALL
           adb_contentList_reset_totalItems(
                   adb_contentList_t* _contentList,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _contentList, AXIS2_FAILURE);
               

               _contentList->is_valid_totalItems = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether totalItems is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_contentList_is_totalItems_nil(
                   adb_contentList_t* _contentList,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _contentList, AXIS2_TRUE);
               
               return !_contentList->is_valid_totalItems;
           }

           /**
            * Set totalItems to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_contentList_set_totalItems_nil(
                   adb_contentList_t* _contentList,
                   const axutil_env_t *env)
           {
               return adb_contentList_reset_totalItems(_contentList, env);
           }

           

            /**
             * Getter for firstItem by  Property Number 4
             */
            int AXIS2_CALL
            adb_contentList_get_property4(
                adb_contentList_t* _contentList,
                const axutil_env_t *env)
            {
                return adb_contentList_get_firstItem(_contentList,
                                             env);
            }

            /**
             * getter for firstItem.
             */
            int AXIS2_CALL
            adb_contentList_get_firstItem(
                    adb_contentList_t* _contentList,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (int)0);
                    AXIS2_PARAM_CHECK(env->error, _contentList, (int)0);
                  

                return _contentList->property_firstItem;
             }

            /**
             * setter for firstItem
             */
            axis2_status_t AXIS2_CALL
            adb_contentList_set_firstItem(
                    adb_contentList_t* _contentList,
                    const axutil_env_t *env,
                    const int  arg_firstItem)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _contentList, AXIS2_FAILURE);
                
                if(_contentList->is_valid_firstItem &&
                        arg_firstItem == _contentList->property_firstItem)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_contentList_reset_firstItem(_contentList, env);

                _contentList->property_firstItem = arg_firstItem;
                        _contentList->is_valid_firstItem = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for firstItem
            */
           axis2_status_t AXIS2_CALL
           adb_contentList_reset_firstItem(
                   adb_contentList_t* _contentList,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _contentList, AXIS2_FAILURE);
               

               _contentList->is_valid_firstItem = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether firstItem is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_contentList_is_firstItem_nil(
                   adb_contentList_t* _contentList,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _contentList, AXIS2_TRUE);
               
               return !_contentList->is_valid_firstItem;
           }

           /**
            * Set firstItem to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_contentList_set_firstItem_nil(
                   adb_contentList_t* _contentList,
                   const axutil_env_t *env)
           {
               return adb_contentList_reset_firstItem(_contentList, env);
           }

           

            /**
             * Getter for lastItem by  Property Number 5
             */
            int AXIS2_CALL
            adb_contentList_get_property5(
                adb_contentList_t* _contentList,
                const axutil_env_t *env)
            {
                return adb_contentList_get_lastItem(_contentList,
                                             env);
            }

            /**
             * getter for lastItem.
             */
            int AXIS2_CALL
            adb_contentList_get_lastItem(
                    adb_contentList_t* _contentList,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (int)0);
                    AXIS2_PARAM_CHECK(env->error, _contentList, (int)0);
                  

                return _contentList->property_lastItem;
             }

            /**
             * setter for lastItem
             */
            axis2_status_t AXIS2_CALL
            adb_contentList_set_lastItem(
                    adb_contentList_t* _contentList,
                    const axutil_env_t *env,
                    const int  arg_lastItem)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _contentList, AXIS2_FAILURE);
                
                if(_contentList->is_valid_lastItem &&
                        arg_lastItem == _contentList->property_lastItem)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_contentList_reset_lastItem(_contentList, env);

                _contentList->property_lastItem = arg_lastItem;
                        _contentList->is_valid_lastItem = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for lastItem
            */
           axis2_status_t AXIS2_CALL
           adb_contentList_reset_lastItem(
                   adb_contentList_t* _contentList,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _contentList, AXIS2_FAILURE);
               

               _contentList->is_valid_lastItem = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether lastItem is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_contentList_is_lastItem_nil(
                   adb_contentList_t* _contentList,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _contentList, AXIS2_TRUE);
               
               return !_contentList->is_valid_lastItem;
           }

           /**
            * Set lastItem to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_contentList_set_lastItem_nil(
                   adb_contentList_t* _contentList,
                   const axutil_env_t *env)
           {
               return adb_contentList_reset_lastItem(_contentList, env);
           }

           

            /**
             * Getter for id by  Property Number 6
             */
            axis2_char_t* AXIS2_CALL
            adb_contentList_get_property6(
                adb_contentList_t* _contentList,
                const axutil_env_t *env)
            {
                return adb_contentList_get_id(_contentList,
                                             env);
            }

            /**
             * getter for id.
             */
            axis2_char_t* AXIS2_CALL
            adb_contentList_get_id(
                    adb_contentList_t* _contentList,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _contentList, NULL);
                  

                return _contentList->property_id;
             }

            /**
             * setter for id
             */
            axis2_status_t AXIS2_CALL
            adb_contentList_set_id(
                    adb_contentList_t* _contentList,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_id)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _contentList, AXIS2_FAILURE);
                
                if(_contentList->is_valid_id &&
                        arg_id == _contentList->property_id)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_id)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "id is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_contentList_reset_id(_contentList, env);

                
                if(NULL == arg_id)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _contentList->property_id = (axis2_char_t *)axutil_strdup(env, arg_id);
                        if(NULL == _contentList->property_id)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for id");
                            return AXIS2_FAILURE;
                        }
                        _contentList->is_valid_id = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for id
            */
           axis2_status_t AXIS2_CALL
           adb_contentList_reset_id(
                   adb_contentList_t* _contentList,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _contentList, AXIS2_FAILURE);
               

               
            
                
                if(_contentList->property_id != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _contentList->property_id);
                     _contentList->property_id = NULL;
                }
            
                
                
                _contentList->is_valid_id = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether id is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_contentList_is_id_nil(
                   adb_contentList_t* _contentList,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _contentList, AXIS2_TRUE);
               
               return !_contentList->is_valid_id;
           }

           /**
            * Set id to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_contentList_set_id_nil(
                   adb_contentList_t* _contentList,
                   const axutil_env_t *env)
           {
               return adb_contentList_reset_id(_contentList, env);
           }

           

