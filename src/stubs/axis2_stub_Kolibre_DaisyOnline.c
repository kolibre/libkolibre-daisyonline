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
       * axis2_stub_Kolibre_DaisyOnline.c
       *
       * This file was auto-generated from WSDL for "Kolibre_DaisyOnline|http://www.daisy.org/ns/daisy-online/" service
       * by the Apache Axis2/Java version: 1.6.2  Built on : Oct 19, 2012 (02:20:14 EEST)
       */

      #include "axis2_stub_Kolibre_DaisyOnline.h"
      #include <axis2_msg.h>
      #include <axis2_policy_include.h>
      #include <neethi_engine.h>


      /**
       * axis2_stub_Kolibre_DaisyOnline C implementation
       */

      axis2_stub_t* AXIS2_CALL
      axis2_stub_create_Kolibre_DaisyOnline(const axutil_env_t *env,
                                      const axis2_char_t *client_home,
                                      const axis2_char_t *endpoint_uri)
      {
         axis2_stub_t *stub = NULL;
         axis2_endpoint_ref_t *endpoint_ref = NULL;
         AXIS2_FUNC_PARAM_CHECK (client_home, env, NULL)

         if (NULL == endpoint_uri)
         {
            endpoint_uri = axis2_stub_get_endpoint_uri_of_Kolibre_DaisyOnline(env);
         }

         endpoint_ref = axis2_endpoint_ref_create(env, endpoint_uri);

         stub = axis2_stub_create_with_endpoint_ref_and_client_home (env, endpoint_ref, client_home);

         if (NULL == stub)
         {
            if(NULL != endpoint_ref)
            {
                axis2_endpoint_ref_free(endpoint_ref, env);
            }
            return NULL;
         }


         axis2_stub_populate_services_for_Kolibre_DaisyOnline(stub, env);
         return stub;
      }


      void AXIS2_CALL
      axis2_stub_populate_services_for_Kolibre_DaisyOnline(axis2_stub_t *stub, const axutil_env_t *env)
      {
         axis2_svc_client_t *svc_client = NULL;
         axutil_qname_t *svc_qname =  NULL;
         axutil_qname_t *op_qname =  NULL;
         axis2_svc_t *svc = NULL;
         axis2_op_t *op = NULL;
         axis2_op_t *annon_op = NULL;
         axis2_msg_t *msg_out = NULL;
         axis2_msg_t *msg_in = NULL;
         axis2_msg_t *msg_out_fault = NULL;
         axis2_msg_t *msg_in_fault = NULL;
         axis2_policy_include_t *policy_include = NULL;

         axis2_desc_t *desc = NULL;
         axiom_node_t *policy_node = NULL;
         axiom_element_t *policy_root_ele = NULL;
         neethi_policy_t *neethi_policy = NULL;
         axis2_status_t status;

         /* Modifying the Service */
         svc_client = axis2_stub_get_svc_client (stub, env );
         svc = (axis2_svc_t*)axis2_svc_client_get_svc( svc_client, env );

         annon_op = axis2_svc_get_op_with_name(svc, env, AXIS2_ANON_OUT_IN_OP);
         msg_out = axis2_op_get_msg(annon_op, env, AXIS2_MSG_OUT);
         msg_in = axis2_op_get_msg(annon_op, env, AXIS2_MSG_IN);
         msg_out_fault = axis2_op_get_msg(annon_op, env, AXIS2_MSG_OUT_FAULT);
         msg_in_fault = axis2_op_get_msg(annon_op, env, AXIS2_MSG_IN_FAULT);

         svc_qname = axutil_qname_create(env,"Kolibre_DaisyOnline" ,NULL, NULL);
         axis2_svc_set_qname (svc, env, svc_qname);
		 axutil_qname_free(svc_qname,env);

         /* creating the operations*/

         
           op_qname = axutil_qname_create(env,
                                         "getContentResources" ,
                                         "http://www.daisy.org/ns/daisy-online/",
                                         NULL);
           op = axis2_op_create_with_qname(env, op_qname);
           axutil_qname_free(op_qname,env);

           
               axis2_op_set_msg_exchange_pattern(op, env, AXIS2_MEP_URI_OUT_IN);
             
           axis2_msg_increment_ref(msg_out, env);
           axis2_msg_increment_ref(msg_in, env);
           axis2_msg_increment_ref(msg_out_fault, env);
           axis2_msg_increment_ref(msg_in_fault, env);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT, msg_out);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN, msg_in);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT_FAULT, msg_out_fault);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN_FAULT, msg_in_fault);
       
           
           axis2_svc_add_op(svc, env, op);
         
           op_qname = axutil_qname_create(env,
                                         "getContentMetadata" ,
                                         "http://www.daisy.org/ns/daisy-online/",
                                         NULL);
           op = axis2_op_create_with_qname(env, op_qname);
           axutil_qname_free(op_qname,env);

           
               axis2_op_set_msg_exchange_pattern(op, env, AXIS2_MEP_URI_OUT_IN);
             
           axis2_msg_increment_ref(msg_out, env);
           axis2_msg_increment_ref(msg_in, env);
           axis2_msg_increment_ref(msg_out_fault, env);
           axis2_msg_increment_ref(msg_in_fault, env);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT, msg_out);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN, msg_in);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT_FAULT, msg_out_fault);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN_FAULT, msg_in_fault);
       
           
           axis2_svc_add_op(svc, env, op);
         
           op_qname = axutil_qname_create(env,
                                         "markAnnouncementsAsRead" ,
                                         "http://www.daisy.org/ns/daisy-online/",
                                         NULL);
           op = axis2_op_create_with_qname(env, op_qname);
           axutil_qname_free(op_qname,env);

           
               axis2_op_set_msg_exchange_pattern(op, env, AXIS2_MEP_URI_OUT_IN);
             
           axis2_msg_increment_ref(msg_out, env);
           axis2_msg_increment_ref(msg_in, env);
           axis2_msg_increment_ref(msg_out_fault, env);
           axis2_msg_increment_ref(msg_in_fault, env);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT, msg_out);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN, msg_in);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT_FAULT, msg_out_fault);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN_FAULT, msg_in_fault);
       
           
           axis2_svc_add_op(svc, env, op);
         
           op_qname = axutil_qname_create(env,
                                         "getBookmarks" ,
                                         "http://www.daisy.org/ns/daisy-online/",
                                         NULL);
           op = axis2_op_create_with_qname(env, op_qname);
           axutil_qname_free(op_qname,env);

           
               axis2_op_set_msg_exchange_pattern(op, env, AXIS2_MEP_URI_OUT_IN);
             
           axis2_msg_increment_ref(msg_out, env);
           axis2_msg_increment_ref(msg_in, env);
           axis2_msg_increment_ref(msg_out_fault, env);
           axis2_msg_increment_ref(msg_in_fault, env);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT, msg_out);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN, msg_in);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT_FAULT, msg_out_fault);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN_FAULT, msg_in_fault);
       
           
           axis2_svc_add_op(svc, env, op);
         
           op_qname = axutil_qname_create(env,
                                         "getServiceAttributes" ,
                                         "http://www.daisy.org/ns/daisy-online/",
                                         NULL);
           op = axis2_op_create_with_qname(env, op_qname);
           axutil_qname_free(op_qname,env);

           
               axis2_op_set_msg_exchange_pattern(op, env, AXIS2_MEP_URI_OUT_IN);
             
           axis2_msg_increment_ref(msg_out, env);
           axis2_msg_increment_ref(msg_in, env);
           axis2_msg_increment_ref(msg_out_fault, env);
           axis2_msg_increment_ref(msg_in_fault, env);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT, msg_out);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN, msg_in);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT_FAULT, msg_out_fault);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN_FAULT, msg_in_fault);
       
           
           axis2_svc_add_op(svc, env, op);
         
           op_qname = axutil_qname_create(env,
                                         "setBookmarks" ,
                                         "http://www.daisy.org/ns/daisy-online/",
                                         NULL);
           op = axis2_op_create_with_qname(env, op_qname);
           axutil_qname_free(op_qname,env);

           
               axis2_op_set_msg_exchange_pattern(op, env, AXIS2_MEP_URI_OUT_IN);
             
           axis2_msg_increment_ref(msg_out, env);
           axis2_msg_increment_ref(msg_in, env);
           axis2_msg_increment_ref(msg_out_fault, env);
           axis2_msg_increment_ref(msg_in_fault, env);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT, msg_out);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN, msg_in);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT_FAULT, msg_out_fault);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN_FAULT, msg_in_fault);
       
           
           axis2_svc_add_op(svc, env, op);
         
           op_qname = axutil_qname_create(env,
                                         "logOn" ,
                                         "http://www.daisy.org/ns/daisy-online/",
                                         NULL);
           op = axis2_op_create_with_qname(env, op_qname);
           axutil_qname_free(op_qname,env);

           
               axis2_op_set_msg_exchange_pattern(op, env, AXIS2_MEP_URI_OUT_IN);
             
           axis2_msg_increment_ref(msg_out, env);
           axis2_msg_increment_ref(msg_in, env);
           axis2_msg_increment_ref(msg_out_fault, env);
           axis2_msg_increment_ref(msg_in_fault, env);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT, msg_out);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN, msg_in);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT_FAULT, msg_out_fault);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN_FAULT, msg_in_fault);
       
           
           axis2_svc_add_op(svc, env, op);
         
           op_qname = axutil_qname_create(env,
                                         "getContentList" ,
                                         "http://www.daisy.org/ns/daisy-online/",
                                         NULL);
           op = axis2_op_create_with_qname(env, op_qname);
           axutil_qname_free(op_qname,env);

           
               axis2_op_set_msg_exchange_pattern(op, env, AXIS2_MEP_URI_OUT_IN);
             
           axis2_msg_increment_ref(msg_out, env);
           axis2_msg_increment_ref(msg_in, env);
           axis2_msg_increment_ref(msg_out_fault, env);
           axis2_msg_increment_ref(msg_in_fault, env);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT, msg_out);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN, msg_in);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT_FAULT, msg_out_fault);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN_FAULT, msg_in_fault);
       
           
           axis2_svc_add_op(svc, env, op);
         
           op_qname = axutil_qname_create(env,
                                         "getQuestions" ,
                                         "http://www.daisy.org/ns/daisy-online/",
                                         NULL);
           op = axis2_op_create_with_qname(env, op_qname);
           axutil_qname_free(op_qname,env);

           
               axis2_op_set_msg_exchange_pattern(op, env, AXIS2_MEP_URI_OUT_IN);
             
           axis2_msg_increment_ref(msg_out, env);
           axis2_msg_increment_ref(msg_in, env);
           axis2_msg_increment_ref(msg_out_fault, env);
           axis2_msg_increment_ref(msg_in_fault, env);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT, msg_out);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN, msg_in);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT_FAULT, msg_out_fault);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN_FAULT, msg_in_fault);
       
           
           axis2_svc_add_op(svc, env, op);
         
           op_qname = axutil_qname_create(env,
                                         "issueContent" ,
                                         "http://www.daisy.org/ns/daisy-online/",
                                         NULL);
           op = axis2_op_create_with_qname(env, op_qname);
           axutil_qname_free(op_qname,env);

           
               axis2_op_set_msg_exchange_pattern(op, env, AXIS2_MEP_URI_OUT_IN);
             
           axis2_msg_increment_ref(msg_out, env);
           axis2_msg_increment_ref(msg_in, env);
           axis2_msg_increment_ref(msg_out_fault, env);
           axis2_msg_increment_ref(msg_in_fault, env);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT, msg_out);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN, msg_in);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT_FAULT, msg_out_fault);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN_FAULT, msg_in_fault);
       
           
           axis2_svc_add_op(svc, env, op);
         
           op_qname = axutil_qname_create(env,
                                         "setReadingSystemAttributes" ,
                                         "http://www.daisy.org/ns/daisy-online/",
                                         NULL);
           op = axis2_op_create_with_qname(env, op_qname);
           axutil_qname_free(op_qname,env);

           
               axis2_op_set_msg_exchange_pattern(op, env, AXIS2_MEP_URI_OUT_IN);
             
           axis2_msg_increment_ref(msg_out, env);
           axis2_msg_increment_ref(msg_in, env);
           axis2_msg_increment_ref(msg_out_fault, env);
           axis2_msg_increment_ref(msg_in_fault, env);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT, msg_out);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN, msg_in);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT_FAULT, msg_out_fault);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN_FAULT, msg_in_fault);
       
           
           axis2_svc_add_op(svc, env, op);
         
           op_qname = axutil_qname_create(env,
                                         "logOff" ,
                                         "http://www.daisy.org/ns/daisy-online/",
                                         NULL);
           op = axis2_op_create_with_qname(env, op_qname);
           axutil_qname_free(op_qname,env);

           
               axis2_op_set_msg_exchange_pattern(op, env, AXIS2_MEP_URI_OUT_IN);
             
           axis2_msg_increment_ref(msg_out, env);
           axis2_msg_increment_ref(msg_in, env);
           axis2_msg_increment_ref(msg_out_fault, env);
           axis2_msg_increment_ref(msg_in_fault, env);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT, msg_out);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN, msg_in);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT_FAULT, msg_out_fault);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN_FAULT, msg_in_fault);
       
           
           axis2_svc_add_op(svc, env, op);
         
           op_qname = axutil_qname_create(env,
                                         "returnContent" ,
                                         "http://www.daisy.org/ns/daisy-online/",
                                         NULL);
           op = axis2_op_create_with_qname(env, op_qname);
           axutil_qname_free(op_qname,env);

           
               axis2_op_set_msg_exchange_pattern(op, env, AXIS2_MEP_URI_OUT_IN);
             
           axis2_msg_increment_ref(msg_out, env);
           axis2_msg_increment_ref(msg_in, env);
           axis2_msg_increment_ref(msg_out_fault, env);
           axis2_msg_increment_ref(msg_in_fault, env);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT, msg_out);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN, msg_in);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT_FAULT, msg_out_fault);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN_FAULT, msg_in_fault);
       
           
           axis2_svc_add_op(svc, env, op);
         
           op_qname = axutil_qname_create(env,
                                         "getKeyExchangeObject" ,
                                         "http://www.daisy.org/ns/daisy-online/",
                                         NULL);
           op = axis2_op_create_with_qname(env, op_qname);
           axutil_qname_free(op_qname,env);

           
               axis2_op_set_msg_exchange_pattern(op, env, AXIS2_MEP_URI_OUT_IN);
             
           axis2_msg_increment_ref(msg_out, env);
           axis2_msg_increment_ref(msg_in, env);
           axis2_msg_increment_ref(msg_out_fault, env);
           axis2_msg_increment_ref(msg_in_fault, env);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT, msg_out);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN, msg_in);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT_FAULT, msg_out_fault);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN_FAULT, msg_in_fault);
       
           
           axis2_svc_add_op(svc, env, op);
         
           op_qname = axutil_qname_create(env,
                                         "getServiceAnnouncements" ,
                                         "http://www.daisy.org/ns/daisy-online/",
                                         NULL);
           op = axis2_op_create_with_qname(env, op_qname);
           axutil_qname_free(op_qname,env);

           
               axis2_op_set_msg_exchange_pattern(op, env, AXIS2_MEP_URI_OUT_IN);
             
           axis2_msg_increment_ref(msg_out, env);
           axis2_msg_increment_ref(msg_in, env);
           axis2_msg_increment_ref(msg_out_fault, env);
           axis2_msg_increment_ref(msg_in_fault, env);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT, msg_out);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN, msg_in);
           axis2_op_add_msg(op, env, AXIS2_MSG_OUT_FAULT, msg_out_fault);
           axis2_op_add_msg(op, env, AXIS2_MSG_IN_FAULT, msg_in_fault);
       
           
           axis2_svc_add_op(svc, env, op);
         
      }

      /**
       *return end point picked from wsdl
       */
      axis2_char_t* AXIS2_CALL
      axis2_stub_get_endpoint_uri_of_Kolibre_DaisyOnline( const axutil_env_t *env )
      {
        axis2_char_t *endpoint_uri = NULL;
        /* set the address from here */
        
              endpoint_uri = "SERVICE_WSDL_URI_PLACEHOLDER";
            
        return endpoint_uri;
      }


  
         /**
          * auto generated method signature
          * for "getContentResources|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub (axis2_stub_t)
          * @param env environment ( mandatory)
          * @param _contentID of the axis2_char_t*
          *
          * @return adb_resources_type0_t*
          */

         adb_resources_type0_t* AXIS2_CALL 
         axis2_stub_op_Kolibre_DaisyOnline_getContentResources( axis2_stub_t *stub, const axutil_env_t *env,
                                               axis2_char_t* _contentID,
                                          axis2_stub_Kolibre_DaisyOnline_getContentResources_fault *fault)
         {
            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;
            axiom_node_t *ret_node = NULL;

            const axis2_char_t *soap_action = NULL;
            axutil_qname_t *op_qname =  NULL;
            axiom_node_t *payload = NULL;
            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            adb_getContentResourcesResponse_t* ret_val;
            
                            {
                               adb_getContentResources_t* wrapper_adb_obj = adb_getContentResources_create_with_values(env,
                                        _contentID);
                                    payload = adb_getContentResources_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                                    if (wrapper_adb_obj)
                                    {
                                        adb_getContentResources_free(wrapper_adb_obj, env);
                                    }
                            }
                           
            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "options is null in stub");
                return (adb_resources_type0_t*)NULL;
            }
            soap_act = axis2_options_get_soap_action( options, env );
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/getContentResources";
              soap_act = axutil_string_create(env, "/getContentResources");
              axis2_options_set_soap_action(options, env, soap_act);    
            }

            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             
            ret_node =  axis2_svc_client_send_receive_with_op_qname( svc_client, env, op_qname, payload);
 
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);    
              
              axis2_options_set_action( options, env, NULL);
            }
            if(soap_act)
            {
              axutil_string_free(soap_act, env);
            }

            
            if (axis2_svc_client_get_last_response_has_fault (svc_client, env) && fault)
            {
                /* so it is a fault, will try to create soap elements */
                axiom_soap_envelope_t *soap_envelope = NULL;
                axiom_soap_body_t *soap_body = NULL;
                axiom_soap_fault_t *soap_fault = NULL;
 
                soap_envelope = axis2_svc_client_get_last_response_soap_envelope (svc_client, env);
                if (soap_envelope)
                {
                    soap_body = axiom_soap_envelope_get_body (soap_envelope, env);
                }
                if (soap_body)
                {
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                }
                if (soap_fault)
                {
                    axis2_char_t *soap_reason_text = NULL;
                    axiom_node_t *soap_fault_base_node = NULL;

                    soap_fault_base_node = axiom_soap_fault_get_base_node(soap_fault, env);

                    if (soap_fault_base_node)
                    {
                        axiom_node_t *current_node = NULL;
                        axis2_char_t *current_local_name = NULL;
                        axiom_element_t *current_element = NULL;
                        axis2_bool_t next_sibling = AXIS2_FALSE;

                        current_node = axiom_node_get_first_child(soap_fault_base_node, env);

                        while(axutil_strcmp(current_local_name, "faultstring"))
                        {
                            while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT || next_sibling == AXIS2_TRUE)
                            {
                                current_node = axiom_node_get_next_sibling(current_node, env);
                                next_sibling = AXIS2_FALSE;
                            }
                            current_element = (axiom_element_t*)axiom_node_get_data_element(current_node, env);
                            current_local_name = axiom_element_get_localname(current_element, env);
                            next_sibling = AXIS2_TRUE;
                        }

                        if(current_element)
                        {
                            soap_reason_text = axiom_element_get_text(current_element, env, current_node);
                        }
                    }

                    axiom_soap_fault_detail_t *soap_detail = NULL;
                    axiom_node_t *soap_detail_node = NULL;

                    soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                    if(soap_detail) 
                    {
                        axiom_node_t *soap_detail_base_node = NULL;
                        soap_detail_base_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);

                        if(soap_detail_base_node)
                        {
                            soap_detail_node = axiom_node_get_first_child(soap_detail_base_node, env);
                            /* somehow get an element node */
                            while(soap_detail_node && axiom_node_get_node_type(soap_detail_node, env) != AXIOM_ELEMENT)
                            {
                                soap_detail_node = axiom_node_get_next_sibling(soap_detail_node, env);
                            }
                        }
                    }
                    if(soap_detail_node) 
                    {
                        axis2_char_t *detail_local_name = NULL;
                        axiom_element_t *soap_detail_ele = NULL;
                        
                        soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                       
                        if(soap_detail_ele)
                        {
                            detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                        }

                        if(!detail_local_name)
                        {
                            AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                        {
                            adb_noActiveSessionFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTRESOURCES_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_noActiveSessionFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_noActiveSessionFaultType_t *faultType = adb_noActiveSessionFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_noActiveSessionFault_set_noActiveSessionFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_noActiveSessionFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_noActiveSessionFault_free(adb_obj, env);
                                }
                               
                                fault->NoActiveSessionFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                        {
                            adb_internalServerErrorFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTRESOURCES_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_internalServerErrorFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_internalServerErrorFaultType_t *faultType = adb_internalServerErrorFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_internalServerErrorFault_set_internalServerErrorFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_internalServerErrorFault_free(adb_obj, env);
                                }
                               
                                fault->InternalServerErrorFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                        {
                            adb_invalidOperationFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTRESOURCES_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_invalidOperationFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_invalidOperationFaultType_t *faultType = adb_invalidOperationFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_invalidOperationFault_set_invalidOperationFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_invalidOperationFault_free(adb_obj, env);
                                }
                               
                                fault->InvalidOperationFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                        {
                            adb_invalidParameterFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTRESOURCES_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_invalidParameterFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_invalidParameterFaultType_t *faultType = adb_invalidParameterFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_invalidParameterFault_set_invalidParameterFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_invalidParameterFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_invalidParameterFault_free(adb_obj, env);
                                }
                               
                                fault->InvalidParameterFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                    }
                }
                AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                return NULL;
             }
            
                    if ( NULL == ret_node )
                    {
                        AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                        return (adb_resources_type0_t*)NULL;
                    }
                    ret_val = adb_getContentResourcesResponse_create(env);

                    if(adb_getContentResourcesResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                    {
                        if(ret_val != NULL)
                        {
                            adb_getContentResourcesResponse_free(ret_val, env);
                        }

                        AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the adb_getContentResourcesResponse_deserialize: "
                                                                "This should be due to an invalid XML");
                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_SUCH_ELEMENT, AXIS2_FAILURE);
                        return (adb_resources_type0_t*)NULL;
                    }

                   
                            return adb_getContentResourcesResponse_free_popping_value(ret_val, env);
                       
        }
        
         /**
          * auto generated method signature
          * for "getContentMetadata|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub (axis2_stub_t)
          * @param env environment ( mandatory)
          * @param _contentID0 of the axis2_char_t*
          *
          * @return adb_contentMetadata_type0_t*
          */

         adb_contentMetadata_type0_t* AXIS2_CALL 
         axis2_stub_op_Kolibre_DaisyOnline_getContentMetadata( axis2_stub_t *stub, const axutil_env_t *env,
                                               axis2_char_t* _contentID0,
                                          axis2_stub_Kolibre_DaisyOnline_getContentMetadata_fault *fault)
         {
            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;
            axiom_node_t *ret_node = NULL;

            const axis2_char_t *soap_action = NULL;
            axutil_qname_t *op_qname =  NULL;
            axiom_node_t *payload = NULL;
            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            adb_getContentMetadataResponse_t* ret_val;
            
                            {
                               adb_getContentMetadata_t* wrapper_adb_obj = adb_getContentMetadata_create_with_values(env,
                                        _contentID0);
                                    payload = adb_getContentMetadata_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                                    if (wrapper_adb_obj)
                                    {
                                        adb_getContentMetadata_free(wrapper_adb_obj, env);
                                    }
                            }
                           
            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "options is null in stub");
                return (adb_contentMetadata_type0_t*)NULL;
            }
            soap_act = axis2_options_get_soap_action( options, env );
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/getContentMetadata";
              soap_act = axutil_string_create(env, "/getContentMetadata");
              axis2_options_set_soap_action(options, env, soap_act);    
            }

            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             
            ret_node =  axis2_svc_client_send_receive_with_op_qname( svc_client, env, op_qname, payload);
 
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);    
              
              axis2_options_set_action( options, env, NULL);
            }
            if(soap_act)
            {
              axutil_string_free(soap_act, env);
            }

            
            if (axis2_svc_client_get_last_response_has_fault (svc_client, env) && fault)
            {
                /* so it is a fault, will try to create soap elements */
                axiom_soap_envelope_t *soap_envelope = NULL;
                axiom_soap_body_t *soap_body = NULL;
                axiom_soap_fault_t *soap_fault = NULL;
 
                soap_envelope = axis2_svc_client_get_last_response_soap_envelope (svc_client, env);
                if (soap_envelope)
                {
                    soap_body = axiom_soap_envelope_get_body (soap_envelope, env);
                }
                if (soap_body)
                {
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                }
                if (soap_fault)
                {
                    axis2_char_t *soap_reason_text = NULL;
                    axiom_node_t *soap_fault_base_node = NULL;

                    soap_fault_base_node = axiom_soap_fault_get_base_node(soap_fault, env);

                    if (soap_fault_base_node)
                    {
                        axiom_node_t *current_node = NULL;
                        axis2_char_t *current_local_name = NULL;
                        axiom_element_t *current_element = NULL;
                        axis2_bool_t next_sibling = AXIS2_FALSE;

                        current_node = axiom_node_get_first_child(soap_fault_base_node, env);

                        while(axutil_strcmp(current_local_name, "faultstring"))
                        {
                            while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT || next_sibling == AXIS2_TRUE)
                            {
                                current_node = axiom_node_get_next_sibling(current_node, env);
                                next_sibling = AXIS2_FALSE;
                            }
                            current_element = (axiom_element_t*)axiom_node_get_data_element(current_node, env);
                            current_local_name = axiom_element_get_localname(current_element, env);
                            next_sibling = AXIS2_TRUE;
                        }

                        if(current_element)
                        {
                            soap_reason_text = axiom_element_get_text(current_element, env, current_node);
                        }
                    }

                    axiom_soap_fault_detail_t *soap_detail = NULL;
                    axiom_node_t *soap_detail_node = NULL;

                    soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                    if(soap_detail) 
                    {
                        axiom_node_t *soap_detail_base_node = NULL;
                        soap_detail_base_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);

                        if(soap_detail_base_node)
                        {
                            soap_detail_node = axiom_node_get_first_child(soap_detail_base_node, env);
                            /* somehow get an element node */
                            while(soap_detail_node && axiom_node_get_node_type(soap_detail_node, env) != AXIOM_ELEMENT)
                            {
                                soap_detail_node = axiom_node_get_next_sibling(soap_detail_node, env);
                            }
                        }
                    }
                    if(soap_detail_node) 
                    {
                        axis2_char_t *detail_local_name = NULL;
                        axiom_element_t *soap_detail_ele = NULL;
                        
                        soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                       
                        if(soap_detail_ele)
                        {
                            detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                        }

                        if(!detail_local_name)
                        {
                            AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                        {
                            adb_invalidOperationFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTMETADATA_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_invalidOperationFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_invalidOperationFaultType_t *faultType = adb_invalidOperationFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_invalidOperationFault_set_invalidOperationFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_invalidOperationFault_free(adb_obj, env);
                                }
                               
                                fault->InvalidOperationFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                        {
                            adb_invalidParameterFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTMETADATA_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_invalidParameterFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_invalidParameterFaultType_t *faultType = adb_invalidParameterFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_invalidParameterFault_set_invalidParameterFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_invalidParameterFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_invalidParameterFault_free(adb_obj, env);
                                }
                               
                                fault->InvalidParameterFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                        {
                            adb_noActiveSessionFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTMETADATA_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_noActiveSessionFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_noActiveSessionFaultType_t *faultType = adb_noActiveSessionFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_noActiveSessionFault_set_noActiveSessionFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_noActiveSessionFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_noActiveSessionFault_free(adb_obj, env);
                                }
                               
                                fault->NoActiveSessionFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                        {
                            adb_internalServerErrorFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTMETADATA_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_internalServerErrorFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_internalServerErrorFaultType_t *faultType = adb_internalServerErrorFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_internalServerErrorFault_set_internalServerErrorFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_internalServerErrorFault_free(adb_obj, env);
                                }
                               
                                fault->InternalServerErrorFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                    }
                }
                AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                return NULL;
             }
            
                    if ( NULL == ret_node )
                    {
                        AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                        return (adb_contentMetadata_type0_t*)NULL;
                    }
                    ret_val = adb_getContentMetadataResponse_create(env);

                    if(adb_getContentMetadataResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                    {
                        if(ret_val != NULL)
                        {
                            adb_getContentMetadataResponse_free(ret_val, env);
                        }

                        AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the adb_getContentMetadataResponse_deserialize: "
                                                                "This should be due to an invalid XML");
                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_SUCH_ELEMENT, AXIS2_FAILURE);
                        return (adb_contentMetadata_type0_t*)NULL;
                    }

                   
                            return adb_getContentMetadataResponse_free_popping_value(ret_val, env);
                       
        }
        
         /**
          * auto generated method signature
          * for "markAnnouncementsAsRead|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub (axis2_stub_t)
          * @param env environment ( mandatory)
          * @param _read of the adb_read_type0_t*
          *
          * @return axis2_bool_t
          */

         axis2_bool_t AXIS2_CALL 
         axis2_stub_op_Kolibre_DaisyOnline_markAnnouncementsAsRead( axis2_stub_t *stub, const axutil_env_t *env,
                                               adb_read_type0_t* _read,
                                          axis2_stub_Kolibre_DaisyOnline_markAnnouncementsAsRead_fault *fault)
         {
            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;
            axiom_node_t *ret_node = NULL;

            const axis2_char_t *soap_action = NULL;
            axutil_qname_t *op_qname =  NULL;
            axiom_node_t *payload = NULL;
            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            adb_markAnnouncementsAsReadResponse_t* ret_val;
            
                            {
                               adb_markAnnouncementsAsRead_t* wrapper_adb_obj = adb_markAnnouncementsAsRead_create_with_values(env,
                                        _read);
                                    payload = adb_markAnnouncementsAsRead_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                                    if (wrapper_adb_obj)
                                    {
                                        adb_markAnnouncementsAsRead_free(wrapper_adb_obj, env);
                                    }
                            }
                           
            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "options is null in stub");
                return (axis2_bool_t)NULL;
            }
            soap_act = axis2_options_get_soap_action( options, env );
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/markAnnouncementsAsRead";
              soap_act = axutil_string_create(env, "/markAnnouncementsAsRead");
              axis2_options_set_soap_action(options, env, soap_act);    
            }

            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             
            ret_node =  axis2_svc_client_send_receive_with_op_qname( svc_client, env, op_qname, payload);
 
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);    
              
              axis2_options_set_action( options, env, NULL);
            }
            if(soap_act)
            {
              axutil_string_free(soap_act, env);
            }

            
            if (axis2_svc_client_get_last_response_has_fault (svc_client, env) && fault)
            {
                /* so it is a fault, will try to create soap elements */
                axiom_soap_envelope_t *soap_envelope = NULL;
                axiom_soap_body_t *soap_body = NULL;
                axiom_soap_fault_t *soap_fault = NULL;
 
                soap_envelope = axis2_svc_client_get_last_response_soap_envelope (svc_client, env);
                if (soap_envelope)
                {
                    soap_body = axiom_soap_envelope_get_body (soap_envelope, env);
                }
                if (soap_body)
                {
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                }
                if (soap_fault)
                {
                    axis2_char_t *soap_reason_text = NULL;
                    axiom_node_t *soap_fault_base_node = NULL;

                    soap_fault_base_node = axiom_soap_fault_get_base_node(soap_fault, env);

                    if (soap_fault_base_node)
                    {
                        axiom_node_t *current_node = NULL;
                        axis2_char_t *current_local_name = NULL;
                        axiom_element_t *current_element = NULL;
                        axis2_bool_t next_sibling = AXIS2_FALSE;

                        current_node = axiom_node_get_first_child(soap_fault_base_node, env);

                        while(axutil_strcmp(current_local_name, "faultstring"))
                        {
                            while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT || next_sibling == AXIS2_TRUE)
                            {
                                current_node = axiom_node_get_next_sibling(current_node, env);
                                next_sibling = AXIS2_FALSE;
                            }
                            current_element = (axiom_element_t*)axiom_node_get_data_element(current_node, env);
                            current_local_name = axiom_element_get_localname(current_element, env);
                            next_sibling = AXIS2_TRUE;
                        }

                        if(current_element)
                        {
                            soap_reason_text = axiom_element_get_text(current_element, env, current_node);
                        }
                    }

                    axiom_soap_fault_detail_t *soap_detail = NULL;
                    axiom_node_t *soap_detail_node = NULL;

                    soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                    if(soap_detail) 
                    {
                        axiom_node_t *soap_detail_base_node = NULL;
                        soap_detail_base_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);

                        if(soap_detail_base_node)
                        {
                            soap_detail_node = axiom_node_get_first_child(soap_detail_base_node, env);
                            /* somehow get an element node */
                            while(soap_detail_node && axiom_node_get_node_type(soap_detail_node, env) != AXIOM_ELEMENT)
                            {
                                soap_detail_node = axiom_node_get_next_sibling(soap_detail_node, env);
                            }
                        }
                    }
                    if(soap_detail_node) 
                    {
                        axis2_char_t *detail_local_name = NULL;
                        axiom_element_t *soap_detail_ele = NULL;
                        
                        soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                       
                        if(soap_detail_ele)
                        {
                            detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                        }

                        if(!detail_local_name)
                        {
                            AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                        {
                            adb_noActiveSessionFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_MARKANNOUNCEMENTSASREAD_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_noActiveSessionFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_noActiveSessionFaultType_t *faultType = adb_noActiveSessionFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_noActiveSessionFault_set_noActiveSessionFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_noActiveSessionFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_noActiveSessionFault_free(adb_obj, env);
                                }
                               
                                fault->NoActiveSessionFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "operationNotSupportedFault"))
                        {
                            adb_operationNotSupportedFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_MARKANNOUNCEMENTSASREAD_FAULT_OPERATIONNOTSUPPORTEDFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_operationNotSupportedFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_operationNotSupportedFaultType_t *faultType = adb_operationNotSupportedFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_operationNotSupportedFault_set_operationNotSupportedFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_operationNotSupportedFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_operationNotSupportedFault_free(adb_obj, env);
                                }
                               
                                fault->OperationNotSupportedFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                        {
                            adb_invalidParameterFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_MARKANNOUNCEMENTSASREAD_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_invalidParameterFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_invalidParameterFaultType_t *faultType = adb_invalidParameterFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_invalidParameterFault_set_invalidParameterFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_invalidParameterFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_invalidParameterFault_free(adb_obj, env);
                                }
                               
                                fault->InvalidParameterFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                        {
                            adb_invalidOperationFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_MARKANNOUNCEMENTSASREAD_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_invalidOperationFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_invalidOperationFaultType_t *faultType = adb_invalidOperationFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_invalidOperationFault_set_invalidOperationFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_invalidOperationFault_free(adb_obj, env);
                                }
                               
                                fault->InvalidOperationFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                        {
                            adb_internalServerErrorFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_MARKANNOUNCEMENTSASREAD_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_internalServerErrorFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_internalServerErrorFaultType_t *faultType = adb_internalServerErrorFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_internalServerErrorFault_set_internalServerErrorFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_internalServerErrorFault_free(adb_obj, env);
                                }
                               
                                fault->InternalServerErrorFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                    }
                }
                AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                return (axis2_bool_t)NULL;
             }
            
                    if ( NULL == ret_node )
                    {
                        AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                        return (axis2_bool_t)NULL;
                    }
                    ret_val = adb_markAnnouncementsAsReadResponse_create(env);

                    if(adb_markAnnouncementsAsReadResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                    {
                        if(ret_val != NULL)
                        {
                            adb_markAnnouncementsAsReadResponse_free(ret_val, env);
                        }

                        AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the adb_markAnnouncementsAsReadResponse_deserialize: "
                                                                "This should be due to an invalid XML");
                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_SUCH_ELEMENT, AXIS2_FAILURE);
                        return (axis2_bool_t)NULL;
                    }

                   
                            return adb_markAnnouncementsAsReadResponse_free_popping_value(ret_val, env);
                       
        }
        
         /**
          * auto generated method signature
          * for "getBookmarks|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub (axis2_stub_t)
          * @param env environment ( mandatory)
          * @param _contentID1 of the axis2_char_t*
          *
          * @return adb_bookmarkSet_type0_t*
          */

         adb_bookmarkSet_type0_t* AXIS2_CALL 
         axis2_stub_op_Kolibre_DaisyOnline_getBookmarks( axis2_stub_t *stub, const axutil_env_t *env,
                                               axis2_char_t* _contentID1,
                                          axis2_stub_Kolibre_DaisyOnline_getBookmarks_fault *fault)
         {
            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;
            axiom_node_t *ret_node = NULL;

            const axis2_char_t *soap_action = NULL;
            axutil_qname_t *op_qname =  NULL;
            axiom_node_t *payload = NULL;
            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            adb_getBookmarksResponse_t* ret_val;
            
                            {
                               adb_getBookmarks_t* wrapper_adb_obj = adb_getBookmarks_create_with_values(env,
                                        _contentID1);
                                    payload = adb_getBookmarks_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                                    if (wrapper_adb_obj)
                                    {
                                        adb_getBookmarks_free(wrapper_adb_obj, env);
                                    }
                            }
                           
            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "options is null in stub");
                return (adb_bookmarkSet_type0_t*)NULL;
            }
            soap_act = axis2_options_get_soap_action( options, env );
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/getBookmarks";
              soap_act = axutil_string_create(env, "/getBookmarks");
              axis2_options_set_soap_action(options, env, soap_act);    
            }

            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             
            ret_node =  axis2_svc_client_send_receive_with_op_qname( svc_client, env, op_qname, payload);
 
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);    
              
              axis2_options_set_action( options, env, NULL);
            }
            if(soap_act)
            {
              axutil_string_free(soap_act, env);
            }

            
            if (axis2_svc_client_get_last_response_has_fault (svc_client, env) && fault)
            {
                /* so it is a fault, will try to create soap elements */
                axiom_soap_envelope_t *soap_envelope = NULL;
                axiom_soap_body_t *soap_body = NULL;
                axiom_soap_fault_t *soap_fault = NULL;
 
                soap_envelope = axis2_svc_client_get_last_response_soap_envelope (svc_client, env);
                if (soap_envelope)
                {
                    soap_body = axiom_soap_envelope_get_body (soap_envelope, env);
                }
                if (soap_body)
                {
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                }
                if (soap_fault)
                {
                    axis2_char_t *soap_reason_text = NULL;
                    axiom_node_t *soap_fault_base_node = NULL;

                    soap_fault_base_node = axiom_soap_fault_get_base_node(soap_fault, env);

                    if (soap_fault_base_node)
                    {
                        axiom_node_t *current_node = NULL;
                        axis2_char_t *current_local_name = NULL;
                        axiom_element_t *current_element = NULL;
                        axis2_bool_t next_sibling = AXIS2_FALSE;

                        current_node = axiom_node_get_first_child(soap_fault_base_node, env);

                        while(axutil_strcmp(current_local_name, "faultstring"))
                        {
                            while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT || next_sibling == AXIS2_TRUE)
                            {
                                current_node = axiom_node_get_next_sibling(current_node, env);
                                next_sibling = AXIS2_FALSE;
                            }
                            current_element = (axiom_element_t*)axiom_node_get_data_element(current_node, env);
                            current_local_name = axiom_element_get_localname(current_element, env);
                            next_sibling = AXIS2_TRUE;
                        }

                        if(current_element)
                        {
                            soap_reason_text = axiom_element_get_text(current_element, env, current_node);
                        }
                    }

                    axiom_soap_fault_detail_t *soap_detail = NULL;
                    axiom_node_t *soap_detail_node = NULL;

                    soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                    if(soap_detail) 
                    {
                        axiom_node_t *soap_detail_base_node = NULL;
                        soap_detail_base_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);

                        if(soap_detail_base_node)
                        {
                            soap_detail_node = axiom_node_get_first_child(soap_detail_base_node, env);
                            /* somehow get an element node */
                            while(soap_detail_node && axiom_node_get_node_type(soap_detail_node, env) != AXIOM_ELEMENT)
                            {
                                soap_detail_node = axiom_node_get_next_sibling(soap_detail_node, env);
                            }
                        }
                    }
                    if(soap_detail_node) 
                    {
                        axis2_char_t *detail_local_name = NULL;
                        axiom_element_t *soap_detail_ele = NULL;
                        
                        soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                       
                        if(soap_detail_ele)
                        {
                            detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                        }

                        if(!detail_local_name)
                        {
                            AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "operationNotSupportedFault"))
                        {
                            adb_operationNotSupportedFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETBOOKMARKS_FAULT_OPERATIONNOTSUPPORTEDFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_operationNotSupportedFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_operationNotSupportedFaultType_t *faultType = adb_operationNotSupportedFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_operationNotSupportedFault_set_operationNotSupportedFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_operationNotSupportedFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_operationNotSupportedFault_free(adb_obj, env);
                                }
                               
                                fault->OperationNotSupportedFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                        {
                            adb_internalServerErrorFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETBOOKMARKS_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_internalServerErrorFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_internalServerErrorFaultType_t *faultType = adb_internalServerErrorFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_internalServerErrorFault_set_internalServerErrorFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_internalServerErrorFault_free(adb_obj, env);
                                }
                               
                                fault->InternalServerErrorFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                        {
                            adb_invalidParameterFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETBOOKMARKS_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_invalidParameterFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_invalidParameterFaultType_t *faultType = adb_invalidParameterFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_invalidParameterFault_set_invalidParameterFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_invalidParameterFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_invalidParameterFault_free(adb_obj, env);
                                }
                               
                                fault->InvalidParameterFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                        {
                            adb_invalidOperationFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETBOOKMARKS_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_invalidOperationFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_invalidOperationFaultType_t *faultType = adb_invalidOperationFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_invalidOperationFault_set_invalidOperationFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_invalidOperationFault_free(adb_obj, env);
                                }
                               
                                fault->InvalidOperationFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                        {
                            adb_noActiveSessionFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETBOOKMARKS_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_noActiveSessionFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_noActiveSessionFaultType_t *faultType = adb_noActiveSessionFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_noActiveSessionFault_set_noActiveSessionFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_noActiveSessionFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_noActiveSessionFault_free(adb_obj, env);
                                }
                               
                                fault->NoActiveSessionFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                    }
                }
                AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                return NULL;
             }
            
                    if ( NULL == ret_node )
                    {
                        AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                        return (adb_bookmarkSet_type0_t*)NULL;
                    }
                    ret_val = adb_getBookmarksResponse_create(env);

                    if(adb_getBookmarksResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                    {
                        if(ret_val != NULL)
                        {
                            adb_getBookmarksResponse_free(ret_val, env);
                        }

                        AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the adb_getBookmarksResponse_deserialize: "
                                                                "This should be due to an invalid XML");
                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_SUCH_ELEMENT, AXIS2_FAILURE);
                        return (adb_bookmarkSet_type0_t*)NULL;
                    }

                   
                            return adb_getBookmarksResponse_free_popping_value(ret_val, env);
                       
        }
        
         /**
          * auto generated method signature
          * for "getServiceAttributes|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub (axis2_stub_t)
          * @param env environment ( mandatory)
          *
          * @return adb_serviceAttributes_type0_t*
          */

         adb_serviceAttributes_type0_t* AXIS2_CALL 
         axis2_stub_op_Kolibre_DaisyOnline_getServiceAttributes( axis2_stub_t *stub, const axutil_env_t *env,
                                          axis2_stub_Kolibre_DaisyOnline_getServiceAttributes_fault *fault)
         {
            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;
            axiom_node_t *ret_node = NULL;

            const axis2_char_t *soap_action = NULL;
            axutil_qname_t *op_qname =  NULL;
            axiom_node_t *payload = NULL;
            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            adb_getServiceAttributesResponse_t* ret_val;
            
                            {
                               adb_getServiceAttributes_t* wrapper_adb_obj = adb_getServiceAttributes_create_with_values(env);
                                    payload = adb_getServiceAttributes_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                                    if (wrapper_adb_obj)
                                    {
                                        adb_getServiceAttributes_free(wrapper_adb_obj, env);
                                    }
                            }
                           
            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "options is null in stub");
                return (adb_serviceAttributes_type0_t*)NULL;
            }
            soap_act = axis2_options_get_soap_action( options, env );
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/getServiceAttributes";
              soap_act = axutil_string_create(env, "/getServiceAttributes");
              axis2_options_set_soap_action(options, env, soap_act);    
            }

            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             
            ret_node =  axis2_svc_client_send_receive_with_op_qname( svc_client, env, op_qname, payload);
 
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);    
              
              axis2_options_set_action( options, env, NULL);
            }
            if(soap_act)
            {
              axutil_string_free(soap_act, env);
            }

            
            if (axis2_svc_client_get_last_response_has_fault (svc_client, env) && fault)
            {
                /* so it is a fault, will try to create soap elements */
                axiom_soap_envelope_t *soap_envelope = NULL;
                axiom_soap_body_t *soap_body = NULL;
                axiom_soap_fault_t *soap_fault = NULL;
 
                soap_envelope = axis2_svc_client_get_last_response_soap_envelope (svc_client, env);
                if (soap_envelope)
                {
                    soap_body = axiom_soap_envelope_get_body (soap_envelope, env);
                }
                if (soap_body)
                {
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                }
                if (soap_fault)
                {
                    axis2_char_t *soap_reason_text = NULL;
                    axiom_node_t *soap_fault_base_node = NULL;

                    soap_fault_base_node = axiom_soap_fault_get_base_node(soap_fault, env);

                    if (soap_fault_base_node)
                    {
                        axiom_node_t *current_node = NULL;
                        axis2_char_t *current_local_name = NULL;
                        axiom_element_t *current_element = NULL;
                        axis2_bool_t next_sibling = AXIS2_FALSE;

                        current_node = axiom_node_get_first_child(soap_fault_base_node, env);

                        while(axutil_strcmp(current_local_name, "faultstring"))
                        {
                            while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT || next_sibling == AXIS2_TRUE)
                            {
                                current_node = axiom_node_get_next_sibling(current_node, env);
                                next_sibling = AXIS2_FALSE;
                            }
                            current_element = (axiom_element_t*)axiom_node_get_data_element(current_node, env);
                            current_local_name = axiom_element_get_localname(current_element, env);
                            next_sibling = AXIS2_TRUE;
                        }

                        if(current_element)
                        {
                            soap_reason_text = axiom_element_get_text(current_element, env, current_node);
                        }
                    }

                    axiom_soap_fault_detail_t *soap_detail = NULL;
                    axiom_node_t *soap_detail_node = NULL;

                    soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                    if(soap_detail) 
                    {
                        axiom_node_t *soap_detail_base_node = NULL;
                        soap_detail_base_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);

                        if(soap_detail_base_node)
                        {
                            soap_detail_node = axiom_node_get_first_child(soap_detail_base_node, env);
                            /* somehow get an element node */
                            while(soap_detail_node && axiom_node_get_node_type(soap_detail_node, env) != AXIOM_ELEMENT)
                            {
                                soap_detail_node = axiom_node_get_next_sibling(soap_detail_node, env);
                            }
                        }
                    }
                    if(soap_detail_node) 
                    {
                        axis2_char_t *detail_local_name = NULL;
                        axiom_element_t *soap_detail_ele = NULL;
                        
                        soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                       
                        if(soap_detail_ele)
                        {
                            detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                        }

                        if(!detail_local_name)
                        {
                            AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                        {
                            adb_invalidOperationFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEATTRIBUTES_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_invalidOperationFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_invalidOperationFaultType_t *faultType = adb_invalidOperationFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_invalidOperationFault_set_invalidOperationFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_invalidOperationFault_free(adb_obj, env);
                                }
                               
                                fault->InvalidOperationFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                        {
                            adb_internalServerErrorFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEATTRIBUTES_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_internalServerErrorFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_internalServerErrorFaultType_t *faultType = adb_internalServerErrorFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_internalServerErrorFault_set_internalServerErrorFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_internalServerErrorFault_free(adb_obj, env);
                                }
                               
                                fault->InternalServerErrorFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                        {
                            adb_noActiveSessionFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEATTRIBUTES_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_noActiveSessionFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_noActiveSessionFaultType_t *faultType = adb_noActiveSessionFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_noActiveSessionFault_set_noActiveSessionFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_noActiveSessionFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_noActiveSessionFault_free(adb_obj, env);
                                }
                               
                                fault->NoActiveSessionFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                    }
                }
                AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                return NULL;
             }
            
                    if ( NULL == ret_node )
                    {
                        AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                        return (adb_serviceAttributes_type0_t*)NULL;
                    }
                    ret_val = adb_getServiceAttributesResponse_create(env);

                    if(adb_getServiceAttributesResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                    {
                        if(ret_val != NULL)
                        {
                            adb_getServiceAttributesResponse_free(ret_val, env);
                        }

                        AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the adb_getServiceAttributesResponse_deserialize: "
                                                                "This should be due to an invalid XML");
                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_SUCH_ELEMENT, AXIS2_FAILURE);
                        return (adb_serviceAttributes_type0_t*)NULL;
                    }

                   
                            return adb_getServiceAttributesResponse_free_popping_value(ret_val, env);
                       
        }
        
         /**
          * auto generated method signature
          * for "setBookmarks|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub (axis2_stub_t)
          * @param env environment ( mandatory)
          * @param _contentID2 of the axis2_char_t*
          * @param _bookmarkSet3 of the adb_bookmarkSet_type0_t*
          *
          * @return axis2_bool_t
          */

         axis2_bool_t AXIS2_CALL 
         axis2_stub_op_Kolibre_DaisyOnline_setBookmarks( axis2_stub_t *stub, const axutil_env_t *env,
                                               axis2_char_t* _contentID2,
                                               adb_bookmarkSet_type0_t* _bookmarkSet3,
                                          axis2_stub_Kolibre_DaisyOnline_setBookmarks_fault *fault)
         {
            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;
            axiom_node_t *ret_node = NULL;

            const axis2_char_t *soap_action = NULL;
            axutil_qname_t *op_qname =  NULL;
            axiom_node_t *payload = NULL;
            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            adb_setBookmarksResponse_t* ret_val;
            
                            {
                               adb_setBookmarks_t* wrapper_adb_obj = adb_setBookmarks_create_with_values(env,
                                        _contentID2,
                                        _bookmarkSet3);
                                    payload = adb_setBookmarks_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                                    if (wrapper_adb_obj)
                                    {
                                        adb_setBookmarks_free(wrapper_adb_obj, env);
                                    }
                            }
                           
            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "options is null in stub");
                return (axis2_bool_t)NULL;
            }
            soap_act = axis2_options_get_soap_action( options, env );
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/setBookmarks";
              soap_act = axutil_string_create(env, "/setBookmarks");
              axis2_options_set_soap_action(options, env, soap_act);    
            }

            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             
            ret_node =  axis2_svc_client_send_receive_with_op_qname( svc_client, env, op_qname, payload);
 
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);    
              
              axis2_options_set_action( options, env, NULL);
            }
            if(soap_act)
            {
              axutil_string_free(soap_act, env);
            }

            
            if (axis2_svc_client_get_last_response_has_fault (svc_client, env) && fault)
            {
                /* so it is a fault, will try to create soap elements */
                axiom_soap_envelope_t *soap_envelope = NULL;
                axiom_soap_body_t *soap_body = NULL;
                axiom_soap_fault_t *soap_fault = NULL;
 
                soap_envelope = axis2_svc_client_get_last_response_soap_envelope (svc_client, env);
                if (soap_envelope)
                {
                    soap_body = axiom_soap_envelope_get_body (soap_envelope, env);
                }
                if (soap_body)
                {
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                }
                if (soap_fault)
                {
                    axis2_char_t *soap_reason_text = NULL;
                    axiom_node_t *soap_fault_base_node = NULL;

                    soap_fault_base_node = axiom_soap_fault_get_base_node(soap_fault, env);

                    if (soap_fault_base_node)
                    {
                        axiom_node_t *current_node = NULL;
                        axis2_char_t *current_local_name = NULL;
                        axiom_element_t *current_element = NULL;
                        axis2_bool_t next_sibling = AXIS2_FALSE;

                        current_node = axiom_node_get_first_child(soap_fault_base_node, env);

                        while(axutil_strcmp(current_local_name, "faultstring"))
                        {
                            while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT || next_sibling == AXIS2_TRUE)
                            {
                                current_node = axiom_node_get_next_sibling(current_node, env);
                                next_sibling = AXIS2_FALSE;
                            }
                            current_element = (axiom_element_t*)axiom_node_get_data_element(current_node, env);
                            current_local_name = axiom_element_get_localname(current_element, env);
                            next_sibling = AXIS2_TRUE;
                        }

                        if(current_element)
                        {
                            soap_reason_text = axiom_element_get_text(current_element, env, current_node);
                        }
                    }

                    axiom_soap_fault_detail_t *soap_detail = NULL;
                    axiom_node_t *soap_detail_node = NULL;

                    soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                    if(soap_detail) 
                    {
                        axiom_node_t *soap_detail_base_node = NULL;
                        soap_detail_base_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);

                        if(soap_detail_base_node)
                        {
                            soap_detail_node = axiom_node_get_first_child(soap_detail_base_node, env);
                            /* somehow get an element node */
                            while(soap_detail_node && axiom_node_get_node_type(soap_detail_node, env) != AXIOM_ELEMENT)
                            {
                                soap_detail_node = axiom_node_get_next_sibling(soap_detail_node, env);
                            }
                        }
                    }
                    if(soap_detail_node) 
                    {
                        axis2_char_t *detail_local_name = NULL;
                        axiom_element_t *soap_detail_ele = NULL;
                        
                        soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                       
                        if(soap_detail_ele)
                        {
                            detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                        }

                        if(!detail_local_name)
                        {
                            AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                        {
                            adb_invalidOperationFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_SETBOOKMARKS_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_invalidOperationFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_invalidOperationFaultType_t *faultType = adb_invalidOperationFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_invalidOperationFault_set_invalidOperationFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_invalidOperationFault_free(adb_obj, env);
                                }
                               
                                fault->InvalidOperationFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                        {
                            adb_invalidParameterFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_SETBOOKMARKS_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_invalidParameterFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_invalidParameterFaultType_t *faultType = adb_invalidParameterFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_invalidParameterFault_set_invalidParameterFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_invalidParameterFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_invalidParameterFault_free(adb_obj, env);
                                }
                               
                                fault->InvalidParameterFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "operationNotSupportedFault"))
                        {
                            adb_operationNotSupportedFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_SETBOOKMARKS_FAULT_OPERATIONNOTSUPPORTEDFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_operationNotSupportedFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_operationNotSupportedFaultType_t *faultType = adb_operationNotSupportedFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_operationNotSupportedFault_set_operationNotSupportedFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_operationNotSupportedFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_operationNotSupportedFault_free(adb_obj, env);
                                }
                               
                                fault->OperationNotSupportedFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                        {
                            adb_noActiveSessionFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_SETBOOKMARKS_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_noActiveSessionFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_noActiveSessionFaultType_t *faultType = adb_noActiveSessionFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_noActiveSessionFault_set_noActiveSessionFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_noActiveSessionFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_noActiveSessionFault_free(adb_obj, env);
                                }
                               
                                fault->NoActiveSessionFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                        {
                            adb_internalServerErrorFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_SETBOOKMARKS_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_internalServerErrorFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_internalServerErrorFaultType_t *faultType = adb_internalServerErrorFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_internalServerErrorFault_set_internalServerErrorFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_internalServerErrorFault_free(adb_obj, env);
                                }
                               
                                fault->InternalServerErrorFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                    }
                }
                AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                return (axis2_bool_t)NULL;
             }
            
                    if ( NULL == ret_node )
                    {
                        AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                        return (axis2_bool_t)NULL;
                    }
                    ret_val = adb_setBookmarksResponse_create(env);

                    if(adb_setBookmarksResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                    {
                        if(ret_val != NULL)
                        {
                            adb_setBookmarksResponse_free(ret_val, env);
                        }

                        AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the adb_setBookmarksResponse_deserialize: "
                                                                "This should be due to an invalid XML");
                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_SUCH_ELEMENT, AXIS2_FAILURE);
                        return (axis2_bool_t)NULL;
                    }

                   
                            return adb_setBookmarksResponse_free_popping_value(ret_val, env);
                       
        }
        
         /**
          * auto generated method signature
          * for "logOn|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub (axis2_stub_t)
          * @param env environment ( mandatory)
          * @param _username of the axis2_char_t*
          * @param _password of the axis2_char_t*
          *
          * @return axis2_bool_t
          */

         axis2_bool_t AXIS2_CALL 
         axis2_stub_op_Kolibre_DaisyOnline_logOn( axis2_stub_t *stub, const axutil_env_t *env,
                                               axis2_char_t* _username,
                                               axis2_char_t* _password,
                                          axis2_stub_Kolibre_DaisyOnline_logOn_fault *fault)
         {
            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;
            axiom_node_t *ret_node = NULL;

            const axis2_char_t *soap_action = NULL;
            axutil_qname_t *op_qname =  NULL;
            axiom_node_t *payload = NULL;
            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            adb_logOnResponse_t* ret_val;
            
                            {
                               adb_logOn_t* wrapper_adb_obj = adb_logOn_create_with_values(env,
                                        _username,
                                        _password);
                                    payload = adb_logOn_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                                    if (wrapper_adb_obj)
                                    {
                                        adb_logOn_free(wrapper_adb_obj, env);
                                    }
                            }
                           
            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "options is null in stub");
                return (axis2_bool_t)NULL;
            }
            soap_act = axis2_options_get_soap_action( options, env );
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/logOn";
              soap_act = axutil_string_create(env, "/logOn");
              axis2_options_set_soap_action(options, env, soap_act);    
            }

            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             
            ret_node =  axis2_svc_client_send_receive_with_op_qname( svc_client, env, op_qname, payload);
 
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);    
              
              axis2_options_set_action( options, env, NULL);
            }
            if(soap_act)
            {
              axutil_string_free(soap_act, env);
            }

            
            if (axis2_svc_client_get_last_response_has_fault (svc_client, env) && fault)
            {
                /* so it is a fault, will try to create soap elements */
                axiom_soap_envelope_t *soap_envelope = NULL;
                axiom_soap_body_t *soap_body = NULL;
                axiom_soap_fault_t *soap_fault = NULL;
 
                soap_envelope = axis2_svc_client_get_last_response_soap_envelope (svc_client, env);
                if (soap_envelope)
                {
                    soap_body = axiom_soap_envelope_get_body (soap_envelope, env);
                }
                if (soap_body)
                {
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                }
                if (soap_fault)
                {
                    axis2_char_t *soap_reason_text = NULL;
                    axiom_node_t *soap_fault_base_node = NULL;

                    soap_fault_base_node = axiom_soap_fault_get_base_node(soap_fault, env);

                    if (soap_fault_base_node)
                    {
                        axiom_node_t *current_node = NULL;
                        axis2_char_t *current_local_name = NULL;
                        axiom_element_t *current_element = NULL;
                        axis2_bool_t next_sibling = AXIS2_FALSE;

                        current_node = axiom_node_get_first_child(soap_fault_base_node, env);

                        while(axutil_strcmp(current_local_name, "faultstring"))
                        {
                            while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT || next_sibling == AXIS2_TRUE)
                            {
                                current_node = axiom_node_get_next_sibling(current_node, env);
                                next_sibling = AXIS2_FALSE;
                            }
                            current_element = (axiom_element_t*)axiom_node_get_data_element(current_node, env);
                            current_local_name = axiom_element_get_localname(current_element, env);
                            next_sibling = AXIS2_TRUE;
                        }

                        if(current_element)
                        {
                            soap_reason_text = axiom_element_get_text(current_element, env, current_node);
                        }
                    }

                    axiom_soap_fault_detail_t *soap_detail = NULL;
                    axiom_node_t *soap_detail_node = NULL;

                    soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                    if(soap_detail) 
                    {
                        axiom_node_t *soap_detail_base_node = NULL;
                        soap_detail_base_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);

                        if(soap_detail_base_node)
                        {
                            soap_detail_node = axiom_node_get_first_child(soap_detail_base_node, env);
                            /* somehow get an element node */
                            while(soap_detail_node && axiom_node_get_node_type(soap_detail_node, env) != AXIOM_ELEMENT)
                            {
                                soap_detail_node = axiom_node_get_next_sibling(soap_detail_node, env);
                            }
                        }
                    }
                    if(soap_detail_node) 
                    {
                        axis2_char_t *detail_local_name = NULL;
                        axiom_element_t *soap_detail_ele = NULL;
                        
                        soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                       
                        if(soap_detail_ele)
                        {
                            detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                        }

                        if(!detail_local_name)
                        {
                            AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                        {
                            adb_internalServerErrorFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_LOGON_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_internalServerErrorFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_internalServerErrorFaultType_t *faultType = adb_internalServerErrorFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_internalServerErrorFault_set_internalServerErrorFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_internalServerErrorFault_free(adb_obj, env);
                                }
                               
                                fault->InternalServerErrorFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                        {
                            adb_invalidOperationFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_LOGON_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_invalidOperationFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_invalidOperationFaultType_t *faultType = adb_invalidOperationFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_invalidOperationFault_set_invalidOperationFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_invalidOperationFault_free(adb_obj, env);
                                }
                               
                                fault->InvalidOperationFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                    }
                }
                AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                return (axis2_bool_t)NULL;
             }
            
                    if ( NULL == ret_node )
                    {
                        AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                        return (axis2_bool_t)NULL;
                    }
                    ret_val = adb_logOnResponse_create(env);

                    if(adb_logOnResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                    {
                        if(ret_val != NULL)
                        {
                            adb_logOnResponse_free(ret_val, env);
                        }

                        AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the adb_logOnResponse_deserialize: "
                                                                "This should be due to an invalid XML");
                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_SUCH_ELEMENT, AXIS2_FAILURE);
                        return (axis2_bool_t)NULL;
                    }

                   
                            return adb_logOnResponse_free_popping_value(ret_val, env);
                       
        }
        
         /**
          * auto generated method signature
          * for "getContentList|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub (axis2_stub_t)
          * @param env environment ( mandatory)
          * @param _id of the axis2_char_t*
          * @param _firstItem of the int
          * @param _lastItem of the int
          *
          * @return adb_contentList_type0_t*
          */

         adb_contentList_type0_t* AXIS2_CALL 
         axis2_stub_op_Kolibre_DaisyOnline_getContentList( axis2_stub_t *stub, const axutil_env_t *env,
                                               axis2_char_t* _id,
                                               int _firstItem,
                                               int _lastItem,
                                          axis2_stub_Kolibre_DaisyOnline_getContentList_fault *fault)
         {
            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;
            axiom_node_t *ret_node = NULL;

            const axis2_char_t *soap_action = NULL;
            axutil_qname_t *op_qname =  NULL;
            axiom_node_t *payload = NULL;
            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            adb_getContentListResponse_t* ret_val;
            
                            {
                               adb_getContentList_t* wrapper_adb_obj = adb_getContentList_create_with_values(env,
                                        _id,
                                        _firstItem,
                                        _lastItem);
                                    payload = adb_getContentList_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                                    if (wrapper_adb_obj)
                                    {
                                        adb_getContentList_free(wrapper_adb_obj, env);
                                    }
                            }
                           
            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "options is null in stub");
                return (adb_contentList_type0_t*)NULL;
            }
            soap_act = axis2_options_get_soap_action( options, env );
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/getContentList";
              soap_act = axutil_string_create(env, "/getContentList");
              axis2_options_set_soap_action(options, env, soap_act);    
            }

            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             
            ret_node =  axis2_svc_client_send_receive_with_op_qname( svc_client, env, op_qname, payload);
 
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);    
              
              axis2_options_set_action( options, env, NULL);
            }
            if(soap_act)
            {
              axutil_string_free(soap_act, env);
            }

            
            if (axis2_svc_client_get_last_response_has_fault (svc_client, env) && fault)
            {
                /* so it is a fault, will try to create soap elements */
                axiom_soap_envelope_t *soap_envelope = NULL;
                axiom_soap_body_t *soap_body = NULL;
                axiom_soap_fault_t *soap_fault = NULL;
 
                soap_envelope = axis2_svc_client_get_last_response_soap_envelope (svc_client, env);
                if (soap_envelope)
                {
                    soap_body = axiom_soap_envelope_get_body (soap_envelope, env);
                }
                if (soap_body)
                {
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                }
                if (soap_fault)
                {
                    axis2_char_t *soap_reason_text = NULL;
                    axiom_node_t *soap_fault_base_node = NULL;

                    soap_fault_base_node = axiom_soap_fault_get_base_node(soap_fault, env);

                    if (soap_fault_base_node)
                    {
                        axiom_node_t *current_node = NULL;
                        axis2_char_t *current_local_name = NULL;
                        axiom_element_t *current_element = NULL;
                        axis2_bool_t next_sibling = AXIS2_FALSE;

                        current_node = axiom_node_get_first_child(soap_fault_base_node, env);

                        while(axutil_strcmp(current_local_name, "faultstring"))
                        {
                            while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT || next_sibling == AXIS2_TRUE)
                            {
                                current_node = axiom_node_get_next_sibling(current_node, env);
                                next_sibling = AXIS2_FALSE;
                            }
                            current_element = (axiom_element_t*)axiom_node_get_data_element(current_node, env);
                            current_local_name = axiom_element_get_localname(current_element, env);
                            next_sibling = AXIS2_TRUE;
                        }

                        if(current_element)
                        {
                            soap_reason_text = axiom_element_get_text(current_element, env, current_node);
                        }
                    }

                    axiom_soap_fault_detail_t *soap_detail = NULL;
                    axiom_node_t *soap_detail_node = NULL;

                    soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                    if(soap_detail) 
                    {
                        axiom_node_t *soap_detail_base_node = NULL;
                        soap_detail_base_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);

                        if(soap_detail_base_node)
                        {
                            soap_detail_node = axiom_node_get_first_child(soap_detail_base_node, env);
                            /* somehow get an element node */
                            while(soap_detail_node && axiom_node_get_node_type(soap_detail_node, env) != AXIOM_ELEMENT)
                            {
                                soap_detail_node = axiom_node_get_next_sibling(soap_detail_node, env);
                            }
                        }
                    }
                    if(soap_detail_node) 
                    {
                        axis2_char_t *detail_local_name = NULL;
                        axiom_element_t *soap_detail_ele = NULL;
                        
                        soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                       
                        if(soap_detail_ele)
                        {
                            detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                        }

                        if(!detail_local_name)
                        {
                            AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                        {
                            adb_invalidParameterFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTLIST_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_invalidParameterFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_invalidParameterFaultType_t *faultType = adb_invalidParameterFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_invalidParameterFault_set_invalidParameterFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_invalidParameterFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_invalidParameterFault_free(adb_obj, env);
                                }
                               
                                fault->InvalidParameterFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                        {
                            adb_noActiveSessionFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTLIST_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_noActiveSessionFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_noActiveSessionFaultType_t *faultType = adb_noActiveSessionFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_noActiveSessionFault_set_noActiveSessionFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_noActiveSessionFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_noActiveSessionFault_free(adb_obj, env);
                                }
                               
                                fault->NoActiveSessionFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                        {
                            adb_invalidOperationFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTLIST_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_invalidOperationFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_invalidOperationFaultType_t *faultType = adb_invalidOperationFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_invalidOperationFault_set_invalidOperationFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_invalidOperationFault_free(adb_obj, env);
                                }
                               
                                fault->InvalidOperationFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                        {
                            adb_internalServerErrorFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTLIST_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_internalServerErrorFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_internalServerErrorFaultType_t *faultType = adb_internalServerErrorFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_internalServerErrorFault_set_internalServerErrorFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_internalServerErrorFault_free(adb_obj, env);
                                }
                               
                                fault->InternalServerErrorFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                    }
                }
                AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                return NULL;
             }
            
                    if ( NULL == ret_node )
                    {
                        AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                        return (adb_contentList_type0_t*)NULL;
                    }
                    ret_val = adb_getContentListResponse_create(env);

                    if(adb_getContentListResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                    {
                        if(ret_val != NULL)
                        {
                            adb_getContentListResponse_free(ret_val, env);
                        }

                        AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the adb_getContentListResponse_deserialize: "
                                                                "This should be due to an invalid XML");
                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_SUCH_ELEMENT, AXIS2_FAILURE);
                        return (adb_contentList_type0_t*)NULL;
                    }

                   
                            return adb_getContentListResponse_free_popping_value(ret_val, env);
                       
        }
        
         /**
          * auto generated method signature
          * for "getQuestions|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub (axis2_stub_t)
          * @param env environment ( mandatory)
          * @param _userResponses of the adb_userResponses_type0_t*
          *
          * @return adb_questions_type0_t*
          */

         adb_questions_type0_t* AXIS2_CALL 
         axis2_stub_op_Kolibre_DaisyOnline_getQuestions( axis2_stub_t *stub, const axutil_env_t *env,
                                               adb_userResponses_type0_t* _userResponses,
                                          axis2_stub_Kolibre_DaisyOnline_getQuestions_fault *fault)
         {
            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;
            axiom_node_t *ret_node = NULL;

            const axis2_char_t *soap_action = NULL;
            axutil_qname_t *op_qname =  NULL;
            axiom_node_t *payload = NULL;
            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            adb_getQuestionsResponse_t* ret_val;
            
                            {
                               adb_getQuestions_t* wrapper_adb_obj = adb_getQuestions_create_with_values(env,
                                        _userResponses);
                                    payload = adb_getQuestions_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                                    if (wrapper_adb_obj)
                                    {
                                        adb_getQuestions_free(wrapper_adb_obj, env);
                                    }
                            }
                           
            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "options is null in stub");
                return (adb_questions_type0_t*)NULL;
            }
            soap_act = axis2_options_get_soap_action( options, env );
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/getQuestions";
              soap_act = axutil_string_create(env, "/getQuestions");
              axis2_options_set_soap_action(options, env, soap_act);    
            }

            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             
            ret_node =  axis2_svc_client_send_receive_with_op_qname( svc_client, env, op_qname, payload);
 
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);    
              
              axis2_options_set_action( options, env, NULL);
            }
            if(soap_act)
            {
              axutil_string_free(soap_act, env);
            }

            
            if (axis2_svc_client_get_last_response_has_fault (svc_client, env) && fault)
            {
                /* so it is a fault, will try to create soap elements */
                axiom_soap_envelope_t *soap_envelope = NULL;
                axiom_soap_body_t *soap_body = NULL;
                axiom_soap_fault_t *soap_fault = NULL;
 
                soap_envelope = axis2_svc_client_get_last_response_soap_envelope (svc_client, env);
                if (soap_envelope)
                {
                    soap_body = axiom_soap_envelope_get_body (soap_envelope, env);
                }
                if (soap_body)
                {
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                }
                if (soap_fault)
                {
                    axis2_char_t *soap_reason_text = NULL;
                    axiom_node_t *soap_fault_base_node = NULL;

                    soap_fault_base_node = axiom_soap_fault_get_base_node(soap_fault, env);

                    if (soap_fault_base_node)
                    {
                        axiom_node_t *current_node = NULL;
                        axis2_char_t *current_local_name = NULL;
                        axiom_element_t *current_element = NULL;
                        axis2_bool_t next_sibling = AXIS2_FALSE;

                        current_node = axiom_node_get_first_child(soap_fault_base_node, env);

                        while(axutil_strcmp(current_local_name, "faultstring"))
                        {
                            while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT || next_sibling == AXIS2_TRUE)
                            {
                                current_node = axiom_node_get_next_sibling(current_node, env);
                                next_sibling = AXIS2_FALSE;
                            }
                            current_element = (axiom_element_t*)axiom_node_get_data_element(current_node, env);
                            current_local_name = axiom_element_get_localname(current_element, env);
                            next_sibling = AXIS2_TRUE;
                        }

                        if(current_element)
                        {
                            soap_reason_text = axiom_element_get_text(current_element, env, current_node);
                        }
                    }

                    axiom_soap_fault_detail_t *soap_detail = NULL;
                    axiom_node_t *soap_detail_node = NULL;

                    soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                    if(soap_detail) 
                    {
                        axiom_node_t *soap_detail_base_node = NULL;
                        soap_detail_base_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);

                        if(soap_detail_base_node)
                        {
                            soap_detail_node = axiom_node_get_first_child(soap_detail_base_node, env);
                            /* somehow get an element node */
                            while(soap_detail_node && axiom_node_get_node_type(soap_detail_node, env) != AXIOM_ELEMENT)
                            {
                                soap_detail_node = axiom_node_get_next_sibling(soap_detail_node, env);
                            }
                        }
                    }
                    if(soap_detail_node) 
                    {
                        axis2_char_t *detail_local_name = NULL;
                        axiom_element_t *soap_detail_ele = NULL;
                        
                        soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                       
                        if(soap_detail_ele)
                        {
                            detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                        }

                        if(!detail_local_name)
                        {
                            AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                        {
                            adb_invalidParameterFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETQUESTIONS_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_invalidParameterFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_invalidParameterFaultType_t *faultType = adb_invalidParameterFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_invalidParameterFault_set_invalidParameterFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_invalidParameterFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_invalidParameterFault_free(adb_obj, env);
                                }
                               
                                fault->InvalidParameterFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "operationNotSupportedFault"))
                        {
                            adb_operationNotSupportedFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETQUESTIONS_FAULT_OPERATIONNOTSUPPORTEDFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_operationNotSupportedFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_operationNotSupportedFaultType_t *faultType = adb_operationNotSupportedFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_operationNotSupportedFault_set_operationNotSupportedFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_operationNotSupportedFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_operationNotSupportedFault_free(adb_obj, env);
                                }
                               
                                fault->OperationNotSupportedFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                        {
                            adb_invalidOperationFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETQUESTIONS_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_invalidOperationFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_invalidOperationFaultType_t *faultType = adb_invalidOperationFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_invalidOperationFault_set_invalidOperationFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_invalidOperationFault_free(adb_obj, env);
                                }
                               
                                fault->InvalidOperationFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                        {
                            adb_internalServerErrorFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETQUESTIONS_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_internalServerErrorFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_internalServerErrorFaultType_t *faultType = adb_internalServerErrorFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_internalServerErrorFault_set_internalServerErrorFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_internalServerErrorFault_free(adb_obj, env);
                                }
                               
                                fault->InternalServerErrorFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                        {
                            adb_noActiveSessionFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETQUESTIONS_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_noActiveSessionFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_noActiveSessionFaultType_t *faultType = adb_noActiveSessionFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_noActiveSessionFault_set_noActiveSessionFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_noActiveSessionFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_noActiveSessionFault_free(adb_obj, env);
                                }
                               
                                fault->NoActiveSessionFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                    }
                }
                AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                return NULL;
             }
            
                    if ( NULL == ret_node )
                    {
                        AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                        return (adb_questions_type0_t*)NULL;
                    }
                    ret_val = adb_getQuestionsResponse_create(env);

                    if(adb_getQuestionsResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                    {
                        if(ret_val != NULL)
                        {
                            adb_getQuestionsResponse_free(ret_val, env);
                        }

                        AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the adb_getQuestionsResponse_deserialize: "
                                                                "This should be due to an invalid XML");
                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_SUCH_ELEMENT, AXIS2_FAILURE);
                        return (adb_questions_type0_t*)NULL;
                    }

                   
                            return adb_getQuestionsResponse_free_popping_value(ret_val, env);
                       
        }
        
         /**
          * auto generated method signature
          * for "issueContent|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub (axis2_stub_t)
          * @param env environment ( mandatory)
          * @param _contentID4 of the axis2_char_t*
          *
          * @return axis2_bool_t
          */

         axis2_bool_t AXIS2_CALL 
         axis2_stub_op_Kolibre_DaisyOnline_issueContent( axis2_stub_t *stub, const axutil_env_t *env,
                                               axis2_char_t* _contentID4,
                                          axis2_stub_Kolibre_DaisyOnline_issueContent_fault *fault)
         {
            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;
            axiom_node_t *ret_node = NULL;

            const axis2_char_t *soap_action = NULL;
            axutil_qname_t *op_qname =  NULL;
            axiom_node_t *payload = NULL;
            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            adb_issueContentResponse_t* ret_val;
            
                            {
                               adb_issueContent_t* wrapper_adb_obj = adb_issueContent_create_with_values(env,
                                        _contentID4);
                                    payload = adb_issueContent_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                                    if (wrapper_adb_obj)
                                    {
                                        adb_issueContent_free(wrapper_adb_obj, env);
                                    }
                            }
                           
            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "options is null in stub");
                return (axis2_bool_t)NULL;
            }
            soap_act = axis2_options_get_soap_action( options, env );
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/issueContent";
              soap_act = axutil_string_create(env, "/issueContent");
              axis2_options_set_soap_action(options, env, soap_act);    
            }

            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             
            ret_node =  axis2_svc_client_send_receive_with_op_qname( svc_client, env, op_qname, payload);
 
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);    
              
              axis2_options_set_action( options, env, NULL);
            }
            if(soap_act)
            {
              axutil_string_free(soap_act, env);
            }

            
            if (axis2_svc_client_get_last_response_has_fault (svc_client, env) && fault)
            {
                /* so it is a fault, will try to create soap elements */
                axiom_soap_envelope_t *soap_envelope = NULL;
                axiom_soap_body_t *soap_body = NULL;
                axiom_soap_fault_t *soap_fault = NULL;
 
                soap_envelope = axis2_svc_client_get_last_response_soap_envelope (svc_client, env);
                if (soap_envelope)
                {
                    soap_body = axiom_soap_envelope_get_body (soap_envelope, env);
                }
                if (soap_body)
                {
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                }
                if (soap_fault)
                {
                    axis2_char_t *soap_reason_text = NULL;
                    axiom_node_t *soap_fault_base_node = NULL;

                    soap_fault_base_node = axiom_soap_fault_get_base_node(soap_fault, env);

                    if (soap_fault_base_node)
                    {
                        axiom_node_t *current_node = NULL;
                        axis2_char_t *current_local_name = NULL;
                        axiom_element_t *current_element = NULL;
                        axis2_bool_t next_sibling = AXIS2_FALSE;

                        current_node = axiom_node_get_first_child(soap_fault_base_node, env);

                        while(axutil_strcmp(current_local_name, "faultstring"))
                        {
                            while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT || next_sibling == AXIS2_TRUE)
                            {
                                current_node = axiom_node_get_next_sibling(current_node, env);
                                next_sibling = AXIS2_FALSE;
                            }
                            current_element = (axiom_element_t*)axiom_node_get_data_element(current_node, env);
                            current_local_name = axiom_element_get_localname(current_element, env);
                            next_sibling = AXIS2_TRUE;
                        }

                        if(current_element)
                        {
                            soap_reason_text = axiom_element_get_text(current_element, env, current_node);
                        }
                    }

                    axiom_soap_fault_detail_t *soap_detail = NULL;
                    axiom_node_t *soap_detail_node = NULL;

                    soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                    if(soap_detail) 
                    {
                        axiom_node_t *soap_detail_base_node = NULL;
                        soap_detail_base_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);

                        if(soap_detail_base_node)
                        {
                            soap_detail_node = axiom_node_get_first_child(soap_detail_base_node, env);
                            /* somehow get an element node */
                            while(soap_detail_node && axiom_node_get_node_type(soap_detail_node, env) != AXIOM_ELEMENT)
                            {
                                soap_detail_node = axiom_node_get_next_sibling(soap_detail_node, env);
                            }
                        }
                    }
                    if(soap_detail_node) 
                    {
                        axis2_char_t *detail_local_name = NULL;
                        axiom_element_t *soap_detail_ele = NULL;
                        
                        soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                       
                        if(soap_detail_ele)
                        {
                            detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                        }

                        if(!detail_local_name)
                        {
                            AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                        {
                            adb_invalidOperationFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_ISSUECONTENT_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_invalidOperationFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_invalidOperationFaultType_t *faultType = adb_invalidOperationFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_invalidOperationFault_set_invalidOperationFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_invalidOperationFault_free(adb_obj, env);
                                }
                               
                                fault->InvalidOperationFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                        {
                            adb_internalServerErrorFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_ISSUECONTENT_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_internalServerErrorFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_internalServerErrorFaultType_t *faultType = adb_internalServerErrorFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_internalServerErrorFault_set_internalServerErrorFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_internalServerErrorFault_free(adb_obj, env);
                                }
                               
                                fault->InternalServerErrorFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                        {
                            adb_invalidParameterFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_ISSUECONTENT_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_invalidParameterFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_invalidParameterFaultType_t *faultType = adb_invalidParameterFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_invalidParameterFault_set_invalidParameterFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_invalidParameterFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_invalidParameterFault_free(adb_obj, env);
                                }
                               
                                fault->InvalidParameterFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                        {
                            adb_noActiveSessionFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_ISSUECONTENT_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_noActiveSessionFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_noActiveSessionFaultType_t *faultType = adb_noActiveSessionFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_noActiveSessionFault_set_noActiveSessionFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_noActiveSessionFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_noActiveSessionFault_free(adb_obj, env);
                                }
                               
                                fault->NoActiveSessionFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                    }
                }
                AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                return (axis2_bool_t)NULL;
             }
            
                    if ( NULL == ret_node )
                    {
                        AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                        return (axis2_bool_t)NULL;
                    }
                    ret_val = adb_issueContentResponse_create(env);

                    if(adb_issueContentResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                    {
                        if(ret_val != NULL)
                        {
                            adb_issueContentResponse_free(ret_val, env);
                        }

                        AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the adb_issueContentResponse_deserialize: "
                                                                "This should be due to an invalid XML");
                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_SUCH_ELEMENT, AXIS2_FAILURE);
                        return (axis2_bool_t)NULL;
                    }

                   
                            return adb_issueContentResponse_free_popping_value(ret_val, env);
                       
        }
        
         /**
          * auto generated method signature
          * for "setReadingSystemAttributes|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub (axis2_stub_t)
          * @param env environment ( mandatory)
          * @param _readingSystemAttributes of the adb_readingSystemAttributes_type0_t*
          *
          * @return axis2_bool_t
          */

         axis2_bool_t AXIS2_CALL 
         axis2_stub_op_Kolibre_DaisyOnline_setReadingSystemAttributes( axis2_stub_t *stub, const axutil_env_t *env,
                                               adb_readingSystemAttributes_type0_t* _readingSystemAttributes,
                                          axis2_stub_Kolibre_DaisyOnline_setReadingSystemAttributes_fault *fault)
         {
            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;
            axiom_node_t *ret_node = NULL;

            const axis2_char_t *soap_action = NULL;
            axutil_qname_t *op_qname =  NULL;
            axiom_node_t *payload = NULL;
            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            adb_setReadingSystemAttributesResponse_t* ret_val;
            
                            {
                               adb_setReadingSystemAttributes_t* wrapper_adb_obj = adb_setReadingSystemAttributes_create_with_values(env,
                                        _readingSystemAttributes);
                                    payload = adb_setReadingSystemAttributes_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                                    if (wrapper_adb_obj)
                                    {
                                        adb_setReadingSystemAttributes_free(wrapper_adb_obj, env);
                                    }
                            }
                           
            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "options is null in stub");
                return (axis2_bool_t)NULL;
            }
            soap_act = axis2_options_get_soap_action( options, env );
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/setReadingSystemAttributes";
              soap_act = axutil_string_create(env, "/setReadingSystemAttributes");
              axis2_options_set_soap_action(options, env, soap_act);    
            }

            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             
            ret_node =  axis2_svc_client_send_receive_with_op_qname( svc_client, env, op_qname, payload);
 
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);    
              
              axis2_options_set_action( options, env, NULL);
            }
            if(soap_act)
            {
              axutil_string_free(soap_act, env);
            }

            
            if (axis2_svc_client_get_last_response_has_fault (svc_client, env) && fault)
            {
                /* so it is a fault, will try to create soap elements */
                axiom_soap_envelope_t *soap_envelope = NULL;
                axiom_soap_body_t *soap_body = NULL;
                axiom_soap_fault_t *soap_fault = NULL;
 
                soap_envelope = axis2_svc_client_get_last_response_soap_envelope (svc_client, env);
                if (soap_envelope)
                {
                    soap_body = axiom_soap_envelope_get_body (soap_envelope, env);
                }
                if (soap_body)
                {
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                }
                if (soap_fault)
                {
                    axis2_char_t *soap_reason_text = NULL;
                    axiom_node_t *soap_fault_base_node = NULL;

                    soap_fault_base_node = axiom_soap_fault_get_base_node(soap_fault, env);

                    if (soap_fault_base_node)
                    {
                        axiom_node_t *current_node = NULL;
                        axis2_char_t *current_local_name = NULL;
                        axiom_element_t *current_element = NULL;
                        axis2_bool_t next_sibling = AXIS2_FALSE;

                        current_node = axiom_node_get_first_child(soap_fault_base_node, env);

                        while(axutil_strcmp(current_local_name, "faultstring"))
                        {
                            while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT || next_sibling == AXIS2_TRUE)
                            {
                                current_node = axiom_node_get_next_sibling(current_node, env);
                                next_sibling = AXIS2_FALSE;
                            }
                            current_element = (axiom_element_t*)axiom_node_get_data_element(current_node, env);
                            current_local_name = axiom_element_get_localname(current_element, env);
                            next_sibling = AXIS2_TRUE;
                        }

                        if(current_element)
                        {
                            soap_reason_text = axiom_element_get_text(current_element, env, current_node);
                        }
                    }

                    axiom_soap_fault_detail_t *soap_detail = NULL;
                    axiom_node_t *soap_detail_node = NULL;

                    soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                    if(soap_detail) 
                    {
                        axiom_node_t *soap_detail_base_node = NULL;
                        soap_detail_base_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);

                        if(soap_detail_base_node)
                        {
                            soap_detail_node = axiom_node_get_first_child(soap_detail_base_node, env);
                            /* somehow get an element node */
                            while(soap_detail_node && axiom_node_get_node_type(soap_detail_node, env) != AXIOM_ELEMENT)
                            {
                                soap_detail_node = axiom_node_get_next_sibling(soap_detail_node, env);
                            }
                        }
                    }
                    if(soap_detail_node) 
                    {
                        axis2_char_t *detail_local_name = NULL;
                        axiom_element_t *soap_detail_ele = NULL;
                        
                        soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                       
                        if(soap_detail_ele)
                        {
                            detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                        }

                        if(!detail_local_name)
                        {
                            AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                        {
                            adb_noActiveSessionFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_SETREADINGSYSTEMATTRIBUTES_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_noActiveSessionFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_noActiveSessionFaultType_t *faultType = adb_noActiveSessionFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_noActiveSessionFault_set_noActiveSessionFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_noActiveSessionFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_noActiveSessionFault_free(adb_obj, env);
                                }
                               
                                fault->NoActiveSessionFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                        {
                            adb_invalidOperationFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_SETREADINGSYSTEMATTRIBUTES_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_invalidOperationFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_invalidOperationFaultType_t *faultType = adb_invalidOperationFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_invalidOperationFault_set_invalidOperationFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_invalidOperationFault_free(adb_obj, env);
                                }
                               
                                fault->InvalidOperationFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                        {
                            adb_internalServerErrorFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_SETREADINGSYSTEMATTRIBUTES_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_internalServerErrorFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_internalServerErrorFaultType_t *faultType = adb_internalServerErrorFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_internalServerErrorFault_set_internalServerErrorFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_internalServerErrorFault_free(adb_obj, env);
                                }
                               
                                fault->InternalServerErrorFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                        {
                            adb_invalidParameterFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_SETREADINGSYSTEMATTRIBUTES_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_invalidParameterFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_invalidParameterFaultType_t *faultType = adb_invalidParameterFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_invalidParameterFault_set_invalidParameterFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_invalidParameterFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_invalidParameterFault_free(adb_obj, env);
                                }
                               
                                fault->InvalidParameterFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                    }
                }
                AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                return (axis2_bool_t)NULL;
             }
            
                    if ( NULL == ret_node )
                    {
                        AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                        return (axis2_bool_t)NULL;
                    }
                    ret_val = adb_setReadingSystemAttributesResponse_create(env);

                    if(adb_setReadingSystemAttributesResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                    {
                        if(ret_val != NULL)
                        {
                            adb_setReadingSystemAttributesResponse_free(ret_val, env);
                        }

                        AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the adb_setReadingSystemAttributesResponse_deserialize: "
                                                                "This should be due to an invalid XML");
                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_SUCH_ELEMENT, AXIS2_FAILURE);
                        return (axis2_bool_t)NULL;
                    }

                   
                            return adb_setReadingSystemAttributesResponse_free_popping_value(ret_val, env);
                       
        }
        
         /**
          * auto generated method signature
          * for "logOff|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub (axis2_stub_t)
          * @param env environment ( mandatory)
          *
          * @return axis2_bool_t
          */

         axis2_bool_t AXIS2_CALL 
         axis2_stub_op_Kolibre_DaisyOnline_logOff( axis2_stub_t *stub, const axutil_env_t *env,
                                          axis2_stub_Kolibre_DaisyOnline_logOff_fault *fault)
         {
            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;
            axiom_node_t *ret_node = NULL;

            const axis2_char_t *soap_action = NULL;
            axutil_qname_t *op_qname =  NULL;
            axiom_node_t *payload = NULL;
            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            adb_logOffResponse_t* ret_val;
            
                            {
                               adb_logOff_t* wrapper_adb_obj = adb_logOff_create_with_values(env);
                                    payload = adb_logOff_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                                    if (wrapper_adb_obj)
                                    {
                                        adb_logOff_free(wrapper_adb_obj, env);
                                    }
                            }
                           
            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "options is null in stub");
                return (axis2_bool_t)NULL;
            }
            soap_act = axis2_options_get_soap_action( options, env );
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/logOff";
              soap_act = axutil_string_create(env, "/logOff");
              axis2_options_set_soap_action(options, env, soap_act);    
            }

            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             
            ret_node =  axis2_svc_client_send_receive_with_op_qname( svc_client, env, op_qname, payload);
 
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);    
              
              axis2_options_set_action( options, env, NULL);
            }
            if(soap_act)
            {
              axutil_string_free(soap_act, env);
            }

            
            if (axis2_svc_client_get_last_response_has_fault (svc_client, env) && fault)
            {
                /* so it is a fault, will try to create soap elements */
                axiom_soap_envelope_t *soap_envelope = NULL;
                axiom_soap_body_t *soap_body = NULL;
                axiom_soap_fault_t *soap_fault = NULL;
 
                soap_envelope = axis2_svc_client_get_last_response_soap_envelope (svc_client, env);
                if (soap_envelope)
                {
                    soap_body = axiom_soap_envelope_get_body (soap_envelope, env);
                }
                if (soap_body)
                {
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                }
                if (soap_fault)
                {
                    axis2_char_t *soap_reason_text = NULL;
                    axiom_node_t *soap_fault_base_node = NULL;

                    soap_fault_base_node = axiom_soap_fault_get_base_node(soap_fault, env);

                    if (soap_fault_base_node)
                    {
                        axiom_node_t *current_node = NULL;
                        axis2_char_t *current_local_name = NULL;
                        axiom_element_t *current_element = NULL;
                        axis2_bool_t next_sibling = AXIS2_FALSE;

                        current_node = axiom_node_get_first_child(soap_fault_base_node, env);

                        while(axutil_strcmp(current_local_name, "faultstring"))
                        {
                            while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT || next_sibling == AXIS2_TRUE)
                            {
                                current_node = axiom_node_get_next_sibling(current_node, env);
                                next_sibling = AXIS2_FALSE;
                            }
                            current_element = (axiom_element_t*)axiom_node_get_data_element(current_node, env);
                            current_local_name = axiom_element_get_localname(current_element, env);
                            next_sibling = AXIS2_TRUE;
                        }

                        if(current_element)
                        {
                            soap_reason_text = axiom_element_get_text(current_element, env, current_node);
                        }
                    }

                    axiom_soap_fault_detail_t *soap_detail = NULL;
                    axiom_node_t *soap_detail_node = NULL;

                    soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                    if(soap_detail) 
                    {
                        axiom_node_t *soap_detail_base_node = NULL;
                        soap_detail_base_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);

                        if(soap_detail_base_node)
                        {
                            soap_detail_node = axiom_node_get_first_child(soap_detail_base_node, env);
                            /* somehow get an element node */
                            while(soap_detail_node && axiom_node_get_node_type(soap_detail_node, env) != AXIOM_ELEMENT)
                            {
                                soap_detail_node = axiom_node_get_next_sibling(soap_detail_node, env);
                            }
                        }
                    }
                    if(soap_detail_node) 
                    {
                        axis2_char_t *detail_local_name = NULL;
                        axiom_element_t *soap_detail_ele = NULL;
                        
                        soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                       
                        if(soap_detail_ele)
                        {
                            detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                        }

                        if(!detail_local_name)
                        {
                            AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                        {
                            adb_invalidOperationFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_LOGOFF_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_invalidOperationFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_invalidOperationFaultType_t *faultType = adb_invalidOperationFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_invalidOperationFault_set_invalidOperationFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_invalidOperationFault_free(adb_obj, env);
                                }
                               
                                fault->InvalidOperationFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                        {
                            adb_internalServerErrorFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_LOGOFF_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_internalServerErrorFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_internalServerErrorFaultType_t *faultType = adb_internalServerErrorFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_internalServerErrorFault_set_internalServerErrorFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_internalServerErrorFault_free(adb_obj, env);
                                }
                               
                                fault->InternalServerErrorFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                    }
                }
                AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                return (axis2_bool_t)NULL;
             }
            
                    if ( NULL == ret_node )
                    {
                        AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                        return (axis2_bool_t)NULL;
                    }
                    ret_val = adb_logOffResponse_create(env);

                    if(adb_logOffResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                    {
                        if(ret_val != NULL)
                        {
                            adb_logOffResponse_free(ret_val, env);
                        }

                        AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the adb_logOffResponse_deserialize: "
                                                                "This should be due to an invalid XML");
                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_SUCH_ELEMENT, AXIS2_FAILURE);
                        return (axis2_bool_t)NULL;
                    }

                   
                            return adb_logOffResponse_free_popping_value(ret_val, env);
                       
        }
        
         /**
          * auto generated method signature
          * for "returnContent|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub (axis2_stub_t)
          * @param env environment ( mandatory)
          * @param _contentID5 of the axis2_char_t*
          *
          * @return axis2_bool_t
          */

         axis2_bool_t AXIS2_CALL 
         axis2_stub_op_Kolibre_DaisyOnline_returnContent( axis2_stub_t *stub, const axutil_env_t *env,
                                               axis2_char_t* _contentID5,
                                          axis2_stub_Kolibre_DaisyOnline_returnContent_fault *fault)
         {
            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;
            axiom_node_t *ret_node = NULL;

            const axis2_char_t *soap_action = NULL;
            axutil_qname_t *op_qname =  NULL;
            axiom_node_t *payload = NULL;
            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            adb_returnContentResponse_t* ret_val;
            
                            {
                               adb_returnContent_t* wrapper_adb_obj = adb_returnContent_create_with_values(env,
                                        _contentID5);
                                    payload = adb_returnContent_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                                    if (wrapper_adb_obj)
                                    {
                                        adb_returnContent_free(wrapper_adb_obj, env);
                                    }
                            }
                           
            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "options is null in stub");
                return (axis2_bool_t)NULL;
            }
            soap_act = axis2_options_get_soap_action( options, env );
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/returnContent";
              soap_act = axutil_string_create(env, "/returnContent");
              axis2_options_set_soap_action(options, env, soap_act);    
            }

            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             
            ret_node =  axis2_svc_client_send_receive_with_op_qname( svc_client, env, op_qname, payload);
 
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);    
              
              axis2_options_set_action( options, env, NULL);
            }
            if(soap_act)
            {
              axutil_string_free(soap_act, env);
            }

            
            if (axis2_svc_client_get_last_response_has_fault (svc_client, env) && fault)
            {
                /* so it is a fault, will try to create soap elements */
                axiom_soap_envelope_t *soap_envelope = NULL;
                axiom_soap_body_t *soap_body = NULL;
                axiom_soap_fault_t *soap_fault = NULL;
 
                soap_envelope = axis2_svc_client_get_last_response_soap_envelope (svc_client, env);
                if (soap_envelope)
                {
                    soap_body = axiom_soap_envelope_get_body (soap_envelope, env);
                }
                if (soap_body)
                {
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                }
                if (soap_fault)
                {
                    axis2_char_t *soap_reason_text = NULL;
                    axiom_node_t *soap_fault_base_node = NULL;

                    soap_fault_base_node = axiom_soap_fault_get_base_node(soap_fault, env);

                    if (soap_fault_base_node)
                    {
                        axiom_node_t *current_node = NULL;
                        axis2_char_t *current_local_name = NULL;
                        axiom_element_t *current_element = NULL;
                        axis2_bool_t next_sibling = AXIS2_FALSE;

                        current_node = axiom_node_get_first_child(soap_fault_base_node, env);

                        while(axutil_strcmp(current_local_name, "faultstring"))
                        {
                            while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT || next_sibling == AXIS2_TRUE)
                            {
                                current_node = axiom_node_get_next_sibling(current_node, env);
                                next_sibling = AXIS2_FALSE;
                            }
                            current_element = (axiom_element_t*)axiom_node_get_data_element(current_node, env);
                            current_local_name = axiom_element_get_localname(current_element, env);
                            next_sibling = AXIS2_TRUE;
                        }

                        if(current_element)
                        {
                            soap_reason_text = axiom_element_get_text(current_element, env, current_node);
                        }
                    }

                    axiom_soap_fault_detail_t *soap_detail = NULL;
                    axiom_node_t *soap_detail_node = NULL;

                    soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                    if(soap_detail) 
                    {
                        axiom_node_t *soap_detail_base_node = NULL;
                        soap_detail_base_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);

                        if(soap_detail_base_node)
                        {
                            soap_detail_node = axiom_node_get_first_child(soap_detail_base_node, env);
                            /* somehow get an element node */
                            while(soap_detail_node && axiom_node_get_node_type(soap_detail_node, env) != AXIOM_ELEMENT)
                            {
                                soap_detail_node = axiom_node_get_next_sibling(soap_detail_node, env);
                            }
                        }
                    }
                    if(soap_detail_node) 
                    {
                        axis2_char_t *detail_local_name = NULL;
                        axiom_element_t *soap_detail_ele = NULL;
                        
                        soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                       
                        if(soap_detail_ele)
                        {
                            detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                        }

                        if(!detail_local_name)
                        {
                            AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                        {
                            adb_invalidParameterFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_RETURNCONTENT_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_invalidParameterFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_invalidParameterFaultType_t *faultType = adb_invalidParameterFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_invalidParameterFault_set_invalidParameterFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_invalidParameterFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_invalidParameterFault_free(adb_obj, env);
                                }
                               
                                fault->InvalidParameterFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "operationNotSupportedFault"))
                        {
                            adb_operationNotSupportedFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_RETURNCONTENT_FAULT_OPERATIONNOTSUPPORTEDFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_operationNotSupportedFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_operationNotSupportedFaultType_t *faultType = adb_operationNotSupportedFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_operationNotSupportedFault_set_operationNotSupportedFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_operationNotSupportedFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_operationNotSupportedFault_free(adb_obj, env);
                                }
                               
                                fault->OperationNotSupportedFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                        {
                            adb_invalidOperationFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_RETURNCONTENT_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_invalidOperationFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_invalidOperationFaultType_t *faultType = adb_invalidOperationFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_invalidOperationFault_set_invalidOperationFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_invalidOperationFault_free(adb_obj, env);
                                }
                               
                                fault->InvalidOperationFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                        {
                            adb_internalServerErrorFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_RETURNCONTENT_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_internalServerErrorFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_internalServerErrorFaultType_t *faultType = adb_internalServerErrorFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_internalServerErrorFault_set_internalServerErrorFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_internalServerErrorFault_free(adb_obj, env);
                                }
                               
                                fault->InternalServerErrorFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                        {
                            adb_noActiveSessionFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_RETURNCONTENT_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_noActiveSessionFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_noActiveSessionFaultType_t *faultType = adb_noActiveSessionFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_noActiveSessionFault_set_noActiveSessionFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_noActiveSessionFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_noActiveSessionFault_free(adb_obj, env);
                                }
                               
                                fault->NoActiveSessionFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                    }
                }
                AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                return (axis2_bool_t)NULL;
             }
            
                    if ( NULL == ret_node )
                    {
                        AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                        return (axis2_bool_t)NULL;
                    }
                    ret_val = adb_returnContentResponse_create(env);

                    if(adb_returnContentResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                    {
                        if(ret_val != NULL)
                        {
                            adb_returnContentResponse_free(ret_val, env);
                        }

                        AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the adb_returnContentResponse_deserialize: "
                                                                "This should be due to an invalid XML");
                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_SUCH_ELEMENT, AXIS2_FAILURE);
                        return (axis2_bool_t)NULL;
                    }

                   
                            return adb_returnContentResponse_free_popping_value(ret_val, env);
                       
        }
        
         /**
          * auto generated method signature
          * for "getKeyExchangeObject|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub (axis2_stub_t)
          * @param env environment ( mandatory)
          * @param _requestedKeyName of the axis2_char_t*
          *
          * @return adb_KeyExchange_type0_t*
          */

         adb_KeyExchange_type0_t* AXIS2_CALL 
         axis2_stub_op_Kolibre_DaisyOnline_getKeyExchangeObject( axis2_stub_t *stub, const axutil_env_t *env,
                                               axis2_char_t* _requestedKeyName,
                                          axis2_stub_Kolibre_DaisyOnline_getKeyExchangeObject_fault *fault)
         {
            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;
            axiom_node_t *ret_node = NULL;

            const axis2_char_t *soap_action = NULL;
            axutil_qname_t *op_qname =  NULL;
            axiom_node_t *payload = NULL;
            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            adb_getKeyExchangeObjectResponse_t* ret_val;
            
                            {
                               adb_getKeyExchangeObject_t* wrapper_adb_obj = adb_getKeyExchangeObject_create_with_values(env,
                                        _requestedKeyName);
                                    payload = adb_getKeyExchangeObject_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                                    if (wrapper_adb_obj)
                                    {
                                        adb_getKeyExchangeObject_free(wrapper_adb_obj, env);
                                    }
                            }
                           
            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "options is null in stub");
                return (adb_KeyExchange_type0_t*)NULL;
            }
            soap_act = axis2_options_get_soap_action( options, env );
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/getKeyExchangeObject";
              soap_act = axutil_string_create(env, "/getKeyExchangeObject");
              axis2_options_set_soap_action(options, env, soap_act);    
            }

            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             
            ret_node =  axis2_svc_client_send_receive_with_op_qname( svc_client, env, op_qname, payload);
 
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);    
              
              axis2_options_set_action( options, env, NULL);
            }
            if(soap_act)
            {
              axutil_string_free(soap_act, env);
            }

            
            if (axis2_svc_client_get_last_response_has_fault (svc_client, env) && fault)
            {
                /* so it is a fault, will try to create soap elements */
                axiom_soap_envelope_t *soap_envelope = NULL;
                axiom_soap_body_t *soap_body = NULL;
                axiom_soap_fault_t *soap_fault = NULL;
 
                soap_envelope = axis2_svc_client_get_last_response_soap_envelope (svc_client, env);
                if (soap_envelope)
                {
                    soap_body = axiom_soap_envelope_get_body (soap_envelope, env);
                }
                if (soap_body)
                {
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                }
                if (soap_fault)
                {
                    axis2_char_t *soap_reason_text = NULL;
                    axiom_node_t *soap_fault_base_node = NULL;

                    soap_fault_base_node = axiom_soap_fault_get_base_node(soap_fault, env);

                    if (soap_fault_base_node)
                    {
                        axiom_node_t *current_node = NULL;
                        axis2_char_t *current_local_name = NULL;
                        axiom_element_t *current_element = NULL;
                        axis2_bool_t next_sibling = AXIS2_FALSE;

                        current_node = axiom_node_get_first_child(soap_fault_base_node, env);

                        while(axutil_strcmp(current_local_name, "faultstring"))
                        {
                            while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT || next_sibling == AXIS2_TRUE)
                            {
                                current_node = axiom_node_get_next_sibling(current_node, env);
                                next_sibling = AXIS2_FALSE;
                            }
                            current_element = (axiom_element_t*)axiom_node_get_data_element(current_node, env);
                            current_local_name = axiom_element_get_localname(current_element, env);
                            next_sibling = AXIS2_TRUE;
                        }

                        if(current_element)
                        {
                            soap_reason_text = axiom_element_get_text(current_element, env, current_node);
                        }
                    }

                    axiom_soap_fault_detail_t *soap_detail = NULL;
                    axiom_node_t *soap_detail_node = NULL;

                    soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                    if(soap_detail) 
                    {
                        axiom_node_t *soap_detail_base_node = NULL;
                        soap_detail_base_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);

                        if(soap_detail_base_node)
                        {
                            soap_detail_node = axiom_node_get_first_child(soap_detail_base_node, env);
                            /* somehow get an element node */
                            while(soap_detail_node && axiom_node_get_node_type(soap_detail_node, env) != AXIOM_ELEMENT)
                            {
                                soap_detail_node = axiom_node_get_next_sibling(soap_detail_node, env);
                            }
                        }
                    }
                    if(soap_detail_node) 
                    {
                        axis2_char_t *detail_local_name = NULL;
                        axiom_element_t *soap_detail_ele = NULL;
                        
                        soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                       
                        if(soap_detail_ele)
                        {
                            detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                        }

                        if(!detail_local_name)
                        {
                            AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                        {
                            adb_noActiveSessionFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETKEYEXCHANGEOBJECT_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_noActiveSessionFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_noActiveSessionFaultType_t *faultType = adb_noActiveSessionFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_noActiveSessionFault_set_noActiveSessionFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_noActiveSessionFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_noActiveSessionFault_free(adb_obj, env);
                                }
                               
                                fault->NoActiveSessionFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "operationNotSupportedFault"))
                        {
                            adb_operationNotSupportedFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETKEYEXCHANGEOBJECT_FAULT_OPERATIONNOTSUPPORTEDFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_operationNotSupportedFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_operationNotSupportedFaultType_t *faultType = adb_operationNotSupportedFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_operationNotSupportedFault_set_operationNotSupportedFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_operationNotSupportedFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_operationNotSupportedFault_free(adb_obj, env);
                                }
                               
                                fault->OperationNotSupportedFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                        {
                            adb_invalidParameterFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETKEYEXCHANGEOBJECT_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_invalidParameterFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_invalidParameterFaultType_t *faultType = adb_invalidParameterFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_invalidParameterFault_set_invalidParameterFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_invalidParameterFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_invalidParameterFault_free(adb_obj, env);
                                }
                               
                                fault->InvalidParameterFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                        {
                            adb_invalidOperationFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETKEYEXCHANGEOBJECT_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_invalidOperationFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_invalidOperationFaultType_t *faultType = adb_invalidOperationFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_invalidOperationFault_set_invalidOperationFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_invalidOperationFault_free(adb_obj, env);
                                }
                               
                                fault->InvalidOperationFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                        {
                            adb_internalServerErrorFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETKEYEXCHANGEOBJECT_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_internalServerErrorFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_internalServerErrorFaultType_t *faultType = adb_internalServerErrorFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_internalServerErrorFault_set_internalServerErrorFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_internalServerErrorFault_free(adb_obj, env);
                                }
                               
                                fault->InternalServerErrorFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                    }
                }
                AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                return NULL;
             }
            
                    if ( NULL == ret_node )
                    {
                        AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                        return (adb_KeyExchange_type0_t*)NULL;
                    }
                    ret_val = adb_getKeyExchangeObjectResponse_create(env);

                    if(adb_getKeyExchangeObjectResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                    {
                        if(ret_val != NULL)
                        {
                            adb_getKeyExchangeObjectResponse_free(ret_val, env);
                        }

                        AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the adb_getKeyExchangeObjectResponse_deserialize: "
                                                                "This should be due to an invalid XML");
                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_SUCH_ELEMENT, AXIS2_FAILURE);
                        return (adb_KeyExchange_type0_t*)NULL;
                    }

                   
                            return adb_getKeyExchangeObjectResponse_free_popping_value(ret_val, env);
                       
        }
        
         /**
          * auto generated method signature
          * for "getServiceAnnouncements|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub (axis2_stub_t)
          * @param env environment ( mandatory)
          *
          * @return adb_announcements_type0_t*
          */

         adb_announcements_type0_t* AXIS2_CALL 
         axis2_stub_op_Kolibre_DaisyOnline_getServiceAnnouncements( axis2_stub_t *stub, const axutil_env_t *env,
                                          axis2_stub_Kolibre_DaisyOnline_getServiceAnnouncements_fault *fault)
         {
            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;
            axiom_node_t *ret_node = NULL;

            const axis2_char_t *soap_action = NULL;
            axutil_qname_t *op_qname =  NULL;
            axiom_node_t *payload = NULL;
            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            adb_getServiceAnnouncementsResponse_t* ret_val;
            
                            {
                               adb_getServiceAnnouncements_t* wrapper_adb_obj = adb_getServiceAnnouncements_create_with_values(env);
                                    payload = adb_getServiceAnnouncements_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                                    if (wrapper_adb_obj)
                                    {
                                        adb_getServiceAnnouncements_free(wrapper_adb_obj, env);
                                    }
                            }
                           
            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "options is null in stub");
                return (adb_announcements_type0_t*)NULL;
            }
            soap_act = axis2_options_get_soap_action( options, env );
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/getServiceAnnouncements";
              soap_act = axutil_string_create(env, "/getServiceAnnouncements");
              axis2_options_set_soap_action(options, env, soap_act);    
            }

            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             
            ret_node =  axis2_svc_client_send_receive_with_op_qname( svc_client, env, op_qname, payload);
 
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);    
              
              axis2_options_set_action( options, env, NULL);
            }
            if(soap_act)
            {
              axutil_string_free(soap_act, env);
            }

            
            if (axis2_svc_client_get_last_response_has_fault (svc_client, env) && fault)
            {
                /* so it is a fault, will try to create soap elements */
                axiom_soap_envelope_t *soap_envelope = NULL;
                axiom_soap_body_t *soap_body = NULL;
                axiom_soap_fault_t *soap_fault = NULL;
 
                soap_envelope = axis2_svc_client_get_last_response_soap_envelope (svc_client, env);
                if (soap_envelope)
                {
                    soap_body = axiom_soap_envelope_get_body (soap_envelope, env);
                }
                if (soap_body)
                {
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                }
                if (soap_fault)
                {
                    axis2_char_t *soap_reason_text = NULL;
                    axiom_node_t *soap_fault_base_node = NULL;

                    soap_fault_base_node = axiom_soap_fault_get_base_node(soap_fault, env);

                    if (soap_fault_base_node)
                    {
                        axiom_node_t *current_node = NULL;
                        axis2_char_t *current_local_name = NULL;
                        axiom_element_t *current_element = NULL;
                        axis2_bool_t next_sibling = AXIS2_FALSE;

                        current_node = axiom_node_get_first_child(soap_fault_base_node, env);

                        while(axutil_strcmp(current_local_name, "faultstring"))
                        {
                            while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT || next_sibling == AXIS2_TRUE)
                            {
                                current_node = axiom_node_get_next_sibling(current_node, env);
                                next_sibling = AXIS2_FALSE;
                            }
                            current_element = (axiom_element_t*)axiom_node_get_data_element(current_node, env);
                            current_local_name = axiom_element_get_localname(current_element, env);
                            next_sibling = AXIS2_TRUE;
                        }

                        if(current_element)
                        {
                            soap_reason_text = axiom_element_get_text(current_element, env, current_node);
                        }
                    }

                    axiom_soap_fault_detail_t *soap_detail = NULL;
                    axiom_node_t *soap_detail_node = NULL;

                    soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                    if(soap_detail) 
                    {
                        axiom_node_t *soap_detail_base_node = NULL;
                        soap_detail_base_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);

                        if(soap_detail_base_node)
                        {
                            soap_detail_node = axiom_node_get_first_child(soap_detail_base_node, env);
                            /* somehow get an element node */
                            while(soap_detail_node && axiom_node_get_node_type(soap_detail_node, env) != AXIOM_ELEMENT)
                            {
                                soap_detail_node = axiom_node_get_next_sibling(soap_detail_node, env);
                            }
                        }
                    }
                    if(soap_detail_node) 
                    {
                        axis2_char_t *detail_local_name = NULL;
                        axiom_element_t *soap_detail_ele = NULL;
                        
                        soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                       
                        if(soap_detail_ele)
                        {
                            detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                        }

                        if(!detail_local_name)
                        {
                            AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                        {
                            adb_noActiveSessionFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEANNOUNCEMENTS_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_noActiveSessionFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_noActiveSessionFaultType_t *faultType = adb_noActiveSessionFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_noActiveSessionFault_set_noActiveSessionFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_noActiveSessionFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_noActiveSessionFault_free(adb_obj, env);
                                }
                               
                                fault->NoActiveSessionFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "operationNotSupportedFault"))
                        {
                            adb_operationNotSupportedFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEANNOUNCEMENTS_FAULT_OPERATIONNOTSUPPORTEDFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_operationNotSupportedFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_operationNotSupportedFaultType_t *faultType = adb_operationNotSupportedFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_operationNotSupportedFault_set_operationNotSupportedFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_operationNotSupportedFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_operationNotSupportedFault_free(adb_obj, env);
                                }
                               
                                fault->OperationNotSupportedFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                        {
                            adb_invalidOperationFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEANNOUNCEMENTS_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_invalidOperationFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_invalidOperationFaultType_t *faultType = adb_invalidOperationFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_invalidOperationFault_set_invalidOperationFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_invalidOperationFault_free(adb_obj, env);
                                }
                               
                                fault->InvalidOperationFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                        else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                        {
                            adb_internalServerErrorFault_t* adb_obj = NULL;

                            AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEANNOUNCEMENTS_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                            
                            adb_obj = adb_internalServerErrorFault_create(env);
                            if(adb_obj)
                            {
                                if(soap_reason_text)
                                {
                                    adb_internalServerErrorFaultType_t *faultType = adb_internalServerErrorFaultType_create_with_values(env, soap_reason_text);
                                    if(faultType)
                                    {
                                        adb_internalServerErrorFault_set_internalServerErrorFault(adb_obj, env, faultType);
                                    }
                                    else {
                                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                    }
                                }
                                else if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                {
                                    adb_internalServerErrorFault_free(adb_obj, env);
                                }
                               
                                fault->InternalServerErrorFault = adb_obj;
                            }
                            else {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                            }
                        }
            
                    }
                }
                AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                return NULL;
             }
            
                    if ( NULL == ret_node )
                    {
                        AXIS2_ERROR_SET(env->error, env->error->error_number, AXIS2_FAILURE);
                        return (adb_announcements_type0_t*)NULL;
                    }
                    ret_val = adb_getServiceAnnouncementsResponse_create(env);

                    if(adb_getServiceAnnouncementsResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                    {
                        if(ret_val != NULL)
                        {
                            adb_getServiceAnnouncementsResponse_free(ret_val, env);
                        }

                        AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the adb_getServiceAnnouncementsResponse_deserialize: "
                                                                "This should be due to an invalid XML");
                        AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_SUCH_ELEMENT, AXIS2_FAILURE);
                        return (adb_announcements_type0_t*)NULL;
                    }

                   
                            return adb_getServiceAnnouncementsResponse_free_popping_value(ret_val, env);
                       
        }
        

        struct axis2_stub_Kolibre_DaisyOnline_getContentResources_callback_data
        {   
            void *data;
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_resources_type0_t* _getContentResourcesResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_getContentResources_fault fault, void *data);
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data);
        };

        static axis2_status_t AXIS2_CALL axis2_stub_on_error_Kolibre_DaisyOnline_getContentResources(axis2_callback_t *callback, const axutil_env_t *env, int exception)
        {
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_getContentResources_callback_data* callback_data = NULL;

            void *user_data = NULL;

            axis2_status_t status;
        
            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_getContentResources_callback_data*)axis2_callback_get_data(callback);
        
            user_data = callback_data->data;
            on_error = callback_data->on_error;
        
            status = on_error(env, exception, user_data);

            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        } 

        axis2_status_t AXIS2_CALL axis2_stub_on_complete_Kolibre_DaisyOnline_getContentResources(axis2_callback_t *callback, const axutil_env_t *env)
        {
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_resources_type0_t* _getContentResourcesResponse,
                                                       axis2_stub_Kolibre_DaisyOnline_getContentResources_fault fault, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_getContentResources_callback_data* callback_data = NULL;
            void *user_data = NULL;
            axis2_status_t status = AXIS2_SUCCESS;
            axis2_stub_Kolibre_DaisyOnline_getContentResources_fault fault;
            adb_getContentResourcesResponse_t* ret_val;
            

            axiom_node_t *ret_node = NULL;
            axiom_soap_envelope_t *soap_envelope = NULL;

            

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_getContentResources_callback_data*)axis2_callback_get_data(callback);

            
            soap_envelope = axis2_callback_get_envelope(callback, env);
            if(soap_envelope)
            {
                axiom_soap_body_t *soap_body;
                soap_body = axiom_soap_envelope_get_body(soap_envelope, env);
                if(soap_body)
                {
                    axiom_soap_fault_t *soap_fault = NULL;
                    axiom_node_t *body_node = axiom_soap_body_get_base_node(soap_body, env);

                    
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                    if (soap_fault)
                    {
                        axiom_soap_fault_detail_t *soap_detail = NULL;
                        axiom_node_t *soap_detail_node = NULL;

                        soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                        if(soap_detail) 
                        {
                            soap_detail_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);    
                        }
                        if(soap_detail_node) 
                        {
                            axis2_char_t *detail_local_name = NULL;
                            axiom_element_t *soap_detail_ele = NULL;
                            
                            if(axiom_node_get_node_type(soap_detail_node, env) == AXIOM_ELEMENT)
                            {
                                soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                            }
                           
                            if(soap_detail_ele)
                            {
                                detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                            }

                            if(!detail_local_name)
                            {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                            {
                                adb_noActiveSessionFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTRESOURCES_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_noActiveSessionFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_noActiveSessionFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_noActiveSessionFault_free(adb_obj, env);
                                    }
                                   
                                    fault.NoActiveSessionFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                            {
                                adb_internalServerErrorFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTRESOURCES_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_internalServerErrorFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_internalServerErrorFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InternalServerErrorFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                            {
                                adb_invalidOperationFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTRESOURCES_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_invalidOperationFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_invalidOperationFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InvalidOperationFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                            {
                                adb_invalidParameterFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTRESOURCES_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_invalidParameterFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_invalidParameterFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_invalidParameterFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InvalidParameterFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                        }
                    }
                    else   if(body_node)
                    {
                        ret_node = axiom_node_get_first_child(body_node, env);
                    }
                }
                
                
            }

            user_data = callback_data->data;
            on_complete = callback_data->on_complete;

            
                    if(ret_node != NULL)
                    {
                        ret_val = adb_getContentResourcesResponse_create(env);
     
                        if(adb_getContentResourcesResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                        {
                            AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the LendResponse_deserialize: "
                                                                    "This should be due to an invalid XML");
                            adb_getContentResourcesResponse_free(ret_val, env);
                            ret_val = NULL;
                        }
                     }
                     else
                     {
                         ret_val = NULL; 
                     }

                     
                         if(ret_val == NULL) {
                            status = on_complete(env, (adb_resources_type0_t*)NULL, fault , user_data);
                         }
                         else {
                            status = on_complete(env, adb_getContentResourcesResponse_free_popping_value(ret_val, env), fault , user_data);
                         }
                         
 
            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        }

        /**
          * auto generated method signature for asynchronous invocations
          * for "getContentResources|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub
          * @param env environment ( mandatory)
          * @param _contentID of the axis2_char_t*
          * @param user_data user data to be accessed by the callbacks
          * @param on_complete callback to handle on complete
          * @param on_error callback to handle on error
          */

         void AXIS2_CALL
         axis2_stub_start_op_Kolibre_DaisyOnline_getContentResources( axis2_stub_t *stub, const axutil_env_t *env,
                                              axis2_char_t* _contentID,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_resources_type0_t* _getContentResourcesResponse,
                                                      axis2_stub_Kolibre_DaisyOnline_getContentResources_fault fault, void *data) ,
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) )
         {

            axis2_callback_t *callback = NULL;

            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;

            const axis2_char_t *soap_action = NULL;
            axiom_node_t *payload = NULL;

            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            
            
            struct axis2_stub_Kolibre_DaisyOnline_getContentResources_callback_data *callback_data;

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_getContentResources_callback_data*) AXIS2_MALLOC(env->allocator, 
                                    sizeof(struct axis2_stub_Kolibre_DaisyOnline_getContentResources_callback_data));
            if(NULL == callback_data)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "Can not allocate memeory for the callback data structures");
                return;
            }
            

            
                            {
                               adb_getContentResources_t* wrapper_adb_obj = adb_getContentResources_create_with_values(env,
                                    _contentID);
                                payload = adb_getContentResources_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                            }
                           


            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
              AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
              AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "options is null in stub");
              return;
            }

            soap_act =axis2_options_get_soap_action (options, env);
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/getContentResources";
              soap_act = axutil_string_create(env, "/getContentResources");
              axis2_options_set_soap_action(options, env, soap_act);
            }
            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             

            callback = axis2_callback_create(env);
            /* Set our on_complete fucntion pointer to the callback object */
            axis2_callback_set_on_complete(callback, axis2_stub_on_complete_Kolibre_DaisyOnline_getContentResources);
            /* Set our on_error function pointer to the callback object */
            axis2_callback_set_on_error(callback, axis2_stub_on_error_Kolibre_DaisyOnline_getContentResources);

            callback_data-> data = user_data;
            callback_data-> on_complete = on_complete;
            callback_data-> on_error = on_error;

            axis2_callback_set_data(callback, (void*)callback_data);

            /* Send request */
            axis2_svc_client_send_receive_non_blocking(svc_client, env, payload, callback);
            
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);
              
              axis2_options_set_action(options, env, NULL);
            }
         }

         

        struct axis2_stub_Kolibre_DaisyOnline_getContentMetadata_callback_data
        {   
            void *data;
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_contentMetadata_type0_t* _getContentMetadataResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_getContentMetadata_fault fault, void *data);
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data);
        };

        static axis2_status_t AXIS2_CALL axis2_stub_on_error_Kolibre_DaisyOnline_getContentMetadata(axis2_callback_t *callback, const axutil_env_t *env, int exception)
        {
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_getContentMetadata_callback_data* callback_data = NULL;

            void *user_data = NULL;

            axis2_status_t status;
        
            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_getContentMetadata_callback_data*)axis2_callback_get_data(callback);
        
            user_data = callback_data->data;
            on_error = callback_data->on_error;
        
            status = on_error(env, exception, user_data);

            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        } 

        axis2_status_t AXIS2_CALL axis2_stub_on_complete_Kolibre_DaisyOnline_getContentMetadata(axis2_callback_t *callback, const axutil_env_t *env)
        {
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_contentMetadata_type0_t* _getContentMetadataResponse,
                                                       axis2_stub_Kolibre_DaisyOnline_getContentMetadata_fault fault, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_getContentMetadata_callback_data* callback_data = NULL;
            void *user_data = NULL;
            axis2_status_t status = AXIS2_SUCCESS;
            axis2_stub_Kolibre_DaisyOnline_getContentMetadata_fault fault;
            adb_getContentMetadataResponse_t* ret_val;
            

            axiom_node_t *ret_node = NULL;
            axiom_soap_envelope_t *soap_envelope = NULL;

            

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_getContentMetadata_callback_data*)axis2_callback_get_data(callback);

            
            soap_envelope = axis2_callback_get_envelope(callback, env);
            if(soap_envelope)
            {
                axiom_soap_body_t *soap_body;
                soap_body = axiom_soap_envelope_get_body(soap_envelope, env);
                if(soap_body)
                {
                    axiom_soap_fault_t *soap_fault = NULL;
                    axiom_node_t *body_node = axiom_soap_body_get_base_node(soap_body, env);

                    
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                    if (soap_fault)
                    {
                        axiom_soap_fault_detail_t *soap_detail = NULL;
                        axiom_node_t *soap_detail_node = NULL;

                        soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                        if(soap_detail) 
                        {
                            soap_detail_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);    
                        }
                        if(soap_detail_node) 
                        {
                            axis2_char_t *detail_local_name = NULL;
                            axiom_element_t *soap_detail_ele = NULL;
                            
                            if(axiom_node_get_node_type(soap_detail_node, env) == AXIOM_ELEMENT)
                            {
                                soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                            }
                           
                            if(soap_detail_ele)
                            {
                                detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                            }

                            if(!detail_local_name)
                            {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                            {
                                adb_invalidOperationFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTMETADATA_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_invalidOperationFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_invalidOperationFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InvalidOperationFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                            {
                                adb_invalidParameterFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTMETADATA_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_invalidParameterFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_invalidParameterFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_invalidParameterFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InvalidParameterFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                            {
                                adb_noActiveSessionFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTMETADATA_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_noActiveSessionFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_noActiveSessionFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_noActiveSessionFault_free(adb_obj, env);
                                    }
                                   
                                    fault.NoActiveSessionFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                            {
                                adb_internalServerErrorFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTMETADATA_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_internalServerErrorFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_internalServerErrorFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InternalServerErrorFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                        }
                    }
                    else   if(body_node)
                    {
                        ret_node = axiom_node_get_first_child(body_node, env);
                    }
                }
                
                
            }

            user_data = callback_data->data;
            on_complete = callback_data->on_complete;

            
                    if(ret_node != NULL)
                    {
                        ret_val = adb_getContentMetadataResponse_create(env);
     
                        if(adb_getContentMetadataResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                        {
                            AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the LendResponse_deserialize: "
                                                                    "This should be due to an invalid XML");
                            adb_getContentMetadataResponse_free(ret_val, env);
                            ret_val = NULL;
                        }
                     }
                     else
                     {
                         ret_val = NULL; 
                     }

                     
                         if(ret_val == NULL) {
                            status = on_complete(env, (adb_contentMetadata_type0_t*)NULL, fault , user_data);
                         }
                         else {
                            status = on_complete(env, adb_getContentMetadataResponse_free_popping_value(ret_val, env), fault , user_data);
                         }
                         
 
            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        }

        /**
          * auto generated method signature for asynchronous invocations
          * for "getContentMetadata|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub
          * @param env environment ( mandatory)
          * @param _contentID0 of the axis2_char_t*
          * @param user_data user data to be accessed by the callbacks
          * @param on_complete callback to handle on complete
          * @param on_error callback to handle on error
          */

         void AXIS2_CALL
         axis2_stub_start_op_Kolibre_DaisyOnline_getContentMetadata( axis2_stub_t *stub, const axutil_env_t *env,
                                              axis2_char_t* _contentID0,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_contentMetadata_type0_t* _getContentMetadataResponse,
                                                      axis2_stub_Kolibre_DaisyOnline_getContentMetadata_fault fault, void *data) ,
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) )
         {

            axis2_callback_t *callback = NULL;

            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;

            const axis2_char_t *soap_action = NULL;
            axiom_node_t *payload = NULL;

            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            
            
            struct axis2_stub_Kolibre_DaisyOnline_getContentMetadata_callback_data *callback_data;

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_getContentMetadata_callback_data*) AXIS2_MALLOC(env->allocator, 
                                    sizeof(struct axis2_stub_Kolibre_DaisyOnline_getContentMetadata_callback_data));
            if(NULL == callback_data)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "Can not allocate memeory for the callback data structures");
                return;
            }
            

            
                            {
                               adb_getContentMetadata_t* wrapper_adb_obj = adb_getContentMetadata_create_with_values(env,
                                    _contentID0);
                                payload = adb_getContentMetadata_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                            }
                           


            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
              AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
              AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "options is null in stub");
              return;
            }

            soap_act =axis2_options_get_soap_action (options, env);
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/getContentMetadata";
              soap_act = axutil_string_create(env, "/getContentMetadata");
              axis2_options_set_soap_action(options, env, soap_act);
            }
            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             

            callback = axis2_callback_create(env);
            /* Set our on_complete fucntion pointer to the callback object */
            axis2_callback_set_on_complete(callback, axis2_stub_on_complete_Kolibre_DaisyOnline_getContentMetadata);
            /* Set our on_error function pointer to the callback object */
            axis2_callback_set_on_error(callback, axis2_stub_on_error_Kolibre_DaisyOnline_getContentMetadata);

            callback_data-> data = user_data;
            callback_data-> on_complete = on_complete;
            callback_data-> on_error = on_error;

            axis2_callback_set_data(callback, (void*)callback_data);

            /* Send request */
            axis2_svc_client_send_receive_non_blocking(svc_client, env, payload, callback);
            
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);
              
              axis2_options_set_action(options, env, NULL);
            }
         }

         

        struct axis2_stub_Kolibre_DaisyOnline_markAnnouncementsAsRead_callback_data
        {   
            void *data;
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _markAnnouncementsAsReadResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_markAnnouncementsAsRead_fault fault, void *data);
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data);
        };

        static axis2_status_t AXIS2_CALL axis2_stub_on_error_Kolibre_DaisyOnline_markAnnouncementsAsRead(axis2_callback_t *callback, const axutil_env_t *env, int exception)
        {
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_markAnnouncementsAsRead_callback_data* callback_data = NULL;

            void *user_data = NULL;

            axis2_status_t status;
        
            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_markAnnouncementsAsRead_callback_data*)axis2_callback_get_data(callback);
        
            user_data = callback_data->data;
            on_error = callback_data->on_error;
        
            status = on_error(env, exception, user_data);

            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        } 

        axis2_status_t AXIS2_CALL axis2_stub_on_complete_Kolibre_DaisyOnline_markAnnouncementsAsRead(axis2_callback_t *callback, const axutil_env_t *env)
        {
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _markAnnouncementsAsReadResponse,
                                                       axis2_stub_Kolibre_DaisyOnline_markAnnouncementsAsRead_fault fault, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_markAnnouncementsAsRead_callback_data* callback_data = NULL;
            void *user_data = NULL;
            axis2_status_t status = AXIS2_SUCCESS;
            axis2_stub_Kolibre_DaisyOnline_markAnnouncementsAsRead_fault fault;
            adb_markAnnouncementsAsReadResponse_t* ret_val;
            

            axiom_node_t *ret_node = NULL;
            axiom_soap_envelope_t *soap_envelope = NULL;

            

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_markAnnouncementsAsRead_callback_data*)axis2_callback_get_data(callback);

            
            soap_envelope = axis2_callback_get_envelope(callback, env);
            if(soap_envelope)
            {
                axiom_soap_body_t *soap_body;
                soap_body = axiom_soap_envelope_get_body(soap_envelope, env);
                if(soap_body)
                {
                    axiom_soap_fault_t *soap_fault = NULL;
                    axiom_node_t *body_node = axiom_soap_body_get_base_node(soap_body, env);

                    
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                    if (soap_fault)
                    {
                        axiom_soap_fault_detail_t *soap_detail = NULL;
                        axiom_node_t *soap_detail_node = NULL;

                        soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                        if(soap_detail) 
                        {
                            soap_detail_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);    
                        }
                        if(soap_detail_node) 
                        {
                            axis2_char_t *detail_local_name = NULL;
                            axiom_element_t *soap_detail_ele = NULL;
                            
                            if(axiom_node_get_node_type(soap_detail_node, env) == AXIOM_ELEMENT)
                            {
                                soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                            }
                           
                            if(soap_detail_ele)
                            {
                                detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                            }

                            if(!detail_local_name)
                            {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                            {
                                adb_noActiveSessionFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_MARKANNOUNCEMENTSASREAD_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_noActiveSessionFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_noActiveSessionFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_noActiveSessionFault_free(adb_obj, env);
                                    }
                                   
                                    fault.NoActiveSessionFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "operationNotSupportedFault"))
                            {
                                adb_operationNotSupportedFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_MARKANNOUNCEMENTSASREAD_FAULT_OPERATIONNOTSUPPORTEDFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_operationNotSupportedFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_operationNotSupportedFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_operationNotSupportedFault_free(adb_obj, env);
                                    }
                                   
                                    fault.OperationNotSupportedFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                            {
                                adb_invalidParameterFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_MARKANNOUNCEMENTSASREAD_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_invalidParameterFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_invalidParameterFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_invalidParameterFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InvalidParameterFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                            {
                                adb_invalidOperationFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_MARKANNOUNCEMENTSASREAD_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_invalidOperationFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_invalidOperationFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InvalidOperationFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                            {
                                adb_internalServerErrorFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_MARKANNOUNCEMENTSASREAD_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_internalServerErrorFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_internalServerErrorFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InternalServerErrorFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                        }
                    }
                    else   if(body_node)
                    {
                        ret_node = axiom_node_get_first_child(body_node, env);
                    }
                }
                
                
            }

            user_data = callback_data->data;
            on_complete = callback_data->on_complete;

            
                    if(ret_node != NULL)
                    {
                        ret_val = adb_markAnnouncementsAsReadResponse_create(env);
     
                        if(adb_markAnnouncementsAsReadResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                        {
                            AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the LendResponse_deserialize: "
                                                                    "This should be due to an invalid XML");
                            adb_markAnnouncementsAsReadResponse_free(ret_val, env);
                            ret_val = NULL;
                        }
                     }
                     else
                     {
                         ret_val = NULL; 
                     }

                     
                         if(ret_val == NULL) {
                            status = on_complete(env, (axis2_bool_t)NULL, fault , user_data);
                         }
                         else {
                            status = on_complete(env, adb_markAnnouncementsAsReadResponse_free_popping_value(ret_val, env), fault , user_data);
                         }
                         
 
            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        }

        /**
          * auto generated method signature for asynchronous invocations
          * for "markAnnouncementsAsRead|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub
          * @param env environment ( mandatory)
          * @param _read of the adb_read_type0_t*
          * @param user_data user data to be accessed by the callbacks
          * @param on_complete callback to handle on complete
          * @param on_error callback to handle on error
          */

         void AXIS2_CALL
         axis2_stub_start_op_Kolibre_DaisyOnline_markAnnouncementsAsRead( axis2_stub_t *stub, const axutil_env_t *env,
                                              adb_read_type0_t* _read,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _markAnnouncementsAsReadResponse,
                                                      axis2_stub_Kolibre_DaisyOnline_markAnnouncementsAsRead_fault fault, void *data) ,
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) )
         {

            axis2_callback_t *callback = NULL;

            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;

            const axis2_char_t *soap_action = NULL;
            axiom_node_t *payload = NULL;

            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            
            
            struct axis2_stub_Kolibre_DaisyOnline_markAnnouncementsAsRead_callback_data *callback_data;

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_markAnnouncementsAsRead_callback_data*) AXIS2_MALLOC(env->allocator, 
                                    sizeof(struct axis2_stub_Kolibre_DaisyOnline_markAnnouncementsAsRead_callback_data));
            if(NULL == callback_data)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "Can not allocate memeory for the callback data structures");
                return;
            }
            

            
                            {
                               adb_markAnnouncementsAsRead_t* wrapper_adb_obj = adb_markAnnouncementsAsRead_create_with_values(env,
                                    _read);
                                payload = adb_markAnnouncementsAsRead_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                            }
                           


            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
              AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
              AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "options is null in stub");
              return;
            }

            soap_act =axis2_options_get_soap_action (options, env);
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/markAnnouncementsAsRead";
              soap_act = axutil_string_create(env, "/markAnnouncementsAsRead");
              axis2_options_set_soap_action(options, env, soap_act);
            }
            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             

            callback = axis2_callback_create(env);
            /* Set our on_complete fucntion pointer to the callback object */
            axis2_callback_set_on_complete(callback, axis2_stub_on_complete_Kolibre_DaisyOnline_markAnnouncementsAsRead);
            /* Set our on_error function pointer to the callback object */
            axis2_callback_set_on_error(callback, axis2_stub_on_error_Kolibre_DaisyOnline_markAnnouncementsAsRead);

            callback_data-> data = user_data;
            callback_data-> on_complete = on_complete;
            callback_data-> on_error = on_error;

            axis2_callback_set_data(callback, (void*)callback_data);

            /* Send request */
            axis2_svc_client_send_receive_non_blocking(svc_client, env, payload, callback);
            
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);
              
              axis2_options_set_action(options, env, NULL);
            }
         }

         

        struct axis2_stub_Kolibre_DaisyOnline_getBookmarks_callback_data
        {   
            void *data;
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_bookmarkSet_type0_t* _getBookmarksResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_getBookmarks_fault fault, void *data);
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data);
        };

        static axis2_status_t AXIS2_CALL axis2_stub_on_error_Kolibre_DaisyOnline_getBookmarks(axis2_callback_t *callback, const axutil_env_t *env, int exception)
        {
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_getBookmarks_callback_data* callback_data = NULL;

            void *user_data = NULL;

            axis2_status_t status;
        
            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_getBookmarks_callback_data*)axis2_callback_get_data(callback);
        
            user_data = callback_data->data;
            on_error = callback_data->on_error;
        
            status = on_error(env, exception, user_data);

            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        } 

        axis2_status_t AXIS2_CALL axis2_stub_on_complete_Kolibre_DaisyOnline_getBookmarks(axis2_callback_t *callback, const axutil_env_t *env)
        {
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_bookmarkSet_type0_t* _getBookmarksResponse,
                                                       axis2_stub_Kolibre_DaisyOnline_getBookmarks_fault fault, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_getBookmarks_callback_data* callback_data = NULL;
            void *user_data = NULL;
            axis2_status_t status = AXIS2_SUCCESS;
            axis2_stub_Kolibre_DaisyOnline_getBookmarks_fault fault;
            adb_getBookmarksResponse_t* ret_val;
            

            axiom_node_t *ret_node = NULL;
            axiom_soap_envelope_t *soap_envelope = NULL;

            

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_getBookmarks_callback_data*)axis2_callback_get_data(callback);

            
            soap_envelope = axis2_callback_get_envelope(callback, env);
            if(soap_envelope)
            {
                axiom_soap_body_t *soap_body;
                soap_body = axiom_soap_envelope_get_body(soap_envelope, env);
                if(soap_body)
                {
                    axiom_soap_fault_t *soap_fault = NULL;
                    axiom_node_t *body_node = axiom_soap_body_get_base_node(soap_body, env);

                    
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                    if (soap_fault)
                    {
                        axiom_soap_fault_detail_t *soap_detail = NULL;
                        axiom_node_t *soap_detail_node = NULL;

                        soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                        if(soap_detail) 
                        {
                            soap_detail_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);    
                        }
                        if(soap_detail_node) 
                        {
                            axis2_char_t *detail_local_name = NULL;
                            axiom_element_t *soap_detail_ele = NULL;
                            
                            if(axiom_node_get_node_type(soap_detail_node, env) == AXIOM_ELEMENT)
                            {
                                soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                            }
                           
                            if(soap_detail_ele)
                            {
                                detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                            }

                            if(!detail_local_name)
                            {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "operationNotSupportedFault"))
                            {
                                adb_operationNotSupportedFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETBOOKMARKS_FAULT_OPERATIONNOTSUPPORTEDFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_operationNotSupportedFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_operationNotSupportedFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_operationNotSupportedFault_free(adb_obj, env);
                                    }
                                   
                                    fault.OperationNotSupportedFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                            {
                                adb_internalServerErrorFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETBOOKMARKS_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_internalServerErrorFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_internalServerErrorFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InternalServerErrorFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                            {
                                adb_invalidParameterFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETBOOKMARKS_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_invalidParameterFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_invalidParameterFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_invalidParameterFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InvalidParameterFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                            {
                                adb_invalidOperationFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETBOOKMARKS_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_invalidOperationFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_invalidOperationFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InvalidOperationFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                            {
                                adb_noActiveSessionFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETBOOKMARKS_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_noActiveSessionFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_noActiveSessionFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_noActiveSessionFault_free(adb_obj, env);
                                    }
                                   
                                    fault.NoActiveSessionFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                        }
                    }
                    else   if(body_node)
                    {
                        ret_node = axiom_node_get_first_child(body_node, env);
                    }
                }
                
                
            }

            user_data = callback_data->data;
            on_complete = callback_data->on_complete;

            
                    if(ret_node != NULL)
                    {
                        ret_val = adb_getBookmarksResponse_create(env);
     
                        if(adb_getBookmarksResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                        {
                            AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the LendResponse_deserialize: "
                                                                    "This should be due to an invalid XML");
                            adb_getBookmarksResponse_free(ret_val, env);
                            ret_val = NULL;
                        }
                     }
                     else
                     {
                         ret_val = NULL; 
                     }

                     
                         if(ret_val == NULL) {
                            status = on_complete(env, (adb_bookmarkSet_type0_t*)NULL, fault , user_data);
                         }
                         else {
                            status = on_complete(env, adb_getBookmarksResponse_free_popping_value(ret_val, env), fault , user_data);
                         }
                         
 
            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        }

        /**
          * auto generated method signature for asynchronous invocations
          * for "getBookmarks|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub
          * @param env environment ( mandatory)
          * @param _contentID1 of the axis2_char_t*
          * @param user_data user data to be accessed by the callbacks
          * @param on_complete callback to handle on complete
          * @param on_error callback to handle on error
          */

         void AXIS2_CALL
         axis2_stub_start_op_Kolibre_DaisyOnline_getBookmarks( axis2_stub_t *stub, const axutil_env_t *env,
                                              axis2_char_t* _contentID1,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_bookmarkSet_type0_t* _getBookmarksResponse,
                                                      axis2_stub_Kolibre_DaisyOnline_getBookmarks_fault fault, void *data) ,
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) )
         {

            axis2_callback_t *callback = NULL;

            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;

            const axis2_char_t *soap_action = NULL;
            axiom_node_t *payload = NULL;

            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            
            
            struct axis2_stub_Kolibre_DaisyOnline_getBookmarks_callback_data *callback_data;

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_getBookmarks_callback_data*) AXIS2_MALLOC(env->allocator, 
                                    sizeof(struct axis2_stub_Kolibre_DaisyOnline_getBookmarks_callback_data));
            if(NULL == callback_data)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "Can not allocate memeory for the callback data structures");
                return;
            }
            

            
                            {
                               adb_getBookmarks_t* wrapper_adb_obj = adb_getBookmarks_create_with_values(env,
                                    _contentID1);
                                payload = adb_getBookmarks_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                            }
                           


            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
              AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
              AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "options is null in stub");
              return;
            }

            soap_act =axis2_options_get_soap_action (options, env);
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/getBookmarks";
              soap_act = axutil_string_create(env, "/getBookmarks");
              axis2_options_set_soap_action(options, env, soap_act);
            }
            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             

            callback = axis2_callback_create(env);
            /* Set our on_complete fucntion pointer to the callback object */
            axis2_callback_set_on_complete(callback, axis2_stub_on_complete_Kolibre_DaisyOnline_getBookmarks);
            /* Set our on_error function pointer to the callback object */
            axis2_callback_set_on_error(callback, axis2_stub_on_error_Kolibre_DaisyOnline_getBookmarks);

            callback_data-> data = user_data;
            callback_data-> on_complete = on_complete;
            callback_data-> on_error = on_error;

            axis2_callback_set_data(callback, (void*)callback_data);

            /* Send request */
            axis2_svc_client_send_receive_non_blocking(svc_client, env, payload, callback);
            
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);
              
              axis2_options_set_action(options, env, NULL);
            }
         }

         

        struct axis2_stub_Kolibre_DaisyOnline_getServiceAttributes_callback_data
        {   
            void *data;
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_serviceAttributes_type0_t* _getServiceAttributesResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_getServiceAttributes_fault fault, void *data);
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data);
        };

        static axis2_status_t AXIS2_CALL axis2_stub_on_error_Kolibre_DaisyOnline_getServiceAttributes(axis2_callback_t *callback, const axutil_env_t *env, int exception)
        {
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_getServiceAttributes_callback_data* callback_data = NULL;

            void *user_data = NULL;

            axis2_status_t status;
        
            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_getServiceAttributes_callback_data*)axis2_callback_get_data(callback);
        
            user_data = callback_data->data;
            on_error = callback_data->on_error;
        
            status = on_error(env, exception, user_data);

            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        } 

        axis2_status_t AXIS2_CALL axis2_stub_on_complete_Kolibre_DaisyOnline_getServiceAttributes(axis2_callback_t *callback, const axutil_env_t *env)
        {
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_serviceAttributes_type0_t* _getServiceAttributesResponse,
                                                       axis2_stub_Kolibre_DaisyOnline_getServiceAttributes_fault fault, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_getServiceAttributes_callback_data* callback_data = NULL;
            void *user_data = NULL;
            axis2_status_t status = AXIS2_SUCCESS;
            axis2_stub_Kolibre_DaisyOnline_getServiceAttributes_fault fault;
            adb_getServiceAttributesResponse_t* ret_val;
            

            axiom_node_t *ret_node = NULL;
            axiom_soap_envelope_t *soap_envelope = NULL;

            

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_getServiceAttributes_callback_data*)axis2_callback_get_data(callback);

            
            soap_envelope = axis2_callback_get_envelope(callback, env);
            if(soap_envelope)
            {
                axiom_soap_body_t *soap_body;
                soap_body = axiom_soap_envelope_get_body(soap_envelope, env);
                if(soap_body)
                {
                    axiom_soap_fault_t *soap_fault = NULL;
                    axiom_node_t *body_node = axiom_soap_body_get_base_node(soap_body, env);

                    
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                    if (soap_fault)
                    {
                        axiom_soap_fault_detail_t *soap_detail = NULL;
                        axiom_node_t *soap_detail_node = NULL;

                        soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                        if(soap_detail) 
                        {
                            soap_detail_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);    
                        }
                        if(soap_detail_node) 
                        {
                            axis2_char_t *detail_local_name = NULL;
                            axiom_element_t *soap_detail_ele = NULL;
                            
                            if(axiom_node_get_node_type(soap_detail_node, env) == AXIOM_ELEMENT)
                            {
                                soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                            }
                           
                            if(soap_detail_ele)
                            {
                                detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                            }

                            if(!detail_local_name)
                            {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                            {
                                adb_invalidOperationFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEATTRIBUTES_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_invalidOperationFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_invalidOperationFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InvalidOperationFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                            {
                                adb_internalServerErrorFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEATTRIBUTES_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_internalServerErrorFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_internalServerErrorFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InternalServerErrorFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                            {
                                adb_noActiveSessionFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEATTRIBUTES_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_noActiveSessionFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_noActiveSessionFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_noActiveSessionFault_free(adb_obj, env);
                                    }
                                   
                                    fault.NoActiveSessionFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                        }
                    }
                    else   if(body_node)
                    {
                        ret_node = axiom_node_get_first_child(body_node, env);
                    }
                }
                
                
            }

            user_data = callback_data->data;
            on_complete = callback_data->on_complete;

            
                    if(ret_node != NULL)
                    {
                        ret_val = adb_getServiceAttributesResponse_create(env);
     
                        if(adb_getServiceAttributesResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                        {
                            AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the LendResponse_deserialize: "
                                                                    "This should be due to an invalid XML");
                            adb_getServiceAttributesResponse_free(ret_val, env);
                            ret_val = NULL;
                        }
                     }
                     else
                     {
                         ret_val = NULL; 
                     }

                     
                         if(ret_val == NULL) {
                            status = on_complete(env, (adb_serviceAttributes_type0_t*)NULL, fault , user_data);
                         }
                         else {
                            status = on_complete(env, adb_getServiceAttributesResponse_free_popping_value(ret_val, env), fault , user_data);
                         }
                         
 
            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        }

        /**
          * auto generated method signature for asynchronous invocations
          * for "getServiceAttributes|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub
          * @param env environment ( mandatory)
          * @param user_data user data to be accessed by the callbacks
          * @param on_complete callback to handle on complete
          * @param on_error callback to handle on error
          */

         void AXIS2_CALL
         axis2_stub_start_op_Kolibre_DaisyOnline_getServiceAttributes( axis2_stub_t *stub, const axutil_env_t *env,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_serviceAttributes_type0_t* _getServiceAttributesResponse,
                                                      axis2_stub_Kolibre_DaisyOnline_getServiceAttributes_fault fault, void *data) ,
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) )
         {

            axis2_callback_t *callback = NULL;

            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;

            const axis2_char_t *soap_action = NULL;
            axiom_node_t *payload = NULL;

            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            
            
            struct axis2_stub_Kolibre_DaisyOnline_getServiceAttributes_callback_data *callback_data;

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_getServiceAttributes_callback_data*) AXIS2_MALLOC(env->allocator, 
                                    sizeof(struct axis2_stub_Kolibre_DaisyOnline_getServiceAttributes_callback_data));
            if(NULL == callback_data)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "Can not allocate memeory for the callback data structures");
                return;
            }
            

            
                            {
                               adb_getServiceAttributes_t* wrapper_adb_obj = adb_getServiceAttributes_create_with_values(env);
                                payload = adb_getServiceAttributes_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                            }
                           


            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
              AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
              AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "options is null in stub");
              return;
            }

            soap_act =axis2_options_get_soap_action (options, env);
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/getServiceAttributes";
              soap_act = axutil_string_create(env, "/getServiceAttributes");
              axis2_options_set_soap_action(options, env, soap_act);
            }
            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             

            callback = axis2_callback_create(env);
            /* Set our on_complete fucntion pointer to the callback object */
            axis2_callback_set_on_complete(callback, axis2_stub_on_complete_Kolibre_DaisyOnline_getServiceAttributes);
            /* Set our on_error function pointer to the callback object */
            axis2_callback_set_on_error(callback, axis2_stub_on_error_Kolibre_DaisyOnline_getServiceAttributes);

            callback_data-> data = user_data;
            callback_data-> on_complete = on_complete;
            callback_data-> on_error = on_error;

            axis2_callback_set_data(callback, (void*)callback_data);

            /* Send request */
            axis2_svc_client_send_receive_non_blocking(svc_client, env, payload, callback);
            
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);
              
              axis2_options_set_action(options, env, NULL);
            }
         }

         

        struct axis2_stub_Kolibre_DaisyOnline_setBookmarks_callback_data
        {   
            void *data;
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _setBookmarksResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_setBookmarks_fault fault, void *data);
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data);
        };

        static axis2_status_t AXIS2_CALL axis2_stub_on_error_Kolibre_DaisyOnline_setBookmarks(axis2_callback_t *callback, const axutil_env_t *env, int exception)
        {
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_setBookmarks_callback_data* callback_data = NULL;

            void *user_data = NULL;

            axis2_status_t status;
        
            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_setBookmarks_callback_data*)axis2_callback_get_data(callback);
        
            user_data = callback_data->data;
            on_error = callback_data->on_error;
        
            status = on_error(env, exception, user_data);

            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        } 

        axis2_status_t AXIS2_CALL axis2_stub_on_complete_Kolibre_DaisyOnline_setBookmarks(axis2_callback_t *callback, const axutil_env_t *env)
        {
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _setBookmarksResponse,
                                                       axis2_stub_Kolibre_DaisyOnline_setBookmarks_fault fault, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_setBookmarks_callback_data* callback_data = NULL;
            void *user_data = NULL;
            axis2_status_t status = AXIS2_SUCCESS;
            axis2_stub_Kolibre_DaisyOnline_setBookmarks_fault fault;
            adb_setBookmarksResponse_t* ret_val;
            

            axiom_node_t *ret_node = NULL;
            axiom_soap_envelope_t *soap_envelope = NULL;

            

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_setBookmarks_callback_data*)axis2_callback_get_data(callback);

            
            soap_envelope = axis2_callback_get_envelope(callback, env);
            if(soap_envelope)
            {
                axiom_soap_body_t *soap_body;
                soap_body = axiom_soap_envelope_get_body(soap_envelope, env);
                if(soap_body)
                {
                    axiom_soap_fault_t *soap_fault = NULL;
                    axiom_node_t *body_node = axiom_soap_body_get_base_node(soap_body, env);

                    
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                    if (soap_fault)
                    {
                        axiom_soap_fault_detail_t *soap_detail = NULL;
                        axiom_node_t *soap_detail_node = NULL;

                        soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                        if(soap_detail) 
                        {
                            soap_detail_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);    
                        }
                        if(soap_detail_node) 
                        {
                            axis2_char_t *detail_local_name = NULL;
                            axiom_element_t *soap_detail_ele = NULL;
                            
                            if(axiom_node_get_node_type(soap_detail_node, env) == AXIOM_ELEMENT)
                            {
                                soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                            }
                           
                            if(soap_detail_ele)
                            {
                                detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                            }

                            if(!detail_local_name)
                            {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                            {
                                adb_invalidOperationFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_SETBOOKMARKS_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_invalidOperationFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_invalidOperationFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InvalidOperationFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                            {
                                adb_invalidParameterFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_SETBOOKMARKS_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_invalidParameterFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_invalidParameterFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_invalidParameterFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InvalidParameterFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "operationNotSupportedFault"))
                            {
                                adb_operationNotSupportedFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_SETBOOKMARKS_FAULT_OPERATIONNOTSUPPORTEDFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_operationNotSupportedFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_operationNotSupportedFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_operationNotSupportedFault_free(adb_obj, env);
                                    }
                                   
                                    fault.OperationNotSupportedFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                            {
                                adb_noActiveSessionFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_SETBOOKMARKS_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_noActiveSessionFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_noActiveSessionFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_noActiveSessionFault_free(adb_obj, env);
                                    }
                                   
                                    fault.NoActiveSessionFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                            {
                                adb_internalServerErrorFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_SETBOOKMARKS_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_internalServerErrorFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_internalServerErrorFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InternalServerErrorFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                        }
                    }
                    else   if(body_node)
                    {
                        ret_node = axiom_node_get_first_child(body_node, env);
                    }
                }
                
                
            }

            user_data = callback_data->data;
            on_complete = callback_data->on_complete;

            
                    if(ret_node != NULL)
                    {
                        ret_val = adb_setBookmarksResponse_create(env);
     
                        if(adb_setBookmarksResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                        {
                            AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the LendResponse_deserialize: "
                                                                    "This should be due to an invalid XML");
                            adb_setBookmarksResponse_free(ret_val, env);
                            ret_val = NULL;
                        }
                     }
                     else
                     {
                         ret_val = NULL; 
                     }

                     
                         if(ret_val == NULL) {
                            status = on_complete(env, (axis2_bool_t)NULL, fault , user_data);
                         }
                         else {
                            status = on_complete(env, adb_setBookmarksResponse_free_popping_value(ret_val, env), fault , user_data);
                         }
                         
 
            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        }

        /**
          * auto generated method signature for asynchronous invocations
          * for "setBookmarks|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub
          * @param env environment ( mandatory)
          * @param _contentID2 of the axis2_char_t*
          * @param _bookmarkSet3 of the adb_bookmarkSet_type0_t*
          * @param user_data user data to be accessed by the callbacks
          * @param on_complete callback to handle on complete
          * @param on_error callback to handle on error
          */

         void AXIS2_CALL
         axis2_stub_start_op_Kolibre_DaisyOnline_setBookmarks( axis2_stub_t *stub, const axutil_env_t *env,
                                              axis2_char_t* _contentID2,
                                              adb_bookmarkSet_type0_t* _bookmarkSet3,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _setBookmarksResponse,
                                                      axis2_stub_Kolibre_DaisyOnline_setBookmarks_fault fault, void *data) ,
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) )
         {

            axis2_callback_t *callback = NULL;

            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;

            const axis2_char_t *soap_action = NULL;
            axiom_node_t *payload = NULL;

            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            
            
            struct axis2_stub_Kolibre_DaisyOnline_setBookmarks_callback_data *callback_data;

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_setBookmarks_callback_data*) AXIS2_MALLOC(env->allocator, 
                                    sizeof(struct axis2_stub_Kolibre_DaisyOnline_setBookmarks_callback_data));
            if(NULL == callback_data)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "Can not allocate memeory for the callback data structures");
                return;
            }
            

            
                            {
                               adb_setBookmarks_t* wrapper_adb_obj = adb_setBookmarks_create_with_values(env,
                                    _contentID2,
                                    _bookmarkSet3);
                                payload = adb_setBookmarks_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                            }
                           


            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
              AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
              AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "options is null in stub");
              return;
            }

            soap_act =axis2_options_get_soap_action (options, env);
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/setBookmarks";
              soap_act = axutil_string_create(env, "/setBookmarks");
              axis2_options_set_soap_action(options, env, soap_act);
            }
            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             

            callback = axis2_callback_create(env);
            /* Set our on_complete fucntion pointer to the callback object */
            axis2_callback_set_on_complete(callback, axis2_stub_on_complete_Kolibre_DaisyOnline_setBookmarks);
            /* Set our on_error function pointer to the callback object */
            axis2_callback_set_on_error(callback, axis2_stub_on_error_Kolibre_DaisyOnline_setBookmarks);

            callback_data-> data = user_data;
            callback_data-> on_complete = on_complete;
            callback_data-> on_error = on_error;

            axis2_callback_set_data(callback, (void*)callback_data);

            /* Send request */
            axis2_svc_client_send_receive_non_blocking(svc_client, env, payload, callback);
            
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);
              
              axis2_options_set_action(options, env, NULL);
            }
         }

         

        struct axis2_stub_Kolibre_DaisyOnline_logOn_callback_data
        {   
            void *data;
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _logOnResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_logOn_fault fault, void *data);
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data);
        };

        static axis2_status_t AXIS2_CALL axis2_stub_on_error_Kolibre_DaisyOnline_logOn(axis2_callback_t *callback, const axutil_env_t *env, int exception)
        {
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_logOn_callback_data* callback_data = NULL;

            void *user_data = NULL;

            axis2_status_t status;
        
            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_logOn_callback_data*)axis2_callback_get_data(callback);
        
            user_data = callback_data->data;
            on_error = callback_data->on_error;
        
            status = on_error(env, exception, user_data);

            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        } 

        axis2_status_t AXIS2_CALL axis2_stub_on_complete_Kolibre_DaisyOnline_logOn(axis2_callback_t *callback, const axutil_env_t *env)
        {
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _logOnResponse,
                                                       axis2_stub_Kolibre_DaisyOnline_logOn_fault fault, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_logOn_callback_data* callback_data = NULL;
            void *user_data = NULL;
            axis2_status_t status = AXIS2_SUCCESS;
            axis2_stub_Kolibre_DaisyOnline_logOn_fault fault;
            adb_logOnResponse_t* ret_val;
            

            axiom_node_t *ret_node = NULL;
            axiom_soap_envelope_t *soap_envelope = NULL;

            

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_logOn_callback_data*)axis2_callback_get_data(callback);

            
            soap_envelope = axis2_callback_get_envelope(callback, env);
            if(soap_envelope)
            {
                axiom_soap_body_t *soap_body;
                soap_body = axiom_soap_envelope_get_body(soap_envelope, env);
                if(soap_body)
                {
                    axiom_soap_fault_t *soap_fault = NULL;
                    axiom_node_t *body_node = axiom_soap_body_get_base_node(soap_body, env);

                    
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                    if (soap_fault)
                    {
                        axiom_soap_fault_detail_t *soap_detail = NULL;
                        axiom_node_t *soap_detail_node = NULL;

                        soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                        if(soap_detail) 
                        {
                            soap_detail_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);    
                        }
                        if(soap_detail_node) 
                        {
                            axis2_char_t *detail_local_name = NULL;
                            axiom_element_t *soap_detail_ele = NULL;
                            
                            if(axiom_node_get_node_type(soap_detail_node, env) == AXIOM_ELEMENT)
                            {
                                soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                            }
                           
                            if(soap_detail_ele)
                            {
                                detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                            }

                            if(!detail_local_name)
                            {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                            {
                                adb_internalServerErrorFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_LOGON_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_internalServerErrorFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_internalServerErrorFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InternalServerErrorFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                            {
                                adb_invalidOperationFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_LOGON_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_invalidOperationFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_invalidOperationFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InvalidOperationFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                        }
                    }
                    else   if(body_node)
                    {
                        ret_node = axiom_node_get_first_child(body_node, env);
                    }
                }
                
                
            }

            user_data = callback_data->data;
            on_complete = callback_data->on_complete;

            
                    if(ret_node != NULL)
                    {
                        ret_val = adb_logOnResponse_create(env);
     
                        if(adb_logOnResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                        {
                            AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the LendResponse_deserialize: "
                                                                    "This should be due to an invalid XML");
                            adb_logOnResponse_free(ret_val, env);
                            ret_val = NULL;
                        }
                     }
                     else
                     {
                         ret_val = NULL; 
                     }

                     
                         if(ret_val == NULL) {
                            status = on_complete(env, (axis2_bool_t)NULL, fault , user_data);
                         }
                         else {
                            status = on_complete(env, adb_logOnResponse_free_popping_value(ret_val, env), fault , user_data);
                         }
                         
 
            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        }

        /**
          * auto generated method signature for asynchronous invocations
          * for "logOn|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub
          * @param env environment ( mandatory)
          * @param _username of the axis2_char_t*
          * @param _password of the axis2_char_t*
          * @param user_data user data to be accessed by the callbacks
          * @param on_complete callback to handle on complete
          * @param on_error callback to handle on error
          */

         void AXIS2_CALL
         axis2_stub_start_op_Kolibre_DaisyOnline_logOn( axis2_stub_t *stub, const axutil_env_t *env,
                                              axis2_char_t* _username,
                                              axis2_char_t* _password,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _logOnResponse,
                                                      axis2_stub_Kolibre_DaisyOnline_logOn_fault fault, void *data) ,
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) )
         {

            axis2_callback_t *callback = NULL;

            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;

            const axis2_char_t *soap_action = NULL;
            axiom_node_t *payload = NULL;

            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            
            
            struct axis2_stub_Kolibre_DaisyOnline_logOn_callback_data *callback_data;

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_logOn_callback_data*) AXIS2_MALLOC(env->allocator, 
                                    sizeof(struct axis2_stub_Kolibre_DaisyOnline_logOn_callback_data));
            if(NULL == callback_data)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "Can not allocate memeory for the callback data structures");
                return;
            }
            

            
                            {
                               adb_logOn_t* wrapper_adb_obj = adb_logOn_create_with_values(env,
                                    _username,
                                    _password);
                                payload = adb_logOn_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                            }
                           


            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
              AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
              AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "options is null in stub");
              return;
            }

            soap_act =axis2_options_get_soap_action (options, env);
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/logOn";
              soap_act = axutil_string_create(env, "/logOn");
              axis2_options_set_soap_action(options, env, soap_act);
            }
            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             

            callback = axis2_callback_create(env);
            /* Set our on_complete fucntion pointer to the callback object */
            axis2_callback_set_on_complete(callback, axis2_stub_on_complete_Kolibre_DaisyOnline_logOn);
            /* Set our on_error function pointer to the callback object */
            axis2_callback_set_on_error(callback, axis2_stub_on_error_Kolibre_DaisyOnline_logOn);

            callback_data-> data = user_data;
            callback_data-> on_complete = on_complete;
            callback_data-> on_error = on_error;

            axis2_callback_set_data(callback, (void*)callback_data);

            /* Send request */
            axis2_svc_client_send_receive_non_blocking(svc_client, env, payload, callback);
            
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);
              
              axis2_options_set_action(options, env, NULL);
            }
         }

         

        struct axis2_stub_Kolibre_DaisyOnline_getContentList_callback_data
        {   
            void *data;
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_contentList_type0_t* _getContentListResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_getContentList_fault fault, void *data);
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data);
        };

        static axis2_status_t AXIS2_CALL axis2_stub_on_error_Kolibre_DaisyOnline_getContentList(axis2_callback_t *callback, const axutil_env_t *env, int exception)
        {
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_getContentList_callback_data* callback_data = NULL;

            void *user_data = NULL;

            axis2_status_t status;
        
            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_getContentList_callback_data*)axis2_callback_get_data(callback);
        
            user_data = callback_data->data;
            on_error = callback_data->on_error;
        
            status = on_error(env, exception, user_data);

            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        } 

        axis2_status_t AXIS2_CALL axis2_stub_on_complete_Kolibre_DaisyOnline_getContentList(axis2_callback_t *callback, const axutil_env_t *env)
        {
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_contentList_type0_t* _getContentListResponse,
                                                       axis2_stub_Kolibre_DaisyOnline_getContentList_fault fault, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_getContentList_callback_data* callback_data = NULL;
            void *user_data = NULL;
            axis2_status_t status = AXIS2_SUCCESS;
            axis2_stub_Kolibre_DaisyOnline_getContentList_fault fault;
            adb_getContentListResponse_t* ret_val;
            

            axiom_node_t *ret_node = NULL;
            axiom_soap_envelope_t *soap_envelope = NULL;

            

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_getContentList_callback_data*)axis2_callback_get_data(callback);

            
            soap_envelope = axis2_callback_get_envelope(callback, env);
            if(soap_envelope)
            {
                axiom_soap_body_t *soap_body;
                soap_body = axiom_soap_envelope_get_body(soap_envelope, env);
                if(soap_body)
                {
                    axiom_soap_fault_t *soap_fault = NULL;
                    axiom_node_t *body_node = axiom_soap_body_get_base_node(soap_body, env);

                    
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                    if (soap_fault)
                    {
                        axiom_soap_fault_detail_t *soap_detail = NULL;
                        axiom_node_t *soap_detail_node = NULL;

                        soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                        if(soap_detail) 
                        {
                            soap_detail_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);    
                        }
                        if(soap_detail_node) 
                        {
                            axis2_char_t *detail_local_name = NULL;
                            axiom_element_t *soap_detail_ele = NULL;
                            
                            if(axiom_node_get_node_type(soap_detail_node, env) == AXIOM_ELEMENT)
                            {
                                soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                            }
                           
                            if(soap_detail_ele)
                            {
                                detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                            }

                            if(!detail_local_name)
                            {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                            {
                                adb_invalidParameterFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTLIST_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_invalidParameterFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_invalidParameterFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_invalidParameterFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InvalidParameterFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                            {
                                adb_noActiveSessionFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTLIST_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_noActiveSessionFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_noActiveSessionFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_noActiveSessionFault_free(adb_obj, env);
                                    }
                                   
                                    fault.NoActiveSessionFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                            {
                                adb_invalidOperationFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTLIST_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_invalidOperationFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_invalidOperationFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InvalidOperationFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                            {
                                adb_internalServerErrorFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETCONTENTLIST_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_internalServerErrorFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_internalServerErrorFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InternalServerErrorFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                        }
                    }
                    else   if(body_node)
                    {
                        ret_node = axiom_node_get_first_child(body_node, env);
                    }
                }
                
                
            }

            user_data = callback_data->data;
            on_complete = callback_data->on_complete;

            
                    if(ret_node != NULL)
                    {
                        ret_val = adb_getContentListResponse_create(env);
     
                        if(adb_getContentListResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                        {
                            AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the LendResponse_deserialize: "
                                                                    "This should be due to an invalid XML");
                            adb_getContentListResponse_free(ret_val, env);
                            ret_val = NULL;
                        }
                     }
                     else
                     {
                         ret_val = NULL; 
                     }

                     
                         if(ret_val == NULL) {
                            status = on_complete(env, (adb_contentList_type0_t*)NULL, fault , user_data);
                         }
                         else {
                            status = on_complete(env, adb_getContentListResponse_free_popping_value(ret_val, env), fault , user_data);
                         }
                         
 
            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        }

        /**
          * auto generated method signature for asynchronous invocations
          * for "getContentList|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub
          * @param env environment ( mandatory)
          * @param _id of the axis2_char_t*
          * @param _firstItem of the int
          * @param _lastItem of the int
          * @param user_data user data to be accessed by the callbacks
          * @param on_complete callback to handle on complete
          * @param on_error callback to handle on error
          */

         void AXIS2_CALL
         axis2_stub_start_op_Kolibre_DaisyOnline_getContentList( axis2_stub_t *stub, const axutil_env_t *env,
                                              axis2_char_t* _id,
                                              int _firstItem,
                                              int _lastItem,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_contentList_type0_t* _getContentListResponse,
                                                      axis2_stub_Kolibre_DaisyOnline_getContentList_fault fault, void *data) ,
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) )
         {

            axis2_callback_t *callback = NULL;

            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;

            const axis2_char_t *soap_action = NULL;
            axiom_node_t *payload = NULL;

            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            
            
            struct axis2_stub_Kolibre_DaisyOnline_getContentList_callback_data *callback_data;

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_getContentList_callback_data*) AXIS2_MALLOC(env->allocator, 
                                    sizeof(struct axis2_stub_Kolibre_DaisyOnline_getContentList_callback_data));
            if(NULL == callback_data)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "Can not allocate memeory for the callback data structures");
                return;
            }
            

            
                            {
                               adb_getContentList_t* wrapper_adb_obj = adb_getContentList_create_with_values(env,
                                    _id,
                                    _firstItem,
                                    _lastItem);
                                payload = adb_getContentList_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                            }
                           


            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
              AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
              AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "options is null in stub");
              return;
            }

            soap_act =axis2_options_get_soap_action (options, env);
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/getContentList";
              soap_act = axutil_string_create(env, "/getContentList");
              axis2_options_set_soap_action(options, env, soap_act);
            }
            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             

            callback = axis2_callback_create(env);
            /* Set our on_complete fucntion pointer to the callback object */
            axis2_callback_set_on_complete(callback, axis2_stub_on_complete_Kolibre_DaisyOnline_getContentList);
            /* Set our on_error function pointer to the callback object */
            axis2_callback_set_on_error(callback, axis2_stub_on_error_Kolibre_DaisyOnline_getContentList);

            callback_data-> data = user_data;
            callback_data-> on_complete = on_complete;
            callback_data-> on_error = on_error;

            axis2_callback_set_data(callback, (void*)callback_data);

            /* Send request */
            axis2_svc_client_send_receive_non_blocking(svc_client, env, payload, callback);
            
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);
              
              axis2_options_set_action(options, env, NULL);
            }
         }

         

        struct axis2_stub_Kolibre_DaisyOnline_getQuestions_callback_data
        {   
            void *data;
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_questions_type0_t* _getQuestionsResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_getQuestions_fault fault, void *data);
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data);
        };

        static axis2_status_t AXIS2_CALL axis2_stub_on_error_Kolibre_DaisyOnline_getQuestions(axis2_callback_t *callback, const axutil_env_t *env, int exception)
        {
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_getQuestions_callback_data* callback_data = NULL;

            void *user_data = NULL;

            axis2_status_t status;
        
            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_getQuestions_callback_data*)axis2_callback_get_data(callback);
        
            user_data = callback_data->data;
            on_error = callback_data->on_error;
        
            status = on_error(env, exception, user_data);

            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        } 

        axis2_status_t AXIS2_CALL axis2_stub_on_complete_Kolibre_DaisyOnline_getQuestions(axis2_callback_t *callback, const axutil_env_t *env)
        {
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_questions_type0_t* _getQuestionsResponse,
                                                       axis2_stub_Kolibre_DaisyOnline_getQuestions_fault fault, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_getQuestions_callback_data* callback_data = NULL;
            void *user_data = NULL;
            axis2_status_t status = AXIS2_SUCCESS;
            axis2_stub_Kolibre_DaisyOnline_getQuestions_fault fault;
            adb_getQuestionsResponse_t* ret_val;
            

            axiom_node_t *ret_node = NULL;
            axiom_soap_envelope_t *soap_envelope = NULL;

            

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_getQuestions_callback_data*)axis2_callback_get_data(callback);

            
            soap_envelope = axis2_callback_get_envelope(callback, env);
            if(soap_envelope)
            {
                axiom_soap_body_t *soap_body;
                soap_body = axiom_soap_envelope_get_body(soap_envelope, env);
                if(soap_body)
                {
                    axiom_soap_fault_t *soap_fault = NULL;
                    axiom_node_t *body_node = axiom_soap_body_get_base_node(soap_body, env);

                    
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                    if (soap_fault)
                    {
                        axiom_soap_fault_detail_t *soap_detail = NULL;
                        axiom_node_t *soap_detail_node = NULL;

                        soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                        if(soap_detail) 
                        {
                            soap_detail_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);    
                        }
                        if(soap_detail_node) 
                        {
                            axis2_char_t *detail_local_name = NULL;
                            axiom_element_t *soap_detail_ele = NULL;
                            
                            if(axiom_node_get_node_type(soap_detail_node, env) == AXIOM_ELEMENT)
                            {
                                soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                            }
                           
                            if(soap_detail_ele)
                            {
                                detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                            }

                            if(!detail_local_name)
                            {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                            {
                                adb_invalidParameterFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETQUESTIONS_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_invalidParameterFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_invalidParameterFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_invalidParameterFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InvalidParameterFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "operationNotSupportedFault"))
                            {
                                adb_operationNotSupportedFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETQUESTIONS_FAULT_OPERATIONNOTSUPPORTEDFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_operationNotSupportedFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_operationNotSupportedFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_operationNotSupportedFault_free(adb_obj, env);
                                    }
                                   
                                    fault.OperationNotSupportedFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                            {
                                adb_invalidOperationFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETQUESTIONS_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_invalidOperationFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_invalidOperationFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InvalidOperationFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                            {
                                adb_internalServerErrorFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETQUESTIONS_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_internalServerErrorFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_internalServerErrorFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InternalServerErrorFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                            {
                                adb_noActiveSessionFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETQUESTIONS_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_noActiveSessionFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_noActiveSessionFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_noActiveSessionFault_free(adb_obj, env);
                                    }
                                   
                                    fault.NoActiveSessionFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                        }
                    }
                    else   if(body_node)
                    {
                        ret_node = axiom_node_get_first_child(body_node, env);
                    }
                }
                
                
            }

            user_data = callback_data->data;
            on_complete = callback_data->on_complete;

            
                    if(ret_node != NULL)
                    {
                        ret_val = adb_getQuestionsResponse_create(env);
     
                        if(adb_getQuestionsResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                        {
                            AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the LendResponse_deserialize: "
                                                                    "This should be due to an invalid XML");
                            adb_getQuestionsResponse_free(ret_val, env);
                            ret_val = NULL;
                        }
                     }
                     else
                     {
                         ret_val = NULL; 
                     }

                     
                         if(ret_val == NULL) {
                            status = on_complete(env, (adb_questions_type0_t*)NULL, fault , user_data);
                         }
                         else {
                            status = on_complete(env, adb_getQuestionsResponse_free_popping_value(ret_val, env), fault , user_data);
                         }
                         
 
            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        }

        /**
          * auto generated method signature for asynchronous invocations
          * for "getQuestions|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub
          * @param env environment ( mandatory)
          * @param _userResponses of the adb_userResponses_type0_t*
          * @param user_data user data to be accessed by the callbacks
          * @param on_complete callback to handle on complete
          * @param on_error callback to handle on error
          */

         void AXIS2_CALL
         axis2_stub_start_op_Kolibre_DaisyOnline_getQuestions( axis2_stub_t *stub, const axutil_env_t *env,
                                              adb_userResponses_type0_t* _userResponses,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_questions_type0_t* _getQuestionsResponse,
                                                      axis2_stub_Kolibre_DaisyOnline_getQuestions_fault fault, void *data) ,
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) )
         {

            axis2_callback_t *callback = NULL;

            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;

            const axis2_char_t *soap_action = NULL;
            axiom_node_t *payload = NULL;

            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            
            
            struct axis2_stub_Kolibre_DaisyOnline_getQuestions_callback_data *callback_data;

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_getQuestions_callback_data*) AXIS2_MALLOC(env->allocator, 
                                    sizeof(struct axis2_stub_Kolibre_DaisyOnline_getQuestions_callback_data));
            if(NULL == callback_data)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "Can not allocate memeory for the callback data structures");
                return;
            }
            

            
                            {
                               adb_getQuestions_t* wrapper_adb_obj = adb_getQuestions_create_with_values(env,
                                    _userResponses);
                                payload = adb_getQuestions_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                            }
                           


            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
              AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
              AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "options is null in stub");
              return;
            }

            soap_act =axis2_options_get_soap_action (options, env);
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/getQuestions";
              soap_act = axutil_string_create(env, "/getQuestions");
              axis2_options_set_soap_action(options, env, soap_act);
            }
            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             

            callback = axis2_callback_create(env);
            /* Set our on_complete fucntion pointer to the callback object */
            axis2_callback_set_on_complete(callback, axis2_stub_on_complete_Kolibre_DaisyOnline_getQuestions);
            /* Set our on_error function pointer to the callback object */
            axis2_callback_set_on_error(callback, axis2_stub_on_error_Kolibre_DaisyOnline_getQuestions);

            callback_data-> data = user_data;
            callback_data-> on_complete = on_complete;
            callback_data-> on_error = on_error;

            axis2_callback_set_data(callback, (void*)callback_data);

            /* Send request */
            axis2_svc_client_send_receive_non_blocking(svc_client, env, payload, callback);
            
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);
              
              axis2_options_set_action(options, env, NULL);
            }
         }

         

        struct axis2_stub_Kolibre_DaisyOnline_issueContent_callback_data
        {   
            void *data;
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _issueContentResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_issueContent_fault fault, void *data);
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data);
        };

        static axis2_status_t AXIS2_CALL axis2_stub_on_error_Kolibre_DaisyOnline_issueContent(axis2_callback_t *callback, const axutil_env_t *env, int exception)
        {
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_issueContent_callback_data* callback_data = NULL;

            void *user_data = NULL;

            axis2_status_t status;
        
            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_issueContent_callback_data*)axis2_callback_get_data(callback);
        
            user_data = callback_data->data;
            on_error = callback_data->on_error;
        
            status = on_error(env, exception, user_data);

            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        } 

        axis2_status_t AXIS2_CALL axis2_stub_on_complete_Kolibre_DaisyOnline_issueContent(axis2_callback_t *callback, const axutil_env_t *env)
        {
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _issueContentResponse,
                                                       axis2_stub_Kolibre_DaisyOnline_issueContent_fault fault, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_issueContent_callback_data* callback_data = NULL;
            void *user_data = NULL;
            axis2_status_t status = AXIS2_SUCCESS;
            axis2_stub_Kolibre_DaisyOnline_issueContent_fault fault;
            adb_issueContentResponse_t* ret_val;
            

            axiom_node_t *ret_node = NULL;
            axiom_soap_envelope_t *soap_envelope = NULL;

            

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_issueContent_callback_data*)axis2_callback_get_data(callback);

            
            soap_envelope = axis2_callback_get_envelope(callback, env);
            if(soap_envelope)
            {
                axiom_soap_body_t *soap_body;
                soap_body = axiom_soap_envelope_get_body(soap_envelope, env);
                if(soap_body)
                {
                    axiom_soap_fault_t *soap_fault = NULL;
                    axiom_node_t *body_node = axiom_soap_body_get_base_node(soap_body, env);

                    
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                    if (soap_fault)
                    {
                        axiom_soap_fault_detail_t *soap_detail = NULL;
                        axiom_node_t *soap_detail_node = NULL;

                        soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                        if(soap_detail) 
                        {
                            soap_detail_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);    
                        }
                        if(soap_detail_node) 
                        {
                            axis2_char_t *detail_local_name = NULL;
                            axiom_element_t *soap_detail_ele = NULL;
                            
                            if(axiom_node_get_node_type(soap_detail_node, env) == AXIOM_ELEMENT)
                            {
                                soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                            }
                           
                            if(soap_detail_ele)
                            {
                                detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                            }

                            if(!detail_local_name)
                            {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                            {
                                adb_invalidOperationFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_ISSUECONTENT_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_invalidOperationFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_invalidOperationFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InvalidOperationFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                            {
                                adb_internalServerErrorFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_ISSUECONTENT_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_internalServerErrorFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_internalServerErrorFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InternalServerErrorFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                            {
                                adb_invalidParameterFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_ISSUECONTENT_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_invalidParameterFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_invalidParameterFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_invalidParameterFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InvalidParameterFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                            {
                                adb_noActiveSessionFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_ISSUECONTENT_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_noActiveSessionFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_noActiveSessionFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_noActiveSessionFault_free(adb_obj, env);
                                    }
                                   
                                    fault.NoActiveSessionFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                        }
                    }
                    else   if(body_node)
                    {
                        ret_node = axiom_node_get_first_child(body_node, env);
                    }
                }
                
                
            }

            user_data = callback_data->data;
            on_complete = callback_data->on_complete;

            
                    if(ret_node != NULL)
                    {
                        ret_val = adb_issueContentResponse_create(env);
     
                        if(adb_issueContentResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                        {
                            AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the LendResponse_deserialize: "
                                                                    "This should be due to an invalid XML");
                            adb_issueContentResponse_free(ret_val, env);
                            ret_val = NULL;
                        }
                     }
                     else
                     {
                         ret_val = NULL; 
                     }

                     
                         if(ret_val == NULL) {
                            status = on_complete(env, (axis2_bool_t)NULL, fault , user_data);
                         }
                         else {
                            status = on_complete(env, adb_issueContentResponse_free_popping_value(ret_val, env), fault , user_data);
                         }
                         
 
            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        }

        /**
          * auto generated method signature for asynchronous invocations
          * for "issueContent|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub
          * @param env environment ( mandatory)
          * @param _contentID4 of the axis2_char_t*
          * @param user_data user data to be accessed by the callbacks
          * @param on_complete callback to handle on complete
          * @param on_error callback to handle on error
          */

         void AXIS2_CALL
         axis2_stub_start_op_Kolibre_DaisyOnline_issueContent( axis2_stub_t *stub, const axutil_env_t *env,
                                              axis2_char_t* _contentID4,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _issueContentResponse,
                                                      axis2_stub_Kolibre_DaisyOnline_issueContent_fault fault, void *data) ,
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) )
         {

            axis2_callback_t *callback = NULL;

            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;

            const axis2_char_t *soap_action = NULL;
            axiom_node_t *payload = NULL;

            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            
            
            struct axis2_stub_Kolibre_DaisyOnline_issueContent_callback_data *callback_data;

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_issueContent_callback_data*) AXIS2_MALLOC(env->allocator, 
                                    sizeof(struct axis2_stub_Kolibre_DaisyOnline_issueContent_callback_data));
            if(NULL == callback_data)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "Can not allocate memeory for the callback data structures");
                return;
            }
            

            
                            {
                               adb_issueContent_t* wrapper_adb_obj = adb_issueContent_create_with_values(env,
                                    _contentID4);
                                payload = adb_issueContent_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                            }
                           


            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
              AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
              AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "options is null in stub");
              return;
            }

            soap_act =axis2_options_get_soap_action (options, env);
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/issueContent";
              soap_act = axutil_string_create(env, "/issueContent");
              axis2_options_set_soap_action(options, env, soap_act);
            }
            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             

            callback = axis2_callback_create(env);
            /* Set our on_complete fucntion pointer to the callback object */
            axis2_callback_set_on_complete(callback, axis2_stub_on_complete_Kolibre_DaisyOnline_issueContent);
            /* Set our on_error function pointer to the callback object */
            axis2_callback_set_on_error(callback, axis2_stub_on_error_Kolibre_DaisyOnline_issueContent);

            callback_data-> data = user_data;
            callback_data-> on_complete = on_complete;
            callback_data-> on_error = on_error;

            axis2_callback_set_data(callback, (void*)callback_data);

            /* Send request */
            axis2_svc_client_send_receive_non_blocking(svc_client, env, payload, callback);
            
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);
              
              axis2_options_set_action(options, env, NULL);
            }
         }

         

        struct axis2_stub_Kolibre_DaisyOnline_setReadingSystemAttributes_callback_data
        {   
            void *data;
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _setReadingSystemAttributesResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_setReadingSystemAttributes_fault fault, void *data);
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data);
        };

        static axis2_status_t AXIS2_CALL axis2_stub_on_error_Kolibre_DaisyOnline_setReadingSystemAttributes(axis2_callback_t *callback, const axutil_env_t *env, int exception)
        {
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_setReadingSystemAttributes_callback_data* callback_data = NULL;

            void *user_data = NULL;

            axis2_status_t status;
        
            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_setReadingSystemAttributes_callback_data*)axis2_callback_get_data(callback);
        
            user_data = callback_data->data;
            on_error = callback_data->on_error;
        
            status = on_error(env, exception, user_data);

            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        } 

        axis2_status_t AXIS2_CALL axis2_stub_on_complete_Kolibre_DaisyOnline_setReadingSystemAttributes(axis2_callback_t *callback, const axutil_env_t *env)
        {
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _setReadingSystemAttributesResponse,
                                                       axis2_stub_Kolibre_DaisyOnline_setReadingSystemAttributes_fault fault, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_setReadingSystemAttributes_callback_data* callback_data = NULL;
            void *user_data = NULL;
            axis2_status_t status = AXIS2_SUCCESS;
            axis2_stub_Kolibre_DaisyOnline_setReadingSystemAttributes_fault fault;
            adb_setReadingSystemAttributesResponse_t* ret_val;
            

            axiom_node_t *ret_node = NULL;
            axiom_soap_envelope_t *soap_envelope = NULL;

            

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_setReadingSystemAttributes_callback_data*)axis2_callback_get_data(callback);

            
            soap_envelope = axis2_callback_get_envelope(callback, env);
            if(soap_envelope)
            {
                axiom_soap_body_t *soap_body;
                soap_body = axiom_soap_envelope_get_body(soap_envelope, env);
                if(soap_body)
                {
                    axiom_soap_fault_t *soap_fault = NULL;
                    axiom_node_t *body_node = axiom_soap_body_get_base_node(soap_body, env);

                    
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                    if (soap_fault)
                    {
                        axiom_soap_fault_detail_t *soap_detail = NULL;
                        axiom_node_t *soap_detail_node = NULL;

                        soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                        if(soap_detail) 
                        {
                            soap_detail_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);    
                        }
                        if(soap_detail_node) 
                        {
                            axis2_char_t *detail_local_name = NULL;
                            axiom_element_t *soap_detail_ele = NULL;
                            
                            if(axiom_node_get_node_type(soap_detail_node, env) == AXIOM_ELEMENT)
                            {
                                soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                            }
                           
                            if(soap_detail_ele)
                            {
                                detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                            }

                            if(!detail_local_name)
                            {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                            {
                                adb_noActiveSessionFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_SETREADINGSYSTEMATTRIBUTES_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_noActiveSessionFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_noActiveSessionFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_noActiveSessionFault_free(adb_obj, env);
                                    }
                                   
                                    fault.NoActiveSessionFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                            {
                                adb_invalidOperationFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_SETREADINGSYSTEMATTRIBUTES_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_invalidOperationFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_invalidOperationFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InvalidOperationFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                            {
                                adb_internalServerErrorFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_SETREADINGSYSTEMATTRIBUTES_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_internalServerErrorFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_internalServerErrorFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InternalServerErrorFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                            {
                                adb_invalidParameterFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_SETREADINGSYSTEMATTRIBUTES_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_invalidParameterFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_invalidParameterFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_invalidParameterFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InvalidParameterFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                        }
                    }
                    else   if(body_node)
                    {
                        ret_node = axiom_node_get_first_child(body_node, env);
                    }
                }
                
                
            }

            user_data = callback_data->data;
            on_complete = callback_data->on_complete;

            
                    if(ret_node != NULL)
                    {
                        ret_val = adb_setReadingSystemAttributesResponse_create(env);
     
                        if(adb_setReadingSystemAttributesResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                        {
                            AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the LendResponse_deserialize: "
                                                                    "This should be due to an invalid XML");
                            adb_setReadingSystemAttributesResponse_free(ret_val, env);
                            ret_val = NULL;
                        }
                     }
                     else
                     {
                         ret_val = NULL; 
                     }

                     
                         if(ret_val == NULL) {
                            status = on_complete(env, (axis2_bool_t)NULL, fault , user_data);
                         }
                         else {
                            status = on_complete(env, adb_setReadingSystemAttributesResponse_free_popping_value(ret_val, env), fault , user_data);
                         }
                         
 
            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        }

        /**
          * auto generated method signature for asynchronous invocations
          * for "setReadingSystemAttributes|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub
          * @param env environment ( mandatory)
          * @param _readingSystemAttributes of the adb_readingSystemAttributes_type0_t*
          * @param user_data user data to be accessed by the callbacks
          * @param on_complete callback to handle on complete
          * @param on_error callback to handle on error
          */

         void AXIS2_CALL
         axis2_stub_start_op_Kolibre_DaisyOnline_setReadingSystemAttributes( axis2_stub_t *stub, const axutil_env_t *env,
                                              adb_readingSystemAttributes_type0_t* _readingSystemAttributes,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _setReadingSystemAttributesResponse,
                                                      axis2_stub_Kolibre_DaisyOnline_setReadingSystemAttributes_fault fault, void *data) ,
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) )
         {

            axis2_callback_t *callback = NULL;

            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;

            const axis2_char_t *soap_action = NULL;
            axiom_node_t *payload = NULL;

            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            
            
            struct axis2_stub_Kolibre_DaisyOnline_setReadingSystemAttributes_callback_data *callback_data;

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_setReadingSystemAttributes_callback_data*) AXIS2_MALLOC(env->allocator, 
                                    sizeof(struct axis2_stub_Kolibre_DaisyOnline_setReadingSystemAttributes_callback_data));
            if(NULL == callback_data)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "Can not allocate memeory for the callback data structures");
                return;
            }
            

            
                            {
                               adb_setReadingSystemAttributes_t* wrapper_adb_obj = adb_setReadingSystemAttributes_create_with_values(env,
                                    _readingSystemAttributes);
                                payload = adb_setReadingSystemAttributes_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                            }
                           


            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
              AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
              AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "options is null in stub");
              return;
            }

            soap_act =axis2_options_get_soap_action (options, env);
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/setReadingSystemAttributes";
              soap_act = axutil_string_create(env, "/setReadingSystemAttributes");
              axis2_options_set_soap_action(options, env, soap_act);
            }
            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             

            callback = axis2_callback_create(env);
            /* Set our on_complete fucntion pointer to the callback object */
            axis2_callback_set_on_complete(callback, axis2_stub_on_complete_Kolibre_DaisyOnline_setReadingSystemAttributes);
            /* Set our on_error function pointer to the callback object */
            axis2_callback_set_on_error(callback, axis2_stub_on_error_Kolibre_DaisyOnline_setReadingSystemAttributes);

            callback_data-> data = user_data;
            callback_data-> on_complete = on_complete;
            callback_data-> on_error = on_error;

            axis2_callback_set_data(callback, (void*)callback_data);

            /* Send request */
            axis2_svc_client_send_receive_non_blocking(svc_client, env, payload, callback);
            
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);
              
              axis2_options_set_action(options, env, NULL);
            }
         }

         

        struct axis2_stub_Kolibre_DaisyOnline_logOff_callback_data
        {   
            void *data;
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _logOffResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_logOff_fault fault, void *data);
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data);
        };

        static axis2_status_t AXIS2_CALL axis2_stub_on_error_Kolibre_DaisyOnline_logOff(axis2_callback_t *callback, const axutil_env_t *env, int exception)
        {
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_logOff_callback_data* callback_data = NULL;

            void *user_data = NULL;

            axis2_status_t status;
        
            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_logOff_callback_data*)axis2_callback_get_data(callback);
        
            user_data = callback_data->data;
            on_error = callback_data->on_error;
        
            status = on_error(env, exception, user_data);

            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        } 

        axis2_status_t AXIS2_CALL axis2_stub_on_complete_Kolibre_DaisyOnline_logOff(axis2_callback_t *callback, const axutil_env_t *env)
        {
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _logOffResponse,
                                                       axis2_stub_Kolibre_DaisyOnline_logOff_fault fault, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_logOff_callback_data* callback_data = NULL;
            void *user_data = NULL;
            axis2_status_t status = AXIS2_SUCCESS;
            axis2_stub_Kolibre_DaisyOnline_logOff_fault fault;
            adb_logOffResponse_t* ret_val;
            

            axiom_node_t *ret_node = NULL;
            axiom_soap_envelope_t *soap_envelope = NULL;

            

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_logOff_callback_data*)axis2_callback_get_data(callback);

            
            soap_envelope = axis2_callback_get_envelope(callback, env);
            if(soap_envelope)
            {
                axiom_soap_body_t *soap_body;
                soap_body = axiom_soap_envelope_get_body(soap_envelope, env);
                if(soap_body)
                {
                    axiom_soap_fault_t *soap_fault = NULL;
                    axiom_node_t *body_node = axiom_soap_body_get_base_node(soap_body, env);

                    
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                    if (soap_fault)
                    {
                        axiom_soap_fault_detail_t *soap_detail = NULL;
                        axiom_node_t *soap_detail_node = NULL;

                        soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                        if(soap_detail) 
                        {
                            soap_detail_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);    
                        }
                        if(soap_detail_node) 
                        {
                            axis2_char_t *detail_local_name = NULL;
                            axiom_element_t *soap_detail_ele = NULL;
                            
                            if(axiom_node_get_node_type(soap_detail_node, env) == AXIOM_ELEMENT)
                            {
                                soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                            }
                           
                            if(soap_detail_ele)
                            {
                                detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                            }

                            if(!detail_local_name)
                            {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                            {
                                adb_invalidOperationFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_LOGOFF_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_invalidOperationFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_invalidOperationFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InvalidOperationFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                            {
                                adb_internalServerErrorFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_LOGOFF_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_internalServerErrorFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_internalServerErrorFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InternalServerErrorFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                        }
                    }
                    else   if(body_node)
                    {
                        ret_node = axiom_node_get_first_child(body_node, env);
                    }
                }
                
                
            }

            user_data = callback_data->data;
            on_complete = callback_data->on_complete;

            
                    if(ret_node != NULL)
                    {
                        ret_val = adb_logOffResponse_create(env);
     
                        if(adb_logOffResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                        {
                            AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the LendResponse_deserialize: "
                                                                    "This should be due to an invalid XML");
                            adb_logOffResponse_free(ret_val, env);
                            ret_val = NULL;
                        }
                     }
                     else
                     {
                         ret_val = NULL; 
                     }

                     
                         if(ret_val == NULL) {
                            status = on_complete(env, (axis2_bool_t)NULL, fault , user_data);
                         }
                         else {
                            status = on_complete(env, adb_logOffResponse_free_popping_value(ret_val, env), fault , user_data);
                         }
                         
 
            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        }

        /**
          * auto generated method signature for asynchronous invocations
          * for "logOff|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub
          * @param env environment ( mandatory)
          * @param user_data user data to be accessed by the callbacks
          * @param on_complete callback to handle on complete
          * @param on_error callback to handle on error
          */

         void AXIS2_CALL
         axis2_stub_start_op_Kolibre_DaisyOnline_logOff( axis2_stub_t *stub, const axutil_env_t *env,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _logOffResponse,
                                                      axis2_stub_Kolibre_DaisyOnline_logOff_fault fault, void *data) ,
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) )
         {

            axis2_callback_t *callback = NULL;

            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;

            const axis2_char_t *soap_action = NULL;
            axiom_node_t *payload = NULL;

            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            
            
            struct axis2_stub_Kolibre_DaisyOnline_logOff_callback_data *callback_data;

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_logOff_callback_data*) AXIS2_MALLOC(env->allocator, 
                                    sizeof(struct axis2_stub_Kolibre_DaisyOnline_logOff_callback_data));
            if(NULL == callback_data)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "Can not allocate memeory for the callback data structures");
                return;
            }
            

            
                            {
                               adb_logOff_t* wrapper_adb_obj = adb_logOff_create_with_values(env);
                                payload = adb_logOff_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                            }
                           


            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
              AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
              AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "options is null in stub");
              return;
            }

            soap_act =axis2_options_get_soap_action (options, env);
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/logOff";
              soap_act = axutil_string_create(env, "/logOff");
              axis2_options_set_soap_action(options, env, soap_act);
            }
            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             

            callback = axis2_callback_create(env);
            /* Set our on_complete fucntion pointer to the callback object */
            axis2_callback_set_on_complete(callback, axis2_stub_on_complete_Kolibre_DaisyOnline_logOff);
            /* Set our on_error function pointer to the callback object */
            axis2_callback_set_on_error(callback, axis2_stub_on_error_Kolibre_DaisyOnline_logOff);

            callback_data-> data = user_data;
            callback_data-> on_complete = on_complete;
            callback_data-> on_error = on_error;

            axis2_callback_set_data(callback, (void*)callback_data);

            /* Send request */
            axis2_svc_client_send_receive_non_blocking(svc_client, env, payload, callback);
            
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);
              
              axis2_options_set_action(options, env, NULL);
            }
         }

         

        struct axis2_stub_Kolibre_DaisyOnline_returnContent_callback_data
        {   
            void *data;
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _returnContentResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_returnContent_fault fault, void *data);
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data);
        };

        static axis2_status_t AXIS2_CALL axis2_stub_on_error_Kolibre_DaisyOnline_returnContent(axis2_callback_t *callback, const axutil_env_t *env, int exception)
        {
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_returnContent_callback_data* callback_data = NULL;

            void *user_data = NULL;

            axis2_status_t status;
        
            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_returnContent_callback_data*)axis2_callback_get_data(callback);
        
            user_data = callback_data->data;
            on_error = callback_data->on_error;
        
            status = on_error(env, exception, user_data);

            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        } 

        axis2_status_t AXIS2_CALL axis2_stub_on_complete_Kolibre_DaisyOnline_returnContent(axis2_callback_t *callback, const axutil_env_t *env)
        {
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _returnContentResponse,
                                                       axis2_stub_Kolibre_DaisyOnline_returnContent_fault fault, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_returnContent_callback_data* callback_data = NULL;
            void *user_data = NULL;
            axis2_status_t status = AXIS2_SUCCESS;
            axis2_stub_Kolibre_DaisyOnline_returnContent_fault fault;
            adb_returnContentResponse_t* ret_val;
            

            axiom_node_t *ret_node = NULL;
            axiom_soap_envelope_t *soap_envelope = NULL;

            

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_returnContent_callback_data*)axis2_callback_get_data(callback);

            
            soap_envelope = axis2_callback_get_envelope(callback, env);
            if(soap_envelope)
            {
                axiom_soap_body_t *soap_body;
                soap_body = axiom_soap_envelope_get_body(soap_envelope, env);
                if(soap_body)
                {
                    axiom_soap_fault_t *soap_fault = NULL;
                    axiom_node_t *body_node = axiom_soap_body_get_base_node(soap_body, env);

                    
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                    if (soap_fault)
                    {
                        axiom_soap_fault_detail_t *soap_detail = NULL;
                        axiom_node_t *soap_detail_node = NULL;

                        soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                        if(soap_detail) 
                        {
                            soap_detail_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);    
                        }
                        if(soap_detail_node) 
                        {
                            axis2_char_t *detail_local_name = NULL;
                            axiom_element_t *soap_detail_ele = NULL;
                            
                            if(axiom_node_get_node_type(soap_detail_node, env) == AXIOM_ELEMENT)
                            {
                                soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                            }
                           
                            if(soap_detail_ele)
                            {
                                detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                            }

                            if(!detail_local_name)
                            {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                            {
                                adb_invalidParameterFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_RETURNCONTENT_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_invalidParameterFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_invalidParameterFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_invalidParameterFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InvalidParameterFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "operationNotSupportedFault"))
                            {
                                adb_operationNotSupportedFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_RETURNCONTENT_FAULT_OPERATIONNOTSUPPORTEDFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_operationNotSupportedFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_operationNotSupportedFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_operationNotSupportedFault_free(adb_obj, env);
                                    }
                                   
                                    fault.OperationNotSupportedFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                            {
                                adb_invalidOperationFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_RETURNCONTENT_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_invalidOperationFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_invalidOperationFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InvalidOperationFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                            {
                                adb_internalServerErrorFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_RETURNCONTENT_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_internalServerErrorFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_internalServerErrorFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InternalServerErrorFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                            {
                                adb_noActiveSessionFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_RETURNCONTENT_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_noActiveSessionFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_noActiveSessionFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_noActiveSessionFault_free(adb_obj, env);
                                    }
                                   
                                    fault.NoActiveSessionFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                        }
                    }
                    else   if(body_node)
                    {
                        ret_node = axiom_node_get_first_child(body_node, env);
                    }
                }
                
                
            }

            user_data = callback_data->data;
            on_complete = callback_data->on_complete;

            
                    if(ret_node != NULL)
                    {
                        ret_val = adb_returnContentResponse_create(env);
     
                        if(adb_returnContentResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                        {
                            AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the LendResponse_deserialize: "
                                                                    "This should be due to an invalid XML");
                            adb_returnContentResponse_free(ret_val, env);
                            ret_val = NULL;
                        }
                     }
                     else
                     {
                         ret_val = NULL; 
                     }

                     
                         if(ret_val == NULL) {
                            status = on_complete(env, (axis2_bool_t)NULL, fault , user_data);
                         }
                         else {
                            status = on_complete(env, adb_returnContentResponse_free_popping_value(ret_val, env), fault , user_data);
                         }
                         
 
            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        }

        /**
          * auto generated method signature for asynchronous invocations
          * for "returnContent|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub
          * @param env environment ( mandatory)
          * @param _contentID5 of the axis2_char_t*
          * @param user_data user data to be accessed by the callbacks
          * @param on_complete callback to handle on complete
          * @param on_error callback to handle on error
          */

         void AXIS2_CALL
         axis2_stub_start_op_Kolibre_DaisyOnline_returnContent( axis2_stub_t *stub, const axutil_env_t *env,
                                              axis2_char_t* _contentID5,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, axis2_bool_t _returnContentResponse,
                                                      axis2_stub_Kolibre_DaisyOnline_returnContent_fault fault, void *data) ,
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) )
         {

            axis2_callback_t *callback = NULL;

            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;

            const axis2_char_t *soap_action = NULL;
            axiom_node_t *payload = NULL;

            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            
            
            struct axis2_stub_Kolibre_DaisyOnline_returnContent_callback_data *callback_data;

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_returnContent_callback_data*) AXIS2_MALLOC(env->allocator, 
                                    sizeof(struct axis2_stub_Kolibre_DaisyOnline_returnContent_callback_data));
            if(NULL == callback_data)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "Can not allocate memeory for the callback data structures");
                return;
            }
            

            
                            {
                               adb_returnContent_t* wrapper_adb_obj = adb_returnContent_create_with_values(env,
                                    _contentID5);
                                payload = adb_returnContent_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                            }
                           


            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
              AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
              AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "options is null in stub");
              return;
            }

            soap_act =axis2_options_get_soap_action (options, env);
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/returnContent";
              soap_act = axutil_string_create(env, "/returnContent");
              axis2_options_set_soap_action(options, env, soap_act);
            }
            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             

            callback = axis2_callback_create(env);
            /* Set our on_complete fucntion pointer to the callback object */
            axis2_callback_set_on_complete(callback, axis2_stub_on_complete_Kolibre_DaisyOnline_returnContent);
            /* Set our on_error function pointer to the callback object */
            axis2_callback_set_on_error(callback, axis2_stub_on_error_Kolibre_DaisyOnline_returnContent);

            callback_data-> data = user_data;
            callback_data-> on_complete = on_complete;
            callback_data-> on_error = on_error;

            axis2_callback_set_data(callback, (void*)callback_data);

            /* Send request */
            axis2_svc_client_send_receive_non_blocking(svc_client, env, payload, callback);
            
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);
              
              axis2_options_set_action(options, env, NULL);
            }
         }

         

        struct axis2_stub_Kolibre_DaisyOnline_getKeyExchangeObject_callback_data
        {   
            void *data;
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_KeyExchange_type0_t* _getKeyExchangeObjectResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_getKeyExchangeObject_fault fault, void *data);
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data);
        };

        static axis2_status_t AXIS2_CALL axis2_stub_on_error_Kolibre_DaisyOnline_getKeyExchangeObject(axis2_callback_t *callback, const axutil_env_t *env, int exception)
        {
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_getKeyExchangeObject_callback_data* callback_data = NULL;

            void *user_data = NULL;

            axis2_status_t status;
        
            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_getKeyExchangeObject_callback_data*)axis2_callback_get_data(callback);
        
            user_data = callback_data->data;
            on_error = callback_data->on_error;
        
            status = on_error(env, exception, user_data);

            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        } 

        axis2_status_t AXIS2_CALL axis2_stub_on_complete_Kolibre_DaisyOnline_getKeyExchangeObject(axis2_callback_t *callback, const axutil_env_t *env)
        {
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_KeyExchange_type0_t* _getKeyExchangeObjectResponse,
                                                       axis2_stub_Kolibre_DaisyOnline_getKeyExchangeObject_fault fault, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_getKeyExchangeObject_callback_data* callback_data = NULL;
            void *user_data = NULL;
            axis2_status_t status = AXIS2_SUCCESS;
            axis2_stub_Kolibre_DaisyOnline_getKeyExchangeObject_fault fault;
            adb_getKeyExchangeObjectResponse_t* ret_val;
            

            axiom_node_t *ret_node = NULL;
            axiom_soap_envelope_t *soap_envelope = NULL;

            

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_getKeyExchangeObject_callback_data*)axis2_callback_get_data(callback);

            
            soap_envelope = axis2_callback_get_envelope(callback, env);
            if(soap_envelope)
            {
                axiom_soap_body_t *soap_body;
                soap_body = axiom_soap_envelope_get_body(soap_envelope, env);
                if(soap_body)
                {
                    axiom_soap_fault_t *soap_fault = NULL;
                    axiom_node_t *body_node = axiom_soap_body_get_base_node(soap_body, env);

                    
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                    if (soap_fault)
                    {
                        axiom_soap_fault_detail_t *soap_detail = NULL;
                        axiom_node_t *soap_detail_node = NULL;

                        soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                        if(soap_detail) 
                        {
                            soap_detail_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);    
                        }
                        if(soap_detail_node) 
                        {
                            axis2_char_t *detail_local_name = NULL;
                            axiom_element_t *soap_detail_ele = NULL;
                            
                            if(axiom_node_get_node_type(soap_detail_node, env) == AXIOM_ELEMENT)
                            {
                                soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                            }
                           
                            if(soap_detail_ele)
                            {
                                detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                            }

                            if(!detail_local_name)
                            {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                            {
                                adb_noActiveSessionFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETKEYEXCHANGEOBJECT_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_noActiveSessionFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_noActiveSessionFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_noActiveSessionFault_free(adb_obj, env);
                                    }
                                   
                                    fault.NoActiveSessionFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "operationNotSupportedFault"))
                            {
                                adb_operationNotSupportedFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETKEYEXCHANGEOBJECT_FAULT_OPERATIONNOTSUPPORTEDFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_operationNotSupportedFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_operationNotSupportedFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_operationNotSupportedFault_free(adb_obj, env);
                                    }
                                   
                                    fault.OperationNotSupportedFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidParameterFault"))
                            {
                                adb_invalidParameterFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETKEYEXCHANGEOBJECT_FAULT_INVALIDPARAMETERFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_invalidParameterFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_invalidParameterFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_invalidParameterFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InvalidParameterFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                            {
                                adb_invalidOperationFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETKEYEXCHANGEOBJECT_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_invalidOperationFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_invalidOperationFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InvalidOperationFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                            {
                                adb_internalServerErrorFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETKEYEXCHANGEOBJECT_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_internalServerErrorFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_internalServerErrorFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InternalServerErrorFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                        }
                    }
                    else   if(body_node)
                    {
                        ret_node = axiom_node_get_first_child(body_node, env);
                    }
                }
                
                
            }

            user_data = callback_data->data;
            on_complete = callback_data->on_complete;

            
                    if(ret_node != NULL)
                    {
                        ret_val = adb_getKeyExchangeObjectResponse_create(env);
     
                        if(adb_getKeyExchangeObjectResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                        {
                            AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the LendResponse_deserialize: "
                                                                    "This should be due to an invalid XML");
                            adb_getKeyExchangeObjectResponse_free(ret_val, env);
                            ret_val = NULL;
                        }
                     }
                     else
                     {
                         ret_val = NULL; 
                     }

                     
                         if(ret_val == NULL) {
                            status = on_complete(env, (adb_KeyExchange_type0_t*)NULL, fault , user_data);
                         }
                         else {
                            status = on_complete(env, adb_getKeyExchangeObjectResponse_free_popping_value(ret_val, env), fault , user_data);
                         }
                         
 
            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        }

        /**
          * auto generated method signature for asynchronous invocations
          * for "getKeyExchangeObject|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub
          * @param env environment ( mandatory)
          * @param _requestedKeyName of the axis2_char_t*
          * @param user_data user data to be accessed by the callbacks
          * @param on_complete callback to handle on complete
          * @param on_error callback to handle on error
          */

         void AXIS2_CALL
         axis2_stub_start_op_Kolibre_DaisyOnline_getKeyExchangeObject( axis2_stub_t *stub, const axutil_env_t *env,
                                              axis2_char_t* _requestedKeyName,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_KeyExchange_type0_t* _getKeyExchangeObjectResponse,
                                                      axis2_stub_Kolibre_DaisyOnline_getKeyExchangeObject_fault fault, void *data) ,
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) )
         {

            axis2_callback_t *callback = NULL;

            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;

            const axis2_char_t *soap_action = NULL;
            axiom_node_t *payload = NULL;

            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            
            
            struct axis2_stub_Kolibre_DaisyOnline_getKeyExchangeObject_callback_data *callback_data;

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_getKeyExchangeObject_callback_data*) AXIS2_MALLOC(env->allocator, 
                                    sizeof(struct axis2_stub_Kolibre_DaisyOnline_getKeyExchangeObject_callback_data));
            if(NULL == callback_data)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "Can not allocate memeory for the callback data structures");
                return;
            }
            

            
                            {
                               adb_getKeyExchangeObject_t* wrapper_adb_obj = adb_getKeyExchangeObject_create_with_values(env,
                                    _requestedKeyName);
                                payload = adb_getKeyExchangeObject_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                            }
                           


            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
              AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
              AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "options is null in stub");
              return;
            }

            soap_act =axis2_options_get_soap_action (options, env);
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/getKeyExchangeObject";
              soap_act = axutil_string_create(env, "/getKeyExchangeObject");
              axis2_options_set_soap_action(options, env, soap_act);
            }
            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             

            callback = axis2_callback_create(env);
            /* Set our on_complete fucntion pointer to the callback object */
            axis2_callback_set_on_complete(callback, axis2_stub_on_complete_Kolibre_DaisyOnline_getKeyExchangeObject);
            /* Set our on_error function pointer to the callback object */
            axis2_callback_set_on_error(callback, axis2_stub_on_error_Kolibre_DaisyOnline_getKeyExchangeObject);

            callback_data-> data = user_data;
            callback_data-> on_complete = on_complete;
            callback_data-> on_error = on_error;

            axis2_callback_set_data(callback, (void*)callback_data);

            /* Send request */
            axis2_svc_client_send_receive_non_blocking(svc_client, env, payload, callback);
            
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);
              
              axis2_options_set_action(options, env, NULL);
            }
         }

         

        struct axis2_stub_Kolibre_DaisyOnline_getServiceAnnouncements_callback_data
        {   
            void *data;
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_announcements_type0_t* _getServiceAnnouncementsResponse,
                                                        axis2_stub_Kolibre_DaisyOnline_getServiceAnnouncements_fault fault, void *data);
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data);
        };

        static axis2_status_t AXIS2_CALL axis2_stub_on_error_Kolibre_DaisyOnline_getServiceAnnouncements(axis2_callback_t *callback, const axutil_env_t *env, int exception)
        {
            axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_getServiceAnnouncements_callback_data* callback_data = NULL;

            void *user_data = NULL;

            axis2_status_t status;
        
            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_getServiceAnnouncements_callback_data*)axis2_callback_get_data(callback);
        
            user_data = callback_data->data;
            on_error = callback_data->on_error;
        
            status = on_error(env, exception, user_data);

            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        } 

        axis2_status_t AXIS2_CALL axis2_stub_on_complete_Kolibre_DaisyOnline_getServiceAnnouncements(axis2_callback_t *callback, const axutil_env_t *env)
        {
            axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_announcements_type0_t* _getServiceAnnouncementsResponse,
                                                       axis2_stub_Kolibre_DaisyOnline_getServiceAnnouncements_fault fault, void *data);
            struct axis2_stub_Kolibre_DaisyOnline_getServiceAnnouncements_callback_data* callback_data = NULL;
            void *user_data = NULL;
            axis2_status_t status = AXIS2_SUCCESS;
            axis2_stub_Kolibre_DaisyOnline_getServiceAnnouncements_fault fault;
            adb_getServiceAnnouncementsResponse_t* ret_val;
            

            axiom_node_t *ret_node = NULL;
            axiom_soap_envelope_t *soap_envelope = NULL;

            

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_getServiceAnnouncements_callback_data*)axis2_callback_get_data(callback);

            
            soap_envelope = axis2_callback_get_envelope(callback, env);
            if(soap_envelope)
            {
                axiom_soap_body_t *soap_body;
                soap_body = axiom_soap_envelope_get_body(soap_envelope, env);
                if(soap_body)
                {
                    axiom_soap_fault_t *soap_fault = NULL;
                    axiom_node_t *body_node = axiom_soap_body_get_base_node(soap_body, env);

                    
                    soap_fault = axiom_soap_body_get_fault (soap_body, env);
                    if (soap_fault)
                    {
                        axiom_soap_fault_detail_t *soap_detail = NULL;
                        axiom_node_t *soap_detail_node = NULL;

                        soap_detail = axiom_soap_fault_get_detail(soap_fault, env);

                        if(soap_detail) 
                        {
                            soap_detail_node = axiom_soap_fault_detail_get_base_node(soap_detail, env);    
                        }
                        if(soap_detail_node) 
                        {
                            axis2_char_t *detail_local_name = NULL;
                            axiom_element_t *soap_detail_ele = NULL;
                            
                            if(axiom_node_get_node_type(soap_detail_node, env) == AXIOM_ELEMENT)
                            {
                                soap_detail_ele = axiom_node_get_data_element(soap_detail_node, env);
                            }
                           
                            if(soap_detail_ele)
                            {
                                detail_local_name = axiom_element_get_localname(soap_detail_ele, env);
                            }

                            if(!detail_local_name)
                            {
                                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "noActiveSessionFault"))
                            {
                                adb_noActiveSessionFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEANNOUNCEMENTS_FAULT_NOACTIVESESSIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_noActiveSessionFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_noActiveSessionFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_noActiveSessionFault_free(adb_obj, env);
                                    }
                                   
                                    fault.NoActiveSessionFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "operationNotSupportedFault"))
                            {
                                adb_operationNotSupportedFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEANNOUNCEMENTS_FAULT_OPERATIONNOTSUPPORTEDFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_operationNotSupportedFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_operationNotSupportedFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_operationNotSupportedFault_free(adb_obj, env);
                                    }
                                   
                                    fault.OperationNotSupportedFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "invalidOperationFault"))
                            {
                                adb_invalidOperationFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEANNOUNCEMENTS_FAULT_INVALIDOPERATIONFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_invalidOperationFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_invalidOperationFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_invalidOperationFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InvalidOperationFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                            else if(!axutil_strcmp(detail_local_name, "internalServerErrorFault"))
                            {
                                adb_internalServerErrorFault_t* adb_obj = NULL;

                                AXIS2_ERROR_SET(env->error, AXIS2_STUB_KOLIBRE_DAISYONLINE_GETSERVICEANNOUNCEMENTS_FAULT_INTERNALSERVERERRORFAULT, AXIS2_FAILURE);
                                
                                adb_obj = adb_internalServerErrorFault_create(env);
                                if(adb_obj)
                                {
                                    if(adb_internalServerErrorFault_deserialize(adb_obj, env, &soap_detail_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                                    {
                                        adb_internalServerErrorFault_free(adb_obj, env);
                                    }
                                   
                                    fault.InternalServerErrorFault = adb_obj;
                                }
                                else {
                                    AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                                }
                            }
                
                        }
                    }
                    else   if(body_node)
                    {
                        ret_node = axiom_node_get_first_child(body_node, env);
                    }
                }
                
                
            }

            user_data = callback_data->data;
            on_complete = callback_data->on_complete;

            
                    if(ret_node != NULL)
                    {
                        ret_val = adb_getServiceAnnouncementsResponse_create(env);
     
                        if(adb_getServiceAnnouncementsResponse_deserialize(ret_val, env, &ret_node, NULL, AXIS2_FALSE ) == AXIS2_FAILURE)
                        {
                            AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "NULL returnted from the LendResponse_deserialize: "
                                                                    "This should be due to an invalid XML");
                            adb_getServiceAnnouncementsResponse_free(ret_val, env);
                            ret_val = NULL;
                        }
                     }
                     else
                     {
                         ret_val = NULL; 
                     }

                     
                         if(ret_val == NULL) {
                            status = on_complete(env, (adb_announcements_type0_t*)NULL, fault , user_data);
                         }
                         else {
                            status = on_complete(env, adb_getServiceAnnouncementsResponse_free_popping_value(ret_val, env), fault , user_data);
                         }
                         
 
            if(callback_data)
            {
                AXIS2_FREE(env->allocator, callback_data);
            }
            return status;
        }

        /**
          * auto generated method signature for asynchronous invocations
          * for "getServiceAnnouncements|http://www.daisy.org/ns/daisy-online/" operation.
          * @param stub The stub
          * @param env environment ( mandatory)
          * @param user_data user data to be accessed by the callbacks
          * @param on_complete callback to handle on complete
          * @param on_error callback to handle on error
          */

         void AXIS2_CALL
         axis2_stub_start_op_Kolibre_DaisyOnline_getServiceAnnouncements( axis2_stub_t *stub, const axutil_env_t *env,
                                                  void *user_data,
                                                  axis2_status_t ( AXIS2_CALL *on_complete ) (const axutil_env_t *, adb_announcements_type0_t* _getServiceAnnouncementsResponse,
                                                      axis2_stub_Kolibre_DaisyOnline_getServiceAnnouncements_fault fault, void *data) ,
                                                  axis2_status_t ( AXIS2_CALL *on_error ) (const axutil_env_t *, int exception, void *data) )
         {

            axis2_callback_t *callback = NULL;

            axis2_svc_client_t *svc_client = NULL;
            axis2_options_t *options = NULL;

            const axis2_char_t *soap_action = NULL;
            axiom_node_t *payload = NULL;

            axis2_bool_t is_soap_act_set = AXIS2_TRUE;
            axutil_string_t *soap_act = NULL;

            
            
            struct axis2_stub_Kolibre_DaisyOnline_getServiceAnnouncements_callback_data *callback_data;

            callback_data = (struct axis2_stub_Kolibre_DaisyOnline_getServiceAnnouncements_callback_data*) AXIS2_MALLOC(env->allocator, 
                                    sizeof(struct axis2_stub_Kolibre_DaisyOnline_getServiceAnnouncements_callback_data));
            if(NULL == callback_data)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "Can not allocate memeory for the callback data structures");
                return;
            }
            

            
                            {
                               adb_getServiceAnnouncements_t* wrapper_adb_obj = adb_getServiceAnnouncements_create_with_values(env);
                                payload = adb_getServiceAnnouncements_serialize(wrapper_adb_obj, env, NULL, NULL, AXIS2_TRUE, NULL, NULL);
                            }
                           


            svc_client = axis2_stub_get_svc_client(stub, env );
            
           
            
            

            options = axis2_stub_get_options( stub, env);
            if (NULL == options)
            {
              AXIS2_ERROR_SET(env->error, AXIS2_ERROR_INVALID_NULL_PARAM, AXIS2_FAILURE);
              AXIS2_LOG_ERROR( env->log, AXIS2_LOG_SI, "options is null in stub");
              return;
            }

            soap_act =axis2_options_get_soap_action (options, env);
            if (NULL == soap_act)
            {
              is_soap_act_set = AXIS2_FALSE;
              soap_action = "/getServiceAnnouncements";
              soap_act = axutil_string_create(env, "/getServiceAnnouncements");
              axis2_options_set_soap_action(options, env, soap_act);
            }
            
            axis2_options_set_soap_version(options, env, AXIOM_SOAP11);
             

            callback = axis2_callback_create(env);
            /* Set our on_complete fucntion pointer to the callback object */
            axis2_callback_set_on_complete(callback, axis2_stub_on_complete_Kolibre_DaisyOnline_getServiceAnnouncements);
            /* Set our on_error function pointer to the callback object */
            axis2_callback_set_on_error(callback, axis2_stub_on_error_Kolibre_DaisyOnline_getServiceAnnouncements);

            callback_data-> data = user_data;
            callback_data-> on_complete = on_complete;
            callback_data-> on_error = on_error;

            axis2_callback_set_data(callback, (void*)callback_data);

            /* Send request */
            axis2_svc_client_send_receive_non_blocking(svc_client, env, payload, callback);
            
            if (!is_soap_act_set)
            {
              
              axis2_options_set_soap_action(options, env, NULL);
              
              axis2_options_set_action(options, env, NULL);
            }
         }

         

