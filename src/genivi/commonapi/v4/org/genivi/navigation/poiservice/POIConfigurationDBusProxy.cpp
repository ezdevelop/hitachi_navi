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
 * description: This interface offers methods that implement the POI configuration
 *   functionality of a navigation system.
 */
#include <v4/org/genivi/navigation/poiservice/POIConfigurationDBusProxy.hpp>

namespace v4 {
namespace org {
namespace genivi {
namespace navigation {
namespace poiservice {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createPOIConfigurationDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection) {
	return std::make_shared<POIConfigurationDBusProxy>(_address, _connection);
}

INITIALIZER(registerPOIConfigurationDBusProxy) {
     CommonAPI::DBus::Factory::get()->registerProxyCreateMethod(
		POIConfiguration::getInterface(),
		&createPOIConfigurationDBusProxy);
}

POIConfigurationDBusProxy::POIConfigurationDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection)
	:	CommonAPI::DBus::DBusProxy(_address, _connection)
,		configurationChanged_(*this, "configurationChanged", "ai", std::make_tuple(static_cast<CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>*>(nullptr)))
{
}


POIConfigurationDBusProxy::ConfigurationChangedEvent& POIConfigurationDBusProxy::getConfigurationChangedEvent() {
    return configurationChanged_;
}
    
