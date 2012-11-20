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

#include "InputQuestion.h"

namespace kdo
{

InputQuestion::InputQuestion()
{
    label_ = kdo::Label();
    hasLabel_ = false;
    id_ = "";
    hasId_ = false;
    inputTypes_ = 0;
}

InputQuestion::InputQuestion(kdo::Label label, std::string id)
{
    label_ = label;
    hasLabel_ = true;
    id_ = id;
    hasId_ = true;
    inputTypes_ = 0;
}

InputQuestion::~InputQuestion()
{
}

bool InputQuestion::isInputTypes(InputQuestion::inputType inputType)
{
    return inputTypes_ & inputType;
}

void InputQuestion::addInputType(InputQuestion::inputType inputType)
{
    inputTypes_ |= inputType;
}

bool InputQuestion::hasLabel()
{
    return hasLabel_;
}

kdo::Label InputQuestion::getLabel() const
{
    return label_;
}

void InputQuestion::setLabel(kdo::Label label)
{
    label_ = label;
    hasLabel_ = true;
}

bool InputQuestion::hasId()
{
    return hasId_;
}

std::string InputQuestion::getId() const
{
    return id_;
}

void InputQuestion::setId(std::string id)
{
    id_ = id;
    hasId_ = true;
}

bool InputQuestion::isValid()
{
    if (not hasId_) return false;
    if (not hasLabel_ || not label_.isValid()) return false;
    if (not inputTypes_ > 0) return false;
    return true;
}

} /* namespace kdo */
