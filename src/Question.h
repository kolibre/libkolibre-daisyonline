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

#ifndef QUESTION_H_
#define QUESTION_H_

#include "MultipleChoiceQuestion.h"
#include "InputQuestion.h"

namespace kdo
{

class Question
{
public:
    Question();
    Question(kdo::MultipleChoiceQuestion multipleChoiceQuestion);
    Question(kdo::InputQuestion inputQuestion);
    virtual ~Question();

    bool isMultipleChoiceQuestion();
    kdo::MultipleChoiceQuestion getMultipleChoiceQuestion() const;
    bool isInputQuestion();
    kdo::InputQuestion getInputQuestion() const;

    bool isValid();

private:
    bool isMultipleChoiceQuestion_;
    bool isInputQuestion_;
    kdo::MultipleChoiceQuestion multipleChoiceQuestion_;
    kdo::InputQuestion inputQuestion_;
};

} /* namespace kdo */
#endif /* QUESTION_H_ */
