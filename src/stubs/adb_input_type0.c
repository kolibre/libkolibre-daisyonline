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
         * adb_input_type0.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_input_type0.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = input_type0
                 * Namespace URI = http://www.daisy.org/ns/daisy-online/
                 * Namespace Prefix = ns3
                 */
           


        struct adb_input_type0
        {
            axis2_char_t *property_TypeName;

            adb_type_type0_t* property_type;

                
                axis2_bool_t is_valid_type;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_input_type0_set_type_nil(
                        adb_input_type0_t* _input_type0,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_input_type0_t* AXIS2_CALL
        adb_input_type0_create(
            const axutil_env_t *env)
        {
            adb_input_type0_t *_input_type0 = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _input_type0 = (adb_input_type0_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_input_type0_t));

            if(NULL == _input_type0)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_input_type0, 0, sizeof(adb_input_type0_t));

            _input_type0->property_TypeName = axutil_strdup(env, "adb_input_type0");
            _input_type0->property_type  = NULL;
                  _input_type0->is_valid_type  = AXIS2_FALSE;
            

            return _input_type0;
        }

        adb_input_type0_t* AXIS2_CALL
        adb_input_type0_create_with_values(
            const axutil_env_t *env,
                adb_type_type0_t* _type)
        {
            adb_input_type0_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_input_type0_create(env);

            
              status = adb_input_type0_set_type(
                                     adb_obj,
                                     env,
                                     _type);
              if(status == AXIS2_FAILURE) {
                  adb_input_type0_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        adb_type_type0_t* AXIS2_CALL
                adb_input_type0_free_popping_value(
                        adb_input_type0_t* _input_type0,
                        const axutil_env_t *env)
                {
                    adb_type_type0_t* value;

                    
                    
                    value = _input_type0->property_type;

                    _input_type0->property_type = (adb_type_type0_t*)NULL;
                    adb_input_type0_free(_input_type0, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_input_type0_free(
                adb_input_type0_t* _input_type0,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _input_type0,
                env,
                "adb_input_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_input_type0_free_obj(
                adb_input_type0_t* _input_type0,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _input_type0, AXIS2_FAILURE);

            if (_input_type0->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _input_type0->property_TypeName);
            }

            adb_input_type0_reset_type(_input_type0, env);
            

            if(_input_type0)
            {
                AXIS2_FREE(env->allocator, _input_type0);
                _input_type0 = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_input_type0_deserialize(
                adb_input_type0_t* _input_type0,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _input_type0,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_input_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_input_type0_deserialize_obj(
                adb_input_type0_t* _input_type0,
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
            AXIS2_PARAM_CHECK(env->error, _input_type0, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for input_type0 : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    
                 parent_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                 attribute_hash = axiom_element_get_all_attributes(parent_element, env);
              
                
                
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "type"))
                             
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
                    /* this is hoping that attribute is stored in "type", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "type");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      
                            element =  (void*)adb_type_type0_create(env);
                            adb_type_type0_deserialize_from_string((adb_type_type0_t*)element, env, attrib_text, parent);
                           adb_input_type0_set_type(_input_type0,
                                                          env, (adb_type_type0_t*)element);
                        
                    }
                  
                    else if(!dont_care_minoccurs)
                    {
                        if(element_qname)
                        {
                            axutil_qname_free(element_qname, env);
                        }
                        /* this is not a nillable element*/
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "required attribute type missing");
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
          adb_input_type0_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_input_type0_declare_parent_namespaces(
                    adb_input_type0_t* _input_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_input_type0_serialize(
                adb_input_type0_t* _input_type0,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_input_type0 == NULL)
            {
                return adb_input_type0_serialize_obj(
                    _input_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _input_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_input_type0");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_input_type0_serialize_obj(
                adb_input_type0_t* _input_type0,
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
                    
                axis2_char_t *text_value = NULL;
             
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _input_type0, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
                if(_input_type0->is_valid_type)
                {
                
                        p_prefix = NULL;
                      adb_type_type0_declare_parent_namespaces(_input_type0->property_type,
                                                                                      env, parent_element, namespaces, next_ns_index);
                           text_value = adb_type_type0_serialize_to_string(_input_type0->property_type, env, namespaces);
                           string_to_stream = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) *
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(text_value) + 
                                                             axutil_strlen("type")));
                           sprintf(string_to_stream, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "type",  text_value);
                           axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
                           AXIS2_FREE(env-> allocator, string_to_stream);
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
                   else
                   {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute type");
                      return NULL;
                   }
                   
              string_to_stream = ">"; 
              axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
              tag_closed = 1;
            
            }
        
                    
                    if(parent_tag_closed)
                    {
                       if(_input_type0->is_valid_type)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         adb_type_type0_declare_parent_namespaces(_input_type0->property_type,
                                                                                      env, parent_element, namespaces, next_ns_index);
                           text_value = adb_type_type0_serialize_to_string(_input_type0->property_type, env, namespaces);
                           if(text_value)
                           {
                               text_attri = axiom_attribute_create (env, "type", text_value, ns1);
                               axiom_element_add_attribute (parent_element, env, text_attri, parent);
                               AXIS2_FREE(env-> allocator, text_value);
                           }
                        
                      }
                      
                      else
                      {
                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute type");
                         return NULL;
                      }
                       
                  }
                

            return parent;
        }


        

            /**
             * Getter for type by  Property Number 1
             */
            adb_type_type0_t* AXIS2_CALL
            adb_input_type0_get_property1(
                adb_input_type0_t* _input_type0,
                const axutil_env_t *env)
            {
                return adb_input_type0_get_type(_input_type0,
                                             env);
            }

            /**
             * getter for type.
             */
            adb_type_type0_t* AXIS2_CALL
            adb_input_type0_get_type(
                    adb_input_type0_t* _input_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _input_type0, NULL);
                  

                return _input_type0->property_type;
             }

            /**
             * setter for type
             */
            axis2_status_t AXIS2_CALL
            adb_input_type0_set_type(
                    adb_input_type0_t* _input_type0,
                    const axutil_env_t *env,
                    adb_type_type0_t*  arg_type)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _input_type0, AXIS2_FAILURE);
                
                if(_input_type0->is_valid_type &&
                        arg_type == _input_type0->property_type)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_type)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "type is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_input_type0_reset_type(_input_type0, env);

                
                if(NULL == arg_type)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _input_type0->property_type = arg_type;
                        _input_type0->is_valid_type = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for type
            */
           axis2_status_t AXIS2_CALL
           adb_input_type0_reset_type(
                   adb_input_type0_t* _input_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _input_type0, AXIS2_FAILURE);
               

               
            
                
                if(_input_type0->property_type != NULL)
                {
                   
                   adb_type_type0_free(_input_type0->property_type, env);
                     _input_type0->property_type = NULL;
                }
            
                
                
                _input_type0->is_valid_type = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether type is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_input_type0_is_type_nil(
                   adb_input_type0_t* _input_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _input_type0, AXIS2_TRUE);
               
               return !_input_type0->is_valid_type;
           }

           /**
            * Set type to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_input_type0_set_type_nil(
                   adb_input_type0_t* _input_type0,
                   const axutil_env_t *env)
           {
               return adb_input_type0_reset_type(_input_type0, env);
           }

           

