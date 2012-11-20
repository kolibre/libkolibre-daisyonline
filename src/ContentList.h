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

#ifndef CONTENTLIST_H_
#define CONTENTLIST_H_

#include "ContentItem.h"
#include "Label.h"
#include <vector>
#include <string>

namespace kdo
{

/**
 * \brief A full or partial list of Content items.
 */

class ContentList
{
public:
    ContentList();
    virtual ~ContentList();
    std::vector<kdo::ContentItem> getContentItems() const;
    void setContentItems(std::vector<kdo::ContentItem> contentItems);
    int getFirstItem() const;
    void setFirstItem(int firstItem);
    std::string getId() const;
    void setId(std::string id);
    kdo::Label getLabel() const;
    void setLabel(kdo::Label label);
    int getLastItem() const;
    void setLastItem(int lastItem);
    int getTotalItems() const;
    void setTotalItems(int totalItems);
    bool hasFirstItem() const;
    bool hasLabel() const;
    bool hasLastItem() const;
private:
    std::string id_;
    int totalItems_;
    bool hasFirstItem_;
    int firstItem_;
    bool hasLastItem_;
    int lastItem_;
    bool hasLabel_;
    kdo::Label label_;
    std::vector<kdo::ContentItem> contentItems_;
};

} /* namespace kdo */
#endif /* CONTENTLIST_H_ */
