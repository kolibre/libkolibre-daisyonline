#include "ReadingSystemAttributes.h"

#include <assert.h>

int main()
{
    kdo::ReadingSystemAttributes rsa;

    // test default values
    assert(rsa.getManufacturer() == "");
    assert(rsa.getModel() == "");
    assert(rsa.getSerialNumber() == "");
    assert(rsa.getVersion() == "");
    assert(rsa.getSupportsMultipleSelections() == false);
    assert(rsa.getPreferredUILanguage() == "");
    assert(rsa.getBandwidth() == -1);
    assert(rsa.getSupportedContentFormats().size() == 0);
    assert(rsa.getSupportsContentProtectionFormat() == false);
    assert(rsa.getKeyRing().size() == 0);
    assert(rsa.getSupportedMimeTypes().size() == 0);
    assert(rsa.isSupportedInputTypes(kdo::ReadingSystemAttributes::TEXT_NUMERIC) == false);
    assert(rsa.isSupportedInputTypes(kdo::ReadingSystemAttributes::TEXT_ALPHANUMERIC) == false);
    assert(rsa.isSupportedInputTypes(kdo::ReadingSystemAttributes::AUDIO) == false);
    assert(rsa.getRequiresAudioLabels() == false);
    assert(rsa.getAdditionalTransferProtocols().size() == 0);

    // test set functions
    rsa.setManufacturer("foo");
    assert(rsa.getManufacturer() == "foo");

    rsa.setModel("foo");
    assert(rsa.getModel() == "foo");

    rsa.setSerialNumber("foo");
    assert(rsa.getSerialNumber() == "foo");

    rsa.setVersion("foo");
    assert(rsa.getVersion() == "foo");

    rsa.setSupportsMultipleSelections(true);
    assert(rsa.getSupportsMultipleSelections() == true);
    rsa.setSupportsMultipleSelections(false);
    assert(rsa.getSupportsMultipleSelections() == false);

    rsa.setPreferredUILanguage("foo");
    assert(rsa.getPreferredUILanguage() == "foo");

    rsa.setBandwidth(123);
    assert(rsa.getBandwidth() == 123);

    rsa.setSupportsContentProtectionFormat(true);
    assert(rsa.getSupportsContentProtectionFormat() == true);
    rsa.setSupportsContentProtectionFormat(false);
    assert(rsa.getSupportsContentProtectionFormat() == false);

    rsa.setRequiresAudioLabels(true);
    assert(rsa.getRequiresAudioLabels() == true);
    rsa.setRequiresAudioLabels(false);
    assert(rsa.getRequiresAudioLabels() == false);

    // test add, remove and clear functions
    rsa.clearSupportedContentFormats();
    assert(rsa.getSupportedContentFormats().size() == 0);
    rsa.addContentFormat("foo");
    assert(rsa.getSupportedContentFormats().size() == 1);
    rsa.addContentFormat("foo");
    assert(rsa.getSupportedContentFormats().size() == 1);
    rsa.addContentFormat("bar");
    assert(rsa.getSupportedContentFormats().size() == 2);
    rsa.removeContentFormat("foo");
    assert(rsa.getSupportedContentFormats().size() == 1);
    rsa.removeContentFormat("foo");
    assert(rsa.getSupportedContentFormats().size() == 1);

    rsa.addKey("foo");
    assert(rsa.getKeyRing().size() == 1);
    rsa.addKey("foo");
    assert(rsa.getKeyRing().size() == 1);
    rsa.addKey("bar");
    assert(rsa.getKeyRing().size() == 2);
    rsa.removeKey("foo");
    assert(rsa.getKeyRing().size() == 1);
    rsa.removeKey("foo");
    assert(rsa.getKeyRing().size() == 1);
    rsa.clearKeyRing();
    assert(rsa.getKeyRing().size() == 0);

    rsa.clearSupportedMimeTypes();
    assert(rsa.getSupportedMimeTypes().size() == 0);
    rsa.addMimeType("foo");
    assert(rsa.getSupportedMimeTypes().size() == 1);
    rsa.addMimeType("foo");
    assert(rsa.getSupportedMimeTypes().size() == 1);
    rsa.addMimeType("bar");
    assert(rsa.getSupportedMimeTypes().size() == 2);
    rsa.removeMimeType("foo");
    assert(rsa.getSupportedMimeTypes().size() == 1);
    rsa.removeMimeType("foo");
    assert(rsa.getSupportedMimeTypes().size() == 1);

    rsa.addInputType(kdo::ReadingSystemAttributes::TEXT_NUMERIC);
    assert(rsa.isSupportedInputTypes(kdo::ReadingSystemAttributes::TEXT_NUMERIC) == true);
    assert(rsa.isSupportedInputTypes(kdo::ReadingSystemAttributes::TEXT_ALPHANUMERIC) == false);
    assert(rsa.isSupportedInputTypes(kdo::ReadingSystemAttributes::AUDIO) == false);
    rsa.addInputType(kdo::ReadingSystemAttributes::AUDIO);
    assert(rsa.isSupportedInputTypes(kdo::ReadingSystemAttributes::TEXT_NUMERIC) == true);
    assert(rsa.isSupportedInputTypes(kdo::ReadingSystemAttributes::TEXT_ALPHANUMERIC) == false);
    assert(rsa.isSupportedInputTypes(kdo::ReadingSystemAttributes::AUDIO) == true);
    rsa.addInputType(kdo::ReadingSystemAttributes::TEXT_ALPHANUMERIC);
    assert(rsa.isSupportedInputTypes(kdo::ReadingSystemAttributes::TEXT_NUMERIC) == true);
    assert(rsa.isSupportedInputTypes(kdo::ReadingSystemAttributes::TEXT_ALPHANUMERIC) == true);
    assert(rsa.isSupportedInputTypes(kdo::ReadingSystemAttributes::AUDIO) == true);
    rsa.removeInputType(kdo::ReadingSystemAttributes::AUDIO);
    assert(rsa.isSupportedInputTypes(kdo::ReadingSystemAttributes::TEXT_NUMERIC) == true);
    assert(rsa.isSupportedInputTypes(kdo::ReadingSystemAttributes::TEXT_ALPHANUMERIC) == true);
    assert(rsa.isSupportedInputTypes(kdo::ReadingSystemAttributes::AUDIO) == false);
    rsa.clearSupportedInputTypes();
    assert(rsa.isSupportedInputTypes(kdo::ReadingSystemAttributes::TEXT_NUMERIC) == false);
    assert(rsa.isSupportedInputTypes(kdo::ReadingSystemAttributes::TEXT_ALPHANUMERIC) == false);
    assert(rsa.isSupportedInputTypes(kdo::ReadingSystemAttributes::AUDIO) == false);

    rsa.addTransferProtocol("foo");
    assert(rsa.getAdditionalTransferProtocols().size() == 1);
    rsa.addTransferProtocol("foo");
    assert(rsa.getAdditionalTransferProtocols().size() == 1);
    rsa.addTransferProtocol("bar");
    assert(rsa.getAdditionalTransferProtocols().size() == 2);
    rsa.removeTransferProtocol("foo");
    assert(rsa.getAdditionalTransferProtocols().size() == 1);
    rsa.removeTransferProtocol("foo");
    assert(rsa.getAdditionalTransferProtocols().size() == 1);
    rsa.clearAdditionalTransferProtocols();
    assert(rsa.getAdditionalTransferProtocols().size() == 0);

    return 0;
}
