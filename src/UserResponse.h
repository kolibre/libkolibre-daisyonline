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

#ifndef USERRESPONSE_H_
#define USERRESPONSE_H_

#include <string>

namespace kdo
{

class UserResponse
{
public:
    UserResponse();
    UserResponse(std::string questionID);
    UserResponse(std::string questionID, std::string value);
    UserResponse(std::string questionID, const char *data, unsigned int size);
    virtual ~UserResponse();

    bool hasQuestionID();
    std::string getQuestionID() const;
    void setQuestionID(std::string questionID);
    bool hasValue();
    std::string getValue() const;
    void setValue(std::string value);
    bool hasData();
    std::string getData() const;
    void setData(std::string data);
    void setData(const char *data, unsigned int size);

    bool isValid();

private:
    bool hasQuestionID_;
    std::string questionID_;
    bool hasValue_;
    std::string value_;
    std::string data_;
    bool hasData_;
};

} /* namespace kdo */
#endif /* USERRESPONSE_H_ */
