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
         * adb_SimpleLiteral.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_SimpleLiteral.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = SimpleLiteral
                 * Namespace URI = http://purl.org/dc/elements/1.1/
                 * Namespace Prefix = ns2
                 */
           


        struct adb_SimpleLiteral
        {
            axis2_char_t *property_TypeName;

            axiom_node_t* property_extraElement;

                
                axis2_bool_t is_valid_extraElement;
            adb_lang_type0_t* property_lang;

                
                axis2_bool_t is_valid_lang;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_SimpleLiteral_set_extraElement_nil(
                        adb_SimpleLiteral_t* _SimpleLiteral,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_SimpleLiteral_t* AXIS2_CALL
        adb_SimpleLiteral_create(
            const axutil_env_t *env)
        {
            adb_SimpleLiteral_t *_SimpleLiteral = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _SimpleLiteral = (adb_SimpleLiteral_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_SimpleLiteral_t));

            if(NULL == _SimpleLiteral)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_SimpleLiteral, 0, sizeof(adb_SimpleLiteral_t));

            _SimpleLiteral->property_TypeName = axutil_strdup(env, "adb_SimpleLiteral");
            _SimpleLiteral->is_valid_extraElement  = AXIS2_FALSE;
            _SimpleLiteral->property_lang  = NULL;
                  _SimpleLiteral->is_valid_lang  = AXIS2_FALSE;
            

            return _SimpleLiteral;
        }

        adb_SimpleLiteral_t* AXIS2_CALL
        adb_SimpleLiteral_create_with_values(
            const axutil_env_t *env,
                axiom_node_t* _extraElement,
                adb_lang_type0_t* _lang)
        {
            adb_SimpleLiteral_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_SimpleLiteral_create(env);

            
              status = adb_SimpleLiteral_set_extraElement(
                                     adb_obj,
                                     env,
                                     _extraElement);
              if(status == AXIS2_FAILURE) {
                  adb_SimpleLiteral_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_SimpleLiteral_set_lang(
                                     adb_obj,
                                     env,
                                     _lang);
              if(status == AXIS2_FAILURE) {
                  adb_SimpleLiteral_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axiom_node_t* AXIS2_CALL
                adb_SimpleLiteral_free_popping_value(
                        adb_SimpleLiteral_t* _SimpleLiteral,
                        const axutil_env_t *env)
                {
                    axiom_node_t* value;

                    
                    
                    value = _SimpleLiteral->property_extraElement;

                    adb_SimpleLiteral_free(_SimpleLiteral, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_SimpleLiteral_free(
                adb_SimpleLiteral_t* _SimpleLiteral,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _SimpleLiteral,
                env,
                "adb_SimpleLiteral");
            
        }

        axis2_status_t AXIS2_CALL
        adb_SimpleLiteral_free_obj(
                adb_SimpleLiteral_t* _SimpleLiteral,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _SimpleLiteral, AXIS2_FAILURE);

            if (_SimpleLiteral->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _SimpleLiteral->property_TypeName);
            }

            adb_SimpleLiteral_reset_extraElement(_SimpleLiteral, env);
            adb_SimpleLiteral_reset_lang(_SimpleLiteral, env);
            

            if(_SimpleLiteral)
            {
                AXIS2_FREE(env->allocator, _SimpleLiteral);
                _SimpleLiteral = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_SimpleLiteral_deserialize(
                adb_SimpleLiteral_t* _SimpleLiteral,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _SimpleLiteral,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_SimpleLiteral");
            
        }

        axis2_status_t AXIS2_CALL
        adb_SimpleLiteral_deserialize_obj(
                adb_SimpleLiteral_t* _SimpleLiteral,
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
            AXIS2_PARAM_CHECK(env->error, _SimpleLiteral, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for SimpleLiteral : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    
                 parent_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                 attribute_hash = axiom_element_get_all_attributes(parent_element, env);
              

                     
                     /*
                      * building extraElement element
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
                                          status = adb_SimpleLiteral_set_extraElement(_SimpleLiteral, env,
                                                                          current_property_node);
                                        }
                                        
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for extraElement ");
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
                           
                           
                               if(strstr((axis2_char_t*)key, "lang|http://www.w3.org/XML/1998/namespace"))
                             
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
                    /* this is hoping that attribute is stored in "lang", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "lang");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      
                            element =  (void*)adb_lang_type0_create(env);
                            adb_lang_type0_deserialize_from_string((adb_lang_type0_t*)element, env, attrib_text, parent);
                           adb_SimpleLiteral_set_lang(_SimpleLiteral,
                                                          env, (adb_lang_type0_t*)element);
                        
                    }
                  
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_SimpleLiteral_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_SimpleLiteral_declare_parent_namespaces(
                    adb_SimpleLiteral_t* _SimpleLiteral,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_SimpleLiteral_serialize(
                adb_SimpleLiteral_t* _SimpleLiteral,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_SimpleLiteral == NULL)
            {
                return adb_SimpleLiteral_serialize_obj(
                    _SimpleLiteral, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _SimpleLiteral, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_SimpleLiteral");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_SimpleLiteral_serialize_obj(
                adb_SimpleLiteral_t* _SimpleLiteral,
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
            
                    axis2_char_t *text_value_1;
                    axis2_char_t *text_value_1_temp;
                    
                    axis2_char_t text_value_2[ADB_DEFAULT_DIGIT_LIMIT];
                    
                axis2_char_t *text_value = NULL;
             
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _SimpleLiteral, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
                if(_SimpleLiteral->is_valid_lang)
                {
                
                        if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/XML/1998/namespace", AXIS2_HASH_KEY_STRING)))
                        {
                            p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                            sprintf(p_prefix, "n%d", (*next_ns_index)++);
                            axutil_hash_set(namespaces, "http://www.w3.org/XML/1998/namespace", AXIS2_HASH_KEY_STRING, p_prefix);
                            axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                                     "http://www.w3.org/XML/1998/namespace",
                                                     p_prefix));
                        }
                      adb_lang_type0_declare_parent_namespaces(_SimpleLiteral->property_lang,
                                                                                      env, parent_element, namespaces, next_ns_index);
                           text_value = adb_lang_type0_serialize_to_string(_SimpleLiteral->property_lang, env, namespaces);
                           string_to_stream = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) *
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(text_value) + 
                                                             axutil_strlen("lang")));
                           sprintf(string_to_stream, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "lang",  text_value);
                           axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
                           AXIS2_FREE(env-> allocator, string_to_stream);
                           AXIS2_FREE(env-> allocator, text_value);
                        
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
                  }
              }
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"SimpleLiteral\"", NULL);
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
                  }
              }
            }
            xsi_ns = axiom_namespace_create (env,
                                 "http://purl.org/dc/elements/1.1/",
                                 xsi_prefix);
            xsi_type_attri = axiom_attribute_create (env, "type", "SimpleLiteral", xsi_ns);
            
            axiom_element_add_attribute (parent_element, env, xsi_type_attri, parent);
        
                       p_prefix = NULL;
                      

                   if (!_SimpleLiteral->is_valid_extraElement)
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
                      * parsing extraElement element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sextraElement>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sextraElement>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                                text_value_1 = axiom_node_to_string(_SimpleLiteral->property_extraElement, env);
                                
                                axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                                
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                    
                    if(parent_tag_closed)
                    {
                       if(_SimpleLiteral->is_valid_lang)
                       {
                       
                           if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/XML/1998/namespace", AXIS2_HASH_KEY_STRING)))
                           {
                               p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                               sprintf(p_prefix, "n%d", (*next_ns_index)++);
                               axutil_hash_set(namespaces, "http://www.w3.org/XML/1998/namespace", AXIS2_HASH_KEY_STRING, p_prefix);
                               
                               axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                                "http://www.w3.org/XML/1998/namespace",
                                                p_prefix));
                           }
                           ns1 = axiom_namespace_create (env,
                                                "http://www.w3.org/XML/1998/namespace",
                                                p_prefix);
                         adb_lang_type0_declare_parent_namespaces(_SimpleLiteral->property_lang,
                                                                                      env, parent_element, namespaces, next_ns_index);
                           text_value = adb_lang_type0_serialize_to_string(_SimpleLiteral->property_lang, env, namespaces);
                           if(text_value)
                           {
                               text_attri = axiom_attribute_create (env, "lang", text_value, ns1);
                               axiom_element_add_attribute (parent_element, env, text_attri, parent);
                               AXIS2_FREE(env-> allocator, text_value);
                           }
                        
                      }
                       
                  }
                

            return parent;
        }


        

            /**
             * Getter for extraElement by  Property Number 1
             */
            axiom_node_t* AXIS2_CALL
            adb_SimpleLiteral_get_property1(
                adb_SimpleLiteral_t* _SimpleLiteral,
                const axutil_env_t *env)
            {
                return adb_SimpleLiteral_get_extraElement(_SimpleLiteral,
                                             env);
            }

            /**
             * getter for extraElement.
             */
            axiom_node_t* AXIS2_CALL
            adb_SimpleLiteral_get_extraElement(
                    adb_SimpleLiteral_t* _SimpleLiteral,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _SimpleLiteral, NULL);
                  

                return _SimpleLiteral->property_extraElement;
             }

            /**
             * setter for extraElement
             */
            axis2_status_t AXIS2_CALL
            adb_SimpleLiteral_set_extraElement(
                    adb_SimpleLiteral_t* _SimpleLiteral,
                    const axutil_env_t *env,
                    axiom_node_t*  arg_extraElement)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _SimpleLiteral, AXIS2_FAILURE);
                
                if(_SimpleLiteral->is_valid_extraElement &&
                        arg_extraElement == _SimpleLiteral->property_extraElement)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_SimpleLiteral_reset_extraElement(_SimpleLiteral, env);

                
                if(NULL == arg_extraElement)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _SimpleLiteral->property_extraElement = arg_extraElement;
                        _SimpleLiteral->is_valid_extraElement = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for extraElement
            */
           axis2_status_t AXIS2_CALL
           adb_SimpleLiteral_reset_extraElement(
                   adb_SimpleLiteral_t* _SimpleLiteral,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _SimpleLiteral, AXIS2_FAILURE);
               

               _SimpleLiteral->is_valid_extraElement = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether extraElement is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_SimpleLiteral_is_extraElement_nil(
                   adb_SimpleLiteral_t* _SimpleLiteral,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _SimpleLiteral, AXIS2_TRUE);
               
               return !_SimpleLiteral->is_valid_extraElement;
           }

           /**
            * Set extraElement to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_SimpleLiteral_set_extraElement_nil(
                   adb_SimpleLiteral_t* _SimpleLiteral,
                   const axutil_env_t *env)
           {
               return adb_SimpleLiteral_reset_extraElement(_SimpleLiteral, env);
           }

           

            /**
             * Getter for lang by  Property Number 2
             */
            adb_lang_type0_t* AXIS2_CALL
            adb_SimpleLiteral_get_property2(
                adb_SimpleLiteral_t* _SimpleLiteral,
                const axutil_env_t *env)
            {
                return adb_SimpleLiteral_get_lang(_SimpleLiteral,
                                             env);
            }

            /**
             * getter for lang.
             */
            adb_lang_type0_t* AXIS2_CALL
            adb_SimpleLiteral_get_lang(
                    adb_SimpleLiteral_t* _SimpleLiteral,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _SimpleLiteral, NULL);
                  

                return _SimpleLiteral->property_lang;
             }

            /**
             * setter for lang
             */
            axis2_status_t AXIS2_CALL
            adb_SimpleLiteral_set_lang(
                    adb_SimpleLiteral_t* _SimpleLiteral,
                    const axutil_env_t *env,
                    adb_lang_type0_t*  arg_lang)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _SimpleLiteral, AXIS2_FAILURE);
                
                if(_SimpleLiteral->is_valid_lang &&
                        arg_lang == _SimpleLiteral->property_lang)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_lang)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "lang is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_SimpleLiteral_reset_lang(_SimpleLiteral, env);

                
                if(NULL == arg_lang)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _SimpleLiteral->property_lang = arg_lang;
                        _SimpleLiteral->is_valid_lang = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for lang
            */
           axis2_status_t AXIS2_CALL
           adb_SimpleLiteral_reset_lang(
                   adb_SimpleLiteral_t* _SimpleLiteral,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _SimpleLiteral, AXIS2_FAILURE);
               

               
            
                
                if(_SimpleLiteral->property_lang != NULL)
                {
                   
                   adb_lang_type0_free(_SimpleLiteral->property_lang, env);
                     _SimpleLiteral->property_lang = NULL;
                }
            
                
                
                _SimpleLiteral->is_valid_lang = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether lang is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_SimpleLiteral_is_lang_nil(
                   adb_SimpleLiteral_t* _SimpleLiteral,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _SimpleLiteral, AXIS2_TRUE);
               
               return !_SimpleLiteral->is_valid_lang;
           }

           /**
            * Set lang to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_SimpleLiteral_set_lang_nil(
                   adb_SimpleLiteral_t* _SimpleLiteral,
                   const axutil_env_t *env)
           {
               return adb_SimpleLiteral_reset_lang(_SimpleLiteral, env);
           }

           

