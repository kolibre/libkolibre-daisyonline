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

#include "ContentList.h"

namespace kdo
{

ContentList::ContentList() :
        hasLastItem_(false), hasFirstItem_(false), hasLabel_(false), firstItem_(0), lastItem_(0), label_()
{
}

ContentList::~ContentList()
{
}

std::vector<kdo::ContentItem> ContentList::getContentItems() const
{
    return contentItems_;
}

void ContentList::setContentItems(std::vector<kdo::ContentItem> contentItems)
{
    contentItems_ = contentItems;
}
/**
 * The 0-based index of the first contentItem in this contentList within the whole list. This attribute must be provided if this is a partial list. If this attribute is present, the lastItem attribute must also be present.
 *
 * @return Returns the index of the first item.
 */
int ContentList::getFirstItem() const
{
    return firstItem_;
}

void ContentList::setFirstItem(int firstItem)
{
    hasFirstItem_ = true;
    firstItem_ = firstItem;
}

/**
 * The identifier may be one of the three reserved values, new, issued or expired, or may be an arbitrary value, typically exposed in a contentListRef at an end point in a dynamic menu operation sequence.
 *
 * Services should persist contentList identifiers for the duration of a Session. Services must not expose multiple contentLists with the same arbitrary identifier during the same session.
 *
 * @return Returns the identifier of the contentList.
 */
std::string ContentList::getId() const
{
    return id_;
}

void ContentList::setId(std::string id)
{
    id_ = id;
}
/**
 * @return Returns the label of the content list
 */
kdo::Label ContentList::getLabel() const
{
    return label_;
}

void ContentList::setLabel(kdo::Label label)
{
    hasLabel_ = true;
    label_ = label;
}
/**
 * The 0-based index of the last contentItem in this contentList within the whole list. This attribute must be provided if this is a partial list. If this attribute is present, the firstItem attribute must also be present.
 *
 * @return Returns the index of the last item.
 */
int ContentList::getLastItem() const
{
    return lastItem_;
}

void ContentList::setLastItem(int lastItem)
{
    hasLastItem_ = true;
    lastItem_ = lastItem;
}

/**
 * The total number of contentItems in the whole list. If this is just a part of the list, then totalItems will be greater than the number of contentItems returned; otherwise, they will be equal.
 *
 * @return Returns the value of total number of items.
 */
int ContentList::getTotalItems() const
{
    return totalItems_;
}

void ContentList::setTotalItems(int totalItems)
{
    totalItems_ = totalItems;
}

/**
 * Optional field was set
 *
 * @return Returns true if the optional field is set
 */
bool ContentList::hasFirstItem() const
{
    return hasFirstItem_;
}

/**
 * Optional field was set
 *
 * @return Returns true if the optional field is set
 */
bool ContentList::hasLabel() const
{
    return hasLabel_;
}

/**
 * Optional field was set
 *
 * @return Returns true if the optional field is set
 */
bool ContentList::hasLastItem() const
{
    return hasLastItem_;
}

} /* namespace kdo */
