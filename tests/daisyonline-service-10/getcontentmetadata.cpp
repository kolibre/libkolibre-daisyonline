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

    DaisyOnlineHandler DOHandler(std::string(argv[1]), "getcontentmetadata/1.2.3");

    if (!DOHandler.good())
    {
        assert(!"Failed to setup connection");
        return -1;
    }

    // successful getContentMetadata request
    kdo::ContentMetadata *contentMetadata;
    contentMetadata = DOHandler.getContentMetadata("pub_1");
    assert(DOHandler.good());

    // required requiresReturn
    std::cout << "requires return:" << contentMetadata->isRequiresReturn() << std::endl;
    // optional sample
    std::cout << "sample: " << contentMetadata->getSample() << std::endl;

    std::cout << "title: " << contentMetadata->getTitle() << std::endl;

    std::cout << "identifier: " << contentMetadata->getIdentifier() << std::endl;

    // optional publisher

    // required format
    std::cout << "format: " << contentMetadata->getFormat() << std::endl;

    // optional date
    // optional source
    // optional type
    // optional subject
    // optional rights
    // optional relation
    // optional language
    // optional description
    // optional creator
    // optional coverage
    // optional contributor
    // optional narrator

    // required size
    std::cout << "size: " << contentMetadata->getSize() << std::endl;

    // optional meta

    return 0;
}
