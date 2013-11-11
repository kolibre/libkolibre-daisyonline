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
         * adb_multipleChoiceQuestion_type0.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_multipleChoiceQuestion_type0.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = multipleChoiceQuestion_type0
                 * Namespace URI = http://www.daisy.org/ns/daisy-online/
                 * Namespace Prefix = ns3
                 */
           


        struct adb_multipleChoiceQuestion_type0
        {
            axis2_char_t *property_TypeName;

            adb_label_type0_t* property_label;

                
                axis2_bool_t is_valid_label;
            adb_choices_type0_t* property_choices;

                
                axis2_bool_t is_valid_choices;
            axis2_char_t* property_id;

                
                axis2_bool_t is_valid_id;
            axis2_bool_t property_allowMultipleSelections;

                
                axis2_bool_t is_valid_allowMultipleSelections;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_multipleChoiceQuestion_type0_set_label_nil(
                        adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_multipleChoiceQuestion_type0_set_choices_nil(
                        adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_multipleChoiceQuestion_type0_set_id_nil(
                        adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_multipleChoiceQuestion_type0_t* AXIS2_CALL
        adb_multipleChoiceQuestion_type0_create(
            const axutil_env_t *env)
        {
            adb_multipleChoiceQuestion_type0_t *_multipleChoiceQuestion_type0 = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _multipleChoiceQuestion_type0 = (adb_multipleChoiceQuestion_type0_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_multipleChoiceQuestion_type0_t));

            if(NULL == _multipleChoiceQuestion_type0)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_multipleChoiceQuestion_type0, 0, sizeof(adb_multipleChoiceQuestion_type0_t));

            _multipleChoiceQuestion_type0->property_TypeName = axutil_strdup(env, "adb_multipleChoiceQuestion_type0");
            _multipleChoiceQuestion_type0->property_label  = NULL;
                  _multipleChoiceQuestion_type0->is_valid_label  = AXIS2_FALSE;
            _multipleChoiceQuestion_type0->property_choices  = NULL;
                  _multipleChoiceQuestion_type0->is_valid_choices  = AXIS2_FALSE;
            _multipleChoiceQuestion_type0->property_id  = NULL;
                  _multipleChoiceQuestion_type0->is_valid_id  = AXIS2_FALSE;
            _multipleChoiceQuestion_type0->is_valid_allowMultipleSelections  = AXIS2_FALSE;
            

            return _multipleChoiceQuestion_type0;
        }

        adb_multipleChoiceQuestion_type0_t* AXIS2_CALL
        adb_multipleChoiceQuestion_type0_create_with_values(
            const axutil_env_t *env,
                adb_label_type0_t* _label,
                adb_choices_type0_t* _choices,
                axis2_char_t* _id,
                axis2_bool_t _allowMultipleSelections)
        {
            adb_multipleChoiceQuestion_type0_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_multipleChoiceQuestion_type0_create(env);

            
              status = adb_multipleChoiceQuestion_type0_set_label(
                                     adb_obj,
                                     env,
                                     _label);
              if(status == AXIS2_FAILURE) {
                  adb_multipleChoiceQuestion_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_multipleChoiceQuestion_type0_set_choices(
                                     adb_obj,
                                     env,
                                     _choices);
              if(status == AXIS2_FAILURE) {
                  adb_multipleChoiceQuestion_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_multipleChoiceQuestion_type0_set_id(
                                     adb_obj,
                                     env,
                                     _id);
              if(status == AXIS2_FAILURE) {
                  adb_multipleChoiceQuestion_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_multipleChoiceQuestion_type0_set_allowMultipleSelections(
                                     adb_obj,
                                     env,
                                     _allowMultipleSelections);
              if(status == AXIS2_FAILURE) {
                  adb_multipleChoiceQuestion_type0_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        adb_label_type0_t* AXIS2_CALL
                adb_multipleChoiceQuestion_type0_free_popping_value(
                        adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                        const axutil_env_t *env)
                {
                    adb_label_type0_t* value;

                    
                    
                    value = _multipleChoiceQuestion_type0->property_label;

                    _multipleChoiceQuestion_type0->property_label = (adb_label_type0_t*)NULL;
                    adb_multipleChoiceQuestion_type0_free(_multipleChoiceQuestion_type0, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_multipleChoiceQuestion_type0_free(
                adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _multipleChoiceQuestion_type0,
                env,
                "adb_multipleChoiceQuestion_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_multipleChoiceQuestion_type0_free_obj(
                adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _multipleChoiceQuestion_type0, AXIS2_FAILURE);

            if (_multipleChoiceQuestion_type0->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _multipleChoiceQuestion_type0->property_TypeName);
            }

            adb_multipleChoiceQuestion_type0_reset_label(_multipleChoiceQuestion_type0, env);
            adb_multipleChoiceQuestion_type0_reset_choices(_multipleChoiceQuestion_type0, env);
            adb_multipleChoiceQuestion_type0_reset_id(_multipleChoiceQuestion_type0, env);
            adb_multipleChoiceQuestion_type0_reset_allowMultipleSelections(_multipleChoiceQuestion_type0, env);
            

            if(_multipleChoiceQuestion_type0)
            {
                AXIS2_FREE(env->allocator, _multipleChoiceQuestion_type0);
                _multipleChoiceQuestion_type0 = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_multipleChoiceQuestion_type0_deserialize(
                adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _multipleChoiceQuestion_type0,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_multipleChoiceQuestion_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_multipleChoiceQuestion_type0_deserialize_obj(
                adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
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
            AXIS2_PARAM_CHECK(env->error, _multipleChoiceQuestion_type0, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for multipleChoiceQuestion_type0 : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    
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
                                          status = adb_multipleChoiceQuestion_type0_set_label(_multipleChoiceQuestion_type0, env,
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
                           
                              else if(!dont_care_minoccurs)
                              {
                                  if(element_qname)
                                  {
                                      axutil_qname_free(element_qname, env);
                                  }
                                  /* this is not a nillable element*/
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element label missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building choices element
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
                                 
                                 element_qname = axutil_qname_create(env, "choices", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

                           if (adb_choices_type0_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_choices_type0");

                                      status =  adb_choices_type0_deserialize((adb_choices_type0_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element choices");
                                      }
                                      else
                                      {
                                          status = adb_multipleChoiceQuestion_type0_set_choices(_multipleChoiceQuestion_type0, env,
                                                                   (adb_choices_type0_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for choices ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element choices missing");
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
                      
                      adb_multipleChoiceQuestion_type0_set_id(_multipleChoiceQuestion_type0,
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "allowMultipleSelections"))
                             
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
                    /* this is hoping that attribute is stored in "allowMultipleSelections", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "allowMultipleSelections");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      
                           if (!axutil_strcmp(attrib_text, "TRUE") || !axutil_strcmp(attrib_text, "true"))
                           {
                               adb_multipleChoiceQuestion_type0_set_allowMultipleSelections(_multipleChoiceQuestion_type0,
                                                          env, AXIS2_TRUE);
                           }
                           else
                           {
                               adb_multipleChoiceQuestion_type0_set_allowMultipleSelections(_multipleChoiceQuestion_type0,
                                                          env, AXIS2_FALSE);
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
          adb_multipleChoiceQuestion_type0_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_multipleChoiceQuestion_type0_declare_parent_namespaces(
                    adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_multipleChoiceQuestion_type0_serialize(
                adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_multipleChoiceQuestion_type0 == NULL)
            {
                return adb_multipleChoiceQuestion_type0_serialize_obj(
                    _multipleChoiceQuestion_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _multipleChoiceQuestion_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_multipleChoiceQuestion_type0");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_multipleChoiceQuestion_type0_serialize_obj(
                adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
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
                    
                    axis2_char_t text_value_2[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t *text_value_3;
                    axis2_char_t *text_value_3_temp;
                    
                    axis2_char_t text_value_4[ADB_DEFAULT_DIGIT_LIMIT];
                    
                axis2_char_t *text_value = NULL;
             
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _multipleChoiceQuestion_type0, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
                if(_multipleChoiceQuestion_type0->is_valid_id)
                {
                
                        p_prefix = NULL;
                      
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(_multipleChoiceQuestion_type0->property_id) + 
                                                                axutil_strlen("id")));
                           sprintf(text_value, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "id", _multipleChoiceQuestion_type0->property_id);
                           axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
                   else
                   {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute id");
                      return NULL;
                   }
                   
                if(_multipleChoiceQuestion_type0->is_valid_allowMultipleSelections)
                {
                
                        p_prefix = NULL;
                      
                           
                           text_value = (axis2_char_t*)((_multipleChoiceQuestion_type0->property_allowMultipleSelections)?"true":"false");
                           string_to_stream = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) *
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(text_value) + 
                                                             axutil_strlen("allowMultipleSelections")));
                           sprintf(string_to_stream, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "allowMultipleSelections",  text_value);
                           axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
                           AXIS2_FREE(env-> allocator, string_to_stream);
                        
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
                      

                   if (!_multipleChoiceQuestion_type0->is_valid_label)
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
                            adb_label_type0_serialize(_multipleChoiceQuestion_type0->property_label, 
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
                      

                   if (!_multipleChoiceQuestion_type0->is_valid_choices)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property choices");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("choices"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("choices")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing choices element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%schoices",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%schoices>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_choices_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_choices_type0_serialize(_multipleChoiceQuestion_type0->property_choices, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_choices_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_choices_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                    
                    if(parent_tag_closed)
                    {
                       if(_multipleChoiceQuestion_type0->is_valid_id)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = _multipleChoiceQuestion_type0->property_id;
                           text_attri = axiom_attribute_create (env, "id", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                      
                      else
                      {
                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute id");
                         return NULL;
                      }
                       
                  }
                
                    
                    if(parent_tag_closed)
                    {
                       if(_multipleChoiceQuestion_type0->is_valid_allowMultipleSelections)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           
                           text_value =  (axis2_char_t*)((_multipleChoiceQuestion_type0->property_allowMultipleSelections)?axutil_strdup(env, "true"):axutil_strdup(env, "false"));
                           text_attri = axiom_attribute_create (env, "allowMultipleSelections", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                           AXIS2_FREE(env->allocator, text_value);
                        
                      }
                       
                  }
                

            return parent;
        }


        

            /**
             * Getter for label by  Property Number 1
             */
            adb_label_type0_t* AXIS2_CALL
            adb_multipleChoiceQuestion_type0_get_property1(
                adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                const axutil_env_t *env)
            {
                return adb_multipleChoiceQuestion_type0_get_label(_multipleChoiceQuestion_type0,
                                             env);
            }

            /**
             * getter for label.
             */
            adb_label_type0_t* AXIS2_CALL
            adb_multipleChoiceQuestion_type0_get_label(
                    adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _multipleChoiceQuestion_type0, NULL);
                  

                return _multipleChoiceQuestion_type0->property_label;
             }

            /**
             * setter for label
             */
            axis2_status_t AXIS2_CALL
            adb_multipleChoiceQuestion_type0_set_label(
                    adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                    const axutil_env_t *env,
                    adb_label_type0_t*  arg_label)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _multipleChoiceQuestion_type0, AXIS2_FAILURE);
                
                if(_multipleChoiceQuestion_type0->is_valid_label &&
                        arg_label == _multipleChoiceQuestion_type0->property_label)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_label)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "label is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_multipleChoiceQuestion_type0_reset_label(_multipleChoiceQuestion_type0, env);

                
                if(NULL == arg_label)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _multipleChoiceQuestion_type0->property_label = arg_label;
                        _multipleChoiceQuestion_type0->is_valid_label = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for label
            */
           axis2_status_t AXIS2_CALL
           adb_multipleChoiceQuestion_type0_reset_label(
                   adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _multipleChoiceQuestion_type0, AXIS2_FAILURE);
               

               
            
                
                if(_multipleChoiceQuestion_type0->property_label != NULL)
                {
                   
                   adb_label_type0_free(_multipleChoiceQuestion_type0->property_label, env);
                     _multipleChoiceQuestion_type0->property_label = NULL;
                }
            
                
                
                _multipleChoiceQuestion_type0->is_valid_label = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether label is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_multipleChoiceQuestion_type0_is_label_nil(
                   adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _multipleChoiceQuestion_type0, AXIS2_TRUE);
               
               return !_multipleChoiceQuestion_type0->is_valid_label;
           }

           /**
            * Set label to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_multipleChoiceQuestion_type0_set_label_nil(
                   adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                   const axutil_env_t *env)
           {
               return adb_multipleChoiceQuestion_type0_reset_label(_multipleChoiceQuestion_type0, env);
           }

           

            /**
             * Getter for choices by  Property Number 2
             */
            adb_choices_type0_t* AXIS2_CALL
            adb_multipleChoiceQuestion_type0_get_property2(
                adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                const axutil_env_t *env)
            {
                return adb_multipleChoiceQuestion_type0_get_choices(_multipleChoiceQuestion_type0,
                                             env);
            }

            /**
             * getter for choices.
             */
            adb_choices_type0_t* AXIS2_CALL
            adb_multipleChoiceQuestion_type0_get_choices(
                    adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _multipleChoiceQuestion_type0, NULL);
                  

                return _multipleChoiceQuestion_type0->property_choices;
             }

            /**
             * setter for choices
             */
            axis2_status_t AXIS2_CALL
            adb_multipleChoiceQuestion_type0_set_choices(
                    adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                    const axutil_env_t *env,
                    adb_choices_type0_t*  arg_choices)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _multipleChoiceQuestion_type0, AXIS2_FAILURE);
                
                if(_multipleChoiceQuestion_type0->is_valid_choices &&
                        arg_choices == _multipleChoiceQuestion_type0->property_choices)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_choices)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "choices is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_multipleChoiceQuestion_type0_reset_choices(_multipleChoiceQuestion_type0, env);

                
                if(NULL == arg_choices)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _multipleChoiceQuestion_type0->property_choices = arg_choices;
                        _multipleChoiceQuestion_type0->is_valid_choices = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for choices
            */
           axis2_status_t AXIS2_CALL
           adb_multipleChoiceQuestion_type0_reset_choices(
                   adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _multipleChoiceQuestion_type0, AXIS2_FAILURE);
               

               
            
                
                if(_multipleChoiceQuestion_type0->property_choices != NULL)
                {
                   
                   adb_choices_type0_free(_multipleChoiceQuestion_type0->property_choices, env);
                     _multipleChoiceQuestion_type0->property_choices = NULL;
                }
            
                
                
                _multipleChoiceQuestion_type0->is_valid_choices = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether choices is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_multipleChoiceQuestion_type0_is_choices_nil(
                   adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _multipleChoiceQuestion_type0, AXIS2_TRUE);
               
               return !_multipleChoiceQuestion_type0->is_valid_choices;
           }

           /**
            * Set choices to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_multipleChoiceQuestion_type0_set_choices_nil(
                   adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                   const axutil_env_t *env)
           {
               return adb_multipleChoiceQuestion_type0_reset_choices(_multipleChoiceQuestion_type0, env);
           }

           

            /**
             * Getter for id by  Property Number 3
             */
            axis2_char_t* AXIS2_CALL
            adb_multipleChoiceQuestion_type0_get_property3(
                adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                const axutil_env_t *env)
            {
                return adb_multipleChoiceQuestion_type0_get_id(_multipleChoiceQuestion_type0,
                                             env);
            }

            /**
             * getter for id.
             */
            axis2_char_t* AXIS2_CALL
            adb_multipleChoiceQuestion_type0_get_id(
                    adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _multipleChoiceQuestion_type0, NULL);
                  

                return _multipleChoiceQuestion_type0->property_id;
             }

            /**
             * setter for id
             */
            axis2_status_t AXIS2_CALL
            adb_multipleChoiceQuestion_type0_set_id(
                    adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_id)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _multipleChoiceQuestion_type0, AXIS2_FAILURE);
                
                if(_multipleChoiceQuestion_type0->is_valid_id &&
                        arg_id == _multipleChoiceQuestion_type0->property_id)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_id)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "id is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_multipleChoiceQuestion_type0_reset_id(_multipleChoiceQuestion_type0, env);

                
                if(NULL == arg_id)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _multipleChoiceQuestion_type0->property_id = (axis2_char_t *)axutil_strdup(env, arg_id);
                        if(NULL == _multipleChoiceQuestion_type0->property_id)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for id");
                            return AXIS2_FAILURE;
                        }
                        _multipleChoiceQuestion_type0->is_valid_id = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for id
            */
           axis2_status_t AXIS2_CALL
           adb_multipleChoiceQuestion_type0_reset_id(
                   adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _multipleChoiceQuestion_type0, AXIS2_FAILURE);
               

               
            
                
                if(_multipleChoiceQuestion_type0->property_id != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _multipleChoiceQuestion_type0->property_id);
                     _multipleChoiceQuestion_type0->property_id = NULL;
                }
            
                
                
                _multipleChoiceQuestion_type0->is_valid_id = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether id is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_multipleChoiceQuestion_type0_is_id_nil(
                   adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _multipleChoiceQuestion_type0, AXIS2_TRUE);
               
               return !_multipleChoiceQuestion_type0->is_valid_id;
           }

           /**
            * Set id to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_multipleChoiceQuestion_type0_set_id_nil(
                   adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                   const axutil_env_t *env)
           {
               return adb_multipleChoiceQuestion_type0_reset_id(_multipleChoiceQuestion_type0, env);
           }

           

            /**
             * Getter for allowMultipleSelections by  Property Number 4
             */
            axis2_bool_t AXIS2_CALL
            adb_multipleChoiceQuestion_type0_get_property4(
                adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                const axutil_env_t *env)
            {
                return adb_multipleChoiceQuestion_type0_get_allowMultipleSelections(_multipleChoiceQuestion_type0,
                                             env);
            }

            /**
             * getter for allowMultipleSelections.
             */
            axis2_bool_t AXIS2_CALL
            adb_multipleChoiceQuestion_type0_get_allowMultipleSelections(
                    adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (axis2_bool_t)0);
                    AXIS2_PARAM_CHECK(env->error, _multipleChoiceQuestion_type0, (axis2_bool_t)0);
                  

                return _multipleChoiceQuestion_type0->property_allowMultipleSelections;
             }

            /**
             * setter for allowMultipleSelections
             */
            axis2_status_t AXIS2_CALL
            adb_multipleChoiceQuestion_type0_set_allowMultipleSelections(
                    adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                    const axutil_env_t *env,
                    axis2_bool_t  arg_allowMultipleSelections)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _multipleChoiceQuestion_type0, AXIS2_FAILURE);
                
                if(_multipleChoiceQuestion_type0->is_valid_allowMultipleSelections &&
                        arg_allowMultipleSelections == _multipleChoiceQuestion_type0->property_allowMultipleSelections)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_multipleChoiceQuestion_type0_reset_allowMultipleSelections(_multipleChoiceQuestion_type0, env);

                _multipleChoiceQuestion_type0->property_allowMultipleSelections = arg_allowMultipleSelections;
                        _multipleChoiceQuestion_type0->is_valid_allowMultipleSelections = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for allowMultipleSelections
            */
           axis2_status_t AXIS2_CALL
           adb_multipleChoiceQuestion_type0_reset_allowMultipleSelections(
                   adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _multipleChoiceQuestion_type0, AXIS2_FAILURE);
               

               _multipleChoiceQuestion_type0->is_valid_allowMultipleSelections = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether allowMultipleSelections is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_multipleChoiceQuestion_type0_is_allowMultipleSelections_nil(
                   adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _multipleChoiceQuestion_type0, AXIS2_TRUE);
               
               return !_multipleChoiceQuestion_type0->is_valid_allowMultipleSelections;
           }

           /**
            * Set allowMultipleSelections to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_multipleChoiceQuestion_type0_set_allowMultipleSelections_nil(
                   adb_multipleChoiceQuestion_type0_t* _multipleChoiceQuestion_type0,
                   const axutil_env_t *env)
           {
               return adb_multipleChoiceQuestion_type0_reset_allowMultipleSelections(_multipleChoiceQuestion_type0, env);
           }

           

