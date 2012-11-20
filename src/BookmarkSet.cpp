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

#include "BookmarkSet.h"

namespace kdo
{

BookmarkSet::BookmarkSet()
{
    title_ = kdo::BookmarkTitle();
    hasTitle_ = false;
    uid_ = "";
    hasUid_ = false;
    lastmark_ = kdo::Lastmark();
    hasLastmark_ = false;
}

BookmarkSet::BookmarkSet(kdo::BookmarkTitle title, std::string uid)
{
    title_ = title;
    hasTitle_ = true;
    uid_ = uid;
    hasUid_ = true;
    lastmark_ = kdo::Lastmark();
    hasLastmark_ = false;
}

BookmarkSet::BookmarkSet(kdo::BookmarkTitle title, std::string uid, kdo::Lastmark lastmark)
{
    title_ = title;
    hasTitle_ = true;
    uid_ = uid;
    hasUid_ = true;
    lastmark_ = lastmark;
    hasLastmark_ = true;
}

BookmarkSet::~BookmarkSet()
{
}

bool BookmarkSet::hasTitle()
{
    return hasTitle_;
}

kdo::BookmarkTitle BookmarkSet::getTitle() const
{
    return title_;
}

void BookmarkSet::setTitle(kdo::BookmarkTitle title)
{
    title_ = title;
    hasTitle_ = true;
}

bool BookmarkSet::hasUid()
{
    return hasUid_;
}

std::string BookmarkSet::getUid() const
{
    return uid_;
}

void BookmarkSet::setUid(std::string uid)
{
    uid_ = uid;
    hasUid_ = true;
}

bool BookmarkSet::hasLastmark()
{
    return hasLastmark_;
}

kdo::Lastmark BookmarkSet::getLastmark() const
{
    return lastmark_;
}

void BookmarkSet::setLastmark(kdo::Lastmark lastmark)
{
    lastmark_ = lastmark;
    hasLastmark_ = true;
}

void BookmarkSet::unsetLastmark()
{
    lastmark_ = kdo::Lastmark();
    hasLastmark_ = false;
}

std::vector<kdo::BookmarkChoice> BookmarkSet::getChoices() const
{
    return choices_;
}

void BookmarkSet::addChoice(kdo::Bookmark bookmark)
{
    choices_.push_back(kdo::BookmarkChoice(bookmark));
}

void BookmarkSet::addChoice(kdo::Hilite hilite)
{
    choices_.push_back(kdo::BookmarkChoice(hilite));
}

void BookmarkSet::clearChoices()
{
    choices_.clear();
}

bool BookmarkSet::isValid()
{
    if (not hasTitle_ || not title_.isValid()) return false;
    if (not hasUid_) return false;
    if (hasLastmark_ && not lastmark_.isValid()) return false;
    if (choices_.size() > 0)
    {
        for (std::vector<kdo::BookmarkChoice>::iterator it = choices_.begin(); it < choices_.end(); it++)
        {
            if (not it->isValid()) return false;
        }

    }
    return true;
}

} /* namespace kdo */
