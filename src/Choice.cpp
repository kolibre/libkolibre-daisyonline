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

#include "Choice.h"

namespace kdo
{

Choice::Choice()
{
    label_ = kdo::Label();
    hasLabel_ = false;
    id_ = "";
    hasId_ = false;
}

Choice::Choice(kdo::Label label, std::string id)
{
    label_ = label;
    hasLabel_ = true;
    id_ = id;
    hasId_ = true;
}

Choice::~Choice()
{
}

bool Choice::hasLabel()
{
    return hasLabel_;
}

kdo::Label Choice::getLabel() const
{
    return label_;
}

void Choice::setLabel(kdo::Label label)
{
    label_ = label;
    hasLabel_ = true;
}

bool Choice::hasId()
{
    return hasId_;
}

std::string Choice::getId() const
{
    return id_;
}

void Choice::setId(std::string id)
{
    id_ = id;
    hasId_ = true;
}

bool Choice::isValid()
{
    if (not hasId_) return false;
    if (not hasLabel_ || not label_.isValid()) return false;
    return true;
}

} /* namespace kdo */
