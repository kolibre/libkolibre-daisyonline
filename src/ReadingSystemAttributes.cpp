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

#include "ReadingSystemAttributes.h"

namespace kdo
{
ReadingSystemAttributes::ReadingSystemAttributes()
{
    manufacturer_ = "";
    hasManufacturer_ = false;
    model_ = "";
    hasModel_ = false;
    serialNumber_ = "";
    hasSerialNumber_ = false;
    version_ = "";
    hasVersion_ = true;
    supportsMultipleSelections_ = false;
    preferredUILanguage_ = "";
    hasPreferredUILanguage_ = false;
    bandwidth_ = -1;
    hasBandwidth_ = false;
    supportsContentProtectionFormat_ = false;
    supportedInputTypes_ = 0;
    requiresAudioLabels_ = false;
}

ReadingSystemAttributes::~ReadingSystemAttributes()
{
}

std::string ReadingSystemAttributes::getManufacturer() const
{
    return manufacturer_;
}

void ReadingSystemAttributes::setManufacturer(std::string manufacturer)
{
    manufacturer_ = manufacturer;
    hasManufacturer_ = true;
}

std::string ReadingSystemAttributes::getModel() const
{
    return model_;
}

void ReadingSystemAttributes::setModel(std::string model)
{
    model_ = model;
    hasModel_ = true;
}

std::string ReadingSystemAttributes::getSerialNumber() const
{
    return serialNumber_;
}

void ReadingSystemAttributes::setSerialNumber(std::string serialNumber)
{
    serialNumber_ = serialNumber;
    hasSerialNumber_ = true;
}

std::string ReadingSystemAttributes::getVersion() const
{
    return version_;
}

void ReadingSystemAttributes::setVersion(std::string version)
{
    version_ = version;
    hasVersion_ = true;
}

bool ReadingSystemAttributes::getSupportsMultipleSelections()
{
    return supportsMultipleSelections_;
}

void ReadingSystemAttributes::setSupportsMultipleSelections(bool value)
{
    supportsMultipleSelections_ = value;
}

std::string ReadingSystemAttributes::getPreferredUILanguage() const
{
    return preferredUILanguage_;
}

void ReadingSystemAttributes::setPreferredUILanguage(std::string lanuage)
{
    preferredUILanguage_ = lanuage;
    hasPreferredUILanguage_ = true;
}

int ReadingSystemAttributes::getBandwidth() const
{
    return bandwidth_;
}

void ReadingSystemAttributes::setBandwidth(int bandwitdh)
{
    bandwidth_ = bandwitdh;
    hasBandwidth_ = true;
}

std::vector<std::string> ReadingSystemAttributes::getSupportedContentFormats() const
{
    return supportedContentFormats_;
}

void ReadingSystemAttributes::clearSupportedContentFormats()
{
    supportedContentFormats_.clear();
}

void ReadingSystemAttributes::addContentFormat(std::string contentFormat)
{
    for (std::vector<std::string>::iterator it = supportedContentFormats_.begin(); it < supportedContentFormats_.end(); it++)
    {
        if (*it == contentFormat) return;
    }
    supportedContentFormats_.push_back(contentFormat);
}

void ReadingSystemAttributes::removeContentFormat(std::string contentFormat)
{
    for (std::vector<std::string>::iterator it = supportedContentFormats_.begin(); it < supportedContentFormats_.end(); it++)
    {
        if (*it == contentFormat) supportedContentFormats_.erase(it);
    }
}

bool ReadingSystemAttributes::getSupportsContentProtectionFormat()
{
    return supportsContentProtectionFormat_;
}

void ReadingSystemAttributes::setSupportsContentProtectionFormat(bool value)
{
    supportsContentProtectionFormat_ = value;
}

std::vector<std::string> ReadingSystemAttributes::getKeyRing() const
{
    return keyRing_;
}

void ReadingSystemAttributes::clearKeyRing()
{
    keyRing_.clear();
}

void ReadingSystemAttributes::addKey(std::string name)
{
    for (std::vector<std::string>::iterator it = keyRing_.begin(); it < keyRing_.end(); it++)
    {
        if (*it == name) return;
    }
    keyRing_.push_back(name);
}

void ReadingSystemAttributes::removeKey(std::string name)
{
    for (std::vector<std::string>::iterator it = keyRing_.begin(); it < keyRing_.end(); it++)
    {
        if (*it == name) keyRing_.erase(it);
    }
}

std::vector<std::string> ReadingSystemAttributes::getSupportedMimeTypes() const
{
    return supportedMimeTypes_;
}

void ReadingSystemAttributes::clearSupportedMimeTypes()
{
    supportedMimeTypes_.clear();
}

void ReadingSystemAttributes::addMimeType(std::string mimeType)
{
    for (std::vector<std::string>::iterator it = supportedMimeTypes_.begin(); it < supportedMimeTypes_.end(); it++)
    {
        if (*it == mimeType) return;
    }
    supportedMimeTypes_.push_back(mimeType);
}

void ReadingSystemAttributes::removeMimeType(std::string mimeType)
{
    for (std::vector<std::string>::iterator it = supportedMimeTypes_.begin(); it < supportedMimeTypes_.end(); it++)
    {
        if (*it == mimeType) supportedMimeTypes_.erase(it);
    }
}

bool ReadingSystemAttributes::isSupportedInputTypes(ReadingSystemAttributes::inputType inputType)
{
    return supportedInputTypes_ & inputType;
}

void ReadingSystemAttributes::clearSupportedInputTypes()
{
    supportedInputTypes_ = 0;
}

void ReadingSystemAttributes::addInputType(ReadingSystemAttributes::inputType inputType)
{
    supportedInputTypes_ |= inputType;
}

void ReadingSystemAttributes::removeInputType(ReadingSystemAttributes::inputType inputType)
{
    if (isSupportedInputTypes(inputType)) supportedInputTypes_ -= inputType;
}

bool ReadingSystemAttributes::getRequiresAudioLabels()
{
    return requiresAudioLabels_;
}

void ReadingSystemAttributes::setRequiresAudioLabels(bool value)
{
    requiresAudioLabels_ = value;
}

std::vector<std::string> ReadingSystemAttributes::getAdditionalTransferProtocols() const
{
    return additionalTransferProtocols_;
}

void ReadingSystemAttributes::clearAdditionalTransferProtocols()
{
    additionalTransferProtocols_.clear();
}

void ReadingSystemAttributes::addTransferProtocol(std::string protocol)
{
    for (std::vector<std::string>::iterator it = additionalTransferProtocols_.begin(); it < additionalTransferProtocols_.end(); it++)
    {
        if (*it == protocol) return;
    }
    additionalTransferProtocols_.push_back(protocol);
}

void ReadingSystemAttributes::removeTransferProtocol(std::string protocol)
{
    for (std::vector<std::string>::iterator it = additionalTransferProtocols_.begin(); it < additionalTransferProtocols_.end(); it++)
    {
        if (*it == protocol) additionalTransferProtocols_.erase(it);
    }
}

bool ReadingSystemAttributes::isValid()
{
    if (not hasManufacturer_) return false;
    if (not hasModel_) return false;
    if (not hasVersion_) return false;
    if (not hasPreferredUILanguage_) return false;
    return true;
}

}/* namespace kdo */
