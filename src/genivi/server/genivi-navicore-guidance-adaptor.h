
/*
 *	This file was automatically generated by dbusxx-xml2cpp; DO NOT EDIT!
 */

#ifndef __dbusxx__genivi_navicore_guidance_adaptor_h__ADAPTOR_MARSHAL_H
#define __dbusxx__genivi_navicore_guidance_adaptor_h__ADAPTOR_MARSHAL_H

#include <dbus-c++/dbus.h>
#include <cassert>

namespace org {
namespace genivi {
namespace navigationcore {

class Guidance_adaptor
: public ::DBus::InterfaceAdaptor
{
public:

    Guidance_adaptor()
    : ::DBus::InterfaceAdaptor("org.genivi.navigationcore.Guidance")
    {
        register_method(Guidance_adaptor, GetVersion, _GetVersion_stub);
        register_method(Guidance_adaptor, StartGuidance, _StartGuidance_stub);
        register_method(Guidance_adaptor, StopGuidance, _StopGuidance_stub);
        register_method(Guidance_adaptor, SetVoiceGuidance, _SetVoiceGuidance_stub);
        register_method(Guidance_adaptor, GetGuidanceDetails, _GetGuidanceDetails_stub);
        register_method(Guidance_adaptor, PlayVoiceManeuver, _PlayVoiceManeuver_stub);
        register_method(Guidance_adaptor, GetWaypointInformation, _GetWaypointInformation_stub);
        register_method(Guidance_adaptor, GetDestinationInformation, _GetDestinationInformation_stub);
        register_method(Guidance_adaptor, GetManeuversList, _GetManeuversList_stub);
        register_method(Guidance_adaptor, SetRouteCalculationMode, _SetRouteCalculationMode_stub);
        register_method(Guidance_adaptor, SkipNextManeuver, _SkipNextManeuver_stub);
        register_method(Guidance_adaptor, GetGuidanceStatus, _GetGuidanceStatus_stub);
        register_method(Guidance_adaptor, SetVoiceGuidanceSettings, _SetVoiceGuidanceSettings_stub);
        register_method(Guidance_adaptor, GetVoiceGuidanceSettings, _GetVoiceGuidanceSettings_stub);
    }

    ::DBus::IntrospectedInterface *introspect() const 
    {
        static ::DBus::IntrospectedArgument GetVersion_args[] = 
        {
            { "version", "(qqqs)", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument StartGuidance_args[] = 
        {
            { "sessionHandle", "u", true },
            { "routeHandle", "u", true },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument StopGuidance_args[] = 
        {
            { "sessionHandle", "u", true },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument SetVoiceGuidance_args[] = 
        {
            { "activate", "b", true },
            { "voice", "s", true },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument GetGuidanceDetails_args[] = 
        {
            { "voiceGuidance", "b", false },
            { "vehicleOnTheRoad", "b", false },
            { "isDestinationReached", "b", false },
            { "maneuver", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument PlayVoiceManeuver_args[] = 
        {
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument GetWaypointInformation_args[] = 
        {
            { "requestedNumberOfWaypoints", "q", true },
            { "numberOfWaypoints", "q", false },
            { "waypointsList", "a(uuiinnbq)", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument GetDestinationInformation_args[] = 
        {
            { "offset", "u", false },
            { "travelTime", "u", false },
            { "direction", "i", false },
            { "side", "i", false },
            { "timeZone", "n", false },
            { "daylightSavingTime", "n", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument GetManeuversList_args[] = 
        {
            { "requestedNumberOfManeuvers", "q", true },
            { "maneuverOffset", "u", true },
            { "numberOfManeuvers", "q", false },
            { "maneuversList", "a(ssqiua(uuiia{i(yv)}))", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument SetRouteCalculationMode_args[] = 
        {
            { "sessionHandle", "u", true },
            { "routeCalculationMode", "i", true },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument SkipNextManeuver_args[] = 
        {
            { "sessionHandle", "u", true },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument GetGuidanceStatus_args[] = 
        {
            { "guidanceStatus", "i", false },
            { "routeHandle", "u", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument SetVoiceGuidanceSettings_args[] = 
        {
            { "promptMode", "i", true },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument GetVoiceGuidanceSettings_args[] = 
        {
            { "promptMode", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument VehicleLeftTheRoadNetwork_args[] = 
        {
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument GuidanceStatusChanged_args[] = 
        {
            { "guidanceStatus", "i", false },
            { "routeHandle", "u", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument WaypointReached_args[] = 
        {
            { "isDestination", "b", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument ManeuverChanged_args[] = 
        {
            { "maneuver", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument PositionOnRouteChanged_args[] = 
        {
            { "offsetOnRoute", "u", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument VehicleLeftTheRoute_args[] = 
        {
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument PositionToRouteChanged_args[] = 
        {
            { "distance", "u", false },
            { "direction", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument ActiveRouteChanged_args[] = 
        {
            { "changeCause", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedMethod Guidance_adaptor_methods[] = 
        {
            { "GetVersion", GetVersion_args },
            { "StartGuidance", StartGuidance_args },
            { "StopGuidance", StopGuidance_args },
            { "SetVoiceGuidance", SetVoiceGuidance_args },
            { "GetGuidanceDetails", GetGuidanceDetails_args },
            { "PlayVoiceManeuver", PlayVoiceManeuver_args },
            { "GetWaypointInformation", GetWaypointInformation_args },
            { "GetDestinationInformation", GetDestinationInformation_args },
            { "GetManeuversList", GetManeuversList_args },
            { "SetRouteCalculationMode", SetRouteCalculationMode_args },
            { "SkipNextManeuver", SkipNextManeuver_args },
            { "GetGuidanceStatus", GetGuidanceStatus_args },
            { "SetVoiceGuidanceSettings", SetVoiceGuidanceSettings_args },
            { "GetVoiceGuidanceSettings", GetVoiceGuidanceSettings_args },
            { 0, 0 }
        };
        static ::DBus::IntrospectedMethod Guidance_adaptor_signals[] = 
        {
            { "VehicleLeftTheRoadNetwork", VehicleLeftTheRoadNetwork_args },
            { "GuidanceStatusChanged", GuidanceStatusChanged_args },
            { "WaypointReached", WaypointReached_args },
            { "ManeuverChanged", ManeuverChanged_args },
            { "PositionOnRouteChanged", PositionOnRouteChanged_args },
            { "VehicleLeftTheRoute", VehicleLeftTheRoute_args },
            { "PositionToRouteChanged", PositionToRouteChanged_args },
            { "ActiveRouteChanged", ActiveRouteChanged_args },
            { 0, 0 }
        };
        static ::DBus::IntrospectedProperty Guidance_adaptor_properties[] = 
        {
            { 0, 0, 0, 0 }
        };
        static ::DBus::IntrospectedInterface Guidance_adaptor_interface = 
        {
            "org.genivi.navigationcore.Guidance",
            Guidance_adaptor_methods,
            Guidance_adaptor_signals,
            Guidance_adaptor_properties
        };
        return &Guidance_adaptor_interface;
    }

public:

    /* properties exposed by this interface, use
     * property() and property(value) to get and set a particular property
     */

public:

    /* methods exported by this interface,
     * you will have to implement them in your ObjectAdaptor
     */
    virtual ::DBus::Struct< uint16_t, uint16_t, uint16_t, std::string > GetVersion() = 0;
    virtual void StartGuidance(const uint32_t& sessionHandle, const uint32_t& routeHandle) = 0;
    virtual void StopGuidance(const uint32_t& sessionHandle) = 0;
    virtual void SetVoiceGuidance(const bool& activate, const std::string& voice) = 0;
    virtual void GetGuidanceDetails(bool& voiceGuidance, bool& vehicleOnTheRoad, bool& isDestinationReached, int32_t& maneuver) = 0;
    virtual void PlayVoiceManeuver() = 0;
    virtual void GetWaypointInformation(const uint16_t& requestedNumberOfWaypoints, uint16_t& numberOfWaypoints, std::vector< ::DBus::Struct< uint32_t, uint32_t, int32_t, int32_t, int16_t, int16_t, bool, uint16_t > >& waypointsList) = 0;
    virtual void GetDestinationInformation(uint32_t& offset, uint32_t& travelTime, int32_t& direction, int32_t& side, int16_t& timeZone, int16_t& daylightSavingTime) = 0;
    virtual void GetManeuversList(const uint16_t& requestedNumberOfManeuvers, const uint32_t& maneuverOffset, uint16_t& numberOfManeuvers, std::vector< ::DBus::Struct< std::string, std::string, uint16_t, int32_t, uint32_t, std::vector< ::DBus::Struct< uint32_t, uint32_t, int32_t, int32_t, std::map< int32_t, ::DBus::Struct< uint8_t, ::DBus::Variant > > > > > >& maneuversList) = 0;
    virtual void SetRouteCalculationMode(const uint32_t& sessionHandle, const int32_t& routeCalculationMode) = 0;
    virtual void SkipNextManeuver(const uint32_t& sessionHandle) = 0;
    virtual void GetGuidanceStatus(int32_t& guidanceStatus, uint32_t& routeHandle) = 0;
    virtual void SetVoiceGuidanceSettings(const int32_t& promptMode) = 0;
    virtual int32_t GetVoiceGuidanceSettings() = 0;

public:

    /* signal emitters for this interface
     */
    void VehicleLeftTheRoadNetwork()
    {
        ::DBus::SignalMessage sig("VehicleLeftTheRoadNetwork");
        emit_signal(sig);
    }
    void GuidanceStatusChanged(const int32_t& arg1, const uint32_t& arg2)
    {
        ::DBus::SignalMessage sig("GuidanceStatusChanged");
        ::DBus::MessageIter wi = sig.writer();
        wi << arg1;
        wi << arg2;
        emit_signal(sig);
    }
    void WaypointReached(const bool& arg1)
    {
        ::DBus::SignalMessage sig("WaypointReached");
        ::DBus::MessageIter wi = sig.writer();
        wi << arg1;
        emit_signal(sig);
    }
    void ManeuverChanged(const int32_t& arg1)
    {
        ::DBus::SignalMessage sig("ManeuverChanged");
        ::DBus::MessageIter wi = sig.writer();
        wi << arg1;
        emit_signal(sig);
    }
    void PositionOnRouteChanged(const uint32_t& arg1)
    {
        ::DBus::SignalMessage sig("PositionOnRouteChanged");
        ::DBus::MessageIter wi = sig.writer();
        wi << arg1;
        emit_signal(sig);
    }
    void VehicleLeftTheRoute()
    {
        ::DBus::SignalMessage sig("VehicleLeftTheRoute");
        emit_signal(sig);
    }
    void PositionToRouteChanged(const uint32_t& arg1, const int32_t& arg2)
    {
        ::DBus::SignalMessage sig("PositionToRouteChanged");
        ::DBus::MessageIter wi = sig.writer();
        wi << arg1;
        wi << arg2;
        emit_signal(sig);
    }
    void ActiveRouteChanged(const int32_t& arg1)
    {
        ::DBus::SignalMessage sig("ActiveRouteChanged");
        ::DBus::MessageIter wi = sig.writer();
        wi << arg1;
        emit_signal(sig);
    }

private:

    /* unmarshalers (to unpack the DBus message before calling the actual interface method)
     */
    ::DBus::Message _GetVersion_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        ::DBus::Struct< uint16_t, uint16_t, uint16_t, std::string > argout1 = GetVersion();
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _StartGuidance_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        uint32_t argin1; ri >> argin1;
        uint32_t argin2; ri >> argin2;
        StartGuidance(argin1, argin2);
        ::DBus::ReturnMessage reply(call);
        return reply;
    }
    ::DBus::Message _StopGuidance_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        uint32_t argin1; ri >> argin1;
        StopGuidance(argin1);
        ::DBus::ReturnMessage reply(call);
        return reply;
    }
    ::DBus::Message _SetVoiceGuidance_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        bool argin1; ri >> argin1;
        std::string argin2; ri >> argin2;
        SetVoiceGuidance(argin1, argin2);
        ::DBus::ReturnMessage reply(call);
        return reply;
    }
    ::DBus::Message _GetGuidanceDetails_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        bool argout1;
        bool argout2;
        bool argout3;
        int32_t argout4;
        GetGuidanceDetails(argout1, argout2, argout3, argout4);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        wi << argout2;
        wi << argout3;
        wi << argout4;
        return reply;
    }
    ::DBus::Message _PlayVoiceManeuver_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        PlayVoiceManeuver();
        ::DBus::ReturnMessage reply(call);
        return reply;
    }
    ::DBus::Message _GetWaypointInformation_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        uint16_t argin1; ri >> argin1;
        uint16_t argout1;
        std::vector< ::DBus::Struct< uint32_t, uint32_t, int32_t, int32_t, int16_t, int16_t, bool, uint16_t > > argout2;
        GetWaypointInformation(argin1, argout1, argout2);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        wi << argout2;
        return reply;
    }
    ::DBus::Message _GetDestinationInformation_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        uint32_t argout1;
        uint32_t argout2;
        int32_t argout3;
        int32_t argout4;
        int16_t argout5;
        int16_t argout6;
        GetDestinationInformation(argout1, argout2, argout3, argout4, argout5, argout6);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        wi << argout2;
        wi << argout3;
        wi << argout4;
        wi << argout5;
        wi << argout6;
        return reply;
    }
    ::DBus::Message _GetManeuversList_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        uint16_t argin1; ri >> argin1;
        uint32_t argin2; ri >> argin2;
        uint16_t argout1;
        std::vector< ::DBus::Struct< std::string, std::string, uint16_t, int32_t, uint32_t, std::vector< ::DBus::Struct< uint32_t, uint32_t, int32_t, int32_t, std::map< int32_t, ::DBus::Struct< uint8_t, ::DBus::Variant > > > > > > argout2;
        GetManeuversList(argin1, argin2, argout1, argout2);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        wi << argout2;
        return reply;
    }
    ::DBus::Message _SetRouteCalculationMode_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        uint32_t argin1; ri >> argin1;
        int32_t argin2; ri >> argin2;
        SetRouteCalculationMode(argin1, argin2);
        ::DBus::ReturnMessage reply(call);
        return reply;
    }
    ::DBus::Message _SkipNextManeuver_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        uint32_t argin1; ri >> argin1;
        SkipNextManeuver(argin1);
        ::DBus::ReturnMessage reply(call);
        return reply;
    }
    ::DBus::Message _GetGuidanceStatus_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        int32_t argout1;
        uint32_t argout2;
        GetGuidanceStatus(argout1, argout2);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        wi << argout2;
        return reply;
    }
    ::DBus::Message _SetVoiceGuidanceSettings_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        int32_t argin1; ri >> argin1;
        SetVoiceGuidanceSettings(argin1);
        ::DBus::ReturnMessage reply(call);
        return reply;
    }
    ::DBus::Message _GetVoiceGuidanceSettings_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        int32_t argout1 = GetVoiceGuidanceSettings();
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
};

} } } 
#endif //__dbusxx__genivi_navicore_guidance_adaptor_h__ADAPTOR_MARSHAL_H
