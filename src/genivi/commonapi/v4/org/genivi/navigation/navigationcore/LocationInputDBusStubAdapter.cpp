/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.v201608040619.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v4/org/genivi/navigation/navigationcore/LocationInput.hpp>
#include <v4/org/genivi/navigation/navigationcore/LocationInputDBusStubAdapter.hpp>

namespace v4 {
namespace org {
namespace genivi {
namespace navigation {
namespace navigationcore {

std::shared_ptr<CommonAPI::DBus::DBusStubAdapter> createLocationInputDBusStubAdapter(
                   const CommonAPI::DBus::DBusAddress &_address,
                   const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
                   const std::shared_ptr<CommonAPI::StubBase> &_stub) {
    return std::make_shared<LocationInputDBusStubAdapter>(_address, _connection, _stub);
}

INITIALIZER(registerLocationInputDBusStubAdapter) {
    CommonAPI::DBus::Factory::get()->registerStubAdapterCreateMethod(
    	LocationInput::getInterface(), &createLocationInputDBusStubAdapter);
}

LocationInputDBusStubAdapterInternal::~LocationInputDBusStubAdapterInternal() {
    deactivateManagedInstances();
    LocationInputDBusStubAdapterHelper::deinit();
}

void LocationInputDBusStubAdapterInternal::deactivateManagedInstances() {

}

const char* LocationInputDBusStubAdapterInternal::getMethodsDBusIntrospectionXmlData() const {
    static const std::string introspectionData =
        "<method name=\"getInterfaceVersion\">\n"
            "<arg name=\"value\" type=\"uu\" direction=\"out\" />"
        "</method>\n"
        /**
         * description: currentSelectionCriterion = This signal notifies the SelectionCriterion for the
         *   current speller input or search.
         */
        "<signal name=\"currentSelectionCriterion\">\n"
            "<arg name=\"locationInputHandle\" type=\"u\" />\n"
            "<arg name=\"selectionCriterion\" type=\"i\" />\n"
        "</signal>\n"
        /**
         * description: searchStatus = This signal updates the search status of the specified session
         */
        "<signal name=\"searchStatus\">\n"
            "<arg name=\"locationInputHandle\" type=\"u\" />\n"
            "<arg name=\"statusValue\" type=\"i\" />\n"
        "</signal>\n"
        /**
         * description: spellResult = This signal notifies the result of the previous Spell method
         */
        "<signal name=\"spellResult\">\n"
            "<arg name=\"locationInputHandle\" type=\"u\" />\n"
            "<arg name=\"uniqueString\" type=\"s\" />\n"
            "<arg name=\"validCharacters\" type=\"s\" />\n"
            "<arg name=\"fullMatch\" type=\"b\" />\n"
        "</signal>\n"
        /**
         * description: searchResultList = This signal updates the address result list (e.g. after a
         *   Search/Spell/Scroll call)
         */
        "<signal name=\"searchResultList\">\n"
            "<arg name=\"locationInputHandle\" type=\"u\" />\n"
            "<arg name=\"totalSize\" type=\"q\" />\n"
            "<arg name=\"windowOffset\" type=\"q\" />\n"
            "<arg name=\"windowSize\" type=\"q\" />\n"
            "<arg name=\"resultListWindow\" type=\"aa{i(yv)}\" />\n"
        "</signal>\n"
        /**
         * description: searchResultListSizeChanged = This signal updates the size of the address
         *   result list
         */
        "<signal name=\"searchResultListSizeChanged\">\n"
            "<arg name=\"locationInputHandle\" type=\"u\" />\n"
            "<arg name=\"totalSize\" type=\"q\" />\n"
        "</signal>\n"
        /**
         * description: contentUpdated = This signal updates the input content data for the specified
         *   session
         */
        "<signal name=\"contentUpdated\">\n"
            "<arg name=\"locationInputHandle\" type=\"u\" />\n"
            "<arg name=\"guidable\" type=\"b\" />\n"
            "<arg name=\"availableSelectionCriteria\" type=\"ai\" />\n"
            "<arg name=\"address\" type=\"a{i(yv)}\" />\n"
        "</signal>\n"
        /**
         * description: addressValidationResult = This signal notifies the validation result of a
         *   former ValidateAddress call
         */
        "<signal name=\"addressValidationResult\">\n"
            "<arg name=\"locationInputHandle\" type=\"u\" />\n"
            "<arg name=\"validatedAddressList\" type=\"aa{i(yv)}\" />\n"
            "<arg name=\"validationStatusList\" type=\"aa{ii}\" />\n"
        "</signal>\n"
        /**
         * description: getVersion = This method returns the API version implemented by the server
         *   application
         */
        "<method name=\"getVersion\">\n"
            "<arg name=\"_version\" type=\"(qqqs)\" direction=\"out\" />\n"
        "</method>\n"
        /**
         * description: createLocationInput = This method creates a new location input and retrieves a
         *   handle
         */
        "<method name=\"createLocationInput\">\n"
            "<arg name=\"_sessionHandle\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_locationInputHandle\" type=\"u\" direction=\"out\" />\n"
        "</method>\n"
        /**
         * description: deleteLocationInput = This method deletes a location input and its associated
         *   resources
         */
        "<method name=\"deleteLocationInput\">\n"
            "<arg name=\"_sessionHandle\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_locationInputHandle\" type=\"u\" direction=\"in\" />\n"
        "</method>\n"
        /**
         * description: getSupportedAddressAttributes = This method retrieves the supported address
         *   attributes
         */
        "<method name=\"getSupportedAddressAttributes\">\n"
            "<arg name=\"_addressAttributesList\" type=\"ai\" direction=\"out\" />\n"
        "</method>\n"
        /**
         * description: setAddress = This method sets the address to start with for the LocationInput
         *   identified by the given handle
         */
        "<method name=\"setAddress\">\n"
            "<arg name=\"_sessionHandle\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_locationInputHandle\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_address\" type=\"a{i(yv)}\" direction=\"in\" />\n"
        "</method>\n"
        /**
         * description: setSelectionCriterion = This method sets the selection criterion for the
         *   current speller, search input and the corresponding result-lists for the
         *   current session
         */
        "<method name=\"setSelectionCriterion\">\n"
            "<arg name=\"_sessionHandle\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_locationInputHandle\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_selectionCriterion\" type=\"i\" direction=\"in\" />\n"
        "</method>\n"
        /**
         * description: spell = This method sends the next spell input for the current session
         */
        "<method name=\"spell\">\n"
            "<arg name=\"_sessionHandle\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_locationInputHandle\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_inputCharacter\" type=\"s\" direction=\"in\" />\n"
            "<arg name=\"_maxWindowSize\" type=\"q\" direction=\"in\" />\n"
        "</method>\n"
        /**
         * description: search = This method sends the search input for the current session
         */
        "<method name=\"search\">\n"
            "<arg name=\"_sessionHandle\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_locationInputHandle\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_inputString\" type=\"s\" direction=\"in\" />\n"
            "<arg name=\"_maxWindowSize\" type=\"q\" direction=\"in\" />\n"
        "</method>\n"
        /**
         * description: requestListUpdate = This method sends a request for more list elements for the
         *   current session
         */
        "<method name=\"requestListUpdate\">\n"
            "<arg name=\"_sessionHandle\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_locationInputHandle\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_offset\" type=\"q\" direction=\"in\" />\n"
            "<arg name=\"_maxWindowSize\" type=\"q\" direction=\"in\" />\n"
        "</method>\n"
        /**
         * description: selectEntry = This method triggers selection of a result list entry by index
         */
        "<method name=\"selectEntry\">\n"
            "<arg name=\"_sessionHandle\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_locationInputHandle\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_index\" type=\"q\" direction=\"in\" />\n"
        "</method>\n"
        /**
         * description: getEntry = This method synchronously gets the address for the given result list
         *   entry
         */
        "<method name=\"getEntry\">\n"
            "<arg name=\"_locationInputHandle\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_index\" type=\"q\" direction=\"in\" />\n"
            "<arg name=\"_address\" type=\"a{i(yv)}\" direction=\"out\" />\n"
        "</method>\n"
        /**
         * description: validateAddress = This method validates an address from different sources than
         *   Navigation
         */
        "<method name=\"validateAddress\">\n"
            "<arg name=\"_sessionHandle\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_locationInputHandle\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_inputAddress\" type=\"a{i(yv)}\" direction=\"in\" />\n"
        "</method>\n"
        /**
         * description: reverseGeocode = This method transforms a geocoordinate into an address
         */
        "<method name=\"reverseGeocode\">\n"
            "<arg name=\"_sessionHandle\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_locationInputHandle\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_coordinate\" type=\"(dd)\" direction=\"in\" />\n"
        "</method>\n"

    ;
    return introspectionData.c_str();
}

CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v4::org::genivi::navigation::navigationcore::LocationInputStub,
        CommonAPI::Version
        > LocationInputDBusStubAdapterInternal::getLocationInputInterfaceVersionStubDispatcher(&LocationInputStub::getInterfaceVersion, "uu");




/**
 * description: getVersion = This method returns the API version implemented by the server
 *   application
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::navigationcore::LocationInputStub,
    std::tuple<>,
    std::tuple<::v4::org::genivi::CommonTypes::Version>,
    std::tuple<>,
    std::tuple<::v4::org::genivi::CommonTypes_::VersionDeployment_t>
    
    > LocationInputDBusStubAdapterInternal::getVersionStubDispatcher(
    &LocationInputStub::getVersion, "(qqqs)",
					std::make_tuple(),
                	std::make_tuple(static_cast<::v4::org::genivi::CommonTypes_::VersionDeployment_t*>(nullptr)));

/**
 * description: createLocationInput = This method creates a new location input and retrieves a
 *   handle
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::navigationcore::LocationInputStub,
    std::tuple<::v4::org::genivi::navigation::NavigationTypes::Handle>,
    std::tuple<::v4::org::genivi::navigation::NavigationTypes::LocationHandle>,
    std::tuple<CommonAPI::EmptyDeployment>,
    std::tuple<CommonAPI::EmptyDeployment>
    
    > LocationInputDBusStubAdapterInternal::createLocationInputStubDispatcher(
    &LocationInputStub::createLocationInput, "u",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
                	std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr)));

/**
 * description: deleteLocationInput = This method deletes a location input and its associated
 *   resources
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::navigationcore::LocationInputStub,
    std::tuple<::v4::org::genivi::navigation::NavigationTypes::Handle, ::v4::org::genivi::navigation::NavigationTypes::LocationHandle>,
    std::tuple<>,
    std::tuple<CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment>,
    std::tuple<>
    
    > LocationInputDBusStubAdapterInternal::deleteLocationInputStubDispatcher(
    &LocationInputStub::deleteLocationInput, "",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
                	std::make_tuple());

/**
 * description: getSupportedAddressAttributes = This method retrieves the supported address
 *   attributes
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::navigationcore::LocationInputStub,
    std::tuple<>,
    std::tuple<LocationInput::AddressAttributeList>,
    std::tuple<>,
    std::tuple<LocationInput_::AddressAttributeListDeployment_t>
    
    > LocationInputDBusStubAdapterInternal::getSupportedAddressAttributesStubDispatcher(
    &LocationInputStub::getSupportedAddressAttributes, "ai",
					std::make_tuple(),
                	std::make_tuple(static_cast<LocationInput_::AddressAttributeListDeployment_t*>(nullptr)));

/**
 * description: setAddress = This method sets the address to start with for the LocationInput
 *   identified by the given handle
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::navigationcore::LocationInputStub,
    std::tuple<::v4::org::genivi::navigation::NavigationTypes::Handle, ::v4::org::genivi::navigation::NavigationTypes::LocationHandle, LocationInput::Address>,
    std::tuple<>,
    std::tuple<CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment, LocationInput_::AddressDeployment_t>,
    std::tuple<>
    
    > LocationInputDBusStubAdapterInternal::setAddressStubDispatcher(
    &LocationInputStub::setAddress, "",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<LocationInput_::AddressDeployment_t*>(nullptr)),
                	std::make_tuple());

/**
 * description: setSelectionCriterion = This method sets the selection criterion for the
 *   current speller, search input and the corresponding result-lists for the
 *   current session
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::navigationcore::LocationInputStub,
    std::tuple<::v4::org::genivi::navigation::NavigationTypes::Handle, ::v4::org::genivi::navigation::NavigationTypes::LocationHandle, LocationInput::AddressAttribute>,
    std::tuple<>,
    std::tuple<CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment>,
    std::tuple<>
    
    > LocationInputDBusStubAdapterInternal::setSelectionCriterionStubDispatcher(
    &LocationInputStub::setSelectionCriterion, "",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
                	std::make_tuple());

/**
 * description: spell = This method sends the next spell input for the current session
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::navigationcore::LocationInputStub,
    std::tuple<::v4::org::genivi::navigation::NavigationTypes::Handle, ::v4::org::genivi::navigation::NavigationTypes::LocationHandle, std::string, uint16_t>,
    std::tuple<>,
    std::tuple<CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment, CommonAPI::DBus::StringDeployment, CommonAPI::EmptyDeployment>,
    std::tuple<>
    
    > LocationInputDBusStubAdapterInternal::spellStubDispatcher(
    &LocationInputStub::spell, "",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::DBus::StringDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
                	std::make_tuple());

/**
 * description: search = This method sends the search input for the current session
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::navigationcore::LocationInputStub,
    std::tuple<::v4::org::genivi::navigation::NavigationTypes::Handle, ::v4::org::genivi::navigation::NavigationTypes::LocationHandle, std::string, uint16_t>,
    std::tuple<>,
    std::tuple<CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment, CommonAPI::DBus::StringDeployment, CommonAPI::EmptyDeployment>,
    std::tuple<>
    
    > LocationInputDBusStubAdapterInternal::searchStubDispatcher(
    &LocationInputStub::search, "",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::DBus::StringDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
                	std::make_tuple());

/**
 * description: requestListUpdate = This method sends a request for more list elements for the
 *   current session
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::navigationcore::LocationInputStub,
    std::tuple<::v4::org::genivi::navigation::NavigationTypes::Handle, ::v4::org::genivi::navigation::NavigationTypes::LocationHandle, uint16_t, uint16_t>,
    std::tuple<>,
    std::tuple<CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment>,
    std::tuple<>
    
    > LocationInputDBusStubAdapterInternal::requestListUpdateStubDispatcher(
    &LocationInputStub::requestListUpdate, "",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
                	std::make_tuple());

/**
 * description: selectEntry = This method triggers selection of a result list entry by index
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::navigationcore::LocationInputStub,
    std::tuple<::v4::org::genivi::navigation::NavigationTypes::Handle, ::v4::org::genivi::navigation::NavigationTypes::LocationHandle, uint16_t>,
    std::tuple<>,
    std::tuple<CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment>,
    std::tuple<>
    
    > LocationInputDBusStubAdapterInternal::selectEntryStubDispatcher(
    &LocationInputStub::selectEntry, "",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
                	std::make_tuple());

/**
 * description: getEntry = This method synchronously gets the address for the given result list
 *   entry
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::navigationcore::LocationInputStub,
    std::tuple<::v4::org::genivi::navigation::NavigationTypes::LocationHandle, uint16_t>,
    std::tuple<LocationInput::Address>,
    std::tuple<CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment>,
    std::tuple<LocationInput_::AddressDeployment_t>
    
    > LocationInputDBusStubAdapterInternal::getEntryStubDispatcher(
    &LocationInputStub::getEntry, "a{i(yv)}",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
                	std::make_tuple(static_cast<LocationInput_::AddressDeployment_t*>(nullptr)));

/**
 * description: validateAddress = This method validates an address from different sources than
 *   Navigation
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::navigationcore::LocationInputStub,
    std::tuple<::v4::org::genivi::navigation::NavigationTypes::Handle, ::v4::org::genivi::navigation::NavigationTypes::LocationHandle, LocationInput::Address>,
    std::tuple<>,
    std::tuple<CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment, LocationInput_::AddressDeployment_t>,
    std::tuple<>
    
    > LocationInputDBusStubAdapterInternal::validateAddressStubDispatcher(
    &LocationInputStub::validateAddress, "",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<LocationInput_::AddressDeployment_t*>(nullptr)),
                	std::make_tuple());

/**
 * description: reverseGeocode = This method transforms a geocoordinate into an address
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::navigationcore::LocationInputStub,
    std::tuple<::v4::org::genivi::navigation::NavigationTypes::Handle, ::v4::org::genivi::navigation::NavigationTypes::LocationHandle, ::v4::org::genivi::navigation::NavigationTypes::Coordinate2D>,
    std::tuple<>,
    std::tuple<CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment, ::v4::org::genivi::navigation::NavigationTypes_::Coordinate2DDeployment_t>,
    std::tuple<>
    
    > LocationInputDBusStubAdapterInternal::reverseGeocodeStubDispatcher(
    &LocationInputStub::reverseGeocode, "",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<::v4::org::genivi::navigation::NavigationTypes_::Coordinate2DDeployment_t*>(nullptr)),
                	std::make_tuple());



/**
 * description: currentSelectionCriterion = This signal notifies the SelectionCriterion for the
 *   current speller input or search.
 */
void LocationInputDBusStubAdapterInternal::fireCurrentSelectionCriterionEvent(const ::v4::org::genivi::navigation::NavigationTypes::LocationHandle& locationInputHandle, const ::v4::org::genivi::navigation::navigationcore::LocationInput::AddressAttribute& selectionCriterion) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    ::v4::org::genivi::navigation::NavigationTypes::LocationHandle,
    ::v4::org::genivi::navigation::navigationcore::LocationInput::AddressAttribute
    >>::sendSignal(
            *this,
            "currentSelectionCriterion",
            "ui",
    locationInputHandle,
    selectionCriterion
    );
}
/**
 * description: searchStatus = This signal updates the search status of the specified session
 */
void LocationInputDBusStubAdapterInternal::fireSearchStatusEvent(const ::v4::org::genivi::navigation::NavigationTypes::LocationHandle& locationInputHandle, const ::v4::org::genivi::navigation::navigationcore::LocationInput::SearchStatus& statusValue) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    ::v4::org::genivi::navigation::NavigationTypes::LocationHandle,
    ::v4::org::genivi::navigation::navigationcore::LocationInput::SearchStatus
    >>::sendSignal(
            *this,
            "searchStatus",
            "ui",
    locationInputHandle,
    statusValue
    );
}
/**
 * description: spellResult = This signal notifies the result of the previous Spell method
 */
void LocationInputDBusStubAdapterInternal::fireSpellResultEvent(const ::v4::org::genivi::navigation::NavigationTypes::LocationHandle& locationInputHandle, const std::string& uniqueString, const std::string& validCharacters, const bool& fullMatch) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    ::v4::org::genivi::navigation::NavigationTypes::LocationHandle,
    CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>,
    CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>,
    bool
    >>::sendSignal(
            *this,
            "spellResult",
            "ussb",
    locationInputHandle,
    CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>(uniqueString, static_cast<CommonAPI::DBus::StringDeployment*>(nullptr)),
    CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>(validCharacters, static_cast<CommonAPI::DBus::StringDeployment*>(nullptr)),
    fullMatch
    );
}
/**
 * description: searchResultList = This signal updates the address result list (e.g. after a
 *   Search/Spell/Scroll call)
 */
void LocationInputDBusStubAdapterInternal::fireSearchResultListEvent(const ::v4::org::genivi::navigation::NavigationTypes::LocationHandle& locationInputHandle, const uint16_t& totalSize, const uint16_t& windowOffset, const uint16_t& windowSize, const std::vector<::v4::org::genivi::navigation::navigationcore::LocationInput::Address>& resultListWindow) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    ::v4::org::genivi::navigation::NavigationTypes::LocationHandle,
    uint16_t,
    uint16_t,
    uint16_t,
    CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::navigationcore::LocationInput::Address>, CommonAPI::DBus::ArrayDeployment<LocationInput_::AddressDeployment_t>>
    >>::sendSignal(
            *this,
            "searchResultList",
            "uqqqaa{i(yv)}",
    locationInputHandle,
    totalSize,
    windowOffset,
    windowSize,
    CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::navigationcore::LocationInput::Address>, CommonAPI::DBus::ArrayDeployment<LocationInput_::AddressDeployment_t>>(resultListWindow, static_cast<CommonAPI::DBus::ArrayDeployment<LocationInput_::AddressDeployment_t>*>(nullptr))
    );
}
/**
 * description: searchResultListSizeChanged = This signal updates the size of the address
 *   result list
 */
void LocationInputDBusStubAdapterInternal::fireSearchResultListSizeChangedEvent(const ::v4::org::genivi::navigation::NavigationTypes::LocationHandle& locationInputHandle, const uint16_t& totalSize) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    ::v4::org::genivi::navigation::NavigationTypes::LocationHandle,
    uint16_t
    >>::sendSignal(
            *this,
            "searchResultListSizeChanged",
            "uq",
    locationInputHandle,
    totalSize
    );
}
/**
 * description: contentUpdated = This signal updates the input content data for the specified
 *   session
 */
