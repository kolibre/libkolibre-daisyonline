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

#include "ContentResources.h"

namespace kdo
{

ContentResources::ContentResources() :
        hasReturnBy_(false), returnBy_(), hasLastModifiedDate_(false), lastModifiedDate_()
{
}

ContentResources::~ContentResources()
{
}
/**
 * @return Returns the last modified time of the Content item.
 */
std::string ContentResources::getLastModifiedDate() const
{
    return lastModifiedDate_;
}

void ContentResources::setLastModifiedDate(std::string lastModifiedDate)
{
    hasLastModifiedDate_ = true;
    lastModifiedDate_ = lastModifiedDate;
}

/**
 * @return Returns the content resources vector.
 */
std::vector<kdo::Resource> ContentResources::getResouces() const
{
    return resouces_;
}

void ContentResources::setResouces(std::vector<kdo::Resource> resouces)
{
    resouces_ = resouces;
}
/**
 * Specifies the time when the Service Provider requires this Content item to be returned.
 *
 * This attribute may be present when the requiresReturn attribute of this Content item's contentMetadata is true, and must not be present when that attribute is false.
 *
 * This attribute may not change value while the Content item is issued.
 *
 * Unlike the requiresReturn attribute of contentMetadata, this attribute does not constitute a contract.
 *
 * @return Returns the time that this item has to be returned.
 */
std::string ContentResources::getReturnBy() const
{
    return returnBy_;
}

void ContentResources::setReturnBy(std::string returnBy)
{
    hasReturnBy_ = true;
    returnBy_ = returnBy;
}

/**
 * Optional field was set
 *
 * @return Returns true if the optional field is set
 */
bool ContentResources::hasLastModifiedDate() const
{
    return hasLastModifiedDate_;
}

/**
 * @return Returns true if the optional field is set
 */
bool ContentResources::hasReturnBy() const
{
    return hasReturnBy_;
}

} /* namespace kdo */
