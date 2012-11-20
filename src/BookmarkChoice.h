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

#ifndef BOOKMARKCHOICE_H_
#define BOOKMARKCHOICE_H_

#include "Bookmark.h"
#include "Hilite.h"

namespace kdo
{

class BookmarkChoice
{
public:
    BookmarkChoice();
    BookmarkChoice(kdo::Bookmark bookmark);
    BookmarkChoice(kdo::Hilite hilite);
    virtual ~BookmarkChoice();

    bool isBookmark();
    kdo::Bookmark getBookmark() const;
    void setBookmark(kdo::Bookmark bookmark);
    bool isHilite();
    kdo::Hilite getHilite() const;
    void setHilite(kdo::Hilite hilite);

    bool isValid();

private:
    bool isBookmark_;
    bool isHilite_;
    kdo::Bookmark bookmark_;
    kdo::Hilite hilite_;
};

} /* namespace kdo */
#endif /* BOOKMARKCHOICE_H_ */
