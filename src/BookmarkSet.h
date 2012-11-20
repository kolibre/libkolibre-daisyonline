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

#ifndef BOOKMARKSET_H_
#define BOOKMARKSET_H_

#include "BookmarkTitle.h"
#include "Lastmark.h"
#include "BookmarkChoice.h"
#include <string>
#include <vector>

namespace kdo
{

class BookmarkSet
{
public:
    BookmarkSet();
    BookmarkSet(kdo::BookmarkTitle title, std::string uid);
    BookmarkSet(kdo::BookmarkTitle title, std::string uid, kdo::Lastmark lastmark);
    virtual ~BookmarkSet();

    bool hasTitle();
    kdo::BookmarkTitle getTitle() const;
    void setTitle(kdo::BookmarkTitle title);
    bool hasUid();
    std::string getUid() const;
    void setUid(std::string uid);
    bool hasLastmark();
    kdo::Lastmark getLastmark() const;
    void setLastmark(kdo::Lastmark lastmark);
    void unsetLastmark();
    std::vector<kdo::BookmarkChoice> getChoices() const;
    void addChoice(kdo::Bookmark bookmark);
    void addChoice(kdo::Hilite hilite);
    void clearChoices();

    bool isValid();

private:
    bool hasTitle_;
    kdo::BookmarkTitle title_;
    bool hasUid_;
    std::string uid_;
    bool hasLastmark_;
    kdo::Lastmark lastmark_;
    std::vector<kdo::BookmarkChoice> choices_;
};

} /* namespace kdo */
#endif /* BOOKMARKSET_H_ */
