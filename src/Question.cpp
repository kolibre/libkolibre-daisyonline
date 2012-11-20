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

#include "Question.h"

namespace kdo
{

Question::Question()
{
}

Question::Question(kdo::MultipleChoiceQuestion multipleChoiceQuestion)
{
    multipleChoiceQuestion_ = multipleChoiceQuestion;
    isMultipleChoiceQuestion_ = true;
    isInputQuestion_ = false;
}

Question::Question(kdo::InputQuestion inputQuestion)
{
    inputQuestion_ = inputQuestion;
    isInputQuestion_ = true;
    isMultipleChoiceQuestion_ = false;
}

Question::~Question()
{
}

bool Question::isMultipleChoiceQuestion()
{
    return isMultipleChoiceQuestion_;
}

kdo::MultipleChoiceQuestion Question::getMultipleChoiceQuestion() const
{
    return multipleChoiceQuestion_;
}

bool Question::isInputQuestion()
{
    return isInputQuestion_;
}

kdo::InputQuestion Question::getInputQuestion() const
{
    return inputQuestion_;
}

bool Question::isValid()
{
    if (not isMultipleChoiceQuestion_ && not isInputQuestion_) return false;
    if (isMultipleChoiceQuestion_) return multipleChoiceQuestion_.isValid();
    if (isInputQuestion_) return inputQuestion_.isValid();
    return false;
}

} /* namespace kdo */
