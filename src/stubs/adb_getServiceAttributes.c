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
         * adb_getServiceAttributes.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_getServiceAttributes.h"
        
               /*
                * implmentation of the getServiceAttributes|http://www.daisy.org/ns/daisy-online/ element
                */
           


        struct adb_getServiceAttributes
        {
            axis2_char_t *property_TypeName;

            
                axutil_qname_t* qname;
            
        };


       /************************* Private Function prototypes ********************************/
        


       /************************* Function Implmentations ********************************/
        adb_getServiceAttributes_t* AXIS2_CALL
        adb_getServiceAttributes_create(
            const axutil_env_t *env)
        {
            adb_getServiceAttributes_t *_getServiceAttributes = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _getServiceAttributes = (adb_getServiceAttributes_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_getServiceAttributes_t));

            if(NULL == _getServiceAttributes)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_getServiceAttributes, 0, sizeof(adb_getServiceAttributes_t));

            _getServiceAttributes->property_TypeName = axutil_strdup(env, "adb_getServiceAttributes");
            
                  qname =  axutil_qname_create (env,
                        "getServiceAttributes",
                        "http://www.daisy.org/ns/daisy-online/",
                        NULL);
                _getServiceAttributes->qname = qname;
            

            return _getServiceAttributes;
        }

        adb_getServiceAttributes_t* AXIS2_CALL
        adb_getServiceAttributes_create_with_values(
            const axutil_env_t *env)
        {
            adb_getServiceAttributes_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_getServiceAttributes_create(env);

            

            return adb_obj;
        }
      
        
                void* AXIS2_CALL
                adb_getServiceAttributes_free_popping_value(
                        adb_getServiceAttributes_t* _getServiceAttributes,
                        const axutil_env_t *env)
                {
                    adb_getServiceAttributes_free(_getServiceAttributes, env);
                    return NULL;
                }
            

        axis2_status_t AXIS2_CALL
        adb_getServiceAttributes_free(
                adb_getServiceAttributes_t* _getServiceAttributes,
                const axutil_env_t *env)
        {
            
            
            return adb_getServiceAttributes_free_obj(
                _getServiceAttributes,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_getServiceAttributes_free_obj(
                adb_getServiceAttributes_t* _getServiceAttributes,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _getServiceAttributes, AXIS2_FAILURE);

            if (_getServiceAttributes->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _getServiceAttributes->property_TypeName);
            }

            
              if(_getServiceAttributes->qname)
              {
                  axutil_qname_free (_getServiceAttributes->qname, env);
                  _getServiceAttributes->qname = NULL;
              }
            

            if(_getServiceAttributes)
            {
                AXIS2_FREE(env->allocator, _getServiceAttributes);
                _getServiceAttributes = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_getServiceAttributes_deserialize(
                adb_getServiceAttributes_t* _getServiceAttributes,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_getServiceAttributes_deserialize_obj(
                _getServiceAttributes,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_getServiceAttributes_deserialize_obj(
                adb_getServiceAttributes_t* _getServiceAttributes,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
          
            axutil_qname_t *element_qname = NULL; 
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _getServiceAttributes, AXIS2_FAILURE);

            
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_getServiceAttributes_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_getServiceAttributes_declare_parent_namespaces(
                    adb_getServiceAttributes_t* _getServiceAttributes,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_getServiceAttributes_serialize(
                adb_getServiceAttributes_t* _getServiceAttributes,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_getServiceAttributes_serialize_obj(
                    _getServiceAttributes, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_getServiceAttributes_serialize_obj(
                adb_getServiceAttributes_t* _getServiceAttributes,
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
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

             
                int next_ns_index_value = 0;
            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _getServiceAttributes, NULL);
            
             
                    namespaces = axutil_hash_make(env);
                    next_ns_index = &next_ns_index_value;
                     
                           ns1 = axiom_namespace_create (env,
                                             "http://www.daisy.org/ns/daisy-online/",
                                             "n"); 
                           axutil_hash_set(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING, axutil_strdup(env, "n"));
                       
                     
                    parent_element = axiom_element_create (env, NULL, "getServiceAttributes", ns1 , &parent);
                    
                    
                    axiom_element_set_namespace(parent_element, env, ns1, parent);


            

            return parent;
        }


        

