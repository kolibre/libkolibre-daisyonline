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

#include "BookmarkTitle.h"

namespace kdo
{

BookmarkTitle::BookmarkTitle()
{
    text_ = "";
    hasText_ = false;
    audio_ = kdo::BookmarkAudio();
    hasAudio_ = false;
}

BookmarkTitle::BookmarkTitle(std::string text)
{
    text_ = text;
    hasText_ = true;
    audio_ = kdo::BookmarkAudio();
    hasAudio_ = false;
}

BookmarkTitle::BookmarkTitle(std::string text, kdo::BookmarkAudio audio)
{
    text_ = text;
    hasText_ = true;
    audio_ = audio;
    hasAudio_ = true;
}

BookmarkTitle::~BookmarkTitle()
{
}

bool BookmarkTitle::hasText()
{
    return hasText_;
}

std::string BookmarkTitle::getText() const
{
    return text_;
}

void BookmarkTitle::setText(std::string text)
{
    text_ = text;
    hasText_ = true;
}

bool BookmarkTitle::hasAudio()
{
    return hasAudio_;
}

kdo::BookmarkAudio BookmarkTitle::getAudio() const
{
    return audio_;
}

void BookmarkTitle::setAudio(kdo::BookmarkAudio audio)
{
    audio_ = audio;
    hasAudio_ = true;
}

void BookmarkTitle::unsetAudio()
{
    audio_ = kdo::BookmarkAudio();
    hasAudio_ = false;
}

bool BookmarkTitle::isValid()
{
    if (not hasText_) return false;
    if (hasAudio_ && not audio_.isValid()) return false;
    return true;
}

} /* namespace kdo */
