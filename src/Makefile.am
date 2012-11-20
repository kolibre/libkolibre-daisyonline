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

HDRS = \
DaisyOnlineHandler.h \
Announcement.h \
Audio.h \
BookmarkAudio.h \
BookmarkBase.h \
BookmarkChoice.h \
Bookmark.h \
BookmarkNote.h \
BookmarkSet.h \
BookmarkTitle.h \
Choice.h \
ContentItem.h \
ContentList.h \
ContentMetadata.h \
ContentResources.h \
Hilite.h \
HiliteEnd.h \
HiliteStart.h \
InputQuestion.h \
Label.h \
Lastmark.h \
MultipleChoiceQuestion.h \
Question.h \
Questions.h \
ReadingSystemAttributes.h \
Resource.h \
ServiceAnnouncements.h \
ServiceAttributes.h \
UserResponse.h

SRCS = \
DaisyOnlineHandler.cpp \
Announcement.cpp \
Audio.cpp \
BookmarkAudio.cpp \
BookmarkBase.cpp \
BookmarkChoice.cpp \
Bookmark.cpp \
BookmarkNote.cpp \
BookmarkSet.cpp \
BookmarkTitle.cpp \
Choice.cpp \
ContentItem.cpp \
ContentList.cpp \
ContentMetadata.cpp \
ContentResources.cpp \
Hilite.cpp \
HiliteEnd.cpp \
HiliteStart.cpp \
InputQuestion.cpp \
Label.cpp \
Lastmark.cpp \
MultipleChoiceQuestion.cpp \
Question.cpp \
Questions.cpp \
ReadingSystemAttributes.cpp \
Resource.cpp \
ServiceAnnouncements.cpp \
ServiceAttributes.cpp \
UserResponse.cpp

SUBDIRS = stubs .

# Install the headers in a versioned directory - e.g. examplelib-1.0:
library_includedir = $(includedir)/libkolibre/daisyonline-$(PACKAGE_VERSION)
library_include_HEADERS = $(HDRS)

lib_LTLIBRARIES = libkolibre-daisyonline.la

libkolibre_daisyonline_la_SOURCES = $(SRCS)
libkolibre_daisyonline_la_LIBADD = $(top_builddir)/src/stubs/libdaisyonlinestubs.la
libkolibre_daisyonline_la_LDFLAGS = -version-info $(VERSION_INFO) @LOG4CXX_LIBS@ @AXIS2C_CFLAGS@
libkolibre_daisyonline_la_CXXFLAGS = -I$(top_srcdir)/src/stubs @LOG4CXX_CFLAGS@ @AXIS2C_CFLAGS@

EXTRA_DIST = axis2c_client_home.h