void LocationInputDBusStubAdapterInternal::fireContentUpdatedEvent(const ::v4::org::genivi::navigation::NavigationTypes::LocationHandle& locationInputHandle, const bool& guidable, const std::vector<::v4::org::genivi::navigation::navigationcore::LocationInput::AddressAttribute>& availableSelectionCriteria, const ::v4::org::genivi::navigation::navigationcore::LocationInput::Address& address) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    ::v4::org::genivi::navigation::NavigationTypes::LocationHandle,
    bool,
    CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::navigationcore::LocationInput::AddressAttribute>, CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>>,
    CommonAPI::Deployable<::v4::org::genivi::navigation::navigationcore::LocationInput::Address, LocationInput_::AddressDeployment_t>
    >>::sendSignal(
            *this,
            "contentUpdated",
            "ubaia{i(yv)}",
    locationInputHandle,
    guidable,
    CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::navigationcore::LocationInput::AddressAttribute>, CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>>(availableSelectionCriteria, static_cast<CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>*>(nullptr)),
    CommonAPI::Deployable<::v4::org::genivi::navigation::navigationcore::LocationInput::Address, LocationInput_::AddressDeployment_t>(address, static_cast<LocationInput_::AddressDeployment_t*>(nullptr))
    );
}
/**
 * description: addressValidationResult = This signal notifies the validation result of a
 *   former ValidateAddress call
 */
