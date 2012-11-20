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
         * adb_readingSystemAttributes.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_readingSystemAttributes.h"
        
               /*
                * implmentation of the readingSystemAttributes|http://www.daisy.org/ns/daisy-online/ element
                */
           


        struct adb_readingSystemAttributes
        {
            axis2_char_t *property_TypeName;

            
                axutil_qname_t* qname;
            axutil_array_list_t* property_readingSystemAttributesChoice_type0;

                
                axis2_bool_t is_valid_readingSystemAttributesChoice_type0;
            axis2_char_t* property_manufacturer;

                
                axis2_bool_t is_valid_manufacturer;
            axis2_char_t* property_model;

                
                axis2_bool_t is_valid_model;
            axis2_char_t* property_serialNumber;

                
                axis2_bool_t is_valid_serialNumber;
            axis2_char_t* property_version;

                
                axis2_bool_t is_valid_version;
            adb_config_type0_t* property_config;

                
                axis2_bool_t is_valid_config;
            
        };


       /************************* Private Function prototypes ********************************/
        
                 axis2_status_t AXIS2_CALL
                 adb_readingSystemAttributes_set_readingSystemAttributesChoice_type0_nil_at(
                        adb_readingSystemAttributes_t* _readingSystemAttributes, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_readingSystemAttributes_set_readingSystemAttributesChoice_type0_nil(
                        adb_readingSystemAttributes_t* _readingSystemAttributes,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_readingSystemAttributes_set_manufacturer_nil(
                        adb_readingSystemAttributes_t* _readingSystemAttributes,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_readingSystemAttributes_set_model_nil(
                        adb_readingSystemAttributes_t* _readingSystemAttributes,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_readingSystemAttributes_set_serialNumber_nil(
                        adb_readingSystemAttributes_t* _readingSystemAttributes,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_readingSystemAttributes_set_version_nil(
                        adb_readingSystemAttributes_t* _readingSystemAttributes,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_readingSystemAttributes_set_config_nil(
                        adb_readingSystemAttributes_t* _readingSystemAttributes,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_readingSystemAttributes_t* AXIS2_CALL
        adb_readingSystemAttributes_create(
            const axutil_env_t *env)
        {
            adb_readingSystemAttributes_t *_readingSystemAttributes = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _readingSystemAttributes = (adb_readingSystemAttributes_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_readingSystemAttributes_t));

            if(NULL == _readingSystemAttributes)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_readingSystemAttributes, 0, sizeof(adb_readingSystemAttributes_t));

            _readingSystemAttributes->property_TypeName = axutil_strdup(env, "adb_readingSystemAttributes");
            _readingSystemAttributes->property_readingSystemAttributesChoice_type0  = NULL;
                  _readingSystemAttributes->is_valid_readingSystemAttributesChoice_type0  = AXIS2_FALSE;
            _readingSystemAttributes->property_manufacturer  = NULL;
                  _readingSystemAttributes->is_valid_manufacturer  = AXIS2_FALSE;
            _readingSystemAttributes->property_model  = NULL;
                  _readingSystemAttributes->is_valid_model  = AXIS2_FALSE;
            _readingSystemAttributes->property_serialNumber  = NULL;
                  _readingSystemAttributes->is_valid_serialNumber  = AXIS2_FALSE;
            _readingSystemAttributes->property_version  = NULL;
                  _readingSystemAttributes->is_valid_version  = AXIS2_FALSE;
            _readingSystemAttributes->property_config  = NULL;
                  _readingSystemAttributes->is_valid_config  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "readingSystemAttributes",
                        "http://www.daisy.org/ns/daisy-online/",
                        NULL);
                _readingSystemAttributes->qname = qname;
            

            return _readingSystemAttributes;
        }

        adb_readingSystemAttributes_t* AXIS2_CALL
        adb_readingSystemAttributes_create_with_values(
            const axutil_env_t *env,
                axutil_array_list_t* _readingSystemAttributesChoice_type0,
                axis2_char_t* _manufacturer,
                axis2_char_t* _model,
                axis2_char_t* _serialNumber,
                axis2_char_t* _version,
                adb_config_type0_t* _config)
        {
            adb_readingSystemAttributes_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_readingSystemAttributes_create(env);

            
              status = adb_readingSystemAttributes_set_readingSystemAttributesChoice_type0(
                                     adb_obj,
                                     env,
                                     _readingSystemAttributesChoice_type0);
              if(status == AXIS2_FAILURE) {
                  adb_readingSystemAttributes_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_readingSystemAttributes_set_manufacturer(
                                     adb_obj,
                                     env,
                                     _manufacturer);
              if(status == AXIS2_FAILURE) {
                  adb_readingSystemAttributes_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_readingSystemAttributes_set_model(
                                     adb_obj,
                                     env,
                                     _model);
              if(status == AXIS2_FAILURE) {
                  adb_readingSystemAttributes_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_readingSystemAttributes_set_serialNumber(
                                     adb_obj,
                                     env,
                                     _serialNumber);
              if(status == AXIS2_FAILURE) {
                  adb_readingSystemAttributes_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_readingSystemAttributes_set_version(
                                     adb_obj,
                                     env,
                                     _version);
              if(status == AXIS2_FAILURE) {
                  adb_readingSystemAttributes_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_readingSystemAttributes_set_config(
                                     adb_obj,
                                     env,
                                     _config);
              if(status == AXIS2_FAILURE) {
                  adb_readingSystemAttributes_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axutil_array_list_t* AXIS2_CALL
                adb_readingSystemAttributes_free_popping_value(
                        adb_readingSystemAttributes_t* _readingSystemAttributes,
                        const axutil_env_t *env)
                {
                    axutil_array_list_t* value;

                    
                    
                    value = _readingSystemAttributes->property_readingSystemAttributesChoice_type0;

                    _readingSystemAttributes->property_readingSystemAttributesChoice_type0 = (axutil_array_list_t*)NULL;
                    adb_readingSystemAttributes_free(_readingSystemAttributes, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributes_free(
                adb_readingSystemAttributes_t* _readingSystemAttributes,
                const axutil_env_t *env)
        {
            
            
            return adb_readingSystemAttributes_free_obj(
                _readingSystemAttributes,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributes_free_obj(
                adb_readingSystemAttributes_t* _readingSystemAttributes,
                const axutil_env_t *env)
        {
            
                int i = 0;
                int count = 0;
                void *element = NULL;
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, AXIS2_FAILURE);

            if (_readingSystemAttributes->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _readingSystemAttributes->property_TypeName);
            }

            adb_readingSystemAttributes_reset_readingSystemAttributesChoice_type0(_readingSystemAttributes, env);
            adb_readingSystemAttributes_reset_manufacturer(_readingSystemAttributes, env);
            adb_readingSystemAttributes_reset_model(_readingSystemAttributes, env);
            adb_readingSystemAttributes_reset_serialNumber(_readingSystemAttributes, env);
            adb_readingSystemAttributes_reset_version(_readingSystemAttributes, env);
            adb_readingSystemAttributes_reset_config(_readingSystemAttributes, env);
            
              if(_readingSystemAttributes->qname)
              {
                  axutil_qname_free (_readingSystemAttributes->qname, env);
                  _readingSystemAttributes->qname = NULL;
              }
            

            if(_readingSystemAttributes)
            {
                AXIS2_FREE(env->allocator, _readingSystemAttributes);
                _readingSystemAttributes = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributes_deserialize(
                adb_readingSystemAttributes_t* _readingSystemAttributes,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_readingSystemAttributes_deserialize_obj(
                _readingSystemAttributes,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributes_deserialize_obj(
                adb_readingSystemAttributes_t* _readingSystemAttributes,
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
            AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for readingSystemAttributes : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              

                    current_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                    qname = axiom_element_get_qname(current_element, env, parent);
                    if (axutil_qname_equals(qname, env, _readingSystemAttributes-> qname))
                    {
                        
                          first_node = axiom_node_get_first_child(parent, env);
                          
                    }
                    else
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                              "Failed in building adb object for readingSystemAttributes : "
                              "Expected %s but returned %s",
                              axutil_qname_to_string(_readingSystemAttributes-> qname, env),
                              axutil_qname_to_string(qname, env));
                        
                        return AXIS2_FAILURE;
                    }
                    
                    /*
                     * building readingSystemAttributesChoice_type0 array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building readingSystemAttributesChoice_type0 element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "readingSystemAttributesChoice_type0", "http://www.daisy.org/ns/daisy-online/", NULL);
                                  
                               
                               for (i = 0, sequence_broken = 0, current_node = first_node; !sequence_broken && current_node != NULL;) 
                                             
                               {
                                  if(axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                  {
                                     current_node =axiom_node_get_next_sibling(current_node, env);
                                     is_early_node_valid = AXIS2_FALSE;
                                     continue;
                                  }
                                  
                                  current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                  qname = axiom_element_get_qname(current_element, env, current_node);

                                  if (adb_readingSystemAttributesChoice_type0_is_particle() ||  
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_readingSystemAttributesChoice_type0");
                                          
                                          status =  adb_readingSystemAttributesChoice_type0_deserialize((adb_readingSystemAttributesChoice_type0_t*)element, env,
                                                                                 &current_node, &is_early_node_valid, AXIS2_FALSE);
                                          
                                          if(AXIS2_FAILURE ==  status)
                                          {
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element readingSystemAttributesChoice_type0 ");
                                          }
                                          else
                                          {
                                            axutil_array_list_add_at(arr_list, env, i, element);
                                          }
                                        
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for readingSystemAttributesChoice_type0 ");
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
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "readingSystemAttributesChoice_type0 (@minOccurs = '0') only have %d elements", i);
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
                                    status = adb_readingSystemAttributes_set_readingSystemAttributesChoice_type0(_readingSystemAttributes, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building manufacturer element
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
                                 
                                 element_qname = axutil_qname_create(env, "manufacturer", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

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
                                            status = adb_readingSystemAttributes_set_manufacturer(_readingSystemAttributes, env,
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
                                                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element manufacturer");
                                                status = AXIS2_FAILURE;
                                            }
                                            else
                                            {
                                                /* after all, we found this is a empty string */
                                                status = adb_readingSystemAttributes_set_manufacturer(_readingSystemAttributes, env,
                                                                   "");
                                            }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for manufacturer ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element manufacturer missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building model element
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
                                 
                                 element_qname = axutil_qname_create(env, "model", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

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
                                            status = adb_readingSystemAttributes_set_model(_readingSystemAttributes, env,
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
                                                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element model");
                                                status = AXIS2_FAILURE;
                                            }
                                            else
                                            {
                                                /* after all, we found this is a empty string */
                                                status = adb_readingSystemAttributes_set_model(_readingSystemAttributes, env,
                                                                   "");
                                            }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for model ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element model missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building serialNumber element
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
                                 
                                 element_qname = axutil_qname_create(env, "serialNumber", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

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
                                            status = adb_readingSystemAttributes_set_serialNumber(_readingSystemAttributes, env,
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
                                                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element serialNumber");
                                                status = AXIS2_FAILURE;
                                            }
                                            else
                                            {
                                                /* after all, we found this is a empty string */
                                                status = adb_readingSystemAttributes_set_serialNumber(_readingSystemAttributes, env,
                                                                   "");
                                            }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for serialNumber ");
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
                      * building version element
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
                                 
                                 element_qname = axutil_qname_create(env, "version", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

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
                                            status = adb_readingSystemAttributes_set_version(_readingSystemAttributes, env,
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
                                                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element version");
                                                status = AXIS2_FAILURE;
                                            }
                                            else
                                            {
                                                /* after all, we found this is a empty string */
                                                status = adb_readingSystemAttributes_set_version(_readingSystemAttributes, env,
                                                                   "");
                                            }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for version ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element version missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building config element
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
                                 
                                 element_qname = axutil_qname_create(env, "config", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

                           if (adb_config_type0_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_config_type0");

                                      status =  adb_config_type0_deserialize((adb_config_type0_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element config");
                                      }
                                      else
                                      {
                                          status = adb_readingSystemAttributes_set_config(_readingSystemAttributes, env,
                                                                   (adb_config_type0_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for config ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element config missing");
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
          adb_readingSystemAttributes_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_readingSystemAttributes_declare_parent_namespaces(
                    adb_readingSystemAttributes_t* _readingSystemAttributes,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_readingSystemAttributes_serialize(
                adb_readingSystemAttributes_t* _readingSystemAttributes,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_readingSystemAttributes_serialize_obj(
                    _readingSystemAttributes, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_readingSystemAttributes_serialize_obj(
                adb_readingSystemAttributes_t* _readingSystemAttributes,
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
                    
                    axis2_char_t *text_value_3;
                    axis2_char_t *text_value_3_temp;
                    
                    axis2_char_t *text_value_4;
                    axis2_char_t *text_value_4_temp;
                    
                    axis2_char_t *text_value_5;
                    axis2_char_t *text_value_5_temp;
                    
                    axis2_char_t text_value_6[ADB_DEFAULT_DIGIT_LIMIT];
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

             
                int next_ns_index_value = 0;
            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, NULL);
            
             
                    namespaces = axutil_hash_make(env);
                    next_ns_index = &next_ns_index_value;
                     
                           ns1 = axiom_namespace_create (env,
                                             "http://www.daisy.org/ns/daisy-online/",
                                             "n"); 
                           axutil_hash_set(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING, axutil_strdup(env, "n"));
                       
                     
                    parent_element = axiom_element_create (env, NULL, "readingSystemAttributes", ns1 , &parent);
                    
                    
                    axiom_element_set_namespace(parent_element, env, ns1, parent);


            
                    data_source = axiom_data_source_create(env, parent, &current_node);
                    stream = axiom_data_source_get_stream(data_source, env);
                  
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.daisy.org/ns/daisy-online/",
                                            p_prefix));
                       }
                      

                   if (!_readingSystemAttributes->is_valid_readingSystemAttributesChoice_type0)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("readingSystemAttributesChoice_type0"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("readingSystemAttributesChoice_type0")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing readingSystemAttributesChoice_type0 array
                      */
                     if (_readingSystemAttributes->property_readingSystemAttributesChoice_type0 != NULL)
                     {
                        

                            sprintf(start_input_str, "<%s%sreadingSystemAttributesChoice_type0",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%sreadingSystemAttributesChoice_type0>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_readingSystemAttributes->property_readingSystemAttributesChoice_type0, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_readingSystemAttributes->property_readingSystemAttributesChoice_type0, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing readingSystemAttributesChoice_type0 element
                      */

                    
                     
                            if(!adb_readingSystemAttributesChoice_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_readingSystemAttributesChoice_type0_serialize((adb_readingSystemAttributesChoice_type0_t*)element, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_readingSystemAttributesChoice_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_readingSystemAttributesChoice_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                         }
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
                      

                   if (!_readingSystemAttributes->is_valid_manufacturer)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property manufacturer");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("manufacturer"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("manufacturer")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing manufacturer element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%smanufacturer>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%smanufacturer>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_2 = _readingSystemAttributes->property_manufacturer;
                           
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

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.daisy.org/ns/daisy-online/",
                                            p_prefix));
                       }
                      

                   if (!_readingSystemAttributes->is_valid_model)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property model");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("model"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("model")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing model element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%smodel>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%smodel>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_3 = _readingSystemAttributes->property_model;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_3_temp = axutil_xml_quote_string(env, text_value_3, AXIS2_TRUE);
                           if (text_value_3_temp)
                           {
                               axutil_stream_write(stream, env, text_value_3_temp, axutil_strlen(text_value_3_temp));
                               AXIS2_FREE(env->allocator, text_value_3_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_3, axutil_strlen(text_value_3));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
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
                      

                   if (!_readingSystemAttributes->is_valid_serialNumber)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("serialNumber"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("serialNumber")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing serialNumber element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sserialNumber>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sserialNumber>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_4 = _readingSystemAttributes->property_serialNumber;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_4_temp = axutil_xml_quote_string(env, text_value_4, AXIS2_TRUE);
                           if (text_value_4_temp)
                           {
                               axutil_stream_write(stream, env, text_value_4_temp, axutil_strlen(text_value_4_temp));
                               AXIS2_FREE(env->allocator, text_value_4_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_4, axutil_strlen(text_value_4));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
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
                      

                   if (!_readingSystemAttributes->is_valid_version)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property version");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("version"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("version")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing version element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sversion>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sversion>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_5 = _readingSystemAttributes->property_version;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_5_temp = axutil_xml_quote_string(env, text_value_5, AXIS2_TRUE);
                           if (text_value_5_temp)
                           {
                               axutil_stream_write(stream, env, text_value_5_temp, axutil_strlen(text_value_5_temp));
                               AXIS2_FREE(env->allocator, text_value_5_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_5, axutil_strlen(text_value_5));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
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
                      

                   if (!_readingSystemAttributes->is_valid_config)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property config");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("config"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("config")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing config element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sconfig",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sconfig>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_config_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_config_type0_serialize(_readingSystemAttributes->property_config, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_config_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_config_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
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
             * Getter for readingSystemAttributesChoice_type0 by  Property Number 1
             */
            axutil_array_list_t* AXIS2_CALL
            adb_readingSystemAttributes_get_property1(
                adb_readingSystemAttributes_t* _readingSystemAttributes,
                const axutil_env_t *env)
            {
                return adb_readingSystemAttributes_get_readingSystemAttributesChoice_type0(_readingSystemAttributes,
                                             env);
            }

            /**
             * getter for readingSystemAttributesChoice_type0.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_readingSystemAttributes_get_readingSystemAttributesChoice_type0(
                    adb_readingSystemAttributes_t* _readingSystemAttributes,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, NULL);
                  

                return _readingSystemAttributes->property_readingSystemAttributesChoice_type0;
             }

            /**
             * setter for readingSystemAttributesChoice_type0
             */
            axis2_status_t AXIS2_CALL
            adb_readingSystemAttributes_set_readingSystemAttributesChoice_type0(
                    adb_readingSystemAttributes_t* _readingSystemAttributes,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_readingSystemAttributesChoice_type0)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, AXIS2_FAILURE);
                
                if(_readingSystemAttributes->is_valid_readingSystemAttributesChoice_type0 &&
                        arg_readingSystemAttributesChoice_type0 == _readingSystemAttributes->property_readingSystemAttributesChoice_type0)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_readingSystemAttributesChoice_type0, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "readingSystemAttributesChoice_type0 has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_readingSystemAttributesChoice_type0, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_readingSystemAttributes_reset_readingSystemAttributesChoice_type0(_readingSystemAttributes, env);

                
                if(NULL == arg_readingSystemAttributesChoice_type0)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _readingSystemAttributes->property_readingSystemAttributesChoice_type0 = arg_readingSystemAttributesChoice_type0;
                        if(non_nil_exists)
                        {
                            _readingSystemAttributes->is_valid_readingSystemAttributesChoice_type0 = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of readingSystemAttributesChoice_type0.
             */
            adb_readingSystemAttributesChoice_type0_t* AXIS2_CALL
            adb_readingSystemAttributes_get_readingSystemAttributesChoice_type0_at(
                    adb_readingSystemAttributes_t* _readingSystemAttributes,
                    const axutil_env_t *env, int i)
            {
                adb_readingSystemAttributesChoice_type0_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, NULL);
                  

                if(_readingSystemAttributes->property_readingSystemAttributesChoice_type0 == NULL)
                {
                    return (adb_readingSystemAttributesChoice_type0_t*)0;
                }
                ret_val = (adb_readingSystemAttributesChoice_type0_t*)axutil_array_list_get(_readingSystemAttributes->property_readingSystemAttributesChoice_type0, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of readingSystemAttributesChoice_type0.
             */
            axis2_status_t AXIS2_CALL
            adb_readingSystemAttributes_set_readingSystemAttributesChoice_type0_at(
                    adb_readingSystemAttributes_t* _readingSystemAttributes,
                    const axutil_env_t *env, int i,
                    adb_readingSystemAttributesChoice_type0_t* arg_readingSystemAttributesChoice_type0)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, AXIS2_FAILURE);
                
                if( _readingSystemAttributes->is_valid_readingSystemAttributesChoice_type0 &&
                    _readingSystemAttributes->property_readingSystemAttributesChoice_type0 &&
                
                    arg_readingSystemAttributesChoice_type0 == (adb_readingSystemAttributesChoice_type0_t*)axutil_array_list_get(_readingSystemAttributes->property_readingSystemAttributesChoice_type0, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_readingSystemAttributesChoice_type0)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_readingSystemAttributes->property_readingSystemAttributesChoice_type0 != NULL)
                        {
                            size = axutil_array_list_size(_readingSystemAttributes->property_readingSystemAttributesChoice_type0, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_readingSystemAttributes->property_readingSystemAttributesChoice_type0, env, i))
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
                  

                if(_readingSystemAttributes->property_readingSystemAttributesChoice_type0 == NULL)
                {
                    _readingSystemAttributes->property_readingSystemAttributesChoice_type0 = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_readingSystemAttributes->property_readingSystemAttributesChoice_type0, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_readingSystemAttributesChoice_type0_free((adb_readingSystemAttributesChoice_type0_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _readingSystemAttributes->is_valid_readingSystemAttributesChoice_type0 = AXIS2_FALSE;
                        axutil_array_list_set(_readingSystemAttributes->property_readingSystemAttributesChoice_type0 , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_readingSystemAttributes->property_readingSystemAttributesChoice_type0 , env, i, arg_readingSystemAttributesChoice_type0);
                  _readingSystemAttributes->is_valid_readingSystemAttributesChoice_type0 = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to readingSystemAttributesChoice_type0.
             */
            axis2_status_t AXIS2_CALL
            adb_readingSystemAttributes_add_readingSystemAttributesChoice_type0(
                    adb_readingSystemAttributes_t* _readingSystemAttributes,
                    const axutil_env_t *env,
                    adb_readingSystemAttributesChoice_type0_t* arg_readingSystemAttributesChoice_type0)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, AXIS2_FAILURE);

                
                    if(NULL == arg_readingSystemAttributesChoice_type0)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_readingSystemAttributes->property_readingSystemAttributesChoice_type0 == NULL)
                {
                    _readingSystemAttributes->property_readingSystemAttributesChoice_type0 = axutil_array_list_create(env, 10);
                }
                if(_readingSystemAttributes->property_readingSystemAttributesChoice_type0 == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for readingSystemAttributesChoice_type0");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_readingSystemAttributes->property_readingSystemAttributesChoice_type0 , env, arg_readingSystemAttributesChoice_type0);
                  _readingSystemAttributes->is_valid_readingSystemAttributesChoice_type0 = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the readingSystemAttributesChoice_type0 array.
             */
            int AXIS2_CALL
            adb_readingSystemAttributes_sizeof_readingSystemAttributesChoice_type0(
                    adb_readingSystemAttributes_t* _readingSystemAttributes,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, -1);
                if(_readingSystemAttributes->property_readingSystemAttributesChoice_type0 == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_readingSystemAttributes->property_readingSystemAttributesChoice_type0, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_readingSystemAttributes_remove_readingSystemAttributesChoice_type0_at(
                    adb_readingSystemAttributes_t* _readingSystemAttributes,
                    const axutil_env_t *env, int i)
            {
                return adb_readingSystemAttributes_set_readingSystemAttributesChoice_type0_nil_at(_readingSystemAttributes, env, i);
            }

            

           /**
            * resetter for readingSystemAttributesChoice_type0
            */
           axis2_status_t AXIS2_CALL
           adb_readingSystemAttributes_reset_readingSystemAttributesChoice_type0(
                   adb_readingSystemAttributes_t* _readingSystemAttributes,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, AXIS2_FAILURE);
               

               
                  if (_readingSystemAttributes->property_readingSystemAttributesChoice_type0 != NULL)
                  {
                      count = axutil_array_list_size(_readingSystemAttributes->property_readingSystemAttributesChoice_type0, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_readingSystemAttributes->property_readingSystemAttributesChoice_type0, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   adb_readingSystemAttributesChoice_type0_free((adb_readingSystemAttributesChoice_type0_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_readingSystemAttributes->property_readingSystemAttributesChoice_type0, env);
                  }
                _readingSystemAttributes->is_valid_readingSystemAttributesChoice_type0 = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether readingSystemAttributesChoice_type0 is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_readingSystemAttributes_is_readingSystemAttributesChoice_type0_nil(
                   adb_readingSystemAttributes_t* _readingSystemAttributes,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, AXIS2_TRUE);
               
               return !_readingSystemAttributes->is_valid_readingSystemAttributesChoice_type0;
           }

           /**
            * Set readingSystemAttributesChoice_type0 to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_readingSystemAttributes_set_readingSystemAttributesChoice_type0_nil(
                   adb_readingSystemAttributes_t* _readingSystemAttributes,
                   const axutil_env_t *env)
           {
               return adb_readingSystemAttributes_reset_readingSystemAttributesChoice_type0(_readingSystemAttributes, env);
           }

           
           /**
            * Check whether readingSystemAttributesChoice_type0 is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_readingSystemAttributes_is_readingSystemAttributesChoice_type0_nil_at(
                   adb_readingSystemAttributes_t* _readingSystemAttributes,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, AXIS2_TRUE);
               
               return (_readingSystemAttributes->is_valid_readingSystemAttributesChoice_type0 == AXIS2_FALSE ||
                        NULL == _readingSystemAttributes->property_readingSystemAttributesChoice_type0 || 
                        NULL == axutil_array_list_get(_readingSystemAttributes->property_readingSystemAttributesChoice_type0, env, i));
           }

           /**
            * Set readingSystemAttributesChoice_type0 to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_readingSystemAttributes_set_readingSystemAttributesChoice_type0_nil_at(
                   adb_readingSystemAttributes_t* _readingSystemAttributes,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, AXIS2_FAILURE);

                if(_readingSystemAttributes->property_readingSystemAttributesChoice_type0 == NULL ||
                            _readingSystemAttributes->is_valid_readingSystemAttributesChoice_type0 == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_readingSystemAttributes->property_readingSystemAttributesChoice_type0, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_readingSystemAttributes->property_readingSystemAttributesChoice_type0, env, i))
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
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of readingSystemAttributesChoice_type0 is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_readingSystemAttributes->property_readingSystemAttributesChoice_type0 == NULL)
                {
                    _readingSystemAttributes->is_valid_readingSystemAttributesChoice_type0 = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_readingSystemAttributes->property_readingSystemAttributesChoice_type0, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_readingSystemAttributesChoice_type0_free((adb_readingSystemAttributesChoice_type0_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _readingSystemAttributes->is_valid_readingSystemAttributesChoice_type0 = AXIS2_FALSE;
                        axutil_array_list_set(_readingSystemAttributes->property_readingSystemAttributesChoice_type0 , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_readingSystemAttributes->property_readingSystemAttributesChoice_type0 , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for manufacturer by  Property Number 2
             */
            axis2_char_t* AXIS2_CALL
            adb_readingSystemAttributes_get_property2(
                adb_readingSystemAttributes_t* _readingSystemAttributes,
                const axutil_env_t *env)
            {
                return adb_readingSystemAttributes_get_manufacturer(_readingSystemAttributes,
                                             env);
            }

            /**
             * getter for manufacturer.
             */
            axis2_char_t* AXIS2_CALL
            adb_readingSystemAttributes_get_manufacturer(
                    adb_readingSystemAttributes_t* _readingSystemAttributes,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, NULL);
                  

                return _readingSystemAttributes->property_manufacturer;
             }

            /**
             * setter for manufacturer
             */
            axis2_status_t AXIS2_CALL
            adb_readingSystemAttributes_set_manufacturer(
                    adb_readingSystemAttributes_t* _readingSystemAttributes,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_manufacturer)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, AXIS2_FAILURE);
                
                if(_readingSystemAttributes->is_valid_manufacturer &&
                        arg_manufacturer == _readingSystemAttributes->property_manufacturer)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_manufacturer)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "manufacturer is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_readingSystemAttributes_reset_manufacturer(_readingSystemAttributes, env);

                
                if(NULL == arg_manufacturer)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _readingSystemAttributes->property_manufacturer = (axis2_char_t *)axutil_strdup(env, arg_manufacturer);
                        if(NULL == _readingSystemAttributes->property_manufacturer)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for manufacturer");
                            return AXIS2_FAILURE;
                        }
                        _readingSystemAttributes->is_valid_manufacturer = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for manufacturer
            */
           axis2_status_t AXIS2_CALL
           adb_readingSystemAttributes_reset_manufacturer(
                   adb_readingSystemAttributes_t* _readingSystemAttributes,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, AXIS2_FAILURE);
               

               
            
                
                if(_readingSystemAttributes->property_manufacturer != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _readingSystemAttributes->property_manufacturer);
                     _readingSystemAttributes->property_manufacturer = NULL;
                }
            
                
                
                _readingSystemAttributes->is_valid_manufacturer = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether manufacturer is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_readingSystemAttributes_is_manufacturer_nil(
                   adb_readingSystemAttributes_t* _readingSystemAttributes,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, AXIS2_TRUE);
               
               return !_readingSystemAttributes->is_valid_manufacturer;
           }

           /**
            * Set manufacturer to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_readingSystemAttributes_set_manufacturer_nil(
                   adb_readingSystemAttributes_t* _readingSystemAttributes,
                   const axutil_env_t *env)
           {
               return adb_readingSystemAttributes_reset_manufacturer(_readingSystemAttributes, env);
           }

           

            /**
             * Getter for model by  Property Number 3
             */
            axis2_char_t* AXIS2_CALL
            adb_readingSystemAttributes_get_property3(
                adb_readingSystemAttributes_t* _readingSystemAttributes,
                const axutil_env_t *env)
            {
                return adb_readingSystemAttributes_get_model(_readingSystemAttributes,
                                             env);
            }

            /**
             * getter for model.
             */
            axis2_char_t* AXIS2_CALL
            adb_readingSystemAttributes_get_model(
                    adb_readingSystemAttributes_t* _readingSystemAttributes,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, NULL);
                  

                return _readingSystemAttributes->property_model;
             }

            /**
             * setter for model
             */
            axis2_status_t AXIS2_CALL
            adb_readingSystemAttributes_set_model(
                    adb_readingSystemAttributes_t* _readingSystemAttributes,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_model)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, AXIS2_FAILURE);
                
                if(_readingSystemAttributes->is_valid_model &&
                        arg_model == _readingSystemAttributes->property_model)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_model)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "model is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_readingSystemAttributes_reset_model(_readingSystemAttributes, env);

                
                if(NULL == arg_model)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _readingSystemAttributes->property_model = (axis2_char_t *)axutil_strdup(env, arg_model);
                        if(NULL == _readingSystemAttributes->property_model)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for model");
                            return AXIS2_FAILURE;
                        }
                        _readingSystemAttributes->is_valid_model = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for model
            */
           axis2_status_t AXIS2_CALL
           adb_readingSystemAttributes_reset_model(
                   adb_readingSystemAttributes_t* _readingSystemAttributes,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, AXIS2_FAILURE);
               

               
            
                
                if(_readingSystemAttributes->property_model != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _readingSystemAttributes->property_model);
                     _readingSystemAttributes->property_model = NULL;
                }
            
                
                
                _readingSystemAttributes->is_valid_model = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether model is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_readingSystemAttributes_is_model_nil(
                   adb_readingSystemAttributes_t* _readingSystemAttributes,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, AXIS2_TRUE);
               
               return !_readingSystemAttributes->is_valid_model;
           }

           /**
            * Set model to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_readingSystemAttributes_set_model_nil(
                   adb_readingSystemAttributes_t* _readingSystemAttributes,
                   const axutil_env_t *env)
           {
               return adb_readingSystemAttributes_reset_model(_readingSystemAttributes, env);
           }

           

            /**
             * Getter for serialNumber by  Property Number 4
             */
            axis2_char_t* AXIS2_CALL
            adb_readingSystemAttributes_get_property4(
                adb_readingSystemAttributes_t* _readingSystemAttributes,
                const axutil_env_t *env)
            {
                return adb_readingSystemAttributes_get_serialNumber(_readingSystemAttributes,
                                             env);
            }

            /**
             * getter for serialNumber.
             */
            axis2_char_t* AXIS2_CALL
            adb_readingSystemAttributes_get_serialNumber(
                    adb_readingSystemAttributes_t* _readingSystemAttributes,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, NULL);
                  

                return _readingSystemAttributes->property_serialNumber;
             }

            /**
             * setter for serialNumber
             */
            axis2_status_t AXIS2_CALL
            adb_readingSystemAttributes_set_serialNumber(
                    adb_readingSystemAttributes_t* _readingSystemAttributes,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_serialNumber)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, AXIS2_FAILURE);
                
                if(_readingSystemAttributes->is_valid_serialNumber &&
                        arg_serialNumber == _readingSystemAttributes->property_serialNumber)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_readingSystemAttributes_reset_serialNumber(_readingSystemAttributes, env);

                
                if(NULL == arg_serialNumber)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _readingSystemAttributes->property_serialNumber = (axis2_char_t *)axutil_strdup(env, arg_serialNumber);
                        if(NULL == _readingSystemAttributes->property_serialNumber)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for serialNumber");
                            return AXIS2_FAILURE;
                        }
                        _readingSystemAttributes->is_valid_serialNumber = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for serialNumber
            */
           axis2_status_t AXIS2_CALL
           adb_readingSystemAttributes_reset_serialNumber(
                   adb_readingSystemAttributes_t* _readingSystemAttributes,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, AXIS2_FAILURE);
               

               
            
                
                if(_readingSystemAttributes->property_serialNumber != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _readingSystemAttributes->property_serialNumber);
                     _readingSystemAttributes->property_serialNumber = NULL;
                }
            
                
                
                _readingSystemAttributes->is_valid_serialNumber = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether serialNumber is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_readingSystemAttributes_is_serialNumber_nil(
                   adb_readingSystemAttributes_t* _readingSystemAttributes,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, AXIS2_TRUE);
               
               return !_readingSystemAttributes->is_valid_serialNumber;
           }

           /**
            * Set serialNumber to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_readingSystemAttributes_set_serialNumber_nil(
                   adb_readingSystemAttributes_t* _readingSystemAttributes,
                   const axutil_env_t *env)
           {
               return adb_readingSystemAttributes_reset_serialNumber(_readingSystemAttributes, env);
           }

           

            /**
             * Getter for version by  Property Number 5
             */
            axis2_char_t* AXIS2_CALL
            adb_readingSystemAttributes_get_property5(
                adb_readingSystemAttributes_t* _readingSystemAttributes,
                const axutil_env_t *env)
            {
                return adb_readingSystemAttributes_get_version(_readingSystemAttributes,
                                             env);
            }

            /**
             * getter for version.
             */
            axis2_char_t* AXIS2_CALL
            adb_readingSystemAttributes_get_version(
                    adb_readingSystemAttributes_t* _readingSystemAttributes,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, NULL);
                  

                return _readingSystemAttributes->property_version;
             }

            /**
             * setter for version
             */
            axis2_status_t AXIS2_CALL
            adb_readingSystemAttributes_set_version(
                    adb_readingSystemAttributes_t* _readingSystemAttributes,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_version)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, AXIS2_FAILURE);
                
                if(_readingSystemAttributes->is_valid_version &&
                        arg_version == _readingSystemAttributes->property_version)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_version)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "version is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_readingSystemAttributes_reset_version(_readingSystemAttributes, env);

                
                if(NULL == arg_version)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _readingSystemAttributes->property_version = (axis2_char_t *)axutil_strdup(env, arg_version);
                        if(NULL == _readingSystemAttributes->property_version)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for version");
                            return AXIS2_FAILURE;
                        }
                        _readingSystemAttributes->is_valid_version = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for version
            */
           axis2_status_t AXIS2_CALL
           adb_readingSystemAttributes_reset_version(
                   adb_readingSystemAttributes_t* _readingSystemAttributes,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, AXIS2_FAILURE);
               

               
            
                
                if(_readingSystemAttributes->property_version != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _readingSystemAttributes->property_version);
                     _readingSystemAttributes->property_version = NULL;
                }
            
                
                
                _readingSystemAttributes->is_valid_version = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether version is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_readingSystemAttributes_is_version_nil(
                   adb_readingSystemAttributes_t* _readingSystemAttributes,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, AXIS2_TRUE);
               
               return !_readingSystemAttributes->is_valid_version;
           }

           /**
            * Set version to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_readingSystemAttributes_set_version_nil(
                   adb_readingSystemAttributes_t* _readingSystemAttributes,
                   const axutil_env_t *env)
           {
               return adb_readingSystemAttributes_reset_version(_readingSystemAttributes, env);
           }

           

            /**
             * Getter for config by  Property Number 6
             */
            adb_config_type0_t* AXIS2_CALL
            adb_readingSystemAttributes_get_property6(
                adb_readingSystemAttributes_t* _readingSystemAttributes,
                const axutil_env_t *env)
            {
                return adb_readingSystemAttributes_get_config(_readingSystemAttributes,
                                             env);
            }

            /**
             * getter for config.
             */
            adb_config_type0_t* AXIS2_CALL
            adb_readingSystemAttributes_get_config(
                    adb_readingSystemAttributes_t* _readingSystemAttributes,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, NULL);
                  

                return _readingSystemAttributes->property_config;
             }

            /**
             * setter for config
             */
            axis2_status_t AXIS2_CALL
            adb_readingSystemAttributes_set_config(
                    adb_readingSystemAttributes_t* _readingSystemAttributes,
                    const axutil_env_t *env,
                    adb_config_type0_t*  arg_config)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, AXIS2_FAILURE);
                
                if(_readingSystemAttributes->is_valid_config &&
                        arg_config == _readingSystemAttributes->property_config)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_config)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "config is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_readingSystemAttributes_reset_config(_readingSystemAttributes, env);

                
                if(NULL == arg_config)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _readingSystemAttributes->property_config = arg_config;
                        _readingSystemAttributes->is_valid_config = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for config
            */
           axis2_status_t AXIS2_CALL
           adb_readingSystemAttributes_reset_config(
                   adb_readingSystemAttributes_t* _readingSystemAttributes,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, AXIS2_FAILURE);
               

               
            
                
                if(_readingSystemAttributes->property_config != NULL)
                {
                   
                   adb_config_type0_free(_readingSystemAttributes->property_config, env);
                     _readingSystemAttributes->property_config = NULL;
                }
            
                
                
                _readingSystemAttributes->is_valid_config = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether config is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_readingSystemAttributes_is_config_nil(
                   adb_readingSystemAttributes_t* _readingSystemAttributes,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _readingSystemAttributes, AXIS2_TRUE);
               
               return !_readingSystemAttributes->is_valid_config;
           }

           /**
            * Set config to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_readingSystemAttributes_set_config_nil(
                   adb_readingSystemAttributes_t* _readingSystemAttributes,
                   const axutil_env_t *env)
           {
               return adb_readingSystemAttributes_reset_config(_readingSystemAttributes, env);
           }

           

