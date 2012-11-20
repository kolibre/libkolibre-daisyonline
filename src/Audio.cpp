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

#include "Audio.h"

namespace kdo
{

Audio::Audio()
{
    uri_ = "";
    hasUri_ = false;
    rangeBegin_ = -1;
    hasRangeBegin_ = false;
    rangeEnd_ = -1;
    hasRangeEnd_ = false;
    size_ = -1;
    hasSize_ = false;
}

Audio::Audio(std::string uri, long size)
{
    uri_ = uri;
    hasUri_ = true;
    rangeBegin_ = -1;
    hasRangeBegin_ = false;
    rangeEnd_ = -1;
    hasRangeEnd_ = false;
    size_ = size;
    hasSize_ = true;
}

Audio::Audio(std::string uri, long rangeBegin, long rangeEnd, long size)
{
    uri_ = uri;
    hasUri_ = true;
    rangeBegin_ = rangeBegin;
    hasRangeBegin_ = true;
    rangeEnd_ = rangeEnd;
    hasRangeEnd_ = true;
    size_ = size;
    hasSize_ = true;
}

Audio::~Audio()
{
}

/**
 * @return Returns the The byte offset of the start of the audio label in the resource named in the uri attribute. If the rangeBegin attribute is not present, the start offset is 0.
 */
long Audio::getRangeBegin() const
{
    return rangeBegin_;
}

void Audio::setRangeBegin(long rangeBegin)
{
    hasRangeBegin_ = true;
    rangeBegin_ = rangeBegin;
}

/**
 * @return Returns the byte offset of the end of the audio label in the resource named in the uri attribute. If the rangeEnd attribute is not present, the end is the last byte of the resource.
 */
long Audio::getRangeEnd() const
{
    return rangeEnd_;
}

void Audio::setRangeEnd(long rangeEnd)
{
    hasRangeBegin_ = true;
    rangeEnd_ = rangeEnd;
}

/**
 *  @return Returns the size, in bytes, of the label's audio data.
 */
long Audio::getSize() const
{
    return size_;
}

void Audio::setSize(long size)
{
    hasSize_ = true;
    size_ = size;
}

/**
 * @return Returns the URI of the audio component of the label.
 */
std::string Audio::getUri() const
{
    return uri_;
}

void Audio::setUri(std::string uri)
{
    uri_ = uri;
}

/**
 * Audio has uri
 *
 * @return Returns true if audio contains uri
 */
bool Audio::hasUri()
{
    return hasUri_;
}

/**
 * Audio has rangeBegin
 *
 * @return Returns true if audio contains rangeBegin
 */
bool Audio::hasRangeBegin()
{
    return hasRangeBegin_;
}

/**
 * Audio has rangeEnd
 *
 * @return Returns true if audio contains rangeEnd
 */
bool Audio::hasRangeEnd()
{
    return hasRangeEnd_;
}

/**
 * Audio has size
 *
 * @return Returns true if audio contains size
 */
bool Audio::hasSize()
{
    return hasSize_;
}

bool Audio::isValid()
{
    if (not hasUri_) return false;
    return true;
}

} /* namespace kdo */
