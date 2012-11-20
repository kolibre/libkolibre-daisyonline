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

#include "BookmarkChoice.h"

namespace kdo
{

BookmarkChoice::BookmarkChoice()
{
    bookmark_ = kdo::Bookmark();
    isBookmark_ = false;
    hilite_ = kdo::Hilite();
    isHilite_ = false;
}

BookmarkChoice::BookmarkChoice(kdo::Bookmark bookmark)
{
    bookmark_ = bookmark;
    isBookmark_ = true;
    hilite_ = kdo::Hilite();
    isHilite_ = false;
}

BookmarkChoice::BookmarkChoice(kdo::Hilite hilite)
{
    bookmark_ = kdo::Bookmark();
    isBookmark_ = false;
    hilite_ = hilite;
    isHilite_ = true;
}

BookmarkChoice::~BookmarkChoice()
{
}

bool BookmarkChoice::isBookmark()
{
    return isBookmark_;
}

kdo::Bookmark BookmarkChoice::getBookmark() const
{
    return bookmark_;
}

void BookmarkChoice::setBookmark(kdo::Bookmark bookmark)
{
    bookmark_ = bookmark;
    isBookmark_ = true;
    hilite_ = kdo::Hilite();
    isHilite_ = false;
}

bool BookmarkChoice::isHilite()
{
    return isHilite_;
}

kdo::Hilite BookmarkChoice::getHilite() const
{
    return hilite_;
}

void BookmarkChoice::setHilite(kdo::Hilite hilite)
{
    bookmark_ = kdo::Bookmark();
    isBookmark_ = false;
    hilite_ = hilite;
    isHilite_ = true;
}

bool BookmarkChoice::isValid()
{
    if (not isBookmark_ && not isHilite_) return false;
    if (isBookmark_ && not bookmark_.isValid()) return false;
    if (isHilite_ && not hilite_.isValid()) return false;
    return true;
}

} /* namespace kdo */
