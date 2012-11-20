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

#include "BookmarkAudio.h"

namespace kdo
{

BookmarkAudio::BookmarkAudio()
{
    src_ = "";
    hasSrc_ = false;
    clipBegin_ = "";
    hasClipBegin_ = false;
    clipEnd_ = "";
    hasClipEnd_ = false;
}

BookmarkAudio::BookmarkAudio(std::string src, std::string clipBegin, std::string clipEnd)
{
    src_ = src;
    hasSrc_ = true;
    clipBegin_ = clipBegin;
    hasClipBegin_ = true;
    clipEnd_ = clipEnd;
    hasClipEnd_ = true;
}

BookmarkAudio::~BookmarkAudio()
{
}

bool BookmarkAudio::hasSrc()
{
    return hasSrc_;
}

std::string BookmarkAudio::getSrc() const
{
    return src_;
}

void BookmarkAudio::setSrc(std::string src)
{
    src_ = src;
    hasSrc_ = true;
}

bool BookmarkAudio::hasClipBegin()
{
    return hasClipBegin_;
}

std::string BookmarkAudio::getClipBegin() const
{
    return clipBegin_;
}

void BookmarkAudio::setClipBegin(std::string clipBegin)
{
    clipBegin_ = clipBegin;
    hasClipBegin_ = true;
}

void BookmarkAudio::unsetClipBegin()
{
    clipBegin_ = "";
    hasClipBegin_ = false;
}

bool BookmarkAudio::hasClipEnd()
{
    return hasClipEnd_;
}

std::string BookmarkAudio::getClipEnd() const
{
    return clipEnd_;
}

void BookmarkAudio::setClipEnd(std::string clipEnd)
{
    clipEnd_ = clipEnd;
    hasClipEnd_ = true;
}

void BookmarkAudio::unsetClipEnd()
{
    clipEnd_ = "";
    hasClipEnd_ = false;
}

bool BookmarkAudio::isValid()
{
    if (not hasSrc_) return false;
    if (not hasClipBegin_) return false;
    if (not hasClipEnd_) return false;
    return true;
}

} /* namespace kdo */
