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

#include "ServiceAttributes.h"

namespace kdo
{

ServiceAttributes::ServiceAttributes() :
        hasService_(false), hasServiceProvider_(false), supportedAudioCodecs_(), serviceId_(), serviceProviderId_()
{
    supportedOperations_ = 0;
}

ServiceAttributes::~ServiceAttributes()
{
}

/**
 * If hasService is set then this method can be used to get the label
 *
 * @return Returns the label for this service
 */
kdo::Label ServiceAttributes::getService() const
{
    return service_;
}

void ServiceAttributes::setService(kdo::Label service)
{
    hasService_ = true;
    service_ = service;
}

/**
 * If hasServiceProvider is set then this method can be used to get the label
 *
 * @return Returns the label for this service provider
 */
kdo::Label ServiceAttributes::getServiceProvider() const
{
    return serviceProvider_;
}

/**
 * @return Returns the identity of the Service Provider.
 */
void ServiceAttributes::setServiceProvider(kdo::Label serviceProvider)
{
    hasServiceProvider_ = true;
    serviceProvider_ = serviceProvider;
}

/**
 * Specifies whether getQuestions with the reserved parameter back is supported by the Service.
 *
 * @return Returns the value set for this service.
 */
bool ServiceAttributes::isSupportsServerSideBack() const
{
    return supportsServerSideBack_;
}

void ServiceAttributes::setSupportsServerSideBack(bool supportsServerSideBack)
{
    supportsServerSideBack_ = supportsServerSideBack;
}

/**
 * The identifier of the Service.
 *
 * This specification does not require a specific scheme to be used for this identifier. The identifier should not change while the Service remains active, and it should be universally unique.
 *
 * A recommended expression form is a hyphen-separated string consisting of a country code from [ISO 3166], followed by an agency code unique within its country, followed by a Service code unique among the Services offered by the provider. For example, us-afb-onlineLibrary.
 *
 * @return Returns the identity of the service.
 */
std::string ServiceAttributes::getServiceId() const
{
    return serviceId_;
}

void ServiceAttributes::setServiceId(std::string serviceId)
{
    serviceId_ = serviceId;
}

/**
 * The identifier of the Service Provider.
 *
 * This specification does not require a specific scheme to be used for this identifier. The identifier should not change while the Service provider remains active, and it should be universally unique.
 *
 * A recommended expression form is a hyphen-separated string consisting of a country code from [ISO 3166], followed by an agency code unique within its country. For example, us-afb.
 *
 * @return Returns the identity of this service provider
 */
std::string ServiceAttributes::getServiceProviderId() const
{
    return serviceProviderId_;
}

void ServiceAttributes::setServiceProviderId(std::string serviceProviderId)
{
    serviceProviderId_ = serviceProviderId;
}

/**
 * Specifies whether this Service supports the inclusion of audio in labels.
 *
 * If the value of this element is true and the requiresAudioLabels element of readingSystemAttributes is true in the Reading System's most recent call to setReadingSystemAttributes, then the Service must include the audio element in each label it provides.
 *
 * @return Returns true if audio labels is supported by the service
 */
bool ServiceAttributes::isSupportsAudioLabels() const
{
    return supportsAudioLabels_;
}

void ServiceAttributes::setSupportsAudioLabels(bool supportsAudioLabels)
{
    supportsAudioLabels_ = supportsAudioLabels;
}

/**
 * Use this method to check whether a specific operation is supported
 *
 * @param operation The operation we wish to check
 * @return Returns true if the operation is supported.
 */
bool ServiceAttributes::isSupportedOperation(ServiceAttributes::operations operation)
{
    return supportedOperations_ & operation;
}

/**
 * Get the full map of supported operations.
 *
 * Use the method isSupportedOperation if you want to check if a specific operation is supported.
 *
 * @return Returns the options operations bitmap.
 */
int ServiceAttributes::getSupportedOperations() const
{
    return supportedOperations_;
}

void ServiceAttributes::setSupportedOperations(int supportedOperations)
{
    supportedOperations_ = supportedOperations;
}

/**
 * Empty the supported operations bitmap.
 */
void ServiceAttributes::clearSupportedOperations()
{
    supportedOperations_ = 0;
}

/**
 * A vector of the audio codecs (if any) supported in userResponses in addition to [RIFF WAVE].
 *
 * @return Returns the vector of supported audio codecs
 */
std::vector<std::string> ServiceAttributes::getSupportedAudioCodecs() const
{
    return supportedAudioCodecs_;
}

void ServiceAttributes::setSupportedAudioCodecs(std::vector<std::string> supportedAudioCodecs)
{
    supportedAudioCodecs_ = supportedAudioCodecs;
}

void ServiceAttributes::addSupportedAudioCodec(std::string supportedAudioCodec)
{
    supportedAudioCodecs_.push_back(supportedAudioCodec);
}

/**
 * Check whether a specific content selection method is supported
 *
 * @param method the method to check for
 * @return Returns true if the given method is supported
 */
bool ServiceAttributes::isSupportedContentSelectionMethod(ServiceAttributes::contentSelectionMethods method)
{
    return supportedContentSelectionMethods_ & method;
}

/**
 * @return Returns a list of Content Selection Methods supported by this Service. A Service must support at least one of the two methods.
 */
int ServiceAttributes::getSupportedContentSelectionMethods() const
{
    return supportedContentSelectionMethods_;
}

void ServiceAttributes::setSupportedContentSelectionMethods(int supportedMethods)
{
    supportedContentSelectionMethods_ = supportedMethods;
}

void ServiceAttributes::clearSupportedContentSelectionMethods()
{
    supportedContentSelectionMethods_ = 0;
}

void ServiceAttributes::setSupportsSearch(bool supportsSearch)
{
    supportsSearch_ = supportsSearch;
}

/**
 * Specifies whether getQuestions with the reserved parameter search is supported by the Service.
 *
 * @return Returns true if service supports search
 */
bool ServiceAttributes::isSupportsSearch() const
{
    return supportsSearch_;
}

/**
 * Optional field was set
 *
 * @return Returns true if the optional field is set
 */
bool ServiceAttributes::hasService() const
{
    return hasService_;
}

/**
 * Optional field was set
 *
 * @return Returns true if the optional field is set
 */
bool ServiceAttributes::hasServiceProvider() const
{
    return hasServiceProvider_;
}

} /* namespace kdo */
