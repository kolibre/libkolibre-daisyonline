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

#ifndef BOOKMARK_H_
#define BOOKMARK_H_

#include "BookmarkBase.h"
#include "BookmarkNote.h"

namespace kdo
{

class Bookmark: public kdo::BookmarkBase
{
public:
    Bookmark();
    Bookmark(std::string ncxRef, std::string URI);
    Bookmark(std::string ncxRef, std::string URI, std::string timeOffset);
    Bookmark(std::string ncxRef, std::string URI, int charOffset);
    Bookmark(std::string ncxRef, std::string URI, std::string timeOffset, int charOffset);
    Bookmark(kdo::BookmarkBase base);
    virtual ~Bookmark();

    bool hasNote();
    kdo::BookmarkNote getNote() const;
    void setNote(kdo::BookmarkNote note);
    void unsetNote();
    bool hasLabel();
    std::string getLabel() const;
    void setLabel(std::string label);
    void unsetLabel();
    bool hasLang();
    std::string getLang() const;
    void setLang(std::string lang);
    void unsetLang();

    bool isValid();

private:
    bool hasNote_;
    kdo::BookmarkNote note_;
    bool hasLabel_;
    std::string label_;
    bool hasLang_;
    std::string lang_;
};

} /* namespace kdo */
#endif /* BOOKMARK_H_ */
