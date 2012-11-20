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

#ifndef INPUTQUESTION_H_
#define INPUTQUESTION_H_

#include "Label.h"
#include <string>

namespace kdo
{

class InputQuestion
{
public:
    InputQuestion();
    InputQuestion(kdo::Label label, std::string id);
    virtual ~InputQuestion();

    typedef enum
    {
        TEXT_NUMERIC = 1,
        TEXT_ALPHANUMERIC = 2,
        AUDIO = 4
    } inputType;

    bool isInputTypes(InputQuestion::inputType inputType);
    void addInputType(InputQuestion::inputType inputType);
    bool hasLabel();
    kdo::Label getLabel() const;
    void setLabel(kdo::Label label);
    bool hasId();
    std::string getId() const;
    void setId(std::string id);

    bool isValid();

private:
    int inputTypes_;
    bool hasLabel_;
    kdo::Label label_;
    bool hasId_;
    std::string id_;
};

} /* namespace kdo */
#endif /* INPUTQUESTION_H_ */
