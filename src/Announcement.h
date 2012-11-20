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

#ifndef ANNOUNCEMENT_H_
#define ANNOUNCEMENT_H_

#include <string>
#include "Label.h"

namespace kdo
{

/**
 * \brief A Service announcement.
 */
class Announcement
{
public:
    Announcement(std::string id);
    Announcement();
    typedef enum
    {
        WARNING,
        ERROR,
        INFORMATION,
        SYSTEM
    } type;
    virtual ~Announcement();
    std::string getId() const;
    void setId(std::string id);
    kdo::Label getMessage() const;
    void setMessage(kdo::Label message);
    int getPriority() const;
    void setPriority(int priority);
    Announcement::type getType() const;
    void setType(Announcement::type type);
    bool hasPriority() const;
    bool hasType() const;

private:
    //! The identifier of this announcement. This identifier is only valid for the duration of a Session
    std::string id_;
    bool hasType_;
    //! A value that indicates the nature of this announcement.
    type type_;
    bool hasPriority_;
    //! The priority of this announcement. 1 is the highest priority and 3 is the lowest.
    int priority_;
    //! A multi-purpose label, containing text and optionally audio.
    kdo::Label message_;
};

} /* namespace kdo */
#endif /* ANNOUNCEMENT_H_ */
