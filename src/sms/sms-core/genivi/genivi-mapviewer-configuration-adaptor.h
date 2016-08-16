
/*
 *	This file was automatically generated by dbusxx-xml2cpp; DO NOT EDIT!
 */

#ifndef __dbusxx__genivi_mapviewer_configuration_adaptor_h__ADAPTOR_MARSHAL_H
#define __dbusxx__genivi_mapviewer_configuration_adaptor_h__ADAPTOR_MARSHAL_H

#include <dbus-c++/dbus.h>
#include <cassert>

namespace org {
namespace genivi {
namespace mapviewer {

class Configuration_adaptor
: public ::DBus::InterfaceAdaptor
{
public:

    Configuration_adaptor()
    : ::DBus::InterfaceAdaptor("org.genivi.mapviewer.Configuration")
    {
        register_method(Configuration_adaptor, GetVersion, _GetVersion_stub);
        register_method(Configuration_adaptor, SetUnitsOfMeasurement, _SetUnitsOfMeasurement_stub);
        register_method(Configuration_adaptor, GetUnitsOfMeasurement, _GetUnitsOfMeasurement_stub);
        register_method(Configuration_adaptor, GetSupportedUnitsOfMeasurement, _GetSupportedUnitsOfMeasurement_stub);
        register_method(Configuration_adaptor, SetTimeFormat, _SetTimeFormat_stub);
        register_method(Configuration_adaptor, GetTimeFormat, _GetTimeFormat_stub);
        register_method(Configuration_adaptor, GetSupportedTimeFormats, _GetSupportedTimeFormats_stub);
        register_method(Configuration_adaptor, SetCoordinatesFormat, _SetCoordinatesFormat_stub);
        register_method(Configuration_adaptor, GetCoordinatesFormat, _GetCoordinatesFormat_stub);
        register_method(Configuration_adaptor, GetSupportedCoordinatesFormats, _GetSupportedCoordinatesFormats_stub);
        register_method(Configuration_adaptor, SetLocale, _SetLocale_stub);
        register_method(Configuration_adaptor, GetLocale, _GetLocale_stub);
        register_method(Configuration_adaptor, GetSupportedLocales, _GetSupportedLocales_stub);
    }

    ::DBus::IntrospectedInterface *introspect() const 
    {
        static ::DBus::IntrospectedArgument GetVersion_args[] = 
        {
            { "version", "(qqqs)", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument SetUnitsOfMeasurement_args[] = 
        {
            { "unitsOfMeasurementList", "a{ii}", true },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument GetUnitsOfMeasurement_args[] = 
        {
            { "unitsOfMeasurementList", "a{ii}", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument GetSupportedUnitsOfMeasurement_args[] = 
        {
            { "unitsOfMeasurementList", "a{iai}", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument SetTimeFormat_args[] = 
        {
            { "timeFormat", "i", true },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument GetTimeFormat_args[] = 
        {
            { "timeFormat", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument GetSupportedTimeFormats_args[] = 
        {
            { "timeFormatList", "ai", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument SetCoordinatesFormat_args[] = 
        {
            { "coordinatesFormat", "i", true },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument GetCoordinatesFormat_args[] = 
        {
            { "coordinatesFormat", "i", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument GetSupportedCoordinatesFormats_args[] = 
        {
            { "coordinatesFormatList", "ai", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument SetLocale_args[] = 
        {
            { "languageCode", "s", true },
            { "countryCode", "s", true },
            { "scriptCode", "s", true },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument GetLocale_args[] = 
        {
            { "languageCode", "s", false },
            { "countryCode", "s", false },
            { "scriptCode", "s", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument GetSupportedLocales_args[] = 
        {
            { "localeList", "a(sss)", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument ConfigurationChanged_args[] = 
        {
            { "changedSettings", "ai", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedMethod Configuration_adaptor_methods[] = 
        {
            { "GetVersion", GetVersion_args },
            { "SetUnitsOfMeasurement", SetUnitsOfMeasurement_args },
            { "GetUnitsOfMeasurement", GetUnitsOfMeasurement_args },
            { "GetSupportedUnitsOfMeasurement", GetSupportedUnitsOfMeasurement_args },
            { "SetTimeFormat", SetTimeFormat_args },
            { "GetTimeFormat", GetTimeFormat_args },
            { "GetSupportedTimeFormats", GetSupportedTimeFormats_args },
            { "SetCoordinatesFormat", SetCoordinatesFormat_args },
            { "GetCoordinatesFormat", GetCoordinatesFormat_args },
            { "GetSupportedCoordinatesFormats", GetSupportedCoordinatesFormats_args },
            { "SetLocale", SetLocale_args },
            { "GetLocale", GetLocale_args },
            { "GetSupportedLocales", GetSupportedLocales_args },
            { 0, 0 }
        };
        static ::DBus::IntrospectedMethod Configuration_adaptor_signals[] = 
        {
            { "ConfigurationChanged", ConfigurationChanged_args },
            { 0, 0 }
        };
        static ::DBus::IntrospectedProperty Configuration_adaptor_properties[] = 
        {
            { 0, 0, 0, 0 }
        };
        static ::DBus::IntrospectedInterface Configuration_adaptor_interface = 
        {
            "org.genivi.mapviewer.Configuration",
            Configuration_adaptor_methods,
            Configuration_adaptor_signals,
            Configuration_adaptor_properties
        };
        return &Configuration_adaptor_interface;
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
    virtual void SetUnitsOfMeasurement(const std::map< int32_t, int32_t >& unitsOfMeasurementList) = 0;
    virtual std::map< int32_t, int32_t > GetUnitsOfMeasurement() = 0;
    virtual std::map< int32_t, std::vector< int32_t > > GetSupportedUnitsOfMeasurement() = 0;
    virtual void SetTimeFormat(const int32_t& timeFormat) = 0;
    virtual int32_t GetTimeFormat() = 0;
    virtual std::vector< int32_t > GetSupportedTimeFormats() = 0;
    virtual void SetCoordinatesFormat(const int32_t& coordinatesFormat) = 0;
    virtual int32_t GetCoordinatesFormat() = 0;
    virtual std::vector< int32_t > GetSupportedCoordinatesFormats() = 0;
    virtual void SetLocale(const std::string& languageCode, const std::string& countryCode, const std::string& scriptCode) = 0;
    virtual void GetLocale(std::string& languageCode, std::string& countryCode, std::string& scriptCode) = 0;
    virtual std::vector< ::DBus::Struct< std::string, std::string, std::string > > GetSupportedLocales() = 0;

public:

    /* signal emitters for this interface
     */
    void ConfigurationChanged(const std::vector< int32_t >& arg1)
    {
        ::DBus::SignalMessage sig("ConfigurationChanged");
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
    ::DBus::Message _SetUnitsOfMeasurement_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        std::map< int32_t, int32_t > argin1; ri >> argin1;
        SetUnitsOfMeasurement(argin1);
        ::DBus::ReturnMessage reply(call);
        return reply;
    }
    ::DBus::Message _GetUnitsOfMeasurement_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        std::map< int32_t, int32_t > argout1 = GetUnitsOfMeasurement();
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _GetSupportedUnitsOfMeasurement_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        std::map< int32_t, std::vector< int32_t > > argout1 = GetSupportedUnitsOfMeasurement();
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _SetTimeFormat_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        int32_t argin1; ri >> argin1;
        SetTimeFormat(argin1);
        ::DBus::ReturnMessage reply(call);
        return reply;
    }
    ::DBus::Message _GetTimeFormat_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        int32_t argout1 = GetTimeFormat();
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _GetSupportedTimeFormats_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        std::vector< int32_t > argout1 = GetSupportedTimeFormats();
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _SetCoordinatesFormat_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        int32_t argin1; ri >> argin1;
        SetCoordinatesFormat(argin1);
        ::DBus::ReturnMessage reply(call);
        return reply;
    }
    ::DBus::Message _GetCoordinatesFormat_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        int32_t argout1 = GetCoordinatesFormat();
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _GetSupportedCoordinatesFormats_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        std::vector< int32_t > argout1 = GetSupportedCoordinatesFormats();
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
    ::DBus::Message _SetLocale_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        std::string argin1; ri >> argin1;
        std::string argin2; ri >> argin2;
        std::string argin3; ri >> argin3;
        SetLocale(argin1, argin2, argin3);
        ::DBus::ReturnMessage reply(call);
        return reply;
    }
    ::DBus::Message _GetLocale_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        std::string argout1;
        std::string argout2;
        std::string argout3;
        GetLocale(argout1, argout2, argout3);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        wi << argout2;
        wi << argout3;
        return reply;
    }
    ::DBus::Message _GetSupportedLocales_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        std::vector< ::DBus::Struct< std::string, std::string, std::string > > argout1 = GetSupportedLocales();
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        return reply;
    }
};

} } } 
#endif //__dbusxx__genivi_mapviewer_configuration_adaptor_h__ADAPTOR_MARSHAL_H