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

#include "BookmarkNote.h"

namespace kdo
{

BookmarkNote::BookmarkNote()
{
    text_ = "";
    hasText_ = false;
    audio_ = kdo::BookmarkAudio();
    hasAudio_ = false;
}

BookmarkNote::BookmarkNote(std::string text)
{
    text_ = text;
    hasText_ = true;
    audio_ = kdo::BookmarkAudio();
    hasAudio_ = false;
}

BookmarkNote::BookmarkNote(kdo::BookmarkAudio audio)
{
    text_ = "";
    hasText_ = false;
    audio_ = audio;
    hasAudio_ = true;
}

BookmarkNote::BookmarkNote(std::string text, kdo::BookmarkAudio audio)
{
    text_ = text;
    hasText_ = true;
    audio_ = audio;
    hasAudio_ = true;
}

BookmarkNote::~BookmarkNote()
{
}

bool BookmarkNote::hasText()
{
    return hasText_;
}

std::string BookmarkNote::getText() const
{
    return text_;
}

void BookmarkNote::setText(std::string text)
{
    text_ = text;
    hasText_ = true;
}

void BookmarkNote::unsetText()
{
    text_ = "";
    hasText_ = false;
}

bool BookmarkNote::hasAudio()
{
    return hasAudio_;
}

kdo::BookmarkAudio BookmarkNote::getAudio() const
{
    return audio_;
}

void BookmarkNote::setAudio(kdo::BookmarkAudio audio)
{
    audio_ = audio;
    hasAudio_ = true;
}

void BookmarkNote::unsetAudio()
{
    audio_ = kdo::BookmarkAudio();
    hasAudio_ = false;
}

bool BookmarkNote::isValid()
{
    if (hasAudio_ && not audio_.isValid()) return false;
    return true;
}

} /* namespace kdo */
