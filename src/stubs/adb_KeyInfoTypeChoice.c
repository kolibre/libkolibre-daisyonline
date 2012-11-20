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
         * adb_KeyInfoTypeChoice.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_KeyInfoTypeChoice.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = KeyInfoTypeChoice
                 * Namespace URI = http://www.w3.org/2000/09/xmldsig#
                 * Namespace Prefix = ns5
                 */
           


        struct adb_KeyInfoTypeChoice
        {
            axis2_char_t *property_TypeName;

            axis2_char_t* property_KeyName;

                
                axis2_bool_t is_valid_KeyName;
            adb_KeyValueType_t* property_KeyValue;

                
                axis2_bool_t is_valid_KeyValue;
            adb_RetrievalMethodType_t* property_RetrievalMethod;

                
                axis2_bool_t is_valid_RetrievalMethod;
            adb_X509DataType_t* property_X509Data;

                
                axis2_bool_t is_valid_X509Data;
            adb_PGPDataType_t* property_PGPData;

                
                axis2_bool_t is_valid_PGPData;
            adb_SPKIDataType_t* property_SPKIData;

                
                axis2_bool_t is_valid_SPKIData;
            axis2_char_t* property_MgmtData;

                
                axis2_bool_t is_valid_MgmtData;
            axiom_node_t* property_extraElement;

                
                axis2_bool_t is_valid_extraElement;
            
                axis2_char_t *current_choice;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_KeyInfoTypeChoice_set_KeyName_nil(
                        adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_KeyInfoTypeChoice_set_KeyValue_nil(
                        adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_KeyInfoTypeChoice_set_RetrievalMethod_nil(
                        adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_KeyInfoTypeChoice_set_X509Data_nil(
                        adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_KeyInfoTypeChoice_set_PGPData_nil(
                        adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_KeyInfoTypeChoice_set_SPKIData_nil(
                        adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_KeyInfoTypeChoice_set_MgmtData_nil(
                        adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_KeyInfoTypeChoice_set_extraElement_nil(
                        adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_KeyInfoTypeChoice_t* AXIS2_CALL
        adb_KeyInfoTypeChoice_create(
            const axutil_env_t *env)
        {
            adb_KeyInfoTypeChoice_t *_KeyInfoTypeChoice = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _KeyInfoTypeChoice = (adb_KeyInfoTypeChoice_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_KeyInfoTypeChoice_t));

            if(NULL == _KeyInfoTypeChoice)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_KeyInfoTypeChoice, 0, sizeof(adb_KeyInfoTypeChoice_t));

            _KeyInfoTypeChoice->property_TypeName = axutil_strdup(env, "adb_KeyInfoTypeChoice");
            _KeyInfoTypeChoice->property_KeyName  = NULL;
                  _KeyInfoTypeChoice->is_valid_KeyName  = AXIS2_FALSE;
            _KeyInfoTypeChoice->property_KeyValue  = NULL;
                  _KeyInfoTypeChoice->is_valid_KeyValue  = AXIS2_FALSE;
            _KeyInfoTypeChoice->property_RetrievalMethod  = NULL;
                  _KeyInfoTypeChoice->is_valid_RetrievalMethod  = AXIS2_FALSE;
            _KeyInfoTypeChoice->property_X509Data  = NULL;
                  _KeyInfoTypeChoice->is_valid_X509Data  = AXIS2_FALSE;
            _KeyInfoTypeChoice->property_PGPData  = NULL;
                  _KeyInfoTypeChoice->is_valid_PGPData  = AXIS2_FALSE;
            _KeyInfoTypeChoice->property_SPKIData  = NULL;
                  _KeyInfoTypeChoice->is_valid_SPKIData  = AXIS2_FALSE;
            _KeyInfoTypeChoice->property_MgmtData  = NULL;
                  _KeyInfoTypeChoice->is_valid_MgmtData  = AXIS2_FALSE;
            _KeyInfoTypeChoice->is_valid_extraElement  = AXIS2_FALSE;
            _KeyInfoTypeChoice->current_choice = "";
            

            return _KeyInfoTypeChoice;
        }

        adb_KeyInfoTypeChoice_t* AXIS2_CALL
        adb_KeyInfoTypeChoice_create_with_values(
            const axutil_env_t *env,
                axis2_char_t* _KeyName,
                adb_KeyValueType_t* _KeyValue,
                adb_RetrievalMethodType_t* _RetrievalMethod,
                adb_X509DataType_t* _X509Data,
                adb_PGPDataType_t* _PGPData,
                adb_SPKIDataType_t* _SPKIData,
                axis2_char_t* _MgmtData,
                axiom_node_t* _extraElement)
        {
            adb_KeyInfoTypeChoice_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_KeyInfoTypeChoice_create(env);

            
              status = adb_KeyInfoTypeChoice_set_KeyName(
                                     adb_obj,
                                     env,
                                     _KeyName);
              if(status == AXIS2_FAILURE) {
                  adb_KeyInfoTypeChoice_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_KeyInfoTypeChoice_set_KeyValue(
                                     adb_obj,
                                     env,
                                     _KeyValue);
              if(status == AXIS2_FAILURE) {
                  adb_KeyInfoTypeChoice_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_KeyInfoTypeChoice_set_RetrievalMethod(
                                     adb_obj,
                                     env,
                                     _RetrievalMethod);
              if(status == AXIS2_FAILURE) {
                  adb_KeyInfoTypeChoice_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_KeyInfoTypeChoice_set_X509Data(
                                     adb_obj,
                                     env,
                                     _X509Data);
              if(status == AXIS2_FAILURE) {
                  adb_KeyInfoTypeChoice_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_KeyInfoTypeChoice_set_PGPData(
                                     adb_obj,
                                     env,
                                     _PGPData);
              if(status == AXIS2_FAILURE) {
                  adb_KeyInfoTypeChoice_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_KeyInfoTypeChoice_set_SPKIData(
                                     adb_obj,
                                     env,
                                     _SPKIData);
              if(status == AXIS2_FAILURE) {
                  adb_KeyInfoTypeChoice_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_KeyInfoTypeChoice_set_MgmtData(
                                     adb_obj,
                                     env,
                                     _MgmtData);
              if(status == AXIS2_FAILURE) {
                  adb_KeyInfoTypeChoice_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_KeyInfoTypeChoice_set_extraElement(
                                     adb_obj,
                                     env,
                                     _extraElement);
              if(status == AXIS2_FAILURE) {
                  adb_KeyInfoTypeChoice_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axis2_char_t* AXIS2_CALL
                adb_KeyInfoTypeChoice_free_popping_value(
                        adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                        const axutil_env_t *env)
                {
                    axis2_char_t* value;

                    
                    
                    value = _KeyInfoTypeChoice->property_KeyName;

                    _KeyInfoTypeChoice->property_KeyName = (axis2_char_t*)NULL;
                    adb_KeyInfoTypeChoice_free(_KeyInfoTypeChoice, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_KeyInfoTypeChoice_free(
                adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _KeyInfoTypeChoice,
                env,
                "adb_KeyInfoTypeChoice");
            
        }

        axis2_status_t AXIS2_CALL
        adb_KeyInfoTypeChoice_free_obj(
                adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, AXIS2_FAILURE);

            if (_KeyInfoTypeChoice->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _KeyInfoTypeChoice->property_TypeName);
            }

            adb_KeyInfoTypeChoice_reset_KeyName(_KeyInfoTypeChoice, env);
            adb_KeyInfoTypeChoice_reset_KeyValue(_KeyInfoTypeChoice, env);
            adb_KeyInfoTypeChoice_reset_RetrievalMethod(_KeyInfoTypeChoice, env);
            adb_KeyInfoTypeChoice_reset_X509Data(_KeyInfoTypeChoice, env);
            adb_KeyInfoTypeChoice_reset_PGPData(_KeyInfoTypeChoice, env);
            adb_KeyInfoTypeChoice_reset_SPKIData(_KeyInfoTypeChoice, env);
            adb_KeyInfoTypeChoice_reset_MgmtData(_KeyInfoTypeChoice, env);
            adb_KeyInfoTypeChoice_reset_extraElement(_KeyInfoTypeChoice, env);
            

            if(_KeyInfoTypeChoice)
            {
                AXIS2_FREE(env->allocator, _KeyInfoTypeChoice);
                _KeyInfoTypeChoice = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_KeyInfoTypeChoice_deserialize(
                adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _KeyInfoTypeChoice,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_KeyInfoTypeChoice");
            
        }

        axis2_status_t AXIS2_CALL
        adb_KeyInfoTypeChoice_deserialize_obj(
                adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
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
          
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, AXIS2_FAILURE);

            
                         first_node = parent;
                    

                     
                     /*
                      * building KeyName element
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
                                   
                                 element_qname = axutil_qname_create(env, "KeyName", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

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
                                            status = adb_KeyInfoTypeChoice_set_KeyName(_KeyInfoTypeChoice, env,
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
                                                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element KeyName");
                                                status = AXIS2_FAILURE;
                                            }
                                            else
                                            {
                                                /* after all, we found this is a empty string */
                                                status = adb_KeyInfoTypeChoice_set_KeyName(_KeyInfoTypeChoice, env,
                                                                   "");
                                            }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for KeyName ");
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
                      * building KeyValue element
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
                                 
                                 element_qname = axutil_qname_create(env, "KeyValue", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

                           if (adb_KeyValueType_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_KeyValueType");

                                      status =  adb_KeyValueType_deserialize((adb_KeyValueType_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_TRUE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element KeyValue");
                                      }
                                      else
                                      {
                                          status = adb_KeyInfoTypeChoice_set_KeyValue(_KeyInfoTypeChoice, env,
                                                                   (adb_KeyValueType_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for KeyValue ");
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
                      * building RetrievalMethod element
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
                                 
                                 element_qname = axutil_qname_create(env, "RetrievalMethod", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

                           if (adb_RetrievalMethodType_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_RetrievalMethodType");

                                      status =  adb_RetrievalMethodType_deserialize((adb_RetrievalMethodType_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_TRUE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element RetrievalMethod");
                                      }
                                      else
                                      {
                                          status = adb_KeyInfoTypeChoice_set_RetrievalMethod(_KeyInfoTypeChoice, env,
                                                                   (adb_RetrievalMethodType_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for RetrievalMethod ");
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
                      * building X509Data element
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
                                 
                                 element_qname = axutil_qname_create(env, "X509Data", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

                           if (adb_X509DataType_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_X509DataType");

                                      status =  adb_X509DataType_deserialize((adb_X509DataType_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_TRUE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element X509Data");
                                      }
                                      else
                                      {
                                          status = adb_KeyInfoTypeChoice_set_X509Data(_KeyInfoTypeChoice, env,
                                                                   (adb_X509DataType_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for X509Data ");
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
                      * building PGPData element
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
                                 
                                 element_qname = axutil_qname_create(env, "PGPData", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

                           if (adb_PGPDataType_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_PGPDataType");

                                      status =  adb_PGPDataType_deserialize((adb_PGPDataType_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_TRUE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element PGPData");
                                      }
                                      else
                                      {
                                          status = adb_KeyInfoTypeChoice_set_PGPData(_KeyInfoTypeChoice, env,
                                                                   (adb_PGPDataType_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for PGPData ");
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
                      * building SPKIData element
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
                                 
                                 element_qname = axutil_qname_create(env, "SPKIData", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

                           if (adb_SPKIDataType_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_SPKIDataType");

                                      status =  adb_SPKIDataType_deserialize((adb_SPKIDataType_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_TRUE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element SPKIData");
                                      }
                                      else
                                      {
                                          status = adb_KeyInfoTypeChoice_set_SPKIData(_KeyInfoTypeChoice, env,
                                                                   (adb_SPKIDataType_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for SPKIData ");
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
                      * building MgmtData element
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
                                 
                                 element_qname = axutil_qname_create(env, "MgmtData", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

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
                                            status = adb_KeyInfoTypeChoice_set_MgmtData(_KeyInfoTypeChoice, env,
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
                                                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element MgmtData");
                                                status = AXIS2_FAILURE;
                                            }
                                            else
                                            {
                                                /* after all, we found this is a empty string */
                                                status = adb_KeyInfoTypeChoice_set_MgmtData(_KeyInfoTypeChoice, env,
                                                                   "");
                                            }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for MgmtData ");
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
                      * building extraElement element
                      */
                     
                     
                     
                                    /*
                                     * because elements are ordered this works fine
                                     */
                                  
                                   
                                   if(current_node != NULL && is_early_node_valid)
                                   {
                                       current_node = axiom_node_get_next_sibling(current_node, env);
                                       
                                       
                                   }
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
                                          status = adb_KeyInfoTypeChoice_set_extraElement(_KeyInfoTypeChoice, env,
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
                 
                *dp_parent = current_node;
                *dp_is_early_node_valid = is_early_node_valid;
            
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_KeyInfoTypeChoice_is_particle()
          {
            
                 return AXIS2_TRUE;
              
          }


          void AXIS2_CALL
          adb_KeyInfoTypeChoice_declare_parent_namespaces(
                    adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_KeyInfoTypeChoice_serialize(
                adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_KeyInfoTypeChoice == NULL)
            {
                return adb_KeyInfoTypeChoice_serialize_obj(
                    _KeyInfoTypeChoice, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _KeyInfoTypeChoice, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_KeyInfoTypeChoice");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_KeyInfoTypeChoice_serialize_obj(
                adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
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
                    
                    axis2_char_t text_value_3[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_4[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_5[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_6[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t *text_value_7;
                    axis2_char_t *text_value_7_temp;
                    
                    axis2_char_t *text_value_8;
                    axis2_char_t *text_value_8_temp;
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
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
                        if(element_ns)
                        {
                            axiom_namespace_free(element_ns, env);
                        }
                  }
              }
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"KeyInfoTypeChoice\"", NULL);
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
                                 "http://www.w3.org/2000/09/xmldsig#",
                                 xsi_prefix);
            xsi_type_attri = axiom_attribute_create (env, "type", "KeyInfoTypeChoice", xsi_ns);
            
            axiom_element_add_attribute (parent_element, env, xsi_type_attri, parent);
        
                if(0 == axutil_strcmp(_KeyInfoTypeChoice->current_choice, "http://www.w3.org/2000/09/xmldsig#:KeyName"))
                {
                
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.w3.org/2000/09/xmldsig#",
                                            p_prefix));
                       }
                      

                   if (!_KeyInfoTypeChoice->is_valid_KeyName)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property KeyName");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("KeyName"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("KeyName")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing KeyName element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sKeyName>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sKeyName>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_1 = _KeyInfoTypeChoice->property_KeyName;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_1_temp = axutil_xml_quote_string(env, text_value_1, AXIS2_TRUE);
                           if (text_value_1_temp)
                           {
                               axutil_stream_write(stream, env, text_value_1_temp, axutil_strlen(text_value_1_temp));
                               AXIS2_FREE(env->allocator, text_value_1_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 
                if(0 == axutil_strcmp(_KeyInfoTypeChoice->current_choice, "http://www.w3.org/2000/09/xmldsig#:KeyValue"))
                {
                
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.w3.org/2000/09/xmldsig#",
                                            p_prefix));
                       }
                      

                   if (!_KeyInfoTypeChoice->is_valid_KeyValue)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property KeyValue");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("KeyValue"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("KeyValue")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing KeyValue element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sKeyValue",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sKeyValue>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_KeyValueType_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_KeyValueType_serialize(_KeyInfoTypeChoice->property_KeyValue, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_KeyValueType_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_KeyValueType_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 
                if(0 == axutil_strcmp(_KeyInfoTypeChoice->current_choice, "http://www.w3.org/2000/09/xmldsig#:RetrievalMethod"))
                {
                
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.w3.org/2000/09/xmldsig#",
                                            p_prefix));
                       }
                      

                   if (!_KeyInfoTypeChoice->is_valid_RetrievalMethod)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property RetrievalMethod");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("RetrievalMethod"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("RetrievalMethod")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing RetrievalMethod element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sRetrievalMethod",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sRetrievalMethod>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_RetrievalMethodType_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_RetrievalMethodType_serialize(_KeyInfoTypeChoice->property_RetrievalMethod, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_RetrievalMethodType_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_RetrievalMethodType_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 
                if(0 == axutil_strcmp(_KeyInfoTypeChoice->current_choice, "http://www.w3.org/2000/09/xmldsig#:X509Data"))
                {
                
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.w3.org/2000/09/xmldsig#",
                                            p_prefix));
                       }
                      

                   if (!_KeyInfoTypeChoice->is_valid_X509Data)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property X509Data");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("X509Data"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("X509Data")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing X509Data element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sX509Data",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sX509Data>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_X509DataType_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_X509DataType_serialize(_KeyInfoTypeChoice->property_X509Data, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_X509DataType_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_X509DataType_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 
                if(0 == axutil_strcmp(_KeyInfoTypeChoice->current_choice, "http://www.w3.org/2000/09/xmldsig#:PGPData"))
                {
                
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.w3.org/2000/09/xmldsig#",
                                            p_prefix));
                       }
                      

                   if (!_KeyInfoTypeChoice->is_valid_PGPData)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property PGPData");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("PGPData"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("PGPData")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing PGPData element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sPGPData",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sPGPData>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_PGPDataType_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_PGPDataType_serialize(_KeyInfoTypeChoice->property_PGPData, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_PGPDataType_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_PGPDataType_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 
                if(0 == axutil_strcmp(_KeyInfoTypeChoice->current_choice, "http://www.w3.org/2000/09/xmldsig#:SPKIData"))
                {
                
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.w3.org/2000/09/xmldsig#",
                                            p_prefix));
                       }
                      

                   if (!_KeyInfoTypeChoice->is_valid_SPKIData)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property SPKIData");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("SPKIData"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("SPKIData")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing SPKIData element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sSPKIData",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sSPKIData>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_SPKIDataType_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_SPKIDataType_serialize(_KeyInfoTypeChoice->property_SPKIData, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_SPKIDataType_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_SPKIDataType_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 
                if(0 == axutil_strcmp(_KeyInfoTypeChoice->current_choice, "http://www.w3.org/2000/09/xmldsig#:MgmtData"))
                {
                
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.w3.org/2000/09/xmldsig#", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.w3.org/2000/09/xmldsig#",
                                            p_prefix));
                       }
                      

                   if (!_KeyInfoTypeChoice->is_valid_MgmtData)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property MgmtData");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("MgmtData"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("MgmtData")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing MgmtData element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sMgmtData>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sMgmtData>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_7 = _KeyInfoTypeChoice->property_MgmtData;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_7_temp = axutil_xml_quote_string(env, text_value_7, AXIS2_TRUE);
                           if (text_value_7_temp)
                           {
                               axutil_stream_write(stream, env, text_value_7_temp, axutil_strlen(text_value_7_temp));
                               AXIS2_FREE(env->allocator, text_value_7_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_7, axutil_strlen(text_value_7));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 
                if(0 == axutil_strcmp(_KeyInfoTypeChoice->current_choice, ":extraElement"))
                {
                
                       p_prefix = NULL;
                      

                   if (!_KeyInfoTypeChoice->is_valid_extraElement)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property extraElement");
                            return NULL;
                          
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
                    
                                text_value_8 = axiom_node_to_string(_KeyInfoTypeChoice->property_extraElement, env);
                                
                                axutil_stream_write(stream, env, text_value_8, axutil_strlen(text_value_8));
                                
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 

            return parent;
        }


        

            /**
             * Getter for KeyName by  Property Number 1
             */
            axis2_char_t* AXIS2_CALL
            adb_KeyInfoTypeChoice_get_property1(
                adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                const axutil_env_t *env)
            {
                return adb_KeyInfoTypeChoice_get_KeyName(_KeyInfoTypeChoice,
                                             env);
            }

            /**
             * getter for KeyName.
             */
            axis2_char_t* AXIS2_CALL
            adb_KeyInfoTypeChoice_get_KeyName(
                    adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, NULL);
                  

                return _KeyInfoTypeChoice->property_KeyName;
             }

            /**
             * setter for KeyName
             */
            axis2_status_t AXIS2_CALL
            adb_KeyInfoTypeChoice_set_KeyName(
                    adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_KeyName)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, AXIS2_FAILURE);
                
                if(_KeyInfoTypeChoice->is_valid_KeyName &&
                        arg_KeyName == _KeyInfoTypeChoice->property_KeyName)
                {
                    _KeyInfoTypeChoice->current_choice = "http://www.w3.org/2000/09/xmldsig#:KeyName";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_KeyName)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "KeyName is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_KeyInfoTypeChoice_reset_KeyName(_KeyInfoTypeChoice, env);

                
                if(NULL == arg_KeyName)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _KeyInfoTypeChoice->property_KeyName = (axis2_char_t *)axutil_strdup(env, arg_KeyName);
                        if(NULL == _KeyInfoTypeChoice->property_KeyName)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for KeyName");
                            return AXIS2_FAILURE;
                        }
                        _KeyInfoTypeChoice->is_valid_KeyName = AXIS2_TRUE;
                    _KeyInfoTypeChoice->current_choice = "http://www.w3.org/2000/09/xmldsig#:KeyName";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for KeyName
            */
           axis2_status_t AXIS2_CALL
           adb_KeyInfoTypeChoice_reset_KeyName(
                   adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, AXIS2_FAILURE);
               

               
            
                
                if(_KeyInfoTypeChoice->property_KeyName != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _KeyInfoTypeChoice->property_KeyName);
                     _KeyInfoTypeChoice->property_KeyName = NULL;
                }
            
                
                
                _KeyInfoTypeChoice->is_valid_KeyName = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether KeyName is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_KeyInfoTypeChoice_is_KeyName_nil(
                   adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, AXIS2_TRUE);
               
               return !_KeyInfoTypeChoice->is_valid_KeyName;
           }

           /**
            * Set KeyName to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_KeyInfoTypeChoice_set_KeyName_nil(
                   adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                   const axutil_env_t *env)
           {
               return adb_KeyInfoTypeChoice_reset_KeyName(_KeyInfoTypeChoice, env);
           }

           

            /**
             * Getter for KeyValue by  Property Number 2
             */
            adb_KeyValueType_t* AXIS2_CALL
            adb_KeyInfoTypeChoice_get_property2(
                adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                const axutil_env_t *env)
            {
                return adb_KeyInfoTypeChoice_get_KeyValue(_KeyInfoTypeChoice,
                                             env);
            }

            /**
             * getter for KeyValue.
             */
            adb_KeyValueType_t* AXIS2_CALL
            adb_KeyInfoTypeChoice_get_KeyValue(
                    adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, NULL);
                  

                return _KeyInfoTypeChoice->property_KeyValue;
             }

            /**
             * setter for KeyValue
             */
            axis2_status_t AXIS2_CALL
            adb_KeyInfoTypeChoice_set_KeyValue(
                    adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                    const axutil_env_t *env,
                    adb_KeyValueType_t*  arg_KeyValue)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, AXIS2_FAILURE);
                
                if(_KeyInfoTypeChoice->is_valid_KeyValue &&
                        arg_KeyValue == _KeyInfoTypeChoice->property_KeyValue)
                {
                    _KeyInfoTypeChoice->current_choice = "http://www.w3.org/2000/09/xmldsig#:KeyValue";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_KeyValue)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "KeyValue is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_KeyInfoTypeChoice_reset_KeyValue(_KeyInfoTypeChoice, env);

                
                if(NULL == arg_KeyValue)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _KeyInfoTypeChoice->property_KeyValue = arg_KeyValue;
                        _KeyInfoTypeChoice->is_valid_KeyValue = AXIS2_TRUE;
                    _KeyInfoTypeChoice->current_choice = "http://www.w3.org/2000/09/xmldsig#:KeyValue";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for KeyValue
            */
           axis2_status_t AXIS2_CALL
           adb_KeyInfoTypeChoice_reset_KeyValue(
                   adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, AXIS2_FAILURE);
               

               
            
                
                if(_KeyInfoTypeChoice->property_KeyValue != NULL)
                {
                   
                   adb_KeyValueType_free(_KeyInfoTypeChoice->property_KeyValue, env);
                     _KeyInfoTypeChoice->property_KeyValue = NULL;
                }
            
                
                
                _KeyInfoTypeChoice->is_valid_KeyValue = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether KeyValue is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_KeyInfoTypeChoice_is_KeyValue_nil(
                   adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, AXIS2_TRUE);
               
               return !_KeyInfoTypeChoice->is_valid_KeyValue;
           }

           /**
            * Set KeyValue to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_KeyInfoTypeChoice_set_KeyValue_nil(
                   adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                   const axutil_env_t *env)
           {
               return adb_KeyInfoTypeChoice_reset_KeyValue(_KeyInfoTypeChoice, env);
           }

           

            /**
             * Getter for RetrievalMethod by  Property Number 3
             */
            adb_RetrievalMethodType_t* AXIS2_CALL
            adb_KeyInfoTypeChoice_get_property3(
                adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                const axutil_env_t *env)
            {
                return adb_KeyInfoTypeChoice_get_RetrievalMethod(_KeyInfoTypeChoice,
                                             env);
            }

            /**
             * getter for RetrievalMethod.
             */
            adb_RetrievalMethodType_t* AXIS2_CALL
            adb_KeyInfoTypeChoice_get_RetrievalMethod(
                    adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, NULL);
                  

                return _KeyInfoTypeChoice->property_RetrievalMethod;
             }

            /**
             * setter for RetrievalMethod
             */
            axis2_status_t AXIS2_CALL
            adb_KeyInfoTypeChoice_set_RetrievalMethod(
                    adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                    const axutil_env_t *env,
                    adb_RetrievalMethodType_t*  arg_RetrievalMethod)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, AXIS2_FAILURE);
                
                if(_KeyInfoTypeChoice->is_valid_RetrievalMethod &&
                        arg_RetrievalMethod == _KeyInfoTypeChoice->property_RetrievalMethod)
                {
                    _KeyInfoTypeChoice->current_choice = "http://www.w3.org/2000/09/xmldsig#:RetrievalMethod";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_RetrievalMethod)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "RetrievalMethod is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_KeyInfoTypeChoice_reset_RetrievalMethod(_KeyInfoTypeChoice, env);

                
                if(NULL == arg_RetrievalMethod)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _KeyInfoTypeChoice->property_RetrievalMethod = arg_RetrievalMethod;
                        _KeyInfoTypeChoice->is_valid_RetrievalMethod = AXIS2_TRUE;
                    _KeyInfoTypeChoice->current_choice = "http://www.w3.org/2000/09/xmldsig#:RetrievalMethod";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for RetrievalMethod
            */
           axis2_status_t AXIS2_CALL
           adb_KeyInfoTypeChoice_reset_RetrievalMethod(
                   adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, AXIS2_FAILURE);
               

               
            
                
                if(_KeyInfoTypeChoice->property_RetrievalMethod != NULL)
                {
                   
                   adb_RetrievalMethodType_free(_KeyInfoTypeChoice->property_RetrievalMethod, env);
                     _KeyInfoTypeChoice->property_RetrievalMethod = NULL;
                }
            
                
                
                _KeyInfoTypeChoice->is_valid_RetrievalMethod = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether RetrievalMethod is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_KeyInfoTypeChoice_is_RetrievalMethod_nil(
                   adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, AXIS2_TRUE);
               
               return !_KeyInfoTypeChoice->is_valid_RetrievalMethod;
           }

           /**
            * Set RetrievalMethod to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_KeyInfoTypeChoice_set_RetrievalMethod_nil(
                   adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                   const axutil_env_t *env)
           {
               return adb_KeyInfoTypeChoice_reset_RetrievalMethod(_KeyInfoTypeChoice, env);
           }

           

            /**
             * Getter for X509Data by  Property Number 4
             */
            adb_X509DataType_t* AXIS2_CALL
            adb_KeyInfoTypeChoice_get_property4(
                adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                const axutil_env_t *env)
            {
                return adb_KeyInfoTypeChoice_get_X509Data(_KeyInfoTypeChoice,
                                             env);
            }

            /**
             * getter for X509Data.
             */
            adb_X509DataType_t* AXIS2_CALL
            adb_KeyInfoTypeChoice_get_X509Data(
                    adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, NULL);
                  

                return _KeyInfoTypeChoice->property_X509Data;
             }

            /**
             * setter for X509Data
             */
            axis2_status_t AXIS2_CALL
            adb_KeyInfoTypeChoice_set_X509Data(
                    adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                    const axutil_env_t *env,
                    adb_X509DataType_t*  arg_X509Data)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, AXIS2_FAILURE);
                
                if(_KeyInfoTypeChoice->is_valid_X509Data &&
                        arg_X509Data == _KeyInfoTypeChoice->property_X509Data)
                {
                    _KeyInfoTypeChoice->current_choice = "http://www.w3.org/2000/09/xmldsig#:X509Data";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_X509Data)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "X509Data is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_KeyInfoTypeChoice_reset_X509Data(_KeyInfoTypeChoice, env);

                
                if(NULL == arg_X509Data)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _KeyInfoTypeChoice->property_X509Data = arg_X509Data;
                        _KeyInfoTypeChoice->is_valid_X509Data = AXIS2_TRUE;
                    _KeyInfoTypeChoice->current_choice = "http://www.w3.org/2000/09/xmldsig#:X509Data";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for X509Data
            */
           axis2_status_t AXIS2_CALL
           adb_KeyInfoTypeChoice_reset_X509Data(
                   adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, AXIS2_FAILURE);
               

               
            
                
                if(_KeyInfoTypeChoice->property_X509Data != NULL)
                {
                   
                   adb_X509DataType_free(_KeyInfoTypeChoice->property_X509Data, env);
                     _KeyInfoTypeChoice->property_X509Data = NULL;
                }
            
                
                
                _KeyInfoTypeChoice->is_valid_X509Data = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether X509Data is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_KeyInfoTypeChoice_is_X509Data_nil(
                   adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, AXIS2_TRUE);
               
               return !_KeyInfoTypeChoice->is_valid_X509Data;
           }

           /**
            * Set X509Data to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_KeyInfoTypeChoice_set_X509Data_nil(
                   adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                   const axutil_env_t *env)
           {
               return adb_KeyInfoTypeChoice_reset_X509Data(_KeyInfoTypeChoice, env);
           }

           

            /**
             * Getter for PGPData by  Property Number 5
             */
            adb_PGPDataType_t* AXIS2_CALL
            adb_KeyInfoTypeChoice_get_property5(
                adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                const axutil_env_t *env)
            {
                return adb_KeyInfoTypeChoice_get_PGPData(_KeyInfoTypeChoice,
                                             env);
            }

            /**
             * getter for PGPData.
             */
            adb_PGPDataType_t* AXIS2_CALL
            adb_KeyInfoTypeChoice_get_PGPData(
                    adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, NULL);
                  

                return _KeyInfoTypeChoice->property_PGPData;
             }

            /**
             * setter for PGPData
             */
            axis2_status_t AXIS2_CALL
            adb_KeyInfoTypeChoice_set_PGPData(
                    adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                    const axutil_env_t *env,
                    adb_PGPDataType_t*  arg_PGPData)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, AXIS2_FAILURE);
                
                if(_KeyInfoTypeChoice->is_valid_PGPData &&
                        arg_PGPData == _KeyInfoTypeChoice->property_PGPData)
                {
                    _KeyInfoTypeChoice->current_choice = "http://www.w3.org/2000/09/xmldsig#:PGPData";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_PGPData)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "PGPData is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_KeyInfoTypeChoice_reset_PGPData(_KeyInfoTypeChoice, env);

                
                if(NULL == arg_PGPData)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _KeyInfoTypeChoice->property_PGPData = arg_PGPData;
                        _KeyInfoTypeChoice->is_valid_PGPData = AXIS2_TRUE;
                    _KeyInfoTypeChoice->current_choice = "http://www.w3.org/2000/09/xmldsig#:PGPData";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for PGPData
            */
           axis2_status_t AXIS2_CALL
           adb_KeyInfoTypeChoice_reset_PGPData(
                   adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, AXIS2_FAILURE);
               

               
            
                
                if(_KeyInfoTypeChoice->property_PGPData != NULL)
                {
                   
                   adb_PGPDataType_free(_KeyInfoTypeChoice->property_PGPData, env);
                     _KeyInfoTypeChoice->property_PGPData = NULL;
                }
            
                
                
                _KeyInfoTypeChoice->is_valid_PGPData = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether PGPData is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_KeyInfoTypeChoice_is_PGPData_nil(
                   adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, AXIS2_TRUE);
               
               return !_KeyInfoTypeChoice->is_valid_PGPData;
           }

           /**
            * Set PGPData to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_KeyInfoTypeChoice_set_PGPData_nil(
                   adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                   const axutil_env_t *env)
           {
               return adb_KeyInfoTypeChoice_reset_PGPData(_KeyInfoTypeChoice, env);
           }

           

            /**
             * Getter for SPKIData by  Property Number 6
             */
            adb_SPKIDataType_t* AXIS2_CALL
            adb_KeyInfoTypeChoice_get_property6(
                adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                const axutil_env_t *env)
            {
                return adb_KeyInfoTypeChoice_get_SPKIData(_KeyInfoTypeChoice,
                                             env);
            }

            /**
             * getter for SPKIData.
             */
            adb_SPKIDataType_t* AXIS2_CALL
            adb_KeyInfoTypeChoice_get_SPKIData(
                    adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, NULL);
                  

                return _KeyInfoTypeChoice->property_SPKIData;
             }

            /**
             * setter for SPKIData
             */
            axis2_status_t AXIS2_CALL
            adb_KeyInfoTypeChoice_set_SPKIData(
                    adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                    const axutil_env_t *env,
                    adb_SPKIDataType_t*  arg_SPKIData)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, AXIS2_FAILURE);
                
                if(_KeyInfoTypeChoice->is_valid_SPKIData &&
                        arg_SPKIData == _KeyInfoTypeChoice->property_SPKIData)
                {
                    _KeyInfoTypeChoice->current_choice = "http://www.w3.org/2000/09/xmldsig#:SPKIData";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_SPKIData)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "SPKIData is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_KeyInfoTypeChoice_reset_SPKIData(_KeyInfoTypeChoice, env);

                
                if(NULL == arg_SPKIData)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _KeyInfoTypeChoice->property_SPKIData = arg_SPKIData;
                        _KeyInfoTypeChoice->is_valid_SPKIData = AXIS2_TRUE;
                    _KeyInfoTypeChoice->current_choice = "http://www.w3.org/2000/09/xmldsig#:SPKIData";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for SPKIData
            */
           axis2_status_t AXIS2_CALL
           adb_KeyInfoTypeChoice_reset_SPKIData(
                   adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, AXIS2_FAILURE);
               

               
            
                
                if(_KeyInfoTypeChoice->property_SPKIData != NULL)
                {
                   
                   adb_SPKIDataType_free(_KeyInfoTypeChoice->property_SPKIData, env);
                     _KeyInfoTypeChoice->property_SPKIData = NULL;
                }
            
                
                
                _KeyInfoTypeChoice->is_valid_SPKIData = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether SPKIData is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_KeyInfoTypeChoice_is_SPKIData_nil(
                   adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, AXIS2_TRUE);
               
               return !_KeyInfoTypeChoice->is_valid_SPKIData;
           }

           /**
            * Set SPKIData to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_KeyInfoTypeChoice_set_SPKIData_nil(
                   adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                   const axutil_env_t *env)
           {
               return adb_KeyInfoTypeChoice_reset_SPKIData(_KeyInfoTypeChoice, env);
           }

           

            /**
             * Getter for MgmtData by  Property Number 7
             */
            axis2_char_t* AXIS2_CALL
            adb_KeyInfoTypeChoice_get_property7(
                adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                const axutil_env_t *env)
            {
                return adb_KeyInfoTypeChoice_get_MgmtData(_KeyInfoTypeChoice,
                                             env);
            }

            /**
             * getter for MgmtData.
             */
            axis2_char_t* AXIS2_CALL
            adb_KeyInfoTypeChoice_get_MgmtData(
                    adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, NULL);
                  

                return _KeyInfoTypeChoice->property_MgmtData;
             }

            /**
             * setter for MgmtData
             */
            axis2_status_t AXIS2_CALL
            adb_KeyInfoTypeChoice_set_MgmtData(
                    adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_MgmtData)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, AXIS2_FAILURE);
                
                if(_KeyInfoTypeChoice->is_valid_MgmtData &&
                        arg_MgmtData == _KeyInfoTypeChoice->property_MgmtData)
                {
                    _KeyInfoTypeChoice->current_choice = "http://www.w3.org/2000/09/xmldsig#:MgmtData";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_MgmtData)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "MgmtData is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_KeyInfoTypeChoice_reset_MgmtData(_KeyInfoTypeChoice, env);

                
                if(NULL == arg_MgmtData)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _KeyInfoTypeChoice->property_MgmtData = (axis2_char_t *)axutil_strdup(env, arg_MgmtData);
                        if(NULL == _KeyInfoTypeChoice->property_MgmtData)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for MgmtData");
                            return AXIS2_FAILURE;
                        }
                        _KeyInfoTypeChoice->is_valid_MgmtData = AXIS2_TRUE;
                    _KeyInfoTypeChoice->current_choice = "http://www.w3.org/2000/09/xmldsig#:MgmtData";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for MgmtData
            */
           axis2_status_t AXIS2_CALL
           adb_KeyInfoTypeChoice_reset_MgmtData(
                   adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, AXIS2_FAILURE);
               

               
            
                
                if(_KeyInfoTypeChoice->property_MgmtData != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _KeyInfoTypeChoice->property_MgmtData);
                     _KeyInfoTypeChoice->property_MgmtData = NULL;
                }
            
                
                
                _KeyInfoTypeChoice->is_valid_MgmtData = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether MgmtData is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_KeyInfoTypeChoice_is_MgmtData_nil(
                   adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, AXIS2_TRUE);
               
               return !_KeyInfoTypeChoice->is_valid_MgmtData;
           }

           /**
            * Set MgmtData to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_KeyInfoTypeChoice_set_MgmtData_nil(
                   adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                   const axutil_env_t *env)
           {
               return adb_KeyInfoTypeChoice_reset_MgmtData(_KeyInfoTypeChoice, env);
           }

           

            /**
             * Getter for extraElement by  Property Number 8
             */
            axiom_node_t* AXIS2_CALL
            adb_KeyInfoTypeChoice_get_property8(
                adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                const axutil_env_t *env)
            {
                return adb_KeyInfoTypeChoice_get_extraElement(_KeyInfoTypeChoice,
                                             env);
            }

            /**
             * getter for extraElement.
             */
            axiom_node_t* AXIS2_CALL
            adb_KeyInfoTypeChoice_get_extraElement(
                    adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, NULL);
                  

                return _KeyInfoTypeChoice->property_extraElement;
             }

            /**
             * setter for extraElement
             */
            axis2_status_t AXIS2_CALL
            adb_KeyInfoTypeChoice_set_extraElement(
                    adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                    const axutil_env_t *env,
                    axiom_node_t*  arg_extraElement)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, AXIS2_FAILURE);
                
                if(_KeyInfoTypeChoice->is_valid_extraElement &&
                        arg_extraElement == _KeyInfoTypeChoice->property_extraElement)
                {
                    _KeyInfoTypeChoice->current_choice = ":extraElement";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_extraElement)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "extraElement is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_KeyInfoTypeChoice_reset_extraElement(_KeyInfoTypeChoice, env);

                
                if(NULL == arg_extraElement)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _KeyInfoTypeChoice->property_extraElement = arg_extraElement;
                        _KeyInfoTypeChoice->is_valid_extraElement = AXIS2_TRUE;
                    _KeyInfoTypeChoice->current_choice = ":extraElement";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for extraElement
            */
           axis2_status_t AXIS2_CALL
           adb_KeyInfoTypeChoice_reset_extraElement(
                   adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, AXIS2_FAILURE);
               

               _KeyInfoTypeChoice->is_valid_extraElement = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether extraElement is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_KeyInfoTypeChoice_is_extraElement_nil(
                   adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _KeyInfoTypeChoice, AXIS2_TRUE);
               
               return !_KeyInfoTypeChoice->is_valid_extraElement;
           }

           /**
            * Set extraElement to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_KeyInfoTypeChoice_set_extraElement_nil(
                   adb_KeyInfoTypeChoice_t* _KeyInfoTypeChoice,
                   const axutil_env_t *env)
           {
               return adb_KeyInfoTypeChoice_reset_extraElement(_KeyInfoTypeChoice, env);
           }

           

