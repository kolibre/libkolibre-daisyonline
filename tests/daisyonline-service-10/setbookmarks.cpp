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

    DaisyOnlineHandler DOHandler(std::string(argv[1]), "setbookmarks/1.2.3");

    if (!DOHandler.good())
    {
        assert(!"Failed to setup connection");
        return -1;
    }

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
    title = kdo::BookmarkTitle("text");
    bookmarkSet = kdo::BookmarkSet(title, "uid");

    // successful setBookmarks request (with small bookmarkSet)
    assert(DOHandler.setBookmarks("contentID", bookmarkSet));
    assert(DOHandler.good());

    // build bookmarkSet object
    title = kdo::BookmarkTitle("text");
    lastmark = kdo::Lastmark("ncxRef", "URI", 1);
    bookmarkSet = kdo::BookmarkSet(title, "uid", lastmark);

    // successful setBookmarks request (with medium bookmarkSet)
    assert(DOHandler.setBookmarks("contentID", bookmarkSet));
    assert(DOHandler.good());

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

    // successful setBookmarks request (with large bookmarkSet)
    assert(DOHandler.setBookmarks("contentID", bookmarkSet));
    assert(DOHandler.good());

    // unsuccessful setBookmarks request
    kdo::BookmarkSet invalidBookmarkSet;
    assert(!DOHandler.setBookmarks("contentID", invalidBookmarkSet));
    assert(DOHandler.getStatus() == DaisyOnlineHandler::ERROR_INVALID_REQUEST_DATA);

    return 0;
}
