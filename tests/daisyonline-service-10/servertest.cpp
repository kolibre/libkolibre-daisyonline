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

    DaisyOnlineHandler DOHandler(std::string(argv[1]), "servertest/1.2.3");

    if (!DOHandler.good())
    {
        assert(!"Failed to setup connection");
        return -1;
    }

    // build readingSystemAttributes object
    kdo::ReadingSystemAttributes readingSystemAttributes;
    readingSystemAttributes.setManufacturer("Kolibre");
    readingSystemAttributes.setModel("Axis2C");
    readingSystemAttributes.setVersion("1.6.0");
    readingSystemAttributes.setPreferredUILanguage("en");
    readingSystemAttributes.addContentFormat("ANSI/NISO Z39.86-2005");
    readingSystemAttributes.addContentFormat("Daisy 2.02");
    readingSystemAttributes.addMimeType("audio/mpeg");

    // logOn
    std::cout << "call logOn" << std::endl;
    assert(DOHandler.logOn(std::string(argv[2]), std::string(argv[3])));
    assert(DOHandler.good());

    // getServiceAttributes
    std::cout << "call getServiceAttributes" << std::endl;
    kdo::ServiceAttributes *serviceAttributes = DOHandler.getServiceAttributes();
    assert(DOHandler.good());

    // setReadingSystemAttributes
    std::cout << "call setReadingSystemAttributes" << std::endl;
    assert(DOHandler.setReadingSystemAttributes(readingSystemAttributes));
    assert(DOHandler.good());

    // getContentList (new)
    std::cout << "call getContentList(\"new\", 0, -1)" << std::endl;
    kdo::ContentList *contentListNew = DOHandler.getContentList("new", 0, -1);
    assert(DOHandler.good());

    // issue all items in content list
    if (contentListNew)
    {
        // print information
        std::cout << std::endl << "::contentList information::" << std::endl;
        std::cout << "id: " << contentListNew->getId() << std::endl;
        std::cout << "totalItems: " << contentListNew->getTotalItems() << std::endl;
        std::cout << "label.text: " << contentListNew->getLabel().getText() << std::endl;
        std::cout << "label.lang: " << contentListNew->getLabel().getLang() << std::endl;
        if (contentListNew->getLabel().hasAudio())
        {
            std::cout << "label.audio.src: " << contentListNew->getLabel().getAudio().getUri() << std::endl;
        }

        // issue items
        std::vector<kdo::ContentItem> contentItems = contentListNew->getContentItems();
        if (contentItems.size() > 0)
        {
            std::cout << "issuing all items in content list" << std::endl;
            for (int i = 0; i < contentItems.size(); i++)
            {
                std::string contentID = contentItems[i].getId();
                if (contentID.size() > 0)
                {
                    std::cout << "call getContentMetadata(\"" << contentID << "\")" << std::endl;
                    kdo::ContentMetadata *contentMetadata = DOHandler.getContentMetadata(contentID);
                    assert(DOHandler.good());
                    std::cout << "call issueContent(\"" << contentID << "\")" << std::endl;
                    assert(DOHandler.issueContent(contentID));
                    assert(DOHandler.good());
                }
            }
        }
        delete contentListNew;
    }

    // getContentList (issued)
    std::cout << "call getContentList(\"issued\", 0, -1)" << std::endl;
    kdo::ContentList *contentListIssued = DOHandler.getContentList("issued", 0, -1);

    if (contentListIssued)
    {
        // print information
        std::cout << std::endl << "::contentList information::" << std::endl;
        std::cout << "id: " << contentListIssued->getId() << std::endl;
        std::cout << "totalItems: " << contentListIssued->getTotalItems() << std::endl;
        std::cout << "label.text: " << contentListIssued->getLabel().getText() << std::endl;
        std::cout << "label.lang: " << contentListIssued->getLabel().getLang() << std::endl;
        if (contentListIssued->getLabel().hasAudio())
        {
            std::cout << "label.audio.src: " << contentListIssued->getLabel().getAudio().getUri() << std::endl;
        }

        // fetch resources
        std::vector<kdo::ContentItem> contentItems = contentListIssued->getContentItems();
        if (contentItems.size() > 0)
        {
            std::cout << "getting content resources for all items in content list" << std::endl;
            for (int i = 0; i < contentItems.size(); i++)
            {
                std::string contentID = contentItems[i].getId();
                if (contentID.size() > 0)
                {
                    // getContentResouces
                    std::cout << "call getContentResources(\"" << contentID << "\")" << std::endl;
                    kdo::ContentResources *contentResources = DOHandler.getContentResources(contentID);
                    assert(DOHandler.good());
                    if (contentResources)
                    {
                        std::cout << std::endl << "::contentResources information::" << std::endl;
                        std::vector<kdo::Resource> resources = contentResources->getResouces();
                        for (int j = 0; j < resources.size(); j++)
                        {
                            std::cout << "uri: " << resources[j].getUri() << std::endl;
                            std::cout << "mimeType: " << resources[j].getMimeType() << std::endl;
                            std::cout << "size: " << resources[j].getSize() << std::endl;
                            std::cout << "localURI: " << resources[j].getLocalUri() << std::endl;
                        }
                        delete contentResources;
                    }
                    else
                    {
                        std::cout << "getContentResources failed for " << contentID << std::endl;
                    }
                }
            }
        }

        // return content if necessary
        if (contentItems.size() > 0)
        {
            std::cout << "returning content which requires return" << std::endl;
            for (int i = 0; i < contentItems.size(); i++)
            {
                std::string contentID = contentItems[i].getId();
                if (contentID.size() > 0)
                {
                    std::cout << "call getContentMetadata(\"" << contentID << "\")" << std::endl;
                    kdo::ContentMetadata *contentMetadata = DOHandler.getContentMetadata(contentID);
                    assert(DOHandler.good());
                    if (contentMetadata->isRequiresReturn())
                    {
                        std::cout << "call returnContent(\"" << contentID << "\")" << std::endl;
                        DOHandler.returnContent(contentID);
                        //assert(DOHandler.returnContent(contentID));
                        //assert(DOHandler.good());
                    }
                }
            }
        }
        delete contentListIssued;
    }

    // announcements
    if (serviceAttributes->isSupportedOperation(kdo::ServiceAttributes::SERVICE_ANNOUNCEMENTS))
    {
        std::cout << "call getServiceAnnouncements" << std::endl;
        kdo::ServiceAnnouncements *serviceAnnouncements = DOHandler.getServiceAnnouncements();
        assert(DOHandler.good());

        std::vector<kdo::Announcement> announcements = serviceAnnouncements->getAnnouncements();

        for (int i = 0; i < announcements.size(); i++)
        {
            kdo::Announcement announcement = announcements[i];
            std::cout << "call markAnnouncementsAsRead(\"" << announcement.getId() << "\")" << std::endl;
            assert(DOHandler.markAnnouncementsAsRead(announcement.getId()));
            assert(DOHandler.good());
        }
    }
    else
    {
        std::cout << "skipping getServiceAnnouncements and markAnnouncementsAsRead since it is not supported by the service" << std::endl;
    }

    // bookmarks
    if (serviceAttributes->isSupportedOperation(kdo::ServiceAttributes::SET_BOOKMARKS) && serviceAttributes->isSupportedOperation(kdo::ServiceAttributes::GET_BOOKMARKS))
    {
        // build bookmarkSet object
        kdo::BookmarkTitle title("text");
        kdo::Lastmark lastmark("ncxRef", "URI", 1);
        kdo::BookmarkSet bookmarkSet(title, "uid", lastmark);

        std::cout << "call setBookmarks" << std::endl;
        assert(DOHandler.setBookmarks("contentID", bookmarkSet));
        assert(DOHandler.good());

        std::cout << "call getBookmarks" << std::endl;
        kdo::BookmarkSet *bmkSet = DOHandler.getBookmarks("contentID");
        assert(DOHandler.good());
    }
    else
    {
        std::cout << "skipping setBookmark and getBookmarks since it is not supported by the service" << std::endl;
    }

    // logOff
    std::cout << "call logOff" << std::endl;
    assert(DOHandler.logOff());
    assert(DOHandler.good());

    return 0;
}