void LocationInputDBusStubAdapterInternal::fireAddressValidationResultEvent(const ::v4::org::genivi::navigation::NavigationTypes::LocationHandle& locationInputHandle, const std::vector<::v4::org::genivi::navigation::navigationcore::LocationInput::Address>& validatedAddressList, const std::vector<::v4::org::genivi::navigation::navigationcore::LocationInput::ValidationStatus>& validationStatusList) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    ::v4::org::genivi::navigation::NavigationTypes::LocationHandle,
    CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::navigationcore::LocationInput::Address>, CommonAPI::DBus::ArrayDeployment<LocationInput_::AddressDeployment_t>>,
    CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::navigationcore::LocationInput::ValidationStatus>, CommonAPI::DBus::ArrayDeployment<LocationInput_::ValidationStatusDeployment_t>>
    >>::sendSignal(
            *this,
            "addressValidationResult",
            "uaa{i(yv)}aa{ii}",
    locationInputHandle,
    CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::navigationcore::LocationInput::Address>, CommonAPI::DBus::ArrayDeployment<LocationInput_::AddressDeployment_t>>(validatedAddressList, static_cast<CommonAPI::DBus::ArrayDeployment<LocationInput_::AddressDeployment_t>*>(nullptr)),
    CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::navigationcore::LocationInput::ValidationStatus>, CommonAPI::DBus::ArrayDeployment<LocationInput_::ValidationStatusDeployment_t>>(validationStatusList, static_cast<CommonAPI::DBus::ArrayDeployment<LocationInput_::ValidationStatusDeployment_t>*>(nullptr))
    );
}


