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
         * adb_EncryptionMethodType.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_EncryptionMethodType.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = EncryptionMethodType
                 * Namespace URI = http://www.w3.org/2001/04/xmlenc#
                 * Namespace Prefix = ns6
                 */
           


        struct adb_EncryptionMethodType
        {
            axis2_char_t *property_TypeName;

            adb_KeySizeType_t* property_KeySize;

                
                axis2_bool_t is_valid_KeySize;
            axutil_base64_binary_t* property_OAEPparams;

                
                axis2_bool_t is_valid_OAEPparams;
            axutil_array_list_t* property_extraElement;

                
                axis2_bool_t is_valid_extraElement;
            axutil_uri_t* property_Algorithm;

                
                axis2_bool_t is_valid_Algorithm;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_EncryptionMethodType_set_KeySize_nil(
                        adb_EncryptionMethodType_t* _EncryptionMethodType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_EncryptionMethodType_set_OAEPparams_nil(
                        adb_EncryptionMethodType_t* _EncryptionMethodType,
                        const axutil_env_t *env);
            
                 axis2_status_t AXIS2_CALL
                 adb_EncryptionMethodType_set_extraElement_nil_at(
                        adb_EncryptionMethodType_t* _EncryptionMethodType, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_EncryptionMethodType_set_extraElement_nil(
                        adb_EncryptionMethodType_t* _EncryptionMethodType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_EncryptionMethodType_set_Algorithm_nil(
                        adb_EncryptionMethodType_t* _EncryptionMethodType,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_EncryptionMethodType_t* AXIS2_CALL
        adb_EncryptionMethodType_create(
            const axutil_env_t *env)
        {
            adb_EncryptionMethodType_t *_EncryptionMethodType = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _EncryptionMethodType = (adb_EncryptionMethodType_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_EncryptionMethodType_t));

            if(NULL == _EncryptionMethodType)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_EncryptionMethodType, 0, sizeof(adb_EncryptionMethodType_t));

            _EncryptionMethodType->property_TypeName = axutil_strdup(env, "adb_EncryptionMethodType");
            _EncryptionMethodType->property_KeySize  = NULL;
                  _EncryptionMethodType->is_valid_KeySize  = AXIS2_FALSE;
            _EncryptionMethodType->property_OAEPparams  = NULL;
                  _EncryptionMethodType->is_valid_OAEPparams  = AXIS2_FALSE;
            _EncryptionMethodType->is_valid_extraElement  = AXIS2_FALSE;
            _EncryptionMethodType->property_Algorithm  = NULL;
                  _EncryptionMethodType->is_valid_Algorithm  = AXIS2_FALSE;
            

            return _EncryptionMethodType;
        }

        adb_EncryptionMethodType_t* AXIS2_CALL
        adb_EncryptionMethodType_create_with_values(
            const axutil_env_t *env,
                adb_KeySizeType_t* _KeySize,
                axutil_base64_binary_t* _OAEPparams,
                axutil_array_list_t* _extraElement,
                axutil_uri_t* _Algorithm)
        {
            adb_EncryptionMethodType_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_EncryptionMethodType_create(env);

            
              status = adb_EncryptionMethodType_set_KeySize(
                                     adb_obj,
                                     env,
                                     _KeySize);
              if(status == AXIS2_FAILURE) {
                  adb_EncryptionMethodType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_EncryptionMethodType_set_OAEPparams(
                                     adb_obj,
                                     env,
                                     _OAEPparams);
              if(status == AXIS2_FAILURE) {
                  adb_EncryptionMethodType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_EncryptionMethodType_set_extraElement(
                                     adb_obj,
                                     env,
                                     _extraElement);
              if(status == AXIS2_FAILURE) {
                  adb_EncryptionMethodType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_EncryptionMethodType_set_Algorithm(
                                     adb_obj,
                                     env,
                                     _Algorithm);
              if(status == AXIS2_FAILURE) {
                  adb_EncryptionMethodType_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        adb_KeySizeType_t* AXIS2_CALL
                adb_EncryptionMethodType_free_popping_value(
                        adb_EncryptionMethodType_t* _EncryptionMethodType,
                        const axutil_env_t *env)
                {
                    adb_KeySizeType_t* value;

                    
                    
                    value = _EncryptionMethodType->property_KeySize;

                    _EncryptionMethodType->property_KeySize = (adb_KeySizeType_t*)NULL;
                    adb_EncryptionMethodType_free(_EncryptionMethodType, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_EncryptionMethodType_free(
                adb_EncryptionMethodType_t* _EncryptionMethodType,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _EncryptionMethodType,
                env,
                "adb_EncryptionMethodType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_EncryptionMethodType_free_obj(
                adb_EncryptionMethodType_t* _EncryptionMethodType,
                const axutil_env_t *env)
        {
            
                int i = 0;
                int count = 0;
                void *element = NULL;
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _EncryptionMethodType, AXIS2_FAILURE);

            if (_EncryptionMethodType->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _EncryptionMethodType->property_TypeName);
            }

            adb_EncryptionMethodType_reset_KeySize(_EncryptionMethodType, env);
            adb_EncryptionMethodType_reset_OAEPparams(_EncryptionMethodType, env);
            adb_EncryptionMethodType_reset_extraElement(_EncryptionMethodType, env);
            adb_EncryptionMethodType_reset_Algorithm(_EncryptionMethodType, env);
            

            if(_EncryptionMethodType)
            {
                AXIS2_FREE(env->allocator, _EncryptionMethodType);
                _EncryptionMethodType = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_EncryptionMethodType_deserialize(
                adb_EncryptionMethodType_t* _EncryptionMethodType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _EncryptionMethodType,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_EncryptionMethodType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_EncryptionMethodType_deserialize_obj(
                adb_EncryptionMethodType_t* _EncryptionMethodType,
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
            AXIS2_PARAM_CHECK(env->error, _EncryptionMethodType, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for EncryptionMethodType : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    
                 parent_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                 attribute_hash = axiom_element_get_all_attributes(parent_element, env);
              

                     
                     /*
                      * building KeySize element
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
                                   
                                 element_qname = axutil_qname_create(env, "KeySize", "http://www.w3.org/2001/04/xmlenc#", NULL);
                                 

                           if (adb_KeySizeType_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_KeySizeType");

                                      status =  adb_KeySizeType_deserialize((adb_KeySizeType_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element KeySize");
                                      }
                                      else
                                      {
                                          status = adb_EncryptionMethodType_set_KeySize(_EncryptionMethodType, env,
                                                                   (adb_KeySizeType_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for KeySize ");
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
                      * building OAEPparams element
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
                                 
                                 element_qname = axutil_qname_create(env, "OAEPparams", "http://www.w3.org/2001/04/xmlenc#", NULL);
                                 

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
                                          element = (void*)axutil_base64_binary_create(env);
                                          status = axutil_base64_binary_set_encoded_binary((axutil_base64_binary_t*)element, env,
                                                                          text_value);
                                          if(AXIS2_FAILURE ==  status)
                                          {
                                              if(element != NULL)
                                              {
                                                 axutil_base64_binary_free((axutil_base64_binary_t*)element, env);
                                              }
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element OAEPparams ");
                                          }
                                          else
                                          {
                                            status = adb_EncryptionMethodType_set_OAEPparams(_EncryptionMethodType, env,
                                                                       (axutil_base64_binary_t*)element);
                                          }
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element OAEPparams");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for OAEPparams ");
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
                     * building extraElement array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building extraElement element
                      */
                     
                     
                     
                            /* 'any' arrays are not handling correctly when there are other elements mixed with the 'any' element. */
                           
                               
                               for (i = 0, sequence_broken = 0, current_node = (is_early_node_valid?axiom_node_get_next_sibling(current_node, env):current_node); !sequence_broken && current_node != NULL;) 
                                             
                               {
                                  if(axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                  {
                                     current_node =axiom_node_get_next_sibling(current_node, env);
                                     is_early_node_valid = AXIS2_FALSE;
                                     continue;
                                  }
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname) || !axutil_strcmp("extraElement", axiom_element_get_localname(current_element, env))))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          text_value = NULL; /* just to avoid warning */
                                          
                                            {
                                              axiom_node_t *current_property_node = current_node;
                                              current_node = axiom_node_get_next_sibling(current_node, env);
                                              axiom_node_detach(current_property_node, env);
                                              axutil_array_list_add_at(arr_list, env, i, (void*)current_property_node);
                                            }
                                            
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for extraElement ");
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
                                    
                               }

                               

                               if(0 == axutil_array_list_size(arr_list,env))
                               {
                                    axutil_array_list_free(arr_list, env);
                               }
                               else
                               {
                                    status = adb_EncryptionMethodType_set_extraElement(_EncryptionMethodType, env,
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "Algorithm"))
                             
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
                    /* this is hoping that attribute is stored in "Algorithm", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "Algorithm");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_EncryptionMethodType_set_Algorithm(_EncryptionMethodType,
                                                          env, axutil_uri_parse_string(env, attrib_text));
                        
                    }
                  
                    else if(!dont_care_minoccurs)
                    {
                        if(element_qname)
                        {
                            axutil_qname_free(element_qname, env);
                        }
                        /* this is not a nillable element*/
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "required attribute Algorithm missing");
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
          adb_EncryptionMethodType_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_EncryptionMethodType_declare_parent_namespaces(
                    adb_EncryptionMethodType_t* _EncryptionMethodType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_EncryptionMethodType_serialize(
                adb_EncryptionMethodType_t* _EncryptionMethodType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_EncryptionMethodType == NULL)
            {
                return adb_EncryptionMethodType_serialize_obj(
                    _EncryptionMethodType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _EncryptionMethodType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_EncryptionMethodType");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_EncryptionMethodType_serialize_obj(
                adb_EncryptionMethodType_t* _EncryptionMethodType,
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
            
               int i = 0;
               int count = 0;
               void *element = NULL;
             
                    axis2_char_t text_value_1[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t *text_value_2;
                    axis2_char_t *text_value_2_temp;
                    
                    axis2_char_t *text_value_3;
                    axis2_char_t *text_value_3_temp;
                    
                    axis2_char_t *text_value_4;
                    axis2_char_t *text_value_4_temp;
                    
                axis2_char_t *text_value = NULL;
             
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _EncryptionMethodType, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
                if(_EncryptionMethodType->is_valid_Algorithm)
                {
                
                        p_prefix = NULL;
                      
                           text_value = axutil_uri_to_string(_EncryptionMethodType->property_Algorithm, env, AXIS2_URI_UNP_OMITUSERINFO);
                           string_to_stream = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) *
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(text_value) + 
                                                             axutil_strlen("Algorithm")));
                           sprintf(string_to_stream, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "Algorithm",  text_value);
                           axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
                           AXIS2_FREE(env-> allocator, string_to_stream);
                        
                   }
                   
                   else
                   {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute Algorithm");
                      return NULL;
                   }
                   
              
 
              if(!(xsi_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING)))
              {
                  /* it is better to stick with the standard prefix */
                  xsi_prefix = (axis2_char_t*)axutil_strdup(env, "xsi");
                  
                  axutil_hash_set(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING, xsi_prefix);

                  if(parent_element)
                  {
                        axiom_namespace_t *element_ns = NULL;
                        element_ns = axiom_namespace_create(env, "http://www.w3.org/2001/XMLSchema-instance",
                                                            xsi_prefix);
                        axiom_element_declare_namespace_assume_param_ownership(parent_element, env, element_ns);
                        if(element_ns)
                        {
                            axiom_namespace_free(element_ns, env);
                        }
                  }
              }
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"EncryptionMethodType\"", NULL);
              axutil_stream_write(stream, env, type_attrib, axutil_strlen(type_attrib));

              AXIS2_FREE(env->allocator, type_attrib);
                
              string_to_stream = ">"; 
              axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
              tag_closed = 1;
            
            }
            else {
              /* if the parent tag closed we would be able to declare the type directly on the parent element */ 
              if(!(xsi_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING)))
              {
                  /* it is better to stick with the standard prefix */
                  xsi_prefix = (axis2_char_t*)axutil_strdup(env, "xsi");
                  
                  axutil_hash_set(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING, xsi_prefix);

                  if(parent_element)
                  {
                        axiom_namespace_t *element_ns = NULL;
                        element_ns = axiom_namespace_create(env, "http://www.w3.org/2001/XMLSchema-instance",
                                                            xsi_prefix);
                        axiom_element_declare_namespace_assume_param_ownership(parent_element, env, element_ns);
                        if(element_ns)
                        {
                            axiom_namespace_free(element_ns, env);
                        }
                  }
              }
            }
            xsi_ns = axiom_namespace_create (env,
                                 "http://www.w3.org/2001/04/xmlenc#",
                                 xsi_prefix);
            xsi_type_attri = axiom_attribute_create (env, "type", "EncryptionMethodType", xsi_ns);
            
            axiom_element_add_attribute (parent_element, env, xsi_type_attri, parent);
        
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/04/xmlenc#", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.w3.org/2001/04/xmlenc#", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.w3.org/2001/04/xmlenc#",
                                            p_prefix));
                       }
                      

                   if (!_EncryptionMethodType->is_valid_KeySize)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("KeySize"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("KeySize")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing KeySize element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sKeySize",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sKeySize>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_KeySizeType_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_KeySizeType_serialize(_EncryptionMethodType->property_KeySize, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_KeySizeType_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_KeySizeType_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/04/xmlenc#", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.w3.org/2001/04/xmlenc#", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.w3.org/2001/04/xmlenc#",
                                            p_prefix));
                       }
                      

                   if (!_EncryptionMethodType->is_valid_OAEPparams)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("OAEPparams"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("OAEPparams")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing OAEPparams element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sOAEPparams>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sOAEPparams>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                          text_value_2 =axutil_base64_binary_get_encoded_binary(_EncryptionMethodType->property_OAEPparams, env);
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_2, axutil_strlen(text_value_2));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       p_prefix = NULL;
                      

                   if (!_EncryptionMethodType->is_valid_extraElement)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("extraElement"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("extraElement")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing extraElement array
                      */
                     if (_EncryptionMethodType->property_extraElement != NULL)
                     {
                        
                            sprintf(start_input_str, "<%s%sextraElement>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%sextraElement>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_EncryptionMethodType->property_extraElement, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_EncryptionMethodType->property_extraElement, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing extraElement element
                      */

                    
                    
                                text_value_3 = axiom_node_to_string((axiom_node_t*)element, env);
                                
                                axutil_stream_write(stream, env, text_value_3, axutil_strlen(text_value_3));
                                
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                    
                    if(parent_tag_closed)
                    {
                       if(_EncryptionMethodType->is_valid_Algorithm)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = axutil_uri_to_string(_EncryptionMethodType->property_Algorithm, env, AXIS2_URI_UNP_OMITUSERINFO);
                           text_attri = axiom_attribute_create (env, "Algorithm", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                      
                      else
                      {
                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute Algorithm");
                         return NULL;
                      }
                       
                  }
                

            return parent;
        }


        

            /**
             * Getter for KeySize by  Property Number 1
             */
            adb_KeySizeType_t* AXIS2_CALL
            adb_EncryptionMethodType_get_property1(
                adb_EncryptionMethodType_t* _EncryptionMethodType,
                const axutil_env_t *env)
            {
                return adb_EncryptionMethodType_get_KeySize(_EncryptionMethodType,
                                             env);
            }

            /**
             * getter for KeySize.
             */
            adb_KeySizeType_t* AXIS2_CALL
            adb_EncryptionMethodType_get_KeySize(
                    adb_EncryptionMethodType_t* _EncryptionMethodType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _EncryptionMethodType, NULL);
                  

                return _EncryptionMethodType->property_KeySize;
             }

            /**
             * setter for KeySize
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptionMethodType_set_KeySize(
                    adb_EncryptionMethodType_t* _EncryptionMethodType,
                    const axutil_env_t *env,
                    adb_KeySizeType_t*  arg_KeySize)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptionMethodType, AXIS2_FAILURE);
                
                if(_EncryptionMethodType->is_valid_KeySize &&
                        arg_KeySize == _EncryptionMethodType->property_KeySize)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_EncryptionMethodType_reset_KeySize(_EncryptionMethodType, env);

                
                if(NULL == arg_KeySize)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _EncryptionMethodType->property_KeySize = arg_KeySize;
                        _EncryptionMethodType->is_valid_KeySize = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for KeySize
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptionMethodType_reset_KeySize(
                   adb_EncryptionMethodType_t* _EncryptionMethodType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _EncryptionMethodType, AXIS2_FAILURE);
               

               
            
                
                if(_EncryptionMethodType->property_KeySize != NULL)
                {
                   
                   adb_KeySizeType_free(_EncryptionMethodType->property_KeySize, env);
                     _EncryptionMethodType->property_KeySize = NULL;
                }
            
                
                
                _EncryptionMethodType->is_valid_KeySize = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether KeySize is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_EncryptionMethodType_is_KeySize_nil(
                   adb_EncryptionMethodType_t* _EncryptionMethodType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _EncryptionMethodType, AXIS2_TRUE);
               
               return !_EncryptionMethodType->is_valid_KeySize;
           }

           /**
            * Set KeySize to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptionMethodType_set_KeySize_nil(
                   adb_EncryptionMethodType_t* _EncryptionMethodType,
                   const axutil_env_t *env)
           {
               return adb_EncryptionMethodType_reset_KeySize(_EncryptionMethodType, env);
           }

           

            /**
             * Getter for OAEPparams by  Property Number 2
             */
            axutil_base64_binary_t* AXIS2_CALL
            adb_EncryptionMethodType_get_property2(
                adb_EncryptionMethodType_t* _EncryptionMethodType,
                const axutil_env_t *env)
            {
                return adb_EncryptionMethodType_get_OAEPparams(_EncryptionMethodType,
                                             env);
            }

            /**
             * getter for OAEPparams.
             */
            axutil_base64_binary_t* AXIS2_CALL
            adb_EncryptionMethodType_get_OAEPparams(
                    adb_EncryptionMethodType_t* _EncryptionMethodType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _EncryptionMethodType, NULL);
                  

                return _EncryptionMethodType->property_OAEPparams;
             }

            /**
             * setter for OAEPparams
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptionMethodType_set_OAEPparams(
                    adb_EncryptionMethodType_t* _EncryptionMethodType,
                    const axutil_env_t *env,
                    axutil_base64_binary_t*  arg_OAEPparams)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptionMethodType, AXIS2_FAILURE);
                
                if(_EncryptionMethodType->is_valid_OAEPparams &&
                        arg_OAEPparams == _EncryptionMethodType->property_OAEPparams)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_EncryptionMethodType_reset_OAEPparams(_EncryptionMethodType, env);

                
                if(NULL == arg_OAEPparams)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _EncryptionMethodType->property_OAEPparams = arg_OAEPparams;
                        _EncryptionMethodType->is_valid_OAEPparams = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for OAEPparams
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptionMethodType_reset_OAEPparams(
                   adb_EncryptionMethodType_t* _EncryptionMethodType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _EncryptionMethodType, AXIS2_FAILURE);
               

               
            
                
                if(_EncryptionMethodType->property_OAEPparams != NULL)
                {
                   
                   
                      axutil_base64_binary_free (_EncryptionMethodType->property_OAEPparams, env);
                     _EncryptionMethodType->property_OAEPparams = NULL;
                }
            
                
                
                _EncryptionMethodType->is_valid_OAEPparams = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether OAEPparams is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_EncryptionMethodType_is_OAEPparams_nil(
                   adb_EncryptionMethodType_t* _EncryptionMethodType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _EncryptionMethodType, AXIS2_TRUE);
               
               return !_EncryptionMethodType->is_valid_OAEPparams;
           }

           /**
            * Set OAEPparams to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptionMethodType_set_OAEPparams_nil(
                   adb_EncryptionMethodType_t* _EncryptionMethodType,
                   const axutil_env_t *env)
           {
               return adb_EncryptionMethodType_reset_OAEPparams(_EncryptionMethodType, env);
           }

           

            /**
             * Getter for extraElement by  Property Number 3
             */
            axutil_array_list_t* AXIS2_CALL
            adb_EncryptionMethodType_get_property3(
                adb_EncryptionMethodType_t* _EncryptionMethodType,
                const axutil_env_t *env)
            {
                return adb_EncryptionMethodType_get_extraElement(_EncryptionMethodType,
                                             env);
            }

            /**
             * getter for extraElement.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_EncryptionMethodType_get_extraElement(
                    adb_EncryptionMethodType_t* _EncryptionMethodType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _EncryptionMethodType, NULL);
                  

                return _EncryptionMethodType->property_extraElement;
             }

            /**
             * setter for extraElement
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptionMethodType_set_extraElement(
                    adb_EncryptionMethodType_t* _EncryptionMethodType,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_extraElement)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptionMethodType, AXIS2_FAILURE);
                
                if(_EncryptionMethodType->is_valid_extraElement &&
                        arg_extraElement == _EncryptionMethodType->property_extraElement)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_extraElement, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "extraElement has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_extraElement, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_EncryptionMethodType_reset_extraElement(_EncryptionMethodType, env);

                
                if(NULL == arg_extraElement)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _EncryptionMethodType->property_extraElement = arg_extraElement;
                        if(non_nil_exists)
                        {
                            _EncryptionMethodType->is_valid_extraElement = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of extraElement.
             */
            axiom_node_t* AXIS2_CALL
            adb_EncryptionMethodType_get_extraElement_at(
                    adb_EncryptionMethodType_t* _EncryptionMethodType,
                    const axutil_env_t *env, int i)
            {
                axiom_node_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _EncryptionMethodType, NULL);
                  

                if(_EncryptionMethodType->property_extraElement == NULL)
                {
                    return (axiom_node_t*)0;
                }
                ret_val = (axiom_node_t*)axutil_array_list_get(_EncryptionMethodType->property_extraElement, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of extraElement.
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptionMethodType_set_extraElement_at(
                    adb_EncryptionMethodType_t* _EncryptionMethodType,
                    const axutil_env_t *env, int i,
                    axiom_node_t* arg_extraElement)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptionMethodType, AXIS2_FAILURE);
                
                if( _EncryptionMethodType->is_valid_extraElement &&
                    _EncryptionMethodType->property_extraElement &&
                
                    arg_extraElement == (axiom_node_t*)axutil_array_list_get(_EncryptionMethodType->property_extraElement, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_extraElement)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_EncryptionMethodType->property_extraElement != NULL)
                        {
                            size = axutil_array_list_size(_EncryptionMethodType->property_extraElement, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_EncryptionMethodType->property_extraElement, env, i))
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
                  

                if(_EncryptionMethodType->property_extraElement == NULL)
                {
                    _EncryptionMethodType->property_extraElement = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_EncryptionMethodType->property_extraElement, env, i);
                if(NULL != element)
                {
                  
                  
                  
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _EncryptionMethodType->is_valid_extraElement = AXIS2_FALSE;
                        axutil_array_list_set(_EncryptionMethodType->property_extraElement , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_EncryptionMethodType->property_extraElement , env, i, arg_extraElement);
                  _EncryptionMethodType->is_valid_extraElement = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to extraElement.
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptionMethodType_add_extraElement(
                    adb_EncryptionMethodType_t* _EncryptionMethodType,
                    const axutil_env_t *env,
                    axiom_node_t* arg_extraElement)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptionMethodType, AXIS2_FAILURE);

                
                    if(NULL == arg_extraElement)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_EncryptionMethodType->property_extraElement == NULL)
                {
                    _EncryptionMethodType->property_extraElement = axutil_array_list_create(env, 10);
                }
                if(_EncryptionMethodType->property_extraElement == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for extraElement");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_EncryptionMethodType->property_extraElement , env, arg_extraElement);
                  _EncryptionMethodType->is_valid_extraElement = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the extraElement array.
             */
            int AXIS2_CALL
            adb_EncryptionMethodType_sizeof_extraElement(
                    adb_EncryptionMethodType_t* _EncryptionMethodType,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _EncryptionMethodType, -1);
                if(_EncryptionMethodType->property_extraElement == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_EncryptionMethodType->property_extraElement, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptionMethodType_remove_extraElement_at(
                    adb_EncryptionMethodType_t* _EncryptionMethodType,
                    const axutil_env_t *env, int i)
            {
                return adb_EncryptionMethodType_set_extraElement_nil_at(_EncryptionMethodType, env, i);
            }

            

           /**
            * resetter for extraElement
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptionMethodType_reset_extraElement(
                   adb_EncryptionMethodType_t* _EncryptionMethodType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _EncryptionMethodType, AXIS2_FAILURE);
               

               
                  if (_EncryptionMethodType->property_extraElement != NULL)
                  {
                      count = axutil_array_list_size(_EncryptionMethodType->property_extraElement, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_EncryptionMethodType->property_extraElement, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_EncryptionMethodType->property_extraElement, env);
                  }
                _EncryptionMethodType->is_valid_extraElement = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether extraElement is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_EncryptionMethodType_is_extraElement_nil(
                   adb_EncryptionMethodType_t* _EncryptionMethodType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _EncryptionMethodType, AXIS2_TRUE);
               
               return !_EncryptionMethodType->is_valid_extraElement;
           }

           /**
            * Set extraElement to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptionMethodType_set_extraElement_nil(
                   adb_EncryptionMethodType_t* _EncryptionMethodType,
                   const axutil_env_t *env)
           {
               return adb_EncryptionMethodType_reset_extraElement(_EncryptionMethodType, env);
           }

           
           /**
            * Check whether extraElement is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_EncryptionMethodType_is_extraElement_nil_at(
                   adb_EncryptionMethodType_t* _EncryptionMethodType,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _EncryptionMethodType, AXIS2_TRUE);
               
               return (_EncryptionMethodType->is_valid_extraElement == AXIS2_FALSE ||
                        NULL == _EncryptionMethodType->property_extraElement || 
                        NULL == axutil_array_list_get(_EncryptionMethodType->property_extraElement, env, i));
           }

           /**
            * Set extraElement to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptionMethodType_set_extraElement_nil_at(
                   adb_EncryptionMethodType_t* _EncryptionMethodType,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptionMethodType, AXIS2_FAILURE);

                if(_EncryptionMethodType->property_extraElement == NULL ||
                            _EncryptionMethodType->is_valid_extraElement == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_EncryptionMethodType->property_extraElement, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_EncryptionMethodType->property_extraElement, env, i))
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
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of extraElement is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_EncryptionMethodType->property_extraElement == NULL)
                {
                    _EncryptionMethodType->is_valid_extraElement = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_EncryptionMethodType->property_extraElement, env, i);
                if(NULL != element)
                {
                  
                  
                  
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _EncryptionMethodType->is_valid_extraElement = AXIS2_FALSE;
                        axutil_array_list_set(_EncryptionMethodType->property_extraElement , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_EncryptionMethodType->property_extraElement , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for Algorithm by  Property Number 4
             */
            axutil_uri_t* AXIS2_CALL
            adb_EncryptionMethodType_get_property4(
                adb_EncryptionMethodType_t* _EncryptionMethodType,
                const axutil_env_t *env)
            {
                return adb_EncryptionMethodType_get_Algorithm(_EncryptionMethodType,
                                             env);
            }

            /**
             * getter for Algorithm.
             */
            axutil_uri_t* AXIS2_CALL
            adb_EncryptionMethodType_get_Algorithm(
                    adb_EncryptionMethodType_t* _EncryptionMethodType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _EncryptionMethodType, NULL);
                  

                return _EncryptionMethodType->property_Algorithm;
             }

            /**
             * setter for Algorithm
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptionMethodType_set_Algorithm(
                    adb_EncryptionMethodType_t* _EncryptionMethodType,
                    const axutil_env_t *env,
                    axutil_uri_t*  arg_Algorithm)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptionMethodType, AXIS2_FAILURE);
                
                if(_EncryptionMethodType->is_valid_Algorithm &&
                        arg_Algorithm == _EncryptionMethodType->property_Algorithm)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_Algorithm)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Algorithm is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_EncryptionMethodType_reset_Algorithm(_EncryptionMethodType, env);

                
                if(NULL == arg_Algorithm)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _EncryptionMethodType->property_Algorithm = arg_Algorithm;
                        _EncryptionMethodType->is_valid_Algorithm = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for Algorithm
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptionMethodType_reset_Algorithm(
                   adb_EncryptionMethodType_t* _EncryptionMethodType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _EncryptionMethodType, AXIS2_FAILURE);
               

               
            
                
                if(_EncryptionMethodType->property_Algorithm != NULL)
                {
                   
                   
                      axutil_uri_free(_EncryptionMethodType->property_Algorithm, env);
                     _EncryptionMethodType->property_Algorithm = NULL;
                }
            
                
                
                _EncryptionMethodType->is_valid_Algorithm = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether Algorithm is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_EncryptionMethodType_is_Algorithm_nil(
                   adb_EncryptionMethodType_t* _EncryptionMethodType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _EncryptionMethodType, AXIS2_TRUE);
               
               return !_EncryptionMethodType->is_valid_Algorithm;
           }

           /**
            * Set Algorithm to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptionMethodType_set_Algorithm_nil(
                   adb_EncryptionMethodType_t* _EncryptionMethodType,
                   const axutil_env_t *env)
           {
               return adb_EncryptionMethodType_reset_Algorithm(_EncryptionMethodType, env);
           }

           

