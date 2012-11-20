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

#ifndef QUESTIONS_H_
#define QUESTIONS_H_

#include "Label.h"
#include "Question.h"
#include <string>
#include <vector>

namespace kdo
{

class Questions
{
public:
    Questions();
    Questions(kdo::Label label);
    Questions(std::string contentListRef);
    Questions(std::vector<kdo::Question> questions);
    virtual ~Questions();

    bool isLabel();
    kdo::Label getLabel() const;
    bool isContentListRef();
    std::string getContentListRef() const;
    bool isQuestions();
    std::vector<kdo::Question> getQuestions() const;
    void addQuestion(kdo::Question question);

    bool isValid();

private:
    bool isLabel_;
    kdo::Label label_;
    bool isContentListRef_;
    std::string contentListRef_;
    std::vector<kdo::Question> questions_;
};

} /* namespace kdo */
#endif /* QUESTIONS_H_ */
