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

kdo::ReadingSystemAttributes buildRSA()
{
    kdo::ReadingSystemAttributes readingSystemAttributes;
    readingSystemAttributes.setManufacturer("Acme Corp");
    readingSystemAttributes.setModel("Pocket phantome");
    readingSystemAttributes.setSerialNumber("123456");
    readingSystemAttributes.setVersion("123");
    readingSystemAttributes.setPreferredUILanguage("en");
    readingSystemAttributes.setBandwidth(800000);
    readingSystemAttributes.addContentFormat("ANSI/NISO Z39.86-2005");
    readingSystemAttributes.addContentFormat("Daisy 2.02");

    return readingSystemAttributes;
}

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

    DaisyOnlineHandler DOHandler(std::string(argv[1]), "setreadingsystemattributes/1.2.3");

    for (int i=1; i<=100; i++)
    {
        std::cout << "Loop counter: " << i << std::endl;
        // build readingSystemAttributes object
        kdo::ReadingSystemAttributes RSA = buildRSA();

        // successful setReadingSystemAttributs request
        assert(DOHandler.setReadingSystemAttributes(RSA));
        assert(DOHandler.good());
    }

    return 0;
}
