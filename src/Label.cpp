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

#include "Label.h"

namespace kdo
{

Label::Label()
{
    text_ = "";
    hasText_ = false;
    audio_ = kdo::Audio();
    hasAudio_ = false;
    lang_ = "";
    hasLang_ = false;
    direction_ = kdo::Label::ltr;
    hasDirection_ = false;
}

Label::~Label()
{
}
/**
 * Get the audio for this label.
 *
 * @return Returns the audio.
 */
kdo::Audio Label::getAudio() const
{
    return audio_;
}

void Label::setAudio(kdo::Audio audio)
{
    hasAudio_ = true;
    audio_ = audio;
}

/**
 * @return Returns The direction of the text.
 */
Label::textDirection Label::getDirection() const
{
    return direction_;
}

void Label::setDirection(Label::textDirection direction)
{
    hasDirection_ = true;
    direction_ = direction;
}

/**
 * @return Returns the language of the label.
 */
std::string Label::getLang() const
{
    return lang_;
}

void Label::setLang(std::string lang)
{
    hasLang_ = true;
    lang_ = lang;
}

std::string Label::getText() const
{
    return text_;
}

/**
 * Label has text
 *
 * @return Returns true if label contains text.
 */
bool Label::hasText()
{
    return hasText_;
}

/**
 * Label has audio
 *
 * @return Returns true if label contains audio.
 */
bool Label::hasAudio()
{
    return hasAudio_;
}

/**
 * Label has xml:lang
 *
 * @return Returns true if label contains xml:lang.
 */
bool Label::hasLang()
{
    return hasLang_;
}

/**
 * Label has direction
 *
 * @return Returns true if label contains a text direction.
 */
bool Label::hasDirection()
{
    return hasDirection_;
}

void Label::setText(std::string text)
{
    hasText_ = true;
    text_ = text;
}

bool Label::isValid()
{
    if (not hasLang_) return false;
    if (not hasText_) return false;
    if (hasAudio_ && not audio_.isValid()) return false;
    return true;
}

} /* namespace kdo */
