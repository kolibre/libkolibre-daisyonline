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

#include "Bookmark.h"

namespace kdo
{

Bookmark::Bookmark()
{
    note_ = kdo::BookmarkNote();
    hasNote_ = false;
    label_ = "";
    hasLabel_ = false;
    lang_ = "";
    hasLang_ = false;
}

Bookmark::Bookmark(std::string ncxRef, std::string URI) :
        kdo::BookmarkBase(ncxRef, URI)
{
    note_ = kdo::BookmarkNote();
    hasNote_ = false;
    label_ = "";
    hasLabel_ = false;
    lang_ = "";
    hasLang_ = false;
}

Bookmark::Bookmark(std::string ncxRef, std::string URI, std::string timeOffset) :
        kdo::BookmarkBase(ncxRef, URI, timeOffset)
{
    note_ = kdo::BookmarkNote();
    hasNote_ = false;
    label_ = "";
    hasLabel_ = false;
    lang_ = "";
    hasLang_ = false;
}

Bookmark::Bookmark(std::string ncxRef, std::string URI, int charOffset) :
        kdo::BookmarkBase(ncxRef, URI, charOffset)
{
    note_ = kdo::BookmarkNote();
    hasNote_ = false;
    label_ = "";
    hasLabel_ = false;
    lang_ = "";
    hasLang_ = false;
}

Bookmark::Bookmark(std::string ncxRef, std::string URI, std::string timeOffset, int charOffset) :
        kdo::BookmarkBase(ncxRef, URI, timeOffset, charOffset)
{
    note_ = kdo::BookmarkNote();
    hasNote_ = false;
    label_ = "";
    hasLabel_ = false;
    lang_ = "";
    hasLang_ = false;
}

Bookmark::Bookmark(kdo::BookmarkBase base) :
        kdo::BookmarkBase(base)
{
    note_ = kdo::BookmarkNote();
    hasNote_ = false;
    label_ = "";
    hasLabel_ = false;
    lang_ = "";
    hasLang_ = false;
}

Bookmark::~Bookmark()
{
}

bool Bookmark::hasNote()
{
    return hasNote_;
}

kdo::BookmarkNote Bookmark::getNote() const
{
    return note_;
}

void Bookmark::setNote(kdo::BookmarkNote note)
{
    note_ = note;
    hasNote_ = true;
}

void Bookmark::unsetNote()
{
    note_ = kdo::BookmarkNote();
    hasNote_ = false;
}

bool Bookmark::hasLabel()
{
    return hasLabel_;
}

std::string Bookmark::getLabel() const
{
    return label_;
}

void Bookmark::setLabel(std::string label)
{
    label_ = label;
    hasLabel_ = true;
}

void Bookmark::unsetLabel()
{
    label_ = "";
    hasLabel_ = false;
}

bool Bookmark::hasLang()
{
    return hasLang_;
}

std::string Bookmark::getLang() const
{
    return lang_;
}

void Bookmark::setLang(std::string lang)
{
    lang_ = lang;
    hasLang_ = true;
}

void Bookmark::unsetLang()
{
    lang_ = "";
    hasLang_ = false;
}

bool Bookmark::isValid()
{
    if (not kdo::BookmarkBase::isValid()) return false;
    if (hasNote_ && not note_.isValid()) return false;
    return true;
}

} /* namespace kdo */
