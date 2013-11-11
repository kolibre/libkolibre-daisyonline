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



        #ifndef ADB_RESOURCES_H
        #define ADB_RESOURCES_H

       /**
        * adb_resources.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: 1.6.2  Built on : Nov 05, 2013 (09:21:13 EET)
        */

       /**
        *  adb_resources class
        */

        
          #include "adb_resource_type0.h"
          
            #include <axutil_date_time.h>
          

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
        

        typedef struct adb_resources adb_resources_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_resources_t
         * @param env pointer to environment struct
         * @return newly created adb_resources_t object
         */
        adb_resources_t* AXIS2_CALL
        adb_resources_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _resources adb_resources_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resources_free (
            adb_resources_t* _resources,
            const axutil_env_t *env);

        /**
         * Free adb_resources_t object
         * @param  _resources adb_resources_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resources_free_obj (
            adb_resources_t* _resources,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        /******** Deprecated for array types, Use 'Getters and Setters for Arrays' instead ***********/
        

        /**
         * Getter for resource. Deprecated for array types, Use adb_resources_get_resource_at instead
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct
         * @return Array of adb_resource_type0_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_resources_get_resource(
            adb_resources_t* _resources,
            const axutil_env_t *env);

        /**
         * Setter for resource.Deprecated for array types, Use adb_resources_set_resource_at
         * or adb_resources_add_resource instead.
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct
         * @param arg_resource Array of adb_resource_type0_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resources_set_resource(
            adb_resources_t* _resources,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_resource);

        /**
         * Resetter for resource
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resources_reset_resource(
            adb_resources_t* _resources,
            const axutil_env_t *env);

        
        

        /**
         * Getter for returnBy. 
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct
         * @return axutil_date_time_t*
         */
        axutil_date_time_t* AXIS2_CALL
        adb_resources_get_returnBy(
            adb_resources_t* _resources,
            const axutil_env_t *env);

        /**
         * Setter for returnBy.
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct
         * @param arg_returnBy axutil_date_time_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resources_set_returnBy(
            adb_resources_t* _resources,
            const axutil_env_t *env,
            axutil_date_time_t*  arg_returnBy);

        /**
         * Resetter for returnBy
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resources_reset_returnBy(
            adb_resources_t* _resources,
            const axutil_env_t *env);

        
        

        /**
         * Getter for lastModifiedDate. 
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct
         * @return axutil_date_time_t*
         */
        axutil_date_time_t* AXIS2_CALL
        adb_resources_get_lastModifiedDate(
            adb_resources_t* _resources,
            const axutil_env_t *env);

        /**
         * Setter for lastModifiedDate.
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct
         * @param arg_lastModifiedDate axutil_date_time_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resources_set_lastModifiedDate(
            adb_resources_t* _resources,
            const axutil_env_t *env,
            axutil_date_time_t*  arg_lastModifiedDate);

        /**
         * Resetter for lastModifiedDate
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resources_reset_lastModifiedDate(
            adb_resources_t* _resources,
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
         * Get the ith element of resource.
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith adb_resource_type0_t* of the array
         */
        adb_resource_type0_t* AXIS2_CALL
        adb_resources_get_resource_at(
                adb_resources_t* _resources,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of resource. (If the ith already exist, it will be replaced)
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_resource element to set adb_resource_type0_t* to the array
         * @return ith adb_resource_type0_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_resources_set_resource_at(
                adb_resources_t* _resources,
                const axutil_env_t *env, int i,
                adb_resource_type0_t* arg_resource);


        /**
         * Add to resource.
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct
         * @param arg_resource element to add adb_resource_type0_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resources_add_resource(
                adb_resources_t* _resources,
                const axutil_env_t *env,
                adb_resource_type0_t* arg_resource);

        /**
         * Get the size of the resource array.
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct.
         * @return the size of the resource array.
         */
        int AXIS2_CALL
        adb_resources_sizeof_resource(
                    adb_resources_t* _resources,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of resource.
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resources_remove_resource_at(
                adb_resources_t* _resources,
                const axutil_env_t *env, int i);

        


        /******************************* Checking and Setting NIL values *********************************/
        /* Use 'Checking and Setting NIL values for Arrays' to check and set nil for individual elements */

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether resource is nill
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_resources_is_resource_nil(
                adb_resources_t* _resources,
                const axutil_env_t *env);


        

        /**
         * Check whether returnBy is nill
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_resources_is_returnBy_nil(
                adb_resources_t* _resources,
                const axutil_env_t *env);


        
        /**
         * Set returnBy to nill (currently the same as reset)
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resources_set_returnBy_nil(
                adb_resources_t* _resources,
                const axutil_env_t *env);
        

        /**
         * Check whether lastModifiedDate is nill
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_resources_is_lastModifiedDate_nil(
                adb_resources_t* _resources,
                const axutil_env_t *env);


        
        /**
         * Set lastModifiedDate to nill (currently the same as reset)
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resources_set_lastModifiedDate_nil(
                adb_resources_t* _resources,
                const axutil_env_t *env);
        
        /*************************** Checking and Setting 'NIL' values in Arrays *****************************/

        /**
         * NOTE: You may set this to remove specific elements in the array
         *       But you can not remove elements, if the specific property is declared to be non-nillable or sizeof(array) < minOccurs
         */
        
        /**
         * Check whether resource is nill at i
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_resources_is_resource_nil_at(
                adb_resources_t* _resources,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set resource to nill at i
         * @param  _resources _ adb_resources_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_resources_set_resource_nil_at(
                adb_resources_t* _resources, 
                const axutil_env_t *env, int i);

        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resources_deserialize(
            adb_resources_t* _resources,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_resources_deserialize_obj(
            adb_resources_t* _resources,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_resources_declare_parent_namespaces(
                    adb_resources_t* _resources,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct
         * @param resources_om_node node to serialize from
         * @param resources_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_resources_serialize(
            adb_resources_t* _resources,
            const axutil_env_t *env,
            axiom_node_t* resources_om_node, axiom_element_t *resources_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct
         * @param resources_om_node node to serialize from
         * @param resources_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_resources_serialize_obj(
            adb_resources_t* _resources,
            const axutil_env_t *env,
            axiom_node_t* resources_om_node, axiom_element_t *resources_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_resources is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_resources_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_resources_t
         * @param env pointer to environment struct
         * @param _resource axutil_array_list_t*
         * @param _returnBy axutil_date_time_t*
         * @param _lastModifiedDate axutil_date_time_t*
         * @return newly created adb_resources_t object
         */
        adb_resources_t* AXIS2_CALL
        adb_resources_create_with_values(
            const axutil_env_t *env,
                axutil_array_list_t* _resource,
                axutil_date_time_t* _returnBy,
                axutil_date_time_t* _lastModifiedDate);

        


                /**
                 * Free adb_resources_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _resources adb_resources_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                axutil_array_list_t* AXIS2_CALL
                adb_resources_free_popping_value(
                        adb_resources_t* _resources,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for resource by property number (1)
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct
         * @return Array of adb_resource_type0_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_resources_get_property1(
            adb_resources_t* _resources,
            const axutil_env_t *env);

    
        

        /**
         * Getter for returnBy by property number (2)
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct
         * @return axutil_date_time_t*
         */
        axutil_date_time_t* AXIS2_CALL
        adb_resources_get_property2(
            adb_resources_t* _resources,
            const axutil_env_t *env);

    
        

        /**
         * Getter for lastModifiedDate by property number (3)
         * @param  _resources adb_resources_t object
         * @param env pointer to environment struct
         * @return axutil_date_time_t*
         */
        axutil_date_time_t* AXIS2_CALL
        adb_resources_get_property3(
            adb_resources_t* _resources,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_RESOURCES_H */
    

