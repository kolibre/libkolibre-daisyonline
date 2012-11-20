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

#include "ContentItem.h"

namespace kdo
{

ContentItem::ContentItem() :
        hasLastModifiedDate_(false), lastModifiedData_()

{
}

ContentItem::~ContentItem()
{
}

/**
 * @return Returns the Content Identifier of this Content item.
 */
std::string ContentItem::getId() const
{
    return id_;
}

void ContentItem::setId(std::string id)
{
    id_ = id;
}

/**
 * @return Return the Label of this content item.
 */
kdo::Label ContentItem::getLabel() const
{
    return Label_;
}

void ContentItem::setLabel(kdo::Label label)
{
    hasLastModifiedDate_ = true;
    Label_ = label;
}

/**
 * @return Returns the last modified time of the Content item.
 */
std::string ContentItem::getLastModifiedData() const
{
    return lastModifiedData_;
}

void ContentItem::setLastModifiedData(std::string lastModifiedData)
{
    lastModifiedData_ = lastModifiedData;
}

} /* namespace kdo */
