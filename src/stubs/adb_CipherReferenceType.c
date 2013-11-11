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
         * adb_CipherReferenceType.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_CipherReferenceType.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = CipherReferenceType
                 * Namespace URI = http://www.w3.org/2001/04/xmlenc#
                 * Namespace Prefix = ns6
                 */
           


        struct adb_CipherReferenceType
        {
            axis2_char_t *property_TypeName;

            adb_TransformsTypeE1_t* property_Transforms;

                
                axis2_bool_t is_valid_Transforms;
            axutil_uri_t* property_URI;

                
                axis2_bool_t is_valid_URI;
            
                axis2_char_t *current_choice;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_CipherReferenceType_set_Transforms_nil(
                        adb_CipherReferenceType_t* _CipherReferenceType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_CipherReferenceType_set_URI_nil(
                        adb_CipherReferenceType_t* _CipherReferenceType,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_CipherReferenceType_t* AXIS2_CALL
        adb_CipherReferenceType_create(
            const axutil_env_t *env)
        {
            adb_CipherReferenceType_t *_CipherReferenceType = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _CipherReferenceType = (adb_CipherReferenceType_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_CipherReferenceType_t));

            if(NULL == _CipherReferenceType)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_CipherReferenceType, 0, sizeof(adb_CipherReferenceType_t));

            _CipherReferenceType->property_TypeName = axutil_strdup(env, "adb_CipherReferenceType");
            _CipherReferenceType->property_Transforms  = NULL;
                  _CipherReferenceType->is_valid_Transforms  = AXIS2_FALSE;
            _CipherReferenceType->property_URI  = NULL;
                  _CipherReferenceType->is_valid_URI  = AXIS2_FALSE;
            _CipherReferenceType->current_choice = "";
            

            return _CipherReferenceType;
        }

        adb_CipherReferenceType_t* AXIS2_CALL
        adb_CipherReferenceType_create_with_values(
            const axutil_env_t *env,
                adb_TransformsTypeE1_t* _Transforms,
                axutil_uri_t* _URI)
        {
            adb_CipherReferenceType_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_CipherReferenceType_create(env);

            
              status = adb_CipherReferenceType_set_Transforms(
                                     adb_obj,
                                     env,
                                     _Transforms);
              if(status == AXIS2_FAILURE) {
                  adb_CipherReferenceType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_CipherReferenceType_set_URI(
                                     adb_obj,
                                     env,
                                     _URI);
              if(status == AXIS2_FAILURE) {
                  adb_CipherReferenceType_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        adb_TransformsTypeE1_t* AXIS2_CALL
                adb_CipherReferenceType_free_popping_value(
                        adb_CipherReferenceType_t* _CipherReferenceType,
                        const axutil_env_t *env)
                {
                    adb_TransformsTypeE1_t* value;

                    
                    
                    value = _CipherReferenceType->property_Transforms;

                    _CipherReferenceType->property_Transforms = (adb_TransformsTypeE1_t*)NULL;
                    adb_CipherReferenceType_free(_CipherReferenceType, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_CipherReferenceType_free(
                adb_CipherReferenceType_t* _CipherReferenceType,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _CipherReferenceType,
                env,
                "adb_CipherReferenceType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_CipherReferenceType_free_obj(
                adb_CipherReferenceType_t* _CipherReferenceType,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _CipherReferenceType, AXIS2_FAILURE);

            if (_CipherReferenceType->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _CipherReferenceType->property_TypeName);
            }

            adb_CipherReferenceType_reset_Transforms(_CipherReferenceType, env);
            adb_CipherReferenceType_reset_URI(_CipherReferenceType, env);
            

            if(_CipherReferenceType)
            {
                AXIS2_FREE(env->allocator, _CipherReferenceType);
                _CipherReferenceType = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_CipherReferenceType_deserialize(
                adb_CipherReferenceType_t* _CipherReferenceType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _CipherReferenceType,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_CipherReferenceType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_CipherReferenceType_deserialize_obj(
                adb_CipherReferenceType_t* _CipherReferenceType,
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
            AXIS2_PARAM_CHECK(env->error, _CipherReferenceType, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for CipherReferenceType : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    
                 parent_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                 attribute_hash = axiom_element_get_all_attributes(parent_element, env);
              

                     
                     /*
                      * building Transforms element
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
                                   
                                 element_qname = axutil_qname_create(env, "Transforms", "http://www.w3.org/2001/04/xmlenc#", NULL);
                                 

                           if (adb_TransformsTypeE1_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_TransformsTypeE1");

                                      status =  adb_TransformsTypeE1_deserialize((adb_TransformsTypeE1_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_TRUE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element Transforms");
                                      }
                                      else
                                      {
                                          status = adb_CipherReferenceType_set_Transforms(_CipherReferenceType, env,
                                                                   (adb_TransformsTypeE1_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for Transforms ");
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "URI"))
                             
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
                    /* this is hoping that attribute is stored in "URI", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "URI");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_CipherReferenceType_set_URI(_CipherReferenceType,
                                                          env, axutil_uri_parse_string(env, attrib_text));
                        
                    }
                  
                    else if(!dont_care_minoccurs)
                    {
                        if(element_qname)
                        {
                            axutil_qname_free(element_qname, env);
                        }
                        /* this is not a nillable element*/
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "required attribute URI missing");
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
          adb_CipherReferenceType_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_CipherReferenceType_declare_parent_namespaces(
                    adb_CipherReferenceType_t* _CipherReferenceType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_CipherReferenceType_serialize(
                adb_CipherReferenceType_t* _CipherReferenceType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_CipherReferenceType == NULL)
            {
                return adb_CipherReferenceType_serialize_obj(
                    _CipherReferenceType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _CipherReferenceType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_CipherReferenceType");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_CipherReferenceType_serialize_obj(
                adb_CipherReferenceType_t* _CipherReferenceType,
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
                    
                axis2_char_t *text_value = NULL;
             
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _CipherReferenceType, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
                if(_CipherReferenceType->is_valid_URI)
                {
                
                        p_prefix = NULL;
                      
                           text_value = axutil_uri_to_string(_CipherReferenceType->property_URI, env, AXIS2_URI_UNP_OMITUSERINFO);
                           string_to_stream = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) *
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(text_value) + 
                                                             axutil_strlen("URI")));
                           sprintf(string_to_stream, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "URI",  text_value);
                           axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
                           AXIS2_FREE(env-> allocator, string_to_stream);
                        
                   }
                   
                   else
                   {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute URI");
                      return NULL;
                   }
                   
              string_to_stream = ">"; 
              axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
              tag_closed = 1;
            
            }
        
                if(0 == axutil_strcmp(_CipherReferenceType->current_choice, "http://www.w3.org/2001/04/xmlenc#:Transforms"))
                {
                
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/04/xmlenc#", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.w3.org/2001/04/xmlenc#", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.w3.org/2001/04/xmlenc#",
                                            p_prefix));
                       }
                      

                   if (!_CipherReferenceType->is_valid_Transforms)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("Transforms"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("Transforms")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing Transforms element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sTransforms",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sTransforms>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_TransformsTypeE1_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_TransformsTypeE1_serialize(_CipherReferenceType->property_Transforms, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_TransformsTypeE1_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_TransformsTypeE1_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 
                    
                    if(parent_tag_closed)
                    {
                       if(_CipherReferenceType->is_valid_URI)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = axutil_uri_to_string(_CipherReferenceType->property_URI, env, AXIS2_URI_UNP_OMITUSERINFO);
                           text_attri = axiom_attribute_create (env, "URI", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                      
                      else
                      {
                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-optional attribute URI");
                         return NULL;
                      }
                       
                  }
                

            return parent;
        }


        

            /**
             * Getter for Transforms by  Property Number 1
             */
            adb_TransformsTypeE1_t* AXIS2_CALL
            adb_CipherReferenceType_get_property1(
                adb_CipherReferenceType_t* _CipherReferenceType,
                const axutil_env_t *env)
            {
                return adb_CipherReferenceType_get_Transforms(_CipherReferenceType,
                                             env);
            }

            /**
             * getter for Transforms.
             */
            adb_TransformsTypeE1_t* AXIS2_CALL
            adb_CipherReferenceType_get_Transforms(
                    adb_CipherReferenceType_t* _CipherReferenceType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _CipherReferenceType, NULL);
                  

                return _CipherReferenceType->property_Transforms;
             }

            /**
             * setter for Transforms
             */
            axis2_status_t AXIS2_CALL
            adb_CipherReferenceType_set_Transforms(
                    adb_CipherReferenceType_t* _CipherReferenceType,
                    const axutil_env_t *env,
                    adb_TransformsTypeE1_t*  arg_Transforms)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _CipherReferenceType, AXIS2_FAILURE);
                
                if(_CipherReferenceType->is_valid_Transforms &&
                        arg_Transforms == _CipherReferenceType->property_Transforms)
                {
                    _CipherReferenceType->current_choice = "http://www.w3.org/2001/04/xmlenc#:Transforms";
                    
                    return AXIS2_SUCCESS; 
                }

                adb_CipherReferenceType_reset_Transforms(_CipherReferenceType, env);

                
                if(NULL == arg_Transforms)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _CipherReferenceType->property_Transforms = arg_Transforms;
                        _CipherReferenceType->is_valid_Transforms = AXIS2_TRUE;
                    _CipherReferenceType->current_choice = "http://www.w3.org/2001/04/xmlenc#:Transforms";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for Transforms
            */
           axis2_status_t AXIS2_CALL
           adb_CipherReferenceType_reset_Transforms(
                   adb_CipherReferenceType_t* _CipherReferenceType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _CipherReferenceType, AXIS2_FAILURE);
               

               
            
                
                if(_CipherReferenceType->property_Transforms != NULL)
                {
                   
                   adb_TransformsTypeE1_free(_CipherReferenceType->property_Transforms, env);
                     _CipherReferenceType->property_Transforms = NULL;
                }
            
                
                
                _CipherReferenceType->is_valid_Transforms = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether Transforms is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_CipherReferenceType_is_Transforms_nil(
                   adb_CipherReferenceType_t* _CipherReferenceType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _CipherReferenceType, AXIS2_TRUE);
               
               return !_CipherReferenceType->is_valid_Transforms;
           }

           /**
            * Set Transforms to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_CipherReferenceType_set_Transforms_nil(
                   adb_CipherReferenceType_t* _CipherReferenceType,
                   const axutil_env_t *env)
           {
               return adb_CipherReferenceType_reset_Transforms(_CipherReferenceType, env);
           }

           

            /**
             * Getter for URI by  Property Number 2
             */
            axutil_uri_t* AXIS2_CALL
            adb_CipherReferenceType_get_property2(
                adb_CipherReferenceType_t* _CipherReferenceType,
                const axutil_env_t *env)
            {
                return adb_CipherReferenceType_get_URI(_CipherReferenceType,
                                             env);
            }

            /**
             * getter for URI.
             */
            axutil_uri_t* AXIS2_CALL
            adb_CipherReferenceType_get_URI(
                    adb_CipherReferenceType_t* _CipherReferenceType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _CipherReferenceType, NULL);
                  

                return _CipherReferenceType->property_URI;
             }

            /**
             * setter for URI
             */
            axis2_status_t AXIS2_CALL
            adb_CipherReferenceType_set_URI(
                    adb_CipherReferenceType_t* _CipherReferenceType,
                    const axutil_env_t *env,
                    axutil_uri_t*  arg_URI)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _CipherReferenceType, AXIS2_FAILURE);
                
                if(_CipherReferenceType->is_valid_URI &&
                        arg_URI == _CipherReferenceType->property_URI)
                {
                    _CipherReferenceType->current_choice = ":URI";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_URI)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "URI is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_CipherReferenceType_reset_URI(_CipherReferenceType, env);

                
                if(NULL == arg_URI)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _CipherReferenceType->property_URI = arg_URI;
                        _CipherReferenceType->is_valid_URI = AXIS2_TRUE;
                    _CipherReferenceType->current_choice = ":URI";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for URI
            */
           axis2_status_t AXIS2_CALL
           adb_CipherReferenceType_reset_URI(
                   adb_CipherReferenceType_t* _CipherReferenceType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _CipherReferenceType, AXIS2_FAILURE);
               

               
            
                
                if(_CipherReferenceType->property_URI != NULL)
                {
                   
                   
                      axutil_uri_free(_CipherReferenceType->property_URI, env);
                     _CipherReferenceType->property_URI = NULL;
                }
            
                
                
                _CipherReferenceType->is_valid_URI = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether URI is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_CipherReferenceType_is_URI_nil(
                   adb_CipherReferenceType_t* _CipherReferenceType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _CipherReferenceType, AXIS2_TRUE);
               
               return !_CipherReferenceType->is_valid_URI;
           }

           /**
            * Set URI to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_CipherReferenceType_set_URI_nil(
                   adb_CipherReferenceType_t* _CipherReferenceType,
                   const axutil_env_t *env)
           {
               return adb_CipherReferenceType_reset_URI(_CipherReferenceType, env);
           }

           

