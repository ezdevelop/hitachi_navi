/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.v201608040619.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
/**
 * description: LocationInput = This interface offers functions that implement the
 *   location-input functionality of a navigation system
 */
#ifndef V4_ORG_GENIVI_NAVIGATION_NAVIGATIONCORE_Location_Input_DBUS_PROXY_HPP_
#define V4_ORG_GENIVI_NAVIGATION_NAVIGATIONCORE_Location_Input_DBUS_PROXY_HPP_

#include <v4/org/genivi/navigation/navigationcore/LocationInputProxyBase.hpp>
#include "v4/org/genivi/navigation/navigationcore/LocationInputDBusDeployment.hpp"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusAddress.hpp>
#include <CommonAPI/DBus/DBusFactory.hpp>
#include <CommonAPI/DBus/DBusProxy.hpp>
#include <CommonAPI/DBus/DBusAddressTranslator.hpp>
#include <CommonAPI/DBus/DBusEvent.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

namespace v4 {
namespace org {
namespace genivi {
namespace navigation {
namespace navigationcore {

class LocationInputDBusProxy
    : virtual public LocationInputProxyBase, 
      virtual public CommonAPI::DBus::DBusProxy {
public:
    LocationInputDBusProxy(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection);

    virtual ~LocationInputDBusProxy() { }


    virtual CurrentSelectionCriterionEvent& getCurrentSelectionCriterionEvent();
    virtual SearchStatusEvent& getSearchStatusEvent();
    virtual SpellResultEvent& getSpellResultEvent();
    virtual SearchResultListEvent& getSearchResultListEvent();
    virtual SearchResultListSizeChangedEvent& getSearchResultListSizeChangedEvent();
    virtual ContentUpdatedEvent& getContentUpdatedEvent();
    virtual AddressValidationResultEvent& getAddressValidationResultEvent();

    /**
     * description: getVersion = This method returns the API version implemented by the server
     *   application
     */
    virtual void getVersion(CommonAPI::CallStatus &_internalCallStatus, ::v4::org::genivi::CommonTypes::Version &_version, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getVersionAsync(GetVersionAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: createLocationInput = This method creates a new location input and retrieves a
     *   handle
     */
    virtual void createLocationInput(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, CommonAPI::CallStatus &_internalCallStatus, ::v4::org::genivi::navigation::NavigationTypes::LocationHandle &_locationInputHandle, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> createLocationInputAsync(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, CreateLocationInputAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: deleteLocationInput = This method deletes a location input and its associated
     *   resources
     */
    virtual void deleteLocationInput(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const ::v4::org::genivi::navigation::NavigationTypes::LocationHandle &_locationInputHandle, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> deleteLocationInputAsync(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const ::v4::org::genivi::navigation::NavigationTypes::LocationHandle &_locationInputHandle, DeleteLocationInputAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: getSupportedAddressAttributes = This method retrieves the supported address
     *   attributes
     */
    virtual void getSupportedAddressAttributes(CommonAPI::CallStatus &_internalCallStatus, LocationInput::AddressAttributeList &_addressAttributesList, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getSupportedAddressAttributesAsync(GetSupportedAddressAttributesAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: setAddress = This method sets the address to start with for the LocationInput
     *   identified by the given handle
     */
    virtual void setAddress(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const ::v4::org::genivi::navigation::NavigationTypes::LocationHandle &_locationInputHandle, const LocationInput::Address &_address, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> setAddressAsync(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const ::v4::org::genivi::navigation::NavigationTypes::LocationHandle &_locationInputHandle, const LocationInput::Address &_address, SetAddressAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: setSelectionCriterion = This method sets the selection criterion for the
     *   current speller, search input and the corresponding result-lists for the
     *   current session
     */
    virtual void setSelectionCriterion(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const ::v4::org::genivi::navigation::NavigationTypes::LocationHandle &_locationInputHandle, const LocationInput::AddressAttribute &_selectionCriterion, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> setSelectionCriterionAsync(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const ::v4::org::genivi::navigation::NavigationTypes::LocationHandle &_locationInputHandle, const LocationInput::AddressAttribute &_selectionCriterion, SetSelectionCriterionAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: spell = This method sends the next spell input for the current session
     */
    virtual void spell(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const ::v4::org::genivi::navigation::NavigationTypes::LocationHandle &_locationInputHandle, const std::string &_inputCharacter, const uint16_t &_maxWindowSize, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> spellAsync(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const ::v4::org::genivi::navigation::NavigationTypes::LocationHandle &_locationInputHandle, const std::string &_inputCharacter, const uint16_t &_maxWindowSize, SpellAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: search = This method sends the search input for the current session
     */
    virtual void search(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const ::v4::org::genivi::navigation::NavigationTypes::LocationHandle &_locationInputHandle, const std::string &_inputString, const uint16_t &_maxWindowSize, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> searchAsync(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const ::v4::org::genivi::navigation::NavigationTypes::LocationHandle &_locationInputHandle, const std::string &_inputString, const uint16_t &_maxWindowSize, SearchAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: requestListUpdate = This method sends a request for more list elements for the
     *   current session
     */
    virtual void requestListUpdate(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const ::v4::org::genivi::navigation::NavigationTypes::LocationHandle &_locationInputHandle, const uint16_t &_offset, const uint16_t &_maxWindowSize, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> requestListUpdateAsync(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const ::v4::org::genivi::navigation::NavigationTypes::LocationHandle &_locationInputHandle, const uint16_t &_offset, const uint16_t &_maxWindowSize, RequestListUpdateAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: selectEntry = This method triggers selection of a result list entry by index
     */
    virtual void selectEntry(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const ::v4::org::genivi::navigation::NavigationTypes::LocationHandle &_locationInputHandle, const uint16_t &_index, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> selectEntryAsync(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const ::v4::org::genivi::navigation::NavigationTypes::LocationHandle &_locationInputHandle, const uint16_t &_index, SelectEntryAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: getEntry = This method synchronously gets the address for the given result list
     *   entry
     */
    virtual void getEntry(const ::v4::org::genivi::navigation::NavigationTypes::LocationHandle &_locationInputHandle, const uint16_t &_index, CommonAPI::CallStatus &_internalCallStatus, LocationInput::Address &_address, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getEntryAsync(const ::v4::org::genivi::navigation::NavigationTypes::LocationHandle &_locationInputHandle, const uint16_t &_index, GetEntryAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: validateAddress = This method validates an address from different sources than
     *   Navigation
     */
    virtual void validateAddress(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const ::v4::org::genivi::navigation::NavigationTypes::LocationHandle &_locationInputHandle, const LocationInput::Address &_inputAddress, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> validateAddressAsync(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const ::v4::org::genivi::navigation::NavigationTypes::LocationHandle &_locationInputHandle, const LocationInput::Address &_inputAddress, ValidateAddressAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: reverseGeocode = This method transforms a geocoordinate into an address
     */
    virtual void reverseGeocode(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const ::v4::org::genivi::navigation::NavigationTypes::LocationHandle &_locationInputHandle, const ::v4::org::genivi::navigation::NavigationTypes::Coordinate2D &_coordinate, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> reverseGeocodeAsync(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const ::v4::org::genivi::navigation::NavigationTypes::LocationHandle &_locationInputHandle, const ::v4::org::genivi::navigation::NavigationTypes::Coordinate2D &_coordinate, ReverseGeocodeAsyncCallback _callback, const CommonAPI::CallInfo *_info);


    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

private:
   

    CommonAPI::DBus::DBusEvent<CurrentSelectionCriterionEvent, CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::LocationHandle, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<::v4::org::genivi::navigation::navigationcore::LocationInput::AddressAttribute, CommonAPI::EmptyDeployment>> currentSelectionCriterion_;
    CommonAPI::DBus::DBusEvent<SearchStatusEvent, CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::LocationHandle, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<::v4::org::genivi::navigation::navigationcore::LocationInput::SearchStatus, CommonAPI::EmptyDeployment>> searchStatus_;
    CommonAPI::DBus::DBusEvent<SpellResultEvent, CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::LocationHandle, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment>, CommonAPI::Deployable<bool, CommonAPI::EmptyDeployment>> spellResult_;
    CommonAPI::DBus::DBusEvent<SearchResultListEvent, CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::LocationHandle, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<uint16_t, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<uint16_t, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<uint16_t, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::navigationcore::LocationInput::Address>, CommonAPI::DBus::ArrayDeployment<LocationInput_::AddressDeployment_t>>> searchResultList_;
    CommonAPI::DBus::DBusEvent<SearchResultListSizeChangedEvent, CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::LocationHandle, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<uint16_t, CommonAPI::EmptyDeployment>> searchResultListSizeChanged_;
    CommonAPI::DBus::DBusEvent<ContentUpdatedEvent, CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::LocationHandle, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<bool, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::navigationcore::LocationInput::AddressAttribute>, CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>>, CommonAPI::Deployable<::v4::org::genivi::navigation::navigationcore::LocationInput::Address, LocationInput_::AddressDeployment_t>> contentUpdated_;
    CommonAPI::DBus::DBusEvent<AddressValidationResultEvent, CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::LocationHandle, CommonAPI::EmptyDeployment>, CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::navigationcore::LocationInput::Address>, CommonAPI::DBus::ArrayDeployment<LocationInput_::AddressDeployment_t>>, CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::navigationcore::LocationInput::ValidationStatus>, CommonAPI::DBus::ArrayDeployment<LocationInput_::ValidationStatusDeployment_t>>> addressValidationResult_;

};

} // namespace navigationcore
} // namespace navigation
} // namespace genivi
} // namespace org
} // namespace v4

#endif // V4_ORG_GENIVI_NAVIGATION_NAVIGATIONCORE_Location_Input_DBUS_PROXY_HPP_

