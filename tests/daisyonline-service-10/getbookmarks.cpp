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

    DaisyOnlineHandler DOHandler(std::string(argv[1]), "getbookmarks/1.2.3");

    if (!DOHandler.good())
    {
        assert(!"Failed to setup connection");
        return -1;
    }

    kdo::BookmarkSet* bookmarkSet;

    // successful setBookmarks request (with small bookmarkSet)
    bookmarkSet = DOHandler.getBookmarks("contentID");
    assert(DOHandler.good());

    // check response
    assert(bookmarkSet->isValid());
    assert(bookmarkSet->getTitle().getText() == "text");
    assert(bookmarkSet->getUid() == "uid");

    // successful setBookmarks request (with medium bookmarkSet)
    bookmarkSet = DOHandler.getBookmarks("contentID");
    assert(DOHandler.good());

    // check response
    assert(bookmarkSet->isValid());
    assert(bookmarkSet->getTitle().getText() == "text");
    assert(bookmarkSet->getUid() == "uid");
    assert(bookmarkSet->getLastmark().getNcxRef() == "ncxRef");
    assert(bookmarkSet->getLastmark().getURI() == "URI");
    assert(bookmarkSet->getLastmark().getCharOffset() == 1);

    // successful setBookmarks request (with large bookmarkSet)
    bookmarkSet = DOHandler.getBookmarks("contentID");
    assert(DOHandler.good());

    // check response
    assert(bookmarkSet->isValid());
    assert(bookmarkSet->getTitle().getText() == "text");
    assert(bookmarkSet->getTitle().getAudio().getSrc() == "src");
    assert(bookmarkSet->getTitle().getAudio().getClipBegin() == "clipBegin");
    assert(bookmarkSet->getTitle().getAudio().getClipEnd() == "clipEnd");
    assert(bookmarkSet->getUid() == "uid");
    assert(bookmarkSet->getLastmark().getNcxRef() == "ncxRef");
    assert(bookmarkSet->getLastmark().getURI() == "URI");
    assert(bookmarkSet->getLastmark().getTimeOffset() == "timeOffset");
    assert(bookmarkSet->getLastmark().getCharOffset() == 1);
    assert(bookmarkSet->getChoices().size() == 6);
    kdo::BookmarkChoice choice;

    choice = bookmarkSet->getChoices().at(0);
    assert(choice.isHilite());
    assert(choice.getHilite().getHiliteStart().getNcxRef() == "ncxRef");
    assert(choice.getHilite().getHiliteStart().getURI() == "URI");
    assert(choice.getHilite().getHiliteStart().getTimeOffset() == "timeOffset");
    assert(choice.getHilite().getHiliteEnd().getNcxRef() == "ncxRef");
    assert(choice.getHilite().getHiliteEnd().getURI() == "URI");
    assert(choice.getHilite().getHiliteEnd().getTimeOffset() == "timeOffset");
    assert(choice.getHilite().getNote().getText() == "text");

    choice = bookmarkSet->getChoices().at(1);
    assert(choice.isBookmark());
    assert(choice.getBookmark().getNcxRef() == "ncxRef");
    assert(choice.getBookmark().getURI() == "URI");
    assert(choice.getBookmark().getTimeOffset() == "timeOffset");
    //assert(choice.getBookmark().getNote().getText() == "text");

    choice = bookmarkSet->getChoices().at(2);
    assert(choice.isHilite());
    assert(choice.getHilite().getHiliteStart().getNcxRef() == "ncxRef");
    assert(choice.getHilite().getHiliteStart().getURI() == "URI");
    assert(choice.getHilite().getHiliteStart().getCharOffset() == 1);
    assert(choice.getHilite().getHiliteEnd().getNcxRef() == "ncxRef");
    assert(choice.getHilite().getHiliteEnd().getURI() == "URI");
    assert(choice.getHilite().getHiliteEnd().getCharOffset() == 1);
    assert(choice.getHilite().getNote().getAudio().getSrc() == "src");
    assert(choice.getHilite().getNote().getAudio().getClipBegin() == "clipBegin");
    assert(choice.getHilite().getNote().getAudio().getClipEnd() == "clipEnd");

    choice = bookmarkSet->getChoices().at(3);
    assert(choice.isBookmark());
    assert(choice.getBookmark().getNcxRef() == "ncxRef");
    assert(choice.getBookmark().getURI() == "URI");
    assert(choice.getBookmark().getCharOffset() == 1);
    assert(choice.getBookmark().getNote().getAudio().getSrc() == "src");
    assert(choice.getBookmark().getNote().getAudio().getClipBegin() == "clipBegin");
    assert(choice.getBookmark().getNote().getAudio().getClipEnd() == "clipEnd");

    choice = bookmarkSet->getChoices().at(4);
    assert(choice.isHilite());
    assert(choice.getHilite().getHiliteStart().getNcxRef() == "ncxRef");
    assert(choice.getHilite().getHiliteStart().getURI() == "URI");
    assert(choice.getHilite().getHiliteStart().getTimeOffset() == "timeOffset");
    assert(choice.getHilite().getHiliteStart().getCharOffset() == 1);
    assert(choice.getHilite().getHiliteEnd().getNcxRef() == "ncxRef");
    assert(choice.getHilite().getHiliteEnd().getURI() == "URI");
    assert(choice.getHilite().getHiliteEnd().getTimeOffset() == "timeOffset");
    assert(choice.getHilite().getHiliteEnd().getCharOffset() == 1);
    assert(choice.getHilite().getNote().getText() == "text");
    assert(choice.getHilite().getNote().getAudio().getSrc() == "src");
    assert(choice.getHilite().getNote().getAudio().getClipBegin() == "clipBegin");
    assert(choice.getHilite().getNote().getAudio().getClipEnd() == "clipEnd");
    assert(choice.getHilite().getLabel() == "label");

    choice = bookmarkSet->getChoices().at(5);
    assert(choice.isBookmark());
    assert(choice.getBookmark().getNcxRef() == "ncxRef");
    assert(choice.getBookmark().getURI() == "URI");
    assert(choice.getBookmark().getTimeOffset() == "timeOffset");
    assert(choice.getBookmark().getCharOffset() == 1);
    //assert(choice.getBookmark().getNote().getText() == "text");
    //assert(choice.getBookmark().getNote().getAudio().getSrc() == "src");
    //assert(choice.getBookmark().getNote().getAudio().getClipBegin() == "clipBegin");
    //assert(choice.getBookmark().getNote().getAudio().getClipEnd() == "clipEnd");
    assert(choice.getBookmark().getLabel() == "label");
    assert(choice.getBookmark().getLang() == "lang");

    return 0;
}
