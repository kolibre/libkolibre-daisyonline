#include "DaisyOnlineHandler.h"
#include "setup_logging.h"

#include <assert.h>
#include <iostream>
#include <cstdlib>

int main(int argc, char **argv)
{
    if (argc < 4)
    {
        std::cout << "Usage: " << argv[0] << " <uri> <username> <password>" << std::endl;
        return -1;
    }

    if (getenv("AXIS2C_HOME"))
    {
        std::cout << "Setting AXIS2C_HOME forces logs to be written there, so don't!" << std::endl;
        return 1;
    }

    setup_logging();

    DaisyOnlineHandler DOHandler(std::string(argv[1]), "falseresult/1.2.3");

    if (!DOHandler.good())
    {
        assert(!"Failed to setup connection");
        return -1;
    }

    // unsuccessful logOn request
    assert(!DOHandler.logOn(std::string(argv[2]), std::string(argv[3])));
    assert(DOHandler.good());

    // build readingSystemAttributes object
    kdo::ReadingSystemAttributes readingSystemAttributes;
    readingSystemAttributes.setManufacturer("Acme Corp");
    readingSystemAttributes.setModel("Pocket phantome");
    readingSystemAttributes.setSerialNumber("123456");
    readingSystemAttributes.setVersion("123");
    readingSystemAttributes.setPreferredUILanguage("en");
    readingSystemAttributes.setBandwidth(800000);
    readingSystemAttributes.addContentFormat("ANSI/NISO Z39.86-2005");
    readingSystemAttributes.addContentFormat("Daisy 2.02");

    // unsuccessful setReadingSystemAttributes request
    assert(!DOHandler.setReadingSystemAttributes(readingSystemAttributes));
    assert(DOHandler.good());

    // unsuccessful issueContent request
    assert(!DOHandler.issueContent("not_a_valid_content_id"));
    assert(DOHandler.good());

    // unsuccessful returnContent request
    assert(!DOHandler.returnContent("not_a_valid_content_id"));
    assert(DOHandler.good());

    // unsuccessful markAnnouncementAsRead request
    assert(!DOHandler.markAnnouncementsAsRead("not_a_valid_announcement_id"));
    assert(DOHandler.good());

    // unsuccessful logOff request
    assert(!DOHandler.logOff());
    assert(DOHandler.good());

    // unsuccessful setbookmarks request
    kdo::BookmarkTitle title("text");
    kdo::BookmarkSet bookmarkSet(title, "uid");
    assert(!DOHandler.setBookmarks("not_a_valid_content_id", bookmarkSet));
    assert(DOHandler.good());

    return 0;
}
