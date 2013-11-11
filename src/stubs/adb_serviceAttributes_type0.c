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
         * adb_serviceAttributes_type0.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_serviceAttributes_type0.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = serviceAttributes_type0
                 * Namespace URI = http://www.daisy.org/ns/daisy-online/
                 * Namespace Prefix = ns3
                 */
           


        struct adb_serviceAttributes_type0
        {
            axis2_char_t *property_TypeName;

            adb_serviceProvider_type0_t* property_serviceProvider;

                
                axis2_bool_t is_valid_serviceProvider;
            adb_service_type0_t* property_service;

                
                axis2_bool_t is_valid_service;
            adb_supportedContentSelectionMethods_type0_t* property_supportedContentSelectionMethods;

                
                axis2_bool_t is_valid_supportedContentSelectionMethods;
            axis2_bool_t property_supportsServerSideBack;

                
                axis2_bool_t is_valid_supportsServerSideBack;
            axis2_bool_t property_supportsSearch;

                
                axis2_bool_t is_valid_supportsSearch;
            adb_supportedUplinkAudioCodecs_type0_t* property_supportedUplinkAudioCodecs;

                
                axis2_bool_t is_valid_supportedUplinkAudioCodecs;
            axis2_bool_t property_supportsAudioLabels;

                
                axis2_bool_t is_valid_supportsAudioLabels;
            adb_supportedOptionalOperations_type0_t* property_supportedOptionalOperations;

                
                axis2_bool_t is_valid_supportedOptionalOperations;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_serviceAttributes_type0_set_serviceProvider_nil(
                        adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_serviceAttributes_type0_set_service_nil(
                        adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_serviceAttributes_type0_set_supportedContentSelectionMethods_nil(
                        adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_serviceAttributes_type0_set_supportsServerSideBack_nil(
                        adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_serviceAttributes_type0_set_supportsSearch_nil(
                        adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_serviceAttributes_type0_set_supportedUplinkAudioCodecs_nil(
                        adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_serviceAttributes_type0_set_supportsAudioLabels_nil(
                        adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_serviceAttributes_type0_set_supportedOptionalOperations_nil(
                        adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_serviceAttributes_type0_t* AXIS2_CALL
        adb_serviceAttributes_type0_create(
            const axutil_env_t *env)
        {
            adb_serviceAttributes_type0_t *_serviceAttributes_type0 = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _serviceAttributes_type0 = (adb_serviceAttributes_type0_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_serviceAttributes_type0_t));

            if(NULL == _serviceAttributes_type0)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_serviceAttributes_type0, 0, sizeof(adb_serviceAttributes_type0_t));

            _serviceAttributes_type0->property_TypeName = axutil_strdup(env, "adb_serviceAttributes_type0");
            _serviceAttributes_type0->property_serviceProvider  = NULL;
                  _serviceAttributes_type0->is_valid_serviceProvider  = AXIS2_FALSE;
            _serviceAttributes_type0->property_service  = NULL;
                  _serviceAttributes_type0->is_valid_service  = AXIS2_FALSE;
            _serviceAttributes_type0->property_supportedContentSelectionMethods  = NULL;
                  _serviceAttributes_type0->is_valid_supportedContentSelectionMethods  = AXIS2_FALSE;
            _serviceAttributes_type0->is_valid_supportsServerSideBack  = AXIS2_FALSE;
            _serviceAttributes_type0->is_valid_supportsSearch  = AXIS2_FALSE;
            _serviceAttributes_type0->property_supportedUplinkAudioCodecs  = NULL;
                  _serviceAttributes_type0->is_valid_supportedUplinkAudioCodecs  = AXIS2_FALSE;
            _serviceAttributes_type0->is_valid_supportsAudioLabels  = AXIS2_FALSE;
            _serviceAttributes_type0->property_supportedOptionalOperations  = NULL;
                  _serviceAttributes_type0->is_valid_supportedOptionalOperations  = AXIS2_FALSE;
            

            return _serviceAttributes_type0;
        }

        adb_serviceAttributes_type0_t* AXIS2_CALL
        adb_serviceAttributes_type0_create_with_values(
            const axutil_env_t *env,
                adb_serviceProvider_type0_t* _serviceProvider,
                adb_service_type0_t* _service,
                adb_supportedContentSelectionMethods_type0_t* _supportedContentSelectionMethods,
                axis2_bool_t _supportsServerSideBack,
                axis2_bool_t _supportsSearch,
                adb_supportedUplinkAudioCodecs_type0_t* _supportedUplinkAudioCodecs,
                axis2_bool_t _supportsAudioLabels,
                adb_supportedOptionalOperations_type0_t* _supportedOptionalOperations)
        {
            adb_serviceAttributes_type0_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_serviceAttributes_type0_create(env);

            
              status = adb_serviceAttributes_type0_set_serviceProvider(
                                     adb_obj,
                                     env,
                                     _serviceProvider);
              if(status == AXIS2_FAILURE) {
                  adb_serviceAttributes_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_serviceAttributes_type0_set_service(
                                     adb_obj,
                                     env,
                                     _service);
              if(status == AXIS2_FAILURE) {
                  adb_serviceAttributes_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_serviceAttributes_type0_set_supportedContentSelectionMethods(
                                     adb_obj,
                                     env,
                                     _supportedContentSelectionMethods);
              if(status == AXIS2_FAILURE) {
                  adb_serviceAttributes_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_serviceAttributes_type0_set_supportsServerSideBack(
                                     adb_obj,
                                     env,
                                     _supportsServerSideBack);
              if(status == AXIS2_FAILURE) {
                  adb_serviceAttributes_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_serviceAttributes_type0_set_supportsSearch(
                                     adb_obj,
                                     env,
                                     _supportsSearch);
              if(status == AXIS2_FAILURE) {
                  adb_serviceAttributes_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_serviceAttributes_type0_set_supportedUplinkAudioCodecs(
                                     adb_obj,
                                     env,
                                     _supportedUplinkAudioCodecs);
              if(status == AXIS2_FAILURE) {
                  adb_serviceAttributes_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_serviceAttributes_type0_set_supportsAudioLabels(
                                     adb_obj,
                                     env,
                                     _supportsAudioLabels);
              if(status == AXIS2_FAILURE) {
                  adb_serviceAttributes_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_serviceAttributes_type0_set_supportedOptionalOperations(
                                     adb_obj,
                                     env,
                                     _supportedOptionalOperations);
              if(status == AXIS2_FAILURE) {
                  adb_serviceAttributes_type0_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        adb_serviceProvider_type0_t* AXIS2_CALL
                adb_serviceAttributes_type0_free_popping_value(
                        adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                        const axutil_env_t *env)
                {
                    adb_serviceProvider_type0_t* value;

                    
                    
                    value = _serviceAttributes_type0->property_serviceProvider;

                    _serviceAttributes_type0->property_serviceProvider = (adb_serviceProvider_type0_t*)NULL;
                    adb_serviceAttributes_type0_free(_serviceAttributes_type0, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_serviceAttributes_type0_free(
                adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _serviceAttributes_type0,
                env,
                "adb_serviceAttributes_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_serviceAttributes_type0_free_obj(
                adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, AXIS2_FAILURE);

            if (_serviceAttributes_type0->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _serviceAttributes_type0->property_TypeName);
            }

            adb_serviceAttributes_type0_reset_serviceProvider(_serviceAttributes_type0, env);
            adb_serviceAttributes_type0_reset_service(_serviceAttributes_type0, env);
            adb_serviceAttributes_type0_reset_supportedContentSelectionMethods(_serviceAttributes_type0, env);
            adb_serviceAttributes_type0_reset_supportsServerSideBack(_serviceAttributes_type0, env);
            adb_serviceAttributes_type0_reset_supportsSearch(_serviceAttributes_type0, env);
            adb_serviceAttributes_type0_reset_supportedUplinkAudioCodecs(_serviceAttributes_type0, env);
            adb_serviceAttributes_type0_reset_supportsAudioLabels(_serviceAttributes_type0, env);
            adb_serviceAttributes_type0_reset_supportedOptionalOperations(_serviceAttributes_type0, env);
            

            if(_serviceAttributes_type0)
            {
                AXIS2_FREE(env->allocator, _serviceAttributes_type0);
                _serviceAttributes_type0 = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_serviceAttributes_type0_deserialize(
                adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _serviceAttributes_type0,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_serviceAttributes_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_serviceAttributes_type0_deserialize_obj(
                adb_serviceAttributes_type0_t* _serviceAttributes_type0,
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
            AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for serviceAttributes_type0 : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    

                     
                     /*
                      * building serviceProvider element
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
                                   
                                 element_qname = axutil_qname_create(env, "serviceProvider", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

                           if (adb_serviceProvider_type0_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_serviceProvider_type0");

                                      status =  adb_serviceProvider_type0_deserialize((adb_serviceProvider_type0_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element serviceProvider");
                                      }
                                      else
                                      {
                                          status = adb_serviceAttributes_type0_set_serviceProvider(_serviceAttributes_type0, env,
                                                                   (adb_serviceProvider_type0_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for serviceProvider ");
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
                      * building service element
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
                                 
                                 element_qname = axutil_qname_create(env, "service", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

                           if (adb_service_type0_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_service_type0");

                                      status =  adb_service_type0_deserialize((adb_service_type0_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element service");
                                      }
                                      else
                                      {
                                          status = adb_serviceAttributes_type0_set_service(_serviceAttributes_type0, env,
                                                                   (adb_service_type0_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for service ");
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
                      * building supportedContentSelectionMethods element
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
                                 
                                 element_qname = axutil_qname_create(env, "supportedContentSelectionMethods", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

                           if (adb_supportedContentSelectionMethods_type0_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_supportedContentSelectionMethods_type0");

                                      status =  adb_supportedContentSelectionMethods_type0_deserialize((adb_supportedContentSelectionMethods_type0_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element supportedContentSelectionMethods");
                                      }
                                      else
                                      {
                                          status = adb_serviceAttributes_type0_set_supportedContentSelectionMethods(_serviceAttributes_type0, env,
                                                                   (adb_supportedContentSelectionMethods_type0_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for supportedContentSelectionMethods ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element supportedContentSelectionMethods missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building supportsServerSideBack element
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
                                 
                                 element_qname = axutil_qname_create(env, "supportsServerSideBack", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

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
                                            if (!axutil_strcasecmp(text_value , "true"))
                                            {
                                                status = adb_serviceAttributes_type0_set_supportsServerSideBack(_serviceAttributes_type0, env,
                                                                 AXIS2_TRUE);
                                            }
                                            else
                                            {
                                                status = adb_serviceAttributes_type0_set_supportsServerSideBack(_serviceAttributes_type0, env,
                                                                      AXIS2_FALSE);
                                            }
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element supportsServerSideBack");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for supportsServerSideBack ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element supportsServerSideBack missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building supportsSearch element
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
                                 
                                 element_qname = axutil_qname_create(env, "supportsSearch", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

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
                                            if (!axutil_strcasecmp(text_value , "true"))
                                            {
                                                status = adb_serviceAttributes_type0_set_supportsSearch(_serviceAttributes_type0, env,
                                                                 AXIS2_TRUE);
                                            }
                                            else
                                            {
                                                status = adb_serviceAttributes_type0_set_supportsSearch(_serviceAttributes_type0, env,
                                                                      AXIS2_FALSE);
                                            }
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element supportsSearch");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for supportsSearch ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element supportsSearch missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building supportedUplinkAudioCodecs element
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
                                 
                                 element_qname = axutil_qname_create(env, "supportedUplinkAudioCodecs", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

                           if (adb_supportedUplinkAudioCodecs_type0_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_supportedUplinkAudioCodecs_type0");

                                      status =  adb_supportedUplinkAudioCodecs_type0_deserialize((adb_supportedUplinkAudioCodecs_type0_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element supportedUplinkAudioCodecs");
                                      }
                                      else
                                      {
                                          status = adb_serviceAttributes_type0_set_supportedUplinkAudioCodecs(_serviceAttributes_type0, env,
                                                                   (adb_supportedUplinkAudioCodecs_type0_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for supportedUplinkAudioCodecs ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element supportedUplinkAudioCodecs missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building supportsAudioLabels element
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
                                 
                                 element_qname = axutil_qname_create(env, "supportsAudioLabels", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

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
                                            if (!axutil_strcasecmp(text_value , "true"))
                                            {
                                                status = adb_serviceAttributes_type0_set_supportsAudioLabels(_serviceAttributes_type0, env,
                                                                 AXIS2_TRUE);
                                            }
                                            else
                                            {
                                                status = adb_serviceAttributes_type0_set_supportsAudioLabels(_serviceAttributes_type0, env,
                                                                      AXIS2_FALSE);
                                            }
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element supportsAudioLabels");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for supportsAudioLabels ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element supportsAudioLabels missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building supportedOptionalOperations element
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
                                 
                                 element_qname = axutil_qname_create(env, "supportedOptionalOperations", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

                           if (adb_supportedOptionalOperations_type0_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_supportedOptionalOperations_type0");

                                      status =  adb_supportedOptionalOperations_type0_deserialize((adb_supportedOptionalOperations_type0_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element supportedOptionalOperations");
                                      }
                                      else
                                      {
                                          status = adb_serviceAttributes_type0_set_supportedOptionalOperations(_serviceAttributes_type0, env,
                                                                   (adb_supportedOptionalOperations_type0_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for supportedOptionalOperations ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element supportedOptionalOperations missing");
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
          adb_serviceAttributes_type0_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_serviceAttributes_type0_declare_parent_namespaces(
                    adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_serviceAttributes_type0_serialize(
                adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_serviceAttributes_type0 == NULL)
            {
                return adb_serviceAttributes_type0_serialize_obj(
                    _serviceAttributes_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _serviceAttributes_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_serviceAttributes_type0");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_serviceAttributes_type0_serialize_obj(
                adb_serviceAttributes_type0_t* _serviceAttributes_type0,
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
                    
                    axis2_char_t text_value_2[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_3[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_4[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_5[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_6[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_7[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_8[ADB_DEFAULT_DIGIT_LIMIT];
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, NULL);
            
            
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
        
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.daisy.org/ns/daisy-online/",
                                            p_prefix));
                       }
                      

                   if (!_serviceAttributes_type0->is_valid_serviceProvider)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("serviceProvider"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("serviceProvider")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing serviceProvider element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sserviceProvider",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sserviceProvider>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_serviceProvider_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_serviceProvider_type0_serialize(_serviceAttributes_type0->property_serviceProvider, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_serviceProvider_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_serviceProvider_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
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
                      

                   if (!_serviceAttributes_type0->is_valid_service)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("service"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("service")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing service element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sservice",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sservice>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_service_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_service_type0_serialize(_serviceAttributes_type0->property_service, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_service_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_service_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
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
                      

                   if (!_serviceAttributes_type0->is_valid_supportedContentSelectionMethods)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property supportedContentSelectionMethods");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("supportedContentSelectionMethods"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("supportedContentSelectionMethods")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing supportedContentSelectionMethods element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%ssupportedContentSelectionMethods",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%ssupportedContentSelectionMethods>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_supportedContentSelectionMethods_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_supportedContentSelectionMethods_type0_serialize(_serviceAttributes_type0->property_supportedContentSelectionMethods, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_supportedContentSelectionMethods_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_supportedContentSelectionMethods_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
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
                      

                   if (!_serviceAttributes_type0->is_valid_supportsServerSideBack)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property supportsServerSideBack");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("supportsServerSideBack"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("supportsServerSideBack")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing supportsServerSideBack element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%ssupportsServerSideBack>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%ssupportsServerSideBack>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           strcpy(text_value_4, (_serviceAttributes_type0->property_supportsServerSideBack)?"true":"false");
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_4, axutil_strlen(text_value_4));
                           
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
                      

                   if (!_serviceAttributes_type0->is_valid_supportsSearch)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property supportsSearch");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("supportsSearch"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("supportsSearch")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing supportsSearch element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%ssupportsSearch>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%ssupportsSearch>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           strcpy(text_value_5, (_serviceAttributes_type0->property_supportsSearch)?"true":"false");
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_5, axutil_strlen(text_value_5));
                           
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
                      

                   if (!_serviceAttributes_type0->is_valid_supportedUplinkAudioCodecs)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property supportedUplinkAudioCodecs");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("supportedUplinkAudioCodecs"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("supportedUplinkAudioCodecs")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing supportedUplinkAudioCodecs element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%ssupportedUplinkAudioCodecs",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%ssupportedUplinkAudioCodecs>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_supportedUplinkAudioCodecs_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_supportedUplinkAudioCodecs_type0_serialize(_serviceAttributes_type0->property_supportedUplinkAudioCodecs, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_supportedUplinkAudioCodecs_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_supportedUplinkAudioCodecs_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
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
                      

                   if (!_serviceAttributes_type0->is_valid_supportsAudioLabels)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property supportsAudioLabels");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("supportsAudioLabels"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("supportsAudioLabels")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing supportsAudioLabels element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%ssupportsAudioLabels>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%ssupportsAudioLabels>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           strcpy(text_value_7, (_serviceAttributes_type0->property_supportsAudioLabels)?"true":"false");
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_7, axutil_strlen(text_value_7));
                           
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
                      

                   if (!_serviceAttributes_type0->is_valid_supportedOptionalOperations)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property supportedOptionalOperations");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("supportedOptionalOperations"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("supportedOptionalOperations")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing supportedOptionalOperations element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%ssupportedOptionalOperations",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%ssupportedOptionalOperations>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_supportedOptionalOperations_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_supportedOptionalOperations_type0_serialize(_serviceAttributes_type0->property_supportedOptionalOperations, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_supportedOptionalOperations_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_supportedOptionalOperations_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 

            return parent;
        }


        

            /**
             * Getter for serviceProvider by  Property Number 1
             */
            adb_serviceProvider_type0_t* AXIS2_CALL
            adb_serviceAttributes_type0_get_property1(
                adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                const axutil_env_t *env)
            {
                return adb_serviceAttributes_type0_get_serviceProvider(_serviceAttributes_type0,
                                             env);
            }

            /**
             * getter for serviceProvider.
             */
            adb_serviceProvider_type0_t* AXIS2_CALL
            adb_serviceAttributes_type0_get_serviceProvider(
                    adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, NULL);
                  

                return _serviceAttributes_type0->property_serviceProvider;
             }

            /**
             * setter for serviceProvider
             */
            axis2_status_t AXIS2_CALL
            adb_serviceAttributes_type0_set_serviceProvider(
                    adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                    const axutil_env_t *env,
                    adb_serviceProvider_type0_t*  arg_serviceProvider)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, AXIS2_FAILURE);
                
                if(_serviceAttributes_type0->is_valid_serviceProvider &&
                        arg_serviceProvider == _serviceAttributes_type0->property_serviceProvider)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_serviceAttributes_type0_reset_serviceProvider(_serviceAttributes_type0, env);

                
                if(NULL == arg_serviceProvider)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _serviceAttributes_type0->property_serviceProvider = arg_serviceProvider;
                        _serviceAttributes_type0->is_valid_serviceProvider = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for serviceProvider
            */
           axis2_status_t AXIS2_CALL
           adb_serviceAttributes_type0_reset_serviceProvider(
                   adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, AXIS2_FAILURE);
               

               
            
                
                if(_serviceAttributes_type0->property_serviceProvider != NULL)
                {
                   
                   adb_serviceProvider_type0_free(_serviceAttributes_type0->property_serviceProvider, env);
                     _serviceAttributes_type0->property_serviceProvider = NULL;
                }
            
                
                
                _serviceAttributes_type0->is_valid_serviceProvider = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether serviceProvider is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_serviceAttributes_type0_is_serviceProvider_nil(
                   adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, AXIS2_TRUE);
               
               return !_serviceAttributes_type0->is_valid_serviceProvider;
           }

           /**
            * Set serviceProvider to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_serviceAttributes_type0_set_serviceProvider_nil(
                   adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                   const axutil_env_t *env)
           {
               return adb_serviceAttributes_type0_reset_serviceProvider(_serviceAttributes_type0, env);
           }

           

            /**
             * Getter for service by  Property Number 2
             */
            adb_service_type0_t* AXIS2_CALL
            adb_serviceAttributes_type0_get_property2(
                adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                const axutil_env_t *env)
            {
                return adb_serviceAttributes_type0_get_service(_serviceAttributes_type0,
                                             env);
            }

            /**
             * getter for service.
             */
            adb_service_type0_t* AXIS2_CALL
            adb_serviceAttributes_type0_get_service(
                    adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, NULL);
                  

                return _serviceAttributes_type0->property_service;
             }

            /**
             * setter for service
             */
            axis2_status_t AXIS2_CALL
            adb_serviceAttributes_type0_set_service(
                    adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                    const axutil_env_t *env,
                    adb_service_type0_t*  arg_service)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, AXIS2_FAILURE);
                
                if(_serviceAttributes_type0->is_valid_service &&
                        arg_service == _serviceAttributes_type0->property_service)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_serviceAttributes_type0_reset_service(_serviceAttributes_type0, env);

                
                if(NULL == arg_service)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _serviceAttributes_type0->property_service = arg_service;
                        _serviceAttributes_type0->is_valid_service = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for service
            */
           axis2_status_t AXIS2_CALL
           adb_serviceAttributes_type0_reset_service(
                   adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, AXIS2_FAILURE);
               

               
            
                
                if(_serviceAttributes_type0->property_service != NULL)
                {
                   
                   adb_service_type0_free(_serviceAttributes_type0->property_service, env);
                     _serviceAttributes_type0->property_service = NULL;
                }
            
                
                
                _serviceAttributes_type0->is_valid_service = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether service is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_serviceAttributes_type0_is_service_nil(
                   adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, AXIS2_TRUE);
               
               return !_serviceAttributes_type0->is_valid_service;
           }

           /**
            * Set service to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_serviceAttributes_type0_set_service_nil(
                   adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                   const axutil_env_t *env)
           {
               return adb_serviceAttributes_type0_reset_service(_serviceAttributes_type0, env);
           }

           

            /**
             * Getter for supportedContentSelectionMethods by  Property Number 3
             */
            adb_supportedContentSelectionMethods_type0_t* AXIS2_CALL
            adb_serviceAttributes_type0_get_property3(
                adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                const axutil_env_t *env)
            {
                return adb_serviceAttributes_type0_get_supportedContentSelectionMethods(_serviceAttributes_type0,
                                             env);
            }

            /**
             * getter for supportedContentSelectionMethods.
             */
            adb_supportedContentSelectionMethods_type0_t* AXIS2_CALL
            adb_serviceAttributes_type0_get_supportedContentSelectionMethods(
                    adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, NULL);
                  

                return _serviceAttributes_type0->property_supportedContentSelectionMethods;
             }

            /**
             * setter for supportedContentSelectionMethods
             */
            axis2_status_t AXIS2_CALL
            adb_serviceAttributes_type0_set_supportedContentSelectionMethods(
                    adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                    const axutil_env_t *env,
                    adb_supportedContentSelectionMethods_type0_t*  arg_supportedContentSelectionMethods)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, AXIS2_FAILURE);
                
                if(_serviceAttributes_type0->is_valid_supportedContentSelectionMethods &&
                        arg_supportedContentSelectionMethods == _serviceAttributes_type0->property_supportedContentSelectionMethods)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_supportedContentSelectionMethods)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "supportedContentSelectionMethods is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_serviceAttributes_type0_reset_supportedContentSelectionMethods(_serviceAttributes_type0, env);

                
                if(NULL == arg_supportedContentSelectionMethods)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _serviceAttributes_type0->property_supportedContentSelectionMethods = arg_supportedContentSelectionMethods;
                        _serviceAttributes_type0->is_valid_supportedContentSelectionMethods = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for supportedContentSelectionMethods
            */
           axis2_status_t AXIS2_CALL
           adb_serviceAttributes_type0_reset_supportedContentSelectionMethods(
                   adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, AXIS2_FAILURE);
               

               
            
                
                if(_serviceAttributes_type0->property_supportedContentSelectionMethods != NULL)
                {
                   
                   adb_supportedContentSelectionMethods_type0_free(_serviceAttributes_type0->property_supportedContentSelectionMethods, env);
                     _serviceAttributes_type0->property_supportedContentSelectionMethods = NULL;
                }
            
                
                
                _serviceAttributes_type0->is_valid_supportedContentSelectionMethods = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether supportedContentSelectionMethods is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_serviceAttributes_type0_is_supportedContentSelectionMethods_nil(
                   adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, AXIS2_TRUE);
               
               return !_serviceAttributes_type0->is_valid_supportedContentSelectionMethods;
           }

           /**
            * Set supportedContentSelectionMethods to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_serviceAttributes_type0_set_supportedContentSelectionMethods_nil(
                   adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                   const axutil_env_t *env)
           {
               return adb_serviceAttributes_type0_reset_supportedContentSelectionMethods(_serviceAttributes_type0, env);
           }

           

            /**
             * Getter for supportsServerSideBack by  Property Number 4
             */
            axis2_bool_t AXIS2_CALL
            adb_serviceAttributes_type0_get_property4(
                adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                const axutil_env_t *env)
            {
                return adb_serviceAttributes_type0_get_supportsServerSideBack(_serviceAttributes_type0,
                                             env);
            }

            /**
             * getter for supportsServerSideBack.
             */
            axis2_bool_t AXIS2_CALL
            adb_serviceAttributes_type0_get_supportsServerSideBack(
                    adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (axis2_bool_t)0);
                    AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, (axis2_bool_t)0);
                  

                return _serviceAttributes_type0->property_supportsServerSideBack;
             }

            /**
             * setter for supportsServerSideBack
             */
            axis2_status_t AXIS2_CALL
            adb_serviceAttributes_type0_set_supportsServerSideBack(
                    adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                    const axutil_env_t *env,
                    axis2_bool_t  arg_supportsServerSideBack)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, AXIS2_FAILURE);
                
                if(_serviceAttributes_type0->is_valid_supportsServerSideBack &&
                        arg_supportsServerSideBack == _serviceAttributes_type0->property_supportsServerSideBack)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_serviceAttributes_type0_reset_supportsServerSideBack(_serviceAttributes_type0, env);

                _serviceAttributes_type0->property_supportsServerSideBack = arg_supportsServerSideBack;
                        _serviceAttributes_type0->is_valid_supportsServerSideBack = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for supportsServerSideBack
            */
           axis2_status_t AXIS2_CALL
           adb_serviceAttributes_type0_reset_supportsServerSideBack(
                   adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, AXIS2_FAILURE);
               

               _serviceAttributes_type0->is_valid_supportsServerSideBack = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether supportsServerSideBack is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_serviceAttributes_type0_is_supportsServerSideBack_nil(
                   adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, AXIS2_TRUE);
               
               return !_serviceAttributes_type0->is_valid_supportsServerSideBack;
           }

           /**
            * Set supportsServerSideBack to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_serviceAttributes_type0_set_supportsServerSideBack_nil(
                   adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                   const axutil_env_t *env)
           {
               return adb_serviceAttributes_type0_reset_supportsServerSideBack(_serviceAttributes_type0, env);
           }

           

            /**
             * Getter for supportsSearch by  Property Number 5
             */
            axis2_bool_t AXIS2_CALL
            adb_serviceAttributes_type0_get_property5(
                adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                const axutil_env_t *env)
            {
                return adb_serviceAttributes_type0_get_supportsSearch(_serviceAttributes_type0,
                                             env);
            }

            /**
             * getter for supportsSearch.
             */
            axis2_bool_t AXIS2_CALL
            adb_serviceAttributes_type0_get_supportsSearch(
                    adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (axis2_bool_t)0);
                    AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, (axis2_bool_t)0);
                  

                return _serviceAttributes_type0->property_supportsSearch;
             }

            /**
             * setter for supportsSearch
             */
            axis2_status_t AXIS2_CALL
            adb_serviceAttributes_type0_set_supportsSearch(
                    adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                    const axutil_env_t *env,
                    axis2_bool_t  arg_supportsSearch)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, AXIS2_FAILURE);
                
                if(_serviceAttributes_type0->is_valid_supportsSearch &&
                        arg_supportsSearch == _serviceAttributes_type0->property_supportsSearch)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_serviceAttributes_type0_reset_supportsSearch(_serviceAttributes_type0, env);

                _serviceAttributes_type0->property_supportsSearch = arg_supportsSearch;
                        _serviceAttributes_type0->is_valid_supportsSearch = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for supportsSearch
            */
           axis2_status_t AXIS2_CALL
           adb_serviceAttributes_type0_reset_supportsSearch(
                   adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, AXIS2_FAILURE);
               

               _serviceAttributes_type0->is_valid_supportsSearch = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether supportsSearch is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_serviceAttributes_type0_is_supportsSearch_nil(
                   adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, AXIS2_TRUE);
               
               return !_serviceAttributes_type0->is_valid_supportsSearch;
           }

           /**
            * Set supportsSearch to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_serviceAttributes_type0_set_supportsSearch_nil(
                   adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                   const axutil_env_t *env)
           {
               return adb_serviceAttributes_type0_reset_supportsSearch(_serviceAttributes_type0, env);
           }

           

            /**
             * Getter for supportedUplinkAudioCodecs by  Property Number 6
             */
            adb_supportedUplinkAudioCodecs_type0_t* AXIS2_CALL
            adb_serviceAttributes_type0_get_property6(
                adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                const axutil_env_t *env)
            {
                return adb_serviceAttributes_type0_get_supportedUplinkAudioCodecs(_serviceAttributes_type0,
                                             env);
            }

            /**
             * getter for supportedUplinkAudioCodecs.
             */
            adb_supportedUplinkAudioCodecs_type0_t* AXIS2_CALL
            adb_serviceAttributes_type0_get_supportedUplinkAudioCodecs(
                    adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, NULL);
                  

                return _serviceAttributes_type0->property_supportedUplinkAudioCodecs;
             }

            /**
             * setter for supportedUplinkAudioCodecs
             */
            axis2_status_t AXIS2_CALL
            adb_serviceAttributes_type0_set_supportedUplinkAudioCodecs(
                    adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                    const axutil_env_t *env,
                    adb_supportedUplinkAudioCodecs_type0_t*  arg_supportedUplinkAudioCodecs)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, AXIS2_FAILURE);
                
                if(_serviceAttributes_type0->is_valid_supportedUplinkAudioCodecs &&
                        arg_supportedUplinkAudioCodecs == _serviceAttributes_type0->property_supportedUplinkAudioCodecs)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_supportedUplinkAudioCodecs)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "supportedUplinkAudioCodecs is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_serviceAttributes_type0_reset_supportedUplinkAudioCodecs(_serviceAttributes_type0, env);

                
                if(NULL == arg_supportedUplinkAudioCodecs)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _serviceAttributes_type0->property_supportedUplinkAudioCodecs = arg_supportedUplinkAudioCodecs;
                        _serviceAttributes_type0->is_valid_supportedUplinkAudioCodecs = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for supportedUplinkAudioCodecs
            */
           axis2_status_t AXIS2_CALL
           adb_serviceAttributes_type0_reset_supportedUplinkAudioCodecs(
                   adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, AXIS2_FAILURE);
               

               
            
                
                if(_serviceAttributes_type0->property_supportedUplinkAudioCodecs != NULL)
                {
                   
                   adb_supportedUplinkAudioCodecs_type0_free(_serviceAttributes_type0->property_supportedUplinkAudioCodecs, env);
                     _serviceAttributes_type0->property_supportedUplinkAudioCodecs = NULL;
                }
            
                
                
                _serviceAttributes_type0->is_valid_supportedUplinkAudioCodecs = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether supportedUplinkAudioCodecs is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_serviceAttributes_type0_is_supportedUplinkAudioCodecs_nil(
                   adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, AXIS2_TRUE);
               
               return !_serviceAttributes_type0->is_valid_supportedUplinkAudioCodecs;
           }

           /**
            * Set supportedUplinkAudioCodecs to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_serviceAttributes_type0_set_supportedUplinkAudioCodecs_nil(
                   adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                   const axutil_env_t *env)
           {
               return adb_serviceAttributes_type0_reset_supportedUplinkAudioCodecs(_serviceAttributes_type0, env);
           }

           

            /**
             * Getter for supportsAudioLabels by  Property Number 7
             */
            axis2_bool_t AXIS2_CALL
            adb_serviceAttributes_type0_get_property7(
                adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                const axutil_env_t *env)
            {
                return adb_serviceAttributes_type0_get_supportsAudioLabels(_serviceAttributes_type0,
                                             env);
            }

            /**
             * getter for supportsAudioLabels.
             */
            axis2_bool_t AXIS2_CALL
            adb_serviceAttributes_type0_get_supportsAudioLabels(
                    adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (axis2_bool_t)0);
                    AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, (axis2_bool_t)0);
                  

                return _serviceAttributes_type0->property_supportsAudioLabels;
             }

            /**
             * setter for supportsAudioLabels
             */
            axis2_status_t AXIS2_CALL
            adb_serviceAttributes_type0_set_supportsAudioLabels(
                    adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                    const axutil_env_t *env,
                    axis2_bool_t  arg_supportsAudioLabels)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, AXIS2_FAILURE);
                
                if(_serviceAttributes_type0->is_valid_supportsAudioLabels &&
                        arg_supportsAudioLabels == _serviceAttributes_type0->property_supportsAudioLabels)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_serviceAttributes_type0_reset_supportsAudioLabels(_serviceAttributes_type0, env);

                _serviceAttributes_type0->property_supportsAudioLabels = arg_supportsAudioLabels;
                        _serviceAttributes_type0->is_valid_supportsAudioLabels = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for supportsAudioLabels
            */
           axis2_status_t AXIS2_CALL
           adb_serviceAttributes_type0_reset_supportsAudioLabels(
                   adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, AXIS2_FAILURE);
               

               _serviceAttributes_type0->is_valid_supportsAudioLabels = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether supportsAudioLabels is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_serviceAttributes_type0_is_supportsAudioLabels_nil(
                   adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, AXIS2_TRUE);
               
               return !_serviceAttributes_type0->is_valid_supportsAudioLabels;
           }

           /**
            * Set supportsAudioLabels to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_serviceAttributes_type0_set_supportsAudioLabels_nil(
                   adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                   const axutil_env_t *env)
           {
               return adb_serviceAttributes_type0_reset_supportsAudioLabels(_serviceAttributes_type0, env);
           }

           

            /**
             * Getter for supportedOptionalOperations by  Property Number 8
             */
            adb_supportedOptionalOperations_type0_t* AXIS2_CALL
            adb_serviceAttributes_type0_get_property8(
                adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                const axutil_env_t *env)
            {
                return adb_serviceAttributes_type0_get_supportedOptionalOperations(_serviceAttributes_type0,
                                             env);
            }

            /**
             * getter for supportedOptionalOperations.
             */
            adb_supportedOptionalOperations_type0_t* AXIS2_CALL
            adb_serviceAttributes_type0_get_supportedOptionalOperations(
                    adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, NULL);
                  

                return _serviceAttributes_type0->property_supportedOptionalOperations;
             }

            /**
             * setter for supportedOptionalOperations
             */
            axis2_status_t AXIS2_CALL
            adb_serviceAttributes_type0_set_supportedOptionalOperations(
                    adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                    const axutil_env_t *env,
                    adb_supportedOptionalOperations_type0_t*  arg_supportedOptionalOperations)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, AXIS2_FAILURE);
                
                if(_serviceAttributes_type0->is_valid_supportedOptionalOperations &&
                        arg_supportedOptionalOperations == _serviceAttributes_type0->property_supportedOptionalOperations)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_supportedOptionalOperations)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "supportedOptionalOperations is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_serviceAttributes_type0_reset_supportedOptionalOperations(_serviceAttributes_type0, env);

                
                if(NULL == arg_supportedOptionalOperations)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _serviceAttributes_type0->property_supportedOptionalOperations = arg_supportedOptionalOperations;
                        _serviceAttributes_type0->is_valid_supportedOptionalOperations = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for supportedOptionalOperations
            */
           axis2_status_t AXIS2_CALL
           adb_serviceAttributes_type0_reset_supportedOptionalOperations(
                   adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, AXIS2_FAILURE);
               

               
            
                
                if(_serviceAttributes_type0->property_supportedOptionalOperations != NULL)
                {
                   
                   adb_supportedOptionalOperations_type0_free(_serviceAttributes_type0->property_supportedOptionalOperations, env);
                     _serviceAttributes_type0->property_supportedOptionalOperations = NULL;
                }
            
                
                
                _serviceAttributes_type0->is_valid_supportedOptionalOperations = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether supportedOptionalOperations is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_serviceAttributes_type0_is_supportedOptionalOperations_nil(
                   adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _serviceAttributes_type0, AXIS2_TRUE);
               
               return !_serviceAttributes_type0->is_valid_supportedOptionalOperations;
           }

           /**
            * Set supportedOptionalOperations to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_serviceAttributes_type0_set_supportedOptionalOperations_nil(
                   adb_serviceAttributes_type0_t* _serviceAttributes_type0,
                   const axutil_env_t *env)
           {
               return adb_serviceAttributes_type0_reset_supportedOptionalOperations(_serviceAttributes_type0, env);
           }

           

