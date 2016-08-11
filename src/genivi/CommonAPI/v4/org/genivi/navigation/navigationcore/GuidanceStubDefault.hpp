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
#ifndef V4_ORG_GENIVI_NAVIGATION_NAVIGATIONCORE_Guidance_STUB_DEFAULT_HPP_
#define V4_ORG_GENIVI_NAVIGATION_NAVIGATIONCORE_Guidance_STUB_DEFAULT_HPP_


#include <v4/org/genivi/navigation/navigationcore/GuidanceStub.hpp>
#include <sstream>

namespace v4 {
namespace org {
namespace genivi {
namespace navigation {
namespace navigationcore {

/**
 * Provides a default implementation for GuidanceStubRemoteEvent and
 * GuidanceStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class GuidanceStubDefault
    : public virtual GuidanceStub {
public:
    GuidanceStubDefault();

    GuidanceStubRemoteEvent* initStubAdapter(const std::shared_ptr<GuidanceStubAdapter> &_adapter);

    const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client);


    /**
     * description: getVersion = This method returns the API version implemented by the server
     *   application
     */
    virtual void getVersion(const std::shared_ptr<CommonAPI::ClientId> _client, getVersionReply_t _reply);
    /**
     * description: startGuidance = This method starts the guidance for a given route
     */
    virtual void startGuidance(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _routeHandle, startGuidanceReply_t _reply);
    /**
     * description: stopGuidance = This method stops the guidance
     */
    virtual void stopGuidance(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, stopGuidanceReply_t _reply);
    /**
     * description: setVoiceGuidance = This method switch on/off the voice guidance
     */
    virtual void setVoiceGuidance(const std::shared_ptr<CommonAPI::ClientId> _client, bool _activate, std::string _voice, setVoiceGuidanceReply_t _reply);
    /**
     * description: getGuidanceDetails = This method retrieves guidance information
     */
    virtual void getGuidanceDetails(const std::shared_ptr<CommonAPI::ClientId> _client, getGuidanceDetailsReply_t _reply);
    /**
     * description: playVoiceManeuver = This method plays or repeats the last voice guidance
     */
    virtual void playVoiceManeuver(const std::shared_ptr<CommonAPI::ClientId> _client, playVoiceManeuverReply_t _reply);
    /**
     * description: getWaypointInformation = This method retrieves the information on the remaining
     *   way points of the route. A point can be the final destination as well as a
     *   stage defined by the user. The returned waypoints are ordered by their
     *   'number'.
     */
    virtual void getWaypointInformation(const std::shared_ptr<CommonAPI::ClientId> _client, uint16_t _requestedNumberOfWaypoints, getWaypointInformationReply_t _reply);
    /**
     * description: This method retrieves the information on the final destination
     */
    virtual void getDestinationInformation(const std::shared_ptr<CommonAPI::ClientId> _client, getDestinationInformationReply_t _reply);
    /**
     * description: getManeuversList = This method retrieves the list of next maneuvers
     */
    virtual void getManeuversList(const std::shared_ptr<CommonAPI::ClientId> _client, uint16_t _requestedNumberOfManeuvers, uint32_t _maneuverOffset, getManeuversListReply_t _reply);
    /**
     * description: setRouteCalculationMode = This method configures the way the navigation
     *   application wants the navigation core to behave of reroute trigger
     */
    virtual void setRouteCalculationMode(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, Guidance::CalculationMode _routeCalculationMode, setRouteCalculationModeReply_t _reply);
    /**
     * description: skipNextManeuver = This method allows to jump behind the current maneuver
     */
    virtual void skipNextManeuver(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, skipNextManeuverReply_t _reply);
    /**
     * description: getGuidanceStatus = This method retrieves the guidance status
     */
    virtual void getGuidanceStatus(const std::shared_ptr<CommonAPI::ClientId> _client, getGuidanceStatusReply_t _reply);
    /**
     * description: setVoiceGuidanceSettings = This method sets the voice guidance settings
     */
    virtual void setVoiceGuidanceSettings(const std::shared_ptr<CommonAPI::ClientId> _client, Guidance::PromptMode _promptMode, setVoiceGuidanceSettingsReply_t _reply);
    /**
     * description: getVoiceGuidanceSettings = This method returns the used voice guidance settings
     */
    virtual void getVoiceGuidanceSettings(const std::shared_ptr<CommonAPI::ClientId> _client, getVoiceGuidanceSettingsReply_t _reply);

/**
 * description: vehicleLeftTheRoadNetwork = This signal is emitted when the vehicle exits from
 *   the road network
 */
virtual void fireVehicleLeftTheRoadNetworkEvent();
/**
 * description: guidanceStatusChanged = This signal is emitted when the guidance status changes
 */
virtual void fireGuidanceStatusChangedEvent(const ::v4::org::genivi::navigation::navigationcore::Guidance::GuidanceStatus &_guidanceStatus, const ::v4::org::genivi::navigation::NavigationTypes::Handle &_routeHandle);
/**
 * description: waypointReached = This signal is emitted when the destination is reached
 */
virtual void fireWaypointReachedEvent(const bool &_isDestination);
/**
 * description: This signal is emitted each time a maneuver event is going
 */
virtual void fireManeuverChangedEvent(const ::v4::org::genivi::navigation::navigationcore::Guidance::ManeuverPhase &_maneuver);
/**
 * description: positionOnRouteChanged = This signal is emitted when the position on the route
 *   changes
 */
virtual void firePositionOnRouteChangedEvent(const uint32_t &_offsetOnRoute);
/**
 * description: vehicleLeftTheRoute = This signal is emitted when the vehicle has left the route
 */
virtual void fireVehicleLeftTheRouteEvent();
/**
 * description: positionToRouteChanged = This signal is emitted when the vehicle is
 *   off-the-road network and either the heading or the distance (or both) to the
 *   closest point on the active route changes
 */
virtual void firePositionToRouteChangedEvent(const uint32_t &_distance, const int32_t &_direction);
/**
 * description: activeRouteChanged = This signal is emitted when the active route changes
 */
virtual void fireActiveRouteChangedEvent(const ::v4::org::genivi::navigation::navigationcore::Guidance::RouteChangedCause &_changeCause);


protected:
    class RemoteEventHandler: public virtual GuidanceStubRemoteEvent {
    public:
        RemoteEventHandler(GuidanceStubDefault *_defaultStub);


    private:
        GuidanceStubDefault *defaultStub_;
    };
private:
    GuidanceStubDefault::RemoteEventHandler remoteEventHandler_;


    CommonAPI::Version interfaceVersion_;
};

} // namespace navigationcore
} // namespace navigation
} // namespace genivi
} // namespace org
} // namespace v4


// Compatibility
namespace v4_0 = v4;

#endif // V4_ORG_GENIVI_NAVIGATION_NAVIGATIONCORE_Guidance_STUB_DEFAULT