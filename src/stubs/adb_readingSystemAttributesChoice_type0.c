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
         * adb_readingSystemAttributesChoice_type0.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_readingSystemAttributesChoice_type0.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = readingSystemAttributesChoice_type0
                 * Namespace URI = http://www.daisy.org/ns/daisy-online/
                 * Namespace Prefix = ns3
                 */
           


        struct adb_readingSystemAttributesChoice_type0
        {
            axis2_char_t *property_TypeName;

            axiom_node_t* property_extraElement;

                
                axis2_bool_t is_valid_extraElement;
            
                axis2_char_t *current_choice;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_readingSystemAttributesChoice_type0_set_extraElement_nil(
                        adb_readingSystemAttributesChoice_type0_t* _readingSystemAttributesChoice_type0,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_readingSystemAttributesChoice_type0_t* AXIS2_CALL
        adb_readingSystemAttributesChoice_type0_create(
            const axutil_env_t *env)
        {
            adb_readingSystemAttributesChoice_type0_t *_readingSystemAttributesChoice_type0 = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _readingSystemAttributesChoice_type0 = (adb_readingSystemAttributesChoice_type0_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_readingSystemAttributesChoice_type0_t));

            if(NULL == _readingSystemAttributesChoice_type0)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_readingSystemAttributesChoice_type0, 0, sizeof(adb_readingSystemAttributesChoice_type0_t));

            _readingSystemAttributesChoice_type0->property_TypeName = axutil_strdup(env, "adb_readingSystemAttributesChoice_type0");
            _readingSystemAttributesChoice_type0->is_valid_extraElement  = AXIS2_FALSE;
            _readingSystemAttributesChoice_type0->current_choice = "";
            

            return _readingSystemAttributesChoice_type0;
        }

        adb_readingSystemAttributesChoice_type0_t* AXIS2_CALL
        adb_readingSystemAttributesChoice_type0_create_with_values(
            const axutil_env_t *env,
                axiom_node_t* _extraElement)
        {
            adb_readingSystemAttributesChoice_type0_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_readingSystemAttributesChoice_type0_create(env);

            
              status = adb_readingSystemAttributesChoice_type0_set_extraElement(
                                     adb_obj,
                                     env,
                                     _extraElement);
              if(status == AXIS2_FAILURE) {
                  adb_readingSystemAttributesChoice_type0_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axiom_node_t* AXIS2_CALL
                adb_readingSystemAttributesChoice_type0_free_popping_value(
                        adb_readingSystemAttributesChoice_type0_t* _readingSystemAttributesChoice_type0,
                        const axutil_env_t *env)
                {
                    axiom_node_t* value;

                    
                    
                    value = _readingSystemAttributesChoice_type0->property_extraElement;

                    adb_readingSystemAttributesChoice_type0_free(_readingSystemAttributesChoice_type0, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributesChoice_type0_free(
                adb_readingSystemAttributesChoice_type0_t* _readingSystemAttributesChoice_type0,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _readingSystemAttributesChoice_type0,
                env,
                "adb_readingSystemAttributesChoice_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributesChoice_type0_free_obj(
                adb_readingSystemAttributesChoice_type0_t* _readingSystemAttributesChoice_type0,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _readingSystemAttributesChoice_type0, AXIS2_FAILURE);

            if (_readingSystemAttributesChoice_type0->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _readingSystemAttributesChoice_type0->property_TypeName);
            }

            adb_readingSystemAttributesChoice_type0_reset_extraElement(_readingSystemAttributesChoice_type0, env);
            

            if(_readingSystemAttributesChoice_type0)
            {
                AXIS2_FREE(env->allocator, _readingSystemAttributesChoice_type0);
                _readingSystemAttributesChoice_type0 = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributesChoice_type0_deserialize(
                adb_readingSystemAttributesChoice_type0_t* _readingSystemAttributesChoice_type0,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _readingSystemAttributesChoice_type0,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_readingSystemAttributesChoice_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_readingSystemAttributesChoice_type0_deserialize_obj(
                adb_readingSystemAttributesChoice_type0_t* _readingSystemAttributesChoice_type0,
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
            AXIS2_PARAM_CHECK(env->error, _readingSystemAttributesChoice_type0, AXIS2_FAILURE);

            
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
                                          status = adb_readingSystemAttributesChoice_type0_set_extraElement(_readingSystemAttributesChoice_type0, env,
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
          adb_readingSystemAttributesChoice_type0_is_particle()
          {
            
                 return AXIS2_TRUE;
              
          }


          void AXIS2_CALL
          adb_readingSystemAttributesChoice_type0_declare_parent_namespaces(
                    adb_readingSystemAttributesChoice_type0_t* _readingSystemAttributesChoice_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_readingSystemAttributesChoice_type0_serialize(
                adb_readingSystemAttributesChoice_type0_t* _readingSystemAttributesChoice_type0,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_readingSystemAttributesChoice_type0 == NULL)
            {
                return adb_readingSystemAttributesChoice_type0_serialize_obj(
                    _readingSystemAttributesChoice_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _readingSystemAttributesChoice_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_readingSystemAttributesChoice_type0");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_readingSystemAttributesChoice_type0_serialize_obj(
                adb_readingSystemAttributesChoice_type0_t* _readingSystemAttributesChoice_type0,
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
            AXIS2_PARAM_CHECK(env->error, _readingSystemAttributesChoice_type0, NULL);
            
            
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
        
                if(0 == axutil_strcmp(_readingSystemAttributesChoice_type0->current_choice, ":extraElement"))
                {
                
                       p_prefix = NULL;
                      

                   if (!_readingSystemAttributesChoice_type0->is_valid_extraElement)
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
                    
                                text_value_1 = axiom_node_to_string(_readingSystemAttributesChoice_type0->property_extraElement, env);
                                
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
            adb_readingSystemAttributesChoice_type0_get_property1(
                adb_readingSystemAttributesChoice_type0_t* _readingSystemAttributesChoice_type0,
                const axutil_env_t *env)
            {
                return adb_readingSystemAttributesChoice_type0_get_extraElement(_readingSystemAttributesChoice_type0,
                                             env);
            }

            /**
             * getter for extraElement.
             */
            axiom_node_t* AXIS2_CALL
            adb_readingSystemAttributesChoice_type0_get_extraElement(
                    adb_readingSystemAttributesChoice_type0_t* _readingSystemAttributesChoice_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _readingSystemAttributesChoice_type0, NULL);
                  

                return _readingSystemAttributesChoice_type0->property_extraElement;
             }

            /**
             * setter for extraElement
             */
            axis2_status_t AXIS2_CALL
            adb_readingSystemAttributesChoice_type0_set_extraElement(
                    adb_readingSystemAttributesChoice_type0_t* _readingSystemAttributesChoice_type0,
                    const axutil_env_t *env,
                    axiom_node_t*  arg_extraElement)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _readingSystemAttributesChoice_type0, AXIS2_FAILURE);
                
                if(_readingSystemAttributesChoice_type0->is_valid_extraElement &&
                        arg_extraElement == _readingSystemAttributesChoice_type0->property_extraElement)
                {
                    _readingSystemAttributesChoice_type0->current_choice = ":extraElement";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_extraElement)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "extraElement is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_readingSystemAttributesChoice_type0_reset_extraElement(_readingSystemAttributesChoice_type0, env);

                
                if(NULL == arg_extraElement)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _readingSystemAttributesChoice_type0->property_extraElement = arg_extraElement;
                        _readingSystemAttributesChoice_type0->is_valid_extraElement = AXIS2_TRUE;
                    _readingSystemAttributesChoice_type0->current_choice = ":extraElement";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for extraElement
            */
           axis2_status_t AXIS2_CALL
           adb_readingSystemAttributesChoice_type0_reset_extraElement(
                   adb_readingSystemAttributesChoice_type0_t* _readingSystemAttributesChoice_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _readingSystemAttributesChoice_type0, AXIS2_FAILURE);
               

               _readingSystemAttributesChoice_type0->is_valid_extraElement = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether extraElement is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_readingSystemAttributesChoice_type0_is_extraElement_nil(
                   adb_readingSystemAttributesChoice_type0_t* _readingSystemAttributesChoice_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _readingSystemAttributesChoice_type0, AXIS2_TRUE);
               
               return !_readingSystemAttributesChoice_type0->is_valid_extraElement;
           }

           /**
            * Set extraElement to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_readingSystemAttributesChoice_type0_set_extraElement_nil(
                   adb_readingSystemAttributesChoice_type0_t* _readingSystemAttributesChoice_type0,
                   const axutil_env_t *env)
           {
               return adb_readingSystemAttributesChoice_type0_reset_extraElement(_readingSystemAttributesChoice_type0, env);
           }

           

