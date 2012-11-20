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

#ifndef CONTENTITEM_H_
#define CONTENTITEM_H_
#include <string>
#include "Label.h"

namespace kdo
{
/**
 * \brief A single Content item.
 */
class ContentItem
{
public:
    ContentItem();
    virtual ~ContentItem();
    std::string getId() const;
    void setId(std::string id);
    kdo::Label getLabel() const;
    void setLabel(kdo::Label label);
    std::string getLastModifiedData() const;
    void setLastModifiedData(std::string lastModifiedData);

private:
    //! A multi-purpose label, containing text and optionally audio.
    kdo::Label Label_;
    //! The Content Identifier of this Content item.
    std::string id_;
    //! The last modified time of the Content item.
    std::string lastModifiedData_;
    bool hasLastModifiedDate_;
};

} /* namespace kdo */
#endif /* CONTENTITEM_H_ */
