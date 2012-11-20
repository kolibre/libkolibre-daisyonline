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

#ifndef CONTENTRESOURCES_H_
#define CONTENTRESOURCES_H_

#include "Resource.h"
#include <vector>
#include <string>

namespace kdo
{

/**
 * \brief A list of all the resources that constitute the Content item.
 */
class ContentResources
{
public:
    ContentResources();
    virtual ~ContentResources();
    std::string getLastModifiedDate() const;
    void setLastModifiedDate(std::string lastModifiedDate);
    std::vector<kdo::Resource> getResouces() const;
    void setResouces(std::vector<kdo::Resource> resouces);
    std::string getReturnBy() const;
    void setReturnBy(std::string returnBy);
    bool hasLastModifiedDate() const;
    bool hasReturnBy() const;

private:
    bool hasReturnBy_;
    std::string returnBy_;
    bool hasLastModifiedDate_;
    std::string lastModifiedDate_;
    std::vector<kdo::Resource> resouces_;
};

} /* namespace kdo */
#endif /* CONTENTRESOURCES_H_ */
