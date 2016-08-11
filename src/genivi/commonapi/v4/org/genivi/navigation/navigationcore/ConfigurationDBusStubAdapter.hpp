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
#ifndef V4_ORG_GENIVI_NAVIGATION_NAVIGATIONCORE_Configuration_DBUS_STUB_ADAPTER_HPP_
#define V4_ORG_GENIVI_NAVIGATION_NAVIGATIONCORE_Configuration_DBUS_STUB_ADAPTER_HPP_

#include <v4/org/genivi/navigation/navigationcore/ConfigurationStub.hpp>
#include "v4/org/genivi/navigation/navigationcore/ConfigurationDBusDeployment.hpp"        
#include <v4/org/genivi/CommonTypesDBusDeployment.hpp>
#include <v4/org/genivi/navigation/navigationcore/ConfigurationDBusDeployment.hpp>
#include <v4/org/genivi/navigation/NavigationTypesDBusDeployment.hpp>        

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusAddressTranslator.hpp>
#include <CommonAPI/DBus/DBusFactory.hpp>
#include <CommonAPI/DBus/DBusStubAdapterHelper.hpp>
#include <CommonAPI/DBus/DBusStubAdapter.hpp>
#include <CommonAPI/DBus/DBusDeployment.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v4 {
namespace org {
namespace genivi {
namespace navigation {
namespace navigationcore {

typedef CommonAPI::DBus::DBusStubAdapterHelper<ConfigurationStub> ConfigurationDBusStubAdapterHelper;

class ConfigurationDBusStubAdapterInternal
    : public virtual ConfigurationStubAdapter,
      public ConfigurationDBusStubAdapterHelper
{
public:
    ConfigurationDBusStubAdapterInternal(
            const CommonAPI::DBus::DBusAddress &_address,
            const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
            const std::shared_ptr<CommonAPI::StubBase> &_stub);

    ~ConfigurationDBusStubAdapterInternal();

    virtual bool hasFreedesktopProperties();

    inline static const char* getInterface() {
        return Configuration::getInterface();
    }


    /**
     * description: ConfigurationChanged = This signal is sent to the clients when one or more
     *   configuration settings changes
     */
    void fireConfigurationChangedEvent(const std::vector<::v4::org::genivi::navigation::navigationcore::Configuration::Settings>& changedSettings);


    const ConfigurationDBusStubAdapterHelper::StubDispatcherTable& getStubDispatcherTable();
    const CommonAPI::DBus::StubAttributeTable& getStubAttributeTable();

    void deactivateManagedInstances();
    

static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v4::org::genivi::navigation::navigationcore::ConfigurationStub,
        CommonAPI::Version
        > getConfigurationInterfaceVersionStubDispatcher;



/**
 * description: This method returns the API version .
 */

static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::navigationcore::ConfigurationStub,
    std::tuple<>,
    std::tuple<::v4::org::genivi::CommonTypes::Version>,
    std::tuple<>,
    std::tuple<::v4::org::genivi::CommonTypes_::VersionDeployment_t>
    
    > getVersionStubDispatcher;
/**
 * description: Set the current language set. If the language is not supported, the default
 *   details will be returned in the native language.
 */

static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::navigationcore::ConfigurationStub,
    std::tuple<std::string, std::string, std::string>,
    std::tuple<>,
    std::tuple<CommonAPI::DBus::StringDeployment, CommonAPI::DBus::StringDeployment, CommonAPI::DBus::StringDeployment>,
    std::tuple<>
    
    > setLocaleStubDispatcher;
/**
 * description: Get the current language set .
 */

static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::navigationcore::ConfigurationStub,
    std::tuple<>,
    std::tuple<std::string, std::string, std::string>,
    std::tuple<>,
    std::tuple<CommonAPI::DBus::StringDeployment, CommonAPI::DBus::StringDeployment, CommonAPI::DBus::StringDeployment>
    
    > getLocaleStubDispatcher;
/**
 * description: Get the supported set of locales .
 */

static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::navigationcore::ConfigurationStub,
    std::tuple<>,
    std::tuple<std::vector<::v4::org::genivi::navigation::NavigationTypes::Locale>>,
    std::tuple<>,
    std::tuple<CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::NavigationTypes_::LocaleDeployment_t>>
    
    > getSupportedLocalesStubDispatcher;
/**
 * description: Set the time format.
 */

static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::navigationcore::ConfigurationStub,
    std::tuple<::v4::org::genivi::navigation::NavigationTypes::TimeFormat>,
    std::tuple<>,
    std::tuple<CommonAPI::EmptyDeployment>,
    std::tuple<>
    
    > setTimeFormatStubDispatcher;
/**
 * description: Get the current time format .
 */

static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::navigationcore::ConfigurationStub,
    std::tuple<>,
    std::tuple<::v4::org::genivi::navigation::NavigationTypes::TimeFormat>,
    std::tuple<>,
    std::tuple<CommonAPI::EmptyDeployment>
    
    > getTimeFormatStubDispatcher;
/**
 * description: Get the supported set of time format .
 */

static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::navigationcore::ConfigurationStub,
    std::tuple<>,
    std::tuple<std::vector<::v4::org::genivi::navigation::NavigationTypes::TimeFormat>>,
    std::tuple<>,
    std::tuple<CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>>
    
    > getSupportedTimeFormatsStubDispatcher;
/**
 * description: Set the coordinates format.
 */

static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::navigationcore::ConfigurationStub,
    std::tuple<Configuration::CoordinatesFormat>,
    std::tuple<>,
    std::tuple<CommonAPI::EmptyDeployment>,
    std::tuple<>
    
    > setCoordinatesFormatStubDispatcher;
/**
 * description: Get the coordinates format .
 */

static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::navigationcore::ConfigurationStub,
    std::tuple<>,
    std::tuple<Configuration::CoordinatesFormat>,
    std::tuple<>,
    std::tuple<CommonAPI::EmptyDeployment>
    
    > getCoordinatesFormatStubDispatcher;
/**
 * description: Get the supported set of coordinates format .
 */

static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::navigationcore::ConfigurationStub,
    std::tuple<>,
    std::tuple<std::vector<Configuration::CoordinatesFormat>>,
    std::tuple<>,
    std::tuple<CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>>
    
    > getSupportedCoordinatesFormatStubDispatcher;
/**
 * description: Set the units of measurement .
 */

static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::navigationcore::ConfigurationStub,
    std::tuple<Configuration::UnitsOfMeasurement>,
    std::tuple<>,
    std::tuple<Configuration_::UnitsOfMeasurementDeployment_t>,
    std::tuple<>
    
    > setUnitsOfMeasurementStubDispatcher;
/**
 * description: Get the units of measurement .
 */

static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::navigationcore::ConfigurationStub,
    std::tuple<>,
    std::tuple<Configuration::UnitsOfMeasurement>,
    std::tuple<>,
    std::tuple<Configuration_::UnitsOfMeasurementDeployment_t>
    
    > getUnitsOfMeasurementStubDispatcher;
/**
 * description: Get the supported set of units of measurement .
 */

static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::navigationcore::ConfigurationStub,
    std::tuple<>,
    std::tuple<Configuration::UnitsOfMeasurementList>,
    std::tuple<>,
    std::tuple<Configuration_::UnitsOfMeasurementListDeployment_t>
    
    > getSupportedUnitsOfMeasurementStubDispatcher;




 protected:
    virtual const char* getMethodsDBusIntrospectionXmlData() const;

 private:
    ConfigurationDBusStubAdapterHelper::StubDispatcherTable stubDispatcherTable_;
    CommonAPI::DBus::StubAttributeTable stubAttributeTable_;
};

class ConfigurationDBusStubAdapter
    : public ConfigurationDBusStubAdapterInternal,
      public std::enable_shared_from_this<ConfigurationDBusStubAdapter> {
public:
    ConfigurationDBusStubAdapter(
    	const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub)
    	: CommonAPI::DBus::DBusStubAdapter(
    		_address, 
    		_connection,
            false),
          ConfigurationDBusStubAdapterInternal(
          	_address, 
          	_connection, 
          	_stub) { 
    }
};

} // namespace navigationcore
} // namespace navigation
} // namespace genivi
} // namespace org
} // namespace v4

#endif // V4_ORG_GENIVI_NAVIGATION_NAVIGATIONCORE_Configuration_DBUS_STUB_ADAPTER_HPP_
