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

#ifndef BOOKMARKNOTE_H_
#define BOOKMARKNOTE_H_

#include "BookmarkAudio.h"
#include <string>

namespace kdo
{

class BookmarkNote
{
public:
    BookmarkNote();
    BookmarkNote(std::string text);
    BookmarkNote(kdo::BookmarkAudio audio);
    BookmarkNote(std::string text, kdo::BookmarkAudio audio);
    virtual ~BookmarkNote();

    bool hasText();
    std::string getText() const;
    void setText(std::string text);
    void unsetText();
    bool hasAudio();
    kdo::BookmarkAudio getAudio() const;
    void setAudio(kdo::BookmarkAudio audio);
    void unsetAudio();

    bool isValid();

private:
    bool hasText_;
    std::string text_;
    bool hasAudio_;
    kdo::BookmarkAudio audio_;
};

} /* namespace kdo */
#endif /* BOOKMARKNOTE_H_ */
