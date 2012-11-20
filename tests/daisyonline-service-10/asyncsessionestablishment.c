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

#include "axis2_stub_Kolibre_DaisyOnline.h"
#include "adb_readingSystemAttributes_type0.h"
#include "adb_readingSystemAttributesChoice_type0.h"
#include "axis2c_client_home.h"

#include <axiom.h>
#include <axis2_util.h>
#include <axiom_soap.h>
#include <axis2_client.h>

#include <assert.h>
#include <stdio.h>

/*
 * logOn functions
 */

axis2_status_t AXIS2_CALL logOn_on_complete (
        const axutil_env_t *env,
        axis2_bool_t _logOnResponse,
        axis2_stub_Kolibre_DaisyOnline_logOn_fault fault,
        void *data)
{
    printf("IMPLEMENT ME: logOn_on_complete !!!\n");
    return AXIS2_TRUE;
}

axis2_status_t AXIS2_CALL logOn_on_error(
        const axutil_env_t *env,
        int exception,
        void *data)
{
    printf("IMPLEMENT ME: logOn_on_error !!!\n");
    return AXIS2_TRUE;
}

void logOn(
        axis2_stub_t* stub,
        const axutil_env_t *env,
        axis2_char_t *username,
        axis2_char_t *password)
{
    void *data;

    // async invocation of logOn
    axis2_stub_start_op_Kolibre_DaisyOnline_logOn(
            stub,
            env,
            username,
            password,
            data,
            logOn_on_complete,
            logOn_on_error);

    if ( axutil_env_check_status(env) == AXIS2_SUCCESS )
    {
        printf("logOn request SUCCESSFULL!\n");
    }
    else
    {
        printf("logOn request FAILED!\n");
        printf("Error code: %d\n", env->error->error_number);
        printf("Error message: %s\n", AXIS2_ERROR_GET_MESSAGE(env->error));
    }
}

/*
 * getServiceAttributes functions
 */

axis2_status_t AXIS2_CALL getServiceAttributes_on_complete(
        const axutil_env_t *env,
        adb_serviceAttributes_type0_t *_getServiceAttributesResponse,
        axis2_stub_Kolibre_DaisyOnline_getServiceAttributes_fault fault,
        void *data)
{
    printf("IMPLEMENT ME: getServiceAttributes_on_complete !!!\n");
    return AXIS2_TRUE;
}

axis2_status_t AXIS2_CALL getServiceAttributes_on_error(
        const axutil_env_t *env,
        int exception,
        void *data)
{
    printf("IMPLEMENT ME: getServiceAttributes_on_complete !!!\n");
    return AXIS2_TRUE;
}


void getServiceAttributes(
        axis2_stub_t* stub,
        const axutil_env_t *env)
{
    void *data;

    // async invocation of getServiceAttributes
    axis2_stub_start_op_Kolibre_DaisyOnline_getServiceAttributes(
            stub,
            env,
            data,
            getServiceAttributes_on_complete,
            getServiceAttributes_on_error);

    if ( axutil_env_check_status(env) == AXIS2_SUCCESS )
    {
        printf("getServiceAttributes request SUCCESSFULL!\n");
    }
    else
    {
        printf("getServiceAttributes request FAILED!\n");
        printf("Error code: %d\n", env->error->error_number);
        printf("Error message: %s\n", AXIS2_ERROR_GET_MESSAGE(env->error));
    }
}

/*
 * main
 */

int main(int argc, char **argv)
{
    if (argc < 4)
    {
        printf("Usage: %s <uri> <username> <password>\n", argv[0]);
        return -1;
    }

    if (AXIS2_GETENV("AXIS2C_HOME"))
    {
        printf("Setting AXIS2C_HOME forces logs to be written there, so don't!\n");
        return 1;
    }

    const axis2_char_t *endpoint_uri = argv[1];
    axis2_char_t *username = argv[2];
    axis2_char_t *password = argv[3];

    // create stub
    const axutil_env_t *env;
    env = axutil_env_create_all("asyncsessionestablishment.log", AXIS2_LOG_LEVEL_TRACE);
    axis2_stub_t *stub;
    stub = axis2_stub_create_Kolibre_DaisyOnline(env, AXIS2C_CLIENT_HOME, endpoint_uri);

    if (stub)
    {
        // set axis2 options
        axis2_options_t *options = axis2_stub_get_options(stub, env);
        axis2_options_set_manage_session(options, env, AXIS2_TRUE);

        // logOn
        logOn(stub, env, username, password);
        sleep(1); // for some reason a sleep after a request will pass the test

        // getServiceAttributes
        getServiceAttributes(stub, env);
        sleep(1); // for some reason a sleep after a request will pass the test

        // setReadingsystemAttributes
        // @todo implement async setReadingSystemAttributes call

        // logOff
        // @todo implement async logOff call

    }

    axis2_stub_free(stub, env);
    stub = NULL;

    axutil_env_free((axutil_env_t *) env);
    env = NULL;

    return 0;
}
