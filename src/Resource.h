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

#ifndef RESOURCE_H_
#define RESOURCE_H_
#include <string>

namespace kdo
{

/**
 * \brief A resource that can be used during play back.
 */
class Resource
{
public:
    Resource();
    virtual ~Resource();
    std::string getLastModifiedDate() const;
    void setLastModifiedDate(std::string lastModifiedDate);
    std::string getLocalUri() const;
    void setLocalUri(std::string localUri);
    std::string getMimeType() const;
    void setMimeType(std::string mimeType);
    int getSize() const;
    void setSize(int size);
    std::string getUri() const;
    void setUri(std::string uri);
    bool hasLastModifiedDate() const;

private:
    std::string uri_;
    std::string mimeType_;
    int size_;
    std::string localURI_;
    bool hasLastModifiedDate_;
    std::string lastModifiedDate_;
};

} /* namespace kdo */
#endif /* RESOURCE_H_ */
