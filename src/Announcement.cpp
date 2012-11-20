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

#include "Announcement.h"

namespace kdo
{

Announcement::Announcement(std::string id) :
        id_(id), type_(INFORMATION), priority_(3), hasType_(false), hasPriority_()
{
}

Announcement::Announcement() :
        type_(INFORMATION), priority_(3)
{
}

Announcement::~Announcement()
{
}
/**
 *
 * @return Returns the identifier of this announcement. This identifier is only valid for the duration of a Session.
 */
std::string Announcement::getId() const
{
    return id_;
}

/**
 * @return Returns the message label of the announcement.
 */
kdo::Label Announcement::getMessage() const
{
    return message_;
}

void Announcement::setMessage(kdo::Label message)
{
    message_ = message;
}

/**
 * @return Returns the priority of this announcement. 1 is the highest priority and 3 is the lowest.
 */
int Announcement::getPriority() const
{
    return priority_;
}

void Announcement::setPriority(int priority)
{
    hasPriority_ = true;
    priority_ = priority;
}

/**
 * @return Returns the that indicates the nature of this announcement.
 */
Announcement::type Announcement::getType() const
{
    return type_;
}

/**
 * Optional field was set
 *
 * @return Returns true if the optional field is set
 */
bool Announcement::hasPriority() const
{
    return hasPriority_;
}

/**
 * Optional field was set
 *
 * @return Returns true if the optional field is set
 */
bool Announcement::hasType() const
{
    return hasType_;
}

void Announcement::setType(Announcement::type type)
{
    hasType_ = true;
    type_ = type;
}

void Announcement::setId(std::string id)
{
    this->id_ = id;
}

} /* namespace kdo */
