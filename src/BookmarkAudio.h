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

#ifndef BOOKMARKAUDIO_H_
#define BOOKMARKAUDIO_H_

#include <string>

namespace kdo
{

class BookmarkAudio
{
public:
    BookmarkAudio();
    BookmarkAudio(std::string src, std::string clipBegin, std::string clipEnd);
    virtual ~BookmarkAudio();

    bool hasSrc();
    std::string getSrc() const;
    void setSrc(std::string src);
    bool hasClipBegin();
    std::string getClipBegin() const;
    void setClipBegin(std::string clipBegin);
    void unsetClipBegin();
    bool hasClipEnd();
    std::string getClipEnd() const;
    void setClipEnd(std::string clipEnd);
    void unsetClipEnd();

    bool isValid();

private:
    bool hasSrc_;
    std::string src_;
    bool hasClipBegin_;
    std::string clipBegin_;
    bool hasClipEnd_;
    std::string clipEnd_;
};

} /* namespace kdo */
#endif /* BOOKMARKAUDIO_H_ */
