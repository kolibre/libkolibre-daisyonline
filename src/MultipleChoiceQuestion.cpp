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

#include "MultipleChoiceQuestion.h"

namespace kdo
{

MultipleChoiceQuestion::MultipleChoiceQuestion()
{
    label_ = kdo::Label();
    hasLabel_ = false;
    id_ = "";
    hasId_ = false;
    allowMultipleSelections_ = false;
}

MultipleChoiceQuestion::MultipleChoiceQuestion(kdo::Label label, std::string id)
{
    label_ = label;
    hasLabel_ = true;
    id_ = id;
    hasId_ = true;
    allowMultipleSelections_ = false;
}

MultipleChoiceQuestion::MultipleChoiceQuestion(kdo::Label label, std::string id, std::vector<kdo::Choice> choices, bool allowMultipleSelections)
{
    label_ = label;
    hasLabel_ = true;
    id_ = id;
    hasId_ = true;
    choices_ = choices;
    allowMultipleSelections_ = allowMultipleSelections;
}

MultipleChoiceQuestion::~MultipleChoiceQuestion()
{
}

bool MultipleChoiceQuestion::hasLabel()
{
    return hasLabel_;
}

kdo::Label MultipleChoiceQuestion::getLabel() const
{
    return label_;
}

void MultipleChoiceQuestion::setLabel(kdo::Label label)
{
    label_ = label;
    hasLabel_ = true;
}

bool MultipleChoiceQuestion::hasChoices()
{
    return choices_.size() > 0 ? true : false;
}

std::vector<kdo::Choice> MultipleChoiceQuestion::getChoices() const
{
    return choices_;
}

void MultipleChoiceQuestion::addChoice(kdo::Choice choice)
{
    choices_.push_back(choice);
}

std::string MultipleChoiceQuestion::getId() const
{
    return id_;
}

void MultipleChoiceQuestion::setId(std::string id)
{
    id_ = id;
    hasId_ = true;
}

bool MultipleChoiceQuestion::allowMultipleSelections()
{
    return allowMultipleSelections_;
}

void MultipleChoiceQuestion::setAllowMultipleSelections(bool value)
{
    allowMultipleSelections_ = value;
}

bool MultipleChoiceQuestion::isValid()
{
    if (not hasId_) return false;
    if (not hasLabel_ || not label_.isValid()) return false;
    if (choices_.size() > 0)
    {
        for (std::vector<kdo::Choice>::iterator it = choices_.begin(); it < choices_.end(); it++)
        {
            if (not it->isValid()) return false;
        }
        return true;
    }
    return false;
}

} /* namespace kdo */
