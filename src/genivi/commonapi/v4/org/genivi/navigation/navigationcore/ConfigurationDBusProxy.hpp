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
 * description: This interface offers methods that implement the navigation core configuration
 *   functionality of a navigation system.
 */
#ifndef V4_ORG_GENIVI_NAVIGATION_NAVIGATIONCORE_Configuration_DBUS_PROXY_HPP_
#define V4_ORG_GENIVI_NAVIGATION_NAVIGATIONCORE_Configuration_DBUS_PROXY_HPP_

#include <v4/org/genivi/navigation/navigationcore/ConfigurationProxyBase.hpp>
#include "v4/org/genivi/navigation/navigationcore/ConfigurationDBusDeployment.hpp"

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

class ConfigurationDBusProxy
    : virtual public ConfigurationProxyBase, 
      virtual public CommonAPI::DBus::DBusProxy {
public:
    ConfigurationDBusProxy(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection);

    virtual ~ConfigurationDBusProxy() { }


    virtual ConfigurationChangedEvent& getConfigurationChangedEvent();

    /**
     * description: This method returns the API version .
     */
    virtual void getVersion(CommonAPI::CallStatus &_internalCallStatus, ::v4::org::genivi::CommonTypes::Version &_version, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getVersionAsync(GetVersionAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Set the current language set. If the language is not supported, the default
     *   details will be returned in the native language.
     */
    virtual void setLocale(const std::string &_languageCode, const std::string &_countryCode, const std::string &_scriptCode, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> setLocaleAsync(const std::string &_languageCode, const std::string &_countryCode, const std::string &_scriptCode, SetLocaleAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Get the current language set .
     */
    virtual void getLocale(CommonAPI::CallStatus &_internalCallStatus, std::string &_languageCode, std::string &_countryCode, std::string &_scriptCode, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getLocaleAsync(GetLocaleAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Get the supported set of locales .
     */
    virtual void getSupportedLocales(CommonAPI::CallStatus &_internalCallStatus, std::vector<::v4::org::genivi::navigation::NavigationTypes::Locale> &_localeList, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getSupportedLocalesAsync(GetSupportedLocalesAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Set the time format.
     */
    virtual void setTimeFormat(const ::v4::org::genivi::navigation::NavigationTypes::TimeFormat &_format, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> setTimeFormatAsync(const ::v4::org::genivi::navigation::NavigationTypes::TimeFormat &_format, SetTimeFormatAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Get the current time format .
     */
    virtual void getTimeFormat(CommonAPI::CallStatus &_internalCallStatus, ::v4::org::genivi::navigation::NavigationTypes::TimeFormat &_format, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getTimeFormatAsync(GetTimeFormatAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Get the supported set of time format .
     */
    virtual void getSupportedTimeFormats(CommonAPI::CallStatus &_internalCallStatus, std::vector<::v4::org::genivi::navigation::NavigationTypes::TimeFormat> &_timeFormatList, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getSupportedTimeFormatsAsync(GetSupportedTimeFormatsAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Set the coordinates format.
     */
    virtual void setCoordinatesFormat(const Configuration::CoordinatesFormat &_coordinatesFormat, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> setCoordinatesFormatAsync(const Configuration::CoordinatesFormat &_coordinatesFormat, SetCoordinatesFormatAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Get the coordinates format .
     */
    virtual void getCoordinatesFormat(CommonAPI::CallStatus &_internalCallStatus, Configuration::CoordinatesFormat &_coordinatesFormat, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getCoordinatesFormatAsync(GetCoordinatesFormatAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Get the supported set of coordinates format .
     */
    virtual void getSupportedCoordinatesFormat(CommonAPI::CallStatus &_internalCallStatus, std::vector<Configuration::CoordinatesFormat> &_coordinatesFormatList, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getSupportedCoordinatesFormatAsync(GetSupportedCoordinatesFormatAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Set the units of measurement .
     */
    virtual void setUnitsOfMeasurement(const Configuration::UnitsOfMeasurement &_unitsOfMeasurement, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> setUnitsOfMeasurementAsync(const Configuration::UnitsOfMeasurement &_unitsOfMeasurement, SetUnitsOfMeasurementAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Get the units of measurement .
     */
    virtual void getUnitsOfMeasurement(CommonAPI::CallStatus &_internalCallStatus, Configuration::UnitsOfMeasurement &_unitsOfMeasurement, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getUnitsOfMeasurementAsync(GetUnitsOfMeasurementAsyncCallback _callback, const CommonAPI::CallInfo *_info);
    /**
     * description: Get the supported set of units of measurement .
     */
    virtual void getSupportedUnitsOfMeasurement(CommonAPI::CallStatus &_internalCallStatus, Configuration::UnitsOfMeasurementList &_unitsOfMeasurementList, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> getSupportedUnitsOfMeasurementAsync(GetSupportedUnitsOfMeasurementAsyncCallback _callback, const CommonAPI::CallInfo *_info);


    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

private:
   

    CommonAPI::DBus::DBusEvent<ConfigurationChangedEvent, CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::navigationcore::Configuration::Settings>, CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>>> configurationChanged_;

};

} // namespace navigationcore
} // namespace navigation
} // namespace genivi
} // namespace org
} // namespace v4

#endif // V4_ORG_GENIVI_NAVIGATION_NAVIGATIONCORE_Configuration_DBUS_PROXY_HPP_
