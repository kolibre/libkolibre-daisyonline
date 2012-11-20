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
         * adb_metadata_type0.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_metadata_type0.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = metadata_type0
                 * Namespace URI = http://www.daisy.org/ns/daisy-online/
                 * Namespace Prefix = ns3
                 */
           


        struct adb_metadata_type0
        {
            axis2_char_t *property_TypeName;

            axiom_node_t* property_title;

                
                axis2_bool_t is_valid_title;
            axiom_node_t* property_identifier;

                
                axis2_bool_t is_valid_identifier;
            axiom_node_t* property_publisher;

                
                axis2_bool_t is_valid_publisher;
            axiom_node_t* property_format;

                
                axis2_bool_t is_valid_format;
            axiom_node_t* property_date;

                
                axis2_bool_t is_valid_date;
            axiom_node_t* property_source;

                
                axis2_bool_t is_valid_source;
            axutil_array_list_t* property_type;

                
                axis2_bool_t is_valid_type;
            axutil_array_list_t* property_subject;

                
                axis2_bool_t is_valid_subject;
            axutil_array_list_t* property_rights;

                
                axis2_bool_t is_valid_rights;
            axutil_array_list_t* property_relation;

                
                axis2_bool_t is_valid_relation;
            axutil_array_list_t* property_language;

                
                axis2_bool_t is_valid_language;
            axutil_array_list_t* property_description;

                
                axis2_bool_t is_valid_description;
            axutil_array_list_t* property_creator;

                
                axis2_bool_t is_valid_creator;
            axutil_array_list_t* property_coverage;

                
                axis2_bool_t is_valid_coverage;
            axutil_array_list_t* property_contributor;

                
                axis2_bool_t is_valid_contributor;
            axutil_array_list_t* property_narrator;

                
                axis2_bool_t is_valid_narrator;
            int64_t property_size;

                
                axis2_bool_t is_valid_size;
            axutil_array_list_t* property_meta;

                
                axis2_bool_t is_valid_meta;
            axutil_array_list_t* property_metadataChoice_type0;

                
                axis2_bool_t is_valid_metadataChoice_type0;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_metadata_type0_set_title_nil(
                        adb_metadata_type0_t* _metadata_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_metadata_type0_set_identifier_nil(
                        adb_metadata_type0_t* _metadata_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_metadata_type0_set_publisher_nil(
                        adb_metadata_type0_t* _metadata_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_metadata_type0_set_format_nil(
                        adb_metadata_type0_t* _metadata_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_metadata_type0_set_date_nil(
                        adb_metadata_type0_t* _metadata_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_metadata_type0_set_source_nil(
                        adb_metadata_type0_t* _metadata_type0,
                        const axutil_env_t *env);
            
                 axis2_status_t AXIS2_CALL
                 adb_metadata_type0_set_type_nil_at(
                        adb_metadata_type0_t* _metadata_type0, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_metadata_type0_set_type_nil(
                        adb_metadata_type0_t* _metadata_type0,
                        const axutil_env_t *env);
            
                 axis2_status_t AXIS2_CALL
                 adb_metadata_type0_set_subject_nil_at(
                        adb_metadata_type0_t* _metadata_type0, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_metadata_type0_set_subject_nil(
                        adb_metadata_type0_t* _metadata_type0,
                        const axutil_env_t *env);
            
                 axis2_status_t AXIS2_CALL
                 adb_metadata_type0_set_rights_nil_at(
                        adb_metadata_type0_t* _metadata_type0, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_metadata_type0_set_rights_nil(
                        adb_metadata_type0_t* _metadata_type0,
                        const axutil_env_t *env);
            
                 axis2_status_t AXIS2_CALL
                 adb_metadata_type0_set_relation_nil_at(
                        adb_metadata_type0_t* _metadata_type0, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_metadata_type0_set_relation_nil(
                        adb_metadata_type0_t* _metadata_type0,
                        const axutil_env_t *env);
            
                 axis2_status_t AXIS2_CALL
                 adb_metadata_type0_set_language_nil_at(
                        adb_metadata_type0_t* _metadata_type0, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_metadata_type0_set_language_nil(
                        adb_metadata_type0_t* _metadata_type0,
                        const axutil_env_t *env);
            
                 axis2_status_t AXIS2_CALL
                 adb_metadata_type0_set_description_nil_at(
                        adb_metadata_type0_t* _metadata_type0, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_metadata_type0_set_description_nil(
                        adb_metadata_type0_t* _metadata_type0,
                        const axutil_env_t *env);
            
                 axis2_status_t AXIS2_CALL
                 adb_metadata_type0_set_creator_nil_at(
                        adb_metadata_type0_t* _metadata_type0, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_metadata_type0_set_creator_nil(
                        adb_metadata_type0_t* _metadata_type0,
                        const axutil_env_t *env);
            
                 axis2_status_t AXIS2_CALL
                 adb_metadata_type0_set_coverage_nil_at(
                        adb_metadata_type0_t* _metadata_type0, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_metadata_type0_set_coverage_nil(
                        adb_metadata_type0_t* _metadata_type0,
                        const axutil_env_t *env);
            
                 axis2_status_t AXIS2_CALL
                 adb_metadata_type0_set_contributor_nil_at(
                        adb_metadata_type0_t* _metadata_type0, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_metadata_type0_set_contributor_nil(
                        adb_metadata_type0_t* _metadata_type0,
                        const axutil_env_t *env);
            
                 axis2_status_t AXIS2_CALL
                 adb_metadata_type0_set_narrator_nil_at(
                        adb_metadata_type0_t* _metadata_type0, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_metadata_type0_set_narrator_nil(
                        adb_metadata_type0_t* _metadata_type0,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_metadata_type0_set_size_nil(
                        adb_metadata_type0_t* _metadata_type0,
                        const axutil_env_t *env);
            
                 axis2_status_t AXIS2_CALL
                 adb_metadata_type0_set_meta_nil_at(
                        adb_metadata_type0_t* _metadata_type0, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_metadata_type0_set_meta_nil(
                        adb_metadata_type0_t* _metadata_type0,
                        const axutil_env_t *env);
            
                 axis2_status_t AXIS2_CALL
                 adb_metadata_type0_set_metadataChoice_type0_nil_at(
                        adb_metadata_type0_t* _metadata_type0, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_metadata_type0_set_metadataChoice_type0_nil(
                        adb_metadata_type0_t* _metadata_type0,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_metadata_type0_t* AXIS2_CALL
        adb_metadata_type0_create(
            const axutil_env_t *env)
        {
            adb_metadata_type0_t *_metadata_type0 = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _metadata_type0 = (adb_metadata_type0_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_metadata_type0_t));

            if(NULL == _metadata_type0)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_metadata_type0, 0, sizeof(adb_metadata_type0_t));

            _metadata_type0->property_TypeName = axutil_strdup(env, "adb_metadata_type0");
            _metadata_type0->is_valid_title  = AXIS2_FALSE;
            _metadata_type0->is_valid_identifier  = AXIS2_FALSE;
            _metadata_type0->is_valid_publisher  = AXIS2_FALSE;
            _metadata_type0->is_valid_format  = AXIS2_FALSE;
            _metadata_type0->is_valid_date  = AXIS2_FALSE;
            _metadata_type0->is_valid_source  = AXIS2_FALSE;
            _metadata_type0->is_valid_type  = AXIS2_FALSE;
            _metadata_type0->is_valid_subject  = AXIS2_FALSE;
            _metadata_type0->is_valid_rights  = AXIS2_FALSE;
            _metadata_type0->is_valid_relation  = AXIS2_FALSE;
            _metadata_type0->is_valid_language  = AXIS2_FALSE;
            _metadata_type0->is_valid_description  = AXIS2_FALSE;
            _metadata_type0->is_valid_creator  = AXIS2_FALSE;
            _metadata_type0->is_valid_coverage  = AXIS2_FALSE;
            _metadata_type0->is_valid_contributor  = AXIS2_FALSE;
            _metadata_type0->property_narrator  = NULL;
                  _metadata_type0->is_valid_narrator  = AXIS2_FALSE;
            _metadata_type0->is_valid_size  = AXIS2_FALSE;
            _metadata_type0->property_meta  = NULL;
                  _metadata_type0->is_valid_meta  = AXIS2_FALSE;
            _metadata_type0->property_metadataChoice_type0  = NULL;
                  _metadata_type0->is_valid_metadataChoice_type0  = AXIS2_FALSE;
            

            return _metadata_type0;
        }

        adb_metadata_type0_t* AXIS2_CALL
        adb_metadata_type0_create_with_values(
            const axutil_env_t *env,
                axiom_node_t* _title,
                axiom_node_t* _identifier,
                axiom_node_t* _publisher,
                axiom_node_t* _format,
                axiom_node_t* _date,
                axiom_node_t* _source,
                axutil_array_list_t* _type,
                axutil_array_list_t* _subject,
                axutil_array_list_t* _rights,
                axutil_array_list_t* _relation,
                axutil_array_list_t* _language,
                axutil_array_list_t* _description,
                axutil_array_list_t* _creator,
                axutil_array_list_t* _coverage,
                axutil_array_list_t* _contributor,
                axutil_array_list_t* _narrator,
                int64_t _size,
                axutil_array_list_t* _meta,
                axutil_array_list_t* _metadataChoice_type0)
        {
            adb_metadata_type0_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_metadata_type0_create(env);

            
              status = adb_metadata_type0_set_title(
                                     adb_obj,
                                     env,
                                     _title);
              if(status == AXIS2_FAILURE) {
                  adb_metadata_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_metadata_type0_set_identifier(
                                     adb_obj,
                                     env,
                                     _identifier);
              if(status == AXIS2_FAILURE) {
                  adb_metadata_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_metadata_type0_set_publisher(
                                     adb_obj,
                                     env,
                                     _publisher);
              if(status == AXIS2_FAILURE) {
                  adb_metadata_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_metadata_type0_set_format(
                                     adb_obj,
                                     env,
                                     _format);
              if(status == AXIS2_FAILURE) {
                  adb_metadata_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_metadata_type0_set_date(
                                     adb_obj,
                                     env,
                                     _date);
              if(status == AXIS2_FAILURE) {
                  adb_metadata_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_metadata_type0_set_source(
                                     adb_obj,
                                     env,
                                     _source);
              if(status == AXIS2_FAILURE) {
                  adb_metadata_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_metadata_type0_set_type(
                                     adb_obj,
                                     env,
                                     _type);
              if(status == AXIS2_FAILURE) {
                  adb_metadata_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_metadata_type0_set_subject(
                                     adb_obj,
                                     env,
                                     _subject);
              if(status == AXIS2_FAILURE) {
                  adb_metadata_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_metadata_type0_set_rights(
                                     adb_obj,
                                     env,
                                     _rights);
              if(status == AXIS2_FAILURE) {
                  adb_metadata_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_metadata_type0_set_relation(
                                     adb_obj,
                                     env,
                                     _relation);
              if(status == AXIS2_FAILURE) {
                  adb_metadata_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_metadata_type0_set_language(
                                     adb_obj,
                                     env,
                                     _language);
              if(status == AXIS2_FAILURE) {
                  adb_metadata_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_metadata_type0_set_description(
                                     adb_obj,
                                     env,
                                     _description);
              if(status == AXIS2_FAILURE) {
                  adb_metadata_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_metadata_type0_set_creator(
                                     adb_obj,
                                     env,
                                     _creator);
              if(status == AXIS2_FAILURE) {
                  adb_metadata_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_metadata_type0_set_coverage(
                                     adb_obj,
                                     env,
                                     _coverage);
              if(status == AXIS2_FAILURE) {
                  adb_metadata_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_metadata_type0_set_contributor(
                                     adb_obj,
                                     env,
                                     _contributor);
              if(status == AXIS2_FAILURE) {
                  adb_metadata_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_metadata_type0_set_narrator(
                                     adb_obj,
                                     env,
                                     _narrator);
              if(status == AXIS2_FAILURE) {
                  adb_metadata_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_metadata_type0_set_size(
                                     adb_obj,
                                     env,
                                     _size);
              if(status == AXIS2_FAILURE) {
                  adb_metadata_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_metadata_type0_set_meta(
                                     adb_obj,
                                     env,
                                     _meta);
              if(status == AXIS2_FAILURE) {
                  adb_metadata_type0_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_metadata_type0_set_metadataChoice_type0(
                                     adb_obj,
                                     env,
                                     _metadataChoice_type0);
              if(status == AXIS2_FAILURE) {
                  adb_metadata_type0_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axiom_node_t* AXIS2_CALL
                adb_metadata_type0_free_popping_value(
                        adb_metadata_type0_t* _metadata_type0,
                        const axutil_env_t *env)
                {
                    axiom_node_t* value;

                    
                    
                    value = _metadata_type0->property_title;

                    adb_metadata_type0_free(_metadata_type0, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_metadata_type0_free(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _metadata_type0,
                env,
                "adb_metadata_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_metadata_type0_free_obj(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env)
        {
            
                int i = 0;
                int count = 0;
                void *element = NULL;
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);

            if (_metadata_type0->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _metadata_type0->property_TypeName);
            }

            adb_metadata_type0_reset_title(_metadata_type0, env);
            adb_metadata_type0_reset_identifier(_metadata_type0, env);
            adb_metadata_type0_reset_publisher(_metadata_type0, env);
            adb_metadata_type0_reset_format(_metadata_type0, env);
            adb_metadata_type0_reset_date(_metadata_type0, env);
            adb_metadata_type0_reset_source(_metadata_type0, env);
            adb_metadata_type0_reset_type(_metadata_type0, env);
            adb_metadata_type0_reset_subject(_metadata_type0, env);
            adb_metadata_type0_reset_rights(_metadata_type0, env);
            adb_metadata_type0_reset_relation(_metadata_type0, env);
            adb_metadata_type0_reset_language(_metadata_type0, env);
            adb_metadata_type0_reset_description(_metadata_type0, env);
            adb_metadata_type0_reset_creator(_metadata_type0, env);
            adb_metadata_type0_reset_coverage(_metadata_type0, env);
            adb_metadata_type0_reset_contributor(_metadata_type0, env);
            adb_metadata_type0_reset_narrator(_metadata_type0, env);
            adb_metadata_type0_reset_size(_metadata_type0, env);
            adb_metadata_type0_reset_meta(_metadata_type0, env);
            adb_metadata_type0_reset_metadataChoice_type0(_metadata_type0, env);
            

            if(_metadata_type0)
            {
                AXIS2_FREE(env->allocator, _metadata_type0);
                _metadata_type0 = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_metadata_type0_deserialize(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _metadata_type0,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_metadata_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_metadata_type0_deserialize_obj(
                adb_metadata_type0_t* _metadata_type0,
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
            AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for metadata_type0 : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    

                     
                     /*
                      * building title element
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
                                   
                                 element_qname = axutil_qname_create(env, "title", "http://purl.org/dc/elements/1.1/", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = NULL; /* just to avoid warning */
                                      
                                          if(axiom_node_get_first_child(current_node, env))
                                          {
                                              axiom_node_t *current_property_node = axiom_node_get_first_child(current_node, env);
                                              axiom_node_detach(current_property_node, env);
                                              status = adb_metadata_type0_set_title(_metadata_type0, env,
                                                                          current_property_node);
                                          }
                                          else
                                          {
                                              status = adb_metadata_type0_set_title(_metadata_type0, env,
                                                                          NULL);
                                          }
                                        
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for title ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element title missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building identifier element
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
                                 
                                 element_qname = axutil_qname_create(env, "identifier", "http://purl.org/dc/elements/1.1/", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = NULL; /* just to avoid warning */
                                      
                                          if(axiom_node_get_first_child(current_node, env))
                                          {
                                              axiom_node_t *current_property_node = axiom_node_get_first_child(current_node, env);
                                              axiom_node_detach(current_property_node, env);
                                              status = adb_metadata_type0_set_identifier(_metadata_type0, env,
                                                                          current_property_node);
                                          }
                                          else
                                          {
                                              status = adb_metadata_type0_set_identifier(_metadata_type0, env,
                                                                          NULL);
                                          }
                                        
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for identifier ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element identifier missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building publisher element
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
                                 
                                 element_qname = axutil_qname_create(env, "publisher", "http://purl.org/dc/elements/1.1/", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = NULL; /* just to avoid warning */
                                      
                                          if(axiom_node_get_first_child(current_node, env))
                                          {
                                              axiom_node_t *current_property_node = axiom_node_get_first_child(current_node, env);
                                              axiom_node_detach(current_property_node, env);
                                              status = adb_metadata_type0_set_publisher(_metadata_type0, env,
                                                                          current_property_node);
                                          }
                                          else
                                          {
                                              status = adb_metadata_type0_set_publisher(_metadata_type0, env,
                                                                          NULL);
                                          }
                                        
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for publisher ");
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
                      * building format element
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
                                 
                                 element_qname = axutil_qname_create(env, "format", "http://purl.org/dc/elements/1.1/", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = NULL; /* just to avoid warning */
                                      
                                          if(axiom_node_get_first_child(current_node, env))
                                          {
                                              axiom_node_t *current_property_node = axiom_node_get_first_child(current_node, env);
                                              axiom_node_detach(current_property_node, env);
                                              status = adb_metadata_type0_set_format(_metadata_type0, env,
                                                                          current_property_node);
                                          }
                                          else
                                          {
                                              status = adb_metadata_type0_set_format(_metadata_type0, env,
                                                                          NULL);
                                          }
                                        
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for format ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element format missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building date element
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
                                 
                                 element_qname = axutil_qname_create(env, "date", "http://purl.org/dc/elements/1.1/", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = NULL; /* just to avoid warning */
                                      
                                          if(axiom_node_get_first_child(current_node, env))
                                          {
                                              axiom_node_t *current_property_node = axiom_node_get_first_child(current_node, env);
                                              axiom_node_detach(current_property_node, env);
                                              status = adb_metadata_type0_set_date(_metadata_type0, env,
                                                                          current_property_node);
                                          }
                                          else
                                          {
                                              status = adb_metadata_type0_set_date(_metadata_type0, env,
                                                                          NULL);
                                          }
                                        
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for date ");
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
                      * building source element
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
                                 
                                 element_qname = axutil_qname_create(env, "source", "http://purl.org/dc/elements/1.1/", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = NULL; /* just to avoid warning */
                                      
                                          if(axiom_node_get_first_child(current_node, env))
                                          {
                                              axiom_node_t *current_property_node = axiom_node_get_first_child(current_node, env);
                                              axiom_node_detach(current_property_node, env);
                                              status = adb_metadata_type0_set_source(_metadata_type0, env,
                                                                          current_property_node);
                                          }
                                          else
                                          {
                                              status = adb_metadata_type0_set_source(_metadata_type0, env,
                                                                          NULL);
                                          }
                                        
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for source ");
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
                     * building type array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building type element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "type", "http://purl.org/dc/elements/1.1/", NULL);
                                  
                               
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

                                  if ( 
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          text_value = NULL; /* just to avoid warning */
                                          
                                              if(axiom_node_get_first_child(current_node, env))
                                              {
                                                  axiom_node_t *current_property_node = axiom_node_get_first_child(current_node, env);
                                                  axiom_node_detach(current_property_node, env);
                                                  axutil_array_list_add_at(arr_list, env, i, (void*)current_property_node);
                                              }
                                              else
                                              {
                                                  status = adb_metadata_type0_set_type(_metadata_type0, env,
                                                                              NULL);
                                              }
                                            
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for type ");
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
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "type (@minOccurs = '0') only have %d elements", i);
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
                                    status = adb_metadata_type0_set_type(_metadata_type0, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                    /*
                     * building subject array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building subject element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "subject", "http://purl.org/dc/elements/1.1/", NULL);
                                  
                               
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

                                  if ( 
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          text_value = NULL; /* just to avoid warning */
                                          
                                              if(axiom_node_get_first_child(current_node, env))
                                              {
                                                  axiom_node_t *current_property_node = axiom_node_get_first_child(current_node, env);
                                                  axiom_node_detach(current_property_node, env);
                                                  axutil_array_list_add_at(arr_list, env, i, (void*)current_property_node);
                                              }
                                              else
                                              {
                                                  status = adb_metadata_type0_set_subject(_metadata_type0, env,
                                                                              NULL);
                                              }
                                            
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for subject ");
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
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "subject (@minOccurs = '0') only have %d elements", i);
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
                                    status = adb_metadata_type0_set_subject(_metadata_type0, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                    /*
                     * building rights array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building rights element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "rights", "http://purl.org/dc/elements/1.1/", NULL);
                                  
                               
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

                                  if ( 
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          text_value = NULL; /* just to avoid warning */
                                          
                                              if(axiom_node_get_first_child(current_node, env))
                                              {
                                                  axiom_node_t *current_property_node = axiom_node_get_first_child(current_node, env);
                                                  axiom_node_detach(current_property_node, env);
                                                  axutil_array_list_add_at(arr_list, env, i, (void*)current_property_node);
                                              }
                                              else
                                              {
                                                  status = adb_metadata_type0_set_rights(_metadata_type0, env,
                                                                              NULL);
                                              }
                                            
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for rights ");
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
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "rights (@minOccurs = '0') only have %d elements", i);
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
                                    status = adb_metadata_type0_set_rights(_metadata_type0, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                    /*
                     * building relation array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building relation element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "relation", "http://purl.org/dc/elements/1.1/", NULL);
                                  
                               
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

                                  if ( 
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          text_value = NULL; /* just to avoid warning */
                                          
                                              if(axiom_node_get_first_child(current_node, env))
                                              {
                                                  axiom_node_t *current_property_node = axiom_node_get_first_child(current_node, env);
                                                  axiom_node_detach(current_property_node, env);
                                                  axutil_array_list_add_at(arr_list, env, i, (void*)current_property_node);
                                              }
                                              else
                                              {
                                                  status = adb_metadata_type0_set_relation(_metadata_type0, env,
                                                                              NULL);
                                              }
                                            
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for relation ");
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
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "relation (@minOccurs = '0') only have %d elements", i);
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
                                    status = adb_metadata_type0_set_relation(_metadata_type0, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                    /*
                     * building language array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building language element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "language", "http://purl.org/dc/elements/1.1/", NULL);
                                  
                               
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

                                  if ( 
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          text_value = NULL; /* just to avoid warning */
                                          
                                              if(axiom_node_get_first_child(current_node, env))
                                              {
                                                  axiom_node_t *current_property_node = axiom_node_get_first_child(current_node, env);
                                                  axiom_node_detach(current_property_node, env);
                                                  axutil_array_list_add_at(arr_list, env, i, (void*)current_property_node);
                                              }
                                              else
                                              {
                                                  status = adb_metadata_type0_set_language(_metadata_type0, env,
                                                                              NULL);
                                              }
                                            
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for language ");
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
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "language (@minOccurs = '0') only have %d elements", i);
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
                                    status = adb_metadata_type0_set_language(_metadata_type0, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                    /*
                     * building description array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building description element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "description", "http://purl.org/dc/elements/1.1/", NULL);
                                  
                               
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

                                  if ( 
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          text_value = NULL; /* just to avoid warning */
                                          
                                              if(axiom_node_get_first_child(current_node, env))
                                              {
                                                  axiom_node_t *current_property_node = axiom_node_get_first_child(current_node, env);
                                                  axiom_node_detach(current_property_node, env);
                                                  axutil_array_list_add_at(arr_list, env, i, (void*)current_property_node);
                                              }
                                              else
                                              {
                                                  status = adb_metadata_type0_set_description(_metadata_type0, env,
                                                                              NULL);
                                              }
                                            
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for description ");
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
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "description (@minOccurs = '0') only have %d elements", i);
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
                                    status = adb_metadata_type0_set_description(_metadata_type0, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                    /*
                     * building creator array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building creator element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "creator", "http://purl.org/dc/elements/1.1/", NULL);
                                  
                               
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

                                  if ( 
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          text_value = NULL; /* just to avoid warning */
                                          
                                              if(axiom_node_get_first_child(current_node, env))
                                              {
                                                  axiom_node_t *current_property_node = axiom_node_get_first_child(current_node, env);
                                                  axiom_node_detach(current_property_node, env);
                                                  axutil_array_list_add_at(arr_list, env, i, (void*)current_property_node);
                                              }
                                              else
                                              {
                                                  status = adb_metadata_type0_set_creator(_metadata_type0, env,
                                                                              NULL);
                                              }
                                            
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for creator ");
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
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "creator (@minOccurs = '0') only have %d elements", i);
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
                                    status = adb_metadata_type0_set_creator(_metadata_type0, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                    /*
                     * building coverage array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building coverage element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "coverage", "http://purl.org/dc/elements/1.1/", NULL);
                                  
                               
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

                                  if ( 
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          text_value = NULL; /* just to avoid warning */
                                          
                                              if(axiom_node_get_first_child(current_node, env))
                                              {
                                                  axiom_node_t *current_property_node = axiom_node_get_first_child(current_node, env);
                                                  axiom_node_detach(current_property_node, env);
                                                  axutil_array_list_add_at(arr_list, env, i, (void*)current_property_node);
                                              }
                                              else
                                              {
                                                  status = adb_metadata_type0_set_coverage(_metadata_type0, env,
                                                                              NULL);
                                              }
                                            
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for coverage ");
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
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "coverage (@minOccurs = '0') only have %d elements", i);
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
                                    status = adb_metadata_type0_set_coverage(_metadata_type0, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                    /*
                     * building contributor array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building contributor element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "contributor", "http://purl.org/dc/elements/1.1/", NULL);
                                  
                               
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

                                  if ( 
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          text_value = NULL; /* just to avoid warning */
                                          
                                              if(axiom_node_get_first_child(current_node, env))
                                              {
                                                  axiom_node_t *current_property_node = axiom_node_get_first_child(current_node, env);
                                                  axiom_node_detach(current_property_node, env);
                                                  axutil_array_list_add_at(arr_list, env, i, (void*)current_property_node);
                                              }
                                              else
                                              {
                                                  status = adb_metadata_type0_set_contributor(_metadata_type0, env,
                                                                              NULL);
                                              }
                                            
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for contributor ");
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
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "contributor (@minOccurs = '0') only have %d elements", i);
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
                                    status = adb_metadata_type0_set_contributor(_metadata_type0, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                    /*
                     * building narrator array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building narrator element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "narrator", "http://www.daisy.org/ns/daisy-online/", NULL);
                                  
                               
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

                                  if ( 
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          text_value = axiom_element_get_text(current_element, env, current_node);
                                          if(text_value != NULL)
                                          {
                                              axutil_array_list_add_at(arr_list, env, i, axutil_strdup(env, text_value));
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
                                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element narrator");
                                                  status = AXIS2_FAILURE;
                                              }
                                              else
                                              {
                                                  /* after all, we found this is a empty string */
                                                  axutil_array_list_add_at(arr_list, env, i, axutil_strdup(env, ""));
                                              }
                                          }
                                          
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for narrator ");
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
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "narrator (@minOccurs = '0') only have %d elements", i);
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
                                    status = adb_metadata_type0_set_narrator(_metadata_type0, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building size element
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
                                 
                                 element_qname = axutil_qname_create(env, "size", "http://www.daisy.org/ns/daisy-online/", NULL);
                                 

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
                                            status = adb_metadata_type0_set_size(_metadata_type0, env,
                                                                   axutil_strtol(text_value, (char**)NULL, 0));
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element size");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for size ");
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
                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "non nillable or minOuccrs != 0 element size missing");
                                  return AXIS2_FAILURE;
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                    /*
                     * building meta array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building meta element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "meta", "http://www.daisy.org/ns/daisy-online/", NULL);
                                  
                               
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

                                  if (adb_meta_type0_is_particle() ||  
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_meta_type0");
                                          
                                          status =  adb_meta_type0_deserialize((adb_meta_type0_t*)element, env,
                                                                                 &current_node, &is_early_node_valid, AXIS2_FALSE);
                                          
                                          if(AXIS2_FAILURE ==  status)
                                          {
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element meta ");
                                          }
                                          else
                                          {
                                            axutil_array_list_add_at(arr_list, env, i, element);
                                          }
                                        
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for meta ");
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
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "meta (@minOccurs = '0') only have %d elements", i);
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
                                    status = adb_metadata_type0_set_meta(_metadata_type0, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                    /*
                     * building metadataChoice_type0 array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building metadataChoice_type0 element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "metadataChoice_type0", "http://www.daisy.org/ns/daisy-online/", NULL);
                                  
                               
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

                                  if (adb_metadataChoice_type0_is_particle() ||  
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_metadataChoice_type0");
                                          
                                          status =  adb_metadataChoice_type0_deserialize((adb_metadataChoice_type0_t*)element, env,
                                                                                 &current_node, &is_early_node_valid, AXIS2_FALSE);
                                          
                                          if(AXIS2_FAILURE ==  status)
                                          {
                                              AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building element metadataChoice_type0 ");
                                          }
                                          else
                                          {
                                            axutil_array_list_add_at(arr_list, env, i, element);
                                          }
                                        
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for metadataChoice_type0 ");
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
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "metadataChoice_type0 (@minOccurs = '0') only have %d elements", i);
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
                                    status = adb_metadata_type0_set_metadataChoice_type0(_metadata_type0, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_metadata_type0_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_metadata_type0_declare_parent_namespaces(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_metadata_type0_serialize(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_metadata_type0 == NULL)
            {
                return adb_metadata_type0_serialize_obj(
                    _metadata_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _metadata_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_metadata_type0");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_metadata_type0_serialize_obj(
                adb_metadata_type0_t* _metadata_type0,
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
            
               int i = 0;
               int count = 0;
               void *element = NULL;
             
                    axis2_char_t *text_value_1;
                    axis2_char_t *text_value_1_temp;
                    
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
                    
                    axis2_char_t *text_value_7;
                    axis2_char_t *text_value_7_temp;
                    
                    axis2_char_t *text_value_8;
                    axis2_char_t *text_value_8_temp;
                    
                    axis2_char_t *text_value_9;
                    axis2_char_t *text_value_9_temp;
                    
                    axis2_char_t *text_value_10;
                    axis2_char_t *text_value_10_temp;
                    
                    axis2_char_t *text_value_11;
                    axis2_char_t *text_value_11_temp;
                    
                    axis2_char_t *text_value_12;
                    axis2_char_t *text_value_12_temp;
                    
                    axis2_char_t *text_value_13;
                    axis2_char_t *text_value_13_temp;
                    
                    axis2_char_t *text_value_14;
                    axis2_char_t *text_value_14_temp;
                    
                    axis2_char_t *text_value_15;
                    axis2_char_t *text_value_15_temp;
                    
                    axis2_char_t *text_value_16;
                    axis2_char_t *text_value_16_temp;
                    
                    axis2_char_t text_value_17[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_18[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_19[ADB_DEFAULT_DIGIT_LIMIT];
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
            
            
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
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"metadata_type0\"", NULL);
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
            xsi_type_attri = axiom_attribute_create (env, "type", "metadata_type0", xsi_ns);
            
            axiom_element_add_attribute (parent_element, env, xsi_type_attri, parent);
        
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://purl.org/dc/elements/1.1/",
                                            p_prefix));
                       }
                      

                   if (!_metadata_type0->is_valid_title)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property title");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("title"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("title")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing title element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%stitle>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%stitle>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                                text_value_1 = axiom_node_to_string(_metadata_type0->property_title, env);
                                
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                                
                                axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                                
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                                
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://purl.org/dc/elements/1.1/",
                                            p_prefix));
                       }
                      

                   if (!_metadata_type0->is_valid_identifier)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property identifier");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("identifier"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("identifier")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing identifier element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sidentifier>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sidentifier>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                                text_value_2 = axiom_node_to_string(_metadata_type0->property_identifier, env);
                                
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                                
                                axutil_stream_write(stream, env, text_value_2, axutil_strlen(text_value_2));
                                
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                                
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://purl.org/dc/elements/1.1/",
                                            p_prefix));
                       }
                      

                   if (!_metadata_type0->is_valid_publisher)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("publisher"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("publisher")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing publisher element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%spublisher>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%spublisher>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                                text_value_3 = axiom_node_to_string(_metadata_type0->property_publisher, env);
                                
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                                
                                axutil_stream_write(stream, env, text_value_3, axutil_strlen(text_value_3));
                                
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                                
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://purl.org/dc/elements/1.1/",
                                            p_prefix));
                       }
                      

                   if (!_metadata_type0->is_valid_format)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property format");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("format"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("format")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing format element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sformat>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sformat>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                                text_value_4 = axiom_node_to_string(_metadata_type0->property_format, env);
                                
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                                
                                axutil_stream_write(stream, env, text_value_4, axutil_strlen(text_value_4));
                                
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                                
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://purl.org/dc/elements/1.1/",
                                            p_prefix));
                       }
                      

                   if (!_metadata_type0->is_valid_date)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("date"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("date")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing date element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sdate>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sdate>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                                text_value_5 = axiom_node_to_string(_metadata_type0->property_date, env);
                                
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                                
                                axutil_stream_write(stream, env, text_value_5, axutil_strlen(text_value_5));
                                
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                                
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://purl.org/dc/elements/1.1/",
                                            p_prefix));
                       }
                      

                   if (!_metadata_type0->is_valid_source)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("source"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("source")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing source element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%ssource>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%ssource>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                                text_value_6 = axiom_node_to_string(_metadata_type0->property_source, env);
                                
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                                
                                axutil_stream_write(stream, env, text_value_6, axutil_strlen(text_value_6));
                                
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                                
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://purl.org/dc/elements/1.1/",
                                            p_prefix));
                       }
                      

                   if (!_metadata_type0->is_valid_type)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("type"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("type")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing type array
                      */
                     if (_metadata_type0->property_type != NULL)
                     {
                        
                            sprintf(start_input_str, "<%s%stype>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%stype>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_metadata_type0->property_type, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_metadata_type0->property_type, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing type element
                      */

                    
                    
                                text_value_7 = axiom_node_to_string((axiom_node_t*)element, env);
                                
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                                
                                axutil_stream_write(stream, env, text_value_7, axutil_strlen(text_value_7));
                                
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                                
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://purl.org/dc/elements/1.1/",
                                            p_prefix));
                       }
                      

                   if (!_metadata_type0->is_valid_subject)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("subject"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("subject")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing subject array
                      */
                     if (_metadata_type0->property_subject != NULL)
                     {
                        
                            sprintf(start_input_str, "<%s%ssubject>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%ssubject>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_metadata_type0->property_subject, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_metadata_type0->property_subject, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing subject element
                      */

                    
                    
                                text_value_8 = axiom_node_to_string((axiom_node_t*)element, env);
                                
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                                
                                axutil_stream_write(stream, env, text_value_8, axutil_strlen(text_value_8));
                                
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                                
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://purl.org/dc/elements/1.1/",
                                            p_prefix));
                       }
                      

                   if (!_metadata_type0->is_valid_rights)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("rights"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("rights")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing rights array
                      */
                     if (_metadata_type0->property_rights != NULL)
                     {
                        
                            sprintf(start_input_str, "<%s%srights>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%srights>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_metadata_type0->property_rights, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_metadata_type0->property_rights, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing rights element
                      */

                    
                    
                                text_value_9 = axiom_node_to_string((axiom_node_t*)element, env);
                                
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                                
                                axutil_stream_write(stream, env, text_value_9, axutil_strlen(text_value_9));
                                
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                                
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://purl.org/dc/elements/1.1/",
                                            p_prefix));
                       }
                      

                   if (!_metadata_type0->is_valid_relation)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("relation"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("relation")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing relation array
                      */
                     if (_metadata_type0->property_relation != NULL)
                     {
                        
                            sprintf(start_input_str, "<%s%srelation>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%srelation>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_metadata_type0->property_relation, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_metadata_type0->property_relation, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing relation element
                      */

                    
                    
                                text_value_10 = axiom_node_to_string((axiom_node_t*)element, env);
                                
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                                
                                axutil_stream_write(stream, env, text_value_10, axutil_strlen(text_value_10));
                                
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                                
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://purl.org/dc/elements/1.1/",
                                            p_prefix));
                       }
                      

                   if (!_metadata_type0->is_valid_language)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("language"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("language")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing language array
                      */
                     if (_metadata_type0->property_language != NULL)
                     {
                        
                            sprintf(start_input_str, "<%s%slanguage>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%slanguage>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_metadata_type0->property_language, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_metadata_type0->property_language, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing language element
                      */

                    
                    
                                text_value_11 = axiom_node_to_string((axiom_node_t*)element, env);
                                
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                                
                                axutil_stream_write(stream, env, text_value_11, axutil_strlen(text_value_11));
                                
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                                
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://purl.org/dc/elements/1.1/",
                                            p_prefix));
                       }
                      

                   if (!_metadata_type0->is_valid_description)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("description"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("description")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing description array
                      */
                     if (_metadata_type0->property_description != NULL)
                     {
                        
                            sprintf(start_input_str, "<%s%sdescription>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%sdescription>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_metadata_type0->property_description, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_metadata_type0->property_description, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing description element
                      */

                    
                    
                                text_value_12 = axiom_node_to_string((axiom_node_t*)element, env);
                                
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                                
                                axutil_stream_write(stream, env, text_value_12, axutil_strlen(text_value_12));
                                
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                                
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://purl.org/dc/elements/1.1/",
                                            p_prefix));
                       }
                      

                   if (!_metadata_type0->is_valid_creator)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("creator"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("creator")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing creator array
                      */
                     if (_metadata_type0->property_creator != NULL)
                     {
                        
                            sprintf(start_input_str, "<%s%screator>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%screator>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_metadata_type0->property_creator, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_metadata_type0->property_creator, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing creator element
                      */

                    
                    
                                text_value_13 = axiom_node_to_string((axiom_node_t*)element, env);
                                
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                                
                                axutil_stream_write(stream, env, text_value_13, axutil_strlen(text_value_13));
                                
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                                
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://purl.org/dc/elements/1.1/",
                                            p_prefix));
                       }
                      

                   if (!_metadata_type0->is_valid_coverage)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("coverage"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("coverage")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing coverage array
                      */
                     if (_metadata_type0->property_coverage != NULL)
                     {
                        
                            sprintf(start_input_str, "<%s%scoverage>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%scoverage>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_metadata_type0->property_coverage, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_metadata_type0->property_coverage, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing coverage element
                      */

                    
                    
                                text_value_14 = axiom_node_to_string((axiom_node_t*)element, env);
                                
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                                
                                axutil_stream_write(stream, env, text_value_14, axutil_strlen(text_value_14));
                                
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                                
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://purl.org/dc/elements/1.1/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://purl.org/dc/elements/1.1/",
                                            p_prefix));
                       }
                      

                   if (!_metadata_type0->is_valid_contributor)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("contributor"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("contributor")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing contributor array
                      */
                     if (_metadata_type0->property_contributor != NULL)
                     {
                        
                            sprintf(start_input_str, "<%s%scontributor>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%scontributor>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_metadata_type0->property_contributor, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_metadata_type0->property_contributor, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing contributor element
                      */

                    
                    
                                text_value_15 = axiom_node_to_string((axiom_node_t*)element, env);
                                
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                                
                                axutil_stream_write(stream, env, text_value_15, axutil_strlen(text_value_15));
                                
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                                
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
                      

                   if (!_metadata_type0->is_valid_narrator)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("narrator"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("narrator")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing narrator array
                      */
                     if (_metadata_type0->property_narrator != NULL)
                     {
                        
                            sprintf(start_input_str, "<%s%snarrator>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%snarrator>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_metadata_type0->property_narrator, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_metadata_type0->property_narrator, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing narrator element
                      */

                    
                    
                           text_value_16 = (axis2_char_t*)element;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_16_temp = axutil_xml_quote_string(env, text_value_16, AXIS2_TRUE);
                           if (text_value_16_temp)
                           {
                               axutil_stream_write(stream, env, text_value_16_temp, axutil_strlen(text_value_16_temp));
                               AXIS2_FREE(env->allocator, text_value_16_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_16, axutil_strlen(text_value_16));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
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
                      

                   if (!_metadata_type0->is_valid_size)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property size");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("size"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("size")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing size element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%ssize>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%ssize>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                               sprintf (text_value_17, AXIS2_PRINTF_INT64_FORMAT_SPECIFIER, (int64_t) _metadata_type0->property_size);
                             
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_17, axutil_strlen(text_value_17));
                           
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
                      

                   if (!_metadata_type0->is_valid_meta)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("meta"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("meta")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing meta array
                      */
                     if (_metadata_type0->property_meta != NULL)
                     {
                        

                            sprintf(start_input_str, "<%s%smeta",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%smeta>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_metadata_type0->property_meta, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_metadata_type0->property_meta, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing meta element
                      */

                    
                     
                            if(!adb_meta_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_meta_type0_serialize((adb_meta_type0_t*)element, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_meta_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_meta_type0_is_particle())
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
                      

                   if (!_metadata_type0->is_valid_metadataChoice_type0)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("metadataChoice_type0"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("metadataChoice_type0")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing metadataChoice_type0 array
                      */
                     if (_metadata_type0->property_metadataChoice_type0 != NULL)
                     {
                        

                            sprintf(start_input_str, "<%s%smetadataChoice_type0",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%smetadataChoice_type0>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_metadata_type0->property_metadataChoice_type0, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_metadata_type0->property_metadataChoice_type0, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing metadataChoice_type0 element
                      */

                    
                     
                            if(!adb_metadataChoice_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_metadataChoice_type0_serialize((adb_metadataChoice_type0_t*)element, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_metadataChoice_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_metadataChoice_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 

            return parent;
        }


        

            /**
             * Getter for title by  Property Number 1
             */
            axiom_node_t* AXIS2_CALL
            adb_metadata_type0_get_property1(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env)
            {
                return adb_metadata_type0_get_title(_metadata_type0,
                                             env);
            }

            /**
             * getter for title.
             */
            axiom_node_t* AXIS2_CALL
            adb_metadata_type0_get_title(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                return _metadata_type0->property_title;
             }

            /**
             * setter for title
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_title(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    axiom_node_t*  arg_title)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if(_metadata_type0->is_valid_title &&
                        arg_title == _metadata_type0->property_title)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_title)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "title is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_metadata_type0_reset_title(_metadata_type0, env);

                
                if(NULL == arg_title)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _metadata_type0->property_title = arg_title;
                        _metadata_type0->is_valid_title = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for title
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_reset_title(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
               

               _metadata_type0->is_valid_title = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether title is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_title_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return !_metadata_type0->is_valid_title;
           }

           /**
            * Set title to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_title_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               return adb_metadata_type0_reset_title(_metadata_type0, env);
           }

           

            /**
             * Getter for identifier by  Property Number 2
             */
            axiom_node_t* AXIS2_CALL
            adb_metadata_type0_get_property2(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env)
            {
                return adb_metadata_type0_get_identifier(_metadata_type0,
                                             env);
            }

            /**
             * getter for identifier.
             */
            axiom_node_t* AXIS2_CALL
            adb_metadata_type0_get_identifier(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                return _metadata_type0->property_identifier;
             }

            /**
             * setter for identifier
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_identifier(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    axiom_node_t*  arg_identifier)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if(_metadata_type0->is_valid_identifier &&
                        arg_identifier == _metadata_type0->property_identifier)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_identifier)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "identifier is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_metadata_type0_reset_identifier(_metadata_type0, env);

                
                if(NULL == arg_identifier)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _metadata_type0->property_identifier = arg_identifier;
                        _metadata_type0->is_valid_identifier = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for identifier
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_reset_identifier(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
               

               _metadata_type0->is_valid_identifier = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether identifier is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_identifier_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return !_metadata_type0->is_valid_identifier;
           }

           /**
            * Set identifier to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_identifier_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               return adb_metadata_type0_reset_identifier(_metadata_type0, env);
           }

           

            /**
             * Getter for publisher by  Property Number 3
             */
            axiom_node_t* AXIS2_CALL
            adb_metadata_type0_get_property3(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env)
            {
                return adb_metadata_type0_get_publisher(_metadata_type0,
                                             env);
            }

            /**
             * getter for publisher.
             */
            axiom_node_t* AXIS2_CALL
            adb_metadata_type0_get_publisher(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                return _metadata_type0->property_publisher;
             }

            /**
             * setter for publisher
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_publisher(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    axiom_node_t*  arg_publisher)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if(_metadata_type0->is_valid_publisher &&
                        arg_publisher == _metadata_type0->property_publisher)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_metadata_type0_reset_publisher(_metadata_type0, env);

                
                if(NULL == arg_publisher)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _metadata_type0->property_publisher = arg_publisher;
                        _metadata_type0->is_valid_publisher = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for publisher
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_reset_publisher(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
               

               _metadata_type0->is_valid_publisher = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether publisher is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_publisher_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return !_metadata_type0->is_valid_publisher;
           }

           /**
            * Set publisher to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_publisher_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               return adb_metadata_type0_reset_publisher(_metadata_type0, env);
           }

           

            /**
             * Getter for format by  Property Number 4
             */
            axiom_node_t* AXIS2_CALL
            adb_metadata_type0_get_property4(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env)
            {
                return adb_metadata_type0_get_format(_metadata_type0,
                                             env);
            }

            /**
             * getter for format.
             */
            axiom_node_t* AXIS2_CALL
            adb_metadata_type0_get_format(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                return _metadata_type0->property_format;
             }

            /**
             * setter for format
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_format(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    axiom_node_t*  arg_format)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if(_metadata_type0->is_valid_format &&
                        arg_format == _metadata_type0->property_format)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_format)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "format is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_metadata_type0_reset_format(_metadata_type0, env);

                
                if(NULL == arg_format)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _metadata_type0->property_format = arg_format;
                        _metadata_type0->is_valid_format = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for format
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_reset_format(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
               

               _metadata_type0->is_valid_format = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether format is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_format_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return !_metadata_type0->is_valid_format;
           }

           /**
            * Set format to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_format_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               return adb_metadata_type0_reset_format(_metadata_type0, env);
           }

           

            /**
             * Getter for date by  Property Number 5
             */
            axiom_node_t* AXIS2_CALL
            adb_metadata_type0_get_property5(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env)
            {
                return adb_metadata_type0_get_date(_metadata_type0,
                                             env);
            }

            /**
             * getter for date.
             */
            axiom_node_t* AXIS2_CALL
            adb_metadata_type0_get_date(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                return _metadata_type0->property_date;
             }

            /**
             * setter for date
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_date(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    axiom_node_t*  arg_date)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if(_metadata_type0->is_valid_date &&
                        arg_date == _metadata_type0->property_date)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_metadata_type0_reset_date(_metadata_type0, env);

                
                if(NULL == arg_date)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _metadata_type0->property_date = arg_date;
                        _metadata_type0->is_valid_date = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for date
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_reset_date(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
               

               _metadata_type0->is_valid_date = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether date is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_date_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return !_metadata_type0->is_valid_date;
           }

           /**
            * Set date to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_date_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               return adb_metadata_type0_reset_date(_metadata_type0, env);
           }

           

            /**
             * Getter for source by  Property Number 6
             */
            axiom_node_t* AXIS2_CALL
            adb_metadata_type0_get_property6(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env)
            {
                return adb_metadata_type0_get_source(_metadata_type0,
                                             env);
            }

            /**
             * getter for source.
             */
            axiom_node_t* AXIS2_CALL
            adb_metadata_type0_get_source(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                return _metadata_type0->property_source;
             }

            /**
             * setter for source
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_source(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    axiom_node_t*  arg_source)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if(_metadata_type0->is_valid_source &&
                        arg_source == _metadata_type0->property_source)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_metadata_type0_reset_source(_metadata_type0, env);

                
                if(NULL == arg_source)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _metadata_type0->property_source = arg_source;
                        _metadata_type0->is_valid_source = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for source
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_reset_source(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
               

               _metadata_type0->is_valid_source = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether source is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_source_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return !_metadata_type0->is_valid_source;
           }

           /**
            * Set source to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_source_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               return adb_metadata_type0_reset_source(_metadata_type0, env);
           }

           

            /**
             * Getter for type by  Property Number 7
             */
            axutil_array_list_t* AXIS2_CALL
            adb_metadata_type0_get_property7(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env)
            {
                return adb_metadata_type0_get_type(_metadata_type0,
                                             env);
            }

            /**
             * getter for type.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_metadata_type0_get_type(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                return _metadata_type0->property_type;
             }

            /**
             * setter for type
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_type(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_type)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if(_metadata_type0->is_valid_type &&
                        arg_type == _metadata_type0->property_type)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_type, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "type has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_type, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_metadata_type0_reset_type(_metadata_type0, env);

                
                if(NULL == arg_type)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _metadata_type0->property_type = arg_type;
                        if(non_nil_exists)
                        {
                            _metadata_type0->is_valid_type = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of type.
             */
            axiom_node_t* AXIS2_CALL
            adb_metadata_type0_get_type_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i)
            {
                axiom_node_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                if(_metadata_type0->property_type == NULL)
                {
                    return (axiom_node_t*)0;
                }
                ret_val = (axiom_node_t*)axutil_array_list_get(_metadata_type0->property_type, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of type.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_type_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i,
                    axiom_node_t* arg_type)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if( _metadata_type0->is_valid_type &&
                    _metadata_type0->property_type &&
                
                    arg_type == (axiom_node_t*)axutil_array_list_get(_metadata_type0->property_type, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_type)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_metadata_type0->property_type != NULL)
                        {
                            size = axutil_array_list_size(_metadata_type0->property_type, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_metadata_type0->property_type, env, i))
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
                  

                if(_metadata_type0->property_type == NULL)
                {
                    _metadata_type0->property_type = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_metadata_type0->property_type, env, i);
                if(NULL != element)
                {
                  
                  
                  
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _metadata_type0->is_valid_type = AXIS2_FALSE;
                        axutil_array_list_set(_metadata_type0->property_type , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_metadata_type0->property_type , env, i, arg_type);
                  _metadata_type0->is_valid_type = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to type.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_add_type(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    axiom_node_t* arg_type)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);

                
                    if(NULL == arg_type)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_metadata_type0->property_type == NULL)
                {
                    _metadata_type0->property_type = axutil_array_list_create(env, 10);
                }
                if(_metadata_type0->property_type == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for type");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_metadata_type0->property_type , env, arg_type);
                  _metadata_type0->is_valid_type = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the type array.
             */
            int AXIS2_CALL
            adb_metadata_type0_sizeof_type(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, -1);
                if(_metadata_type0->property_type == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_metadata_type0->property_type, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_remove_type_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i)
            {
                return adb_metadata_type0_set_type_nil_at(_metadata_type0, env, i);
            }

            

           /**
            * resetter for type
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_reset_type(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
               

               
                  if (_metadata_type0->property_type != NULL)
                  {
                      count = axutil_array_list_size(_metadata_type0->property_type, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_metadata_type0->property_type, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_metadata_type0->property_type, env);
                  }
                _metadata_type0->is_valid_type = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether type is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_type_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return !_metadata_type0->is_valid_type;
           }

           /**
            * Set type to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_type_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               return adb_metadata_type0_reset_type(_metadata_type0, env);
           }

           
           /**
            * Check whether type is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_type_nil_at(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return (_metadata_type0->is_valid_type == AXIS2_FALSE ||
                        NULL == _metadata_type0->property_type || 
                        NULL == axutil_array_list_get(_metadata_type0->property_type, env, i));
           }

           /**
            * Set type to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_type_nil_at(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);

                if(_metadata_type0->property_type == NULL ||
                            _metadata_type0->is_valid_type == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_metadata_type0->property_type, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_metadata_type0->property_type, env, i))
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
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of type is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_metadata_type0->property_type == NULL)
                {
                    _metadata_type0->is_valid_type = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_metadata_type0->property_type, env, i);
                if(NULL != element)
                {
                  
                  
                  
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _metadata_type0->is_valid_type = AXIS2_FALSE;
                        axutil_array_list_set(_metadata_type0->property_type , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_metadata_type0->property_type , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for subject by  Property Number 8
             */
            axutil_array_list_t* AXIS2_CALL
            adb_metadata_type0_get_property8(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env)
            {
                return adb_metadata_type0_get_subject(_metadata_type0,
                                             env);
            }

            /**
             * getter for subject.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_metadata_type0_get_subject(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                return _metadata_type0->property_subject;
             }

            /**
             * setter for subject
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_subject(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_subject)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if(_metadata_type0->is_valid_subject &&
                        arg_subject == _metadata_type0->property_subject)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_subject, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "subject has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_subject, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_metadata_type0_reset_subject(_metadata_type0, env);

                
                if(NULL == arg_subject)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _metadata_type0->property_subject = arg_subject;
                        if(non_nil_exists)
                        {
                            _metadata_type0->is_valid_subject = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of subject.
             */
            axiom_node_t* AXIS2_CALL
            adb_metadata_type0_get_subject_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i)
            {
                axiom_node_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                if(_metadata_type0->property_subject == NULL)
                {
                    return (axiom_node_t*)0;
                }
                ret_val = (axiom_node_t*)axutil_array_list_get(_metadata_type0->property_subject, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of subject.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_subject_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i,
                    axiom_node_t* arg_subject)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if( _metadata_type0->is_valid_subject &&
                    _metadata_type0->property_subject &&
                
                    arg_subject == (axiom_node_t*)axutil_array_list_get(_metadata_type0->property_subject, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_subject)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_metadata_type0->property_subject != NULL)
                        {
                            size = axutil_array_list_size(_metadata_type0->property_subject, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_metadata_type0->property_subject, env, i))
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
                  

                if(_metadata_type0->property_subject == NULL)
                {
                    _metadata_type0->property_subject = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_metadata_type0->property_subject, env, i);
                if(NULL != element)
                {
                  
                  
                  
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _metadata_type0->is_valid_subject = AXIS2_FALSE;
                        axutil_array_list_set(_metadata_type0->property_subject , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_metadata_type0->property_subject , env, i, arg_subject);
                  _metadata_type0->is_valid_subject = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to subject.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_add_subject(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    axiom_node_t* arg_subject)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);

                
                    if(NULL == arg_subject)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_metadata_type0->property_subject == NULL)
                {
                    _metadata_type0->property_subject = axutil_array_list_create(env, 10);
                }
                if(_metadata_type0->property_subject == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for subject");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_metadata_type0->property_subject , env, arg_subject);
                  _metadata_type0->is_valid_subject = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the subject array.
             */
            int AXIS2_CALL
            adb_metadata_type0_sizeof_subject(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, -1);
                if(_metadata_type0->property_subject == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_metadata_type0->property_subject, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_remove_subject_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i)
            {
                return adb_metadata_type0_set_subject_nil_at(_metadata_type0, env, i);
            }

            

           /**
            * resetter for subject
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_reset_subject(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
               

               
                  if (_metadata_type0->property_subject != NULL)
                  {
                      count = axutil_array_list_size(_metadata_type0->property_subject, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_metadata_type0->property_subject, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_metadata_type0->property_subject, env);
                  }
                _metadata_type0->is_valid_subject = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether subject is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_subject_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return !_metadata_type0->is_valid_subject;
           }

           /**
            * Set subject to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_subject_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               return adb_metadata_type0_reset_subject(_metadata_type0, env);
           }

           
           /**
            * Check whether subject is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_subject_nil_at(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return (_metadata_type0->is_valid_subject == AXIS2_FALSE ||
                        NULL == _metadata_type0->property_subject || 
                        NULL == axutil_array_list_get(_metadata_type0->property_subject, env, i));
           }

           /**
            * Set subject to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_subject_nil_at(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);

                if(_metadata_type0->property_subject == NULL ||
                            _metadata_type0->is_valid_subject == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_metadata_type0->property_subject, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_metadata_type0->property_subject, env, i))
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
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of subject is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_metadata_type0->property_subject == NULL)
                {
                    _metadata_type0->is_valid_subject = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_metadata_type0->property_subject, env, i);
                if(NULL != element)
                {
                  
                  
                  
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _metadata_type0->is_valid_subject = AXIS2_FALSE;
                        axutil_array_list_set(_metadata_type0->property_subject , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_metadata_type0->property_subject , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for rights by  Property Number 9
             */
            axutil_array_list_t* AXIS2_CALL
            adb_metadata_type0_get_property9(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env)
            {
                return adb_metadata_type0_get_rights(_metadata_type0,
                                             env);
            }

            /**
             * getter for rights.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_metadata_type0_get_rights(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                return _metadata_type0->property_rights;
             }

            /**
             * setter for rights
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_rights(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_rights)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if(_metadata_type0->is_valid_rights &&
                        arg_rights == _metadata_type0->property_rights)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_rights, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "rights has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_rights, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_metadata_type0_reset_rights(_metadata_type0, env);

                
                if(NULL == arg_rights)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _metadata_type0->property_rights = arg_rights;
                        if(non_nil_exists)
                        {
                            _metadata_type0->is_valid_rights = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of rights.
             */
            axiom_node_t* AXIS2_CALL
            adb_metadata_type0_get_rights_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i)
            {
                axiom_node_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                if(_metadata_type0->property_rights == NULL)
                {
                    return (axiom_node_t*)0;
                }
                ret_val = (axiom_node_t*)axutil_array_list_get(_metadata_type0->property_rights, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of rights.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_rights_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i,
                    axiom_node_t* arg_rights)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if( _metadata_type0->is_valid_rights &&
                    _metadata_type0->property_rights &&
                
                    arg_rights == (axiom_node_t*)axutil_array_list_get(_metadata_type0->property_rights, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_rights)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_metadata_type0->property_rights != NULL)
                        {
                            size = axutil_array_list_size(_metadata_type0->property_rights, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_metadata_type0->property_rights, env, i))
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
                  

                if(_metadata_type0->property_rights == NULL)
                {
                    _metadata_type0->property_rights = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_metadata_type0->property_rights, env, i);
                if(NULL != element)
                {
                  
                  
                  
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _metadata_type0->is_valid_rights = AXIS2_FALSE;
                        axutil_array_list_set(_metadata_type0->property_rights , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_metadata_type0->property_rights , env, i, arg_rights);
                  _metadata_type0->is_valid_rights = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to rights.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_add_rights(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    axiom_node_t* arg_rights)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);

                
                    if(NULL == arg_rights)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_metadata_type0->property_rights == NULL)
                {
                    _metadata_type0->property_rights = axutil_array_list_create(env, 10);
                }
                if(_metadata_type0->property_rights == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for rights");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_metadata_type0->property_rights , env, arg_rights);
                  _metadata_type0->is_valid_rights = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the rights array.
             */
            int AXIS2_CALL
            adb_metadata_type0_sizeof_rights(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, -1);
                if(_metadata_type0->property_rights == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_metadata_type0->property_rights, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_remove_rights_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i)
            {
                return adb_metadata_type0_set_rights_nil_at(_metadata_type0, env, i);
            }

            

           /**
            * resetter for rights
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_reset_rights(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
               

               
                  if (_metadata_type0->property_rights != NULL)
                  {
                      count = axutil_array_list_size(_metadata_type0->property_rights, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_metadata_type0->property_rights, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_metadata_type0->property_rights, env);
                  }
                _metadata_type0->is_valid_rights = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether rights is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_rights_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return !_metadata_type0->is_valid_rights;
           }

           /**
            * Set rights to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_rights_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               return adb_metadata_type0_reset_rights(_metadata_type0, env);
           }

           
           /**
            * Check whether rights is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_rights_nil_at(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return (_metadata_type0->is_valid_rights == AXIS2_FALSE ||
                        NULL == _metadata_type0->property_rights || 
                        NULL == axutil_array_list_get(_metadata_type0->property_rights, env, i));
           }

           /**
            * Set rights to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_rights_nil_at(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);

                if(_metadata_type0->property_rights == NULL ||
                            _metadata_type0->is_valid_rights == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_metadata_type0->property_rights, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_metadata_type0->property_rights, env, i))
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
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of rights is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_metadata_type0->property_rights == NULL)
                {
                    _metadata_type0->is_valid_rights = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_metadata_type0->property_rights, env, i);
                if(NULL != element)
                {
                  
                  
                  
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _metadata_type0->is_valid_rights = AXIS2_FALSE;
                        axutil_array_list_set(_metadata_type0->property_rights , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_metadata_type0->property_rights , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for relation by  Property Number 10
             */
            axutil_array_list_t* AXIS2_CALL
            adb_metadata_type0_get_property10(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env)
            {
                return adb_metadata_type0_get_relation(_metadata_type0,
                                             env);
            }

            /**
             * getter for relation.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_metadata_type0_get_relation(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                return _metadata_type0->property_relation;
             }

            /**
             * setter for relation
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_relation(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_relation)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if(_metadata_type0->is_valid_relation &&
                        arg_relation == _metadata_type0->property_relation)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_relation, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "relation has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_relation, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_metadata_type0_reset_relation(_metadata_type0, env);

                
                if(NULL == arg_relation)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _metadata_type0->property_relation = arg_relation;
                        if(non_nil_exists)
                        {
                            _metadata_type0->is_valid_relation = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of relation.
             */
            axiom_node_t* AXIS2_CALL
            adb_metadata_type0_get_relation_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i)
            {
                axiom_node_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                if(_metadata_type0->property_relation == NULL)
                {
                    return (axiom_node_t*)0;
                }
                ret_val = (axiom_node_t*)axutil_array_list_get(_metadata_type0->property_relation, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of relation.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_relation_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i,
                    axiom_node_t* arg_relation)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if( _metadata_type0->is_valid_relation &&
                    _metadata_type0->property_relation &&
                
                    arg_relation == (axiom_node_t*)axutil_array_list_get(_metadata_type0->property_relation, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_relation)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_metadata_type0->property_relation != NULL)
                        {
                            size = axutil_array_list_size(_metadata_type0->property_relation, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_metadata_type0->property_relation, env, i))
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
                  

                if(_metadata_type0->property_relation == NULL)
                {
                    _metadata_type0->property_relation = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_metadata_type0->property_relation, env, i);
                if(NULL != element)
                {
                  
                  
                  
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _metadata_type0->is_valid_relation = AXIS2_FALSE;
                        axutil_array_list_set(_metadata_type0->property_relation , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_metadata_type0->property_relation , env, i, arg_relation);
                  _metadata_type0->is_valid_relation = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to relation.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_add_relation(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    axiom_node_t* arg_relation)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);

                
                    if(NULL == arg_relation)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_metadata_type0->property_relation == NULL)
                {
                    _metadata_type0->property_relation = axutil_array_list_create(env, 10);
                }
                if(_metadata_type0->property_relation == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for relation");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_metadata_type0->property_relation , env, arg_relation);
                  _metadata_type0->is_valid_relation = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the relation array.
             */
            int AXIS2_CALL
            adb_metadata_type0_sizeof_relation(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, -1);
                if(_metadata_type0->property_relation == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_metadata_type0->property_relation, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_remove_relation_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i)
            {
                return adb_metadata_type0_set_relation_nil_at(_metadata_type0, env, i);
            }

            

           /**
            * resetter for relation
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_reset_relation(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
               

               
                  if (_metadata_type0->property_relation != NULL)
                  {
                      count = axutil_array_list_size(_metadata_type0->property_relation, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_metadata_type0->property_relation, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_metadata_type0->property_relation, env);
                  }
                _metadata_type0->is_valid_relation = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether relation is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_relation_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return !_metadata_type0->is_valid_relation;
           }

           /**
            * Set relation to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_relation_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               return adb_metadata_type0_reset_relation(_metadata_type0, env);
           }

           
           /**
            * Check whether relation is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_relation_nil_at(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return (_metadata_type0->is_valid_relation == AXIS2_FALSE ||
                        NULL == _metadata_type0->property_relation || 
                        NULL == axutil_array_list_get(_metadata_type0->property_relation, env, i));
           }

           /**
            * Set relation to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_relation_nil_at(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);

                if(_metadata_type0->property_relation == NULL ||
                            _metadata_type0->is_valid_relation == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_metadata_type0->property_relation, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_metadata_type0->property_relation, env, i))
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
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of relation is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_metadata_type0->property_relation == NULL)
                {
                    _metadata_type0->is_valid_relation = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_metadata_type0->property_relation, env, i);
                if(NULL != element)
                {
                  
                  
                  
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _metadata_type0->is_valid_relation = AXIS2_FALSE;
                        axutil_array_list_set(_metadata_type0->property_relation , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_metadata_type0->property_relation , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for language by  Property Number 11
             */
            axutil_array_list_t* AXIS2_CALL
            adb_metadata_type0_get_property11(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env)
            {
                return adb_metadata_type0_get_language(_metadata_type0,
                                             env);
            }

            /**
             * getter for language.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_metadata_type0_get_language(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                return _metadata_type0->property_language;
             }

            /**
             * setter for language
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_language(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_language)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if(_metadata_type0->is_valid_language &&
                        arg_language == _metadata_type0->property_language)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_language, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "language has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_language, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_metadata_type0_reset_language(_metadata_type0, env);

                
                if(NULL == arg_language)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _metadata_type0->property_language = arg_language;
                        if(non_nil_exists)
                        {
                            _metadata_type0->is_valid_language = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of language.
             */
            axiom_node_t* AXIS2_CALL
            adb_metadata_type0_get_language_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i)
            {
                axiom_node_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                if(_metadata_type0->property_language == NULL)
                {
                    return (axiom_node_t*)0;
                }
                ret_val = (axiom_node_t*)axutil_array_list_get(_metadata_type0->property_language, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of language.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_language_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i,
                    axiom_node_t* arg_language)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if( _metadata_type0->is_valid_language &&
                    _metadata_type0->property_language &&
                
                    arg_language == (axiom_node_t*)axutil_array_list_get(_metadata_type0->property_language, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_language)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_metadata_type0->property_language != NULL)
                        {
                            size = axutil_array_list_size(_metadata_type0->property_language, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_metadata_type0->property_language, env, i))
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
                  

                if(_metadata_type0->property_language == NULL)
                {
                    _metadata_type0->property_language = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_metadata_type0->property_language, env, i);
                if(NULL != element)
                {
                  
                  
                  
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _metadata_type0->is_valid_language = AXIS2_FALSE;
                        axutil_array_list_set(_metadata_type0->property_language , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_metadata_type0->property_language , env, i, arg_language);
                  _metadata_type0->is_valid_language = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to language.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_add_language(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    axiom_node_t* arg_language)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);

                
                    if(NULL == arg_language)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_metadata_type0->property_language == NULL)
                {
                    _metadata_type0->property_language = axutil_array_list_create(env, 10);
                }
                if(_metadata_type0->property_language == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for language");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_metadata_type0->property_language , env, arg_language);
                  _metadata_type0->is_valid_language = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the language array.
             */
            int AXIS2_CALL
            adb_metadata_type0_sizeof_language(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, -1);
                if(_metadata_type0->property_language == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_metadata_type0->property_language, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_remove_language_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i)
            {
                return adb_metadata_type0_set_language_nil_at(_metadata_type0, env, i);
            }

            

           /**
            * resetter for language
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_reset_language(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
               

               
                  if (_metadata_type0->property_language != NULL)
                  {
                      count = axutil_array_list_size(_metadata_type0->property_language, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_metadata_type0->property_language, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_metadata_type0->property_language, env);
                  }
                _metadata_type0->is_valid_language = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether language is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_language_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return !_metadata_type0->is_valid_language;
           }

           /**
            * Set language to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_language_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               return adb_metadata_type0_reset_language(_metadata_type0, env);
           }

           
           /**
            * Check whether language is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_language_nil_at(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return (_metadata_type0->is_valid_language == AXIS2_FALSE ||
                        NULL == _metadata_type0->property_language || 
                        NULL == axutil_array_list_get(_metadata_type0->property_language, env, i));
           }

           /**
            * Set language to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_language_nil_at(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);

                if(_metadata_type0->property_language == NULL ||
                            _metadata_type0->is_valid_language == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_metadata_type0->property_language, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_metadata_type0->property_language, env, i))
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
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of language is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_metadata_type0->property_language == NULL)
                {
                    _metadata_type0->is_valid_language = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_metadata_type0->property_language, env, i);
                if(NULL != element)
                {
                  
                  
                  
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _metadata_type0->is_valid_language = AXIS2_FALSE;
                        axutil_array_list_set(_metadata_type0->property_language , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_metadata_type0->property_language , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for description by  Property Number 12
             */
            axutil_array_list_t* AXIS2_CALL
            adb_metadata_type0_get_property12(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env)
            {
                return adb_metadata_type0_get_description(_metadata_type0,
                                             env);
            }

            /**
             * getter for description.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_metadata_type0_get_description(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                return _metadata_type0->property_description;
             }

            /**
             * setter for description
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_description(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_description)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if(_metadata_type0->is_valid_description &&
                        arg_description == _metadata_type0->property_description)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_description, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "description has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_description, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_metadata_type0_reset_description(_metadata_type0, env);

                
                if(NULL == arg_description)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _metadata_type0->property_description = arg_description;
                        if(non_nil_exists)
                        {
                            _metadata_type0->is_valid_description = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of description.
             */
            axiom_node_t* AXIS2_CALL
            adb_metadata_type0_get_description_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i)
            {
                axiom_node_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                if(_metadata_type0->property_description == NULL)
                {
                    return (axiom_node_t*)0;
                }
                ret_val = (axiom_node_t*)axutil_array_list_get(_metadata_type0->property_description, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of description.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_description_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i,
                    axiom_node_t* arg_description)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if( _metadata_type0->is_valid_description &&
                    _metadata_type0->property_description &&
                
                    arg_description == (axiom_node_t*)axutil_array_list_get(_metadata_type0->property_description, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_description)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_metadata_type0->property_description != NULL)
                        {
                            size = axutil_array_list_size(_metadata_type0->property_description, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_metadata_type0->property_description, env, i))
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
                  

                if(_metadata_type0->property_description == NULL)
                {
                    _metadata_type0->property_description = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_metadata_type0->property_description, env, i);
                if(NULL != element)
                {
                  
                  
                  
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _metadata_type0->is_valid_description = AXIS2_FALSE;
                        axutil_array_list_set(_metadata_type0->property_description , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_metadata_type0->property_description , env, i, arg_description);
                  _metadata_type0->is_valid_description = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to description.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_add_description(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    axiom_node_t* arg_description)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);

                
                    if(NULL == arg_description)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_metadata_type0->property_description == NULL)
                {
                    _metadata_type0->property_description = axutil_array_list_create(env, 10);
                }
                if(_metadata_type0->property_description == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for description");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_metadata_type0->property_description , env, arg_description);
                  _metadata_type0->is_valid_description = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the description array.
             */
            int AXIS2_CALL
            adb_metadata_type0_sizeof_description(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, -1);
                if(_metadata_type0->property_description == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_metadata_type0->property_description, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_remove_description_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i)
            {
                return adb_metadata_type0_set_description_nil_at(_metadata_type0, env, i);
            }

            

           /**
            * resetter for description
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_reset_description(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
               

               
                  if (_metadata_type0->property_description != NULL)
                  {
                      count = axutil_array_list_size(_metadata_type0->property_description, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_metadata_type0->property_description, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_metadata_type0->property_description, env);
                  }
                _metadata_type0->is_valid_description = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether description is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_description_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return !_metadata_type0->is_valid_description;
           }

           /**
            * Set description to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_description_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               return adb_metadata_type0_reset_description(_metadata_type0, env);
           }

           
           /**
            * Check whether description is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_description_nil_at(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return (_metadata_type0->is_valid_description == AXIS2_FALSE ||
                        NULL == _metadata_type0->property_description || 
                        NULL == axutil_array_list_get(_metadata_type0->property_description, env, i));
           }

           /**
            * Set description to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_description_nil_at(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);

                if(_metadata_type0->property_description == NULL ||
                            _metadata_type0->is_valid_description == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_metadata_type0->property_description, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_metadata_type0->property_description, env, i))
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
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of description is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_metadata_type0->property_description == NULL)
                {
                    _metadata_type0->is_valid_description = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_metadata_type0->property_description, env, i);
                if(NULL != element)
                {
                  
                  
                  
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _metadata_type0->is_valid_description = AXIS2_FALSE;
                        axutil_array_list_set(_metadata_type0->property_description , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_metadata_type0->property_description , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for creator by  Property Number 13
             */
            axutil_array_list_t* AXIS2_CALL
            adb_metadata_type0_get_property13(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env)
            {
                return adb_metadata_type0_get_creator(_metadata_type0,
                                             env);
            }

            /**
             * getter for creator.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_metadata_type0_get_creator(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                return _metadata_type0->property_creator;
             }

            /**
             * setter for creator
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_creator(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_creator)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if(_metadata_type0->is_valid_creator &&
                        arg_creator == _metadata_type0->property_creator)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_creator, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "creator has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_creator, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_metadata_type0_reset_creator(_metadata_type0, env);

                
                if(NULL == arg_creator)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _metadata_type0->property_creator = arg_creator;
                        if(non_nil_exists)
                        {
                            _metadata_type0->is_valid_creator = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of creator.
             */
            axiom_node_t* AXIS2_CALL
            adb_metadata_type0_get_creator_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i)
            {
                axiom_node_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                if(_metadata_type0->property_creator == NULL)
                {
                    return (axiom_node_t*)0;
                }
                ret_val = (axiom_node_t*)axutil_array_list_get(_metadata_type0->property_creator, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of creator.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_creator_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i,
                    axiom_node_t* arg_creator)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if( _metadata_type0->is_valid_creator &&
                    _metadata_type0->property_creator &&
                
                    arg_creator == (axiom_node_t*)axutil_array_list_get(_metadata_type0->property_creator, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_creator)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_metadata_type0->property_creator != NULL)
                        {
                            size = axutil_array_list_size(_metadata_type0->property_creator, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_metadata_type0->property_creator, env, i))
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
                  

                if(_metadata_type0->property_creator == NULL)
                {
                    _metadata_type0->property_creator = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_metadata_type0->property_creator, env, i);
                if(NULL != element)
                {
                  
                  
                  
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _metadata_type0->is_valid_creator = AXIS2_FALSE;
                        axutil_array_list_set(_metadata_type0->property_creator , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_metadata_type0->property_creator , env, i, arg_creator);
                  _metadata_type0->is_valid_creator = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to creator.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_add_creator(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    axiom_node_t* arg_creator)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);

                
                    if(NULL == arg_creator)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_metadata_type0->property_creator == NULL)
                {
                    _metadata_type0->property_creator = axutil_array_list_create(env, 10);
                }
                if(_metadata_type0->property_creator == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for creator");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_metadata_type0->property_creator , env, arg_creator);
                  _metadata_type0->is_valid_creator = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the creator array.
             */
            int AXIS2_CALL
            adb_metadata_type0_sizeof_creator(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, -1);
                if(_metadata_type0->property_creator == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_metadata_type0->property_creator, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_remove_creator_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i)
            {
                return adb_metadata_type0_set_creator_nil_at(_metadata_type0, env, i);
            }

            

           /**
            * resetter for creator
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_reset_creator(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
               

               
                  if (_metadata_type0->property_creator != NULL)
                  {
                      count = axutil_array_list_size(_metadata_type0->property_creator, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_metadata_type0->property_creator, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_metadata_type0->property_creator, env);
                  }
                _metadata_type0->is_valid_creator = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether creator is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_creator_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return !_metadata_type0->is_valid_creator;
           }

           /**
            * Set creator to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_creator_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               return adb_metadata_type0_reset_creator(_metadata_type0, env);
           }

           
           /**
            * Check whether creator is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_creator_nil_at(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return (_metadata_type0->is_valid_creator == AXIS2_FALSE ||
                        NULL == _metadata_type0->property_creator || 
                        NULL == axutil_array_list_get(_metadata_type0->property_creator, env, i));
           }

           /**
            * Set creator to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_creator_nil_at(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);

                if(_metadata_type0->property_creator == NULL ||
                            _metadata_type0->is_valid_creator == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_metadata_type0->property_creator, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_metadata_type0->property_creator, env, i))
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
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of creator is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_metadata_type0->property_creator == NULL)
                {
                    _metadata_type0->is_valid_creator = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_metadata_type0->property_creator, env, i);
                if(NULL != element)
                {
                  
                  
                  
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _metadata_type0->is_valid_creator = AXIS2_FALSE;
                        axutil_array_list_set(_metadata_type0->property_creator , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_metadata_type0->property_creator , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for coverage by  Property Number 14
             */
            axutil_array_list_t* AXIS2_CALL
            adb_metadata_type0_get_property14(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env)
            {
                return adb_metadata_type0_get_coverage(_metadata_type0,
                                             env);
            }

            /**
             * getter for coverage.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_metadata_type0_get_coverage(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                return _metadata_type0->property_coverage;
             }

            /**
             * setter for coverage
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_coverage(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_coverage)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if(_metadata_type0->is_valid_coverage &&
                        arg_coverage == _metadata_type0->property_coverage)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_coverage, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "coverage has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_coverage, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_metadata_type0_reset_coverage(_metadata_type0, env);

                
                if(NULL == arg_coverage)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _metadata_type0->property_coverage = arg_coverage;
                        if(non_nil_exists)
                        {
                            _metadata_type0->is_valid_coverage = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of coverage.
             */
            axiom_node_t* AXIS2_CALL
            adb_metadata_type0_get_coverage_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i)
            {
                axiom_node_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                if(_metadata_type0->property_coverage == NULL)
                {
                    return (axiom_node_t*)0;
                }
                ret_val = (axiom_node_t*)axutil_array_list_get(_metadata_type0->property_coverage, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of coverage.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_coverage_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i,
                    axiom_node_t* arg_coverage)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if( _metadata_type0->is_valid_coverage &&
                    _metadata_type0->property_coverage &&
                
                    arg_coverage == (axiom_node_t*)axutil_array_list_get(_metadata_type0->property_coverage, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_coverage)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_metadata_type0->property_coverage != NULL)
                        {
                            size = axutil_array_list_size(_metadata_type0->property_coverage, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_metadata_type0->property_coverage, env, i))
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
                  

                if(_metadata_type0->property_coverage == NULL)
                {
                    _metadata_type0->property_coverage = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_metadata_type0->property_coverage, env, i);
                if(NULL != element)
                {
                  
                  
                  
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _metadata_type0->is_valid_coverage = AXIS2_FALSE;
                        axutil_array_list_set(_metadata_type0->property_coverage , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_metadata_type0->property_coverage , env, i, arg_coverage);
                  _metadata_type0->is_valid_coverage = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to coverage.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_add_coverage(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    axiom_node_t* arg_coverage)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);

                
                    if(NULL == arg_coverage)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_metadata_type0->property_coverage == NULL)
                {
                    _metadata_type0->property_coverage = axutil_array_list_create(env, 10);
                }
                if(_metadata_type0->property_coverage == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for coverage");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_metadata_type0->property_coverage , env, arg_coverage);
                  _metadata_type0->is_valid_coverage = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the coverage array.
             */
            int AXIS2_CALL
            adb_metadata_type0_sizeof_coverage(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, -1);
                if(_metadata_type0->property_coverage == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_metadata_type0->property_coverage, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_remove_coverage_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i)
            {
                return adb_metadata_type0_set_coverage_nil_at(_metadata_type0, env, i);
            }

            

           /**
            * resetter for coverage
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_reset_coverage(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
               

               
                  if (_metadata_type0->property_coverage != NULL)
                  {
                      count = axutil_array_list_size(_metadata_type0->property_coverage, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_metadata_type0->property_coverage, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_metadata_type0->property_coverage, env);
                  }
                _metadata_type0->is_valid_coverage = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether coverage is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_coverage_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return !_metadata_type0->is_valid_coverage;
           }

           /**
            * Set coverage to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_coverage_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               return adb_metadata_type0_reset_coverage(_metadata_type0, env);
           }

           
           /**
            * Check whether coverage is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_coverage_nil_at(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return (_metadata_type0->is_valid_coverage == AXIS2_FALSE ||
                        NULL == _metadata_type0->property_coverage || 
                        NULL == axutil_array_list_get(_metadata_type0->property_coverage, env, i));
           }

           /**
            * Set coverage to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_coverage_nil_at(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);

                if(_metadata_type0->property_coverage == NULL ||
                            _metadata_type0->is_valid_coverage == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_metadata_type0->property_coverage, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_metadata_type0->property_coverage, env, i))
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
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of coverage is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_metadata_type0->property_coverage == NULL)
                {
                    _metadata_type0->is_valid_coverage = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_metadata_type0->property_coverage, env, i);
                if(NULL != element)
                {
                  
                  
                  
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _metadata_type0->is_valid_coverage = AXIS2_FALSE;
                        axutil_array_list_set(_metadata_type0->property_coverage , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_metadata_type0->property_coverage , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for contributor by  Property Number 15
             */
            axutil_array_list_t* AXIS2_CALL
            adb_metadata_type0_get_property15(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env)
            {
                return adb_metadata_type0_get_contributor(_metadata_type0,
                                             env);
            }

            /**
             * getter for contributor.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_metadata_type0_get_contributor(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                return _metadata_type0->property_contributor;
             }

            /**
             * setter for contributor
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_contributor(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_contributor)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if(_metadata_type0->is_valid_contributor &&
                        arg_contributor == _metadata_type0->property_contributor)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_contributor, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "contributor has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_contributor, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_metadata_type0_reset_contributor(_metadata_type0, env);

                
                if(NULL == arg_contributor)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _metadata_type0->property_contributor = arg_contributor;
                        if(non_nil_exists)
                        {
                            _metadata_type0->is_valid_contributor = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of contributor.
             */
            axiom_node_t* AXIS2_CALL
            adb_metadata_type0_get_contributor_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i)
            {
                axiom_node_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                if(_metadata_type0->property_contributor == NULL)
                {
                    return (axiom_node_t*)0;
                }
                ret_val = (axiom_node_t*)axutil_array_list_get(_metadata_type0->property_contributor, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of contributor.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_contributor_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i,
                    axiom_node_t* arg_contributor)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if( _metadata_type0->is_valid_contributor &&
                    _metadata_type0->property_contributor &&
                
                    arg_contributor == (axiom_node_t*)axutil_array_list_get(_metadata_type0->property_contributor, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_contributor)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_metadata_type0->property_contributor != NULL)
                        {
                            size = axutil_array_list_size(_metadata_type0->property_contributor, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_metadata_type0->property_contributor, env, i))
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
                  

                if(_metadata_type0->property_contributor == NULL)
                {
                    _metadata_type0->property_contributor = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_metadata_type0->property_contributor, env, i);
                if(NULL != element)
                {
                  
                  
                  
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _metadata_type0->is_valid_contributor = AXIS2_FALSE;
                        axutil_array_list_set(_metadata_type0->property_contributor , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_metadata_type0->property_contributor , env, i, arg_contributor);
                  _metadata_type0->is_valid_contributor = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to contributor.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_add_contributor(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    axiom_node_t* arg_contributor)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);

                
                    if(NULL == arg_contributor)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_metadata_type0->property_contributor == NULL)
                {
                    _metadata_type0->property_contributor = axutil_array_list_create(env, 10);
                }
                if(_metadata_type0->property_contributor == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for contributor");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_metadata_type0->property_contributor , env, arg_contributor);
                  _metadata_type0->is_valid_contributor = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the contributor array.
             */
            int AXIS2_CALL
            adb_metadata_type0_sizeof_contributor(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, -1);
                if(_metadata_type0->property_contributor == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_metadata_type0->property_contributor, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_remove_contributor_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i)
            {
                return adb_metadata_type0_set_contributor_nil_at(_metadata_type0, env, i);
            }

            

           /**
            * resetter for contributor
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_reset_contributor(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
               

               
                  if (_metadata_type0->property_contributor != NULL)
                  {
                      count = axutil_array_list_size(_metadata_type0->property_contributor, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_metadata_type0->property_contributor, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_metadata_type0->property_contributor, env);
                  }
                _metadata_type0->is_valid_contributor = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether contributor is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_contributor_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return !_metadata_type0->is_valid_contributor;
           }

           /**
            * Set contributor to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_contributor_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               return adb_metadata_type0_reset_contributor(_metadata_type0, env);
           }

           
           /**
            * Check whether contributor is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_contributor_nil_at(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return (_metadata_type0->is_valid_contributor == AXIS2_FALSE ||
                        NULL == _metadata_type0->property_contributor || 
                        NULL == axutil_array_list_get(_metadata_type0->property_contributor, env, i));
           }

           /**
            * Set contributor to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_contributor_nil_at(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);

                if(_metadata_type0->property_contributor == NULL ||
                            _metadata_type0->is_valid_contributor == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_metadata_type0->property_contributor, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_metadata_type0->property_contributor, env, i))
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
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of contributor is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_metadata_type0->property_contributor == NULL)
                {
                    _metadata_type0->is_valid_contributor = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_metadata_type0->property_contributor, env, i);
                if(NULL != element)
                {
                  
                  
                  
                      axiom_node_free_tree ((axiom_node_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _metadata_type0->is_valid_contributor = AXIS2_FALSE;
                        axutil_array_list_set(_metadata_type0->property_contributor , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_metadata_type0->property_contributor , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for narrator by  Property Number 16
             */
            axutil_array_list_t* AXIS2_CALL
            adb_metadata_type0_get_property16(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env)
            {
                return adb_metadata_type0_get_narrator(_metadata_type0,
                                             env);
            }

            /**
             * getter for narrator.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_metadata_type0_get_narrator(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                return _metadata_type0->property_narrator;
             }

            /**
             * setter for narrator
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_narrator(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_narrator)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if(_metadata_type0->is_valid_narrator &&
                        arg_narrator == _metadata_type0->property_narrator)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_narrator, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "narrator has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_narrator, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_metadata_type0_reset_narrator(_metadata_type0, env);

                
                if(NULL == arg_narrator)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _metadata_type0->property_narrator = arg_narrator;
                        if(non_nil_exists)
                        {
                            _metadata_type0->is_valid_narrator = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of narrator.
             */
            axis2_char_t* AXIS2_CALL
            adb_metadata_type0_get_narrator_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i)
            {
                axis2_char_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                if(_metadata_type0->property_narrator == NULL)
                {
                    return (axis2_char_t*)0;
                }
                ret_val = (axis2_char_t*)axutil_array_list_get(_metadata_type0->property_narrator, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of narrator.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_narrator_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i,
                    const axis2_char_t* arg_narrator)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if( _metadata_type0->is_valid_narrator &&
                    _metadata_type0->property_narrator &&
                
                    arg_narrator == (axis2_char_t*)axutil_array_list_get(_metadata_type0->property_narrator, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_narrator)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_metadata_type0->property_narrator != NULL)
                        {
                            size = axutil_array_list_size(_metadata_type0->property_narrator, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_metadata_type0->property_narrator, env, i))
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
                  

                if(_metadata_type0->property_narrator == NULL)
                {
                    _metadata_type0->property_narrator = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_metadata_type0->property_narrator, env, i);
                if(NULL != element)
                {
                  
                  
                  
                       /* This is an unknown type or a primitive. Please free this manually*/
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _metadata_type0->is_valid_narrator = AXIS2_FALSE;
                        axutil_array_list_set(_metadata_type0->property_narrator , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_metadata_type0->property_narrator , env, i, axutil_strdup(env, arg_narrator));
                  _metadata_type0->is_valid_narrator = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to narrator.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_add_narrator(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    const axis2_char_t* arg_narrator)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);

                
                    if(NULL == arg_narrator)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_metadata_type0->property_narrator == NULL)
                {
                    _metadata_type0->property_narrator = axutil_array_list_create(env, 10);
                }
                if(_metadata_type0->property_narrator == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for narrator");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_metadata_type0->property_narrator , env, axutil_strdup(env, arg_narrator));
                  _metadata_type0->is_valid_narrator = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the narrator array.
             */
            int AXIS2_CALL
            adb_metadata_type0_sizeof_narrator(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, -1);
                if(_metadata_type0->property_narrator == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_metadata_type0->property_narrator, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_remove_narrator_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i)
            {
                return adb_metadata_type0_set_narrator_nil_at(_metadata_type0, env, i);
            }

            

           /**
            * resetter for narrator
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_reset_narrator(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
               

               
                  if (_metadata_type0->property_narrator != NULL)
                  {
                      count = axutil_array_list_size(_metadata_type0->property_narrator, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_metadata_type0->property_narrator, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, (axis2_char_t*)element);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_metadata_type0->property_narrator, env);
                  }
                _metadata_type0->is_valid_narrator = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether narrator is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_narrator_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return !_metadata_type0->is_valid_narrator;
           }

           /**
            * Set narrator to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_narrator_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               return adb_metadata_type0_reset_narrator(_metadata_type0, env);
           }

           
           /**
            * Check whether narrator is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_narrator_nil_at(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return (_metadata_type0->is_valid_narrator == AXIS2_FALSE ||
                        NULL == _metadata_type0->property_narrator || 
                        NULL == axutil_array_list_get(_metadata_type0->property_narrator, env, i));
           }

           /**
            * Set narrator to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_narrator_nil_at(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);

                if(_metadata_type0->property_narrator == NULL ||
                            _metadata_type0->is_valid_narrator == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_metadata_type0->property_narrator, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_metadata_type0->property_narrator, env, i))
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
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of narrator is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_metadata_type0->property_narrator == NULL)
                {
                    _metadata_type0->is_valid_narrator = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_metadata_type0->property_narrator, env, i);
                if(NULL != element)
                {
                  
                  
                  
                       /* This is an unknown type or a primitive. Please free this manually*/
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _metadata_type0->is_valid_narrator = AXIS2_FALSE;
                        axutil_array_list_set(_metadata_type0->property_narrator , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_metadata_type0->property_narrator , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for size by  Property Number 17
             */
            int64_t AXIS2_CALL
            adb_metadata_type0_get_property17(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env)
            {
                return adb_metadata_type0_get_size(_metadata_type0,
                                             env);
            }

            /**
             * getter for size.
             */
            int64_t AXIS2_CALL
            adb_metadata_type0_get_size(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (int64_t)0);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, (int64_t)0);
                  

                return _metadata_type0->property_size;
             }

            /**
             * setter for size
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_size(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    const int64_t  arg_size)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if(_metadata_type0->is_valid_size &&
                        arg_size == _metadata_type0->property_size)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_metadata_type0_reset_size(_metadata_type0, env);

                _metadata_type0->property_size = arg_size;
                        _metadata_type0->is_valid_size = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for size
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_reset_size(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
               

               _metadata_type0->is_valid_size = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether size is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_size_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return !_metadata_type0->is_valid_size;
           }

           /**
            * Set size to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_size_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               return adb_metadata_type0_reset_size(_metadata_type0, env);
           }

           

            /**
             * Getter for meta by  Property Number 18
             */
            axutil_array_list_t* AXIS2_CALL
            adb_metadata_type0_get_property18(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env)
            {
                return adb_metadata_type0_get_meta(_metadata_type0,
                                             env);
            }

            /**
             * getter for meta.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_metadata_type0_get_meta(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                return _metadata_type0->property_meta;
             }

            /**
             * setter for meta
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_meta(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_meta)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if(_metadata_type0->is_valid_meta &&
                        arg_meta == _metadata_type0->property_meta)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_meta, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "meta has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_meta, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_metadata_type0_reset_meta(_metadata_type0, env);

                
                if(NULL == arg_meta)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _metadata_type0->property_meta = arg_meta;
                        if(non_nil_exists)
                        {
                            _metadata_type0->is_valid_meta = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of meta.
             */
            adb_meta_type0_t* AXIS2_CALL
            adb_metadata_type0_get_meta_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i)
            {
                adb_meta_type0_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                if(_metadata_type0->property_meta == NULL)
                {
                    return (adb_meta_type0_t*)0;
                }
                ret_val = (adb_meta_type0_t*)axutil_array_list_get(_metadata_type0->property_meta, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of meta.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_meta_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i,
                    adb_meta_type0_t* arg_meta)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if( _metadata_type0->is_valid_meta &&
                    _metadata_type0->property_meta &&
                
                    arg_meta == (adb_meta_type0_t*)axutil_array_list_get(_metadata_type0->property_meta, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_meta)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_metadata_type0->property_meta != NULL)
                        {
                            size = axutil_array_list_size(_metadata_type0->property_meta, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_metadata_type0->property_meta, env, i))
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
                  

                if(_metadata_type0->property_meta == NULL)
                {
                    _metadata_type0->property_meta = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_metadata_type0->property_meta, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_meta_type0_free((adb_meta_type0_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _metadata_type0->is_valid_meta = AXIS2_FALSE;
                        axutil_array_list_set(_metadata_type0->property_meta , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_metadata_type0->property_meta , env, i, arg_meta);
                  _metadata_type0->is_valid_meta = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to meta.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_add_meta(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    adb_meta_type0_t* arg_meta)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);

                
                    if(NULL == arg_meta)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_metadata_type0->property_meta == NULL)
                {
                    _metadata_type0->property_meta = axutil_array_list_create(env, 10);
                }
                if(_metadata_type0->property_meta == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for meta");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_metadata_type0->property_meta , env, arg_meta);
                  _metadata_type0->is_valid_meta = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the meta array.
             */
            int AXIS2_CALL
            adb_metadata_type0_sizeof_meta(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, -1);
                if(_metadata_type0->property_meta == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_metadata_type0->property_meta, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_remove_meta_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i)
            {
                return adb_metadata_type0_set_meta_nil_at(_metadata_type0, env, i);
            }

            

           /**
            * resetter for meta
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_reset_meta(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
               

               
                  if (_metadata_type0->property_meta != NULL)
                  {
                      count = axutil_array_list_size(_metadata_type0->property_meta, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_metadata_type0->property_meta, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   adb_meta_type0_free((adb_meta_type0_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_metadata_type0->property_meta, env);
                  }
                _metadata_type0->is_valid_meta = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether meta is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_meta_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return !_metadata_type0->is_valid_meta;
           }

           /**
            * Set meta to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_meta_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               return adb_metadata_type0_reset_meta(_metadata_type0, env);
           }

           
           /**
            * Check whether meta is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_meta_nil_at(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return (_metadata_type0->is_valid_meta == AXIS2_FALSE ||
                        NULL == _metadata_type0->property_meta || 
                        NULL == axutil_array_list_get(_metadata_type0->property_meta, env, i));
           }

           /**
            * Set meta to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_meta_nil_at(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);

                if(_metadata_type0->property_meta == NULL ||
                            _metadata_type0->is_valid_meta == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_metadata_type0->property_meta, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_metadata_type0->property_meta, env, i))
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
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of meta is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_metadata_type0->property_meta == NULL)
                {
                    _metadata_type0->is_valid_meta = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_metadata_type0->property_meta, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_meta_type0_free((adb_meta_type0_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _metadata_type0->is_valid_meta = AXIS2_FALSE;
                        axutil_array_list_set(_metadata_type0->property_meta , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_metadata_type0->property_meta , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

            /**
             * Getter for metadataChoice_type0 by  Property Number 19
             */
            axutil_array_list_t* AXIS2_CALL
            adb_metadata_type0_get_property19(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env)
            {
                return adb_metadata_type0_get_metadataChoice_type0(_metadata_type0,
                                             env);
            }

            /**
             * getter for metadataChoice_type0.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_metadata_type0_get_metadataChoice_type0(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                return _metadata_type0->property_metadataChoice_type0;
             }

            /**
             * setter for metadataChoice_type0
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_metadataChoice_type0(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_metadataChoice_type0)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if(_metadata_type0->is_valid_metadataChoice_type0 &&
                        arg_metadataChoice_type0 == _metadata_type0->property_metadataChoice_type0)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_metadataChoice_type0, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "metadataChoice_type0 has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_metadataChoice_type0, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_metadata_type0_reset_metadataChoice_type0(_metadata_type0, env);

                
                if(NULL == arg_metadataChoice_type0)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _metadata_type0->property_metadataChoice_type0 = arg_metadataChoice_type0;
                        if(non_nil_exists)
                        {
                            _metadata_type0->is_valid_metadataChoice_type0 = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of metadataChoice_type0.
             */
            adb_metadataChoice_type0_t* AXIS2_CALL
            adb_metadata_type0_get_metadataChoice_type0_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i)
            {
                adb_metadataChoice_type0_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _metadata_type0, NULL);
                  

                if(_metadata_type0->property_metadataChoice_type0 == NULL)
                {
                    return (adb_metadataChoice_type0_t*)0;
                }
                ret_val = (adb_metadataChoice_type0_t*)axutil_array_list_get(_metadata_type0->property_metadataChoice_type0, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of metadataChoice_type0.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_set_metadataChoice_type0_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i,
                    adb_metadataChoice_type0_t* arg_metadataChoice_type0)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
                
                if( _metadata_type0->is_valid_metadataChoice_type0 &&
                    _metadata_type0->property_metadataChoice_type0 &&
                
                    arg_metadataChoice_type0 == (adb_metadataChoice_type0_t*)axutil_array_list_get(_metadata_type0->property_metadataChoice_type0, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_metadataChoice_type0)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_metadata_type0->property_metadataChoice_type0 != NULL)
                        {
                            size = axutil_array_list_size(_metadata_type0->property_metadataChoice_type0, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_metadata_type0->property_metadataChoice_type0, env, i))
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
                  

                if(_metadata_type0->property_metadataChoice_type0 == NULL)
                {
                    _metadata_type0->property_metadataChoice_type0 = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_metadata_type0->property_metadataChoice_type0, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_metadataChoice_type0_free((adb_metadataChoice_type0_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _metadata_type0->is_valid_metadataChoice_type0 = AXIS2_FALSE;
                        axutil_array_list_set(_metadata_type0->property_metadataChoice_type0 , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_metadata_type0->property_metadataChoice_type0 , env, i, arg_metadataChoice_type0);
                  _metadata_type0->is_valid_metadataChoice_type0 = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to metadataChoice_type0.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_add_metadataChoice_type0(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env,
                    adb_metadataChoice_type0_t* arg_metadataChoice_type0)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);

                
                    if(NULL == arg_metadataChoice_type0)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_metadata_type0->property_metadataChoice_type0 == NULL)
                {
                    _metadata_type0->property_metadataChoice_type0 = axutil_array_list_create(env, 10);
                }
                if(_metadata_type0->property_metadataChoice_type0 == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for metadataChoice_type0");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_metadata_type0->property_metadataChoice_type0 , env, arg_metadataChoice_type0);
                  _metadata_type0->is_valid_metadataChoice_type0 = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the metadataChoice_type0 array.
             */
            int AXIS2_CALL
            adb_metadata_type0_sizeof_metadataChoice_type0(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, -1);
                if(_metadata_type0->property_metadataChoice_type0 == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_metadata_type0->property_metadataChoice_type0, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_metadata_type0_remove_metadataChoice_type0_at(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, int i)
            {
                return adb_metadata_type0_set_metadataChoice_type0_nil_at(_metadata_type0, env, i);
            }

            

           /**
            * resetter for metadataChoice_type0
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_reset_metadataChoice_type0(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);
               

               
                  if (_metadata_type0->property_metadataChoice_type0 != NULL)
                  {
                      count = axutil_array_list_size(_metadata_type0->property_metadataChoice_type0, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_metadata_type0->property_metadataChoice_type0, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   adb_metadataChoice_type0_free((adb_metadataChoice_type0_t*)element, env);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_metadata_type0->property_metadataChoice_type0, env);
                  }
                _metadata_type0->is_valid_metadataChoice_type0 = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether metadataChoice_type0 is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_metadataChoice_type0_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return !_metadata_type0->is_valid_metadataChoice_type0;
           }

           /**
            * Set metadataChoice_type0 to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_metadataChoice_type0_nil(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env)
           {
               return adb_metadata_type0_reset_metadataChoice_type0(_metadata_type0, env);
           }

           
           /**
            * Check whether metadataChoice_type0 is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_metadata_type0_is_metadataChoice_type0_nil_at(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_TRUE);
               
               return (_metadata_type0->is_valid_metadataChoice_type0 == AXIS2_FALSE ||
                        NULL == _metadata_type0->property_metadataChoice_type0 || 
                        NULL == axutil_array_list_get(_metadata_type0->property_metadataChoice_type0, env, i));
           }

           /**
            * Set metadataChoice_type0 to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_metadata_type0_set_metadataChoice_type0_nil_at(
                   adb_metadata_type0_t* _metadata_type0,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _metadata_type0, AXIS2_FAILURE);

                if(_metadata_type0->property_metadataChoice_type0 == NULL ||
                            _metadata_type0->is_valid_metadataChoice_type0 == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_metadata_type0->property_metadataChoice_type0, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_metadata_type0->property_metadataChoice_type0, env, i))
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
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of metadataChoice_type0 is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_metadata_type0->property_metadataChoice_type0 == NULL)
                {
                    _metadata_type0->is_valid_metadataChoice_type0 = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_metadata_type0->property_metadataChoice_type0, env, i);
                if(NULL != element)
                {
                  
                  
                  adb_metadataChoice_type0_free((adb_metadataChoice_type0_t*)element, env);
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _metadata_type0->is_valid_metadataChoice_type0 = AXIS2_FALSE;
                        axutil_array_list_set(_metadata_type0->property_metadataChoice_type0 , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_metadata_type0->property_metadataChoice_type0 , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

