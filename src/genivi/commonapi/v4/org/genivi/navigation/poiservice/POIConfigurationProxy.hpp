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
 * description: This interface offers methods that implement the POI configuration
 *   functionality of a navigation system.
 */
#ifndef V4_ORG_GENIVI_NAVIGATION_POISERVICE_POI_Configuration_PROXY_HPP_
#define V4_ORG_GENIVI_NAVIGATION_POISERVICE_POI_Configuration_PROXY_HPP_

#include <v4/org/genivi/navigation/poiservice/POIConfigurationProxyBase.hpp>


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif


#undef COMMONAPI_INTERNAL_COMPILATION

namespace v4 {
namespace org {
namespace genivi {
namespace navigation {
namespace poiservice {

template <typename ... _AttributeExtensions>
class POIConfigurationProxy
    : virtual public POIConfiguration, 
      virtual public POIConfigurationProxyBase,
      virtual public _AttributeExtensions... {
public:
    POIConfigurationProxy(std::shared_ptr<CommonAPI::Proxy> delegate);
    ~POIConfigurationProxy();

    typedef POIConfiguration InterfaceType;



    /**
     * description: ConfigurationChanged = This signal is sent to the clients when one or more
     *   configuration settings changes
     */
    /**
     * Returns the wrapper class that provides access to the broadcast configurationChanged.
     */
    virtual ConfigurationChangedEvent& getConfigurationChangedEvent() {
        return delegate_->getConfigurationChangedEvent();
    }

    /**
     * description: This method returns the API version .
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
     * description: Set the current language set. If the language is not supported, the default
     *   details will be returned in the native language.
     * Calls setLocale with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void setLocale(const std::string &_languageCode, const std::string &_countryCode, const std::string &_scriptCode, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setLocale with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> setLocaleAsync(const std::string &_languageCode, const std::string &_countryCode, const std::string &_scriptCode, SetLocaleAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Get the current language set .
     * Calls getLocale with synchronous semantics.
     * 
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getLocale(CommonAPI::CallStatus &_internalCallStatus, std::string &_languageCode, std::string &_countryCode, std::string &_scriptCode, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getLocale with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getLocaleAsync(GetLocaleAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Get the supported set of locales .
     * Calls getSupportedLocales with synchronous semantics.
     * 
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getSupportedLocales(CommonAPI::CallStatus &_internalCallStatus, std::vector<::v4::org::genivi::navigation::NavigationTypes::Locale> &_localeList, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getSupportedLocales with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getSupportedLocalesAsync(GetSupportedLocalesAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Set the time format.
     * Calls setTimeFormat with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void setTimeFormat(const ::v4::org::genivi::navigation::NavigationTypes::TimeFormat &_format, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setTimeFormat with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> setTimeFormatAsync(const ::v4::org::genivi::navigation::NavigationTypes::TimeFormat &_format, SetTimeFormatAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Get the current time format .
     * Calls getTimeFormat with synchronous semantics.
     * 
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getTimeFormat(CommonAPI::CallStatus &_internalCallStatus, ::v4::org::genivi::navigation::NavigationTypes::TimeFormat &_format, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getTimeFormat with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getTimeFormatAsync(GetTimeFormatAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Get the supported set of time format .
     * Calls getSupportedTimeFormats with synchronous semantics.
     * 
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getSupportedTimeFormats(CommonAPI::CallStatus &_internalCallStatus, std::vector<::v4::org::genivi::navigation::NavigationTypes::TimeFormat> &_timeFormatList, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getSupportedTimeFormats with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getSupportedTimeFormatsAsync(GetSupportedTimeFormatsAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Set the coordinates format.
     * Calls setCoordinatesFormat with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void setCoordinatesFormat(const POIConfiguration::CoordinatesFormat &_coordinatesFormat, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setCoordinatesFormat with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> setCoordinatesFormatAsync(const POIConfiguration::CoordinatesFormat &_coordinatesFormat, SetCoordinatesFormatAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Get the coordinates format .
     * Calls getCoordinatesFormat with synchronous semantics.
     * 
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getCoordinatesFormat(CommonAPI::CallStatus &_internalCallStatus, POIConfiguration::CoordinatesFormat &_coordinatesFormat, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getCoordinatesFormat with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getCoordinatesFormatAsync(GetCoordinatesFormatAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Get the supported set of coordinates format .
     * Calls getSupportedCoordinatesFormat with synchronous semantics.
     * 
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getSupportedCoordinatesFormat(CommonAPI::CallStatus &_internalCallStatus, std::vector<POIConfiguration::CoordinatesFormat> &_coordinatesFormatList, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getSupportedCoordinatesFormat with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getSupportedCoordinatesFormatAsync(GetSupportedCoordinatesFormatAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Set the units of measurement .
     * Calls setUnitsOfMeasurement with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void setUnitsOfMeasurement(const POIConfiguration::UnitsOfMeasurement &_unitsOfMeasurementList, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setUnitsOfMeasurement with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> setUnitsOfMeasurementAsync(const POIConfiguration::UnitsOfMeasurement &_unitsOfMeasurementList, SetUnitsOfMeasurementAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Get the units of measurement .
     * Calls getUnitsOfMeasurement with synchronous semantics.
     * 
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getUnitsOfMeasurement(CommonAPI::CallStatus &_internalCallStatus, POIConfiguration::UnitsOfMeasurement &_unitsOfMeasurementList, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getUnitsOfMeasurement with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getUnitsOfMeasurementAsync(GetUnitsOfMeasurementAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * description: Get the supported set of units of measurement .
     * Calls getSupportedUnitsOfMeasurement with synchronous semantics.
     * 
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void getSupportedUnitsOfMeasurement(CommonAPI::CallStatus &_internalCallStatus, POIConfiguration::UnitsOfMeasurement &_unitsOfMeasurementList, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls getSupportedUnitsOfMeasurement with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> getSupportedUnitsOfMeasurementAsync(GetSupportedUnitsOfMeasurementAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);


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
    std::shared_ptr<POIConfigurationProxyBase> delegate_;
};

typedef POIConfigurationProxy<> POIConfigurationProxyDefault;


//
// POIConfigurationProxy Implementation
//
template <typename ... _AttributeExtensions>
POIConfigurationProxy<_AttributeExtensions...>::POIConfigurationProxy(std::shared_ptr<CommonAPI::Proxy> delegate):
        _AttributeExtensions(*(std::dynamic_pointer_cast<POIConfigurationProxyBase>(delegate)))...,
        delegate_(std::dynamic_pointer_cast<POIConfigurationProxyBase>(delegate)) {
}

template <typename ... _AttributeExtensions>
POIConfigurationProxy<_AttributeExtensions...>::~POIConfigurationProxy() {
}

/**
 * description: This method returns the API version .
 */
template <typename ... _AttributeExtensions>
void POIConfigurationProxy<_AttributeExtensions...>::getVersion(CommonAPI::CallStatus &_internalCallStatus, ::v4::org::genivi::CommonTypes::Version &_version, const CommonAPI::CallInfo *_info) {
    delegate_->getVersion(_internalCallStatus, _version, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> POIConfigurationProxy<_AttributeExtensions...>::getVersionAsync(GetVersionAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getVersionAsync(_callback, _info);
}
/**
 * description: Set the current language set. If the language is not supported, the default
 *   details will be returned in the native language.
 */
template <typename ... _AttributeExtensions>
void POIConfigurationProxy<_AttributeExtensions...>::setLocale(const std::string &_languageCode, const std::string &_countryCode, const std::string &_scriptCode, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
    delegate_->setLocale(_languageCode, _countryCode, _scriptCode, _internalCallStatus, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> POIConfigurationProxy<_AttributeExtensions...>::setLocaleAsync(const std::string &_languageCode, const std::string &_countryCode, const std::string &_scriptCode, SetLocaleAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->setLocaleAsync(_languageCode, _countryCode, _scriptCode, _callback, _info);
}
/**
 * description: Get the current language set .
 */
template <typename ... _AttributeExtensions>
void POIConfigurationProxy<_AttributeExtensions...>::getLocale(CommonAPI::CallStatus &_internalCallStatus, std::string &_languageCode, std::string &_countryCode, std::string &_scriptCode, const CommonAPI::CallInfo *_info) {
    delegate_->getLocale(_internalCallStatus, _languageCode, _countryCode, _scriptCode, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> POIConfigurationProxy<_AttributeExtensions...>::getLocaleAsync(GetLocaleAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getLocaleAsync(_callback, _info);
}
/**
 * description: Get the supported set of locales .
 */
template <typename ... _AttributeExtensions>
void POIConfigurationProxy<_AttributeExtensions...>::getSupportedLocales(CommonAPI::CallStatus &_internalCallStatus, std::vector<::v4::org::genivi::navigation::NavigationTypes::Locale> &_localeList, const CommonAPI::CallInfo *_info) {
    delegate_->getSupportedLocales(_internalCallStatus, _localeList, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> POIConfigurationProxy<_AttributeExtensions...>::getSupportedLocalesAsync(GetSupportedLocalesAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getSupportedLocalesAsync(_callback, _info);
}
/**
 * description: Set the time format.
 */
template <typename ... _AttributeExtensions>
void POIConfigurationProxy<_AttributeExtensions...>::setTimeFormat(const ::v4::org::genivi::navigation::NavigationTypes::TimeFormat &_format, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
    if (!_format.validate()) {
        _internalCallStatus = CommonAPI::CallStatus::INVALID_VALUE;
        return;
    }
    delegate_->setTimeFormat(_format, _internalCallStatus, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> POIConfigurationProxy<_AttributeExtensions...>::setTimeFormatAsync(const ::v4::org::genivi::navigation::NavigationTypes::TimeFormat &_format, SetTimeFormatAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    if (!_format.validate()) {
        _callback(CommonAPI::CallStatus::INVALID_VALUE);
        std::promise<CommonAPI::CallStatus> promise;
        promise.set_value(CommonAPI::CallStatus::INVALID_VALUE);
        return promise.get_future();
    }
    return delegate_->setTimeFormatAsync(_format, _callback, _info);
}
/**
 * description: Get the current time format .
 */
template <typename ... _AttributeExtensions>
void POIConfigurationProxy<_AttributeExtensions...>::getTimeFormat(CommonAPI::CallStatus &_internalCallStatus, ::v4::org::genivi::navigation::NavigationTypes::TimeFormat &_format, const CommonAPI::CallInfo *_info) {
    delegate_->getTimeFormat(_internalCallStatus, _format, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> POIConfigurationProxy<_AttributeExtensions...>::getTimeFormatAsync(GetTimeFormatAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getTimeFormatAsync(_callback, _info);
}
/**
 * description: Get the supported set of time format .
 */
template <typename ... _AttributeExtensions>
void POIConfigurationProxy<_AttributeExtensions...>::getSupportedTimeFormats(CommonAPI::CallStatus &_internalCallStatus, std::vector<::v4::org::genivi::navigation::NavigationTypes::TimeFormat> &_timeFormatList, const CommonAPI::CallInfo *_info) {
    delegate_->getSupportedTimeFormats(_internalCallStatus, _timeFormatList, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> POIConfigurationProxy<_AttributeExtensions...>::getSupportedTimeFormatsAsync(GetSupportedTimeFormatsAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getSupportedTimeFormatsAsync(_callback, _info);
}
/**
 * description: Set the coordinates format.
 */
template <typename ... _AttributeExtensions>
void POIConfigurationProxy<_AttributeExtensions...>::setCoordinatesFormat(const POIConfiguration::CoordinatesFormat &_coordinatesFormat, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
    if (!_coordinatesFormat.validate()) {
        _internalCallStatus = CommonAPI::CallStatus::INVALID_VALUE;
        return;
    }
    delegate_->setCoordinatesFormat(_coordinatesFormat, _internalCallStatus, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> POIConfigurationProxy<_AttributeExtensions...>::setCoordinatesFormatAsync(const POIConfiguration::CoordinatesFormat &_coordinatesFormat, SetCoordinatesFormatAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    if (!_coordinatesFormat.validate()) {
        _callback(CommonAPI::CallStatus::INVALID_VALUE);
        std::promise<CommonAPI::CallStatus> promise;
        promise.set_value(CommonAPI::CallStatus::INVALID_VALUE);
        return promise.get_future();
    }
    return delegate_->setCoordinatesFormatAsync(_coordinatesFormat, _callback, _info);
}
/**
 * description: Get the coordinates format .
 */
template <typename ... _AttributeExtensions>
void POIConfigurationProxy<_AttributeExtensions...>::getCoordinatesFormat(CommonAPI::CallStatus &_internalCallStatus, POIConfiguration::CoordinatesFormat &_coordinatesFormat, const CommonAPI::CallInfo *_info) {
    delegate_->getCoordinatesFormat(_internalCallStatus, _coordinatesFormat, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> POIConfigurationProxy<_AttributeExtensions...>::getCoordinatesFormatAsync(GetCoordinatesFormatAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getCoordinatesFormatAsync(_callback, _info);
}
/**
 * description: Get the supported set of coordinates format .
 */
template <typename ... _AttributeExtensions>
void POIConfigurationProxy<_AttributeExtensions...>::getSupportedCoordinatesFormat(CommonAPI::CallStatus &_internalCallStatus, std::vector<POIConfiguration::CoordinatesFormat> &_coordinatesFormatList, const CommonAPI::CallInfo *_info) {
    delegate_->getSupportedCoordinatesFormat(_internalCallStatus, _coordinatesFormatList, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> POIConfigurationProxy<_AttributeExtensions...>::getSupportedCoordinatesFormatAsync(GetSupportedCoordinatesFormatAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getSupportedCoordinatesFormatAsync(_callback, _info);
}
/**
 * description: Set the units of measurement .
 */
template <typename ... _AttributeExtensions>
void POIConfigurationProxy<_AttributeExtensions...>::setUnitsOfMeasurement(const POIConfiguration::UnitsOfMeasurement &_unitsOfMeasurementList, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
    delegate_->setUnitsOfMeasurement(_unitsOfMeasurementList, _internalCallStatus, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> POIConfigurationProxy<_AttributeExtensions...>::setUnitsOfMeasurementAsync(const POIConfiguration::UnitsOfMeasurement &_unitsOfMeasurementList, SetUnitsOfMeasurementAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->setUnitsOfMeasurementAsync(_unitsOfMeasurementList, _callback, _info);
}
/**
 * description: Get the units of measurement .
 */
template <typename ... _AttributeExtensions>
void POIConfigurationProxy<_AttributeExtensions...>::getUnitsOfMeasurement(CommonAPI::CallStatus &_internalCallStatus, POIConfiguration::UnitsOfMeasurement &_unitsOfMeasurementList, const CommonAPI::CallInfo *_info) {
    delegate_->getUnitsOfMeasurement(_internalCallStatus, _unitsOfMeasurementList, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> POIConfigurationProxy<_AttributeExtensions...>::getUnitsOfMeasurementAsync(GetUnitsOfMeasurementAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getUnitsOfMeasurementAsync(_callback, _info);
}
/**
 * description: Get the supported set of units of measurement .
 */
template <typename ... _AttributeExtensions>
void POIConfigurationProxy<_AttributeExtensions...>::getSupportedUnitsOfMeasurement(CommonAPI::CallStatus &_internalCallStatus, POIConfiguration::UnitsOfMeasurement &_unitsOfMeasurementList, const CommonAPI::CallInfo *_info) {
    delegate_->getSupportedUnitsOfMeasurement(_internalCallStatus, _unitsOfMeasurementList, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> POIConfigurationProxy<_AttributeExtensions...>::getSupportedUnitsOfMeasurementAsync(GetSupportedUnitsOfMeasurementAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->getSupportedUnitsOfMeasurementAsync(_callback, _info);
}

template <typename ... _AttributeExtensions>
const CommonAPI::Address &POIConfigurationProxy<_AttributeExtensions...>::getAddress() const {
    return delegate_->getAddress();
}

template <typename ... _AttributeExtensions>
bool POIConfigurationProxy<_AttributeExtensions...>::isAvailable() const {
    return delegate_->isAvailable();
}

template <typename ... _AttributeExtensions>
bool POIConfigurationProxy<_AttributeExtensions...>::isAvailableBlocking() const {
    return delegate_->isAvailableBlocking();
}

template <typename ... _AttributeExtensions>
CommonAPI::ProxyStatusEvent& POIConfigurationProxy<_AttributeExtensions...>::getProxyStatusEvent() {
    return delegate_->getProxyStatusEvent();
}

template <typename ... _AttributeExtensions>
CommonAPI::InterfaceVersionAttribute& POIConfigurationProxy<_AttributeExtensions...>::getInterfaceVersionAttribute() {
    return delegate_->getInterfaceVersionAttribute();
}


} // namespace poiservice
} // namespace navigation
} // namespace genivi
} // namespace org
} // namespace v4



// Compatibility
namespace v4_0 = v4;

#endif // V4_ORG_GENIVI_NAVIGATION_POISERVICE_POI_Configuration_PROXY_HPP_
