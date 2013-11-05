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
         * adb_ReferenceType.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_ReferenceType.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = ReferenceType
                 * Namespace URI = http://www.w3.org/2000/09/xmldsig#
                 * Namespace Prefix = ns5
                 */
           


        struct adb_ReferenceType
        {
            axis2_char_t *property_TypeName;

            adb_TransformsType_t* property_Transforms;

                
                axis2_bool_t is_valid_Transforms;
            adb_DigestMethodType_t* property_DigestMethod;

                
                axis2_bool_t is_valid_DigestMethod;
            adb_DigestValueType_t* property_DigestValue;

                
                axis2_bool_t is_valid_DigestValue;
            axis2_char_t* property_Id;

                
                axis2_bool_t is_valid_Id;
            axutil_uri_t* property_URI;

                
                axis2_bool_t is_valid_URI;
            axutil_uri_t* property_Type;

                
                axis2_bool_t is_valid_Type;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_ReferenceType_set_Transforms_nil(
                        adb_ReferenceType_t* _ReferenceType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_ReferenceType_set_DigestMethod_nil(
                        adb_ReferenceType_t* _ReferenceType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_ReferenceType_set_DigestValue_nil(
                        adb_ReferenceType_t* _ReferenceType,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_ReferenceType_t* AXIS2_CALL
        adb_ReferenceType_create(
            const axutil_env_t *env)
        {
            adb_ReferenceType_t *_ReferenceType = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _ReferenceType = (adb_ReferenceType_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_ReferenceType_t));

            if(NULL == _ReferenceType)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_ReferenceType, 0, sizeof(adb_ReferenceType_t));

            _ReferenceType->property_TypeName = axutil_strdup(env, "adb_ReferenceType");
            _ReferenceType->property_Transforms  = NULL;
                  _ReferenceType->is_valid_Transforms  = AXIS2_FALSE;
            _ReferenceType->property_DigestMethod  = NULL;
                  _ReferenceType->is_valid_DigestMethod  = AXIS2_FALSE;
            _ReferenceType->property_DigestValue  = NULL;
                  _ReferenceType->is_valid_DigestValue  = AXIS2_FALSE;
            _ReferenceType->property_Id  = NULL;
                  _ReferenceType->is_valid_Id  = AXIS2_FALSE;
            _ReferenceType->property_URI  = NULL;
                  _ReferenceType->is_valid_URI  = AXIS2_FALSE;
            _ReferenceType->property_Type  = NULL;
                  _ReferenceType->is_valid_Type  = AXIS2_FALSE;
            

            return _ReferenceType;
        }

        adb_ReferenceType_t* AXIS2_CALL
        adb_ReferenceType_create_with_values(
            const axutil_env_t *env,
                adb_TransformsType_t* _Transforms,
                adb_DigestMethodType_t* _DigestMethod,
                adb_DigestValueType_t* _DigestValue,
                axis2_char_t* _Id,
                axutil_uri_t* _URI,
                axutil_uri_t* _Type)
        {
            adb_ReferenceType_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_ReferenceType_create(env);

            
              status = adb_ReferenceType_set_Transforms(
                                     adb_obj,
                                     env,
                                     _Transforms);
              if(status == AXIS2_FAILURE) {
                  adb_ReferenceType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_ReferenceType_set_DigestMethod(
                                     adb_obj,
                                     env,
                                     _DigestMethod);
              if(status == AXIS2_FAILURE) {
                  adb_ReferenceType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_ReferenceType_set_DigestValue(
                                     adb_obj,
                                     env,
                                     _DigestValue);
              if(status == AXIS2_FAILURE) {
                  adb_ReferenceType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_ReferenceType_set_Id(
                                     adb_obj,
                                     env,
                                     _Id);
              if(status == AXIS2_FAILURE) {
                  adb_ReferenceType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_ReferenceType_set_URI(
                                     adb_obj,
                                     env,
                                     _URI);
              if(status == AXIS2_FAILURE) {
                  adb_ReferenceType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_ReferenceType_set_Type(
                                     adb_obj,
                                     env,
                                     _Type);
              if(status == AXIS2_FAILURE) {
                  adb_ReferenceType_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        adb_TransformsType_t* AXIS2_CALL
                adb_ReferenceType_free_popping_value(
                        adb_ReferenceType_t* _ReferenceType,
                        const axutil_env_t *env)
                {
                    adb_TransformsType_t* value;

                    
                    
                    value = _ReferenceType->property_Transforms;

                    _ReferenceType->property_Transforms = (adb_TransformsType_t*)NULL;
                    adb_ReferenceType_free(_ReferenceType, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_ReferenceType_free(
                adb_ReferenceType_t* _ReferenceType,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _ReferenceType,
                env,
                "adb_ReferenceType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_ReferenceType_free_obj(
                adb_ReferenceType_t* _ReferenceType,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _ReferenceType, AXIS2_FAILURE);

            if (_ReferenceType->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _ReferenceType->property_TypeName);
            }

            adb_ReferenceType_reset_Transforms(_ReferenceType, env);
            adb_ReferenceType_reset_DigestMethod(_ReferenceType, env);
            adb_ReferenceType_reset_DigestValue(_ReferenceType, env);
            adb_ReferenceType_reset_Id(_ReferenceType, env);
            adb_ReferenceType_reset_URI(_ReferenceType, env);
            adb_ReferenceType_reset_Type(_ReferenceType, env);
            

            if(_ReferenceType)
            {
                AXIS2_FREE(env->allocator, _ReferenceType);
                _ReferenceType = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_ReferenceType_deserialize(
                adb_ReferenceType_t* _ReferenceType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _ReferenceType,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_ReferenceType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_ReferenceType_deserialize_obj(
                adb_ReferenceType_t* _ReferenceType,
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
            AXIS2_PARAM_CHECK(env->error, _ReferenceType, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for ReferenceType : "
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
                                   
                                 element_qname = axutil_qname_create(env, "Transforms", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

                           if (adb_TransformsType_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_TransformsType");

                                      status =  adb_TransformsType_deserialize((adb_TransformsType_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element Transforms");
                                      }
                                      else
                                      {
                                          status = adb_ReferenceType_set_Transforms(_ReferenceType, env,
                                                                   (adb_TransformsType_t*)element);
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
                 

                     
                     /*
                      * building DigestMethod element
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
                                 
                                 element_qname = axutil_qname_create(env, "DigestMethod", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

                           if (adb_DigestMethodType_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_DigestMethodType");

                                      status =  adb_DigestMethodType_deserialize((adb_DigestMethodType_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element DigestMethod");
                                      }
                                      else
                                      {
                                          status = adb_ReferenceType_set_DigestMethod(_ReferenceType, env,
                                                                   (adb_DigestMethodType_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for DigestMethod ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element DigestMethod missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building DigestValue element
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
                                 
                                 element_qname = axutil_qname_create(env, "DigestValue", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

                           if (adb_DigestValueType_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_DigestValueType");

                                      status =  adb_DigestValueType_deserialize((adb_DigestValueType_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element DigestValue");
                                      }
                                      else
                                      {
                                          status = adb_ReferenceType_set_DigestValue(_ReferenceType, env,
                                                                   (adb_DigestValueType_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for DigestValue ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element DigestValue missing");
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "Id"))
                             
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
                    /* this is hoping that attribute is stored in "Id", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "Id");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_ReferenceType_set_Id(_ReferenceType,
                                                          env, attrib_text);
                        
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
                      
                      adb_ReferenceType_set_URI(_ReferenceType,
                                                          env, axutil_uri_parse_string(env, attrib_text));
                        
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
                           
                           
                               if(!strcmp((axis2_char_t*)key, "Type"))
                             
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
                    /* this is hoping that attribute is stored in "Type", this happnes when name is in default namespace */
                    attrib_text = axiom_element_get_attribute_value_by_name(parent_element, env, "Type");
                  }

                  if(attrib_text != NULL)
                  {
                      
                      adb_ReferenceType_set_Type(_ReferenceType,
                                                          env, axutil_uri_parse_string(env, attrib_text));
                        
                    }
                  
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_ReferenceType_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_ReferenceType_declare_parent_namespaces(
                    adb_ReferenceType_t* _ReferenceType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_ReferenceType_serialize(
                adb_ReferenceType_t* _ReferenceType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_ReferenceType == NULL)
            {
                return adb_ReferenceType_serialize_obj(
                    _ReferenceType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _ReferenceType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_ReferenceType");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_ReferenceType_serialize_obj(
                adb_ReferenceType_t* _ReferenceType,
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
                    
                    axis2_char_t text_value_3[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t *text_value_4;
                    axis2_char_t *text_value_4_temp;
                    
                    axis2_char_t *text_value_5;
                    axis2_char_t *text_value_5_temp;
                    
                    axis2_char_t *text_value_6;
                    axis2_char_t *text_value_6_temp;
                    
                axis2_char_t *text_value = NULL;
             
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _ReferenceType, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
                if(_ReferenceType->is_valid_Id)
                {
                
                        p_prefix = NULL;
                      
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(_ReferenceType->property_Id) + 
                                                                axutil_strlen("Id")));
                           sprintf(text_value, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "Id", _ReferenceType->property_Id);
                           axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                           AXIS2_FREE(env-> allocator, text_value);
                        
                   }
                   
                if(_ReferenceType->is_valid_URI)
                {
                
                        p_prefix = NULL;
                      
                           text_value = axutil_uri_to_string(_ReferenceType->property_URI, env, AXIS2_URI_UNP_OMITUSERINFO);
                           string_to_stream = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) *
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(text_value) + 
                                                             axutil_strlen("URI")));
                           sprintf(string_to_stream, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "URI",  text_value);
                           axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
                           AXIS2_FREE(env-> allocator, string_to_stream);
                        
                   }
                   
                if(_ReferenceType->is_valid_Type)
                {
                
                        p_prefix = NULL;
                      
                           text_value = axutil_uri_to_string(_ReferenceType->property_Type, env, AXIS2_URI_UNP_OMITUSERINFO);
                           string_to_stream = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) *
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(text_value) + 
                                                             axutil_strlen("Type")));
                           sprintf(string_to_stream, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "Type",  text_value);
                           axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
                           AXIS2_FREE(env-> allocator, string_to_stream);
                        
                   }
                   
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
                      

                   if (!_ReferenceType->is_valid_Transforms)
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
                     
                            if(!adb_TransformsType_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_TransformsType_serialize(_ReferenceType->property_Transforms, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_TransformsType_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_TransformsType_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
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
                      

                   if (!_ReferenceType->is_valid_DigestMethod)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property DigestMethod");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("DigestMethod"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("DigestMethod")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing DigestMethod element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sDigestMethod",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sDigestMethod>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_DigestMethodType_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_DigestMethodType_serialize(_ReferenceType->property_DigestMethod, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_DigestMethodType_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_DigestMethodType_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
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
                      

                   if (!_ReferenceType->is_valid_DigestValue)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property DigestValue");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("DigestValue"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("DigestValue")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing DigestValue element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sDigestValue",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sDigestValue>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_DigestValueType_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_DigestValueType_serialize(_ReferenceType->property_DigestValue, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_DigestValueType_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_DigestValueType_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                    
                    if(parent_tag_closed)
                    {
                       if(_ReferenceType->is_valid_Id)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = _ReferenceType->property_Id;
                           text_attri = axiom_attribute_create (env, "Id", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                       
                  }
                
                    
                    if(parent_tag_closed)
                    {
                       if(_ReferenceType->is_valid_URI)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = axutil_uri_to_string(_ReferenceType->property_URI, env, AXIS2_URI_UNP_OMITUSERINFO);
                           text_attri = axiom_attribute_create (env, "URI", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                       
                  }
                
                    
                    if(parent_tag_closed)
                    {
                       if(_ReferenceType->is_valid_Type)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = axutil_uri_to_string(_ReferenceType->property_Type, env, AXIS2_URI_UNP_OMITUSERINFO);
                           text_attri = axiom_attribute_create (env, "Type", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                       
                  }
                

            return parent;
        }


        

            /**
             * Getter for Transforms by  Property Number 1
             */
            adb_TransformsType_t* AXIS2_CALL
            adb_ReferenceType_get_property1(
                adb_ReferenceType_t* _ReferenceType,
                const axutil_env_t *env)
            {
                return adb_ReferenceType_get_Transforms(_ReferenceType,
                                             env);
            }

            /**
             * getter for Transforms.
             */
            adb_TransformsType_t* AXIS2_CALL
            adb_ReferenceType_get_Transforms(
                    adb_ReferenceType_t* _ReferenceType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _ReferenceType, NULL);
                  

                return _ReferenceType->property_Transforms;
             }

            /**
             * setter for Transforms
             */
            axis2_status_t AXIS2_CALL
            adb_ReferenceType_set_Transforms(
                    adb_ReferenceType_t* _ReferenceType,
                    const axutil_env_t *env,
                    adb_TransformsType_t*  arg_Transforms)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ReferenceType, AXIS2_FAILURE);
                
                if(_ReferenceType->is_valid_Transforms &&
                        arg_Transforms == _ReferenceType->property_Transforms)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_ReferenceType_reset_Transforms(_ReferenceType, env);

                
                if(NULL == arg_Transforms)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _ReferenceType->property_Transforms = arg_Transforms;
                        _ReferenceType->is_valid_Transforms = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for Transforms
            */
           axis2_status_t AXIS2_CALL
           adb_ReferenceType_reset_Transforms(
                   adb_ReferenceType_t* _ReferenceType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _ReferenceType, AXIS2_FAILURE);
               

               
            
                
                if(_ReferenceType->property_Transforms != NULL)
                {
                   
                   adb_TransformsType_free(_ReferenceType->property_Transforms, env);
                     _ReferenceType->property_Transforms = NULL;
                }
            
                
                
                _ReferenceType->is_valid_Transforms = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether Transforms is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_ReferenceType_is_Transforms_nil(
                   adb_ReferenceType_t* _ReferenceType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ReferenceType, AXIS2_TRUE);
               
               return !_ReferenceType->is_valid_Transforms;
           }

           /**
            * Set Transforms to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_ReferenceType_set_Transforms_nil(
                   adb_ReferenceType_t* _ReferenceType,
                   const axutil_env_t *env)
           {
               return adb_ReferenceType_reset_Transforms(_ReferenceType, env);
           }

           

            /**
             * Getter for DigestMethod by  Property Number 2
             */
            adb_DigestMethodType_t* AXIS2_CALL
            adb_ReferenceType_get_property2(
                adb_ReferenceType_t* _ReferenceType,
                const axutil_env_t *env)
            {
                return adb_ReferenceType_get_DigestMethod(_ReferenceType,
                                             env);
            }

            /**
             * getter for DigestMethod.
             */
            adb_DigestMethodType_t* AXIS2_CALL
            adb_ReferenceType_get_DigestMethod(
                    adb_ReferenceType_t* _ReferenceType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _ReferenceType, NULL);
                  

                return _ReferenceType->property_DigestMethod;
             }

            /**
             * setter for DigestMethod
             */
            axis2_status_t AXIS2_CALL
            adb_ReferenceType_set_DigestMethod(
                    adb_ReferenceType_t* _ReferenceType,
                    const axutil_env_t *env,
                    adb_DigestMethodType_t*  arg_DigestMethod)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ReferenceType, AXIS2_FAILURE);
                
                if(_ReferenceType->is_valid_DigestMethod &&
                        arg_DigestMethod == _ReferenceType->property_DigestMethod)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_DigestMethod)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "DigestMethod is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_ReferenceType_reset_DigestMethod(_ReferenceType, env);

                
                if(NULL == arg_DigestMethod)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _ReferenceType->property_DigestMethod = arg_DigestMethod;
                        _ReferenceType->is_valid_DigestMethod = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for DigestMethod
            */
           axis2_status_t AXIS2_CALL
           adb_ReferenceType_reset_DigestMethod(
                   adb_ReferenceType_t* _ReferenceType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _ReferenceType, AXIS2_FAILURE);
               

               
            
                
                if(_ReferenceType->property_DigestMethod != NULL)
                {
                   
                   adb_DigestMethodType_free(_ReferenceType->property_DigestMethod, env);
                     _ReferenceType->property_DigestMethod = NULL;
                }
            
                
                
                _ReferenceType->is_valid_DigestMethod = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether DigestMethod is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_ReferenceType_is_DigestMethod_nil(
                   adb_ReferenceType_t* _ReferenceType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ReferenceType, AXIS2_TRUE);
               
               return !_ReferenceType->is_valid_DigestMethod;
           }

           /**
            * Set DigestMethod to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_ReferenceType_set_DigestMethod_nil(
                   adb_ReferenceType_t* _ReferenceType,
                   const axutil_env_t *env)
           {
               return adb_ReferenceType_reset_DigestMethod(_ReferenceType, env);
           }

           

            /**
             * Getter for DigestValue by  Property Number 3
             */
            adb_DigestValueType_t* AXIS2_CALL
            adb_ReferenceType_get_property3(
                adb_ReferenceType_t* _ReferenceType,
                const axutil_env_t *env)
            {
                return adb_ReferenceType_get_DigestValue(_ReferenceType,
                                             env);
            }

            /**
             * getter for DigestValue.
             */
            adb_DigestValueType_t* AXIS2_CALL
            adb_ReferenceType_get_DigestValue(
                    adb_ReferenceType_t* _ReferenceType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _ReferenceType, NULL);
                  

                return _ReferenceType->property_DigestValue;
             }

            /**
             * setter for DigestValue
             */
            axis2_status_t AXIS2_CALL
            adb_ReferenceType_set_DigestValue(
                    adb_ReferenceType_t* _ReferenceType,
                    const axutil_env_t *env,
                    adb_DigestValueType_t*  arg_DigestValue)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ReferenceType, AXIS2_FAILURE);
                
                if(_ReferenceType->is_valid_DigestValue &&
                        arg_DigestValue == _ReferenceType->property_DigestValue)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_DigestValue)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "DigestValue is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_ReferenceType_reset_DigestValue(_ReferenceType, env);

                
                if(NULL == arg_DigestValue)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _ReferenceType->property_DigestValue = arg_DigestValue;
                        _ReferenceType->is_valid_DigestValue = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for DigestValue
            */
           axis2_status_t AXIS2_CALL
           adb_ReferenceType_reset_DigestValue(
                   adb_ReferenceType_t* _ReferenceType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _ReferenceType, AXIS2_FAILURE);
               

               
            
                
                if(_ReferenceType->property_DigestValue != NULL)
                {
                   
                   adb_DigestValueType_free(_ReferenceType->property_DigestValue, env);
                     _ReferenceType->property_DigestValue = NULL;
                }
            
                
                
                _ReferenceType->is_valid_DigestValue = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether DigestValue is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_ReferenceType_is_DigestValue_nil(
                   adb_ReferenceType_t* _ReferenceType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ReferenceType, AXIS2_TRUE);
               
               return !_ReferenceType->is_valid_DigestValue;
           }

           /**
            * Set DigestValue to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_ReferenceType_set_DigestValue_nil(
                   adb_ReferenceType_t* _ReferenceType,
                   const axutil_env_t *env)
           {
               return adb_ReferenceType_reset_DigestValue(_ReferenceType, env);
           }

           

            /**
             * Getter for Id by  Property Number 4
             */
            axis2_char_t* AXIS2_CALL
            adb_ReferenceType_get_property4(
                adb_ReferenceType_t* _ReferenceType,
                const axutil_env_t *env)
            {
                return adb_ReferenceType_get_Id(_ReferenceType,
                                             env);
            }

            /**
             * getter for Id.
             */
            axis2_char_t* AXIS2_CALL
            adb_ReferenceType_get_Id(
                    adb_ReferenceType_t* _ReferenceType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _ReferenceType, NULL);
                  

                return _ReferenceType->property_Id;
             }

            /**
             * setter for Id
             */
            axis2_status_t AXIS2_CALL
            adb_ReferenceType_set_Id(
                    adb_ReferenceType_t* _ReferenceType,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_Id)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ReferenceType, AXIS2_FAILURE);
                
                if(_ReferenceType->is_valid_Id &&
                        arg_Id == _ReferenceType->property_Id)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_Id)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Id is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_ReferenceType_reset_Id(_ReferenceType, env);

                
                if(NULL == arg_Id)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _ReferenceType->property_Id = (axis2_char_t *)axutil_strdup(env, arg_Id);
                        if(NULL == _ReferenceType->property_Id)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for Id");
                            return AXIS2_FAILURE;
                        }
                        _ReferenceType->is_valid_Id = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for Id
            */
           axis2_status_t AXIS2_CALL
           adb_ReferenceType_reset_Id(
                   adb_ReferenceType_t* _ReferenceType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _ReferenceType, AXIS2_FAILURE);
               

               
            
                
                if(_ReferenceType->property_Id != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _ReferenceType->property_Id);
                     _ReferenceType->property_Id = NULL;
                }
            
                
                
                _ReferenceType->is_valid_Id = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether Id is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_ReferenceType_is_Id_nil(
                   adb_ReferenceType_t* _ReferenceType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ReferenceType, AXIS2_TRUE);
               
               return !_ReferenceType->is_valid_Id;
           }

           /**
            * Set Id to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_ReferenceType_set_Id_nil(
                   adb_ReferenceType_t* _ReferenceType,
                   const axutil_env_t *env)
           {
               return adb_ReferenceType_reset_Id(_ReferenceType, env);
           }

           

            /**
             * Getter for URI by  Property Number 5
             */
            axutil_uri_t* AXIS2_CALL
            adb_ReferenceType_get_property5(
                adb_ReferenceType_t* _ReferenceType,
                const axutil_env_t *env)
            {
                return adb_ReferenceType_get_URI(_ReferenceType,
                                             env);
            }

            /**
             * getter for URI.
             */
            axutil_uri_t* AXIS2_CALL
            adb_ReferenceType_get_URI(
                    adb_ReferenceType_t* _ReferenceType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _ReferenceType, NULL);
                  

                return _ReferenceType->property_URI;
             }

            /**
             * setter for URI
             */
            axis2_status_t AXIS2_CALL
            adb_ReferenceType_set_URI(
                    adb_ReferenceType_t* _ReferenceType,
                    const axutil_env_t *env,
                    axutil_uri_t*  arg_URI)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ReferenceType, AXIS2_FAILURE);
                
                if(_ReferenceType->is_valid_URI &&
                        arg_URI == _ReferenceType->property_URI)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_URI)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "URI is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_ReferenceType_reset_URI(_ReferenceType, env);

                
                if(NULL == arg_URI)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _ReferenceType->property_URI = arg_URI;
                        _ReferenceType->is_valid_URI = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for URI
            */
           axis2_status_t AXIS2_CALL
           adb_ReferenceType_reset_URI(
                   adb_ReferenceType_t* _ReferenceType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _ReferenceType, AXIS2_FAILURE);
               

               
            
                
                if(_ReferenceType->property_URI != NULL)
                {
                   
                   
                      axutil_uri_free(_ReferenceType->property_URI, env);
                     _ReferenceType->property_URI = NULL;
                }
            
                
                
                _ReferenceType->is_valid_URI = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether URI is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_ReferenceType_is_URI_nil(
                   adb_ReferenceType_t* _ReferenceType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ReferenceType, AXIS2_TRUE);
               
               return !_ReferenceType->is_valid_URI;
           }

           /**
            * Set URI to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_ReferenceType_set_URI_nil(
                   adb_ReferenceType_t* _ReferenceType,
                   const axutil_env_t *env)
           {
               return adb_ReferenceType_reset_URI(_ReferenceType, env);
           }

           

            /**
             * Getter for Type by  Property Number 6
             */
            axutil_uri_t* AXIS2_CALL
            adb_ReferenceType_get_property6(
                adb_ReferenceType_t* _ReferenceType,
                const axutil_env_t *env)
            {
                return adb_ReferenceType_get_Type(_ReferenceType,
                                             env);
            }

            /**
             * getter for Type.
             */
            axutil_uri_t* AXIS2_CALL
            adb_ReferenceType_get_Type(
                    adb_ReferenceType_t* _ReferenceType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _ReferenceType, NULL);
                  

                return _ReferenceType->property_Type;
             }

            /**
             * setter for Type
             */
            axis2_status_t AXIS2_CALL
            adb_ReferenceType_set_Type(
                    adb_ReferenceType_t* _ReferenceType,
                    const axutil_env_t *env,
                    axutil_uri_t*  arg_Type)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ReferenceType, AXIS2_FAILURE);
                
                if(_ReferenceType->is_valid_Type &&
                        arg_Type == _ReferenceType->property_Type)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_Type)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Type is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_ReferenceType_reset_Type(_ReferenceType, env);

                
                if(NULL == arg_Type)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _ReferenceType->property_Type = arg_Type;
                        _ReferenceType->is_valid_Type = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for Type
            */
           axis2_status_t AXIS2_CALL
           adb_ReferenceType_reset_Type(
                   adb_ReferenceType_t* _ReferenceType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _ReferenceType, AXIS2_FAILURE);
               

               
            
                
                if(_ReferenceType->property_Type != NULL)
                {
                   
                   
                      axutil_uri_free(_ReferenceType->property_Type, env);
                     _ReferenceType->property_Type = NULL;
                }
            
                
                
                _ReferenceType->is_valid_Type = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether Type is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_ReferenceType_is_Type_nil(
                   adb_ReferenceType_t* _ReferenceType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ReferenceType, AXIS2_TRUE);
               
               return !_ReferenceType->is_valid_Type;
           }

           /**
            * Set Type to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_ReferenceType_set_Type_nil(
                   adb_ReferenceType_t* _ReferenceType,
                   const axutil_env_t *env)
           {
               return adb_ReferenceType_reset_Type(_ReferenceType, env);
           }

           

