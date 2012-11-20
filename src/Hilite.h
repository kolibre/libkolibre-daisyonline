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

#ifndef HILITE_H_
#define HILITE_H_

#include "HiliteStart.h"
#include "HiliteEnd.h"
#include "BookmarkNote.h"

namespace kdo
{

class Hilite
{
public:
    Hilite();
    Hilite(kdo::HiliteStart hiliteStart, kdo::HiliteEnd hiliteEnd);
    Hilite(kdo::HiliteStart hiliteStart, kdo::HiliteEnd hiliteEnd, kdo::BookmarkNote note);
    virtual ~Hilite();

    bool hasHiliteStart();
    kdo::HiliteStart getHiliteStart() const;
    void setHiliteStart(kdo::HiliteStart hiliteStart);
    bool hasHiliteEnd();
    kdo::HiliteEnd getHiliteEnd() const;
    void setHiliteEnd(kdo::HiliteEnd hiliteEnd);
    bool hasNote();
    kdo::BookmarkNote getNote() const;
    void setNote(kdo::BookmarkNote note);
    void unsetNote();
    bool hasLabel();
    std::string getLabel() const;
    void setLabel(std::string label);
    void unsetLabel();

    bool isValid();

private:
    bool hasHiliteStart_;
    kdo::HiliteStart hiliteStart_;
    bool hasHiliteEnd_;
    kdo::HiliteEnd hiliteEnd_;
    bool hasNote_;
    kdo::BookmarkNote note_;
    bool hasLabel_;
    std::string label_;
};

} /* namespace kdo */
#endif /* HILITE_H_ */
