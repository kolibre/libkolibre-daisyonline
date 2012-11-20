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
#include <fstream>
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

    DaisyOnlineHandler DOHandler(std::string(argv[1]), "memoryleak/1.2.3");

    if (!DOHandler.good())
    {
        assert(!"Failed to setup connection");
        return -1;
    }

    // build readingSystemAttributes object
    kdo::ReadingSystemAttributes readingSystemAttributes;
    readingSystemAttributes.setManufacturer("Acme Corp");
    readingSystemAttributes.setModel("Pocket phantome");
    readingSystemAttributes.setSerialNumber("123456");
    readingSystemAttributes.setVersion("123");
    readingSystemAttributes.setPreferredUILanguage("en");
    readingSystemAttributes.setBandwidth(800000);
    readingSystemAttributes.addContentFormat("ANSI/NISO Z39.86-2005");
    readingSystemAttributes.addContentFormat("Daisy 2.02");

    // bookmarkSet class and sub classes
    kdo::BookmarkSet bookmarkSet;
    kdo::BookmarkAudio audio;
    kdo::BookmarkTitle title;
    kdo::Lastmark lastmark;
    kdo::Bookmark bookmark;
    kdo::Hilite hilite;
    kdo::HiliteStart hiliteStart;
    kdo::HiliteEnd hiliteEnd;
    kdo::BookmarkNote note;

    // build bookmarkSet object
    audio = kdo::BookmarkAudio("src", "clipBegin", "clipEnd");
    title = kdo::BookmarkTitle("text", audio);
    lastmark = kdo::Lastmark("ncxRef", "URI", "timeOffset", 1);
    bookmarkSet = kdo::BookmarkSet(title, "uid", lastmark);

    note = kdo::BookmarkNote("text");

    hiliteStart = kdo::HiliteStart("ncxRef", "URI", "timeOffset");
    hiliteEnd = kdo::HiliteEnd("ncxRef", "URI", "timeOffset");
    hilite = kdo::Hilite(hiliteStart, hiliteEnd);
    hilite.setNote(note);
    bookmarkSet.addChoice(hilite);

    bookmark = kdo::Bookmark("ncxRef", "URI", "timeOffset");
    bookmark.setNote(note);
    bookmarkSet.addChoice(bookmark);

    note = kdo::BookmarkNote(audio);

    hiliteStart = kdo::HiliteStart("ncxRef", "URI", 1);
    hiliteEnd = kdo::HiliteEnd("ncxRef", "URI", 1);
    hilite = kdo::Hilite(hiliteStart, hiliteEnd);
    hilite.setNote(note);
    bookmarkSet.addChoice(hilite);

    bookmark = kdo::Bookmark("ncxRef", "URI", 1);
    bookmark.setNote(note);
    bookmarkSet.addChoice(bookmark);

    note = kdo::BookmarkNote("text", audio);

    hiliteStart = kdo::HiliteStart("ncxRef", "URI", "timeOffset", 1);
    hiliteEnd = kdo::HiliteEnd("ncxRef", "URI", "timeOffset", 1);
    hilite = kdo::Hilite(hiliteStart, hiliteEnd);
    hilite.setNote(note);
    hilite.setLabel("label");
    bookmarkSet.addChoice(hilite);

    bookmark = kdo::Bookmark("ncxRef", "URI", "timeOffset", 1);
    bookmark.setNote(note);
    bookmark.setLabel("label");
    bookmark.setLang("lang");
    bookmarkSet.addChoice(bookmark);

    // build userResponse vector
    std::vector<kdo::UserResponse> responses;
    kdo::UserResponse response;

    //00000000  4f 67 67 53 00 02 00 00  00 00 00 00 00 00 6d 34  |OggS..........m4|
    char data[16];
    data[0] = 0x4f;
    data[1] = 0x67;
    data[2] = 0x67;
    data[3] = 0x53;
    data[4] = 0x00;
    data[5] = 0x02;
    data[6] = 0x00;
    data[7] = 0x00;

    data[8] = 0x00;
    data[9] = 0x00;
    data[10] = 0x00;
    data[11] = 0x00;
    data[12] = 0x00;
    data[13] = 0x00;
    data[14] = 0x6d;
    data[15] = 0x34;

    response = kdo::UserResponse("q2-1", "Full text search query");
    responses.push_back(response);
    response = kdo::UserResponse("q2-2", data, 16);
    responses.push_back(response);
    response = kdo::UserResponse("q2-3", "c1");
    responses.push_back(response);
    response = kdo::UserResponse("q2-3", "c2");
    responses.push_back(response);

    for (int i = 0; i < 10; i++)
    {
        // successful logOn request
        assert(DOHandler.logOn(std::string(argv[2]), std::string(argv[3])));
        assert(DOHandler.good());

        // successful getServiceAttributes request
        kdo::ServiceAttributes* serviceAttributes;
        serviceAttributes = DOHandler.getServiceAttributes();
        assert(serviceAttributes != NULL);
        assert(DOHandler.good());
        delete serviceAttributes;
        serviceAttributes = NULL;

        // successful setReadingSystemAttributes
        assert(DOHandler.setReadingSystemAttributes(readingSystemAttributes));
        assert(DOHandler.good());

        // successful getContentList request
        kdo::ContentList *contentList;
        contentList = DOHandler.getContentList("new", 0, -1);
        assert(contentList != NULL);
        assert(DOHandler.good());
        delete contentList;
        contentList = NULL;

        // successful getContentMetadata request
        kdo::ContentMetadata *contentMetadata;
        contentMetadata = DOHandler.getContentMetadata("content_id");
        assert(contentMetadata != NULL);
        assert(DOHandler.good());
        delete contentMetadata;
        contentMetadata = NULL;

        // successful issueContent request
        assert(DOHandler.issueContent("content_id"));
        assert(DOHandler.good());

        // successful getContentResources request
        kdo::ContentResources *contentResources;
        contentResources = DOHandler.getContentResources("content_id");
        assert(contentResources != NULL);
        assert(DOHandler.good());
        delete contentResources;
        contentResources = NULL;

        // successful returnContent request
        assert(DOHandler.returnContent("content_id"));
        assert(DOHandler.good());

        // successful getServiceAnnouncements request
        kdo::ServiceAnnouncements *serviceAnnouncements;
        serviceAnnouncements = DOHandler.getServiceAnnouncements();
        assert(serviceAnnouncements != NULL);
        assert(DOHandler.good());
        delete serviceAnnouncements;
        serviceAnnouncements = NULL;

        // successful markAnnouncementsAsRead request
        assert(DOHandler.markAnnouncementsAsRead("announcement_id"));
        assert(DOHandler.good());

        // successful setBookmarks request
        assert(DOHandler.setBookmarks("content_id", bookmarkSet));
        assert(DOHandler.good());

        // successful getBookmarks request
        kdo::BookmarkSet *bookmarkset;
        bookmarkset = DOHandler.getBookmarks("content_id");
        assert(bookmarkset != NULL);
        assert(DOHandler.good());
        delete bookmarkset;
        bookmarkset = NULL;

        // successful getQuestions request
        kdo::Questions *questions;
        questions = DOHandler.getQuestions(responses);
        assert(questions != NULL);
        assert(DOHandler.good());
        delete questions;
        questions = NULL;

        // successful logOff request
        assert(DOHandler.logOff());
        assert(DOHandler.good());

        // reset test data order
        assert(argc > 4);
        std::ofstream orderfile;
        orderfile.open(argv[4]);
        orderfile << 1;
        orderfile.close();
    }

    return 0;
}
