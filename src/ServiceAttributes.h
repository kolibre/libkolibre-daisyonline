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
 * Properties of the Service.
 *
 * @details The properties specified must be constant for the duration of the Session.
 */

#ifndef SERVICEATTRIBUTES_H_
#define SERVICEATTRIBUTES_H_
#include <string>
#include "Label.h"
#include <vector>
#include "ServiceAttributes.h"

namespace kdo
{
/**
 * \brief Properties of the Service.
 *
 * The properties specified must be constant for the duration of the Session.
 */
class ServiceAttributes
{
public:
    ServiceAttributes();
    virtual ~ServiceAttributes();
    typedef enum
    {
        SET_BOOKMARKS = 1,          //!This Service supports the setBookmarks operation.
        GET_BOOKMARKS = 2,          //!This Service supports the getBookmarks operation.
        DYNAMIC_MENUS = 4,          //!This Service supports the getQuestions operation.
        SERVICE_ANNOUNCEMENTS = 8,  //!This Service supports the getServiceAnnouncements and markAnnouncementsAsRead operations.
        PDTB2_KEY_PROVISION = 16,   //!This Service supports the getKeyExchangeObject operation.
        END = 32                    //!Max value
    } operations;
    typedef enum
    {
        OUT_OF_BAND = 1,            //!This Service supports the Out-of-band Content Selection Method.
        BROWSE = 2,                 //!This Service supports the Browse Content Selection Method.
        end = 4                     //!Max value
    } contentSelectionMethods;
    kdo::Label getService() const;
    void setService(kdo::Label service);
    kdo::Label getServiceProvider() const;
    void setServiceProvider(kdo::Label serviceProvider);
    bool isSupportsServerSideBack() const;
    void setSupportsServerSideBack(bool supportsServerSideBack);
    std::string getServiceId() const;
    void setServiceId(std::string serviceId);
    std::string getServiceProviderId() const;
    void setServiceProviderId(std::string serviceProviderId);
    bool isSupportsAudioLabels() const;
    void setSupportsAudioLabels(bool supportsAudioLabels);
    bool isSupportsSearch() const;
    void setSupportsSearch(bool supportsSearch);
    bool isSupportedOperation(ServiceAttributes::operations operation);
    int getSupportedOperations() const;
    void setSupportedOperations(int supportedOperations);
    void clearSupportedOperations();
    bool isSupportedContentSelectionMethod(ServiceAttributes::contentSelectionMethods operation);
    int getSupportedContentSelectionMethods() const;
    void setSupportedContentSelectionMethods(int supportedOperations);
    void clearSupportedContentSelectionMethods();
    std::vector<std::string> getSupportedAudioCodecs() const;
    void setSupportedAudioCodecs(std::vector<std::string> supportedAudioCodecs);
    void addSupportedAudioCodec(std::string supportedAudioCodec);
    bool hasService() const;
    bool hasServiceProvider() const;

private:
    //!Specifies whether getQuestions with the reserved parameter back is supported by the Service.
    bool supportsServerSideBack_;
    /**
     * Specifies whether this Service supports the inclusion of audio in labels.
     *
     * @details If the value of this element is true and the requiresAudioLabels element of readingSystemAttributes
     * is true in the Reading System's most recent call to setReadingSystemAttributes, then the Service must
     * include the audio element in each label it provides.
     */
    bool supportsAudioLabels_;
    //!Specifies whether getQuestions with the reserved parameter search is supported by the Service.
    bool supportsSearch_;
    //!A list of the audio codecs (if any) supported in userResponses in addition to [RIFF WAVE].
    std::vector<std::string> supportedAudioCodecs_;
    /**
     * The identifier of the Service.
     *
     * @details This specification does not require a specific scheme to be used for this identifier. The identifier should not change while the Service remains active, and it should be universally unique.
     *
     * A recommended expression form is a hyphen-separated string consisting of a country code from [ISO 3166], followed by an agency code unique within its country, followed by a Service code unique among the
     */
    std::string serviceId_;
    //!The label of the Service.
    bool hasService_;
    kdo::Label service_;
    /**
     * The identifier of the Service Provider.
     *
     * @details This specification does not require a specific scheme to be used for this identifier. The identifier should not change while the Service provider remains active, and it should be universally un
     * A recommended expression form is a hyphen-separated string consisting of a country code from [ISO 3166], followed by an agency code unique within its country. For example, us-afb.
     */
    std::string serviceProviderId_;
    //!The label of the Service Provider.
    bool hasServiceProvider_;
    kdo::Label serviceProvider_;
    //!Specifies which (if any) of the optional operations are supported by the Service.
    int supportedOperations_;
    //!A list of Content Selection Methods supported by this Service. A Service must support at least one of the two methods.
    int supportedContentSelectionMethods_;
    std::string serviceProviderMetadata_;
};

} /* namespace kdo */
#endif /* SERVICEATTRIBUTES_H_ */
