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

/**
 * A multi-purpose label, containing text and optionally audio.
 *
 * @details To achieve maximum interoperability, Services should support the provision of audio labels, as Reading Systems may require them in order to render Service messages to the user.
 */

#ifndef LABEL_H_
#define LABEL_H_

#include "Audio.h"

namespace kdo
{
/**
 * \brief A multi-purpose label, containing text and optionally audio.
 *
 * To achieve maximum interoperability, Services should support the provision of audio labels, as Reading Systems may require them in order to render Service messages to the user.
 */
class Label
{
public:
    Label();
    virtual ~Label();
    typedef enum
    {
        ltr,    //!Left-to-right.
        rtl     //!Right-to-left.
    } textDirection;
    kdo::Audio getAudio() const;
    void setAudio(kdo::Audio audio);
    textDirection getDirection() const;
    void setDirection(textDirection direction);
    std::string getLang() const;
    void setLang(std::string lang);
    std::string getText() const;
    void setText(std::string text);
    bool hasText();
    bool hasAudio();
    bool hasLang();
    bool hasDirection();

    bool isValid();

private:
    //!The language of the label.
    std::string lang_;
    bool hasLang_;
    //!The label text
    std::string text_;
    bool hasText_;
    //!The direction of the text
    textDirection direction_;
    bool hasDirection_;
    //!Optional audio file
    kdo::Audio audio_;
    bool hasAudio_;

};

} /* namespace kdo */
#endif /* LABEL_H_ */
