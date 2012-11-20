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

#include "DaisyOnlineHandler.h"
#include "setup_logging.h"

#include <assert.h>
#include <iostream>
#include <cstdlib>

int main(int argc, char **argv)
{
    if (argc < 4)
    {
        std::cout << "Usage: " << argv[0] << " <uri> <username> <password>" << std::endl;
        return -1;
    }

    if (getenv("AXIS2C_HOME"))
    {
        std::cout << "Setting AXIS2C_HOME forces logs to be written there, so don't!" << std::endl;
        return 1;
    }

    setup_logging();

    DaisyOnlineHandler DOHandler(std::string(argv[1]), "getcontentresources/1.2.3");

    if (!DOHandler.good())
    {
        assert(!"Failed to setup connection");
        return -1;
    }

    // successful getContentResources request
    kdo::ContentResources *contentResources;
    contentResources = DOHandler.getContentResources("pub_1");
    assert(DOHandler.good());

    std::vector<kdo::Resource> resources = contentResources->getResouces();

    for (int i = 0; i < resources.size(); i++)
    {
        // required uri
        std::cout << "uri: " << resources[i].getUri() << std::endl;

        // required mimeType
        std::cout << "mimeType: " << resources[i].getMimeType() << std::endl;

        // required size
        std::cout << "size: " << resources[i].getSize() << std::endl;

        // required localURI
        std::cout << "localUri: " << resources[i].getLocalUri() << std::endl;

        // optional lastModifiedDate
        std::cout << "lastModifiedDate: " << resources[i].getLastModifiedDate() << std::endl;

    }

    return 0;
}
