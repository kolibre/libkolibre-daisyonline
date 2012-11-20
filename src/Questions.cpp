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

#include "Questions.h"

namespace kdo
{

Questions::Questions()
{
    label_ = kdo::Label();
    isLabel_ = false;
    contentListRef_ = "";
    isContentListRef_ = false;
}

Questions::Questions(kdo::Label label)
{
    label_ = label;
    isLabel_ = true;
    contentListRef_ = "";
    isContentListRef_ = false;
}

Questions::Questions(std::string contentListRef)
{
    contentListRef_ = contentListRef;
    isContentListRef_ = true;
    label_ = kdo::Label();
    isLabel_ = false;
}

Questions::Questions(std::vector<kdo::Question> questions)
{
    questions_ = questions;
    label_ = kdo::Label();
    isLabel_ = false;
    contentListRef_ = "";
    isContentListRef_ = false;
}

Questions::~Questions()
{
}

bool Questions::isLabel()
{
    return isLabel_;
}

kdo::Label Questions::getLabel() const
{
    return label_;
}

bool Questions::isContentListRef()
{
    return isContentListRef_;
}

std::string Questions::getContentListRef() const
{
    return contentListRef_;
}

bool Questions::isQuestions()
{
    return questions_.size() > 0 ? true : false;
}

std::vector<kdo::Question> Questions::getQuestions() const
{
    return questions_;
}

void Questions::addQuestion(kdo::Question question)
{
    questions_.push_back(question);
}

bool Questions::isValid()
{
    if (not isContentListRef_ && not isLabel_ && not isQuestions()) return false;
    if (isContentListRef_) return true;
    if (isLabel_) return label_.isValid();
    if (questions_.size() > 0)
    {
        for (std::vector<kdo::Question>::iterator it = questions_.begin(); it < questions_.end(); it++)
        {
            if (not it->isValid()) return false;
        }
        return true;
    }
    return false;
}

} /* namespace kdo */
