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
         * adb_userResponse_type0.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_userResponse_type0.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = userResponse_type0
                 * Namespace URI = http://www.daisy.org/ns/daisy-online/
                 * Namespace Prefix = ns3
                 */
           


        struct adb_userResponse_type0
        {
            axis2_char_t *property_TypeName;

            adb_data_type1_t* property_data;

                
                axis2_bool_t is_valid_data;
            axis2_char_t* property_questionID;

                
                axis2_bool_t is_valid_questionID;
            axis2_char_t* property_value;

                
                axis2_bool_t is_valid_value;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_userResponse_type0_set_data_nil(
                        adb_userResponse_type0_t* _userResponse_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_userResponse_type0_set_questionID_nil(
                        adb_userResponse_type0_t* _userResponse_type0,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_userResponse_type0_t* AXIS2_CALL
        adb_userResponse_type0_create(
            const axutil_env_t *env)
        {
            adb_userResponse_type0_t *_userResponse_type0 = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _userResponse_type0 = (adb_userResponse_type0_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_userResponse_type0_t));

            if(NULL == _userResponse_type0)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_userResponse_type0, 0, sizeof(adb_userResponse_type0_t));

            _userResponse_type0->property_TypeName = axutil_strdup(env, "adb_userResponse_type0");
            _userResponse_type0->property_data  = NULL;
                  _userResponse_type0->is_valid_data  = AXIS2_FALSE;
            _userResponse_type0->property_questionID  = NULL;
                  _userResponse_type0->is_valid_questionID  = AXIS2_FALSE;
            _userResponse_type0->property_value  = NULL;
                  _userResponse_type0->is_valid_value  = AXIS2_FALSE;
            

            return _userResponse_type0;
        }

        adb_userResponse_type0_t* AXIS2_CALL
        adb_userResponse_type0_create_with_values(
            const axutil_env_t *env,
                adb_data_type1_t* _data,
                axis2_char_t* _questionID,
                axis2_char_t* _value)
        {
            adb_userResponse_type0_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_userResponse_type0_create(env);

            
              status = adb_userResponse_type0_set_data(
                                     adb_obj,
                                     env,
                                     _data);
              if(status == AXIS2_FAILURE) {
                  adb_userResponse_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_userResponse_type0_set_questionID(
                                     adb_obj,
                                     env,
                                     _questionID);
              if(status == AXIS2_FAILURE) {
                  adb_userResponse_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_userResponse_type0_set_value(
                                     adb_obj,
                                     env,
                                     _value);
              if(status == AXIS2_FAILURE) {
                  adb_userResponse_type0_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        adb_data_type1_t* AXIS2_CALL
                adb_userResponse_type0_free_popping_value(
                        adb_userResponse_type0_t* _userResponse_type0,
                        const axutil_env_t *env)
                {
                    adb_data_type1_t* value;

                    
                    
                    value = _userResponse_type0->property_data;

                    _userResponse_type0->property_data = (adb_data_type1_t*)NULL;
                    adb_userResponse_type0_free(_userResponse_type0, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_userResponse_type0_free(
                adb_userResponse_type0_t* _userResponse_type0,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _userResponse_type0,
                env,
                "adb_userResponse_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_userResponse_type0_free_obj(
                adb_userResponse_type0_t* _userResponse_type0,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _userResponse_type0, AXIS2_FAILURE);

            if (_userResponse_type0->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _userResponse_type0->property_TypeName);
            }

            adb_userResponse_type0_reset_data(_userResponse_type0, env);
            adb_userResponse_type0_reset_questionID(_userResponse_type0, env);
            adb_userResponse_type0_reset_value(_userResponse_type0, env);
            

            if(_userResponse_type0)
            {
                AXIS2_FREE(env->allocator, _userResponse_type0);
                _userResponse_type0 = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_userResponse_type0_deserialize(
                adb_userResponse_type0_t* _userResponse_type0,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _userResponse_type0,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_userResponse_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_userResponse_type0_deserialize_obj(
                adb_userResponse_type0_t* _userResponse_type0,
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
          
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _userResponse_type0, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for userResponse_type0 : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    
                 parent_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                 attribute_hash = axiom_element_get_all_attributes(parent_element, env);
              

                     
                     /*
                      * building data element
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
                                   
                                 element_qname = axutil_qname_create(env, "data", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

                           if (adb_data_type1_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_data_type1");

                                      status =  adb_data_type1_deserialize((adb_data_type1_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element data");
                                      }
                                      else
                                      {
                                          status = adb_userResponse_type0_set_data(_userResponse_type0, env,
                                                                   (adb_data_type1_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for data ");
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "questionID"))
                             
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
                    /* this is hoping that attribute is stored in "questionID", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "questionID");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_userResponse_type0_set_questionID(_userResponse_type0,
                                                          env, attrib_text);
                        
                    }
                  
                    else if(!dont_care_minoccurs)
                    {
                        if(element_qname)
                        {
                            axutil_qname_free(element_qname, env);
                        }
                        /* this is not a nillable element*/
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "required attribute questionID missing");
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "value"))
                             
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
                    /* this is hoping that attribute is stored in "value", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "value");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_userResponse_type0_set_value(_userResponse_type0,
                                                          env, attrib_text);
                        
                    }
                  
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_userResponse_type0_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_userResponse_type0_declare_parent_namespaces(
                    adb_userResponse_type0_t* _userResponse_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_userResponse_type0_serialize(
                adb_userResponse_type0_t* _userResponse_type0,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_userResponse_type0 == NULL)
            {
                return adb_userResponse_type0_serialize_obj(
                    _userResponse_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _userResponse_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_userResponse_type0");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_userResponse_type0_serialize_obj(
                adb_userResponse_type0_t* _userResponse_type0,
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
            
                    axis2_char_t text_value_1[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t *text_value_2;
                    axis2_char_t *text_value_2_temp;
                    
                    axis2_char_t *text_value_3;
                    axis2_char_t *text_value_3_temp;
                    
                axis2_char_t *text_value = NULL;
             
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _userResponse_type0, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
                if(_userResponse_type0->is_valid_questionID)
                {
                
                        p_prefix = NULL;
                      
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(_userResponse_type0->property_questionID) + 
                                                                axutil_strlen("questionID")));
                           sprintf(text_value, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "questionID", _userResponse_type0->property_questionID);
                           axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
                   else
                   {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute questionID");
                      return NULL;
                   }
                   
                if(_userResponse_type0->is_valid_value)
                {
                
                        p_prefix = NULL;
                      
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(_userResponse_type0->property_value) + 
                                                                axutil_strlen("value")));
                           sprintf(text_value, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "value", _userResponse_type0->property_value);
                           axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
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
                      

                   if (!_userResponse_type0->is_valid_data)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("data"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("data")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing data element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sdata",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sdata>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_data_type1_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_data_type1_serialize(_userResponse_type0->property_data, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_data_type1_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_data_type1_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                    
                    if(parent_tag_closed)
                    {
                       if(_userResponse_type0->is_valid_questionID)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = _userResponse_type0->property_questionID;
                           text_attri = axiom_attribute_create (env, "questionID", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                      
                      else
                      {
                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute questionID");
                         return NULL;
                      }
                       
                  }
                
                    
                    if(parent_tag_closed)
                    {
                       if(_userResponse_type0->is_valid_value)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = _userResponse_type0->property_value;
                           text_attri = axiom_attribute_create (env, "value", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                       
                  }
                

            return parent;
        }


        

            /**
             * Getter for data by  Property Number 1
             */
            adb_data_type1_t* AXIS2_CALL
            adb_userResponse_type0_get_property1(
                adb_userResponse_type0_t* _userResponse_type0,
                const axutil_env_t *env)
            {
                return adb_userResponse_type0_get_data(_userResponse_type0,
                                             env);
            }

            /**
             * getter for data.
             */
            adb_data_type1_t* AXIS2_CALL
            adb_userResponse_type0_get_data(
                    adb_userResponse_type0_t* _userResponse_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _userResponse_type0, NULL);
                  

                return _userResponse_type0->property_data;
             }

            /**
             * setter for data
             */
            axis2_status_t AXIS2_CALL
            adb_userResponse_type0_set_data(
                    adb_userResponse_type0_t* _userResponse_type0,
                    const axutil_env_t *env,
                    adb_data_type1_t*  arg_data)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _userResponse_type0, AXIS2_FAILURE);
                
                if(_userResponse_type0->is_valid_data &&
                        arg_data == _userResponse_type0->property_data)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_userResponse_type0_reset_data(_userResponse_type0, env);

                
                if(NULL == arg_data)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _userResponse_type0->property_data = arg_data;
                        _userResponse_type0->is_valid_data = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for data
            */
           axis2_status_t AXIS2_CALL
           adb_userResponse_type0_reset_data(
                   adb_userResponse_type0_t* _userResponse_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _userResponse_type0, AXIS2_FAILURE);
               

               
            
                
                if(_userResponse_type0->property_data != NULL)
                {
                   
                   adb_data_type1_free(_userResponse_type0->property_data, env);
                     _userResponse_type0->property_data = NULL;
                }
            
                
                
                _userResponse_type0->is_valid_data = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether data is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_userResponse_type0_is_data_nil(
                   adb_userResponse_type0_t* _userResponse_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _userResponse_type0, AXIS2_TRUE);
               
               return !_userResponse_type0->is_valid_data;
           }

           /**
            * Set data to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_userResponse_type0_set_data_nil(
                   adb_userResponse_type0_t* _userResponse_type0,
                   const axutil_env_t *env)
           {
               return adb_userResponse_type0_reset_data(_userResponse_type0, env);
           }

           

            /**
             * Getter for questionID by  Property Number 2
             */
            axis2_char_t* AXIS2_CALL
            adb_userResponse_type0_get_property2(
                adb_userResponse_type0_t* _userResponse_type0,
                const axutil_env_t *env)
            {
                return adb_userResponse_type0_get_questionID(_userResponse_type0,
                                             env);
            }

            /**
             * getter for questionID.
             */
            axis2_char_t* AXIS2_CALL
            adb_userResponse_type0_get_questionID(
                    adb_userResponse_type0_t* _userResponse_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _userResponse_type0, NULL);
                  

                return _userResponse_type0->property_questionID;
             }

            /**
             * setter for questionID
             */
            axis2_status_t AXIS2_CALL
            adb_userResponse_type0_set_questionID(
                    adb_userResponse_type0_t* _userResponse_type0,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_questionID)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _userResponse_type0, AXIS2_FAILURE);
                
                if(_userResponse_type0->is_valid_questionID &&
                        arg_questionID == _userResponse_type0->property_questionID)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_questionID)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "questionID is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_userResponse_type0_reset_questionID(_userResponse_type0, env);

                
                if(NULL == arg_questionID)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _userResponse_type0->property_questionID = (axis2_char_t *)axutil_strdup(env, arg_questionID);
                        if(NULL == _userResponse_type0->property_questionID)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for questionID");
                            return AXIS2_FAILURE;
                        }
                        _userResponse_type0->is_valid_questionID = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for questionID
            */
           axis2_status_t AXIS2_CALL
           adb_userResponse_type0_reset_questionID(
                   adb_userResponse_type0_t* _userResponse_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _userResponse_type0, AXIS2_FAILURE);
               

               
            
                
                if(_userResponse_type0->property_questionID != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _userResponse_type0->property_questionID);
                     _userResponse_type0->property_questionID = NULL;
                }
            
                
                
                _userResponse_type0->is_valid_questionID = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether questionID is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_userResponse_type0_is_questionID_nil(
                   adb_userResponse_type0_t* _userResponse_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _userResponse_type0, AXIS2_TRUE);
               
               return !_userResponse_type0->is_valid_questionID;
           }

           /**
            * Set questionID to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_userResponse_type0_set_questionID_nil(
                   adb_userResponse_type0_t* _userResponse_type0,
                   const axutil_env_t *env)
           {
               return adb_userResponse_type0_reset_questionID(_userResponse_type0, env);
           }

           

            /**
             * Getter for value by  Property Number 3
             */
            axis2_char_t* AXIS2_CALL
            adb_userResponse_type0_get_property3(
                adb_userResponse_type0_t* _userResponse_type0,
                const axutil_env_t *env)
            {
                return adb_userResponse_type0_get_value(_userResponse_type0,
                                             env);
            }

            /**
             * getter for value.
             */
            axis2_char_t* AXIS2_CALL
            adb_userResponse_type0_get_value(
                    adb_userResponse_type0_t* _userResponse_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _userResponse_type0, NULL);
                  

                return _userResponse_type0->property_value;
             }

            /**
             * setter for value
             */
            axis2_status_t AXIS2_CALL
            adb_userResponse_type0_set_value(
                    adb_userResponse_type0_t* _userResponse_type0,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_value)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _userResponse_type0, AXIS2_FAILURE);
                
                if(_userResponse_type0->is_valid_value &&
                        arg_value == _userResponse_type0->property_value)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_value)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "value is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_userResponse_type0_reset_value(_userResponse_type0, env);

                
                if(NULL == arg_value)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _userResponse_type0->property_value = (axis2_char_t *)axutil_strdup(env, arg_value);
                        if(NULL == _userResponse_type0->property_value)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for value");
                            return AXIS2_FAILURE;
                        }
                        _userResponse_type0->is_valid_value = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for value
            */
           axis2_status_t AXIS2_CALL
           adb_userResponse_type0_reset_value(
                   adb_userResponse_type0_t* _userResponse_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _userResponse_type0, AXIS2_FAILURE);
               

               
            
                
                if(_userResponse_type0->property_value != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _userResponse_type0->property_value);
                     _userResponse_type0->property_value = NULL;
                }
            
                
                
                _userResponse_type0->is_valid_value = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether value is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_userResponse_type0_is_value_nil(
                   adb_userResponse_type0_t* _userResponse_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _userResponse_type0, AXIS2_TRUE);
               
               return !_userResponse_type0->is_valid_value;
           }

           /**
            * Set value to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_userResponse_type0_set_value_nil(
                   adb_userResponse_type0_t* _userResponse_type0,
                   const axutil_env_t *env)
           {
               return adb_userResponse_type0_reset_value(_userResponse_type0, env);
           }

           

