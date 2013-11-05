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
         * adb_EncryptionPropertyTypeChoice.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_EncryptionPropertyTypeChoice.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = EncryptionPropertyTypeChoice
                 * Namespace URI = http://www.w3.org/2001/04/xmlenc#
                 * Namespace Prefix = ns6
                 */
           


        struct adb_EncryptionPropertyTypeChoice
        {
            axis2_char_t *property_TypeName;

            axiom_node_t* property_extraElement;

                
                axis2_bool_t is_valid_extraElement;
            
                axis2_char_t *current_choice;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_EncryptionPropertyTypeChoice_set_extraElement_nil(
                        adb_EncryptionPropertyTypeChoice_t* _EncryptionPropertyTypeChoice,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_EncryptionPropertyTypeChoice_t* AXIS2_CALL
        adb_EncryptionPropertyTypeChoice_create(
            const axutil_env_t *env)
        {
            adb_EncryptionPropertyTypeChoice_t *_EncryptionPropertyTypeChoice = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _EncryptionPropertyTypeChoice = (adb_EncryptionPropertyTypeChoice_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_EncryptionPropertyTypeChoice_t));

            if(NULL == _EncryptionPropertyTypeChoice)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_EncryptionPropertyTypeChoice, 0, sizeof(adb_EncryptionPropertyTypeChoice_t));

            _EncryptionPropertyTypeChoice->property_TypeName = axutil_strdup(env, "adb_EncryptionPropertyTypeChoice");
            _EncryptionPropertyTypeChoice->is_valid_extraElement  = AXIS2_FALSE;
            _EncryptionPropertyTypeChoice->current_choice = "";
            

            return _EncryptionPropertyTypeChoice;
        }

        adb_EncryptionPropertyTypeChoice_t* AXIS2_CALL
        adb_EncryptionPropertyTypeChoice_create_with_values(
            const axutil_env_t *env,
                axiom_node_t* _extraElement)
        {
            adb_EncryptionPropertyTypeChoice_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_EncryptionPropertyTypeChoice_create(env);

            
              status = adb_EncryptionPropertyTypeChoice_set_extraElement(
                                     adb_obj,
                                     env,
                                     _extraElement);
              if(status == AXIS2_FAILURE) {
                  adb_EncryptionPropertyTypeChoice_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axiom_node_t* AXIS2_CALL
                adb_EncryptionPropertyTypeChoice_free_popping_value(
                        adb_EncryptionPropertyTypeChoice_t* _EncryptionPropertyTypeChoice,
                        const axutil_env_t *env)
                {
                    axiom_node_t* value;

                    
                    
                    value = _EncryptionPropertyTypeChoice->property_extraElement;

                    adb_EncryptionPropertyTypeChoice_free(_EncryptionPropertyTypeChoice, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyTypeChoice_free(
                adb_EncryptionPropertyTypeChoice_t* _EncryptionPropertyTypeChoice,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _EncryptionPropertyTypeChoice,
                env,
                "adb_EncryptionPropertyTypeChoice");
            
        }

        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyTypeChoice_free_obj(
                adb_EncryptionPropertyTypeChoice_t* _EncryptionPropertyTypeChoice,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyTypeChoice, AXIS2_FAILURE);

            if (_EncryptionPropertyTypeChoice->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _EncryptionPropertyTypeChoice->property_TypeName);
            }

            adb_EncryptionPropertyTypeChoice_reset_extraElement(_EncryptionPropertyTypeChoice, env);
            

            if(_EncryptionPropertyTypeChoice)
            {
                AXIS2_FREE(env->allocator, _EncryptionPropertyTypeChoice);
                _EncryptionPropertyTypeChoice = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyTypeChoice_deserialize(
                adb_EncryptionPropertyTypeChoice_t* _EncryptionPropertyTypeChoice,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _EncryptionPropertyTypeChoice,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_EncryptionPropertyTypeChoice");
            
        }

        axis2_status_t AXIS2_CALL
        adb_EncryptionPropertyTypeChoice_deserialize_obj(
                adb_EncryptionPropertyTypeChoice_t* _EncryptionPropertyTypeChoice,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
           
             const axis2_char_t* text_value = NULL;
             axutil_qname_t *qname = NULL;
          
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyTypeChoice, AXIS2_FAILURE);

            
                         first_node = parent;
                    

                     
                     /*
                      * building extraElement element
                      */
                     
                     
                     
                                   current_node = first_node;
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
                                          status = adb_EncryptionPropertyTypeChoice_set_extraElement(_EncryptionPropertyTypeChoice, env,
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
          adb_EncryptionPropertyTypeChoice_is_particle()
          {
            
                 return AXIS2_TRUE;
              
          }


          void AXIS2_CALL
          adb_EncryptionPropertyTypeChoice_declare_parent_namespaces(
                    adb_EncryptionPropertyTypeChoice_t* _EncryptionPropertyTypeChoice,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_EncryptionPropertyTypeChoice_serialize(
                adb_EncryptionPropertyTypeChoice_t* _EncryptionPropertyTypeChoice,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_EncryptionPropertyTypeChoice == NULL)
            {
                return adb_EncryptionPropertyTypeChoice_serialize_obj(
                    _EncryptionPropertyTypeChoice, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _EncryptionPropertyTypeChoice, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_EncryptionPropertyTypeChoice");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_EncryptionPropertyTypeChoice_serialize_obj(
                adb_EncryptionPropertyTypeChoice_t* _EncryptionPropertyTypeChoice,
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
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyTypeChoice, NULL);
            
            
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
        
                if(0 == axutil_strcmp(_EncryptionPropertyTypeChoice->current_choice, ":extraElement"))
                {
                
                       p_prefix = NULL;
                      

                   if (!_EncryptionPropertyTypeChoice->is_valid_extraElement)
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
                    
                                text_value_1 = axiom_node_to_string(_EncryptionPropertyTypeChoice->property_extraElement, env);
                                
                                axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                                
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 

            return parent;
        }


        

            /**
             * Getter for extraElement by  Property Number 1
             */
            axiom_node_t* AXIS2_CALL
            adb_EncryptionPropertyTypeChoice_get_property1(
                adb_EncryptionPropertyTypeChoice_t* _EncryptionPropertyTypeChoice,
                const axutil_env_t *env)
            {
                return adb_EncryptionPropertyTypeChoice_get_extraElement(_EncryptionPropertyTypeChoice,
                                             env);
            }

            /**
             * getter for extraElement.
             */
            axiom_node_t* AXIS2_CALL
            adb_EncryptionPropertyTypeChoice_get_extraElement(
                    adb_EncryptionPropertyTypeChoice_t* _EncryptionPropertyTypeChoice,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyTypeChoice, NULL);
                  

                return _EncryptionPropertyTypeChoice->property_extraElement;
             }

            /**
             * setter for extraElement
             */
            axis2_status_t AXIS2_CALL
            adb_EncryptionPropertyTypeChoice_set_extraElement(
                    adb_EncryptionPropertyTypeChoice_t* _EncryptionPropertyTypeChoice,
                    const axutil_env_t *env,
                    axiom_node_t*  arg_extraElement)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyTypeChoice, AXIS2_FAILURE);
                
                if(_EncryptionPropertyTypeChoice->is_valid_extraElement &&
                        arg_extraElement == _EncryptionPropertyTypeChoice->property_extraElement)
                {
                    _EncryptionPropertyTypeChoice->current_choice = ":extraElement";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_extraElement)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "extraElement is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_EncryptionPropertyTypeChoice_reset_extraElement(_EncryptionPropertyTypeChoice, env);

                
                if(NULL == arg_extraElement)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _EncryptionPropertyTypeChoice->property_extraElement = arg_extraElement;
                        _EncryptionPropertyTypeChoice->is_valid_extraElement = AXIS2_TRUE;
                    _EncryptionPropertyTypeChoice->current_choice = ":extraElement";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for extraElement
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptionPropertyTypeChoice_reset_extraElement(
                   adb_EncryptionPropertyTypeChoice_t* _EncryptionPropertyTypeChoice,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyTypeChoice, AXIS2_FAILURE);
               

               _EncryptionPropertyTypeChoice->is_valid_extraElement = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether extraElement is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_EncryptionPropertyTypeChoice_is_extraElement_nil(
                   adb_EncryptionPropertyTypeChoice_t* _EncryptionPropertyTypeChoice,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _EncryptionPropertyTypeChoice, AXIS2_TRUE);
               
               return !_EncryptionPropertyTypeChoice->is_valid_extraElement;
           }

           /**
            * Set extraElement to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_EncryptionPropertyTypeChoice_set_extraElement_nil(
                   adb_EncryptionPropertyTypeChoice_t* _EncryptionPropertyTypeChoice,
                   const axutil_env_t *env)
           {
               return adb_EncryptionPropertyTypeChoice_reset_extraElement(_EncryptionPropertyTypeChoice, env);
           }

           

