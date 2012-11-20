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

#include "Resource.h"

namespace kdo
{

Resource::Resource() :
        hasLastModifiedDate_(false), lastModifiedDate_()
{
}

Resource::~Resource()
{
}

/**
 * @return Returns the last modified time of the resource.
 */
std::string Resource::getLastModifiedDate() const
{
    return lastModifiedDate_;
}

void Resource::setLastModifiedDate(std::string lastModifiedDate)
{
    hasLastModifiedDate_ = true;
    lastModifiedDate_ = lastModifiedDate;
}
/**
 * The value of this attribute is a URI relative to the Content item's root directory.
 *
 * @return Returns the local relative path of the resource.
 */
std::string Resource::getLocalUri() const
{
    return localURI_;
}

void Resource::setLocalUri(std::string localUri)
{
    localURI_ = localUri;
}

/**
 * @return Returns the [MIME] type of the resource.
 */
std::string Resource::getMimeType() const
{
    return mimeType_;
}

void Resource::setMimeType(std::string mimeType)
{
    mimeType_ = mimeType;
}

/**
 * @return Returns the size of the resource in bytes.
 */
int Resource::getSize() const
{
    return size_;
}

void Resource::setSize(int size)
{
    size_ = size;
}

/**
 * @return Returns the URI of the resource.
 */
std::string Resource::getUri() const
{
    return uri_;
}

void Resource::setUri(std::string uri)
{
    uri_ = uri;
}

/**
 *
 * Optional field was set
 *
 * @return Returns true if the optional field is set
 */
bool Resource::hasLastModifiedDate() const
{
    return hasLastModifiedDate_;
}

} /* namespace kdo */
