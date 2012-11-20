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

#include "Hilite.h"

namespace kdo
{

Hilite::Hilite()
{
    hiliteStart_ = kdo::HiliteStart();
    hasHiliteStart_ = false;
    hiliteEnd_ = kdo::HiliteEnd();
    hasHiliteEnd_ = false;
    note_ = kdo::BookmarkNote();
    hasNote_ = false;
    label_ = "";
    hasLabel_ = false;
}

Hilite::Hilite(kdo::HiliteStart hiliteStart, kdo::HiliteEnd hiliteEnd)
{
    hiliteStart_ = hiliteStart;
    hasHiliteStart_ = true;
    hiliteEnd_ = hiliteEnd;
    hasHiliteEnd_ = true;
    note_ = kdo::BookmarkNote();
    hasNote_ = false;
    label_ = "";
    hasLabel_ = false;
}

Hilite::Hilite(kdo::HiliteStart hiliteStart, kdo::HiliteEnd hiliteEnd, kdo::BookmarkNote note)
{
    hiliteStart_ = hiliteStart;
    hasHiliteStart_ = true;
    hiliteEnd_ = hiliteEnd;
    hasHiliteEnd_ = true;
    note_ = note;
    hasNote_ = true;
    label_ = "";
    hasLabel_ = false;
}

Hilite::~Hilite()
{
}

bool Hilite::hasHiliteStart()
{
    return hasHiliteStart_;
}

kdo::HiliteStart Hilite::getHiliteStart() const
{
    return hiliteStart_;
}

void Hilite::setHiliteStart(kdo::HiliteStart hiliteStart)
{
    hiliteStart_ = hiliteStart;
    hasHiliteStart_ = true;
}

bool Hilite::hasHiliteEnd()
{
    return hasHiliteEnd_;
}

kdo::HiliteEnd Hilite::getHiliteEnd() const
{
    return hiliteEnd_;
}

void Hilite::setHiliteEnd(kdo::HiliteEnd hiliteEnd)
{
    hiliteEnd_ = hiliteEnd;
    hasHiliteEnd_ = true;
}

bool Hilite::hasNote()
{
    return hasNote_;
}

kdo::BookmarkNote Hilite::getNote() const
{
    return note_;
}

void Hilite::setNote(kdo::BookmarkNote note)
{
    note_ = note;
    hasNote_ = true;
}

void Hilite::unsetNote()
{
    note_ = kdo::BookmarkNote();
    hasNote_ = false;
}

bool Hilite::hasLabel()
{
    return hasLabel_;
}

std::string Hilite::getLabel() const
{
    return label_;
}

void Hilite::setLabel(std::string label)
{
    label_ = label;
    hasLabel_ = true;
}

void Hilite::unsetLabel()
{
    label_ = "";
    hasLabel_ = false;
}

bool Hilite::isValid()
{
    if (not hasHiliteStart_ || not hiliteStart_.isValid()) return false;
    if (not hasHiliteEnd_ || not hiliteEnd_.isValid()) return false;
    if (hasNote_ && not note_.isValid()) return false;
    return true;
}

} /* namespace kdo */
