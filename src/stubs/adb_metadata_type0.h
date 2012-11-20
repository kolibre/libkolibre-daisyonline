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



        #ifndef ADB_METADATA_TYPE0_H
        #define ADB_METADATA_TYPE0_H

       /**
        * adb_metadata_type0.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Oct 19, 2012 (02:20:52 EEST)
        */

       /**
        *  adb_metadata_type0 class
        */

        
          #include "adb_meta_type0.h"
          
          #include "adb_metadataChoice_type0.h"
          

        #include <stdio.h>
        #include <axiom.h>
        #include <axis2_util.h>
        #include <axiom_soap.h>
        #include <axis2_client.h>

        #include "axis2_extension_mapper.h"

        #ifdef __cplusplus
        extern "C"
        {
        #endif

        #define ADB_DEFAULT_DIGIT_LIMIT 1024
        #define ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT 64
        

        typedef struct adb_metadata_type0 adb_metadata_type0_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_metadata_type0_t
         * @param env pointer to environment struct
         * @return newly created adb_metadata_type0_t object
         */
        adb_metadata_type0_t* AXIS2_CALL
        adb_metadata_type0_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _metadata_type0 adb_metadata_type0_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_free (
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        /**
         * Free adb_metadata_type0_t object
         * @param  _metadata_type0 adb_metadata_type0_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_free_obj (
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        /******** Deprecated for array types, Use 'Getters and Setters for Arrays' instead ***********/
        

        /**
         * Getter for title. 
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return axiom_node_t*
         */
        axiom_node_t* AXIS2_CALL
        adb_metadata_type0_get_title(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        /**
         * Setter for title.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_title axiom_node_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_title(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env,
            axiom_node_t*  arg_title);

        /**
         * Resetter for title
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_reset_title(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for identifier. 
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return axiom_node_t*
         */
        axiom_node_t* AXIS2_CALL
        adb_metadata_type0_get_identifier(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        /**
         * Setter for identifier.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_identifier axiom_node_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_identifier(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env,
            axiom_node_t*  arg_identifier);

        /**
         * Resetter for identifier
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_reset_identifier(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for publisher. 
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return axiom_node_t*
         */
        axiom_node_t* AXIS2_CALL
        adb_metadata_type0_get_publisher(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        /**
         * Setter for publisher.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_publisher axiom_node_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_publisher(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env,
            axiom_node_t*  arg_publisher);

        /**
         * Resetter for publisher
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_reset_publisher(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for format. 
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return axiom_node_t*
         */
        axiom_node_t* AXIS2_CALL
        adb_metadata_type0_get_format(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        /**
         * Setter for format.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_format axiom_node_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_format(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env,
            axiom_node_t*  arg_format);

        /**
         * Resetter for format
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_reset_format(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for date. 
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return axiom_node_t*
         */
        axiom_node_t* AXIS2_CALL
        adb_metadata_type0_get_date(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        /**
         * Setter for date.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_date axiom_node_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_date(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env,
            axiom_node_t*  arg_date);

        /**
         * Resetter for date
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_reset_date(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for source. 
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return axiom_node_t*
         */
        axiom_node_t* AXIS2_CALL
        adb_metadata_type0_get_source(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        /**
         * Setter for source.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_source axiom_node_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_source(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env,
            axiom_node_t*  arg_source);

        /**
         * Resetter for source
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_reset_source(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for type. Deprecated for array types, Use adb_metadata_type0_get_type_at instead
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return Array of axiom_node_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_metadata_type0_get_type(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        /**
         * Setter for type.Deprecated for array types, Use adb_metadata_type0_set_type_at
         * or adb_metadata_type0_add_type instead.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_type Array of axiom_node_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_type(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_type);

        /**
         * Resetter for type
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_reset_type(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for subject. Deprecated for array types, Use adb_metadata_type0_get_subject_at instead
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return Array of axiom_node_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_metadata_type0_get_subject(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        /**
         * Setter for subject.Deprecated for array types, Use adb_metadata_type0_set_subject_at
         * or adb_metadata_type0_add_subject instead.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_subject Array of axiom_node_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_subject(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_subject);

        /**
         * Resetter for subject
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_reset_subject(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for rights. Deprecated for array types, Use adb_metadata_type0_get_rights_at instead
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return Array of axiom_node_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_metadata_type0_get_rights(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        /**
         * Setter for rights.Deprecated for array types, Use adb_metadata_type0_set_rights_at
         * or adb_metadata_type0_add_rights instead.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_rights Array of axiom_node_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_rights(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_rights);

        /**
         * Resetter for rights
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_reset_rights(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for relation. Deprecated for array types, Use adb_metadata_type0_get_relation_at instead
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return Array of axiom_node_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_metadata_type0_get_relation(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        /**
         * Setter for relation.Deprecated for array types, Use adb_metadata_type0_set_relation_at
         * or adb_metadata_type0_add_relation instead.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_relation Array of axiom_node_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_relation(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_relation);

        /**
         * Resetter for relation
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_reset_relation(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for language. Deprecated for array types, Use adb_metadata_type0_get_language_at instead
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return Array of axiom_node_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_metadata_type0_get_language(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        /**
         * Setter for language.Deprecated for array types, Use adb_metadata_type0_set_language_at
         * or adb_metadata_type0_add_language instead.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_language Array of axiom_node_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_language(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_language);

        /**
         * Resetter for language
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_reset_language(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for description. Deprecated for array types, Use adb_metadata_type0_get_description_at instead
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return Array of axiom_node_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_metadata_type0_get_description(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        /**
         * Setter for description.Deprecated for array types, Use adb_metadata_type0_set_description_at
         * or adb_metadata_type0_add_description instead.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_description Array of axiom_node_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_description(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_description);

        /**
         * Resetter for description
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_reset_description(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for creator. Deprecated for array types, Use adb_metadata_type0_get_creator_at instead
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return Array of axiom_node_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_metadata_type0_get_creator(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        /**
         * Setter for creator.Deprecated for array types, Use adb_metadata_type0_set_creator_at
         * or adb_metadata_type0_add_creator instead.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_creator Array of axiom_node_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_creator(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_creator);

        /**
         * Resetter for creator
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_reset_creator(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for coverage. Deprecated for array types, Use adb_metadata_type0_get_coverage_at instead
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return Array of axiom_node_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_metadata_type0_get_coverage(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        /**
         * Setter for coverage.Deprecated for array types, Use adb_metadata_type0_set_coverage_at
         * or adb_metadata_type0_add_coverage instead.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_coverage Array of axiom_node_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_coverage(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_coverage);

        /**
         * Resetter for coverage
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_reset_coverage(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for contributor. Deprecated for array types, Use adb_metadata_type0_get_contributor_at instead
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return Array of axiom_node_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_metadata_type0_get_contributor(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        /**
         * Setter for contributor.Deprecated for array types, Use adb_metadata_type0_set_contributor_at
         * or adb_metadata_type0_add_contributor instead.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_contributor Array of axiom_node_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_contributor(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_contributor);

        /**
         * Resetter for contributor
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_reset_contributor(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for narrator. Deprecated for array types, Use adb_metadata_type0_get_narrator_at instead
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return Array of axis2_char_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_metadata_type0_get_narrator(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        /**
         * Setter for narrator.Deprecated for array types, Use adb_metadata_type0_set_narrator_at
         * or adb_metadata_type0_add_narrator instead.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_narrator Array of axis2_char_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_narrator(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_narrator);

        /**
         * Resetter for narrator
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_reset_narrator(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for size. 
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return int64_t
         */
        int64_t AXIS2_CALL
        adb_metadata_type0_get_size(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        /**
         * Setter for size.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_size int64_t
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_size(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env,
            const int64_t  arg_size);

        /**
         * Resetter for size
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_reset_size(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for meta. Deprecated for array types, Use adb_metadata_type0_get_meta_at instead
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return Array of adb_meta_type0_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_metadata_type0_get_meta(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        /**
         * Setter for meta.Deprecated for array types, Use adb_metadata_type0_set_meta_at
         * or adb_metadata_type0_add_meta instead.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_meta Array of adb_meta_type0_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_meta(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_meta);

        /**
         * Resetter for meta
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_reset_meta(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        
        

        /**
         * Getter for metadataChoice_type0. Deprecated for array types, Use adb_metadata_type0_get_metadataChoice_type0_at instead
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return Array of adb_metadataChoice_type0_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_metadata_type0_get_metadataChoice_type0(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        /**
         * Setter for metadataChoice_type0.Deprecated for array types, Use adb_metadata_type0_set_metadataChoice_type0_at
         * or adb_metadata_type0_add_metadataChoice_type0 instead.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_metadataChoice_type0 Array of adb_metadataChoice_type0_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_metadataChoice_type0(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_metadataChoice_type0);

        /**
         * Resetter for metadataChoice_type0
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_reset_metadataChoice_type0(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

        
        /****************************** Getters and Setters For Arrays **********************************/
        /************ Array Specific Operations: get_at, set_at, add, remove_at, sizeof *****************/

        /**
         * E.g. use of get_at, set_at, add and sizeof
         *
         * for(i = 0; i < adb_element_sizeof_property(adb_object, env); i ++ )
         * {
         *     // Getting ith value to property_object variable
         *     property_object = adb_element_get_property_at(adb_object, env, i);
         *
         *     // Setting ith value from property_object variable
         *     adb_element_set_property_at(adb_object, env, i, property_object);
         *
         *     // Appending the value to the end of the array from property_object variable
         *     adb_element_add_property(adb_object, env, property_object);
         *
         *     // Removing the ith value from an array
         *     adb_element_remove_property_at(adb_object, env, i);
         *     
         * }
         *
         */

        
        
        /**
         * Get the ith element of type.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith axiom_node_t* of the array
         */
        axiom_node_t* AXIS2_CALL
        adb_metadata_type0_get_type_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of type. (If the ith already exist, it will be replaced)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_type element to set axiom_node_t* to the array
         * @return ith axiom_node_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_type_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i,
                axiom_node_t* arg_type);


        /**
         * Add to type.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_type element to add axiom_node_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_add_type(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env,
                axiom_node_t* arg_type);

        /**
         * Get the size of the type array.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @return the size of the type array.
         */
        int AXIS2_CALL
        adb_metadata_type0_sizeof_type(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of type.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_remove_type_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);

        
        
        /**
         * Get the ith element of subject.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith axiom_node_t* of the array
         */
        axiom_node_t* AXIS2_CALL
        adb_metadata_type0_get_subject_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of subject. (If the ith already exist, it will be replaced)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_subject element to set axiom_node_t* to the array
         * @return ith axiom_node_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_subject_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i,
                axiom_node_t* arg_subject);


        /**
         * Add to subject.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_subject element to add axiom_node_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_add_subject(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env,
                axiom_node_t* arg_subject);

        /**
         * Get the size of the subject array.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @return the size of the subject array.
         */
        int AXIS2_CALL
        adb_metadata_type0_sizeof_subject(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of subject.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_remove_subject_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);

        
        
        /**
         * Get the ith element of rights.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith axiom_node_t* of the array
         */
        axiom_node_t* AXIS2_CALL
        adb_metadata_type0_get_rights_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of rights. (If the ith already exist, it will be replaced)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_rights element to set axiom_node_t* to the array
         * @return ith axiom_node_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_rights_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i,
                axiom_node_t* arg_rights);


        /**
         * Add to rights.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_rights element to add axiom_node_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_add_rights(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env,
                axiom_node_t* arg_rights);

        /**
         * Get the size of the rights array.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @return the size of the rights array.
         */
        int AXIS2_CALL
        adb_metadata_type0_sizeof_rights(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of rights.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_remove_rights_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);

        
        
        /**
         * Get the ith element of relation.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith axiom_node_t* of the array
         */
        axiom_node_t* AXIS2_CALL
        adb_metadata_type0_get_relation_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of relation. (If the ith already exist, it will be replaced)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_relation element to set axiom_node_t* to the array
         * @return ith axiom_node_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_relation_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i,
                axiom_node_t* arg_relation);


        /**
         * Add to relation.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_relation element to add axiom_node_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_add_relation(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env,
                axiom_node_t* arg_relation);

        /**
         * Get the size of the relation array.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @return the size of the relation array.
         */
        int AXIS2_CALL
        adb_metadata_type0_sizeof_relation(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of relation.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_remove_relation_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);

        
        
        /**
         * Get the ith element of language.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith axiom_node_t* of the array
         */
        axiom_node_t* AXIS2_CALL
        adb_metadata_type0_get_language_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of language. (If the ith already exist, it will be replaced)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_language element to set axiom_node_t* to the array
         * @return ith axiom_node_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_language_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i,
                axiom_node_t* arg_language);


        /**
         * Add to language.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_language element to add axiom_node_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_add_language(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env,
                axiom_node_t* arg_language);

        /**
         * Get the size of the language array.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @return the size of the language array.
         */
        int AXIS2_CALL
        adb_metadata_type0_sizeof_language(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of language.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_remove_language_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);

        
        
        /**
         * Get the ith element of description.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith axiom_node_t* of the array
         */
        axiom_node_t* AXIS2_CALL
        adb_metadata_type0_get_description_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of description. (If the ith already exist, it will be replaced)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_description element to set axiom_node_t* to the array
         * @return ith axiom_node_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_description_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i,
                axiom_node_t* arg_description);


        /**
         * Add to description.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_description element to add axiom_node_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_add_description(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env,
                axiom_node_t* arg_description);

        /**
         * Get the size of the description array.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @return the size of the description array.
         */
        int AXIS2_CALL
        adb_metadata_type0_sizeof_description(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of description.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_remove_description_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);

        
        
        /**
         * Get the ith element of creator.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith axiom_node_t* of the array
         */
        axiom_node_t* AXIS2_CALL
        adb_metadata_type0_get_creator_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of creator. (If the ith already exist, it will be replaced)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_creator element to set axiom_node_t* to the array
         * @return ith axiom_node_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_creator_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i,
                axiom_node_t* arg_creator);


        /**
         * Add to creator.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_creator element to add axiom_node_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_add_creator(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env,
                axiom_node_t* arg_creator);

        /**
         * Get the size of the creator array.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @return the size of the creator array.
         */
        int AXIS2_CALL
        adb_metadata_type0_sizeof_creator(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of creator.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_remove_creator_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);

        
        
        /**
         * Get the ith element of coverage.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith axiom_node_t* of the array
         */
        axiom_node_t* AXIS2_CALL
        adb_metadata_type0_get_coverage_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of coverage. (If the ith already exist, it will be replaced)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_coverage element to set axiom_node_t* to the array
         * @return ith axiom_node_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_coverage_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i,
                axiom_node_t* arg_coverage);


        /**
         * Add to coverage.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_coverage element to add axiom_node_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_add_coverage(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env,
                axiom_node_t* arg_coverage);

        /**
         * Get the size of the coverage array.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @return the size of the coverage array.
         */
        int AXIS2_CALL
        adb_metadata_type0_sizeof_coverage(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of coverage.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_remove_coverage_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);

        
        
        /**
         * Get the ith element of contributor.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith axiom_node_t* of the array
         */
        axiom_node_t* AXIS2_CALL
        adb_metadata_type0_get_contributor_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of contributor. (If the ith already exist, it will be replaced)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_contributor element to set axiom_node_t* to the array
         * @return ith axiom_node_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_contributor_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i,
                axiom_node_t* arg_contributor);


        /**
         * Add to contributor.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_contributor element to add axiom_node_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_add_contributor(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env,
                axiom_node_t* arg_contributor);

        /**
         * Get the size of the contributor array.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @return the size of the contributor array.
         */
        int AXIS2_CALL
        adb_metadata_type0_sizeof_contributor(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of contributor.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_remove_contributor_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);

        
        
        /**
         * Get the ith element of narrator.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith axis2_char_t* of the array
         */
        axis2_char_t* AXIS2_CALL
        adb_metadata_type0_get_narrator_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of narrator. (If the ith already exist, it will be replaced)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_narrator element to set axis2_char_t* to the array
         * @return ith axis2_char_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_narrator_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i,
                const axis2_char_t* arg_narrator);


        /**
         * Add to narrator.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_narrator element to add axis2_char_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_add_narrator(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env,
                const axis2_char_t* arg_narrator);

        /**
         * Get the size of the narrator array.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @return the size of the narrator array.
         */
        int AXIS2_CALL
        adb_metadata_type0_sizeof_narrator(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of narrator.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_remove_narrator_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);

        
        
        /**
         * Get the ith element of meta.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith adb_meta_type0_t* of the array
         */
        adb_meta_type0_t* AXIS2_CALL
        adb_metadata_type0_get_meta_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of meta. (If the ith already exist, it will be replaced)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_meta element to set adb_meta_type0_t* to the array
         * @return ith adb_meta_type0_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_meta_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i,
                adb_meta_type0_t* arg_meta);


        /**
         * Add to meta.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_meta element to add adb_meta_type0_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_add_meta(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env,
                adb_meta_type0_t* arg_meta);

        /**
         * Get the size of the meta array.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @return the size of the meta array.
         */
        int AXIS2_CALL
        adb_metadata_type0_sizeof_meta(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of meta.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_remove_meta_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);

        
        
        /**
         * Get the ith element of metadataChoice_type0.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith adb_metadataChoice_type0_t* of the array
         */
        adb_metadataChoice_type0_t* AXIS2_CALL
        adb_metadata_type0_get_metadataChoice_type0_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of metadataChoice_type0. (If the ith already exist, it will be replaced)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_metadataChoice_type0 element to set adb_metadataChoice_type0_t* to the array
         * @return ith adb_metadataChoice_type0_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_metadataChoice_type0_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i,
                adb_metadataChoice_type0_t* arg_metadataChoice_type0);


        /**
         * Add to metadataChoice_type0.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param arg_metadataChoice_type0 element to add adb_metadataChoice_type0_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_add_metadataChoice_type0(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env,
                adb_metadataChoice_type0_t* arg_metadataChoice_type0);

        /**
         * Get the size of the metadataChoice_type0 array.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @return the size of the metadataChoice_type0 array.
         */
        int AXIS2_CALL
        adb_metadata_type0_sizeof_metadataChoice_type0(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of metadataChoice_type0.
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_remove_metadataChoice_type0_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);

        


        /******************************* Checking and Setting NIL values *********************************/
        /* Use 'Checking and Setting NIL values for Arrays' to check and set nil for individual elements */

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether title is nill
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_title_nil(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether identifier is nill
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_identifier_nil(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether publisher is nill
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_publisher_nil(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether format is nill
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_format_nil(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether date is nill
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_date_nil(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether source is nill
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_source_nil(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether type is nill
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_type_nil(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether subject is nill
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_subject_nil(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether rights is nill
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_rights_nil(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether relation is nill
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_relation_nil(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether language is nill
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_language_nil(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether description is nill
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_description_nil(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether creator is nill
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_creator_nil(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether coverage is nill
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_coverage_nil(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether contributor is nill
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_contributor_nil(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether narrator is nill
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_narrator_nil(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether size is nill
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_size_nil(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether meta is nill
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_meta_nil(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env);


        

        /**
         * Check whether metadataChoice_type0 is nill
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_metadataChoice_type0_nil(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env);


        
        /*************************** Checking and Setting 'NIL' values in Arrays *****************************/

        /**
         * NOTE: You may set this to remove specific elements in the array
         *       But you can not remove elements, if the specific property is declared to be non-nillable or sizeof(array) < minOccurs
         */
        
        /**
         * Check whether type is nill at i
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_type_nil_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set type to nill at i
         * @param  _metadata_type0 _ adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_type_nil_at(
                adb_metadata_type0_t* _metadata_type0, 
                const axutil_env_t *env, int i);

        
        /**
         * Check whether subject is nill at i
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_subject_nil_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set subject to nill at i
         * @param  _metadata_type0 _ adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_subject_nil_at(
                adb_metadata_type0_t* _metadata_type0, 
                const axutil_env_t *env, int i);

        
        /**
         * Check whether rights is nill at i
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_rights_nil_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set rights to nill at i
         * @param  _metadata_type0 _ adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_rights_nil_at(
                adb_metadata_type0_t* _metadata_type0, 
                const axutil_env_t *env, int i);

        
        /**
         * Check whether relation is nill at i
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_relation_nil_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set relation to nill at i
         * @param  _metadata_type0 _ adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_relation_nil_at(
                adb_metadata_type0_t* _metadata_type0, 
                const axutil_env_t *env, int i);

        
        /**
         * Check whether language is nill at i
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_language_nil_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set language to nill at i
         * @param  _metadata_type0 _ adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_language_nil_at(
                adb_metadata_type0_t* _metadata_type0, 
                const axutil_env_t *env, int i);

        
        /**
         * Check whether description is nill at i
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_description_nil_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set description to nill at i
         * @param  _metadata_type0 _ adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_description_nil_at(
                adb_metadata_type0_t* _metadata_type0, 
                const axutil_env_t *env, int i);

        
        /**
         * Check whether creator is nill at i
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_creator_nil_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set creator to nill at i
         * @param  _metadata_type0 _ adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_creator_nil_at(
                adb_metadata_type0_t* _metadata_type0, 
                const axutil_env_t *env, int i);

        
        /**
         * Check whether coverage is nill at i
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_coverage_nil_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set coverage to nill at i
         * @param  _metadata_type0 _ adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_coverage_nil_at(
                adb_metadata_type0_t* _metadata_type0, 
                const axutil_env_t *env, int i);

        
        /**
         * Check whether contributor is nill at i
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_contributor_nil_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set contributor to nill at i
         * @param  _metadata_type0 _ adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_contributor_nil_at(
                adb_metadata_type0_t* _metadata_type0, 
                const axutil_env_t *env, int i);

        
        /**
         * Check whether narrator is nill at i
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_narrator_nil_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set narrator to nill at i
         * @param  _metadata_type0 _ adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_narrator_nil_at(
                adb_metadata_type0_t* _metadata_type0, 
                const axutil_env_t *env, int i);

        
        /**
         * Check whether meta is nill at i
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_meta_nil_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set meta to nill at i
         * @param  _metadata_type0 _ adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_meta_nil_at(
                adb_metadata_type0_t* _metadata_type0, 
                const axutil_env_t *env, int i);

        
        /**
         * Check whether metadataChoice_type0 is nill at i
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_metadataChoice_type0_nil_at(
                adb_metadata_type0_t* _metadata_type0,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set metadataChoice_type0 to nill at i
         * @param  _metadata_type0 _ adb_metadata_type0_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_set_metadataChoice_type0_nil_at(
                adb_metadata_type0_t* _metadata_type0, 
                const axutil_env_t *env, int i);

        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_deserialize(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_metadata_type0_deserialize_obj(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_metadata_type0_declare_parent_namespaces(
                    adb_metadata_type0_t* _metadata_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param metadata_type0_om_node node to serialize from
         * @param metadata_type0_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_metadata_type0_serialize(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env,
            axiom_node_t* metadata_type0_om_node, axiom_element_t *metadata_type0_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @param metadata_type0_om_node node to serialize from
         * @param metadata_type0_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_metadata_type0_serialize_obj(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env,
            axiom_node_t* metadata_type0_om_node, axiom_element_t *metadata_type0_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_metadata_type0 is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_metadata_type0_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_metadata_type0_t
         * @param env pointer to environment struct
         * @param _title axiom_node_t*
         * @param _identifier axiom_node_t*
         * @param _publisher axiom_node_t*
         * @param _format axiom_node_t*
         * @param _date axiom_node_t*
         * @param _source axiom_node_t*
         * @param _type axutil_array_list_t*
         * @param _subject axutil_array_list_t*
         * @param _rights axutil_array_list_t*
         * @param _relation axutil_array_list_t*
         * @param _language axutil_array_list_t*
         * @param _description axutil_array_list_t*
         * @param _creator axutil_array_list_t*
         * @param _coverage axutil_array_list_t*
         * @param _contributor axutil_array_list_t*
         * @param _narrator axutil_array_list_t*
         * @param _size int64_t
         * @param _meta axutil_array_list_t*
         * @param _metadataChoice_type0 axutil_array_list_t*
         * @return newly created adb_metadata_type0_t object
         */
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
                axutil_array_list_t* _metadataChoice_type0);

        


                /**
                 * Free adb_metadata_type0_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _metadata_type0 adb_metadata_type0_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                axiom_node_t* AXIS2_CALL
                adb_metadata_type0_free_popping_value(
                        adb_metadata_type0_t* _metadata_type0,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for title by property number (1)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return axiom_node_t*
         */
        axiom_node_t* AXIS2_CALL
        adb_metadata_type0_get_property1(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for identifier by property number (2)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return axiom_node_t*
         */
        axiom_node_t* AXIS2_CALL
        adb_metadata_type0_get_property2(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for publisher by property number (3)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return axiom_node_t*
         */
        axiom_node_t* AXIS2_CALL
        adb_metadata_type0_get_property3(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for format by property number (4)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return axiom_node_t*
         */
        axiom_node_t* AXIS2_CALL
        adb_metadata_type0_get_property4(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for date by property number (5)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return axiom_node_t*
         */
        axiom_node_t* AXIS2_CALL
        adb_metadata_type0_get_property5(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for source by property number (6)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return axiom_node_t*
         */
        axiom_node_t* AXIS2_CALL
        adb_metadata_type0_get_property6(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for type by property number (7)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return Array of axiom_node_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_metadata_type0_get_property7(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for subject by property number (8)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return Array of axiom_node_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_metadata_type0_get_property8(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for rights by property number (9)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return Array of axiom_node_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_metadata_type0_get_property9(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for relation by property number (10)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return Array of axiom_node_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_metadata_type0_get_property10(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for language by property number (11)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return Array of axiom_node_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_metadata_type0_get_property11(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for description by property number (12)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return Array of axiom_node_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_metadata_type0_get_property12(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for creator by property number (13)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return Array of axiom_node_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_metadata_type0_get_property13(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for coverage by property number (14)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return Array of axiom_node_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_metadata_type0_get_property14(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for contributor by property number (15)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return Array of axiom_node_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_metadata_type0_get_property15(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for narrator by property number (16)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return Array of axis2_char_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_metadata_type0_get_property16(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for size by property number (17)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return int64_t
         */
        int64_t AXIS2_CALL
        adb_metadata_type0_get_property17(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for meta by property number (18)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return Array of adb_meta_type0_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_metadata_type0_get_property18(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

    
        

        /**
         * Getter for metadataChoice_type0 by property number (19)
         * @param  _metadata_type0 adb_metadata_type0_t object
         * @param env pointer to environment struct
         * @return Array of adb_metadataChoice_type0_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_metadata_type0_get_property19(
            adb_metadata_type0_t* _metadata_type0,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_METADATA_TYPE0_H */
    

