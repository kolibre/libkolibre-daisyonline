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

#include "UserResponse.h"

namespace kdo
{

UserResponse::UserResponse()
{
    questionID_ = "";
    hasQuestionID_ = false;
    value_ = "";
    hasValue_ = false;
    data_ = "";
    hasData_ = false;
}

UserResponse::UserResponse(std::string questionID)
{
    questionID_ = questionID;
    hasQuestionID_ = true;
    value_ = "";
    hasValue_ = false;
    data_ = "";
    hasData_ = false;
}

UserResponse::UserResponse(std::string questionID, std::string value)
{
    questionID_ = questionID;
    hasQuestionID_ = true;
    value_ = value;
    hasValue_ = true;
    data_ = "";
    hasData_ = false;
}

UserResponse::UserResponse(std::string questionID, const char *data, unsigned int size)
{
    questionID_ = questionID;
    hasQuestionID_ = true;
    value_ = "";
    hasValue_ = false;
    data_ = std::string(data, size);
    hasData_ = true;
}

UserResponse::~UserResponse()
{
}

bool UserResponse::hasQuestionID()
{
    return hasQuestionID_;
}

std::string UserResponse::getQuestionID() const
{
    return questionID_;
}

void UserResponse::setQuestionID(std::string questionID)
{
    questionID_ = questionID;
    hasQuestionID_ = true;
}

bool UserResponse::hasValue()
{
    return hasValue_;
}

std::string UserResponse::getValue() const
{
    return value_;
}

void UserResponse::setValue(std::string value)
{
    value_ = value;
    hasValue_ = true;
    data_ = "";
    hasData_ = false;
}

bool UserResponse::hasData()
{
    return hasData_;
}

std::string UserResponse::getData() const
{
    return data_;
}

void UserResponse::setData(std::string data)
{
    data_ = data;
    hasData_ = true;
    value_ = "";
    hasValue_ = false;
}

void UserResponse::setData(const char *data, unsigned int size)
{
    data_ = std::string(data, size);
    hasData_ = true;
    value_ = "";
    hasValue_ = false;
}

bool UserResponse::isValid()
{
    if (not hasData_ && not hasValue_) return false;
    if (not hasQuestionID_) return false;
    return true;
}

} /* namespace kdo */
