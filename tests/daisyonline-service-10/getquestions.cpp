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

#include "DaisyOnlineHandler.h"
#include "setup_logging.h"

#include <assert.h>
#include <iostream>
#include <cstdlib>
#include <vector>

int main(int argc, char **argv)
{
    if (argc < 4)
    {
        std::cout << "Usage: " << argv[0] << " <uri> <username> <password>" << std::endl;
        return -1;
    }

    if (getenv("AXIS2C_HOME"))
    {
        std::cout << "Setting AXIS2C_HOME forces logs to be written there, so don't!" << std::endl;
        return 1;
    }

    setup_logging();

    DaisyOnlineHandler DOHandler(std::string(argv[1]), "getquestions/1.2.3");

    if (!DOHandler.good())
    {
        assert(!"Failed to setup connection");
        return -1;
    }

    kdo::Questions *questions;
    std::vector<kdo::UserResponse> responses;
    kdo::UserResponse response;
    std::vector<kdo::Question> question;

    //00000000  4f 67 67 53 00 02 00 00  00 00 00 00 00 00 6d 34  |OggS..........m4|
    char data[16];
    data[0] = 0x4f;
    data[1] = 0x67;
    data[2] = 0x67;
    data[3] = 0x53;
    data[4] = 0x00;
    data[5] = 0x02;
    data[6] = 0x00;
    data[7] = 0x00;

    data[8] = 0x00;
    data[9] = 0x00;
    data[10] = 0x00;
    data[11] = 0x00;
    data[12] = 0x00;
    data[13] = 0x00;
    data[14] = 0x6d;
    data[15] = 0x34;

    // successful getQuestions request
    responses.clear();
    questions = DOHandler.getQuestions("default");
    assert(DOHandler.good());
    assert(questions->isQuestions());
    question = questions->getQuestions();
    assert(question.size() == 1);
    assert(question[0].isMultipleChoiceQuestion());
    assert(question[0].getMultipleChoiceQuestion().getId() == "q1");
    assert(question[0].getMultipleChoiceQuestion().allowMultipleSelections() == false);
    assert(question[0].getMultipleChoiceQuestion().getLabel().getText() == "What would you like to do?");
    assert(question[0].getMultipleChoiceQuestion().getLabel().getLang() == "en");
    assert(question[0].getMultipleChoiceQuestion().getChoices().size() == 2);
    assert(question[0].getMultipleChoiceQuestion().getChoices()[0].getId() == "c1");
    assert(question[0].getMultipleChoiceQuestion().getChoices()[0].getLabel().getText() == "Search");
    assert(question[0].getMultipleChoiceQuestion().getChoices()[0].getLabel().getLang() == "en");
    assert(question[0].getMultipleChoiceQuestion().getChoices()[1].getId() == "c2");
    assert(question[0].getMultipleChoiceQuestion().getChoices()[1].getLabel().getText() == "Go back");
    assert(question[0].getMultipleChoiceQuestion().getChoices()[1].getLabel().getLang() == "en");

    // successful getQuestions request
    responses.clear();
    response = kdo::UserResponse("q1", "c1");
    responses.push_back(response);
    questions = DOHandler.getQuestions(responses);
    assert(DOHandler.good());
    assert(questions->isQuestions());
    question = questions->getQuestions();
    assert(question.size() == 3);
    assert(question[0].isInputQuestion());
    assert(question[0].getInputQuestion().getId() == "q2-1");
    assert(question[0].getInputQuestion().getLabel().getText() == "Full text search");
    assert(question[0].getInputQuestion().getLabel().getLang() == "en");
    assert(question[0].getInputQuestion().isInputTypes(kdo::InputQuestion::TEXT_NUMERIC) == false);
    assert(question[0].getInputQuestion().isInputTypes(kdo::InputQuestion::TEXT_ALPHANUMERIC) == true);
    assert(question[0].getInputQuestion().isInputTypes(kdo::InputQuestion::AUDIO) == false);
    assert(question[1].isInputQuestion());
    assert(question[1].getInputQuestion().getId() == "q2-2");
    assert(question[1].getInputQuestion().getLabel().getText() == "Full audio search");
    assert(question[1].getInputQuestion().getLabel().getLang() == "en");
    assert(question[1].getInputQuestion().isInputTypes(kdo::InputQuestion::TEXT_NUMERIC) == false);
    assert(question[1].getInputQuestion().isInputTypes(kdo::InputQuestion::TEXT_ALPHANUMERIC) == false);
    assert(question[1].getInputQuestion().isInputTypes(kdo::InputQuestion::AUDIO) == true);
    assert(question[2].isMultipleChoiceQuestion());
    assert(question[2].getMultipleChoiceQuestion().getId() == "q2-3");
    assert(question[2].getMultipleChoiceQuestion().allowMultipleSelections() == true);
    assert(question[2].getMultipleChoiceQuestion().getLabel().getText() == "Categories");
    assert(question[2].getMultipleChoiceQuestion().getLabel().getLang() == "en");
    assert(question[2].getMultipleChoiceQuestion().getChoices().size() == 2);
    assert(question[2].getMultipleChoiceQuestion().getChoices()[0].getId() == "c1");
    assert(question[2].getMultipleChoiceQuestion().getChoices()[0].getLabel().getText() == "Daisy 2.02");
    assert(question[2].getMultipleChoiceQuestion().getChoices()[0].getLabel().getLang() == "en");
    assert(question[2].getMultipleChoiceQuestion().getChoices()[1].getId() == "c2");
    assert(question[2].getMultipleChoiceQuestion().getChoices()[1].getLabel().getText() == "ANSI/NISO Z39.86-2005");
    assert(question[2].getMultipleChoiceQuestion().getChoices()[1].getLabel().getLang() == "en");

    // successful getQuestions request
    responses.clear();
    questions = DOHandler.getQuestions("search");
    assert(DOHandler.good());
    assert(questions->isQuestions());
    question = questions->getQuestions();
    assert(question.size() == 3);
    assert(question[0].isInputQuestion());
    assert(question[0].getInputQuestion().getId() == "q2-1");
    assert(question[0].getInputQuestion().getLabel().getText() == "Full text search");
    assert(question[0].getInputQuestion().getLabel().getLang() == "en");
    assert(question[0].getInputQuestion().isInputTypes(kdo::InputQuestion::TEXT_NUMERIC) == false);
    assert(question[0].getInputQuestion().isInputTypes(kdo::InputQuestion::TEXT_ALPHANUMERIC) == true);
    assert(question[0].getInputQuestion().isInputTypes(kdo::InputQuestion::AUDIO) == false);
    assert(question[1].isInputQuestion());
    assert(question[1].getInputQuestion().getId() == "q2-2");
    assert(question[1].getInputQuestion().getLabel().getText() == "Full audio search");
    assert(question[1].getInputQuestion().getLabel().getLang() == "en");
    assert(question[1].getInputQuestion().isInputTypes(kdo::InputQuestion::TEXT_NUMERIC) == false);
    assert(question[1].getInputQuestion().isInputTypes(kdo::InputQuestion::TEXT_ALPHANUMERIC) == false);
    assert(question[1].getInputQuestion().isInputTypes(kdo::InputQuestion::AUDIO) == true);
    assert(question[2].isMultipleChoiceQuestion());
    assert(question[2].getMultipleChoiceQuestion().getId() == "q2-3");
    assert(question[2].getMultipleChoiceQuestion().allowMultipleSelections() == true);
    assert(question[2].getMultipleChoiceQuestion().getLabel().getText() == "Categories");
    assert(question[2].getMultipleChoiceQuestion().getLabel().getLang() == "en");
    assert(question[2].getMultipleChoiceQuestion().getChoices().size() == 2);
    assert(question[2].getMultipleChoiceQuestion().getChoices()[0].getId() == "c1");
    assert(question[2].getMultipleChoiceQuestion().getChoices()[0].getLabel().getText() == "Daisy 2.02");
    assert(question[2].getMultipleChoiceQuestion().getChoices()[0].getLabel().getLang() == "en");
    assert(question[2].getMultipleChoiceQuestion().getChoices()[1].getId() == "c2");
    assert(question[2].getMultipleChoiceQuestion().getChoices()[1].getLabel().getText() == "ANSI/NISO Z39.86-2005");
    assert(question[2].getMultipleChoiceQuestion().getChoices()[1].getLabel().getLang() == "en");

    // successful getQuestions request
    responses.clear();
    response = kdo::UserResponse("q2-1", "Full text search query");
    responses.push_back(response);
    response = kdo::UserResponse("q2-2", data, 16);
    responses.push_back(response);
    response = kdo::UserResponse("q2-3", "c1");
    responses.push_back(response);
    response = kdo::UserResponse("q2-3", "c2");
    responses.push_back(response);
    questions = DOHandler.getQuestions(responses);
    assert(DOHandler.good());
    assert(questions->isContentListRef());
    assert(questions->getContentListRef() == "contentListRef");

    // successful getQuestions request
    responses.clear();
    questions = DOHandler.getQuestions("back");
    assert(DOHandler.good());
    assert(questions->isLabel());
    assert(questions->getLabel().getText() == "You have reached the end");
    assert(questions->getLabel().getLang() == "en");

    // unsuccessful getQuestions request
    responses.clear();
    questions = DOHandler.getQuestions("foo");
    assert(DOHandler.getStatus() == DaisyOnlineHandler::ERROR_INVALID_REQUEST_DATA);

    return 0;
}
