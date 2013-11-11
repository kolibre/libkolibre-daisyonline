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
         * adb_X509DataTypeChoice_type0.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_X509DataTypeChoice_type0.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = X509DataTypeChoice_type0
                 * Namespace URI = http://www.w3.org/2000/09/xmldsig#
                 * Namespace Prefix = ns5
                 */
           


        struct adb_X509DataTypeChoice_type0
        {
            axis2_char_t *property_TypeName;

            adb_X509IssuerSerialType_t* property_X509IssuerSerial;

                
                axis2_bool_t is_valid_X509IssuerSerial;
            axutil_base64_binary_t* property_X509SKI;

                
                axis2_bool_t is_valid_X509SKI;
            axis2_char_t* property_X509SubjectName;

                
                axis2_bool_t is_valid_X509SubjectName;
            axutil_base64_binary_t* property_X509Certificate;

                
                axis2_bool_t is_valid_X509Certificate;
            axutil_base64_binary_t* property_X509CRL;

                
                axis2_bool_t is_valid_X509CRL;
            axiom_node_t* property_extraElement;

                
                axis2_bool_t is_valid_extraElement;
            
                axis2_char_t *current_choice;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_X509DataTypeChoice_type0_set_X509IssuerSerial_nil(
                        adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_X509DataTypeChoice_type0_set_X509SKI_nil(
                        adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_X509DataTypeChoice_type0_set_X509SubjectName_nil(
                        adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_X509DataTypeChoice_type0_set_X509Certificate_nil(
                        adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_X509DataTypeChoice_type0_set_X509CRL_nil(
                        adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_X509DataTypeChoice_type0_set_extraElement_nil(
                        adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_X509DataTypeChoice_type0_t* AXIS2_CALL
        adb_X509DataTypeChoice_type0_create(
            const axutil_env_t *env)
        {
            adb_X509DataTypeChoice_type0_t *_X509DataTypeChoice_type0 = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _X509DataTypeChoice_type0 = (adb_X509DataTypeChoice_type0_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_X509DataTypeChoice_type0_t));

            if(NULL == _X509DataTypeChoice_type0)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_X509DataTypeChoice_type0, 0, sizeof(adb_X509DataTypeChoice_type0_t));

            _X509DataTypeChoice_type0->property_TypeName = axutil_strdup(env, "adb_X509DataTypeChoice_type0");
            _X509DataTypeChoice_type0->property_X509IssuerSerial  = NULL;
                  _X509DataTypeChoice_type0->is_valid_X509IssuerSerial  = AXIS2_FALSE;
            _X509DataTypeChoice_type0->property_X509SKI  = NULL;
                  _X509DataTypeChoice_type0->is_valid_X509SKI  = AXIS2_FALSE;
            _X509DataTypeChoice_type0->property_X509SubjectName  = NULL;
                  _X509DataTypeChoice_type0->is_valid_X509SubjectName  = AXIS2_FALSE;
            _X509DataTypeChoice_type0->property_X509Certificate  = NULL;
                  _X509DataTypeChoice_type0->is_valid_X509Certificate  = AXIS2_FALSE;
            _X509DataTypeChoice_type0->property_X509CRL  = NULL;
                  _X509DataTypeChoice_type0->is_valid_X509CRL  = AXIS2_FALSE;
            _X509DataTypeChoice_type0->is_valid_extraElement  = AXIS2_FALSE;
            _X509DataTypeChoice_type0->current_choice = "";
            

            return _X509DataTypeChoice_type0;
        }

        adb_X509DataTypeChoice_type0_t* AXIS2_CALL
        adb_X509DataTypeChoice_type0_create_with_values(
            const axutil_env_t *env,
                adb_X509IssuerSerialType_t* _X509IssuerSerial,
                axutil_base64_binary_t* _X509SKI,
                axis2_char_t* _X509SubjectName,
                axutil_base64_binary_t* _X509Certificate,
                axutil_base64_binary_t* _X509CRL,
                axiom_node_t* _extraElement)
        {
            adb_X509DataTypeChoice_type0_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_X509DataTypeChoice_type0_create(env);

            
              status = adb_X509DataTypeChoice_type0_set_X509IssuerSerial(
                                     adb_obj,
                                     env,
                                     _X509IssuerSerial);
              if(status == AXIS2_FAILURE) {
                  adb_X509DataTypeChoice_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_X509DataTypeChoice_type0_set_X509SKI(
                                     adb_obj,
                                     env,
                                     _X509SKI);
              if(status == AXIS2_FAILURE) {
                  adb_X509DataTypeChoice_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_X509DataTypeChoice_type0_set_X509SubjectName(
                                     adb_obj,
                                     env,
                                     _X509SubjectName);
              if(status == AXIS2_FAILURE) {
                  adb_X509DataTypeChoice_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_X509DataTypeChoice_type0_set_X509Certificate(
                                     adb_obj,
                                     env,
                                     _X509Certificate);
              if(status == AXIS2_FAILURE) {
                  adb_X509DataTypeChoice_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_X509DataTypeChoice_type0_set_X509CRL(
                                     adb_obj,
                                     env,
                                     _X509CRL);
              if(status == AXIS2_FAILURE) {
                  adb_X509DataTypeChoice_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_X509DataTypeChoice_type0_set_extraElement(
                                     adb_obj,
                                     env,
                                     _extraElement);
              if(status == AXIS2_FAILURE) {
                  adb_X509DataTypeChoice_type0_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        adb_X509IssuerSerialType_t* AXIS2_CALL
                adb_X509DataTypeChoice_type0_free_popping_value(
                        adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                        const axutil_env_t *env)
                {
                    adb_X509IssuerSerialType_t* value;

                    
                    
                    value = _X509DataTypeChoice_type0->property_X509IssuerSerial;

                    _X509DataTypeChoice_type0->property_X509IssuerSerial = (adb_X509IssuerSerialType_t*)NULL;
                    adb_X509DataTypeChoice_type0_free(_X509DataTypeChoice_type0, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_X509DataTypeChoice_type0_free(
                adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _X509DataTypeChoice_type0,
                env,
                "adb_X509DataTypeChoice_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_X509DataTypeChoice_type0_free_obj(
                adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _X509DataTypeChoice_type0, AXIS2_FAILURE);

            if (_X509DataTypeChoice_type0->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _X509DataTypeChoice_type0->property_TypeName);
            }

            adb_X509DataTypeChoice_type0_reset_X509IssuerSerial(_X509DataTypeChoice_type0, env);
            adb_X509DataTypeChoice_type0_reset_X509SKI(_X509DataTypeChoice_type0, env);
            adb_X509DataTypeChoice_type0_reset_X509SubjectName(_X509DataTypeChoice_type0, env);
            adb_X509DataTypeChoice_type0_reset_X509Certificate(_X509DataTypeChoice_type0, env);
            adb_X509DataTypeChoice_type0_reset_X509CRL(_X509DataTypeChoice_type0, env);
            adb_X509DataTypeChoice_type0_reset_extraElement(_X509DataTypeChoice_type0, env);
            

            if(_X509DataTypeChoice_type0)
            {
                AXIS2_FREE(env->allocator, _X509DataTypeChoice_type0);
                _X509DataTypeChoice_type0 = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_X509DataTypeChoice_type0_deserialize(
                adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _X509DataTypeChoice_type0,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_X509DataTypeChoice_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_X509DataTypeChoice_type0_deserialize_obj(
                adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
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
            AXIS2_PARAM_CHECK(env->error, _X509DataTypeChoice_type0, AXIS2_FAILURE);

            
                         first_node = parent;
                    

                     
                     /*
                      * building X509IssuerSerial element
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
                                   
                                 element_qname = axutil_qname_create(env, "X509IssuerSerial", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

                           if (adb_X509IssuerSerialType_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_X509IssuerSerialType");

                                      status =  adb_X509IssuerSerialType_deserialize((adb_X509IssuerSerialType_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_TRUE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element X509IssuerSerial");
                                      }
                                      else
                                      {
                                          status = adb_X509DataTypeChoice_type0_set_X509IssuerSerial(_X509DataTypeChoice_type0, env,
                                                                   (adb_X509IssuerSerialType_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for X509IssuerSerial ");
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
                      * building X509SKI element
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
                                 
                                 element_qname = axutil_qname_create(env, "X509SKI", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

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
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element X509SKI ");
                                          }
                                          else
                                          {
                                            status = adb_X509DataTypeChoice_type0_set_X509SKI(_X509DataTypeChoice_type0, env,
                                                                       (axutil_base64_binary_t*)element);
                                          }
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element X509SKI");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for X509SKI ");
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
                      * building X509SubjectName element
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
                                 
                                 element_qname = axutil_qname_create(env, "X509SubjectName", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

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
                                            status = adb_X509DataTypeChoice_type0_set_X509SubjectName(_X509DataTypeChoice_type0, env,
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
                                                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element X509SubjectName");
                                                status = AXIS2_FAILURE;
                                            }
                                            else
                                            {
                                                /* after all, we found this is a empty string */
                                                status = adb_X509DataTypeChoice_type0_set_X509SubjectName(_X509DataTypeChoice_type0, env,
                                                                   "");
                                            }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for X509SubjectName ");
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
                      * building X509Certificate element
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
                                 
                                 element_qname = axutil_qname_create(env, "X509Certificate", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

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
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element X509Certificate ");
                                          }
                                          else
                                          {
                                            status = adb_X509DataTypeChoice_type0_set_X509Certificate(_X509DataTypeChoice_type0, env,
                                                                       (axutil_base64_binary_t*)element);
                                          }
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element X509Certificate");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for X509Certificate ");
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
                      * building X509CRL element
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
                                 
                                 element_qname = axutil_qname_create(env, "X509CRL", "http://www.w3.org/2000/09/xmldsig#", NULL);
                                 

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
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element X509CRL ");
                                          }
                                          else
                                          {
                                            status = adb_X509DataTypeChoice_type0_set_X509CRL(_X509DataTypeChoice_type0, env,
                                                                       (axutil_base64_binary_t*)element);
                                          }
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element X509CRL");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for X509CRL ");
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
                                          status = adb_X509DataTypeChoice_type0_set_extraElement(_X509DataTypeChoice_type0, env,
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
          adb_X509DataTypeChoice_type0_is_particle()
          {
            
                 return AXIS2_TRUE;
              
          }


          void AXIS2_CALL
          adb_X509DataTypeChoice_type0_declare_parent_namespaces(
                    adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_X509DataTypeChoice_type0_serialize(
                adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_X509DataTypeChoice_type0 == NULL)
            {
                return adb_X509DataTypeChoice_type0_serialize_obj(
                    _X509DataTypeChoice_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _X509DataTypeChoice_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_X509DataTypeChoice_type0");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_X509DataTypeChoice_type0_serialize_obj(
                adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
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
            
                    axis2_char_t text_value_1[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t *text_value_2;
                    axis2_char_t *text_value_2_temp;
                    
                    axis2_char_t *text_value_3;
                    axis2_char_t *text_value_3_temp;
                    
                    axis2_char_t *text_value_4;
                    axis2_char_t *text_value_4_temp;
                    
                    axis2_char_t *text_value_5;
                    axis2_char_t *text_value_5_temp;
                    
                    axis2_char_t *text_value_6;
                    axis2_char_t *text_value_6_temp;
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _X509DataTypeChoice_type0, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
              string_to_stream = ">"; 
              axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
              tag_closed = 1;
            
            }
        
                if(0 == axutil_strcmp(_X509DataTypeChoice_type0->current_choice, "http://www.w3.org/2000/09/xmldsig#:X509IssuerSerial"))
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
                      

                   if (!_X509DataTypeChoice_type0->is_valid_X509IssuerSerial)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property X509IssuerSerial");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("X509IssuerSerial"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("X509IssuerSerial")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing X509IssuerSerial element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sX509IssuerSerial",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sX509IssuerSerial>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_X509IssuerSerialType_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_X509IssuerSerialType_serialize(_X509DataTypeChoice_type0->property_X509IssuerSerial, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_X509IssuerSerialType_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_X509IssuerSerialType_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 
                if(0 == axutil_strcmp(_X509DataTypeChoice_type0->current_choice, "http://www.w3.org/2000/09/xmldsig#:X509SKI"))
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
                      

                   if (!_X509DataTypeChoice_type0->is_valid_X509SKI)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property X509SKI");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("X509SKI"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("X509SKI")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing X509SKI element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sX509SKI>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sX509SKI>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                          text_value_2 =axutil_base64_binary_get_encoded_binary(_X509DataTypeChoice_type0->property_X509SKI, env);
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_2, axutil_strlen(text_value_2));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 
                if(0 == axutil_strcmp(_X509DataTypeChoice_type0->current_choice, "http://www.w3.org/2000/09/xmldsig#:X509SubjectName"))
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
                      

                   if (!_X509DataTypeChoice_type0->is_valid_X509SubjectName)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property X509SubjectName");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("X509SubjectName"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("X509SubjectName")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing X509SubjectName element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sX509SubjectName>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sX509SubjectName>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_3 = _X509DataTypeChoice_type0->property_X509SubjectName;
                           
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

                 
                 }
                 
                if(0 == axutil_strcmp(_X509DataTypeChoice_type0->current_choice, "http://www.w3.org/2000/09/xmldsig#:X509Certificate"))
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
                      

                   if (!_X509DataTypeChoice_type0->is_valid_X509Certificate)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property X509Certificate");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("X509Certificate"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("X509Certificate")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing X509Certificate element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sX509Certificate>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sX509Certificate>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                          text_value_4 =axutil_base64_binary_get_encoded_binary(_X509DataTypeChoice_type0->property_X509Certificate, env);
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_4, axutil_strlen(text_value_4));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 
                if(0 == axutil_strcmp(_X509DataTypeChoice_type0->current_choice, "http://www.w3.org/2000/09/xmldsig#:X509CRL"))
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
                      

                   if (!_X509DataTypeChoice_type0->is_valid_X509CRL)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property X509CRL");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("X509CRL"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("X509CRL")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing X509CRL element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sX509CRL>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sX509CRL>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                          text_value_5 =axutil_base64_binary_get_encoded_binary(_X509DataTypeChoice_type0->property_X509CRL, env);
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_5, axutil_strlen(text_value_5));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 
                if(0 == axutil_strcmp(_X509DataTypeChoice_type0->current_choice, ":extraElement"))
                {
                
                       p_prefix = NULL;
                      

                   if (!_X509DataTypeChoice_type0->is_valid_extraElement)
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
                    
                                text_value_6 = axiom_node_to_string(_X509DataTypeChoice_type0->property_extraElement, env);
                                
                                axutil_stream_write(stream, env, text_value_6, axutil_strlen(text_value_6));
                                
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 

            return parent;
        }


        

            /**
             * Getter for X509IssuerSerial by  Property Number 1
             */
            adb_X509IssuerSerialType_t* AXIS2_CALL
            adb_X509DataTypeChoice_type0_get_property1(
                adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                const axutil_env_t *env)
            {
                return adb_X509DataTypeChoice_type0_get_X509IssuerSerial(_X509DataTypeChoice_type0,
                                             env);
            }

            /**
             * getter for X509IssuerSerial.
             */
            adb_X509IssuerSerialType_t* AXIS2_CALL
            adb_X509DataTypeChoice_type0_get_X509IssuerSerial(
                    adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _X509DataTypeChoice_type0, NULL);
                  

                return _X509DataTypeChoice_type0->property_X509IssuerSerial;
             }

            /**
             * setter for X509IssuerSerial
             */
            axis2_status_t AXIS2_CALL
            adb_X509DataTypeChoice_type0_set_X509IssuerSerial(
                    adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                    const axutil_env_t *env,
                    adb_X509IssuerSerialType_t*  arg_X509IssuerSerial)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _X509DataTypeChoice_type0, AXIS2_FAILURE);
                
                if(_X509DataTypeChoice_type0->is_valid_X509IssuerSerial &&
                        arg_X509IssuerSerial == _X509DataTypeChoice_type0->property_X509IssuerSerial)
                {
                    _X509DataTypeChoice_type0->current_choice = "http://www.w3.org/2000/09/xmldsig#:X509IssuerSerial";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_X509IssuerSerial)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "X509IssuerSerial is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_X509DataTypeChoice_type0_reset_X509IssuerSerial(_X509DataTypeChoice_type0, env);

                
                if(NULL == arg_X509IssuerSerial)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _X509DataTypeChoice_type0->property_X509IssuerSerial = arg_X509IssuerSerial;
                        _X509DataTypeChoice_type0->is_valid_X509IssuerSerial = AXIS2_TRUE;
                    _X509DataTypeChoice_type0->current_choice = "http://www.w3.org/2000/09/xmldsig#:X509IssuerSerial";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for X509IssuerSerial
            */
           axis2_status_t AXIS2_CALL
           adb_X509DataTypeChoice_type0_reset_X509IssuerSerial(
                   adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _X509DataTypeChoice_type0, AXIS2_FAILURE);
               

               
            
                
                if(_X509DataTypeChoice_type0->property_X509IssuerSerial != NULL)
                {
                   
                   adb_X509IssuerSerialType_free(_X509DataTypeChoice_type0->property_X509IssuerSerial, env);
                     _X509DataTypeChoice_type0->property_X509IssuerSerial = NULL;
                }
            
                
                
                _X509DataTypeChoice_type0->is_valid_X509IssuerSerial = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether X509IssuerSerial is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_X509DataTypeChoice_type0_is_X509IssuerSerial_nil(
                   adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _X509DataTypeChoice_type0, AXIS2_TRUE);
               
               return !_X509DataTypeChoice_type0->is_valid_X509IssuerSerial;
           }

           /**
            * Set X509IssuerSerial to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_X509DataTypeChoice_type0_set_X509IssuerSerial_nil(
                   adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                   const axutil_env_t *env)
           {
               return adb_X509DataTypeChoice_type0_reset_X509IssuerSerial(_X509DataTypeChoice_type0, env);
           }

           

            /**
             * Getter for X509SKI by  Property Number 2
             */
            axutil_base64_binary_t* AXIS2_CALL
            adb_X509DataTypeChoice_type0_get_property2(
                adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                const axutil_env_t *env)
            {
                return adb_X509DataTypeChoice_type0_get_X509SKI(_X509DataTypeChoice_type0,
                                             env);
            }

            /**
             * getter for X509SKI.
             */
            axutil_base64_binary_t* AXIS2_CALL
            adb_X509DataTypeChoice_type0_get_X509SKI(
                    adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _X509DataTypeChoice_type0, NULL);
                  

                return _X509DataTypeChoice_type0->property_X509SKI;
             }

            /**
             * setter for X509SKI
             */
            axis2_status_t AXIS2_CALL
            adb_X509DataTypeChoice_type0_set_X509SKI(
                    adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                    const axutil_env_t *env,
                    axutil_base64_binary_t*  arg_X509SKI)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _X509DataTypeChoice_type0, AXIS2_FAILURE);
                
                if(_X509DataTypeChoice_type0->is_valid_X509SKI &&
                        arg_X509SKI == _X509DataTypeChoice_type0->property_X509SKI)
                {
                    _X509DataTypeChoice_type0->current_choice = "http://www.w3.org/2000/09/xmldsig#:X509SKI";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_X509SKI)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "X509SKI is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_X509DataTypeChoice_type0_reset_X509SKI(_X509DataTypeChoice_type0, env);

                
                if(NULL == arg_X509SKI)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _X509DataTypeChoice_type0->property_X509SKI = arg_X509SKI;
                        _X509DataTypeChoice_type0->is_valid_X509SKI = AXIS2_TRUE;
                    _X509DataTypeChoice_type0->current_choice = "http://www.w3.org/2000/09/xmldsig#:X509SKI";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for X509SKI
            */
           axis2_status_t AXIS2_CALL
           adb_X509DataTypeChoice_type0_reset_X509SKI(
                   adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _X509DataTypeChoice_type0, AXIS2_FAILURE);
               

               
            
                
                if(_X509DataTypeChoice_type0->property_X509SKI != NULL)
                {
                   
                   
                      axutil_base64_binary_free (_X509DataTypeChoice_type0->property_X509SKI, env);
                     _X509DataTypeChoice_type0->property_X509SKI = NULL;
                }
            
                
                
                _X509DataTypeChoice_type0->is_valid_X509SKI = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether X509SKI is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_X509DataTypeChoice_type0_is_X509SKI_nil(
                   adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _X509DataTypeChoice_type0, AXIS2_TRUE);
               
               return !_X509DataTypeChoice_type0->is_valid_X509SKI;
           }

           /**
            * Set X509SKI to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_X509DataTypeChoice_type0_set_X509SKI_nil(
                   adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                   const axutil_env_t *env)
           {
               return adb_X509DataTypeChoice_type0_reset_X509SKI(_X509DataTypeChoice_type0, env);
           }

           

            /**
             * Getter for X509SubjectName by  Property Number 3
             */
            axis2_char_t* AXIS2_CALL
            adb_X509DataTypeChoice_type0_get_property3(
                adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                const axutil_env_t *env)
            {
                return adb_X509DataTypeChoice_type0_get_X509SubjectName(_X509DataTypeChoice_type0,
                                             env);
            }

            /**
             * getter for X509SubjectName.
             */
            axis2_char_t* AXIS2_CALL
            adb_X509DataTypeChoice_type0_get_X509SubjectName(
                    adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _X509DataTypeChoice_type0, NULL);
                  

                return _X509DataTypeChoice_type0->property_X509SubjectName;
             }

            /**
             * setter for X509SubjectName
             */
            axis2_status_t AXIS2_CALL
            adb_X509DataTypeChoice_type0_set_X509SubjectName(
                    adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_X509SubjectName)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _X509DataTypeChoice_type0, AXIS2_FAILURE);
                
                if(_X509DataTypeChoice_type0->is_valid_X509SubjectName &&
                        arg_X509SubjectName == _X509DataTypeChoice_type0->property_X509SubjectName)
                {
                    _X509DataTypeChoice_type0->current_choice = "http://www.w3.org/2000/09/xmldsig#:X509SubjectName";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_X509SubjectName)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "X509SubjectName is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_X509DataTypeChoice_type0_reset_X509SubjectName(_X509DataTypeChoice_type0, env);

                
                if(NULL == arg_X509SubjectName)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _X509DataTypeChoice_type0->property_X509SubjectName = (axis2_char_t *)axutil_strdup(env, arg_X509SubjectName);
                        if(NULL == _X509DataTypeChoice_type0->property_X509SubjectName)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for X509SubjectName");
                            return AXIS2_FAILURE;
                        }
                        _X509DataTypeChoice_type0->is_valid_X509SubjectName = AXIS2_TRUE;
                    _X509DataTypeChoice_type0->current_choice = "http://www.w3.org/2000/09/xmldsig#:X509SubjectName";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for X509SubjectName
            */
           axis2_status_t AXIS2_CALL
           adb_X509DataTypeChoice_type0_reset_X509SubjectName(
                   adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _X509DataTypeChoice_type0, AXIS2_FAILURE);
               

               
            
                
                if(_X509DataTypeChoice_type0->property_X509SubjectName != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _X509DataTypeChoice_type0->property_X509SubjectName);
                     _X509DataTypeChoice_type0->property_X509SubjectName = NULL;
                }
            
                
                
                _X509DataTypeChoice_type0->is_valid_X509SubjectName = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether X509SubjectName is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_X509DataTypeChoice_type0_is_X509SubjectName_nil(
                   adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _X509DataTypeChoice_type0, AXIS2_TRUE);
               
               return !_X509DataTypeChoice_type0->is_valid_X509SubjectName;
           }

           /**
            * Set X509SubjectName to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_X509DataTypeChoice_type0_set_X509SubjectName_nil(
                   adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                   const axutil_env_t *env)
           {
               return adb_X509DataTypeChoice_type0_reset_X509SubjectName(_X509DataTypeChoice_type0, env);
           }

           

            /**
             * Getter for X509Certificate by  Property Number 4
             */
            axutil_base64_binary_t* AXIS2_CALL
            adb_X509DataTypeChoice_type0_get_property4(
                adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                const axutil_env_t *env)
            {
                return adb_X509DataTypeChoice_type0_get_X509Certificate(_X509DataTypeChoice_type0,
                                             env);
            }

            /**
             * getter for X509Certificate.
             */
            axutil_base64_binary_t* AXIS2_CALL
            adb_X509DataTypeChoice_type0_get_X509Certificate(
                    adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _X509DataTypeChoice_type0, NULL);
                  

                return _X509DataTypeChoice_type0->property_X509Certificate;
             }

            /**
             * setter for X509Certificate
             */
            axis2_status_t AXIS2_CALL
            adb_X509DataTypeChoice_type0_set_X509Certificate(
                    adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                    const axutil_env_t *env,
                    axutil_base64_binary_t*  arg_X509Certificate)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _X509DataTypeChoice_type0, AXIS2_FAILURE);
                
                if(_X509DataTypeChoice_type0->is_valid_X509Certificate &&
                        arg_X509Certificate == _X509DataTypeChoice_type0->property_X509Certificate)
                {
                    _X509DataTypeChoice_type0->current_choice = "http://www.w3.org/2000/09/xmldsig#:X509Certificate";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_X509Certificate)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "X509Certificate is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_X509DataTypeChoice_type0_reset_X509Certificate(_X509DataTypeChoice_type0, env);

                
                if(NULL == arg_X509Certificate)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _X509DataTypeChoice_type0->property_X509Certificate = arg_X509Certificate;
                        _X509DataTypeChoice_type0->is_valid_X509Certificate = AXIS2_TRUE;
                    _X509DataTypeChoice_type0->current_choice = "http://www.w3.org/2000/09/xmldsig#:X509Certificate";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for X509Certificate
            */
           axis2_status_t AXIS2_CALL
           adb_X509DataTypeChoice_type0_reset_X509Certificate(
                   adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _X509DataTypeChoice_type0, AXIS2_FAILURE);
               

               
            
                
                if(_X509DataTypeChoice_type0->property_X509Certificate != NULL)
                {
                   
                   
                      axutil_base64_binary_free (_X509DataTypeChoice_type0->property_X509Certificate, env);
                     _X509DataTypeChoice_type0->property_X509Certificate = NULL;
                }
            
                
                
                _X509DataTypeChoice_type0->is_valid_X509Certificate = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether X509Certificate is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_X509DataTypeChoice_type0_is_X509Certificate_nil(
                   adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _X509DataTypeChoice_type0, AXIS2_TRUE);
               
               return !_X509DataTypeChoice_type0->is_valid_X509Certificate;
           }

           /**
            * Set X509Certificate to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_X509DataTypeChoice_type0_set_X509Certificate_nil(
                   adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                   const axutil_env_t *env)
           {
               return adb_X509DataTypeChoice_type0_reset_X509Certificate(_X509DataTypeChoice_type0, env);
           }

           

            /**
             * Getter for X509CRL by  Property Number 5
             */
            axutil_base64_binary_t* AXIS2_CALL
            adb_X509DataTypeChoice_type0_get_property5(
                adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                const axutil_env_t *env)
            {
                return adb_X509DataTypeChoice_type0_get_X509CRL(_X509DataTypeChoice_type0,
                                             env);
            }

            /**
             * getter for X509CRL.
             */
            axutil_base64_binary_t* AXIS2_CALL
            adb_X509DataTypeChoice_type0_get_X509CRL(
                    adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _X509DataTypeChoice_type0, NULL);
                  

                return _X509DataTypeChoice_type0->property_X509CRL;
             }

            /**
             * setter for X509CRL
             */
            axis2_status_t AXIS2_CALL
            adb_X509DataTypeChoice_type0_set_X509CRL(
                    adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                    const axutil_env_t *env,
                    axutil_base64_binary_t*  arg_X509CRL)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _X509DataTypeChoice_type0, AXIS2_FAILURE);
                
                if(_X509DataTypeChoice_type0->is_valid_X509CRL &&
                        arg_X509CRL == _X509DataTypeChoice_type0->property_X509CRL)
                {
                    _X509DataTypeChoice_type0->current_choice = "http://www.w3.org/2000/09/xmldsig#:X509CRL";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_X509CRL)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "X509CRL is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_X509DataTypeChoice_type0_reset_X509CRL(_X509DataTypeChoice_type0, env);

                
                if(NULL == arg_X509CRL)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _X509DataTypeChoice_type0->property_X509CRL = arg_X509CRL;
                        _X509DataTypeChoice_type0->is_valid_X509CRL = AXIS2_TRUE;
                    _X509DataTypeChoice_type0->current_choice = "http://www.w3.org/2000/09/xmldsig#:X509CRL";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for X509CRL
            */
           axis2_status_t AXIS2_CALL
           adb_X509DataTypeChoice_type0_reset_X509CRL(
                   adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _X509DataTypeChoice_type0, AXIS2_FAILURE);
               

               
            
                
                if(_X509DataTypeChoice_type0->property_X509CRL != NULL)
                {
                   
                   
                      axutil_base64_binary_free (_X509DataTypeChoice_type0->property_X509CRL, env);
                     _X509DataTypeChoice_type0->property_X509CRL = NULL;
                }
            
                
                
                _X509DataTypeChoice_type0->is_valid_X509CRL = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether X509CRL is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_X509DataTypeChoice_type0_is_X509CRL_nil(
                   adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _X509DataTypeChoice_type0, AXIS2_TRUE);
               
               return !_X509DataTypeChoice_type0->is_valid_X509CRL;
           }

           /**
            * Set X509CRL to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_X509DataTypeChoice_type0_set_X509CRL_nil(
                   adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                   const axutil_env_t *env)
           {
               return adb_X509DataTypeChoice_type0_reset_X509CRL(_X509DataTypeChoice_type0, env);
           }

           

            /**
             * Getter for extraElement by  Property Number 6
             */
            axiom_node_t* AXIS2_CALL
            adb_X509DataTypeChoice_type0_get_property6(
                adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                const axutil_env_t *env)
            {
                return adb_X509DataTypeChoice_type0_get_extraElement(_X509DataTypeChoice_type0,
                                             env);
            }

            /**
             * getter for extraElement.
             */
            axiom_node_t* AXIS2_CALL
            adb_X509DataTypeChoice_type0_get_extraElement(
                    adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _X509DataTypeChoice_type0, NULL);
                  

                return _X509DataTypeChoice_type0->property_extraElement;
             }

            /**
             * setter for extraElement
             */
            axis2_status_t AXIS2_CALL
            adb_X509DataTypeChoice_type0_set_extraElement(
                    adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                    const axutil_env_t *env,
                    axiom_node_t*  arg_extraElement)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _X509DataTypeChoice_type0, AXIS2_FAILURE);
                
                if(_X509DataTypeChoice_type0->is_valid_extraElement &&
                        arg_extraElement == _X509DataTypeChoice_type0->property_extraElement)
                {
                    _X509DataTypeChoice_type0->current_choice = ":extraElement";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_extraElement)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "extraElement is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_X509DataTypeChoice_type0_reset_extraElement(_X509DataTypeChoice_type0, env);

                
                if(NULL == arg_extraElement)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _X509DataTypeChoice_type0->property_extraElement = arg_extraElement;
                        _X509DataTypeChoice_type0->is_valid_extraElement = AXIS2_TRUE;
                    _X509DataTypeChoice_type0->current_choice = ":extraElement";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for extraElement
            */
           axis2_status_t AXIS2_CALL
           adb_X509DataTypeChoice_type0_reset_extraElement(
                   adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _X509DataTypeChoice_type0, AXIS2_FAILURE);
               

               _X509DataTypeChoice_type0->is_valid_extraElement = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether extraElement is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_X509DataTypeChoice_type0_is_extraElement_nil(
                   adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _X509DataTypeChoice_type0, AXIS2_TRUE);
               
               return !_X509DataTypeChoice_type0->is_valid_extraElement;
           }

           /**
            * Set extraElement to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_X509DataTypeChoice_type0_set_extraElement_nil(
                   adb_X509DataTypeChoice_type0_t* _X509DataTypeChoice_type0,
                   const axutil_env_t *env)
           {
               return adb_X509DataTypeChoice_type0_reset_extraElement(_X509DataTypeChoice_type0, env);
           }

           

