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

#include "ContentMetadata.h"

namespace kdo
{

ContentMetadata::ContentMetadata() :
        hasSample_(false), hasCategory_(false), hasSource_(false), hasDate_(false), hasPublisher_(false), sample_(), category_(), source_(), date_(), publisher_(), types_(), rights_(), relations_(), subjects_(), description_(), creator_(), coverage_(), contributor_(), narrator_(), languages_()
{
}

ContentMetadata::~ContentMetadata()
{
}

/**
 * The publication category of the Content item.
 *
 * Reading Systems may use the value provided here to categorize or sort Content items.
 *
 * Any value is allowed. The values BOOK, MAGAZINE, NEWSPAPER and OTHER are recommended for those Content items which match one of these terms.
 *
 * @return Returns the category for this publication.
 */
std::string ContentMetadata::getCategory() const
{
    return category_;
}

void ContentMetadata::setCategory(std::string category)
{
    hasCategory_ = true;
    category_ = category;
}

/**
 * An entity responsible for making contributions to the resource.
 *
 * Examples of a Contributor include a person, an organization, or a service. Typically, the name of a Contributor should be used to indicate the entity.
 *
 * If no contributors was set, this function returns an empty vector.
 *
 * @return Returns the contributor vector
 */
std::vector<std::string> ContentMetadata::getContributor() const
{
    return contributor_;
}

void ContentMetadata::setContributor(std::vector<std::string> contributor)
{
    contributor_ = contributor;
}

/**
 * The spatial or temporal topic of the resource, the spatial applicability of the resource, or the jurisdiction under which the resource is relevant.
 *
 * Spatial topic and spatial applicability may be a named place or a location specified by its geographic coordinates. Temporal topic may be a named period, date, or date range. A jurisdiction may be a named administrative entity or a geographic place to which the resource applies. Recommended best practice is to use a controlled vocabulary such as the Thesaurus of Geographic Names [TGN]. Where appropriate, named places or time periods can be used in preference to numeric identifiers such as sets of coordinates or date ranges.
 *
 * If no coverage info was set, this function returns an empty vector.
 *
 * @return Returns the coverage vector.
 */
std::vector<std::string> ContentMetadata::getCoverage() const
{
    return coverage_;
}

void ContentMetadata::setCoverage(std::vector<std::string> coverage)
{
    coverage_ = coverage;
}
/**
 * An entity primarily responsible for making the resource.
 *
 * Examples of a Creator include a person, an organization, or a service. Typically, the name of a Creator should be used to indicate the entity.
 *
 * If no creators was set, this function returns an empty vector.
 *
 * @return Returns the creators vector.
 */
std::vector<std::string> ContentMetadata::getCreator() const
{
    return creator_;
}

void ContentMetadata::setCreator(std::vector<std::string> creator)
{
    creator_ = creator;
}

/**
 * A point or period of time associated with an event in the lifecycle of the resource.
 *
 * Date may be used to express temporal information at any level of granularity. Recommended best practice is to use an encoding scheme, such as the W3CDTF profile of ISO 8601 [W3CDTF].
 *
 * @return Returns the date set
 */
std::string ContentMetadata::getDate() const
{
    return date_;
}

void ContentMetadata::setDate(std::string date)
{
    hasDate_ = true;
    date_ = date;
}

/**
 * Description may include but is not limited to: an abstract, a table of contents, a graphical representation, or a free-text account of the resource.
 *
 * If no descriptions was set, this function returns an empty vector.
 *
 * @return Returns the descriptions vector
 */
std::vector<std::string> ContentMetadata::getDescription() const
{
    return description_;
}

void ContentMetadata::setDescription(std::vector<std::string> description)
{
    description_ = description;
}

/**
 * The file format, physical medium, or dimensions of the resource.
 *
 * Examples of dimensions include size and duration. Recommended best practice is to use a controlled vocabulary such as the list of Internet Media Types [MIME].
 *
 * @return Returns the file format of this publication.
 */
std::string ContentMetadata::getFormat() const
{
    return format_;
}

void ContentMetadata::setFormat(std::string format)
{
    format_ = format;
}

/**
 * An unambiguous reference to the resource within a given context.
 *
 * Recommended best practice is to identify the resource by means of a string conforming to a formal identification system.
 *
 * @return Returns the identifier for this content metadata.
 */
std::string ContentMetadata::getIdentifier() const
{
    return identifier_;
}

void ContentMetadata::setIdentifier(std::string identifier)
{
    identifier_ = identifier;
}
/**
 * In the case of audio Content, the name of the narrator.
 *
 * @return Returns the narrator.
 */
std::vector<std::string> ContentMetadata::getNarrator() const
{
    return narrator_;
}

void ContentMetadata::setNarrator(std::vector<std::string> narrator)
{
    narrator_ = narrator;
}

/**
 * An entity responsible for making the resource available.
 *
 * Examples of a Publisher include a person, an organization, or a service. Typically, the name of a Publisher should be used to indicate the entity.
 *
 * @return Returns the publisher
 */
std::string ContentMetadata::getPublisher() const
{
    return publisher_;
}

void ContentMetadata::setPublisher(std::string publisher)
{
    hasPublisher_ = true;
    publisher_ = publisher;
}

/**
 * A related resource.
 *
 * Recommended best practice is to identify the related resource by means of a string conforming to a formal identification system.
 *
 * If no relations was set, this function returns an empty vector.
 *
 * @return Returns the relations vector.
 */
std::vector<std::string> ContentMetadata::getRelations() const
{
    return relations_;
}

void ContentMetadata::setRelations(std::vector<std::string> relations)
{
    relations_ = relations;
}

/**
 * Specifies whether the Service requires this Content item to be returned.
 *
 * If this attribute is true, it is a contract from the Service to the Reading System that, if the Content item is issued, the Reading System will at some point return the Content item.
 *
 * Reading Systems should present Users with appropriate prompts if they try to return a Purchasable Content item.
 *
 * @return Returns true if returning of the publication is required.
 */
bool ContentMetadata::isRequiresReturn() const
{
    return requiresReturn_;
}

void ContentMetadata::setRequiresReturn(bool requiresReturn)
{
    requiresReturn_ = requiresReturn;
}

/**
 * Typically, rights information includes a statement about various property rights associated with the resource, including intellectual property rights.
 *
 * @return Returns information about rights held in and over the resource.
 */
std::vector<std::string> ContentMetadata::getRights() const
{
    return rights_;
}

void ContentMetadata::setRights(std::vector<std::string> rights)
{
    rights_ = rights;
}

/**
 * The Content Identifier of the sample.
 *
 * Reading Systems may retrieve the sample's resource list by calling getContentResources with this identifier as the parameter. Reading Systems must not call issueContent using the identifier of a sample.
 *
 * @return Returns an publication id containing a sample.
 */
std::string ContentMetadata::getSample() const
{
    return sample_;
}

void ContentMetadata::setSample(std::string sample)
{
    hasSample_ = true;
    sample_ = sample;
}

/**
 * The total size of the resources making up the Content item, in bytes.
 *
 * @return Returns the size of the content item.
 */
int ContentMetadata::getSize() const
{
    return size_;
}

void ContentMetadata::setSize(int size)
{
    size_ = size;
}

/**
 * The described resource may be derived from the related resource in whole or in part. Recommended best practice is to identify the related resource by means of a string conforming to a formal identification system.
 *
 * @return Returns a related resource from which the described resource is derived.
 */
std::string ContentMetadata::getSource() const
{
    return source_;
}

void ContentMetadata::setSource(std::string source)
{
    hasSource_ = true;
    source_ = source;
}

/**
 * Typically, a Title will be a name by which the resource is formally known.
 *
 * @return Returns the name given to the resource.
 */
std::string ContentMetadata::getTitle() const
{
    return title_;
}

void ContentMetadata::setTitle(std::string title)
{
    title_ = title;
}

/**
 * The nature or genre of the resource.
 *
 * Recommended best practice is to use a controlled vocabulary such as the DCMI Type Vocabulary [DCMITYPE]. To describe the file format, physical medium, or dimensions of the resource, use the Format element.
 *
 * If no types was set, this function returns an empty vector.
 *
 * @return Returns the types vector.
 */
std::vector<std::string> ContentMetadata::getTypes() const
{
    return types_;
}

void ContentMetadata::setTypes(std::vector<std::string> types)
{
    types_ = types;
}

/**
 * The topic of the resource.
 *
 * Typically, the subject will be represented using keywords, key phrases, or classification codes. Recommended best practice is to use a controlled vocabulary.
 *
 * If no subjects was set, this function returns an empty vector.
 *
 * @return Returns the subjects vector.
 */
std::vector<std::string> ContentMetadata::getSubjects() const
{
    return subjects_;
}

void ContentMetadata::setSubjects(std::vector<std::string> subjects)
{
    subjects_ = subjects;
}

/**
 * A language of the resource.
 *
 * Recommended best practice is to use a controlled vocabulary such as RFC 4646 [RFC4646].
 *
 * If no languages was set, this function returns an empty vector.
 *
 * @return Returns the language vector.
 */
std::vector<std::string> ContentMetadata::getLanguages() const
{
    return languages_;
}

void ContentMetadata::setLanguages(std::vector<std::string> languages)
{
    languages_ = languages;
}

/**
 * Optional field was set
 *
 * @return Returns true if the optional field is set
 */
bool ContentMetadata::hasCategory() const
{
    return hasCategory_;
}

/**
 * Optional field was set
 *
 * @return Returns true if the optional field is set
 */
bool ContentMetadata::hasDate() const
{
    return hasDate_;
}

/**
 * Optional field was set
 *
 * @return Returns true if the optional field is set
 */
bool ContentMetadata::hasPublisher() const
{
    return hasPublisher_;
}

/**
 * Optional field was set
 *
 * @return Returns true if the optional field is set
 */
bool ContentMetadata::hasSample() const
{
    return hasSample_;
}

/**
 * Optional field was set
 *
 * @return Returns true if the optional field is set
 */
bool ContentMetadata::hasSource() const
{
    return hasSource_;
}

} /* namespace kdo */
