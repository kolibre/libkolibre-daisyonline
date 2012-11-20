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

#ifndef BOOKMARKBASE_H_
#define BOOKMARKBASE_H_

#include <string>

namespace kdo
{

class BookmarkBase
{
public:
    BookmarkBase();
    BookmarkBase(std::string ncxRef, std::string URI);
    BookmarkBase(std::string ncxRef, std::string URI, std::string timeOffset);
    BookmarkBase(std::string ncxRef, std::string URI, int charOffset);
    BookmarkBase(std::string ncxRef, std::string URI, std::string timeOffset, int charOffset);
    virtual ~BookmarkBase();

    bool hasNcxRef();
    std::string getNcxRef() const;
    void setNcxRef(std::string ncxRef);
    bool hasURI();
    std::string getURI() const;
    void setURI(std::string URI);
    bool hasTimeOffset();
    std::string getTimeOffset() const;
    void setTimeOffset(std::string timeOffset);
    void unsetTimeOffset();
    bool hasCharOffset();
    int getCharOffset() const;
    void setCharOffset(int charOffset);
    void unsetCharOffset();

    bool isValid();

private:
    bool hasNcxRef_;
    std::string ncxRef_;
    bool hasURI_;
    std::string URI_;
    bool hasTimeOffset_;
    std::string timeOffset_;
    bool hasCharOffset_;
    int charOffset_;
};

} /* namespace kdo */
#endif /* BOOKMARKBASE_H_ */