const LocationInputDBusStubAdapterHelper::StubDispatcherTable& LocationInputDBusStubAdapterInternal::getStubDispatcherTable() {
    return stubDispatcherTable_;
}

const CommonAPI::DBus::StubAttributeTable& LocationInputDBusStubAdapterInternal::getStubAttributeTable() {
    return stubAttributeTable_;
}

LocationInputDBusStubAdapterInternal::LocationInputDBusStubAdapterInternal(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub)
	: CommonAPI::DBus::DBusStubAdapter(_address, _connection,false),
      LocationInputDBusStubAdapterHelper(_address, _connection, std::dynamic_pointer_cast<LocationInputStub>(_stub), false),
      stubDispatcherTable_({
            /**
             * description: getVersion = This method returns the API version implemented by the server
             *   application
             */
            { { "getVersion", "" }, &org::genivi::navigation::navigationcore::LocationInputDBusStubAdapterInternal::getVersionStubDispatcher },
            /**
             * description: createLocationInput = This method creates a new location input and retrieves a
             *   handle
             */
            { { "createLocationInput", "u" }, &org::genivi::navigation::navigationcore::LocationInputDBusStubAdapterInternal::createLocationInputStubDispatcher },
            /**
             * description: deleteLocationInput = This method deletes a location input and its associated
             *   resources
             */
            { { "deleteLocationInput", "uu" }, &org::genivi::navigation::navigationcore::LocationInputDBusStubAdapterInternal::deleteLocationInputStubDispatcher },
            /**
             * description: getSupportedAddressAttributes = This method retrieves the supported address
             *   attributes
             */
            { { "getSupportedAddressAttributes", "" }, &org::genivi::navigation::navigationcore::LocationInputDBusStubAdapterInternal::getSupportedAddressAttributesStubDispatcher },
            /**
             * description: setAddress = This method sets the address to start with for the LocationInput
             *   identified by the given handle
             */
            { { "setAddress", "uua{i(yv)}" }, &org::genivi::navigation::navigationcore::LocationInputDBusStubAdapterInternal::setAddressStubDispatcher },
            /**
             * description: setSelectionCriterion = This method sets the selection criterion for the
             *   current speller, search input and the corresponding result-lists for the
             *   current session
             */
            { { "setSelectionCriterion", "uui" }, &org::genivi::navigation::navigationcore::LocationInputDBusStubAdapterInternal::setSelectionCriterionStubDispatcher },
            /**
             * description: spell = This method sends the next spell input for the current session
             */
            { { "spell", "uusq" }, &org::genivi::navigation::navigationcore::LocationInputDBusStubAdapterInternal::spellStubDispatcher },
            /**
             * description: search = This method sends the search input for the current session
             */
            { { "search", "uusq" }, &org::genivi::navigation::navigationcore::LocationInputDBusStubAdapterInternal::searchStubDispatcher },
            /**
             * description: requestListUpdate = This method sends a request for more list elements for the
             *   current session
             */
            { { "requestListUpdate", "uuqq" }, &org::genivi::navigation::navigationcore::LocationInputDBusStubAdapterInternal::requestListUpdateStubDispatcher },
            /**
             * description: selectEntry = This method triggers selection of a result list entry by index
             */
            { { "selectEntry", "uuq" }, &org::genivi::navigation::navigationcore::LocationInputDBusStubAdapterInternal::selectEntryStubDispatcher },
            /**
             * description: getEntry = This method synchronously gets the address for the given result list
             *   entry
             */
            { { "getEntry", "uq" }, &org::genivi::navigation::navigationcore::LocationInputDBusStubAdapterInternal::getEntryStubDispatcher },
            /**
             * description: validateAddress = This method validates an address from different sources than
             *   Navigation
             */
            { { "validateAddress", "uua{i(yv)}" }, &org::genivi::navigation::navigationcore::LocationInputDBusStubAdapterInternal::validateAddressStubDispatcher },
            /**
             * description: reverseGeocode = This method transforms a geocoordinate into an address
             */
            { { "reverseGeocode", "uu(dd)" }, &org::genivi::navigation::navigationcore::LocationInputDBusStubAdapterInternal::reverseGeocodeStubDispatcher }
            }),
        stubAttributeTable_() {

    stubDispatcherTable_.insert({ { "getInterfaceVersion", "" }, &org::genivi::navigation::navigationcore::LocationInputDBusStubAdapterInternal::getLocationInputInterfaceVersionStubDispatcher });
}

bool LocationInputDBusStubAdapterInternal::hasFreedesktopProperties() {
    return false;
}

} // namespace navigationcore
} // namespace navigation
} // namespace genivi
} // namespace org
} // namespace v4