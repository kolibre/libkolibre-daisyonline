## Copyright (C) 2012 Kolibre
#
# This file is part of kolibre-daisyonline.
#
# Kolibre-daisyonline is free software: you can redistribute it and/or modify
# it under the terms of the GNU Lesser General Public License as published by
# the Free Software Foundation, either version 2.1 of the License, or
# (at your option) any later version.
#
# Kolibre-daisyonline is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with kolibre-daisyonline. If not, see <http://www.gnu.org/licenses/>.
#

AUTOMAKE_OPTIONS = foreign

check_PROGRAMS = \
	logon \
	getserviceattributes \
	setreadingsystemattributes \
	getcontentlist \
	getcontentmetadata \
	issuecontent \
	getcontentresources \
	logoff \
	returncontent \
	getserviceannouncements \
	markannouncementsasread \
	setbookmarks \
	getbookmarks \
	getquestions \
	falseresult \
	faultinternalservererror \
	faultinvalidoperation \
	faultinvalidparameter \
	faultoperationnotsupported \
	faultnoactivesession \
	errornonetwork \
	errorinvaliduri \
	errormissinglangattribute \
	asyncsessionestablishment \
	memoryleak \
	servertest \
	readingsystemattributes

TESTS = \
	logon.sh \
	getserviceattributes.sh \
	setreadingsystemattributes.sh \
	getcontentlist.sh \
	getcontentmetadata.sh \
	issuecontent.sh \
	getcontentresources.sh \
	logoff.sh \
	returncontent.sh \
	getserviceannouncements.sh \
	markannouncementsasread.sh \
	setbookmarks.sh \
	getbookmarks.sh \
	getquestions.sh \
	falseresult.sh \
	faultinternalservererror.sh \
	faultinvalidoperation.sh \
	faultinvalidparameter.sh \
	faultoperationnotsupported.sh \
	faultnoactivesession.sh \
	errornonetwork.sh \
	errorinvaliduri.sh \
	errormissinglangattribute.sh \
	asyncsessionestablishment.sh \
	memoryleak.sh \
	readingsystemattributes

logon_SOURCES = logon.cpp
getserviceattributes_SOURCES = getserviceattributes.cpp
setreadingsystemattributes_SOURCES = setreadingsystemattributes.cpp
getcontentlist_SOURCES = getcontentlist.cpp
getcontentmetadata_SOURCES = getcontentmetadata.cpp
issuecontent_SOURCES = issuecontent.cpp
getcontentresources_SOURCES = getcontentresources.cpp
logoff_SOURCES = logoff.cpp
returncontent_SOURCES = returncontent.cpp
getserviceannouncements_SOURCES = getserviceannouncements.cpp
markannouncementsasread_SOURCES = markannouncementsasread.cpp
setbookmarks_SOURCES = setbookmarks.cpp
getbookmarks_SOURCES = getbookmarks.cpp
getquestions_SOURCES = getquestions.cpp
falseresult_SOURCES = falseresult.cpp
faultinternalservererror_SOURCES = faultinternalservererror.cpp
faultinvalidoperation_SOURCES = faultinvalidoperation.cpp
faultinvalidparameter_SOURCES = faultinvalidparameter.cpp
faultoperationnotsupported_SOURCES = faultoperationnotsupported.cpp
faultnoactivesession_SOURCES = faultnoactivesession.cpp
errornonetwork_SOURCES = errornonetwork.cpp
errorinvaliduri_SOURCES = errorinvaliduri.cpp
errormissinglangattribute_SOURCES = errormissinglangattribute.cpp
asyncsessionestablishment_SOURCES = asyncsessionestablishment.c
asyncsessionestablishment_CPPFLAGS = @AXIS2C_CFLAGS@ -g -I$(top_srcdir)/src -I$(top_srcdir)/src/stubs
asyncsessionestablishment_LDFLAGS = @AXIS2C_LIBS@ \
									-laxutil \
									-laxis2_axiom \
									-laxis2_engine \
									-laxis2_parser \
									-laxis2_http_sender \
									-laxis2_http_receiver
asyncsessionestablishment_LDADD = $(top_builddir)/src/stubs/libdaisyonlinestubs.la
memoryleak_SOURCES = memoryleak.cpp
servertest_SOURCES = servertest.cpp
readingsystemattributes_SOURCES = readingsystemattributes.cpp
readingsystemattributes_CPPFLAGS = -I$(top_srcdir)/src
readingsystemattributes_LDADD = $(top_builddir)/src/libkolibre_daisyonline_la-ReadingSystemAttributes.lo

LDADD = -lkolibre-daisyonline
AM_LDFLAGS = -L$(top_builddir)/src @LOG4CXX_LIBS@
AM_CFLAGS = -g
AM_CPPFLAGS = -g -I$(top_srcdir)/src -I$(top_srcdir)/src/stubs

EXTRA_DIST = \
	asyncSessionEstablishment \
	logOn \
	getServiceAttributes \
	setReadingSystemAttributes \
	getContentList \
	getContentMetadata \
	issueContent \
	getContentResources \
	logOff \
	returnContent \
	getServiceAnnouncements \
	markAnnouncementsAsRead \
	setBookmarks \
	getBookmarks \
	getQuestions \
	false \
	faults \
	missingLangAttribute \
	memoryLeak \
	asyncsessionestablishment.sh \
	logon.sh \
	getserviceattributes.sh \
	setreadingsystemattributes.sh \
	getcontentlist.sh \
	getcontentmetadata.sh \
	issuecontent.sh \
	getcontentresources.sh \
	logoff.sh \
	returncontent.sh \
	getserviceannouncements.sh \
	markannouncementsasread.sh \
	setbookmarks.sh \
	getbookmarks.sh \
	getquestions.sh \
	falseresult.sh \
	faultinternalservererror.sh \
	faultinvalidoperation.sh \
	faultinvalidparameter.sh \
	faultnoactivesession.sh \
	faultoperationnotsupported.sh \
	errormissinglangattribute.sh \
	errorinvaliduri.sh \
	errornonetwork.sh \
	memoryleak.sh \
	setup_logging.h \
	memoryleak.supp \
	run

clean-local: clean-local-check
.PHONY: clean-local-check

clean-local-check:
	-rm -rf *.log
	-rm -rf *.order
