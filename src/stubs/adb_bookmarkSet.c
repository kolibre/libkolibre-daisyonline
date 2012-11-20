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
         * adb_bookmarkSet.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_bookmarkSet.h"
        
               /*
                * implmentation of the bookmarkSet|http://www.daisy.org/z3986/2005/bookmark/ element
                */
           


        struct adb_bookmarkSet
        {
            axis2_char_t *property_TypeName;

            
                axutil_qname_t* qname;
            adb_title_type0_t* property_title;

                
                axis2_bool_t is_valid_title;
            axis2_char_t* property_uid;

                
                axis2_bool_t is_valid_uid;
            adb_lastmark_type0_t* property_lastmark;

                
                axis2_bool_t is_valid_lastmark;
            axutil_array_list_t* property_bookmarkSetChoice_type0;

                
                axis2_bool_t is_valid_bookmarkSetChoice_type0;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_bookmarkSet_set_title_nil(
                        adb_bookmarkSet_t* _bookmarkSet,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_bookmarkSet_set_uid_nil(
                        adb_bookmarkSet_t* _bookmarkSet,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_bookmarkSet_set_lastmark_nil(
                        adb_bookmarkSet_t* _bookmarkSet,
                        const axutil_env_t *env);
            
                 axis2_status_t AXIS2_CALL
                 adb_bookmarkSet_set_bookmarkSetChoice_type0_nil_at(
                        adb_bookmarkSet_t* _bookmarkSet, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_bookmarkSet_set_bookmarkSetChoice_type0_nil(
                        adb_bookmarkSet_t* _bookmarkSet,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_bookmarkSet_t* AXIS2_CALL
        adb_bookmarkSet_create(
            const axutil_env_t *env)
        {
            adb_bookmarkSet_t *_bookmarkSet = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _bookmarkSet = (adb_bookmarkSet_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_bookmarkSet_t));

            if(NULL == _bookmarkSet)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_bookmarkSet, 0, sizeof(adb_bookmarkSet_t));

            _bookmarkSet->property_TypeName = axutil_strdup(env, "adb_bookmarkSet");
            _bookmarkSet->property_title  = NULL;
                  _bookmarkSet->is_valid_title  = AXIS2_FALSE;
            _bookmarkSet->property_uid  = NULL;
                  _bookmarkSet->is_valid_uid  = AXIS2_FALSE;
            _bookmarkSet->property_lastmark  = NULL;
                  _bookmarkSet->is_valid_lastmark  = AXIS2_FALSE;
            _bookmarkSet->property_bookmarkSetChoice_type0  = NULL;
                  _bookmarkSet->is_valid_bookmarkSetChoice_type0  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "bookmarkSet",
                        "http://www.daisy.org/z3986/2005/bookmark/",
                        NULL);
                _bookmarkSet->qname = qname;
            

            return _bookmarkSet;
        }

        adb_bookmarkSet_t* AXIS2_CALL
        adb_bookmarkSet_create_with_values(
            const axutil_env_t *env,
                adb_title_type0_t* _title,
                axis2_char_t* _uid,
                adb_lastmark_type0_t* _lastmark,
                axutil_array_list_t* _bookmarkSetChoice_type0)
        {
            adb_bookmarkSet_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_bookmarkSet_create(env);

            
              status = adb_bookmarkSet_set_title(
                                     adb_obj,
                                     env,
                                     _title);
              if(status == AXIS2_FAILURE) {
                  adb_bookmarkSet_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_bookmarkSet_set_uid(
                                     adb_obj,
                                     env,
                                     _uid);
              if(status == AXIS2_FAILURE) {
                  adb_bookmarkSet_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_bookmarkSet_set_lastmark(
                                     adb_obj,
                                     env,
                                     _lastmark);
              if(status == AXIS2_FAILURE) {
                  adb_bookmarkSet_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_bookmarkSet_set_bookmarkSetChoice_type0(
                                     adb_obj,
                                     env,
                                     _bookmarkSetChoice_type0);
              if(status == AXIS2_FAILURE) {
                  adb_bookmarkSet_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        adb_title_type0_t* AXIS2_CALL
                adb_bookmarkSet_free_popping_value(
                        adb_bookmarkSet_t* _bookmarkSet,
                        const axutil_env_t *env)
                {
                    adb_title_type0_t* value;

                    
                    
                    value = _bookmarkSet->property_title;

                    _bookmarkSet->property_title = (adb_title_type0_t*)NULL;
                    adb_bookmarkSet_free(_bookmarkSet, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_bookmarkSet_free(
                adb_bookmarkSet_t* _bookmarkSet,
                const axutil_env_t *env)
        {
            
            
            return adb_bookmarkSet_free_obj(
                _bookmarkSet,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_bookmarkSet_free_obj(
                adb_bookmarkSet_t* _bookmarkSet,
                const axutil_env_t *env)
        {
            
                int i = 0;
                int count = 0;
                void *element = NULL;
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _bookmarkSet, AXIS2_FAILURE);

            if (_bookmarkSet->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _bookmarkSet->property_TypeName);
            }

            adb_bookmarkSet_reset_title(_bookmarkSet, env);
            adb_bookmarkSet_reset_uid(_bookmarkSet, env);
            adb_bookmarkSet_reset_lastmark(_bookmarkSet, env);
            adb_bookmarkSet_reset_bookmarkSetChoice_type0(_bookmarkSet, env);
            
              if(_bookmarkSet->qname)
              {
                  axutil_qname_free (_bookmarkSet->qname, env);
                  _bookmarkSet->qname = NULL;
              }
            

            if(_bookmarkSet)
            {
                AXIS2_FREE(env->allocator, _bookmarkSet);
                _bookmarkSet = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_bookmarkSet_deserialize(
                adb_bookmarkSet_t* _bookmarkSet,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_bookmarkSet_deserialize_obj(
                _bookmarkSet,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_bookmarkSet_deserialize_obj(
                adb_bookmarkSet_t* _bookmarkSet,
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
            AXIS2_PARAM_CHECK(env->error, _bookmarkSet, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for bookmarkSet : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              

                    current_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                    qname = axiom_element_get_qname(current_element, env, parent);
                    if (axutil_qname_equals(qname, env, _bookmarkSet-> qname))
                    {
                        
                          first_node = axiom_node_get_first_child(parent, env);
                          
                    }
                    else
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                              "Failed in building adb object for bookmarkSet : "
                              "Expected %s but returned %s",
                              axutil_qname_to_string(_bookmarkSet-> qname, env),
                              axutil_qname_to_string(qname, env));
                        
                        return AXIS2_FAILURE;
                    }
                    

                     
                     /*
                      * building title element
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
                                   
                                 element_qname = axutil_qname_create(env, "title", "http://www.daisy.org/z3986/2005/bookmark/", NULL);
                                 

                           if (adb_title_type0_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_title_type0");

                                      status =  adb_title_type0_deserialize((adb_title_type0_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element title");
                                      }
                                      else
                                      {
                                          status = adb_bookmarkSet_set_title(_bookmarkSet, env,
                                                                   (adb_title_type0_t*)element);
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
                 

                     
                     /*
                      * building uid element
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
                                 
                                 element_qname = axutil_qname_create(env, "uid", "http://www.daisy.org/z3986/2005/bookmark/", NULL);
                                 

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
                                            status = adb_bookmarkSet_set_uid(_bookmarkSet, env,
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
                                                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element uid");
                                                status = AXIS2_FAILURE;
                                            }
                                            else
                                            {
                                                /* after all, we found this is a empty string */
                                                status = adb_bookmarkSet_set_uid(_bookmarkSet, env,
                                                                   "");
                                            }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for uid ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element uid missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building lastmark element
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
                                 
                                 element_qname = axutil_qname_create(env, "lastmark", "http://www.daisy.org/z3986/2005/bookmark/", NULL);
                                 

                           if (adb_lastmark_type0_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_lastmark_type0");

                                      status =  adb_lastmark_type0_deserialize((adb_lastmark_type0_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element lastmark");
                                      }
                                      else
                                      {
                                          status = adb_bookmarkSet_set_lastmark(_bookmarkSet, env,
                                                                   (adb_lastmark_type0_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for lastmark ");
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
                     * building bookmarkSetChoice_type0 array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building bookmarkSetChoice_type0 element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "bookmarkSetChoice_type0", "http://www.daisy.org/z3986/2005/bookmark/", NULL);
                                  
                               
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

                                  if (adb_bookmarkSetChoice_type0_is_particle() ||  
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_bookmarkSetChoice_type0");
                                          
                                          status =  adb_bookmarkSetChoice_type0_deserialize((adb_bookmarkSetChoice_type0_t*)element, env,
                                                                                 &current_node, &is_early_node_valid, AXIS2_FALSE);
                                          
                                          if(AXIS2_FAILURE ==  status)
                                          {
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element bookmarkSetChoice_type0 ");
                                          }
                                          else
                                          {
                                            axutil_array_list_add_at(arr_list, env, i, element);
                                          }
                                        
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for bookmarkSetChoice_type0 ");
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
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "bookmarkSetChoice_type0 (@minOccurs = '0') only have %d elements", i);
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
                                    status = adb_bookmarkSet_set_bookmarkSetChoice_type0(_bookmarkSet, env,
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
          adb_bookmarkSet_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_bookmarkSet_declare_parent_namespaces(
                    adb_bookmarkSet_t* _bookmarkSet,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_bookmarkSet_serialize(
                adb_bookmarkSet_t* _bookmarkSet,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_bookmarkSet_serialize_obj(
                    _bookmarkSet, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_bookmarkSet_serialize_obj(
                adb_bookmarkSet_t* _bookmarkSet,
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
                    
                    axis2_char_t text_value_4[ADB_DEFAULT_DIGIT_LIMIT];
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

             
                int next_ns_index_value = 0;
            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _bookmarkSet, NULL);
            
             
                    namespaces = axutil_hash_make(env);
                    next_ns_index = &next_ns_index_value;
                     
                           ns1 = axiom_namespace_create (env,
                                             "http://www.daisy.org/z3986/2005/bookmark/",
                                             "n"); 
                           axutil_hash_set(namespaces, "http://www.daisy.org/z3986/2005/bookmark/", AXIS2_HASH_KEY_STRING, axutil_strdup(env, "n"));
                       
                     
                    parent_element = axiom_element_create (env, NULL, "bookmarkSet", ns1 , &parent);
                    
                    
                    axiom_element_set_namespace(parent_element, env, ns1, parent);


            
                    data_source = axiom_data_source_create(env, parent, &current_node);
                    stream = axiom_data_source_get_stream(data_source, env);
                  
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.daisy.org/z3986/2005/bookmark/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.daisy.org/z3986/2005/bookmark/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.daisy.org/z3986/2005/bookmark/",
                                            p_prefix));
                       }
                      

                   if (!_bookmarkSet->is_valid_title)
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

                    
                    
                            sprintf(start_input_str, "<%s%stitle",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%stitle>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_title_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_title_type0_serialize(_bookmarkSet->property_title, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_title_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_title_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
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
                      

                   if (!_bookmarkSet->is_valid_uid)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property uid");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("uid"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("uid")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing uid element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%suid>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%suid>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_2 = _bookmarkSet->property_uid;
                           
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

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.daisy.org/z3986/2005/bookmark/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.daisy.org/z3986/2005/bookmark/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.daisy.org/z3986/2005/bookmark/",
                                            p_prefix));
                       }
                      

                   if (!_bookmarkSet->is_valid_lastmark)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("lastmark"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("lastmark")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing lastmark element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%slastmark",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%slastmark>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_lastmark_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_lastmark_type0_serialize(_bookmarkSet->property_lastmark, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_lastmark_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_lastmark_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
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
                      

                   if (!_bookmarkSet->is_valid_bookmarkSetChoice_type0)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("bookmarkSetChoice_type0"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("bookmarkSetChoice_type0")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing bookmarkSetChoice_type0 array
                      */
                     if (_bookmarkSet->property_bookmarkSetChoice_type0 != NULL)
                     {
                        

                            sprintf(start_input_str, "<%s%sbookmarkSetChoice_type0",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%sbookmarkSetChoice_type0>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_bookmarkSet->property_bookmarkSetChoice_type0, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_bookmarkSet->property_bookmarkSetChoice_type0, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing bookmarkSetChoice_type0 element
                      */

                    
                     
                            if(!adb_bookmarkSetChoice_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_bookmarkSetChoice_type0_serialize((adb_bookmarkSetChoice_type0_t*)element, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_bookmarkSetChoice_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_bookmarkSetChoice_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                         }
                     }
                   
                     
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
            adb_title_type0_t* AXIS2_CALL
            adb_bookmarkSet_get_property1(
                adb_bookmarkSet_t* _bookmarkSet,
                const axutil_env_t *env)
            {
                return adb_bookmarkSet_get_title(_bookmarkSet,
                                             env);
            }

            /**
             * getter for title.
             */
            adb_title_type0_t* AXIS2_CALL
            adb_bookmarkSet_get_title(
                    adb_bookmarkSet_t* _bookmarkSet,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _bookmarkSet, NULL);
                  

                return _bookmarkSet->property_title;
             }

            /**
             * setter for title
             */
            axis2_status_t AXIS2_CALL
            adb_bookmarkSet_set_title(
                    adb_bookmarkSet_t* _bookmarkSet,
                    const axutil_env_t *env,
                    adb_title_type0_t*  arg_title)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _bookmarkSet, AXIS2_FAILURE);
                
                if(_bookmarkSet->is_valid_title &&
                        arg_title == _bookmarkSet->property_title)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_title)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "title is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_bookmarkSet_reset_title(_bookmarkSet, env);

                
                if(NULL == arg_title)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _bookmarkSet->property_title = arg_title;
                        _bookmarkSet->is_valid_title = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for title
            */
           axis2_status_t AXIS2_CALL
           adb_bookmarkSet_reset_title(
                   adb_bookmarkSet_t* _bookmarkSet,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _bookmarkSet, AXIS2_FAILURE);
               

               
            
                
                if(_bookmarkSet->property_title != NULL)
                {
                   
                   adb_title_type0_free(_bookmarkSet->property_title, env);
                     _bookmarkSet->property_title = NULL;
                }
            
                
                
                _bookmarkSet->is_valid_title = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether title is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_bookmarkSet_is_title_nil(
                   adb_bookmarkSet_t* _bookmarkSet,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _bookmarkSet, AXIS2_TRUE);
               
               return !_bookmarkSet->is_valid_title;
           }

           /**
            * Set title to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_bookmarkSet_set_title_nil(
                   adb_bookmarkSet_t* _bookmarkSet,
                   const axutil_env_t *env)
           {
               return adb_bookmarkSet_reset_title(_bookmarkSet, env);
           }

           

            /**
             * Getter for uid by  Property Number 2
             */
            axis2_char_t* AXIS2_CALL
            adb_bookmarkSet_get_property2(
                adb_bookmarkSet_t* _bookmarkSet,
                const axutil_env_t *env)
            {
                return adb_bookmarkSet_get_uid(_bookmarkSet,
                                             env);
            }

            /**
             * getter for uid.
             */
            axis2_char_t* AXIS2_CALL
            adb_bookmarkSet_get_uid(
                    adb_bookmarkSet_t* _bookmarkSet,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _bookmarkSet, NULL);
                  

                return _bookmarkSet->property_uid;
             }

            /**
             * setter for uid
             */
            axis2_status_t AXIS2_CALL
            adb_bookmarkSet_set_uid(
                    adb_bookmarkSet_t* _bookmarkSet,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_uid)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _bookmarkSet, AXIS2_FAILURE);
                
                if(_bookmarkSet->is_valid_uid &&
                        arg_uid == _bookmarkSet->property_uid)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_uid)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "uid is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_bookmarkSet_reset_uid(_bookmarkSet, env);

                
                if(NULL == arg_uid)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _bookmarkSet->property_uid = (axis2_char_t *)axutil_strdup(env, arg_uid);
                        if(NULL == _bookmarkSet->property_uid)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for uid");
                            return AXIS2_FAILURE;
                        }
                        _bookmarkSet->is_valid_uid = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for uid
            */
           axis2_status_t AXIS2_CALL
           adb_bookmarkSet_reset_uid(
                   adb_bookmarkSet_t* _bookmarkSet,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _bookmarkSet, AXIS2_FAILURE);
               

               
            
                
                if(_bookmarkSet->property_uid != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _bookmarkSet->property_uid);
                     _bookmarkSet->property_uid = NULL;
                }
            
                
                
                _bookmarkSet->is_valid_uid = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether uid is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_bookmarkSet_is_uid_nil(
                   adb_bookmarkSet_t* _bookmarkSet,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _bookmarkSet, AXIS2_TRUE);
               
               return !_bookmarkSet->is_valid_uid;
           }

           /**
            * Set uid to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_bookmarkSet_set_uid_nil(
                   adb_bookmarkSet_t* _bookmarkSet,
                   const axutil_env_t *env)
           {
               return adb_bookmarkSet_reset_uid(_bookmarkSet, env);
           }

           

            /**
             * Getter for lastmark by  Property Number 3
             */
            adb_lastmark_type0_t* AXIS2_CALL
            adb_bookmarkSet_get_property3(
                adb_bookmarkSet_t* _bookmarkSet,
                const axutil_env_t *env)
            {
                return adb_bookmarkSet_get_lastmark(_bookmarkSet,
                                             env);
            }

            /**
             * getter for lastmark.
             */
            adb_lastmark_type0_t* AXIS2_CALL
            adb_bookmarkSet_get_lastmark(
                    adb_bookmarkSet_t* _bookmarkSet,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _bookmarkSet, NULL);
                  

                return _bookmarkSet->property_lastmark;
             }

            /**
             * setter for lastmark
             */
            axis2_status_t AXIS2_CALL
            adb_bookmarkSet_set_lastmark(
                    adb_bookmarkSet_t* _bookmarkSet,
                    const axutil_env_t *env,
                    adb_lastmark_type0_t*  arg_lastmark)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _bookmarkSet, AXIS2_FAILURE);
                
                if(_bookmarkSet->is_valid_lastmark &&
                        arg_lastmark == _bookmarkSet->property_lastmark)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_bookmarkSet_reset_lastmark(_bookmarkSet, env);

                
                if(NULL == arg_lastmark)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _bookmarkSet->property_lastmark = arg_lastmark;
                        _bookmarkSet->is_valid_lastmark = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for lastmark
            */
           axis2_status_t AXIS2_CALL
           adb_bookmarkSet_reset_lastmark(
                   adb_bookmarkSet_t* _bookmarkSet,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _bookmarkSet, AXIS2_FAILURE);
               

               
            
                
                if(_bookmarkSet->property_lastmark != NULL)
                {
                   
                   adb_lastmark_type0_free(_bookmarkSet->property_lastmark, env);
                     _bookmarkSet->property_lastmark = NULL;
                }
            
                
                
                _bookmarkSet->is_valid_lastmark = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether lastmark is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_bookmarkSet_is_lastmark_nil(
                   adb_bookmarkSet_t* _bookmarkSet,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _bookmarkSet, AXIS2_TRUE);
               
               return !_bookmarkSet->is_valid_lastmark;
           }

           /**
            * Set lastmark to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_bookmarkSet_set_lastmark_nil(
                   adb_bookmarkSet_t* _bookmarkSet,
                   const axutil_env_t *env)
           {
               return adb_bookmarkSet_reset_lastmark(_bookmarkSet, env);
           }

           

            /**
             * Getter for bookmarkSetChoice_type0 by  Property Number 4
             */
            axutil_array_list_t* AXIS2_CALL
            adb_bookmarkSet_get_property4(
                adb_bookmarkSet_t* _bookmarkSet,
                const axutil_env_t *env)
            {
                return adb_bookmarkSet_get_bookmarkSetChoice_type0(_bookmarkSet,
                                             env);
            }

            /**
             * getter for bookmarkSetChoice_type0.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_bookmarkSet_get_bookmarkSetChoice_type0(
                    adb_bookmarkSet_t* _bookmarkSet,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _bookmarkSet, NULL);
                  

                return _bookmarkSet->property_bookmarkSetChoice_type0;
             }

            /**
             * setter for bookmarkSetChoice_type0
             */
            axis2_status_t AXIS2_CALL
            adb_bookmarkSet_set_bookmarkSetChoice_type0(
                    adb_bookmarkSet_t* _bookmarkSet,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_bookmarkSetChoice_type0)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _bookmarkSet, AXIS2_FAILURE);
                
                if(_bookmarkSet->is_valid_bookmarkSetChoice_type0 &&
                        arg_bookmarkSetChoice_type0 == _bookmarkSet->property_bookmarkSetChoice_type0)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_bookmarkSetChoice_type0, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "bookmarkSetChoice_type0 has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_bookmarkSetChoice_type0, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_bookmarkSet_reset_bookmarkSetChoice_type0(_bookmarkSet, env);

                
                if(NULL == arg_bookmarkSetChoice_type0)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _bookmarkSet->property_bookmarkSetChoice_type0 = arg_bookmarkSetChoice_type0;
                        if(non_nil_exists)
                        {
                            _bookmarkSet->is_valid_bookmarkSetChoice_type0 = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of bookmarkSetChoice_type0.
             */
            adb_bookmarkSetChoice_type0_t* AXIS2_CALL
            adb_bookmarkSet_get_bookmarkSetChoice_type0_at(
                    adb_bookmarkSet_t* _bookmarkSet,
                    const axutil_env_t *env, int i)
            {
                adb_bookmarkSetChoice_type0_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _bookmarkSet, NULL);
                  

                if(_bookmarkSet->property_bookmarkSetChoice_type0 == NULL)
                {
                    return (adb_bookmarkSetChoice_type0_t*)0;
                }
                ret_val = (adb_bookmarkSetChoice_type0_t*)axutil_array_list_get(_bookmarkSet->property_bookmarkSetChoice_type0, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of bookmarkSetChoice_type0.
             */
            axis2_status_t AXIS2_CALL
            adb_bookmarkSet_set_bookmarkSetChoice_type0_at(
                    adb_bookmarkSet_t* _bookmarkSet,
                    const axutil_env_t *env, int i,
                    adb_bookmarkSetChoice_type0_t* arg_bookmarkSetChoice_type0)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _bookmarkSet, AXIS2_FAILURE);
                
                if( _bookmarkSet->is_valid_bookmarkSetChoice_type0 &&
                    _bookmarkSet->property_bookmarkSetChoice_type0 &&
                
                    arg_bookmarkSetChoice_type0 == (adb_bookmarkSetChoice_type0_t*)axutil_array_list_get(_bookmarkSet->property_bookmarkSetChoice_type0, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_bookmarkSetChoice_type0)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_bookmarkSet->property_bookmarkSetChoice_type0 != NULL)
                        {
                            size = axutil_array_list_size(_bookmarkSet->property_bookmarkSetChoice_type0, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_bookmarkSet->property_bookmarkSetChoice_type0, env, i))
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
                  

                if(_bookmarkSet->property_bookmarkSetChoice_type0 == NULL)
                {
                    _bookmarkSet->property_bookmarkSetChoice_type0 = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_bookmarkSet->property_bookmarkSetChoice_type0, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_bookmarkSetChoice_type0_free((adb_bookmarkSetChoice_type0_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _bookmarkSet->is_valid_bookmarkSetChoice_type0 = AXIS2_FALSE;
                        axutil_array_list_set(_bookmarkSet->property_bookmarkSetChoice_type0 , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_bookmarkSet->property_bookmarkSetChoice_type0 , env, i, arg_bookmarkSetChoice_type0);
                  _bookmarkSet->is_valid_bookmarkSetChoice_type0 = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to bookmarkSetChoice_type0.
             */
            axis2_status_t AXIS2_CALL
            adb_bookmarkSet_add_bookmarkSetChoice_type0(
                    adb_bookmarkSet_t* _bookmarkSet,
                    const axutil_env_t *env,
                    adb_bookmarkSetChoice_type0_t* arg_bookmarkSetChoice_type0)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _bookmarkSet, AXIS2_FAILURE);

                
                    if(NULL == arg_bookmarkSetChoice_type0)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_bookmarkSet->property_bookmarkSetChoice_type0 == NULL)
                {
                    _bookmarkSet->property_bookmarkSetChoice_type0 = axutil_array_list_create(env, 10);
                }
                if(_bookmarkSet->property_bookmarkSetChoice_type0 == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for bookmarkSetChoice_type0");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_bookmarkSet->property_bookmarkSetChoice_type0 , env, arg_bookmarkSetChoice_type0);
                  _bookmarkSet->is_valid_bookmarkSetChoice_type0 = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the bookmarkSetChoice_type0 array.
             */
            int AXIS2_CALL
            adb_bookmarkSet_sizeof_bookmarkSetChoice_type0(
                    adb_bookmarkSet_t* _bookmarkSet,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _bookmarkSet, -1);
                if(_bookmarkSet->property_bookmarkSetChoice_type0 == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_bookmarkSet->property_bookmarkSetChoice_type0, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_bookmarkSet_remove_bookmarkSetChoice_type0_at(
                    adb_bookmarkSet_t* _bookmarkSet,
                    const axutil_env_t *env, int i)
            {
                return adb_bookmarkSet_set_bookmarkSetChoice_type0_nil_at(_bookmarkSet, env, i);
            }

            

           /**
            * resetter for bookmarkSetChoice_type0
            */
           axis2_status_t AXIS2_CALL
           adb_bookmarkSet_reset_bookmarkSetChoice_type0(
                   adb_bookmarkSet_t* _bookmarkSet,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _bookmarkSet, AXIS2_FAILURE);
               

               
                  if (_bookmarkSet->property_bookmarkSetChoice_type0 != NULL)
                  {
                      count = axutil_array_list_size(_bookmarkSet->property_bookmarkSetChoice_type0, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_bookmarkSet->property_bookmarkSetChoice_type0, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   adb_bookmarkSetChoice_type0_free((adb_bookmarkSetChoice_type0_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_bookmarkSet->property_bookmarkSetChoice_type0, env);
                  }
                _bookmarkSet->is_valid_bookmarkSetChoice_type0 = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether bookmarkSetChoice_type0 is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_bookmarkSet_is_bookmarkSetChoice_type0_nil(
                   adb_bookmarkSet_t* _bookmarkSet,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _bookmarkSet, AXIS2_TRUE);
               
               return !_bookmarkSet->is_valid_bookmarkSetChoice_type0;
           }

           /**
            * Set bookmarkSetChoice_type0 to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_bookmarkSet_set_bookmarkSetChoice_type0_nil(
                   adb_bookmarkSet_t* _bookmarkSet,
                   const axutil_env_t *env)
           {
               return adb_bookmarkSet_reset_bookmarkSetChoice_type0(_bookmarkSet, env);
           }

           
           /**
            * Check whether bookmarkSetChoice_type0 is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_bookmarkSet_is_bookmarkSetChoice_type0_nil_at(
                   adb_bookmarkSet_t* _bookmarkSet,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _bookmarkSet, AXIS2_TRUE);
               
               return (_bookmarkSet->is_valid_bookmarkSetChoice_type0 == AXIS2_FALSE ||
                        NULL == _bookmarkSet->property_bookmarkSetChoice_type0 || 
                        NULL == axutil_array_list_get(_bookmarkSet->property_bookmarkSetChoice_type0, env, i));
           }

           /**
            * Set bookmarkSetChoice_type0 to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_bookmarkSet_set_bookmarkSetChoice_type0_nil_at(
                   adb_bookmarkSet_t* _bookmarkSet,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _bookmarkSet, AXIS2_FAILURE);

                if(_bookmarkSet->property_bookmarkSetChoice_type0 == NULL ||
                            _bookmarkSet->is_valid_bookmarkSetChoice_type0 == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_bookmarkSet->property_bookmarkSetChoice_type0, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_bookmarkSet->property_bookmarkSetChoice_type0, env, i))
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
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of bookmarkSetChoice_type0 is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_bookmarkSet->property_bookmarkSetChoice_type0 == NULL)
                {
                    _bookmarkSet->is_valid_bookmarkSetChoice_type0 = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_bookmarkSet->property_bookmarkSetChoice_type0, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_bookmarkSetChoice_type0_free((adb_bookmarkSetChoice_type0_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _bookmarkSet->is_valid_bookmarkSetChoice_type0 = AXIS2_FALSE;
                        axutil_array_list_set(_bookmarkSet->property_bookmarkSetChoice_type0 , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_bookmarkSet->property_bookmarkSetChoice_type0 , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

