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
         * adb_SignatureType.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_SignatureType.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = SignatureType
                 * Namespace URI = http://www.w3.org/2000/09/xmldsig#
                 * Namespace Prefix = ns5
                 */
           


        struct adb_SignatureType
        {
            axis2_char_t *property_TypeName;

            adb_SignedInfoType_t* property_SignedInfo;

                
                axis2_bool_t is_valid_SignedInfo;
            adb_SignatureValueType_t* property_SignatureValue;

                
                axis2_bool_t is_valid_SignatureValue;
            adb_KeyInfoType_t* property_KeyInfo;

                
                axis2_bool_t is_valid_KeyInfo;
            axutil_array_list_t* property_Object;

                
                axis2_bool_t is_valid_Object;
            axis2_char_t* property_Id;

                
                axis2_bool_t is_valid_Id;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_SignatureType_set_SignedInfo_nil(
                        adb_SignatureType_t* _SignatureType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_SignatureType_set_SignatureValue_nil(
                        adb_SignatureType_t* _SignatureType,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_SignatureType_set_KeyInfo_nil(
                        adb_SignatureType_t* _SignatureType,
                        const axutil_env_t *env);
            
                 axis2_status_t AXIS2_CALL
                 adb_SignatureType_set_Object_nil_at(
                        adb_SignatureType_t* _SignatureType, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_SignatureType_set_Object_nil(
                        adb_SignatureType_t* _SignatureType,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_SignatureType_t* AXIS2_CALL
        adb_SignatureType_create(
            const axutil_env_t *env)
        {
            adb_SignatureType_t *_SignatureType = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _SignatureType = (adb_SignatureType_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_SignatureType_t));

            if(NULL == _SignatureType)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_SignatureType, 0, sizeof(adb_SignatureType_t));

            _SignatureType->property_TypeName = axutil_strdup(env, "adb_SignatureType");
            _SignatureType->property_SignedInfo  = NULL;
                  _SignatureType->is_valid_SignedInfo  = AXIS2_FALSE;
            _SignatureType->property_SignatureValue  = NULL;
                  _SignatureType->is_valid_SignatureValue  = AXIS2_FALSE;
            _SignatureType->property_KeyInfo  = NULL;
                  _SignatureType->is_valid_KeyInfo  = AXIS2_FALSE;
            _SignatureType->property_Object  = NULL;
                  _SignatureType->is_valid_Object  = AXIS2_FALSE;
            _SignatureType->property_Id  = NULL;
                  _SignatureType->is_valid_Id  = AXIS2_FALSE;
            

            return _SignatureType;
        }

        adb_SignatureType_t* AXIS2_CALL
        adb_SignatureType_create_with_values(
            const axutil_env_t *env,
                adb_SignedInfoType_t* _SignedInfo,
                adb_SignatureValueType_t* _SignatureValue,
                adb_KeyInfoType_t* _KeyInfo,
                axutil_array_list_t* _Object,
                axis2_char_t* _Id)
        {
            adb_SignatureType_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_SignatureType_create(env);

            
              status = adb_SignatureType_set_SignedInfo(
                                     adb_obj,
                                     env,
                                     _SignedInfo);
              if(status == AXIS2_FAILURE) {
                  adb_SignatureType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_SignatureType_set_SignatureValue(
                                     adb_obj,
                                     env,
                                     _SignatureValue);
              if(status == AXIS2_FAILURE) {
                  adb_SignatureType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_SignatureType_set_KeyInfo(
                                     adb_obj,
                                     env,
                                     _KeyInfo);
              if(status == AXIS2_FAILURE) {
                  adb_SignatureType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_SignatureType_set_Object(
                                     adb_obj,
                                     env,
                                     _Object);
              if(status == AXIS2_FAILURE) {
                  adb_SignatureType_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_SignatureType_set_Id(
                                     adb_obj,
                                     env,
                                     _Id);
              if(status == AXIS2_FAILURE) {
                  adb_SignatureType_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        adb_SignedInfoType_t* AXIS2_CALL
                adb_SignatureType_free_popping_value(
                        adb_SignatureType_t* _SignatureType,
                        const axutil_env_t *env)
                {
                    adb_SignedInfoType_t* value;

                    
                    
                    value = _SignatureType->property_SignedInfo;

                    _SignatureType->property_SignedInfo = (adb_SignedInfoType_t*)NULL;
                    adb_SignatureType_free(_SignatureType, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_SignatureType_free(
                adb_SignatureType_t* _SignatureType,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _SignatureType,
                env,
                "adb_SignatureType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_SignatureType_free_obj(
                adb_SignatureType_t* _SignatureType,
                const axutil_env_t *env)
        {
            
                int i = 0;
                int count = 0;
                void *element = NULL;
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _SignatureType, AXIS2_FAILURE);

            if (_SignatureType->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _SignatureType->property_TypeName);
            }

            adb_SignatureType_reset_SignedInfo(_SignatureType, env);
            adb_SignatureType_reset_SignatureValue(_SignatureType, env);
            adb_SignatureType_reset_KeyInfo(_SignatureType, env);
            adb_SignatureType_reset_Object(_SignatureType, env);
            adb_SignatureType_reset_Id(_SignatureType, env);
            

            if(_SignatureType)
            {
                AXIS2_FREE(env->allocator, _SignatureType);
                _SignatureType = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_SignatureType_deserialize(
                adb_SignatureType_t* _SignatureType,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _SignatureType,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_SignatureType");
            
        }

        axis2_status_t AXIS2_CALL
        adb_SignatureType_deserialize_obj(
                adb_SignatureType_t* _SignatureType,
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
            AXIS2_PARAM_CHECK(env->error, _SignatureType, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for SignatureType : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    
                 parent_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                 attribute_hash = axiom_element_get_all_attributes(parent_element, env);
              

                     
                     /*
                      * building SignedInfo element
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
                                   
                                 element_qname = axutil_qname_create(env, "SignedInfo", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

                           if (adb_SignedInfoType_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_SignedInfoType");

                                      status =  adb_SignedInfoType_deserialize((adb_SignedInfoType_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element SignedInfo");
                                      }
                                      else
                                      {
                                          status = adb_SignatureType_set_SignedInfo(_SignatureType, env,
                                                                   (adb_SignedInfoType_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for SignedInfo ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element SignedInfo missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building SignatureValue element
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
                                 
                                 element_qname = axutil_qname_create(env, "SignatureValue", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

                           if (adb_SignatureValueType_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_SignatureValueType");

                                      status =  adb_SignatureValueType_deserialize((adb_SignatureValueType_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element SignatureValue");
                                      }
                                      else
                                      {
                                          status = adb_SignatureType_set_SignatureValue(_SignatureType, env,
                                                                   (adb_SignatureValueType_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for SignatureValue ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element SignatureValue missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building KeyInfo element
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
                                 
                                 element_qname = axutil_qname_create(env, "KeyInfo", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

                           if (adb_KeyInfoType_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_KeyInfoType");

                                      status =  adb_KeyInfoType_deserialize((adb_KeyInfoType_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element KeyInfo");
                                      }
                                      else
                                      {
                                          status = adb_SignatureType_set_KeyInfo(_SignatureType, env,
                                                                   (adb_KeyInfoType_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for KeyInfo ");
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
                     * building Object array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building Object element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "Object", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                  
                               
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

                                  if (adb_ObjectType_is_particle() ||  
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_ObjectType");
                                          
                                          status =  adb_ObjectType_deserialize((adb_ObjectType_t*)element, env,
                                                                                 &current_node, &is_early_node_valid, AXIS2_FALSE);
                                          
                                          if(AXIS2_FAILURE ==  status)
                                          {
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element Object ");
                                          }
                                          else
                                          {
                                            axutil_array_list_add_at(arr_list, env, i, element);
                                          }
                                        
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for Object ");
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
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Object (@minOccurs = '0') only have %d elements", i);
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
                                    status = adb_SignatureType_set_Object(_SignatureType, env,
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
                      
                      adb_SignatureType_set_Id(_SignatureType,
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
          adb_SignatureType_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_SignatureType_declare_parent_namespaces(
                    adb_SignatureType_t* _SignatureType,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_SignatureType_serialize(
                adb_SignatureType_t* _SignatureType,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_SignatureType == NULL)
            {
                return adb_SignatureType_serialize_obj(
                    _SignatureType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _SignatureType, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_SignatureType");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_SignatureType_serialize_obj(
                adb_SignatureType_t* _SignatureType,
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
                    
                    axis2_char_t text_value_2[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_3[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_4[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t *text_value_5;
                    axis2_char_t *text_value_5_temp;
                    
                axis2_char_t *text_value = NULL;
             
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _SignatureType, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
                if(_SignatureType->is_valid_Id)
                {
                
                        p_prefix = NULL;
                      
                           text_value = (axis2_char_t*) AXIS2_MALLOC (env-> allocator, sizeof (axis2_char_t) * 
                                                            (5  + ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT +
                                                             axutil_strlen(_SignatureType->property_Id) + 
                                                                axutil_strlen("Id")));
                           sprintf(text_value, " %s%s%s=\"%s\"", p_prefix?p_prefix:"", (p_prefix && axutil_strcmp(p_prefix, ""))?":":"",
                                                "Id", _SignatureType->property_Id);
                           axutil_stream_write(stream, env, text_value, axutil_strlen(text_value));
                           AXIS2_FREE(env-> allocator, text_value);
                        
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
                      

                   if (!_SignatureType->is_valid_SignedInfo)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property SignedInfo");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("SignedInfo"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("SignedInfo")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing SignedInfo element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sSignedInfo",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sSignedInfo>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_SignedInfoType_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_SignedInfoType_serialize(_SignatureType->property_SignedInfo, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_SignedInfoType_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_SignedInfoType_is_particle())
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
                      

                   if (!_SignatureType->is_valid_SignatureValue)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property SignatureValue");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("SignatureValue"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("SignatureValue")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing SignatureValue element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sSignatureValue",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sSignatureValue>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_SignatureValueType_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_SignatureValueType_serialize(_SignatureType->property_SignatureValue, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_SignatureValueType_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_SignatureValueType_is_particle())
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
                      

                   if (!_SignatureType->is_valid_KeyInfo)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("KeyInfo"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("KeyInfo")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing KeyInfo element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sKeyInfo",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sKeyInfo>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_KeyInfoType_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_KeyInfoType_serialize(_SignatureType->property_KeyInfo, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_KeyInfoType_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_KeyInfoType_is_particle())
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
                      

                   if (!_SignatureType->is_valid_Object)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("Object"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("Object")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing Object array
                      */
                     if (_SignatureType->property_Object != NULL)
                     {
                        

                            sprintf(start_input_str, "<%s%sObject",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%sObject>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_SignatureType->property_Object, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_SignatureType->property_Object, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing Object element
                      */

                    
                     
                            if(!adb_ObjectType_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_ObjectType_serialize((adb_ObjectType_t*)element, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_ObjectType_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_ObjectType_is_particle())
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
                       if(_SignatureType->is_valid_Id)
                       {
                       
                           p_prefix = NULL;
                           ns1 = NULL;
                         
                           text_value = _SignatureType->property_Id;
                           text_attri = axiom_attribute_create (env, "Id", text_value, ns1);
                           axiom_element_add_attribute (parent_element, env, text_attri, parent);
                        
                      }
                       
                  }
                

            return parent;
        }


        

            /**
             * Getter for SignedInfo by  Property Number 1
             */
            adb_SignedInfoType_t* AXIS2_CALL
            adb_SignatureType_get_property1(
                adb_SignatureType_t* _SignatureType,
                const axutil_env_t *env)
            {
                return adb_SignatureType_get_SignedInfo(_SignatureType,
                                             env);
            }

            /**
             * getter for SignedInfo.
             */
            adb_SignedInfoType_t* AXIS2_CALL
            adb_SignatureType_get_SignedInfo(
                    adb_SignatureType_t* _SignatureType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _SignatureType, NULL);
                  

                return _SignatureType->property_SignedInfo;
             }

            /**
             * setter for SignedInfo
             */
            axis2_status_t AXIS2_CALL
            adb_SignatureType_set_SignedInfo(
                    adb_SignatureType_t* _SignatureType,
                    const axutil_env_t *env,
                    adb_SignedInfoType_t*  arg_SignedInfo)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _SignatureType, AXIS2_FAILURE);
                
                if(_SignatureType->is_valid_SignedInfo &&
                        arg_SignedInfo == _SignatureType->property_SignedInfo)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_SignedInfo)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "SignedInfo is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_SignatureType_reset_SignedInfo(_SignatureType, env);

                
                if(NULL == arg_SignedInfo)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _SignatureType->property_SignedInfo = arg_SignedInfo;
                        _SignatureType->is_valid_SignedInfo = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for SignedInfo
            */
           axis2_status_t AXIS2_CALL
           adb_SignatureType_reset_SignedInfo(
                   adb_SignatureType_t* _SignatureType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _SignatureType, AXIS2_FAILURE);
               

               
            
                
                if(_SignatureType->property_SignedInfo != NULL)
                {
                   
                   adb_SignedInfoType_free(_SignatureType->property_SignedInfo, env);
                     _SignatureType->property_SignedInfo = NULL;
                }
            
                
                
                _SignatureType->is_valid_SignedInfo = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether SignedInfo is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_SignatureType_is_SignedInfo_nil(
                   adb_SignatureType_t* _SignatureType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _SignatureType, AXIS2_TRUE);
               
               return !_SignatureType->is_valid_SignedInfo;
           }

           /**
            * Set SignedInfo to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_SignatureType_set_SignedInfo_nil(
                   adb_SignatureType_t* _SignatureType,
                   const axutil_env_t *env)
           {
               return adb_SignatureType_reset_SignedInfo(_SignatureType, env);
           }

           

            /**
             * Getter for SignatureValue by  Property Number 2
             */
            adb_SignatureValueType_t* AXIS2_CALL
            adb_SignatureType_get_property2(
                adb_SignatureType_t* _SignatureType,
                const axutil_env_t *env)
            {
                return adb_SignatureType_get_SignatureValue(_SignatureType,
                                             env);
            }

            /**
             * getter for SignatureValue.
             */
            adb_SignatureValueType_t* AXIS2_CALL
            adb_SignatureType_get_SignatureValue(
                    adb_SignatureType_t* _SignatureType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _SignatureType, NULL);
                  

                return _SignatureType->property_SignatureValue;
             }

            /**
             * setter for SignatureValue
             */
            axis2_status_t AXIS2_CALL
            adb_SignatureType_set_SignatureValue(
                    adb_SignatureType_t* _SignatureType,
                    const axutil_env_t *env,
                    adb_SignatureValueType_t*  arg_SignatureValue)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _SignatureType, AXIS2_FAILURE);
                
                if(_SignatureType->is_valid_SignatureValue &&
                        arg_SignatureValue == _SignatureType->property_SignatureValue)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_SignatureValue)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "SignatureValue is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_SignatureType_reset_SignatureValue(_SignatureType, env);

                
                if(NULL == arg_SignatureValue)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _SignatureType->property_SignatureValue = arg_SignatureValue;
                        _SignatureType->is_valid_SignatureValue = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for SignatureValue
            */
           axis2_status_t AXIS2_CALL
           adb_SignatureType_reset_SignatureValue(
                   adb_SignatureType_t* _SignatureType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _SignatureType, AXIS2_FAILURE);
               

               
            
                
                if(_SignatureType->property_SignatureValue != NULL)
                {
                   
                   adb_SignatureValueType_free(_SignatureType->property_SignatureValue, env);
                     _SignatureType->property_SignatureValue = NULL;
                }
            
                
                
                _SignatureType->is_valid_SignatureValue = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether SignatureValue is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_SignatureType_is_SignatureValue_nil(
                   adb_SignatureType_t* _SignatureType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _SignatureType, AXIS2_TRUE);
               
               return !_SignatureType->is_valid_SignatureValue;
           }

           /**
            * Set SignatureValue to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_SignatureType_set_SignatureValue_nil(
                   adb_SignatureType_t* _SignatureType,
                   const axutil_env_t *env)
           {
               return adb_SignatureType_reset_SignatureValue(_SignatureType, env);
           }

           

            /**
             * Getter for KeyInfo by  Property Number 3
             */
            adb_KeyInfoType_t* AXIS2_CALL
            adb_SignatureType_get_property3(
                adb_SignatureType_t* _SignatureType,
                const axutil_env_t *env)
            {
                return adb_SignatureType_get_KeyInfo(_SignatureType,
                                             env);
            }

            /**
             * getter for KeyInfo.
             */
            adb_KeyInfoType_t* AXIS2_CALL
            adb_SignatureType_get_KeyInfo(
                    adb_SignatureType_t* _SignatureType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _SignatureType, NULL);
                  

                return _SignatureType->property_KeyInfo;
             }

            /**
             * setter for KeyInfo
             */
            axis2_status_t AXIS2_CALL
            adb_SignatureType_set_KeyInfo(
                    adb_SignatureType_t* _SignatureType,
                    const axutil_env_t *env,
                    adb_KeyInfoType_t*  arg_KeyInfo)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _SignatureType, AXIS2_FAILURE);
                
                if(_SignatureType->is_valid_KeyInfo &&
                        arg_KeyInfo == _SignatureType->property_KeyInfo)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_SignatureType_reset_KeyInfo(_SignatureType, env);

                
                if(NULL == arg_KeyInfo)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _SignatureType->property_KeyInfo = arg_KeyInfo;
                        _SignatureType->is_valid_KeyInfo = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for KeyInfo
            */
           axis2_status_t AXIS2_CALL
           adb_SignatureType_reset_KeyInfo(
                   adb_SignatureType_t* _SignatureType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _SignatureType, AXIS2_FAILURE);
               

               
            
                
                if(_SignatureType->property_KeyInfo != NULL)
                {
                   
                   adb_KeyInfoType_free(_SignatureType->property_KeyInfo, env);
                     _SignatureType->property_KeyInfo = NULL;
                }
            
                
                
                _SignatureType->is_valid_KeyInfo = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether KeyInfo is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_SignatureType_is_KeyInfo_nil(
                   adb_SignatureType_t* _SignatureType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _SignatureType, AXIS2_TRUE);
               
               return !_SignatureType->is_valid_KeyInfo;
           }

           /**
            * Set KeyInfo to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_SignatureType_set_KeyInfo_nil(
                   adb_SignatureType_t* _SignatureType,
                   const axutil_env_t *env)
           {
               return adb_SignatureType_reset_KeyInfo(_SignatureType, env);
           }

           

            /**
             * Getter for Object by  Property Number 4
             */
            axutil_array_list_t* AXIS2_CALL
            adb_SignatureType_get_property4(
                adb_SignatureType_t* _SignatureType,
                const axutil_env_t *env)
            {
                return adb_SignatureType_get_Object(_SignatureType,
                                             env);
            }

            /**
             * getter for Object.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_SignatureType_get_Object(
                    adb_SignatureType_t* _SignatureType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _SignatureType, NULL);
                  

                return _SignatureType->property_Object;
             }

            /**
             * setter for Object
             */
            axis2_status_t AXIS2_CALL
            adb_SignatureType_set_Object(
                    adb_SignatureType_t* _SignatureType,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_Object)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _SignatureType, AXIS2_FAILURE);
                
                if(_SignatureType->is_valid_Object &&
                        arg_Object == _SignatureType->property_Object)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_Object, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Object has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_Object, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_SignatureType_reset_Object(_SignatureType, env);

                
                if(NULL == arg_Object)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _SignatureType->property_Object = arg_Object;
                        if(non_nil_exists)
                        {
                            _SignatureType->is_valid_Object = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of Object.
             */
            adb_ObjectType_t* AXIS2_CALL
            adb_SignatureType_get_Object_at(
                    adb_SignatureType_t* _SignatureType,
                    const axutil_env_t *env, int i)
            {
                adb_ObjectType_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _SignatureType, NULL);
                  

                if(_SignatureType->property_Object == NULL)
                {
                    return (adb_ObjectType_t*)0;
                }
                ret_val = (adb_ObjectType_t*)axutil_array_list_get(_SignatureType->property_Object, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of Object.
             */
            axis2_status_t AXIS2_CALL
            adb_SignatureType_set_Object_at(
                    adb_SignatureType_t* _SignatureType,
                    const axutil_env_t *env, int i,
                    adb_ObjectType_t* arg_Object)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _SignatureType, AXIS2_FAILURE);
                
                if( _SignatureType->is_valid_Object &&
                    _SignatureType->property_Object &&
                
                    arg_Object == (adb_ObjectType_t*)axutil_array_list_get(_SignatureType->property_Object, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_Object)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_SignatureType->property_Object != NULL)
                        {
                            size = axutil_array_list_size(_SignatureType->property_Object, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_SignatureType->property_Object, env, i))
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
                  

                if(_SignatureType->property_Object == NULL)
                {
                    _SignatureType->property_Object = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_SignatureType->property_Object, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_ObjectType_free((adb_ObjectType_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _SignatureType->is_valid_Object = AXIS2_FALSE;
                        axutil_array_list_set(_SignatureType->property_Object , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_SignatureType->property_Object , env, i, arg_Object);
                  _SignatureType->is_valid_Object = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to Object.
             */
            axis2_status_t AXIS2_CALL
            adb_SignatureType_add_Object(
                    adb_SignatureType_t* _SignatureType,
                    const axutil_env_t *env,
                    adb_ObjectType_t* arg_Object)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _SignatureType, AXIS2_FAILURE);

                
                    if(NULL == arg_Object)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_SignatureType->property_Object == NULL)
                {
                    _SignatureType->property_Object = axutil_array_list_create(env, 10);
                }
                if(_SignatureType->property_Object == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for Object");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_SignatureType->property_Object , env, arg_Object);
                  _SignatureType->is_valid_Object = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the Object array.
             */
            int AXIS2_CALL
            adb_SignatureType_sizeof_Object(
                    adb_SignatureType_t* _SignatureType,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _SignatureType, -1);
                if(_SignatureType->property_Object == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_SignatureType->property_Object, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_SignatureType_remove_Object_at(
                    adb_SignatureType_t* _SignatureType,
                    const axutil_env_t *env, int i)
            {
                return adb_SignatureType_set_Object_nil_at(_SignatureType, env, i);
            }

            

           /**
            * resetter for Object
            */
           axis2_status_t AXIS2_CALL
           adb_SignatureType_reset_Object(
                   adb_SignatureType_t* _SignatureType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _SignatureType, AXIS2_FAILURE);
               

               
                  if (_SignatureType->property_Object != NULL)
                  {
                      count = axutil_array_list_size(_SignatureType->property_Object, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_SignatureType->property_Object, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   adb_ObjectType_free((adb_ObjectType_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_SignatureType->property_Object, env);
                  }
                _SignatureType->is_valid_Object = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether Object is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_SignatureType_is_Object_nil(
                   adb_SignatureType_t* _SignatureType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _SignatureType, AXIS2_TRUE);
               
               return !_SignatureType->is_valid_Object;
           }

           /**
            * Set Object to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_SignatureType_set_Object_nil(
                   adb_SignatureType_t* _SignatureType,
                   const axutil_env_t *env)
           {
               return adb_SignatureType_reset_Object(_SignatureType, env);
           }

           
           /**
            * Check whether Object is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_SignatureType_is_Object_nil_at(
                   adb_SignatureType_t* _SignatureType,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _SignatureType, AXIS2_TRUE);
               
               return (_SignatureType->is_valid_Object == AXIS2_FALSE ||
                        NULL == _SignatureType->property_Object || 
                        NULL == axutil_array_list_get(_SignatureType->property_Object, env, i));
           }

           /**
            * Set Object to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_SignatureType_set_Object_nil_at(
                   adb_SignatureType_t* _SignatureType,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _SignatureType, AXIS2_FAILURE);

                if(_SignatureType->property_Object == NULL ||
                            _SignatureType->is_valid_Object == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_SignatureType->property_Object, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_SignatureType->property_Object, env, i))
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
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of Object is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_SignatureType->property_Object == NULL)
                {
                    _SignatureType->is_valid_Object = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_SignatureType->property_Object, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_ObjectType_free((adb_ObjectType_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _SignatureType->is_valid_Object = AXIS2_FALSE;
                        axutil_array_list_set(_SignatureType->property_Object , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_SignatureType->property_Object , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for Id by  Property Number 5
             */
            axis2_char_t* AXIS2_CALL
            adb_SignatureType_get_property5(
                adb_SignatureType_t* _SignatureType,
                const axutil_env_t *env)
            {
                return adb_SignatureType_get_Id(_SignatureType,
                                             env);
            }

            /**
             * getter for Id.
             */
            axis2_char_t* AXIS2_CALL
            adb_SignatureType_get_Id(
                    adb_SignatureType_t* _SignatureType,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _SignatureType, NULL);
                  

                return _SignatureType->property_Id;
             }

            /**
             * setter for Id
             */
            axis2_status_t AXIS2_CALL
            adb_SignatureType_set_Id(
                    adb_SignatureType_t* _SignatureType,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_Id)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _SignatureType, AXIS2_FAILURE);
                
                if(_SignatureType->is_valid_Id &&
                        arg_Id == _SignatureType->property_Id)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_Id)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Id is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_SignatureType_reset_Id(_SignatureType, env);

                
                if(NULL == arg_Id)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _SignatureType->property_Id = (axis2_char_t *)axutil_strdup(env, arg_Id);
                        if(NULL == _SignatureType->property_Id)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for Id");
                            return AXIS2_FAILURE;
                        }
                        _SignatureType->is_valid_Id = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for Id
            */
           axis2_status_t AXIS2_CALL
           adb_SignatureType_reset_Id(
                   adb_SignatureType_t* _SignatureType,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _SignatureType, AXIS2_FAILURE);
               

               
            
                
                if(_SignatureType->property_Id != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _SignatureType->property_Id);
                     _SignatureType->property_Id = NULL;
                }
            
                
                
                _SignatureType->is_valid_Id = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether Id is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_SignatureType_is_Id_nil(
                   adb_SignatureType_t* _SignatureType,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _SignatureType, AXIS2_TRUE);
               
               return !_SignatureType->is_valid_Id;
           }

           /**
            * Set Id to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_SignatureType_set_Id_nil(
                   adb_SignatureType_t* _SignatureType,
                   const axutil_env_t *env)
           {
               return adb_SignatureType_reset_Id(_SignatureType, env);
           }

           

