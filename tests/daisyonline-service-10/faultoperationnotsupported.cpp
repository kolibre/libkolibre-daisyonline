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

    DaisyOnlineHandler DOHandler(std::string(argv[1]), "faultoperationnotsupported/1.2.3");

    if (!DOHandler.good())
    {
        assert(!"Failed to setup connection");
        return -1;
    }

    // returnContent
    assert(!DOHandler.returnContent("not_a_valid_content_id"));
    assert(!DOHandler.good());
    assert(DOHandler.getStatus() == DaisyOnlineHandler::FAULT_OPERATIONNOTSUPPORTED);
    assert(DOHandler.getLastSoapFaultReason() == "Operation Not Supported");

    // getServiceAnnouncements
    assert(!DOHandler.getServiceAnnouncements());
    assert(!DOHandler.good());
    assert(DOHandler.getStatus() == DaisyOnlineHandler::FAULT_OPERATIONNOTSUPPORTED);
    assert(DOHandler.getLastSoapFaultReason() == "Operation Not Supported");

    // markAnnouncementsAsRead
    assert(!DOHandler.markAnnouncementsAsRead("not_a_valid_announcement_id"));
    assert(!DOHandler.good());
    assert(DOHandler.getStatus() == DaisyOnlineHandler::FAULT_OPERATIONNOTSUPPORTED);
    assert(DOHandler.getLastSoapFaultReason() == "Operation Not Supported");

    // setBookmarks
    kdo::BookmarkTitle title("text");
    kdo::BookmarkSet bookmarkSet(title, "uid");
    assert(!DOHandler.setBookmarks("not_a_valid_content_id", bookmarkSet));
    assert(!DOHandler.good());
    assert(DOHandler.getStatus() == DaisyOnlineHandler::FAULT_OPERATIONNOTSUPPORTED);
    assert(DOHandler.getLastSoapFaultReason() == "Operation Not Supported");

    // getBookmarks
    assert(NULL == DOHandler.getBookmarks("not_a_valid_content_id"));
    assert(!DOHandler.good());
    assert(DOHandler.getStatus() == DaisyOnlineHandler::FAULT_OPERATIONNOTSUPPORTED);
    assert(DOHandler.getLastSoapFaultReason() == "Operation Not Supported");

    // getQuestions
    assert(NULL == DOHandler.getQuestions("default"));
    assert(!DOHandler.good());
    assert(DOHandler.getStatus() == DaisyOnlineHandler::FAULT_OPERATIONNOTSUPPORTED);
    assert(DOHandler.getLastSoapFaultReason() == "Operation Not Supported");

    return 0;
}
