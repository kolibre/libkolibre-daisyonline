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

#ifndef READINGSYSTEMATTRIBUTES_H_
#define READINGSYSTEMATTRIBUTES_H_

#include <string>
#include <vector>

namespace kdo
{
class ReadingSystemAttributes
{
public:
    ReadingSystemAttributes();
    ~ReadingSystemAttributes();

    typedef enum
    {
        TEXT_NUMERIC = 1,
        TEXT_ALPHANUMERIC = 2,
        AUDIO = 4,
    } inputType;

    std::string getManufacturer() const;
    void setManufacturer(std::string manufacturer);
    std::string getModel() const;
    void setModel(std::string model);
    std::string getSerialNumber() const;
    void setSerialNumber(std::string serialNumber);
    std::string getVersion() const;
    void setVersion(std::string version);
    bool getSupportsMultipleSelections();
    void setSupportsMultipleSelections(bool value);
    std::string getPreferredUILanguage() const;
    void setPreferredUILanguage(std::string lanuage);
    int getBandwidth() const;
    void setBandwidth(int bandwidth);
    std::vector<std::string> getSupportedContentFormats() const;
    void clearSupportedContentFormats();
    void addContentFormat(std::string contentFormat);
    void removeContentFormat(std::string contentFormat);
    bool getSupportsContentProtectionFormat();
    void setSupportsContentProtectionFormat(bool value);
    std::vector<std::string> getKeyRing() const;
    void clearKeyRing();
    void addKey(std::string name);
    void removeKey(std::string name);
    std::vector<std::string> getSupportedMimeTypes() const;
    void clearSupportedMimeTypes();
    void addMimeType(std::string mimeType);
    void removeMimeType(std::string mimeType);
    bool isSupportedInputTypes(ReadingSystemAttributes::inputType inputType);
    void clearSupportedInputTypes();
    void addInputType(ReadingSystemAttributes::inputType inputType);
    void removeInputType(ReadingSystemAttributes::inputType inputType);
    bool getRequiresAudioLabels();
    void setRequiresAudioLabels(bool value);
    std::vector<std::string> getAdditionalTransferProtocols() const;
    void clearAdditionalTransferProtocols();
    void addTransferProtocol(std::string protocol);
    void removeTransferProtocol(std::string protocol);

    bool isValid();

private:
    bool hasManufacturer_;
    std::string manufacturer_;
    bool hasModel_;
    std::string model_;
    bool hasSerialNumber_;
    std::string serialNumber_;
    bool hasVersion_;
    std::string version_;
    bool supportsMultipleSelections_;
    bool hasPreferredUILanguage_;
    std::string preferredUILanguage_;
    bool hasBandwidth_;
    int bandwidth_;
    std::vector<std::string> supportedContentFormats_;
    bool supportsContentProtectionFormat_;
    std::vector<std::string> keyRing_;
    std::vector<std::string> supportedMimeTypes_;
    int supportedInputTypes_;
    bool requiresAudioLabels_;
    std::vector<std::string> additionalTransferProtocols_;
};
} /* namespace kdo */
#endif /* READINGSYSTEMATTRIBUTES_H_ */
