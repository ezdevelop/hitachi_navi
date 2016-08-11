/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.v201608040617.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
/**
 * description: Guidance = This interface offers functions that implement the route-guidance
 *   functionality of a navigation system
 */
#ifndef V4_ORG_GENIVI_NAVIGATION_NAVIGATIONCORE_Guidance_PROXY_HPP_
#define V4_ORG_GENIVI_NAVIGATION_NAVIGATIONCORE_Guidance_PROXY_HPP_

#include <v4/org/genivi/navigation/navigationcore/GuidanceProxyBase.hpp>


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif


#undef COMMONAPI_INTERNAL_COMPILATION

namespace v4 {
namespace org {
namespace genivi {
namespace navigation {
namespace navigationcore {

template <typename ... _AttributeExtensions>
class GuidanceProxy
    : virtual public Guidance, 
      virtual public GuidanceProxyBase,
      virtual public _AttributeExtensions... {
public:
    GuidanceProxy(std::shared_ptr<CommonAPI::Proxy> delegate);
    ~GuidanceProxy();

    typedef Guidance InterfaceType;



    /**
     * description: vehicleLeftTheRoadNetwork = This signal is emitted when the vehicle exits from
     *   the road network
     */
    /**
     * Returns the wrapper class that provides access to the broadcast vehicleLeftTheRoadNetwork.
     */
    virtual VehicleLeftTheRoadNetworkEvent& getVehicleLeftTheRoadNetworkEvent() {
        return delegate_->getVehicleLeftTheRoadNetworkEvent();
    }
    /**
     * description: guidanceStatusChanged = This signal is emitted when the guidance status changes
     */
    /**
     * Returns the wrapper class that provides access to the broadcast guidanceStatusChanged.
     */
    virtual GuidanceStatusChangedEvent& getGuidanceStatusChangedEvent() {
        return delegate_->getGuidanceStatusChangedEvent();
    }
    /**
     * description: waypointReached = This signal is emitted when the destination is reached
     */
    /**
     * Returns the wrapper class that provides access to the broadcast waypointReached.
     */
    virtual WaypointReachedEvent& getWaypointReachedEvent() {
        return delegate_->getWaypointReachedEvent();
    }
    /**
     * description: This signal is emitted each time a maneuver event is going
     */
    /**
     * Returns the wrapper class that provides access to the broadcast maneuverChanged.
     */
    virtual ManeuverChangedEvent& getManeuverChangedEvent() {
        return delegate_->getManeuverChangedEvent();
    }
    /**
     * description: positionOnRouteChanged = This signal is emitted when the position on the route
     *   changes
     */
    /**
     * Returns the wrapper class that provides access to the broadcast positionOnRouteChanged.
     */
    virtual PositionOnRouteChangedEvent& getPositionOnRouteChangedEvent() {
        return delegate_->getPositionOnRouteChangedEvent();
    }
    /**
     * description: vehicleLeftTheRoute = This signal is emitted when the vehicle has left the route
     */
    /**
     * Returns the wrapper class that provides access to the broadcast vehicleLeftTheRoute.
     */
    virtual VehicleLeftTheRouteEvent& getVehicleLeftTheRouteEvent() {
        return delegate_->getVehicleLeftTheRouteEvent();
    }
    /**
     * description: positionToRouteChanged = This signal is emitted when the vehicle is
     *   off-the-road network and either the heading or the distance (or both) to the
     *   closest point on the active route changes
     */
    /**
     * Returns the wrapper class that provides access to the broadcast positionToRouteChanged.
     */
    virtual PositionToRouteChangedEvent& getPositionToRouteChangedEvent() {
        return delegate_->getPositionToRouteChangedEvent();
    }
    /**
     * description: activeRouteChanged = This signal is emitted when the active route changes
     */
    /**
     * Returns the wrapper class that provides access to the broadcast activeRouteChanged.
     */
    virtual ActiveRouteChangedEvent& getActiveRouteChangedEvent() {
        return delegate_->getActiveRouteChangedEvent();
    }

    /**
     * description: getVersion = This method returns the API version implemented by the server
     *   application
     * Calls getVersion with synchronous semantics.
     * 
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getVersion(CommonAPI::CallStatus &_internalCallStatus, ::v4::org::genivi::CommonTypes::Version &_version, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getVersion with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getVersionAsync(GetVersionAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: startGuidance = This method starts the guidance for a given route
     * Calls startGuidance with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void startGuidance(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const ::v4::org::genivi::navigation::NavigationTypes::Handle &_routeHandle, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls startGuidance with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> startGuidanceAsync(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const ::v4::org::genivi::navigation::NavigationTypes::Handle &_routeHandle, StartGuidanceAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: stopGuidance = This method stops the guidance
     * Calls stopGuidance with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void stopGuidance(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls stopGuidance with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> stopGuidanceAsync(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, StopGuidanceAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: setVoiceGuidance = This method switch on/off the voice guidance
     * Calls setVoiceGuidance with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void setVoiceGuidance(const bool &_activate, const std::string &_voice, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setVoiceGuidance with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> setVoiceGuidanceAsync(const bool &_activate, const std::string &_voice, SetVoiceGuidanceAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: getGuidanceDetails = This method retrieves guidance information
     * Calls getGuidanceDetails with synchronous semantics.
     * 
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getGuidanceDetails(CommonAPI::CallStatus &_internalCallStatus, bool &_voiceGuidance, bool &_vehicleOnTheRoad, bool &_isDestinationReached, Guidance::ManeuverPhase &_maneuver, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getGuidanceDetails with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getGuidanceDetailsAsync(GetGuidanceDetailsAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: playVoiceManeuver = This method plays or repeats the last voice guidance
     * Calls playVoiceManeuver with synchronous semantics.
     * 
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void playVoiceManeuver(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls playVoiceManeuver with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> playVoiceManeuverAsync(PlayVoiceManeuverAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: getWaypointInformation = This method retrieves the information on the remaining
     *   way points of the route. A point can be the final destination as well as a
     *   stage defined by the user. The returned waypoints are ordered by their
     *   'number'.
     * Calls getWaypointInformation with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getWaypointInformation(const uint16_t &_requestedNumberOfWaypoints, CommonAPI::CallStatus &_internalCallStatus, uint16_t &_numberOfWaypoints, std::vector<Guidance::WaypointStruct> &_waypointsList, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getWaypointInformation with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getWaypointInformationAsync(const uint16_t &_requestedNumberOfWaypoints, GetWaypointInformationAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: This method retrieves the information on the final destination
     * Calls getDestinationInformation with synchronous semantics.
     * 
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getDestinationInformation(CommonAPI::CallStatus &_internalCallStatus, uint32_t &_offset, uint32_t &_travelTime, int32_t &_direction, Guidance::Side &_side, int16_t &_timeZone, int16_t &_daylightSavingTime, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getDestinationInformation with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getDestinationInformationAsync(GetDestinationInformationAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: getManeuversList = This method retrieves the list of next maneuvers
     * Calls getManeuversList with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getManeuversList(const uint16_t &_requestedNumberOfManeuvers, const uint32_t &_maneuverOffset, CommonAPI::CallStatus &_internalCallStatus, uint16_t &_numberOfManeuvers, std::vector<Guidance::Maneuver> &_maneuversList, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getManeuversList with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getManeuversListAsync(const uint16_t &_requestedNumberOfManeuvers, const uint32_t &_maneuverOffset, GetManeuversListAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: setRouteCalculationMode = This method configures the way the navigation
     *   application wants the navigation core to behave of reroute trigger
     * Calls setRouteCalculationMode with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void setRouteCalculationMode(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const Guidance::CalculationMode &_routeCalculationMode, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setRouteCalculationMode with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> setRouteCalculationModeAsync(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const Guidance::CalculationMode &_routeCalculationMode, SetRouteCalculationModeAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: skipNextManeuver = This method allows to jump behind the current maneuver
     * Calls skipNextManeuver with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void skipNextManeuver(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls skipNextManeuver with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> skipNextManeuverAsync(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, SkipNextManeuverAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: getGuidanceStatus = This method retrieves the guidance status
     * Calls getGuidanceStatus with synchronous semantics.
     * 
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getGuidanceStatus(CommonAPI::CallStatus &_internalCallStatus, Guidance::GuidanceStatus &_guidanceStatus, ::v4::org::genivi::navigation::NavigationTypes::Handle &_routeHandle, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getGuidanceStatus with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getGuidanceStatusAsync(GetGuidanceStatusAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: setVoiceGuidanceSettings = This method sets the voice guidance settings
     * Calls setVoiceGuidanceSettings with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void setVoiceGuidanceSettings(const Guidance::PromptMode &_promptMode, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setVoiceGuidanceSettings with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> setVoiceGuidanceSettingsAsync(const Guidance::PromptMode &_promptMode, SetVoiceGuidanceSettingsAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: getVoiceGuidanceSettings = This method returns the used voice guidance settings
     * Calls getVoiceGuidanceSettings with synchronous semantics.
     * 
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getVoiceGuidanceSettings(CommonAPI::CallStatus &_internalCallStatus, Guidance::PromptMode &_promptMode, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getVoiceGuidanceSettings with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getVoiceGuidanceSettingsAsync(GetVoiceGuidanceSettingsAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);


    /**
     * Returns the CommonAPI address of the remote partner this proxy communicates with.
     */
    virtual const CommonAPI::Address &getAddress() const;

    /**
     * Returns true if the remote partner for this proxy is currently known to be available.
     */
    virtual bool isAvailable() const;

    /**
     * Returns true if the remote partner for this proxy is available.
     */
    virtual bool isAvailableBlocking() const;

    /**
     * Returns the wrapper class that is used to (de-)register for notifications about
     * the availability of the remote partner of this proxy.
     */
    virtual CommonAPI::ProxyStatusEvent& getProxyStatusEvent();

    /**
     * Returns the wrapper class that is used to access version information of the remote
     * partner of this proxy.
     */
    virtual CommonAPI::InterfaceVersionAttribute& getInterfaceVersionAttribute();

 private:
    std::shared_ptr<GuidanceProxyBase> delegate_;
};

typedef GuidanceProxy<> GuidanceProxyDefault;


//
// GuidanceProxy Implementation
//
template <typename ... _AttributeExtensions>
GuidanceProxy<_AttributeExtensions...>::GuidanceProxy(std::shared_ptr<CommonAPI::Proxy> delegate):
        _AttributeExtensions(*(std::dynamic_pointer_cast<GuidanceProxyBase>(delegate)))...,
        delegate_(std::dynamic_pointer_cast<GuidanceProxyBase>(delegate)) {
}

template <typename ... _AttributeExtensions>
GuidanceProxy<_AttributeExtensions...>::~GuidanceProxy() {
}

/**
 * description: getVersion = This method returns the API version implemented by the server
 *   application
 */
template <typename ... _AttributeExtensions>
void GuidanceProxy<_AttributeExtensions...>::getVersion(CommonAPI::CallStatus &_internalCallStatus, ::v4::org::genivi::CommonTypes::Version &_version, const CommonAPI::CallInfo *_info) {
    delegate_->getVersion(_internalCallStatus, _version, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> GuidanceProxy<_AttributeExtensions...>::getVersionAsync(GetVersionAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getVersionAsync(_callback, _info);
}
/**
 * description: startGuidance = This method starts the guidance for a given route
 */
template <typename ... _AttributeExtensions>
void GuidanceProxy<_AttributeExtensions...>::startGuidance(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const ::v4::org::genivi::navigation::NavigationTypes::Handle &_routeHandle, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
    delegate_->startGuidance(_sessionHandle, _routeHandle, _internalCallStatus, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> GuidanceProxy<_AttributeExtensions...>::startGuidanceAsync(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const ::v4::org::genivi::navigation::NavigationTypes::Handle &_routeHandle, StartGuidanceAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->startGuidanceAsync(_sessionHandle, _routeHandle, _callback, _info);
}
/**
 * description: stopGuidance = This method stops the guidance
 */
template <typename ... _AttributeExtensions>
void GuidanceProxy<_AttributeExtensions...>::stopGuidance(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
    delegate_->stopGuidance(_sessionHandle, _internalCallStatus, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> GuidanceProxy<_AttributeExtensions...>::stopGuidanceAsync(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, StopGuidanceAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->stopGuidanceAsync(_sessionHandle, _callback, _info);
}
/**
 * description: setVoiceGuidance = This method switch on/off the voice guidance
 */
template <typename ... _AttributeExtensions>
void GuidanceProxy<_AttributeExtensions...>::setVoiceGuidance(const bool &_activate, const std::string &_voice, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
    delegate_->setVoiceGuidance(_activate, _voice, _internalCallStatus, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> GuidanceProxy<_AttributeExtensions...>::setVoiceGuidanceAsync(const bool &_activate, const std::string &_voice, SetVoiceGuidanceAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->setVoiceGuidanceAsync(_activate, _voice, _callback, _info);
}
/**
 * description: getGuidanceDetails = This method retrieves guidance information
 */
template <typename ... _AttributeExtensions>
void GuidanceProxy<_AttributeExtensions...>::getGuidanceDetails(CommonAPI::CallStatus &_internalCallStatus, bool &_voiceGuidance, bool &_vehicleOnTheRoad, bool &_isDestinationReached, Guidance::ManeuverPhase &_maneuver, const CommonAPI::CallInfo *_info) {
    delegate_->getGuidanceDetails(_internalCallStatus, _voiceGuidance, _vehicleOnTheRoad, _isDestinationReached, _maneuver, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> GuidanceProxy<_AttributeExtensions...>::getGuidanceDetailsAsync(GetGuidanceDetailsAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getGuidanceDetailsAsync(_callback, _info);
}
/**
 * description: playVoiceManeuver = This method plays or repeats the last voice guidance
 */
template <typename ... _AttributeExtensions>
void GuidanceProxy<_AttributeExtensions...>::playVoiceManeuver(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
    delegate_->playVoiceManeuver(_internalCallStatus, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> GuidanceProxy<_AttributeExtensions...>::playVoiceManeuverAsync(PlayVoiceManeuverAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->playVoiceManeuverAsync(_callback, _info);
}
/**
 * description: getWaypointInformation = This method retrieves the information on the remaining
 *   way points of the route. A point can be the final destination as well as a
 *   stage defined by the user. The returned waypoints are ordered by their
 *   'number'.
 */
template <typename ... _AttributeExtensions>
void GuidanceProxy<_AttributeExtensions...>::getWaypointInformation(const uint16_t &_requestedNumberOfWaypoints, CommonAPI::CallStatus &_internalCallStatus, uint16_t &_numberOfWaypoints, std::vector<Guidance::WaypointStruct> &_waypointsList, const CommonAPI::CallInfo *_info) {
    delegate_->getWaypointInformation(_requestedNumberOfWaypoints, _internalCallStatus, _numberOfWaypoints, _waypointsList, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> GuidanceProxy<_AttributeExtensions...>::getWaypointInformationAsync(const uint16_t &_requestedNumberOfWaypoints, GetWaypointInformationAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getWaypointInformationAsync(_requestedNumberOfWaypoints, _callback, _info);
}
/**
 * description: This method retrieves the information on the final destination
 */
template <typename ... _AttributeExtensions>
void GuidanceProxy<_AttributeExtensions...>::getDestinationInformation(CommonAPI::CallStatus &_internalCallStatus, uint32_t &_offset, uint32_t &_travelTime, int32_t &_direction, Guidance::Side &_side, int16_t &_timeZone, int16_t &_daylightSavingTime, const CommonAPI::CallInfo *_info) {
    delegate_->getDestinationInformation(_internalCallStatus, _offset, _travelTime, _direction, _side, _timeZone, _daylightSavingTime, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> GuidanceProxy<_AttributeExtensions...>::getDestinationInformationAsync(GetDestinationInformationAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getDestinationInformationAsync(_callback, _info);
}
/**
 * description: getManeuversList = This method retrieves the list of next maneuvers
 */
template <typename ... _AttributeExtensions>
void GuidanceProxy<_AttributeExtensions...>::getManeuversList(const uint16_t &_requestedNumberOfManeuvers, const uint32_t &_maneuverOffset, CommonAPI::CallStatus &_internalCallStatus, uint16_t &_numberOfManeuvers, std::vector<Guidance::Maneuver> &_maneuversList, const CommonAPI::CallInfo *_info) {
    delegate_->getManeuversList(_requestedNumberOfManeuvers, _maneuverOffset, _internalCallStatus, _numberOfManeuvers, _maneuversList, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> GuidanceProxy<_AttributeExtensions...>::getManeuversListAsync(const uint16_t &_requestedNumberOfManeuvers, const uint32_t &_maneuverOffset, GetManeuversListAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getManeuversListAsync(_requestedNumberOfManeuvers, _maneuverOffset, _callback, _info);
}
/**
 * description: setRouteCalculationMode = This method configures the way the navigation
 *   application wants the navigation core to behave of reroute trigger
 */
template <typename ... _AttributeExtensions>
void GuidanceProxy<_AttributeExtensions...>::setRouteCalculationMode(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const Guidance::CalculationMode &_routeCalculationMode, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
    if (!_routeCalculationMode.validate()) {
        _internalCallStatus = CommonAPI::CallStatus::INVALID_VALUE;
        return;
    }
    delegate_->setRouteCalculationMode(_sessionHandle, _routeCalculationMode, _internalCallStatus, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> GuidanceProxy<_AttributeExtensions...>::setRouteCalculationModeAsync(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const Guidance::CalculationMode &_routeCalculationMode, SetRouteCalculationModeAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    if (!_routeCalculationMode.validate()) {
        _callback(CommonAPI::CallStatus::INVALID_VALUE);
        std::promise<CommonAPI::CallStatus> promise;
        promise.set_value(CommonAPI::CallStatus::INVALID_VALUE);
        return promise.get_future();
    }
    return delegate_->setRouteCalculationModeAsync(_sessionHandle, _routeCalculationMode, _callback, _info);
}
/**
 * description: skipNextManeuver = This method allows to jump behind the current maneuver
 */
template <typename ... _AttributeExtensions>
void GuidanceProxy<_AttributeExtensions...>::skipNextManeuver(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
    delegate_->skipNextManeuver(_sessionHandle, _internalCallStatus, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> GuidanceProxy<_AttributeExtensions...>::skipNextManeuverAsync(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, SkipNextManeuverAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->skipNextManeuverAsync(_sessionHandle, _callback, _info);
}
/**
 * description: getGuidanceStatus = This method retrieves the guidance status
 */
template <typename ... _AttributeExtensions>
void GuidanceProxy<_AttributeExtensions...>::getGuidanceStatus(CommonAPI::CallStatus &_internalCallStatus, Guidance::GuidanceStatus &_guidanceStatus, ::v4::org::genivi::navigation::NavigationTypes::Handle &_routeHandle, const CommonAPI::CallInfo *_info) {
    delegate_->getGuidanceStatus(_internalCallStatus, _guidanceStatus, _routeHandle, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> GuidanceProxy<_AttributeExtensions...>::getGuidanceStatusAsync(GetGuidanceStatusAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getGuidanceStatusAsync(_callback, _info);
}
/**
 * description: setVoiceGuidanceSettings = This method sets the voice guidance settings
 */
template <typename ... _AttributeExtensions>
void GuidanceProxy<_AttributeExtensions...>::setVoiceGuidanceSettings(const Guidance::PromptMode &_promptMode, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
    if (!_promptMode.validate()) {
        _internalCallStatus = CommonAPI::CallStatus::INVALID_VALUE;
        return;
    }
    delegate_->setVoiceGuidanceSettings(_promptMode, _internalCallStatus, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> GuidanceProxy<_AttributeExtensions...>::setVoiceGuidanceSettingsAsync(const Guidance::PromptMode &_promptMode, SetVoiceGuidanceSettingsAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    if (!_promptMode.validate()) {
        _callback(CommonAPI::CallStatus::INVALID_VALUE);
        std::promise<CommonAPI::CallStatus> promise;
        promise.set_value(CommonAPI::CallStatus::INVALID_VALUE);
        return promise.get_future();
    }
    return delegate_->setVoiceGuidanceSettingsAsync(_promptMode, _callback, _info);
}
/**
 * description: getVoiceGuidanceSettings = This method returns the used voice guidance settings
 */
template <typename ... _AttributeExtensions>
void GuidanceProxy<_AttributeExtensions...>::getVoiceGuidanceSettings(CommonAPI::CallStatus &_internalCallStatus, Guidance::PromptMode &_promptMode, const CommonAPI::CallInfo *_info) {
    delegate_->getVoiceGuidanceSettings(_internalCallStatus, _promptMode, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> GuidanceProxy<_AttributeExtensions...>::getVoiceGuidanceSettingsAsync(GetVoiceGuidanceSettingsAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getVoiceGuidanceSettingsAsync(_callback, _info);
}

template <typename ... _AttributeExtensions>
const CommonAPI::Address &GuidanceProxy<_AttributeExtensions...>::getAddress() const {
    return delegate_->getAddress();
}

template <typename ... _AttributeExtensions>
bool GuidanceProxy<_AttributeExtensions...>::isAvailable() const {
    return delegate_->isAvailable();
}

template <typename ... _AttributeExtensions>
bool GuidanceProxy<_AttributeExtensions...>::isAvailableBlocking() const {
    return delegate_->isAvailableBlocking();
}

template <typename ... _AttributeExtensions>
CommonAPI::ProxyStatusEvent& GuidanceProxy<_AttributeExtensions...>::getProxyStatusEvent() {
    return delegate_->getProxyStatusEvent();
}

template <typename ... _AttributeExtensions>
CommonAPI::InterfaceVersionAttribute& GuidanceProxy<_AttributeExtensions...>::getInterfaceVersionAttribute() {
    return delegate_->getInterfaceVersionAttribute();
}


} // namespace navigationcore
} // namespace navigation
} // namespace genivi
} // namespace org
} // namespace v4



// Compatibility
namespace v4_0 = v4;

#endif // V4_ORG_GENIVI_NAVIGATION_NAVIGATIONCORE_Guidance_PROXY_HPP_
