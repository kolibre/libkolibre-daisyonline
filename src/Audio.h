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

#ifndef AUDIO_H_
#define AUDIO_H_
#include <string>

namespace kdo
{
/**
 * \brief An audio file
 */
class Audio
{
public:
    Audio();
    Audio(std::string uri, long size);
    Audio(std::string uri, long rangeBegin, long rangeEnd, long size);
    virtual ~Audio();

    long getRangeBegin() const;
    void setRangeBegin(long rangeBegin);
    long getRangeEnd() const;
    void setRangeEnd(long rangeEnd);
    long getSize() const;
    void setSize(long size);
    std::string getUri() const;
    void setUri(std::string uri);
    bool hasUri();
    bool hasRangeBegin();
    bool hasRangeEnd();
    bool hasSize();

    bool isValid();
private:
    //!The URI of the audio component of the label.
    std::string uri_;
    //!The byte offset of the start of the audio label in the resource named in the uri attribute. If the rangeBegin attribute is not present, the start offset is 0.
    long rangeBegin_;
    //!The byte offset of the end of the audio label in the resource named in the uri attribute. If the rangeEnd attribute is not present, the end is the last byte of the resource.
    long rangeEnd_;
    //!The size, in bytes, of the label's audio data.
    long size_;
    //!Check if uri has been set
    bool hasUri_;
    //!Check if range begin has been set
    bool hasRangeBegin_;
    //!Check if range end has been set
    bool hasRangeEnd_;
    //!Check if size has been set
    bool hasSize_;
};

} /* namespace kdo */
#endif /* AUDIO_H_ */
