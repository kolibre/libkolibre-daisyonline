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

    DaisyOnlineHandler DOHandler(std::string(argv[1]), "getcontentlist/1.2.3");

    if (!DOHandler.good())
    {
        assert(!"Failed to setup connection");
        return -1;
    }

    // successful getContentList request
    kdo::ContentList *contentList;
    contentList = DOHandler.getContentList("new", 0, -1);
    assert(DOHandler.good());

    // required totalItems
    std::cout << "total items: " << contentList->getLastItem() << std::endl;

    // optional firstItem
    // optional lastItem

    // required id
    std::cout << "list id: " << contentList->getId() << std::endl;

    assert("new" == contentList->getId());

    // optional label
    if (contentList->getLabel().getText() != "")
    {
        std::cout << "label: " << contentList->getLabel().getText() << std::endl;
    }

    std::vector<kdo::ContentItem> contents = contentList->getContentItems();
    for (int i = 0; i < contents.size(); i++)
    {

        // required id
        std::cout << "id: " << contents[i].getId() << std::endl;

        // optional lastModifiedDate
        std::cout << "lastModifiedDate: " << contents[i].getLastModifiedData() << std::endl;

        // required label
        std::cout << "Label: " << contents[i].getLabel().getText() << std::endl;
    }

    return 0;
}