    /**
     * description: This method returns the API version .
     */
    void POIConfigurationDBusProxy::getVersion(CommonAPI::CallStatus &_internalCallStatus, ::v4::org::genivi::CommonTypes::Version &_version, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v4::org::genivi::CommonTypes::Version, ::v4::org::genivi::CommonTypes_::VersionDeployment_t> deploy_version(static_cast<::v4::org::genivi::CommonTypes_::VersionDeployment_t*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v4::org::genivi::CommonTypes::Version,::v4::org::genivi::CommonTypes_::VersionDeployment_t>
            >
        	>::callMethodWithReply(
        *this,
        "getVersion",
        "",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
_internalCallStatus,
deploy_version);
_version = deploy_version.getValue();
}
    std::future<CommonAPI::CallStatus> POIConfigurationDBusProxy::getVersionAsync(GetVersionAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v4::org::genivi::CommonTypes::Version, ::v4::org::genivi::CommonTypes_::VersionDeployment_t> deploy_version(static_cast<::v4::org::genivi::CommonTypes_::VersionDeployment_t*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v4::org::genivi::CommonTypes::Version,::v4::org::genivi::CommonTypes_::VersionDeployment_t>
            >
        	>::callMethodAsync(
        *this,
        "getVersion",
        "",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<::v4::org::genivi::CommonTypes::Version, ::v4::org::genivi::CommonTypes_::VersionDeployment_t> _version) {
        	if (_callback)
        		_callback(_internalCallStatus, _version.getValue());
        },
        std::make_tuple(deploy_version));
    }
    /**
     * description: Set the current language set. If the language is not supported, the default
     *   details will be returned in the native language.
     */
    void POIConfigurationDBusProxy::setLocale(const std::string &_languageCode, const std::string &_countryCode, const std::string &_scriptCode, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_languageCode(_languageCode, static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_countryCode(_countryCode, static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_scriptCode(_scriptCode, static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment >,
            CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment >,
            CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
        	>::callMethodWithReply(
        *this,
        "setLocale",
        "sss",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_languageCode, deploy_countryCode, deploy_scriptCode,
_internalCallStatus);
}
    std::future<CommonAPI::CallStatus> POIConfigurationDBusProxy::setLocaleAsync(const std::string &_languageCode, const std::string &_countryCode, const std::string &_scriptCode, SetLocaleAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_languageCode(_languageCode, static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_countryCode(_countryCode, static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_scriptCode(_scriptCode, static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment >,
            CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment >,
            CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
        	>::callMethodAsync(
        *this,
        "setLocale",
        "sss",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_languageCode, deploy_countryCode, deploy_scriptCode,
        [_callback] (CommonAPI::CallStatus _internalCallStatus) {
        	if (_callback)
        		_callback(_internalCallStatus);
        },
        std::make_tuple());
    }
    /**
     * description: Get the current language set .
     */
    void POIConfigurationDBusProxy::getLocale(CommonAPI::CallStatus &_internalCallStatus, std::string &_languageCode, std::string &_countryCode, std::string &_scriptCode, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_languageCode(static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_countryCode(static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_scriptCode(static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<std::string,CommonAPI::DBus::StringDeployment>,
            CommonAPI::Deployable<std::string,CommonAPI::DBus::StringDeployment>,
            CommonAPI::Deployable<std::string,CommonAPI::DBus::StringDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "getLocale",
        "",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
_internalCallStatus,
deploy_languageCode, deploy_countryCode, deploy_scriptCode);
_languageCode = deploy_languageCode.getValue();
_countryCode = deploy_countryCode.getValue();
_scriptCode = deploy_scriptCode.getValue();
}
    std::future<CommonAPI::CallStatus> POIConfigurationDBusProxy::getLocaleAsync(GetLocaleAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_languageCode(static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_countryCode(static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_scriptCode(static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<std::string,CommonAPI::DBus::StringDeployment>,
            CommonAPI::Deployable<std::string,CommonAPI::DBus::StringDeployment>,
            CommonAPI::Deployable<std::string,CommonAPI::DBus::StringDeployment>
            >
        	>::callMethodAsync(
        *this,
        "getLocale",
        "",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> _languageCode, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> _countryCode, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> _scriptCode) {
        	if (_callback)
        		_callback(_internalCallStatus, _languageCode.getValue(), _countryCode.getValue(), _scriptCode.getValue());
        },
        std::make_tuple(deploy_languageCode, deploy_countryCode, deploy_scriptCode));
    }
    /**
     * description: Get the supported set of locales .
     */
    void POIConfigurationDBusProxy::getSupportedLocales(CommonAPI::CallStatus &_internalCallStatus, std::vector<::v4::org::genivi::navigation::NavigationTypes::Locale> &_localeList, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::NavigationTypes::Locale>, CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::NavigationTypes_::LocaleDeployment_t>> deploy_localeList(static_cast<CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::NavigationTypes_::LocaleDeployment_t>*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::NavigationTypes::Locale>,CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::NavigationTypes_::LocaleDeployment_t>>
            >
        	>::callMethodWithReply(
        *this,
        "getSupportedLocales",
        "",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
_internalCallStatus,
deploy_localeList);
_localeList = deploy_localeList.getValue();
}
    std::future<CommonAPI::CallStatus> POIConfigurationDBusProxy::getSupportedLocalesAsync(GetSupportedLocalesAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::NavigationTypes::Locale>, CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::NavigationTypes_::LocaleDeployment_t>> deploy_localeList(static_cast<CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::NavigationTypes_::LocaleDeployment_t>*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::NavigationTypes::Locale>,CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::NavigationTypes_::LocaleDeployment_t>>
            >
        	>::callMethodAsync(
        *this,
        "getSupportedLocales",
        "",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::NavigationTypes::Locale>, CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::NavigationTypes_::LocaleDeployment_t>> _localeList) {
        	if (_callback)
        		_callback(_internalCallStatus, _localeList.getValue());
        },
        std::make_tuple(deploy_localeList));
    }
    /**
     * description: Set the time format.
     */
    void POIConfigurationDBusProxy::setTimeFormat(const ::v4::org::genivi::navigation::NavigationTypes::TimeFormat &_format, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::TimeFormat, CommonAPI::EmptyDeployment> deploy_format(_format, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::TimeFormat, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
        	>::callMethodWithReply(
        *this,
        "setTimeFormat",
        "i",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_format,
_internalCallStatus);
}
    std::future<CommonAPI::CallStatus> POIConfigurationDBusProxy::setTimeFormatAsync(const ::v4::org::genivi::navigation::NavigationTypes::TimeFormat &_format, SetTimeFormatAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::TimeFormat, CommonAPI::EmptyDeployment> deploy_format(_format, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::TimeFormat, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
        	>::callMethodAsync(
        *this,
        "setTimeFormat",
        "i",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_format,
        [_callback] (CommonAPI::CallStatus _internalCallStatus) {
        	if (_callback)
        		_callback(_internalCallStatus);
        },
        std::make_tuple());
    }
    /**
     * description: Get the current time format .
     */
    void POIConfigurationDBusProxy::getTimeFormat(CommonAPI::CallStatus &_internalCallStatus, ::v4::org::genivi::navigation::NavigationTypes::TimeFormat &_format, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::TimeFormat, CommonAPI::EmptyDeployment> deploy_format(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::TimeFormat,CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "getTimeFormat",
        "",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
_internalCallStatus,
deploy_format);
_format = deploy_format.getValue();
}
    std::future<CommonAPI::CallStatus> POIConfigurationDBusProxy::getTimeFormatAsync(GetTimeFormatAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::TimeFormat, CommonAPI::EmptyDeployment> deploy_format(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::TimeFormat,CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "getTimeFormat",
        "",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::TimeFormat, CommonAPI::EmptyDeployment> _format) {
        	if (_callback)
        		_callback(_internalCallStatus, _format.getValue());
        },
        std::make_tuple(deploy_format));
    }
    /**
     * description: Get the supported set of time format .
     */
    void POIConfigurationDBusProxy::getSupportedTimeFormats(CommonAPI::CallStatus &_internalCallStatus, std::vector<::v4::org::genivi::navigation::NavigationTypes::TimeFormat> &_timeFormatList, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::NavigationTypes::TimeFormat>, CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>> deploy_timeFormatList(static_cast<CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::NavigationTypes::TimeFormat>,CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>>
            >
        	>::callMethodWithReply(
        *this,
        "getSupportedTimeFormats",
        "",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
_internalCallStatus,
deploy_timeFormatList);
_timeFormatList = deploy_timeFormatList.getValue();
}
    std::future<CommonAPI::CallStatus> POIConfigurationDBusProxy::getSupportedTimeFormatsAsync(GetSupportedTimeFormatsAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::NavigationTypes::TimeFormat>, CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>> deploy_timeFormatList(static_cast<CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::NavigationTypes::TimeFormat>,CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>>
            >
        	>::callMethodAsync(
        *this,
        "getSupportedTimeFormats",
        "",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::NavigationTypes::TimeFormat>, CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>> _timeFormatList) {
        	if (_callback)
        		_callback(_internalCallStatus, _timeFormatList.getValue());
        },
        std::make_tuple(deploy_timeFormatList));
    }
    /**
     * description: Set the coordinates format.
     */
    void POIConfigurationDBusProxy::setCoordinatesFormat(const POIConfiguration::CoordinatesFormat &_coordinatesFormat, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<POIConfiguration::CoordinatesFormat, CommonAPI::EmptyDeployment> deploy_coordinatesFormat(_coordinatesFormat, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<POIConfiguration::CoordinatesFormat, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
        	>::callMethodWithReply(
        *this,
        "setCoordinatesFormat",
        "i",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_coordinatesFormat,
_internalCallStatus);
}
    std::future<CommonAPI::CallStatus> POIConfigurationDBusProxy::setCoordinatesFormatAsync(const POIConfiguration::CoordinatesFormat &_coordinatesFormat, SetCoordinatesFormatAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<POIConfiguration::CoordinatesFormat, CommonAPI::EmptyDeployment> deploy_coordinatesFormat(_coordinatesFormat, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<POIConfiguration::CoordinatesFormat, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
        	>::callMethodAsync(
        *this,
        "setCoordinatesFormat",
        "i",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_coordinatesFormat,
        [_callback] (CommonAPI::CallStatus _internalCallStatus) {
        	if (_callback)
        		_callback(_internalCallStatus);
        },
        std::make_tuple());
    }
    /**
     * description: Get the coordinates format .
     */
    void POIConfigurationDBusProxy::getCoordinatesFormat(CommonAPI::CallStatus &_internalCallStatus, POIConfiguration::CoordinatesFormat &_coordinatesFormat, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<POIConfiguration::CoordinatesFormat, CommonAPI::EmptyDeployment> deploy_coordinatesFormat(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<POIConfiguration::CoordinatesFormat,CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "getCoordinatesFormat",
        "",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
_internalCallStatus,
deploy_coordinatesFormat);
_coordinatesFormat = deploy_coordinatesFormat.getValue();
}
    std::future<CommonAPI::CallStatus> POIConfigurationDBusProxy::getCoordinatesFormatAsync(GetCoordinatesFormatAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<POIConfiguration::CoordinatesFormat, CommonAPI::EmptyDeployment> deploy_coordinatesFormat(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<POIConfiguration::CoordinatesFormat,CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "getCoordinatesFormat",
        "",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<POIConfiguration::CoordinatesFormat, CommonAPI::EmptyDeployment> _coordinatesFormat) {
        	if (_callback)
        		_callback(_internalCallStatus, _coordinatesFormat.getValue());
        },
        std::make_tuple(deploy_coordinatesFormat));
    }
    /**
     * description: Get the supported set of coordinates format .
     */
    void POIConfigurationDBusProxy::getSupportedCoordinatesFormat(CommonAPI::CallStatus &_internalCallStatus, std::vector<POIConfiguration::CoordinatesFormat> &_coordinatesFormatList, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<std::vector<POIConfiguration::CoordinatesFormat>, CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>> deploy_coordinatesFormatList(static_cast<CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<std::vector<POIConfiguration::CoordinatesFormat>,CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>>
            >
        	>::callMethodWithReply(
        *this,
        "getSupportedCoordinatesFormat",
        "",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
_internalCallStatus,
deploy_coordinatesFormatList);
_coordinatesFormatList = deploy_coordinatesFormatList.getValue();
}
    std::future<CommonAPI::CallStatus> POIConfigurationDBusProxy::getSupportedCoordinatesFormatAsync(GetSupportedCoordinatesFormatAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<std::vector<POIConfiguration::CoordinatesFormat>, CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>> deploy_coordinatesFormatList(static_cast<CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<std::vector<POIConfiguration::CoordinatesFormat>,CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>>
            >
        	>::callMethodAsync(
        *this,
        "getSupportedCoordinatesFormat",
        "",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<std::vector<POIConfiguration::CoordinatesFormat>, CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>> _coordinatesFormatList) {
        	if (_callback)
        		_callback(_internalCallStatus, _coordinatesFormatList.getValue());
        },
        std::make_tuple(deploy_coordinatesFormatList));
    }
    /**
     * description: Set the units of measurement .
     */
    void POIConfigurationDBusProxy::setUnitsOfMeasurement(const POIConfiguration::UnitsOfMeasurement &_unitsOfMeasurementList, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<POIConfiguration::UnitsOfMeasurement, POIConfiguration_::UnitsOfMeasurementDeployment_t> deploy_unitsOfMeasurementList(_unitsOfMeasurementList, static_cast<POIConfiguration_::UnitsOfMeasurementDeployment_t*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<POIConfiguration::UnitsOfMeasurement, POIConfiguration_::UnitsOfMeasurementDeployment_t >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
        	>::callMethodWithReply(
        *this,
        "setUnitsOfMeasurement",
        "a{i(yv)}",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_unitsOfMeasurementList,
_internalCallStatus);
}
    std::future<CommonAPI::CallStatus> POIConfigurationDBusProxy::setUnitsOfMeasurementAsync(const POIConfiguration::UnitsOfMeasurement &_unitsOfMeasurementList, SetUnitsOfMeasurementAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<POIConfiguration::UnitsOfMeasurement, POIConfiguration_::UnitsOfMeasurementDeployment_t> deploy_unitsOfMeasurementList(_unitsOfMeasurementList, static_cast<POIConfiguration_::UnitsOfMeasurementDeployment_t*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<POIConfiguration::UnitsOfMeasurement, POIConfiguration_::UnitsOfMeasurementDeployment_t >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
        	>::callMethodAsync(
        *this,
        "setUnitsOfMeasurement",
        "a{i(yv)}",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_unitsOfMeasurementList,
        [_callback] (CommonAPI::CallStatus _internalCallStatus) {
        	if (_callback)
        		_callback(_internalCallStatus);
        },
        std::make_tuple());
    }
    /**
     * description: Get the units of measurement .
     */
    void POIConfigurationDBusProxy::getUnitsOfMeasurement(CommonAPI::CallStatus &_internalCallStatus, POIConfiguration::UnitsOfMeasurement &_unitsOfMeasurementList, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<POIConfiguration::UnitsOfMeasurement, POIConfiguration_::UnitsOfMeasurementDeployment_t> deploy_unitsOfMeasurementList(static_cast<POIConfiguration_::UnitsOfMeasurementDeployment_t*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<POIConfiguration::UnitsOfMeasurement,POIConfiguration_::UnitsOfMeasurementDeployment_t>
            >
        	>::callMethodWithReply(
        *this,
        "getUnitsOfMeasurement",
        "",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
_internalCallStatus,
deploy_unitsOfMeasurementList);
_unitsOfMeasurementList = deploy_unitsOfMeasurementList.getValue();
}
    std::future<CommonAPI::CallStatus> POIConfigurationDBusProxy::getUnitsOfMeasurementAsync(GetUnitsOfMeasurementAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<POIConfiguration::UnitsOfMeasurement, POIConfiguration_::UnitsOfMeasurementDeployment_t> deploy_unitsOfMeasurementList(static_cast<POIConfiguration_::UnitsOfMeasurementDeployment_t*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<POIConfiguration::UnitsOfMeasurement,POIConfiguration_::UnitsOfMeasurementDeployment_t>
            >
        	>::callMethodAsync(
        *this,
        "getUnitsOfMeasurement",
        "",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<POIConfiguration::UnitsOfMeasurement, POIConfiguration_::UnitsOfMeasurementDeployment_t> _unitsOfMeasurementList) {
        	if (_callback)
        		_callback(_internalCallStatus, _unitsOfMeasurementList.getValue());
        },
        std::make_tuple(deploy_unitsOfMeasurementList));
    }
    /**
     * description: Get the supported set of units of measurement .
     */
    void POIConfigurationDBusProxy::getSupportedUnitsOfMeasurement(CommonAPI::CallStatus &_internalCallStatus, POIConfiguration::UnitsOfMeasurement &_unitsOfMeasurementList, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<POIConfiguration::UnitsOfMeasurement, POIConfiguration_::UnitsOfMeasurementDeployment_t> deploy_unitsOfMeasurementList(static_cast<POIConfiguration_::UnitsOfMeasurementDeployment_t*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<POIConfiguration::UnitsOfMeasurement,POIConfiguration_::UnitsOfMeasurementDeployment_t>
            >
        	>::callMethodWithReply(
        *this,
        "getSupportedUnitsOfMeasurement",
        "",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
_internalCallStatus,
deploy_unitsOfMeasurementList);
_unitsOfMeasurementList = deploy_unitsOfMeasurementList.getValue();
}
    std::future<CommonAPI::CallStatus> POIConfigurationDBusProxy::getSupportedUnitsOfMeasurementAsync(GetSupportedUnitsOfMeasurementAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<POIConfiguration::UnitsOfMeasurement, POIConfiguration_::UnitsOfMeasurementDeployment_t> deploy_unitsOfMeasurementList(static_cast<POIConfiguration_::UnitsOfMeasurementDeployment_t*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<POIConfiguration::UnitsOfMeasurement,POIConfiguration_::UnitsOfMeasurementDeployment_t>
            >
        	>::callMethodAsync(
        *this,
        "getSupportedUnitsOfMeasurement",
        "",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<POIConfiguration::UnitsOfMeasurement, POIConfiguration_::UnitsOfMeasurementDeployment_t> _unitsOfMeasurementList) {
        	if (_callback)
        		_callback(_internalCallStatus, _unitsOfMeasurementList.getValue());
        },
        std::make_tuple(deploy_unitsOfMeasurementList));
    }


void POIConfigurationDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
          ownVersionMajor = 4;
          ownVersionMinor = 0;
      }

      } // namespace poiservice
      } // namespace navigation
      } // namespace genivi
      } // namespace org
      } // namespace v4
