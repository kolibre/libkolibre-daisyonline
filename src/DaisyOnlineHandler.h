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

#ifndef _DAISYONLINEHANDLER_H
#define _DAISYONLINEHANDLER_H

#include <string>
#include <vector>
#include <map>

#include "ContentResources.h"
#include "ContentList.h"
#include "ServiceAttributes.h"
#include "ContentMetadata.h"
#include "Announcement.h"
#include "ServiceAnnouncements.h"
#include "ReadingSystemAttributes.h"
#include "BookmarkSet.h"
#include "UserResponse.h"
#include "Questions.h"

// Forward declare axis2 types, only used by private class members
struct axutil_env;
struct axis2_stub;
struct axutil_log_ops;
struct adb_serviceAttributes_type0;
struct adb_contentList_type0;
struct adb_contentMetadata_type0;
struct adb_label_type0;
struct adb_audio_type0;
struct adb_contentItem_type0;
struct adb_resources_type0;
struct adb_announcements_type0;
struct adb_bookmarkSet_type0;
struct adb_audio_type1;
struct adb_bookmarkContent;
struct adb_lastmark_type0;
struct adb_note_type0;
struct adb_bookmark_type0;
struct adb_hiliteContent;
struct adb_hilite_type0;
struct adb_questions_type0;
struct adb_multipleChoiceQuestion_type0;
struct adb_inputQuestion_type0;
struct adb_internalServerErrorFault;
struct adb_invalidOperationFault;
struct adb_invalidParameterFault;
struct adb_noActiveSessionFault;
struct adb_operationNotSupportedFault;

/**
 * @brief A class to invoke operations defined the Daisy Online Delivery Protocol.
 *
 * Implements all SOAP operations except getKeyExchangeObject and functions for retrieving status and errors.
 */
class DaisyOnlineHandler
{

public:
    DaisyOnlineHandler(const std::string uri, const std::string useragent = "");
    ~DaisyOnlineHandler();

    typedef enum
    {
        STATUS_UNKNOWN = -1,
        STATUS_SUCCESS = 0,
        ERROR_START = 4096, /* offset enough to avoid conflicts with AXIS2 ERRORS */
        ERROR_NETWORK,
        ERROR_MISSING_ELEMENT,
        ERROR_INVALID_REQUEST_DATA,
        ERROR_OTHER,
        FAULT_INTERNALSERVERERROR,
        FAULT_INVALIDOPERATION,
        FAULT_INVALIDPARAMETER,
        FAULT_NOACTIVESESSION,
        FAULT_OPERATIONNOTSUPPORTED,
    } status;

    // SOAP operations defined in WSDL
    bool logOn(std::string username, std::string password);
    bool logOff();
    kdo::ServiceAttributes* getServiceAttributes();
    bool setReadingSystemAttributes(kdo::ReadingSystemAttributes readingSystemAttributes);
    kdo::ContentList* getContentList(std::string id, int firstItem = 0, int lastItem = -1);
    kdo::ContentMetadata* getContentMetadata(std::string contentId);
    bool issueContent(std::string contentId);
    kdo::ContentResources* getContentResources(std::string contentId);
    kdo::ServiceAnnouncements* getServiceAnnouncements();
    bool markAnnouncementsAsRead(std::string identifier);
    bool markAnnouncementsAsRead(std::vector<kdo::Announcement> announcements);
    bool returnContent(std::string contentId);
    bool setBookmarks(std::string contentId, kdo::BookmarkSet bookmarkSet);
    kdo::BookmarkSet* getBookmarks(std::string contentId);
    kdo::Questions* getQuestions(std::string reservedQuestionId);
    kdo::Questions* getQuestions(std::vector<kdo::UserResponse> responses);

    // Errors and faults
    bool good();
    bool checkEnvironment();
    status getStatus();
    std::string getStatusMessage();
    std::string getLastSoapFaultReason();

private:
    // Functions for parsing responses
    kdo::ServiceAttributes* parseServiceAttributes(adb_serviceAttributes_type0* getServiceAttributesResult);
    kdo::ContentList* parseContentList(adb_contentList_type0* contentList);
    kdo::ContentMetadata* parseContentMetaData(adb_contentMetadata_type0* contentMetadata);
    kdo::ServiceAnnouncements* parseServiceAnnouncements(adb_announcements_type0* serviceAnnouncements);
    kdo::Label parseLabel(adb_label_type0* label);
    kdo::Audio parseAudio(adb_audio_type0* audio);
    kdo::ContentItem* parseContentItem(adb_contentItem_type0* contentItem);
    kdo::ContentResources* parseContentResources(adb_resources_type0* resources);
    kdo::BookmarkSet* parseBookmarkSet(adb_bookmarkSet_type0* bookmarkSet);
    kdo::BookmarkAudio parseBookmarkAudio(adb_audio_type1* audio);
    kdo::BookmarkBase parseBookmarkContent(adb_bookmarkContent* bookmarkContent);
    kdo::Lastmark parseLastmark(adb_lastmark_type0* lastmark);
    kdo::BookmarkNote parseBookmarkNote(adb_note_type0* note);
    kdo::Bookmark parseBookmark(adb_bookmark_type0* bookmark);
    kdo::BookmarkBase parseHiliteContent(adb_hiliteContent* hiliteContent);
    kdo::Hilite parseHilite(adb_hilite_type0* hilite);
    kdo::Questions* parseQuestions(adb_questions_type0* getQuestionsResult);
    kdo::MultipleChoiceQuestion parseMultipleChoiceQuestion(adb_multipleChoiceQuestion_type0* multiple);
    kdo::InputQuestion parseInputQuestion(adb_inputQuestion_type0* input);
    void parseInternalServerErrorFault(adb_internalServerErrorFault* fault);
    void parseInvalidOperationFault(adb_invalidOperationFault* fault);
    void parseInvalidParameterFault(adb_invalidParameterFault* fault);
    void parseNoActiveSessionFault(adb_noActiveSessionFault* fault);
    void parseOperationNotSupportedFault(adb_operationNotSupportedFault* fault);

    void initiateStatusMap();
    std::map<int, status> statusMap_;

    // variables to store valuable data
    int lastErrorNumber_;
    std::string lastError_;
    std::string lastSoapFaultReason_;

    // axis2 data types
    axutil_log_ops* log_ops;
    axutil_env* env;
    axis2_stub* stub;
};

#endif
