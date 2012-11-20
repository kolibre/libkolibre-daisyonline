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
         * adb_lang_type0.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_lang_type0.h"
        
               /*
                * implmentation of the lang_type0|http://www.w3.org/XML/1998/namespace element
                */
           


        struct adb_lang_type0
        {
            axis2_char_t *property_TypeName;

            
                axutil_qname_t* qname;
            
                /* for unions we are keeping members in a union */

                union {
                
                    axis2_char_t* _language;
                
                } member_type;
                
                /* here too we keep the choice */
                axis2_char_t *current_value;
            
        };


       /************************* Private Function prototypes ********************************/
        


       /************************* Function Implmentations ********************************/
        adb_lang_type0_t* AXIS2_CALL
        adb_lang_type0_create(
            const axutil_env_t *env)
        {
            adb_lang_type0_t *_lang_type0 = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _lang_type0 = (adb_lang_type0_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_lang_type0_t));

            if(NULL == _lang_type0)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_lang_type0, 0, sizeof(adb_lang_type0_t));

            _lang_type0->property_TypeName = axutil_strdup(env, "adb_lang_type0");
            
                  qname =  axutil_qname_create (env,
                        "lang_type0",
                        "http://www.w3.org/XML/1998/namespace",
                        NULL);
                _lang_type0->qname = qname;
            _lang_type0->current_value = "";
            

            return _lang_type0;
        }

        adb_lang_type0_t* AXIS2_CALL
        adb_lang_type0_create_with_values(
            const axutil_env_t *env)
        {
            adb_lang_type0_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_lang_type0_create(env);

            

            return adb_obj;
        }
      
        
                void* AXIS2_CALL
                adb_lang_type0_free_popping_value(
                        adb_lang_type0_t* _lang_type0,
                        const axutil_env_t *env)
                {
                    adb_lang_type0_free(_lang_type0, env);
                    return NULL;
                }
            

        axis2_status_t AXIS2_CALL
        adb_lang_type0_free(
                adb_lang_type0_t* _lang_type0,
                const axutil_env_t *env)
        {
            
            
            return adb_lang_type0_free_obj(
                _lang_type0,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_lang_type0_free_obj(
                adb_lang_type0_t* _lang_type0,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _lang_type0, AXIS2_FAILURE);

            if (_lang_type0->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _lang_type0->property_TypeName);
            }

            adb_lang_type0_reset_members(_lang_type0, env);
            
              if(_lang_type0->qname)
              {
                  axutil_qname_free (_lang_type0->qname, env);
                  _lang_type0->qname = NULL;
              }
            

            if(_lang_type0)
            {
                AXIS2_FREE(env->allocator, _lang_type0);
                _lang_type0 = NULL;
            }

            return AXIS2_SUCCESS;
        }


        
            axis2_status_t AXIS2_CALL
            adb_lang_type0_deserialize_from_string(
                            adb_lang_type0_t* _lang_type0,
                                            const axutil_env_t *env,
                                            const axis2_char_t *node_value,
                                            axiom_node_t *parent)
            {
              axis2_status_t status = AXIS2_SUCCESS;
            
             
               /*
                * axis2_qname_t *qname = NULL;
                * axiom_attribute_t *the_attri = NULL;
                * 
                * qname = axutil_qname_create(env, "type", "http://www.w3.org/2001/XMLSchema-instance", "xsi");
                * the_attri = axiom_element_get_attribute(current_element, env, qname);
                */
               /* currently thereis a bug in the axiom_element_get_attribute, so we have to go to this bad method */

               axiom_attribute_t *the_attri = NULL;
               axis2_char_t *attrib_text = NULL;
               axutil_hash_t *attribute_hash = NULL;
               void *element = NULL;
               axiom_element_t *current_element = NULL;

               current_element = (axiom_element_t*)axiom_node_get_data_element(parent, env);

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
                        
                        if(strstr((axis2_char_t*)key, "lang|http://www.w3.org/XML/1998/namespace"))
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
                   attrib_text = axiom_element_get_attribute_value_by_name(current_element, env, "type");
               }

               if(attrib_text)
               {
                    /* skipping the namespace prefix */
                    axis2_char_t *temp_attrib = NULL;
                    temp_attrib = strchr(attrib_text, ':');
                    if(temp_attrib)
                    {
                        /* take the string after the ':' character */
                        attrib_text = temp_attrib + 1;
                    }
               }

               if(!attrib_text) {
                    /* nothing is here, reset things */
                    status = adb_lang_type0_reset_members(_lang_type0, env);
               }
                
               else
               {

                status = adb_lang_type0_set_language(_lang_type0,
                                                    env, attrib_text);
                     

               }
             
              return status;
            }
        

        axis2_status_t AXIS2_CALL
        adb_lang_type0_deserialize(
                adb_lang_type0_t* _lang_type0,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_lang_type0_deserialize_obj(
                _lang_type0,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_lang_type0_deserialize_obj(
                adb_lang_type0_t* _lang_type0,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
           
             const axis2_char_t* text_value = NULL;
             axutil_qname_t *qname = NULL;
          
            
            status = AXIS2_FAILURE;
            if(parent)
            {
                axis2_char_t *attrib_text = NULL;
                attrib_text = axiom_element_get_attribute_value_by_name(axiom_node_get_data_element(parent, env), env, "nil");
                if (attrib_text != NULL && !axutil_strcasecmp(attrib_text, "true"))
                {
                  
                   /* but the wsdl says that, this is non nillable */
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element lang_type0");
                    status = AXIS2_FAILURE;
                   
                }
                else
                {
                    axiom_node_t *text_node = NULL;
                    axiom_text_t *text_element = NULL;
                    text_node = axiom_node_get_first_child(parent, env);
                    if (text_node &&
                            axiom_node_get_node_type(text_node, env) == AXIOM_TEXT)
                        text_element = (axiom_text_t*)axiom_node_get_data_element(text_node, env);
                    text_value = "";
                    if(text_element && axiom_text_get_value(text_element, env))
                    {
                        text_value = (axis2_char_t*)axiom_text_get_value(text_element, env);
                    }
                    status = adb_lang_type0_deserialize_from_string(_lang_type0, env, text_value, parent);
                }
            }
            
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_lang_type0_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_lang_type0_declare_parent_namespaces(
                    adb_lang_type0_t* _lang_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
            axis2_char_t* AXIS2_CALL
            adb_lang_type0_serialize_to_string(
                    adb_lang_type0_t* _lang_type0,
                    const axutil_env_t *env, axutil_hash_t *namespaces)
            {
                axis2_char_t *text_value = NULL;
                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                
                
                void *element = NULL;
                if(!_lang_type0->current_value || !axutil_strcmp("",_lang_type0->current_value))
                {
                    text_value = NULL;
                }
                   
                  else if(!axutil_strcmp("language",_lang_type0->current_value))
                  {
                   
                         text_value = (axis2_char_t*)axutil_strdup(env, _lang_type0->member_type._language);
                      
                }
                
                return text_value;
            }
        
        
        axiom_node_t* AXIS2_CALL
        adb_lang_type0_serialize(
                adb_lang_type0_t* _lang_type0,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_lang_type0_serialize_obj(
                    _lang_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_lang_type0_serialize_obj(
                adb_lang_type0_t* _lang_type0,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
         
         axiom_node_t* current_node = NULL;
         int tag_closed = 0;
         axis2_char_t* xsi_prefix = NULL;
         axiom_namespace_t* xsi_ns = NULL;
         axiom_attribute_t* xsi_type_attri = NULL;
         
            axiom_data_source_t *data_source = NULL;
            axutil_stream_t *stream = NULL;
            axis2_char_t *text_value;
             
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            /* here we need to declare the union type in the xsi:type field */
            
            if(axutil_strcmp(_lang_type0->current_value, ""))
            {

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

                

                    if(!axutil_strcmp(_lang_type0->current_value, "language"))
                    {
                        axis2_char_t *ns_prefix = NULL;

                        if(!(ns_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/XMLSchema", AXIS2_HASH_KEY_STRING)))
                        {
                            ns_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                            
                            sprintf(ns_prefix, "q%d", (*next_ns_index)++); 
                            axutil_hash_set(namespaces, "http://www.w3.org/2001/XMLSchema", AXIS2_HASH_KEY_STRING, ns_prefix);

                            if(parent_element)
                            {
                                  axiom_namespace_t *element_ns = NULL;
                                  element_ns = axiom_namespace_create(env, "http://www.w3.org/2001/XMLSchema",
                                                                      ns_prefix);
                                  axiom_element_declare_namespace_assume_param_ownership(parent_element, env, element_ns);
                            }
                        }

                        /* now we will set the xsi:type="ns:type" value */

                       if(!parent_tag_closed && !tag_closed)
                       {
                            text_value = axutil_strcat(env, xsi_prefix, ":type=", ns_prefix, ":", _lang_type0->current_value, NULL);
                            axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));

                            AXIS2_FREE(env->allocator, text_value);
                        }
                        else 
                        {
                            /* otherwise set it to the prarent itself */

                             axiom_namespace_t *ns1 = NULL;
                             axiom_attribute_t *attrib = NULL;
                        
                             ns1 = axiom_namespace_create (env,
                                                         "http://www.w3.org/2001/XMLSchema-instance",
                                                         xsi_prefix);
                        
                             text_value = axutil_strcat(env, ns_prefix, ":", _lang_type0->current_value, NULL);
                             attrib = axiom_attribute_create (env, "type", text_value, ns1);
                             axiom_element_add_attribute (parent_element, env, attrib, parent);
                            
                             AXIS2_FREE(env->allocator, text_value);
                        }
                    }
                
            }
            
               if(!parent_tag_closed && !tag_closed)
               {
                  text_value = ">"; 
                  axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
               }
               
               text_value = adb_lang_type0_serialize_to_string(_lang_type0, env, namespaces);
               if(text_value)
               {
                    axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                    AXIS2_FREE(env->allocator, text_value);
               }
            

            return parent;
        }


        axis2_char_t* AXIS2_CALL
            adb_lang_type0_get_language(
                adb_lang_type0_t* _lang_type0,
                const axutil_env_t *env)
            {
                if(!axutil_strcmp(_lang_type0->current_value, "language"))
                {
                    return _lang_type0->member_type._language;
                }
                return (axis2_char_t*)0;
            }
 
            axis2_status_t AXIS2_CALL
            adb_lang_type0_set_language(
                adb_lang_type0_t* _lang_type0,
                const axutil_env_t *env, 
                axis2_char_t* member_type)
            {
                axis2_status_t status;
                status = adb_lang_type0_reset_members(_lang_type0, env);
               
                if(status == AXIS2_SUCCESS)
                {
                    _lang_type0->member_type._language = axutil_strdup(env, member_type);
                    _lang_type0->current_value = "language";
                }

                return status;
            }

            axis2_bool_t AXIS2_CALL
            adb_lang_type0_is_valid_language(
                adb_lang_type0_t* _lang_type0,
                const axutil_env_t *env)
            {
                return !axutil_strcmp(_lang_type0->current_value, "language");
            }
        

        axis2_status_t AXIS2_CALL
        adb_lang_type0_reset_members(
            adb_lang_type0_t* _lang_type0,
            const axutil_env_t *env)
        {

            if(!axutil_strcmp(_lang_type0->current_value, ""))
            {
                /* do nothing */
            }
            

                else if(!axutil_strcmp(_lang_type0->current_value, "language"))
                {
                    
                            AXIS2_FREE(env->allocator, _lang_type0->member_type._language);
                        
                }
            _lang_type0->current_value = "";
            return AXIS2_SUCCESS;
        }

        axis2_char_t* AXIS2_CALL
        adb_lang_type0_current_member_type(
            adb_lang_type0_t* _lang_type0,
            const axutil_env_t *env)
        {
            return _lang_type0->current_value;
        }
        

