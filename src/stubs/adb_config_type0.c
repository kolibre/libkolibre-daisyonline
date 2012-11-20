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
         * adb_config_type0.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_config_type0.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = config_type0
                 * Namespace URI = http://www.daisy.org/ns/daisy-online/
                 * Namespace Prefix = ns3
                 */
           


        struct adb_config_type0
        {
            axis2_char_t *property_TypeName;

            axis2_bool_t property_supportsMultipleSelections;

                
                axis2_bool_t is_valid_supportsMultipleSelections;
            axis2_char_t* property_preferredUILanguage;

                
                axis2_bool_t is_valid_preferredUILanguage;
            int property_bandwidth;

                
                axis2_bool_t is_valid_bandwidth;
            adb_supportedContentFormats_type0_t* property_supportedContentFormats;

                
                axis2_bool_t is_valid_supportedContentFormats;
            adb_supportedContentProtectionFormats_type0_t* property_supportedContentProtectionFormats;

                
                axis2_bool_t is_valid_supportedContentProtectionFormats;
            adb_keyRing_type0_t* property_keyRing;

                
                axis2_bool_t is_valid_keyRing;
            adb_supportedMimeTypes_type0_t* property_supportedMimeTypes;

                
                axis2_bool_t is_valid_supportedMimeTypes;
            adb_supportedInputTypes_type0_t* property_supportedInputTypes;

                
                axis2_bool_t is_valid_supportedInputTypes;
            axis2_bool_t property_requiresAudioLabels;

                
                axis2_bool_t is_valid_requiresAudioLabels;
            adb_additionalTransferProtocols_type0_t* property_additionalTransferProtocols;

                
                axis2_bool_t is_valid_additionalTransferProtocols;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_config_type0_set_supportsMultipleSelections_nil(
                        adb_config_type0_t* _config_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_config_type0_set_preferredUILanguage_nil(
                        adb_config_type0_t* _config_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_config_type0_set_bandwidth_nil(
                        adb_config_type0_t* _config_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_config_type0_set_supportedContentFormats_nil(
                        adb_config_type0_t* _config_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_config_type0_set_supportedContentProtectionFormats_nil(
                        adb_config_type0_t* _config_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_config_type0_set_keyRing_nil(
                        adb_config_type0_t* _config_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_config_type0_set_supportedMimeTypes_nil(
                        adb_config_type0_t* _config_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_config_type0_set_supportedInputTypes_nil(
                        adb_config_type0_t* _config_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_config_type0_set_requiresAudioLabels_nil(
                        adb_config_type0_t* _config_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_config_type0_set_additionalTransferProtocols_nil(
                        adb_config_type0_t* _config_type0,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_config_type0_t* AXIS2_CALL
        adb_config_type0_create(
            const axutil_env_t *env)
        {
            adb_config_type0_t *_config_type0 = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _config_type0 = (adb_config_type0_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_config_type0_t));

            if(NULL == _config_type0)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_config_type0, 0, sizeof(adb_config_type0_t));

            _config_type0->property_TypeName = axutil_strdup(env, "adb_config_type0");
            _config_type0->is_valid_supportsMultipleSelections  = AXIS2_FALSE;
            _config_type0->property_preferredUILanguage  = NULL;
                  _config_type0->is_valid_preferredUILanguage  = AXIS2_FALSE;
            _config_type0->is_valid_bandwidth  = AXIS2_FALSE;
            _config_type0->property_supportedContentFormats  = NULL;
                  _config_type0->is_valid_supportedContentFormats  = AXIS2_FALSE;
            _config_type0->property_supportedContentProtectionFormats  = NULL;
                  _config_type0->is_valid_supportedContentProtectionFormats  = AXIS2_FALSE;
            _config_type0->property_keyRing  = NULL;
                  _config_type0->is_valid_keyRing  = AXIS2_FALSE;
            _config_type0->property_supportedMimeTypes  = NULL;
                  _config_type0->is_valid_supportedMimeTypes  = AXIS2_FALSE;
            _config_type0->property_supportedInputTypes  = NULL;
                  _config_type0->is_valid_supportedInputTypes  = AXIS2_FALSE;
            _config_type0->is_valid_requiresAudioLabels  = AXIS2_FALSE;
            _config_type0->property_additionalTransferProtocols  = NULL;
                  _config_type0->is_valid_additionalTransferProtocols  = AXIS2_FALSE;
            

            return _config_type0;
        }

        adb_config_type0_t* AXIS2_CALL
        adb_config_type0_create_with_values(
            const axutil_env_t *env,
                axis2_bool_t _supportsMultipleSelections,
                axis2_char_t* _preferredUILanguage,
                int _bandwidth,
                adb_supportedContentFormats_type0_t* _supportedContentFormats,
                adb_supportedContentProtectionFormats_type0_t* _supportedContentProtectionFormats,
                adb_keyRing_type0_t* _keyRing,
                adb_supportedMimeTypes_type0_t* _supportedMimeTypes,
                adb_supportedInputTypes_type0_t* _supportedInputTypes,
                axis2_bool_t _requiresAudioLabels,
                adb_additionalTransferProtocols_type0_t* _additionalTransferProtocols)
        {
            adb_config_type0_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_config_type0_create(env);

            
              status = adb_config_type0_set_supportsMultipleSelections(
                                     adb_obj,
                                     env,
                                     _supportsMultipleSelections);
              if(status == AXIS2_FAILURE) {
                  adb_config_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_config_type0_set_preferredUILanguage(
                                     adb_obj,
                                     env,
                                     _preferredUILanguage);
              if(status == AXIS2_FAILURE) {
                  adb_config_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_config_type0_set_bandwidth(
                                     adb_obj,
                                     env,
                                     _bandwidth);
              if(status == AXIS2_FAILURE) {
                  adb_config_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_config_type0_set_supportedContentFormats(
                                     adb_obj,
                                     env,
                                     _supportedContentFormats);
              if(status == AXIS2_FAILURE) {
                  adb_config_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_config_type0_set_supportedContentProtectionFormats(
                                     adb_obj,
                                     env,
                                     _supportedContentProtectionFormats);
              if(status == AXIS2_FAILURE) {
                  adb_config_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_config_type0_set_keyRing(
                                     adb_obj,
                                     env,
                                     _keyRing);
              if(status == AXIS2_FAILURE) {
                  adb_config_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_config_type0_set_supportedMimeTypes(
                                     adb_obj,
                                     env,
                                     _supportedMimeTypes);
              if(status == AXIS2_FAILURE) {
                  adb_config_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_config_type0_set_supportedInputTypes(
                                     adb_obj,
                                     env,
                                     _supportedInputTypes);
              if(status == AXIS2_FAILURE) {
                  adb_config_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_config_type0_set_requiresAudioLabels(
                                     adb_obj,
                                     env,
                                     _requiresAudioLabels);
              if(status == AXIS2_FAILURE) {
                  adb_config_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_config_type0_set_additionalTransferProtocols(
                                     adb_obj,
                                     env,
                                     _additionalTransferProtocols);
              if(status == AXIS2_FAILURE) {
                  adb_config_type0_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axis2_bool_t AXIS2_CALL
                adb_config_type0_free_popping_value(
                        adb_config_type0_t* _config_type0,
                        const axutil_env_t *env)
                {
                    axis2_bool_t value;

                    
                    
                    value = _config_type0->property_supportsMultipleSelections;

                    adb_config_type0_free(_config_type0, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_config_type0_free(
                adb_config_type0_t* _config_type0,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _config_type0,
                env,
                "adb_config_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_config_type0_free_obj(
                adb_config_type0_t* _config_type0,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_FAILURE);

            if (_config_type0->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _config_type0->property_TypeName);
            }

            adb_config_type0_reset_supportsMultipleSelections(_config_type0, env);
            adb_config_type0_reset_preferredUILanguage(_config_type0, env);
            adb_config_type0_reset_bandwidth(_config_type0, env);
            adb_config_type0_reset_supportedContentFormats(_config_type0, env);
            adb_config_type0_reset_supportedContentProtectionFormats(_config_type0, env);
            adb_config_type0_reset_keyRing(_config_type0, env);
            adb_config_type0_reset_supportedMimeTypes(_config_type0, env);
            adb_config_type0_reset_supportedInputTypes(_config_type0, env);
            adb_config_type0_reset_requiresAudioLabels(_config_type0, env);
            adb_config_type0_reset_additionalTransferProtocols(_config_type0, env);
            

            if(_config_type0)
            {
                AXIS2_FREE(env->allocator, _config_type0);
                _config_type0 = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_config_type0_deserialize(
                adb_config_type0_t* _config_type0,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _config_type0,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_config_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_config_type0_deserialize_obj(
                adb_config_type0_t* _config_type0,
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
            AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for config_type0 : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    

                     
                     /*
                      * building supportsMultipleSelections element
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
                                   
                                 element_qname = axutil_qname_create(env, "supportsMultipleSelections", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

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
                                                status = adb_config_type0_set_supportsMultipleSelections(_config_type0, env,
                                                                 AXIS2_TRUE);
                                            }
                                            else
                                            {
                                                status = adb_config_type0_set_supportsMultipleSelections(_config_type0, env,
                                                                      AXIS2_FALSE);
                                            }
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element supportsMultipleSelections");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for supportsMultipleSelections ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element supportsMultipleSelections missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building preferredUILanguage element
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
                                 
                                 element_qname = axutil_qname_create(env, "preferredUILanguage", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

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
                                            status = adb_config_type0_set_preferredUILanguage(_config_type0, env,
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
                                                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element preferredUILanguage");
                                                status = AXIS2_FAILURE;
                                            }
                                            else
                                            {
                                                /* after all, we found this is a empty string */
                                                status = adb_config_type0_set_preferredUILanguage(_config_type0, env,
                                                                   "");
                                            }
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for preferredUILanguage ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element preferredUILanguage missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building bandwidth element
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
                                 
                                 element_qname = axutil_qname_create(env, "bandwidth", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

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
                                            status = adb_config_type0_set_bandwidth(_config_type0, env,
                                                                   atoi(text_value));
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element bandwidth");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for bandwidth ");
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
                      * building supportedContentFormats element
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
                                 
                                 element_qname = axutil_qname_create(env, "supportedContentFormats", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

                           if (adb_supportedContentFormats_type0_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_supportedContentFormats_type0");

                                      status =  adb_supportedContentFormats_type0_deserialize((adb_supportedContentFormats_type0_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element supportedContentFormats");
                                      }
                                      else
                                      {
                                          status = adb_config_type0_set_supportedContentFormats(_config_type0, env,
                                                                   (adb_supportedContentFormats_type0_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for supportedContentFormats ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element supportedContentFormats missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building supportedContentProtectionFormats element
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
                                 
                                 element_qname = axutil_qname_create(env, "supportedContentProtectionFormats", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

                           if (adb_supportedContentProtectionFormats_type0_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_supportedContentProtectionFormats_type0");

                                      status =  adb_supportedContentProtectionFormats_type0_deserialize((adb_supportedContentProtectionFormats_type0_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element supportedContentProtectionFormats");
                                      }
                                      else
                                      {
                                          status = adb_config_type0_set_supportedContentProtectionFormats(_config_type0, env,
                                                                   (adb_supportedContentProtectionFormats_type0_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for supportedContentProtectionFormats ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element supportedContentProtectionFormats missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building keyRing element
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
                                 
                                 element_qname = axutil_qname_create(env, "keyRing", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

                           if (adb_keyRing_type0_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_keyRing_type0");

                                      status =  adb_keyRing_type0_deserialize((adb_keyRing_type0_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element keyRing");
                                      }
                                      else
                                      {
                                          status = adb_config_type0_set_keyRing(_config_type0, env,
                                                                   (adb_keyRing_type0_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for keyRing ");
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
                      * building supportedMimeTypes element
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
                                 
                                 element_qname = axutil_qname_create(env, "supportedMimeTypes", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

                           if (adb_supportedMimeTypes_type0_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_supportedMimeTypes_type0");

                                      status =  adb_supportedMimeTypes_type0_deserialize((adb_supportedMimeTypes_type0_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element supportedMimeTypes");
                                      }
                                      else
                                      {
                                          status = adb_config_type0_set_supportedMimeTypes(_config_type0, env,
                                                                   (adb_supportedMimeTypes_type0_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for supportedMimeTypes ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element supportedMimeTypes missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building supportedInputTypes element
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
                                 
                                 element_qname = axutil_qname_create(env, "supportedInputTypes", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

                           if (adb_supportedInputTypes_type0_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_supportedInputTypes_type0");

                                      status =  adb_supportedInputTypes_type0_deserialize((adb_supportedInputTypes_type0_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element supportedInputTypes");
                                      }
                                      else
                                      {
                                          status = adb_config_type0_set_supportedInputTypes(_config_type0, env,
                                                                   (adb_supportedInputTypes_type0_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for supportedInputTypes ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element supportedInputTypes missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building requiresAudioLabels element
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
                                 
                                 element_qname = axutil_qname_create(env, "requiresAudioLabels", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

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
                                                status = adb_config_type0_set_requiresAudioLabels(_config_type0, env,
                                                                 AXIS2_TRUE);
                                            }
                                            else
                                            {
                                                status = adb_config_type0_set_requiresAudioLabels(_config_type0, env,
                                                                      AXIS2_FALSE);
                                            }
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element requiresAudioLabels");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for requiresAudioLabels ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element requiresAudioLabels missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building additionalTransferProtocols element
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
                                 
                                 element_qname = axutil_qname_create(env, "additionalTransferProtocols", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

                           if (adb_additionalTransferProtocols_type0_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_additionalTransferProtocols_type0");

                                      status =  adb_additionalTransferProtocols_type0_deserialize((adb_additionalTransferProtocols_type0_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_FALSE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element additionalTransferProtocols");
                                      }
                                      else
                                      {
                                          status = adb_config_type0_set_additionalTransferProtocols(_config_type0, env,
                                                                   (adb_additionalTransferProtocols_type0_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for additionalTransferProtocols ");
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
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_config_type0_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_config_type0_declare_parent_namespaces(
                    adb_config_type0_t* _config_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_config_type0_serialize(
                adb_config_type0_t* _config_type0,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_config_type0 == NULL)
            {
                return adb_config_type0_serialize_obj(
                    _config_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _config_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_config_type0");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_config_type0_serialize_obj(
                adb_config_type0_t* _config_type0,
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
                    
                    axis2_char_t text_value_3[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_4[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_5[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_6[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_7[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_8[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_9[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_10[ADB_DEFAULT_DIGIT_LIMIT];
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _config_type0, NULL);
            
            
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
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"config_type0\"", NULL);
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
                                 "http://www.daisy.org/ns/daisy-online/",
                                 xsi_prefix);
            xsi_type_attri = axiom_attribute_create (env, "type", "config_type0", xsi_ns);
            
            axiom_element_add_attribute (parent_element, env, xsi_type_attri, parent);
        
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.daisy.org/ns/daisy-online/",
                                            p_prefix));
                       }
                      

                   if (!_config_type0->is_valid_supportsMultipleSelections)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property supportsMultipleSelections");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("supportsMultipleSelections"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("supportsMultipleSelections")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing supportsMultipleSelections element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%ssupportsMultipleSelections>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%ssupportsMultipleSelections>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           strcpy(text_value_1, (_config_type0->property_supportsMultipleSelections)?"true":"false");
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                           
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
                      

                   if (!_config_type0->is_valid_preferredUILanguage)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property preferredUILanguage");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("preferredUILanguage"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("preferredUILanguage")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing preferredUILanguage element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%spreferredUILanguage>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%spreferredUILanguage>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_2 = _config_type0->property_preferredUILanguage;
                           
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
                      

                   if (!_config_type0->is_valid_bandwidth)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("bandwidth"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("bandwidth")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing bandwidth element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sbandwidth>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sbandwidth>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                               sprintf (text_value_3, AXIS2_PRINTF_INT32_FORMAT_SPECIFIER, _config_type0->property_bandwidth);
                             
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_3, axutil_strlen(text_value_3));
                           
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
                      

                   if (!_config_type0->is_valid_supportedContentFormats)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property supportedContentFormats");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("supportedContentFormats"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("supportedContentFormats")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing supportedContentFormats element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%ssupportedContentFormats",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%ssupportedContentFormats>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_supportedContentFormats_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_supportedContentFormats_type0_serialize(_config_type0->property_supportedContentFormats, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_supportedContentFormats_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_supportedContentFormats_type0_is_particle())
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
                      

                   if (!_config_type0->is_valid_supportedContentProtectionFormats)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property supportedContentProtectionFormats");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("supportedContentProtectionFormats"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("supportedContentProtectionFormats")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing supportedContentProtectionFormats element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%ssupportedContentProtectionFormats",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%ssupportedContentProtectionFormats>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_supportedContentProtectionFormats_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_supportedContentProtectionFormats_type0_serialize(_config_type0->property_supportedContentProtectionFormats, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_supportedContentProtectionFormats_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_supportedContentProtectionFormats_type0_is_particle())
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
                      

                   if (!_config_type0->is_valid_keyRing)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("keyRing"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("keyRing")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing keyRing element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%skeyRing",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%skeyRing>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_keyRing_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_keyRing_type0_serialize(_config_type0->property_keyRing, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_keyRing_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_keyRing_type0_is_particle())
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
                      

                   if (!_config_type0->is_valid_supportedMimeTypes)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property supportedMimeTypes");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("supportedMimeTypes"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("supportedMimeTypes")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing supportedMimeTypes element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%ssupportedMimeTypes",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%ssupportedMimeTypes>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_supportedMimeTypes_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_supportedMimeTypes_type0_serialize(_config_type0->property_supportedMimeTypes, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_supportedMimeTypes_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_supportedMimeTypes_type0_is_particle())
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
                      

                   if (!_config_type0->is_valid_supportedInputTypes)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property supportedInputTypes");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("supportedInputTypes"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("supportedInputTypes")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing supportedInputTypes element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%ssupportedInputTypes",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%ssupportedInputTypes>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_supportedInputTypes_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_supportedInputTypes_type0_serialize(_config_type0->property_supportedInputTypes, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_supportedInputTypes_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_supportedInputTypes_type0_is_particle())
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
                      

                   if (!_config_type0->is_valid_requiresAudioLabels)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property requiresAudioLabels");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("requiresAudioLabels"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("requiresAudioLabels")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing requiresAudioLabels element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%srequiresAudioLabels>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%srequiresAudioLabels>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           strcpy(text_value_9, (_config_type0->property_requiresAudioLabels)?"true":"false");
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_9, axutil_strlen(text_value_9));
                           
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
                      

                   if (!_config_type0->is_valid_additionalTransferProtocols)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("additionalTransferProtocols"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("additionalTransferProtocols")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing additionalTransferProtocols element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sadditionalTransferProtocols",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sadditionalTransferProtocols>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_additionalTransferProtocols_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_additionalTransferProtocols_type0_serialize(_config_type0->property_additionalTransferProtocols, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_additionalTransferProtocols_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_additionalTransferProtocols_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 

            return parent;
        }


        

            /**
             * Getter for supportsMultipleSelections by  Property Number 1
             */
            axis2_bool_t AXIS2_CALL
            adb_config_type0_get_property1(
                adb_config_type0_t* _config_type0,
                const axutil_env_t *env)
            {
                return adb_config_type0_get_supportsMultipleSelections(_config_type0,
                                             env);
            }

            /**
             * getter for supportsMultipleSelections.
             */
            axis2_bool_t AXIS2_CALL
            adb_config_type0_get_supportsMultipleSelections(
                    adb_config_type0_t* _config_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (axis2_bool_t)0);
                    AXIS2_PARAM_CHECK(env->error, _config_type0, (axis2_bool_t)0);
                  

                return _config_type0->property_supportsMultipleSelections;
             }

            /**
             * setter for supportsMultipleSelections
             */
            axis2_status_t AXIS2_CALL
            adb_config_type0_set_supportsMultipleSelections(
                    adb_config_type0_t* _config_type0,
                    const axutil_env_t *env,
                    axis2_bool_t  arg_supportsMultipleSelections)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_FAILURE);
                
                if(_config_type0->is_valid_supportsMultipleSelections &&
                        arg_supportsMultipleSelections == _config_type0->property_supportsMultipleSelections)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_config_type0_reset_supportsMultipleSelections(_config_type0, env);

                _config_type0->property_supportsMultipleSelections = arg_supportsMultipleSelections;
                        _config_type0->is_valid_supportsMultipleSelections = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for supportsMultipleSelections
            */
           axis2_status_t AXIS2_CALL
           adb_config_type0_reset_supportsMultipleSelections(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_FAILURE);
               

               _config_type0->is_valid_supportsMultipleSelections = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether supportsMultipleSelections is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_config_type0_is_supportsMultipleSelections_nil(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_TRUE);
               
               return !_config_type0->is_valid_supportsMultipleSelections;
           }

           /**
            * Set supportsMultipleSelections to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_config_type0_set_supportsMultipleSelections_nil(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               return adb_config_type0_reset_supportsMultipleSelections(_config_type0, env);
           }

           

            /**
             * Getter for preferredUILanguage by  Property Number 2
             */
            axis2_char_t* AXIS2_CALL
            adb_config_type0_get_property2(
                adb_config_type0_t* _config_type0,
                const axutil_env_t *env)
            {
                return adb_config_type0_get_preferredUILanguage(_config_type0,
                                             env);
            }

            /**
             * getter for preferredUILanguage.
             */
            axis2_char_t* AXIS2_CALL
            adb_config_type0_get_preferredUILanguage(
                    adb_config_type0_t* _config_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _config_type0, NULL);
                  

                return _config_type0->property_preferredUILanguage;
             }

            /**
             * setter for preferredUILanguage
             */
            axis2_status_t AXIS2_CALL
            adb_config_type0_set_preferredUILanguage(
                    adb_config_type0_t* _config_type0,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_preferredUILanguage)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_FAILURE);
                
                if(_config_type0->is_valid_preferredUILanguage &&
                        arg_preferredUILanguage == _config_type0->property_preferredUILanguage)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_preferredUILanguage)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "preferredUILanguage is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_config_type0_reset_preferredUILanguage(_config_type0, env);

                
                if(NULL == arg_preferredUILanguage)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _config_type0->property_preferredUILanguage = (axis2_char_t *)axutil_strdup(env, arg_preferredUILanguage);
                        if(NULL == _config_type0->property_preferredUILanguage)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for preferredUILanguage");
                            return AXIS2_FAILURE;
                        }
                        _config_type0->is_valid_preferredUILanguage = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for preferredUILanguage
            */
           axis2_status_t AXIS2_CALL
           adb_config_type0_reset_preferredUILanguage(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_FAILURE);
               

               
            
                
                if(_config_type0->property_preferredUILanguage != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _config_type0->property_preferredUILanguage);
                     _config_type0->property_preferredUILanguage = NULL;
                }
            
                
                
                _config_type0->is_valid_preferredUILanguage = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether preferredUILanguage is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_config_type0_is_preferredUILanguage_nil(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_TRUE);
               
               return !_config_type0->is_valid_preferredUILanguage;
           }

           /**
            * Set preferredUILanguage to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_config_type0_set_preferredUILanguage_nil(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               return adb_config_type0_reset_preferredUILanguage(_config_type0, env);
           }

           

            /**
             * Getter for bandwidth by  Property Number 3
             */
            int AXIS2_CALL
            adb_config_type0_get_property3(
                adb_config_type0_t* _config_type0,
                const axutil_env_t *env)
            {
                return adb_config_type0_get_bandwidth(_config_type0,
                                             env);
            }

            /**
             * getter for bandwidth.
             */
            int AXIS2_CALL
            adb_config_type0_get_bandwidth(
                    adb_config_type0_t* _config_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (int)0);
                    AXIS2_PARAM_CHECK(env->error, _config_type0, (int)0);
                  

                return _config_type0->property_bandwidth;
             }

            /**
             * setter for bandwidth
             */
            axis2_status_t AXIS2_CALL
            adb_config_type0_set_bandwidth(
                    adb_config_type0_t* _config_type0,
                    const axutil_env_t *env,
                    const int  arg_bandwidth)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_FAILURE);
                
                if(_config_type0->is_valid_bandwidth &&
                        arg_bandwidth == _config_type0->property_bandwidth)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_config_type0_reset_bandwidth(_config_type0, env);

                _config_type0->property_bandwidth = arg_bandwidth;
                        _config_type0->is_valid_bandwidth = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for bandwidth
            */
           axis2_status_t AXIS2_CALL
           adb_config_type0_reset_bandwidth(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_FAILURE);
               

               _config_type0->is_valid_bandwidth = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether bandwidth is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_config_type0_is_bandwidth_nil(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_TRUE);
               
               return !_config_type0->is_valid_bandwidth;
           }

           /**
            * Set bandwidth to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_config_type0_set_bandwidth_nil(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               return adb_config_type0_reset_bandwidth(_config_type0, env);
           }

           

            /**
             * Getter for supportedContentFormats by  Property Number 4
             */
            adb_supportedContentFormats_type0_t* AXIS2_CALL
            adb_config_type0_get_property4(
                adb_config_type0_t* _config_type0,
                const axutil_env_t *env)
            {
                return adb_config_type0_get_supportedContentFormats(_config_type0,
                                             env);
            }

            /**
             * getter for supportedContentFormats.
             */
            adb_supportedContentFormats_type0_t* AXIS2_CALL
            adb_config_type0_get_supportedContentFormats(
                    adb_config_type0_t* _config_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _config_type0, NULL);
                  

                return _config_type0->property_supportedContentFormats;
             }

            /**
             * setter for supportedContentFormats
             */
            axis2_status_t AXIS2_CALL
            adb_config_type0_set_supportedContentFormats(
                    adb_config_type0_t* _config_type0,
                    const axutil_env_t *env,
                    adb_supportedContentFormats_type0_t*  arg_supportedContentFormats)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_FAILURE);
                
                if(_config_type0->is_valid_supportedContentFormats &&
                        arg_supportedContentFormats == _config_type0->property_supportedContentFormats)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_supportedContentFormats)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "supportedContentFormats is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_config_type0_reset_supportedContentFormats(_config_type0, env);

                
                if(NULL == arg_supportedContentFormats)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _config_type0->property_supportedContentFormats = arg_supportedContentFormats;
                        _config_type0->is_valid_supportedContentFormats = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for supportedContentFormats
            */
           axis2_status_t AXIS2_CALL
           adb_config_type0_reset_supportedContentFormats(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_FAILURE);
               

               
            
                
                if(_config_type0->property_supportedContentFormats != NULL)
                {
                   
                   adb_supportedContentFormats_type0_free(_config_type0->property_supportedContentFormats, env);
                     _config_type0->property_supportedContentFormats = NULL;
                }
            
                
                
                _config_type0->is_valid_supportedContentFormats = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether supportedContentFormats is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_config_type0_is_supportedContentFormats_nil(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_TRUE);
               
               return !_config_type0->is_valid_supportedContentFormats;
           }

           /**
            * Set supportedContentFormats to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_config_type0_set_supportedContentFormats_nil(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               return adb_config_type0_reset_supportedContentFormats(_config_type0, env);
           }

           

            /**
             * Getter for supportedContentProtectionFormats by  Property Number 5
             */
            adb_supportedContentProtectionFormats_type0_t* AXIS2_CALL
            adb_config_type0_get_property5(
                adb_config_type0_t* _config_type0,
                const axutil_env_t *env)
            {
                return adb_config_type0_get_supportedContentProtectionFormats(_config_type0,
                                             env);
            }

            /**
             * getter for supportedContentProtectionFormats.
             */
            adb_supportedContentProtectionFormats_type0_t* AXIS2_CALL
            adb_config_type0_get_supportedContentProtectionFormats(
                    adb_config_type0_t* _config_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _config_type0, NULL);
                  

                return _config_type0->property_supportedContentProtectionFormats;
             }

            /**
             * setter for supportedContentProtectionFormats
             */
            axis2_status_t AXIS2_CALL
            adb_config_type0_set_supportedContentProtectionFormats(
                    adb_config_type0_t* _config_type0,
                    const axutil_env_t *env,
                    adb_supportedContentProtectionFormats_type0_t*  arg_supportedContentProtectionFormats)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_FAILURE);
                
                if(_config_type0->is_valid_supportedContentProtectionFormats &&
                        arg_supportedContentProtectionFormats == _config_type0->property_supportedContentProtectionFormats)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_supportedContentProtectionFormats)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "supportedContentProtectionFormats is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_config_type0_reset_supportedContentProtectionFormats(_config_type0, env);

                
                if(NULL == arg_supportedContentProtectionFormats)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _config_type0->property_supportedContentProtectionFormats = arg_supportedContentProtectionFormats;
                        _config_type0->is_valid_supportedContentProtectionFormats = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for supportedContentProtectionFormats
            */
           axis2_status_t AXIS2_CALL
           adb_config_type0_reset_supportedContentProtectionFormats(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_FAILURE);
               

               
            
                
                if(_config_type0->property_supportedContentProtectionFormats != NULL)
                {
                   
                   adb_supportedContentProtectionFormats_type0_free(_config_type0->property_supportedContentProtectionFormats, env);
                     _config_type0->property_supportedContentProtectionFormats = NULL;
                }
            
                
                
                _config_type0->is_valid_supportedContentProtectionFormats = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether supportedContentProtectionFormats is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_config_type0_is_supportedContentProtectionFormats_nil(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_TRUE);
               
               return !_config_type0->is_valid_supportedContentProtectionFormats;
           }

           /**
            * Set supportedContentProtectionFormats to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_config_type0_set_supportedContentProtectionFormats_nil(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               return adb_config_type0_reset_supportedContentProtectionFormats(_config_type0, env);
           }

           

            /**
             * Getter for keyRing by  Property Number 6
             */
            adb_keyRing_type0_t* AXIS2_CALL
            adb_config_type0_get_property6(
                adb_config_type0_t* _config_type0,
                const axutil_env_t *env)
            {
                return adb_config_type0_get_keyRing(_config_type0,
                                             env);
            }

            /**
             * getter for keyRing.
             */
            adb_keyRing_type0_t* AXIS2_CALL
            adb_config_type0_get_keyRing(
                    adb_config_type0_t* _config_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _config_type0, NULL);
                  

                return _config_type0->property_keyRing;
             }

            /**
             * setter for keyRing
             */
            axis2_status_t AXIS2_CALL
            adb_config_type0_set_keyRing(
                    adb_config_type0_t* _config_type0,
                    const axutil_env_t *env,
                    adb_keyRing_type0_t*  arg_keyRing)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_FAILURE);
                
                if(_config_type0->is_valid_keyRing &&
                        arg_keyRing == _config_type0->property_keyRing)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_config_type0_reset_keyRing(_config_type0, env);

                
                if(NULL == arg_keyRing)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _config_type0->property_keyRing = arg_keyRing;
                        _config_type0->is_valid_keyRing = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for keyRing
            */
           axis2_status_t AXIS2_CALL
           adb_config_type0_reset_keyRing(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_FAILURE);
               

               
            
                
                if(_config_type0->property_keyRing != NULL)
                {
                   
                   adb_keyRing_type0_free(_config_type0->property_keyRing, env);
                     _config_type0->property_keyRing = NULL;
                }
            
                
                
                _config_type0->is_valid_keyRing = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether keyRing is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_config_type0_is_keyRing_nil(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_TRUE);
               
               return !_config_type0->is_valid_keyRing;
           }

           /**
            * Set keyRing to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_config_type0_set_keyRing_nil(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               return adb_config_type0_reset_keyRing(_config_type0, env);
           }

           

            /**
             * Getter for supportedMimeTypes by  Property Number 7
             */
            adb_supportedMimeTypes_type0_t* AXIS2_CALL
            adb_config_type0_get_property7(
                adb_config_type0_t* _config_type0,
                const axutil_env_t *env)
            {
                return adb_config_type0_get_supportedMimeTypes(_config_type0,
                                             env);
            }

            /**
             * getter for supportedMimeTypes.
             */
            adb_supportedMimeTypes_type0_t* AXIS2_CALL
            adb_config_type0_get_supportedMimeTypes(
                    adb_config_type0_t* _config_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _config_type0, NULL);
                  

                return _config_type0->property_supportedMimeTypes;
             }

            /**
             * setter for supportedMimeTypes
             */
            axis2_status_t AXIS2_CALL
            adb_config_type0_set_supportedMimeTypes(
                    adb_config_type0_t* _config_type0,
                    const axutil_env_t *env,
                    adb_supportedMimeTypes_type0_t*  arg_supportedMimeTypes)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_FAILURE);
                
                if(_config_type0->is_valid_supportedMimeTypes &&
                        arg_supportedMimeTypes == _config_type0->property_supportedMimeTypes)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_supportedMimeTypes)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "supportedMimeTypes is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_config_type0_reset_supportedMimeTypes(_config_type0, env);

                
                if(NULL == arg_supportedMimeTypes)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _config_type0->property_supportedMimeTypes = arg_supportedMimeTypes;
                        _config_type0->is_valid_supportedMimeTypes = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for supportedMimeTypes
            */
           axis2_status_t AXIS2_CALL
           adb_config_type0_reset_supportedMimeTypes(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_FAILURE);
               

               
            
                
                if(_config_type0->property_supportedMimeTypes != NULL)
                {
                   
                   adb_supportedMimeTypes_type0_free(_config_type0->property_supportedMimeTypes, env);
                     _config_type0->property_supportedMimeTypes = NULL;
                }
            
                
                
                _config_type0->is_valid_supportedMimeTypes = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether supportedMimeTypes is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_config_type0_is_supportedMimeTypes_nil(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_TRUE);
               
               return !_config_type0->is_valid_supportedMimeTypes;
           }

           /**
            * Set supportedMimeTypes to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_config_type0_set_supportedMimeTypes_nil(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               return adb_config_type0_reset_supportedMimeTypes(_config_type0, env);
           }

           

            /**
             * Getter for supportedInputTypes by  Property Number 8
             */
            adb_supportedInputTypes_type0_t* AXIS2_CALL
            adb_config_type0_get_property8(
                adb_config_type0_t* _config_type0,
                const axutil_env_t *env)
            {
                return adb_config_type0_get_supportedInputTypes(_config_type0,
                                             env);
            }

            /**
             * getter for supportedInputTypes.
             */
            adb_supportedInputTypes_type0_t* AXIS2_CALL
            adb_config_type0_get_supportedInputTypes(
                    adb_config_type0_t* _config_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _config_type0, NULL);
                  

                return _config_type0->property_supportedInputTypes;
             }

            /**
             * setter for supportedInputTypes
             */
            axis2_status_t AXIS2_CALL
            adb_config_type0_set_supportedInputTypes(
                    adb_config_type0_t* _config_type0,
                    const axutil_env_t *env,
                    adb_supportedInputTypes_type0_t*  arg_supportedInputTypes)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_FAILURE);
                
                if(_config_type0->is_valid_supportedInputTypes &&
                        arg_supportedInputTypes == _config_type0->property_supportedInputTypes)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_supportedInputTypes)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "supportedInputTypes is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_config_type0_reset_supportedInputTypes(_config_type0, env);

                
                if(NULL == arg_supportedInputTypes)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _config_type0->property_supportedInputTypes = arg_supportedInputTypes;
                        _config_type0->is_valid_supportedInputTypes = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for supportedInputTypes
            */
           axis2_status_t AXIS2_CALL
           adb_config_type0_reset_supportedInputTypes(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_FAILURE);
               

               
            
                
                if(_config_type0->property_supportedInputTypes != NULL)
                {
                   
                   adb_supportedInputTypes_type0_free(_config_type0->property_supportedInputTypes, env);
                     _config_type0->property_supportedInputTypes = NULL;
                }
            
                
                
                _config_type0->is_valid_supportedInputTypes = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether supportedInputTypes is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_config_type0_is_supportedInputTypes_nil(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_TRUE);
               
               return !_config_type0->is_valid_supportedInputTypes;
           }

           /**
            * Set supportedInputTypes to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_config_type0_set_supportedInputTypes_nil(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               return adb_config_type0_reset_supportedInputTypes(_config_type0, env);
           }

           

            /**
             * Getter for requiresAudioLabels by  Property Number 9
             */
            axis2_bool_t AXIS2_CALL
            adb_config_type0_get_property9(
                adb_config_type0_t* _config_type0,
                const axutil_env_t *env)
            {
                return adb_config_type0_get_requiresAudioLabels(_config_type0,
                                             env);
            }

            /**
             * getter for requiresAudioLabels.
             */
            axis2_bool_t AXIS2_CALL
            adb_config_type0_get_requiresAudioLabels(
                    adb_config_type0_t* _config_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (axis2_bool_t)0);
                    AXIS2_PARAM_CHECK(env->error, _config_type0, (axis2_bool_t)0);
                  

                return _config_type0->property_requiresAudioLabels;
             }

            /**
             * setter for requiresAudioLabels
             */
            axis2_status_t AXIS2_CALL
            adb_config_type0_set_requiresAudioLabels(
                    adb_config_type0_t* _config_type0,
                    const axutil_env_t *env,
                    axis2_bool_t  arg_requiresAudioLabels)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_FAILURE);
                
                if(_config_type0->is_valid_requiresAudioLabels &&
                        arg_requiresAudioLabels == _config_type0->property_requiresAudioLabels)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_config_type0_reset_requiresAudioLabels(_config_type0, env);

                _config_type0->property_requiresAudioLabels = arg_requiresAudioLabels;
                        _config_type0->is_valid_requiresAudioLabels = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for requiresAudioLabels
            */
           axis2_status_t AXIS2_CALL
           adb_config_type0_reset_requiresAudioLabels(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_FAILURE);
               

               _config_type0->is_valid_requiresAudioLabels = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether requiresAudioLabels is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_config_type0_is_requiresAudioLabels_nil(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_TRUE);
               
               return !_config_type0->is_valid_requiresAudioLabels;
           }

           /**
            * Set requiresAudioLabels to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_config_type0_set_requiresAudioLabels_nil(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               return adb_config_type0_reset_requiresAudioLabels(_config_type0, env);
           }

           

            /**
             * Getter for additionalTransferProtocols by  Property Number 10
             */
            adb_additionalTransferProtocols_type0_t* AXIS2_CALL
            adb_config_type0_get_property10(
                adb_config_type0_t* _config_type0,
                const axutil_env_t *env)
            {
                return adb_config_type0_get_additionalTransferProtocols(_config_type0,
                                             env);
            }

            /**
             * getter for additionalTransferProtocols.
             */
            adb_additionalTransferProtocols_type0_t* AXIS2_CALL
            adb_config_type0_get_additionalTransferProtocols(
                    adb_config_type0_t* _config_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _config_type0, NULL);
                  

                return _config_type0->property_additionalTransferProtocols;
             }

            /**
             * setter for additionalTransferProtocols
             */
            axis2_status_t AXIS2_CALL
            adb_config_type0_set_additionalTransferProtocols(
                    adb_config_type0_t* _config_type0,
                    const axutil_env_t *env,
                    adb_additionalTransferProtocols_type0_t*  arg_additionalTransferProtocols)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_FAILURE);
                
                if(_config_type0->is_valid_additionalTransferProtocols &&
                        arg_additionalTransferProtocols == _config_type0->property_additionalTransferProtocols)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_config_type0_reset_additionalTransferProtocols(_config_type0, env);

                
                if(NULL == arg_additionalTransferProtocols)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _config_type0->property_additionalTransferProtocols = arg_additionalTransferProtocols;
                        _config_type0->is_valid_additionalTransferProtocols = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for additionalTransferProtocols
            */
           axis2_status_t AXIS2_CALL
           adb_config_type0_reset_additionalTransferProtocols(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_FAILURE);
               

               
            
                
                if(_config_type0->property_additionalTransferProtocols != NULL)
                {
                   
                   adb_additionalTransferProtocols_type0_free(_config_type0->property_additionalTransferProtocols, env);
                     _config_type0->property_additionalTransferProtocols = NULL;
                }
            
                
                
                _config_type0->is_valid_additionalTransferProtocols = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether additionalTransferProtocols is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_config_type0_is_additionalTransferProtocols_nil(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _config_type0, AXIS2_TRUE);
               
               return !_config_type0->is_valid_additionalTransferProtocols;
           }

           /**
            * Set additionalTransferProtocols to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_config_type0_set_additionalTransferProtocols_nil(
                   adb_config_type0_t* _config_type0,
                   const axutil_env_t *env)
           {
               return adb_config_type0_reset_additionalTransferProtocols(_config_type0, env);
           }

           

