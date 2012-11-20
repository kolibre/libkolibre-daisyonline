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

#include "ServiceAnnouncements.h"

namespace kdo
{

ServiceAnnouncements::ServiceAnnouncements() :
        announcements_()
{
}

ServiceAnnouncements::~ServiceAnnouncements()
{
}

/**
 * @return Returns the service announcements vector.
 */
std::vector<kdo::Announcement> ServiceAnnouncements::getAnnouncements() const
{
    return announcements_;
}

void ServiceAnnouncements::setAnnouncements(std::vector<kdo::Announcement> announcements)
{
    announcements_ = announcements;
}

} /* namespace kdo */
