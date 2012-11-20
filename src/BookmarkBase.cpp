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

#include "BookmarkBase.h"

namespace kdo
{

BookmarkBase::BookmarkBase()
{
    ncxRef_ = "";
    hasNcxRef_ = false;
    URI_ = "";
    hasURI_ = false;
    timeOffset_ = "";
    hasTimeOffset_ = false;
    charOffset_ = -1;
    hasCharOffset_ = false;
}

BookmarkBase::BookmarkBase(std::string ncxRef, std::string URI)
{
    ncxRef_ = ncxRef;
    hasNcxRef_ = true;
    URI_ = URI;
    hasURI_ = true;
    timeOffset_ = "";
    hasTimeOffset_ = false;
    charOffset_ = -1;
    hasCharOffset_ = false;
}

BookmarkBase::BookmarkBase(std::string ncxRef, std::string URI, std::string timeOffset)
{
    ncxRef_ = ncxRef;
    hasNcxRef_ = true;
    URI_ = URI;
    hasURI_ = true;
    timeOffset_ = timeOffset;
    hasTimeOffset_ = true;
    charOffset_ = -1;
    hasCharOffset_ = false;
}

BookmarkBase::BookmarkBase(std::string ncxRef, std::string URI, int charOffset)
{
    ncxRef_ = ncxRef;
    hasNcxRef_ = true;
    URI_ = URI;
    hasURI_ = true;
    timeOffset_ = "";
    hasTimeOffset_ = false;
    charOffset_ = charOffset;
    hasCharOffset_ = true;
}

BookmarkBase::BookmarkBase(std::string ncxRef, std::string URI, std::string timeOffset, int charOffset)
{
    ncxRef_ = ncxRef;
    hasNcxRef_ = true;
    URI_ = URI;
    hasURI_ = true;
    timeOffset_ = timeOffset;
    hasTimeOffset_ = true;
    charOffset_ = charOffset;
    hasCharOffset_ = true;
}

BookmarkBase::~BookmarkBase()
{
}

bool BookmarkBase::hasNcxRef()
{
    return hasNcxRef_;
}

std::string BookmarkBase::getNcxRef() const
{
    return ncxRef_;
}

void BookmarkBase::setNcxRef(std::string ncxRef)
{
    ncxRef_ = ncxRef;
    hasNcxRef_ = true;
}

bool BookmarkBase::hasURI()
{
    return hasURI_;
}

std::string BookmarkBase::getURI() const
{
    return URI_;
}

void BookmarkBase::setURI(std::string URI)
{
    URI_ = URI;
    hasURI_ = true;
}

bool BookmarkBase::hasTimeOffset()
{
    return hasTimeOffset_;
}

std::string BookmarkBase::getTimeOffset() const
{
    return timeOffset_;
}

void BookmarkBase::setTimeOffset(std::string timeOffset)
{
    timeOffset_ = timeOffset;
    hasTimeOffset_ = true;
}

void BookmarkBase::unsetTimeOffset()
{
    timeOffset_ = "";
    hasTimeOffset_ = false;
}

bool BookmarkBase::hasCharOffset()
{
    return hasCharOffset_;
}

int BookmarkBase::getCharOffset() const
{
    return charOffset_;
}

void BookmarkBase::setCharOffset(int charOffset)
{
    charOffset_ = charOffset;
    hasCharOffset_ = true;
}

void BookmarkBase::unsetCharOffset()
{
    charOffset_ = -1;
    hasCharOffset_ = false;
}

bool BookmarkBase::isValid()
{
    if (not hasNcxRef_) return false;
    if (not hasURI_) return false;
    if (not hasTimeOffset_ && not hasCharOffset_) return false;
    return true;
}

} /* namespace kdo */
