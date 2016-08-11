/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.v201608040619.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v4/org/genivi/navigation/poiservice/POIContentAccessModule.hpp>
#include <v4/org/genivi/navigation/poiservice/POIContentAccessModuleDBusStubAdapter.hpp>

namespace v4 {
namespace org {
namespace genivi {
namespace navigation {
namespace poiservice {

std::shared_ptr<CommonAPI::DBus::DBusStubAdapter> createPOIContentAccessModuleDBusStubAdapter(
                   const CommonAPI::DBus::DBusAddress &_address,
                   const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
                   const std::shared_ptr<CommonAPI::StubBase> &_stub) {
    return std::make_shared<POIContentAccessModuleDBusStubAdapter>(_address, _connection, _stub);
}

INITIALIZER(registerPOIContentAccessModuleDBusStubAdapter) {
    CommonAPI::DBus::Factory::get()->registerStubAdapterCreateMethod(
    	POIContentAccessModule::getInterface(), &createPOIContentAccessModuleDBusStubAdapter);
}

POIContentAccessModuleDBusStubAdapterInternal::~POIContentAccessModuleDBusStubAdapterInternal() {
    deactivateManagedInstances();
    POIContentAccessModuleDBusStubAdapterHelper::deinit();
}

void POIContentAccessModuleDBusStubAdapterInternal::deactivateManagedInstances() {

}

const char* POIContentAccessModuleDBusStubAdapterInternal::getMethodsDBusIntrospectionXmlData() const {
    static const std::string introspectionData =
        "<method name=\"getInterfaceVersion\">\n"
            "<arg name=\"value\" type=\"uu\" direction=\"out\" />"
        "</method>\n"
        /**
         * description: ConfigurationChanged = This signal is sent to the clients when one or more
         *   configuration settings changes.
         */
        "<signal name=\"ConfigurationChanged\">\n"
            "<arg name=\"changedSettings\" type=\"ai\" />\n"
        "</signal>\n"
        /**
         * description: CategoriesRemoved = This signal is emitted when a list of categories and
         *   associated content has been removed from the database.
         */
        "<signal name=\"CategoriesRemoved\">\n"
            "<arg name=\"categories\" type=\"au\" />\n"
        "</signal>\n"
        /**
         * description: POIAdded = This signal is emitted when a list of POIs and associated content
         *   has been added to the database. It returns the ids.
         */
        "<signal name=\"POIAdded\">\n"
            "<arg name=\"pois\" type=\"au\" />\n"
        "</signal>\n"
        /**
         * description: POIRemoved = This signal is emitted when a list of POIs and associated content
         *   has been removed from the database.
         */
        "<signal name=\"POIRemoved\">\n"
            "<arg name=\"pois\" type=\"au\" />\n"
        "</signal>\n"
        /**
         * description: SearchStatusChanged = This signal updates the search or proximity alert status
         *   of the specified handle.
         */
        "<signal name=\"SearchStatusChanged\">\n"
            "<arg name=\"poiSearchHandle\" type=\"u\" />\n"
            "<arg name=\"statusValue\" type=\"i\" />\n"
            "<arg name=\"pois\" type=\"au\" />\n"
        "</signal>\n"
        /**
         * description: This method returns the API version implemented by the content access module.
         */
        "<method name=\"getVersion\">\n"
            "<arg name=\"_version\" type=\"(qqqs)\" direction=\"out\" />\n"
        "</method>\n"
        /**
         * description: Set the current language set for the search by poi provider module.         The
         *   language defines the poi and categories name and details language. If the
         *   language is not supported, the default details will be returned in the native
         *   language.
         */
        "<method name=\"setLocale\">\n"
            "<arg name=\"_languageCode\" type=\"s\" direction=\"in\" />\n"
            "<arg name=\"_countryCode\" type=\"s\" direction=\"in\" />\n"
            "<arg name=\"_scriptCode\" type=\"s\" direction=\"in\" />\n"
        "</method>\n"
        /**
         * description: Get the current language set for the search by poi provider module.
         */
        "<method name=\"getLocale\">\n"
            "<arg name=\"_languageCode\" type=\"s\" direction=\"out\" />\n"
            "<arg name=\"_countryCode\" type=\"s\" direction=\"out\" />\n"
            "<arg name=\"_scriptCode\" type=\"s\" direction=\"out\" />\n"
        "</method>\n"
        /**
         * description: Get the supported set of locales for the search by poi provider module.
         */
        "<method name=\"getSupportedLocales\">\n"
            "<arg name=\"_localeList\" type=\"a(sss)\" direction=\"out\" />\n"
        "</method>\n"
        /**
         * description: This method retrieves the list od POI categories available (pre-defined and
         *   custom).
         */
        "<method name=\"getAvailableCategories\">\n"
            "<arg name=\"_categories\" type=\"a(usb)\" direction=\"out\" />\n"
        "</method>\n"
        /**
         * description: Get the root category id. That would be ALL_CATEGORIES.
         */
        "<method name=\"getRootCategory\">\n"
            "<arg name=\"_category\" type=\"u\" direction=\"out\" />\n"
        "</method>\n"
        /**
         * description: Get the children categories id and type (top level) from the a parent unique id.
         */
        "<method name=\"getChildrenCategories\">\n"
            "<arg name=\"_category\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_categories\" type=\"a(ub)\" direction=\"out\" />\n"
        "</method>\n"
        /**
         * description: Get the parent categories id and type (top level) from the a unique id.
         */
        "<method name=\"getParentCategories\">\n"
            "<arg name=\"_category\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_categories\" type=\"a(ub)\" direction=\"out\" />\n"
        "</method>\n"
        /**
         * description: Creates a category by name and return an unique id.
         */
        "<method name=\"createCategory\">\n"
            "<arg name=\"_category\" type=\"((au(yv)ss(yv))a(usia(is(yv)))a(us))\" direction=\"in\" />\n"
            "<arg name=\"_unique_id\" type=\"u\" direction=\"out\" />\n"
        "</method>\n"
        /**
         * description: Removes a list of categories. Because of required time to remove it from the
         *   database, a signal is emitted when the deletion is done.
         */
        "<method name=\"removeCategories\">\n"
            "<arg name=\"_categories\" type=\"au\" direction=\"in\" />\n"
        "</method>\n"
        /**
         * description: Adds a list of POIs to a category. Because of required time to add it to the
         *   database, a signal is emitted when the update is done, that gives the id of
         *   the elements added
         */
        "<method name=\"addPOIs\">\n"
            "<arg name=\"_unique_id\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_poiList\" type=\"a(s(ddd)a(ui(yv)))\" direction=\"in\" />\n"
        "</method>\n"
        /**
         * description: Removes a list of POIs to a category. Because of required time to remove it
         *   from the database, a signal is emitted when the update is done.
         */
        "<method name=\"removePOIs\">\n"
            "<arg name=\"_ids\" type=\"au\" direction=\"in\" />\n"
        "</method>\n"
        /**
         * description: This method is sent by the POI service component to inform all the CAM that a
         *   new POI search was started.         It provides all the relevant search
         *   parameters. Of course the CAM will only be aware of the search if it registers
         *   one of the search categories.
         */
        "<method name=\"poiSearchStarted\">\n"
            "<arg name=\"_poiSearchHandle\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_maxSize\" type=\"q\" direction=\"in\" />\n"
            "<arg name=\"_location\" type=\"(ddd)\" direction=\"in\" />\n"
            "<arg name=\"_poiCategories\" type=\"a(uu)\" direction=\"in\" />\n"
            "<arg name=\"_poiAttributes\" type=\"a(uui(yv)ib)\" direction=\"in\" />\n"
            "<arg name=\"_inputString\" type=\"s\" direction=\"in\" />\n"
            "<arg name=\"_sortOption\" type=\"i\" direction=\"in\" />\n"
        "</method>\n"
        /**
         * description: This method cancels the search for the current id.
         */
        "<method name=\"poiSearchCanceled\">\n"
            "<arg name=\"_poiSearchHandle\" type=\"u\" direction=\"in\" />\n"
        "</method>\n"
        /**
         * description: This method provides the poi results list found by the CAM.         As the POI
         *   unique id is managed by the POI component, the CAM only provides the POI name,
         *   the category and coordinates as well as all the relevant detailed information.
         */
        "<method name=\"resultListRequested\">\n"
            "<arg name=\"_camId\" type=\"y\" direction=\"in\" />\n"
            "<arg name=\"_poiSearchHandle\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_attributeList\" type=\"au\" direction=\"in\" />\n"
            "<arg name=\"_statusValue\" type=\"i\" direction=\"out\" />\n"
            "<arg name=\"_resultListSize\" type=\"q\" direction=\"out\" />\n"
            "<arg name=\"_resultList\" type=\"a(usu(ddd)qa(ui(yv)))\" direction=\"out\" />\n"
        "</method>\n"
        /**
         * description: This method retrieves the details associated to one or more POI.         It
         *   contains the name, the parent categories, the list of attributes, the icons,
         *   ... .
         */
        "<method name=\"poiDetailsRequested\">\n"
            "<arg name=\"_source_id\" type=\"au\" direction=\"in\" />\n"
            "<arg name=\"_results\" type=\"a((us(ddd))aua(ui(yv)))\" direction=\"out\" />\n"
        "</method>\n"

    ;
    return introspectionData.c_str();
}

CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v4::org::genivi::navigation::poiservice::POIContentAccessModuleStub,
        CommonAPI::Version
        > POIContentAccessModuleDBusStubAdapterInternal::getPOIContentAccessModuleInterfaceVersionStubDispatcher(&POIContentAccessModuleStub::getInterfaceVersion, "uu");




/**
 * description: This method returns the API version implemented by the content access module.
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::poiservice::POIContentAccessModuleStub,
    std::tuple<>,
    std::tuple<::v4::org::genivi::CommonTypes::Version>,
    std::tuple<>,
    std::tuple<::v4::org::genivi::CommonTypes_::VersionDeployment_t>
    
    > POIContentAccessModuleDBusStubAdapterInternal::getVersionStubDispatcher(
    &POIContentAccessModuleStub::getVersion, "(qqqs)",
					std::make_tuple(),
                	std::make_tuple(static_cast<::v4::org::genivi::CommonTypes_::VersionDeployment_t*>(nullptr)));

/**
 * description: Set the current language set for the search by poi provider module.         The
 *   language defines the poi and categories name and details language. If the
 *   language is not supported, the default details will be returned in the native
 *   language.
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::poiservice::POIContentAccessModuleStub,
    std::tuple<std::string, std::string, std::string>,
    std::tuple<>,
    std::tuple<CommonAPI::DBus::StringDeployment, CommonAPI::DBus::StringDeployment, CommonAPI::DBus::StringDeployment>,
    std::tuple<>
    
    > POIContentAccessModuleDBusStubAdapterInternal::setLocaleStubDispatcher(
    &POIContentAccessModuleStub::setLocale, "",
					std::make_tuple(static_cast<CommonAPI::DBus::StringDeployment*>(nullptr), static_cast<CommonAPI::DBus::StringDeployment*>(nullptr), static_cast<CommonAPI::DBus::StringDeployment*>(nullptr)),
                	std::make_tuple());

/**
 * description: Get the current language set for the search by poi provider module.
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::poiservice::POIContentAccessModuleStub,
    std::tuple<>,
    std::tuple<std::string, std::string, std::string>,
    std::tuple<>,
    std::tuple<CommonAPI::DBus::StringDeployment, CommonAPI::DBus::StringDeployment, CommonAPI::DBus::StringDeployment>
    
    > POIContentAccessModuleDBusStubAdapterInternal::getLocaleStubDispatcher(
    &POIContentAccessModuleStub::getLocale, "sss",
					std::make_tuple(),
                	std::make_tuple(static_cast<CommonAPI::DBus::StringDeployment*>(nullptr), static_cast<CommonAPI::DBus::StringDeployment*>(nullptr), static_cast<CommonAPI::DBus::StringDeployment*>(nullptr)));

/**
 * description: Get the supported set of locales for the search by poi provider module.
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::poiservice::POIContentAccessModuleStub,
    std::tuple<>,
    std::tuple<std::vector<::v4::org::genivi::navigation::NavigationTypes::Locale>>,
    std::tuple<>,
    std::tuple<CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::NavigationTypes_::LocaleDeployment_t>>
    
    > POIContentAccessModuleDBusStubAdapterInternal::getSupportedLocalesStubDispatcher(
    &POIContentAccessModuleStub::getSupportedLocales, "a(sss)",
					std::make_tuple(),
                	std::make_tuple(static_cast<CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::NavigationTypes_::LocaleDeployment_t>*>(nullptr)));

/**
 * description: This method retrieves the list od POI categories available (pre-defined and
 *   custom).
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::poiservice::POIContentAccessModuleStub,
    std::tuple<>,
    std::tuple<std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::CategoryAndName>>,
    std::tuple<>,
    std::tuple<CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::poiservice::POIServiceTypes_::CategoryAndNameDeployment_t>>
    
    > POIContentAccessModuleDBusStubAdapterInternal::getAvailableCategoriesStubDispatcher(
    &POIContentAccessModuleStub::getAvailableCategories, "a(usb)",
					std::make_tuple(),
                	std::make_tuple(static_cast<CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::poiservice::POIServiceTypes_::CategoryAndNameDeployment_t>*>(nullptr)));

/**
 * description: Get the root category id. That would be ALL_CATEGORIES.
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::poiservice::POIContentAccessModuleStub,
    std::tuple<>,
    std::tuple<::v4::org::genivi::CommonTypes::CategoryID>,
    std::tuple<>,
    std::tuple<CommonAPI::EmptyDeployment>
    
    > POIContentAccessModuleDBusStubAdapterInternal::getRootCategoryStubDispatcher(
    &POIContentAccessModuleStub::getRootCategory, "u",
					std::make_tuple(),
                	std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr)));

/**
 * description: Get the children categories id and type (top level) from the a parent unique id.
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::poiservice::POIContentAccessModuleStub,
    std::tuple<::v4::org::genivi::CommonTypes::CategoryID>,
    std::tuple<std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::CategoryAndLevel>>,
    std::tuple<CommonAPI::EmptyDeployment>,
    std::tuple<CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::poiservice::POIServiceTypes_::CategoryAndLevelDeployment_t>>
    
    > POIContentAccessModuleDBusStubAdapterInternal::getChildrenCategoriesStubDispatcher(
    &POIContentAccessModuleStub::getChildrenCategories, "a(ub)",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
                	std::make_tuple(static_cast<CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::poiservice::POIServiceTypes_::CategoryAndLevelDeployment_t>*>(nullptr)));

/**
 * description: Get the parent categories id and type (top level) from the a unique id.
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::poiservice::POIContentAccessModuleStub,
    std::tuple<::v4::org::genivi::CommonTypes::CategoryID>,
    std::tuple<std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::CategoryAndLevel>>,
    std::tuple<CommonAPI::EmptyDeployment>,
    std::tuple<CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::poiservice::POIServiceTypes_::CategoryAndLevelDeployment_t>>
    
    > POIContentAccessModuleDBusStubAdapterInternal::getParentCategoriesStubDispatcher(
    &POIContentAccessModuleStub::getParentCategories, "a(ub)",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
                	std::make_tuple(static_cast<CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::poiservice::POIServiceTypes_::CategoryAndLevelDeployment_t>*>(nullptr)));

/**
 * description: Creates a category by name and return an unique id.
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::poiservice::POIContentAccessModuleStub,
    std::tuple<::v4::org::genivi::navigation::poiservice::POIServiceTypes::CAMCategory>,
    std::tuple<::v4::org::genivi::CommonTypes::CategoryID>,
    std::tuple<::v4::org::genivi::navigation::poiservice::POIServiceTypes_::CAMCategoryDeployment_t>,
    std::tuple<CommonAPI::EmptyDeployment>
    
    > POIContentAccessModuleDBusStubAdapterInternal::createCategoryStubDispatcher(
    &POIContentAccessModuleStub::createCategory, "u",
					std::make_tuple(static_cast<::v4::org::genivi::navigation::poiservice::POIServiceTypes_::CAMCategoryDeployment_t*>(nullptr)),
                	std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr)));

/**
 * description: Removes a list of categories. Because of required time to remove it from the
 *   database, a signal is emitted when the deletion is done.
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::poiservice::POIContentAccessModuleStub,
    std::tuple<std::vector<::v4::org::genivi::CommonTypes::CategoryID>>,
    std::tuple<>,
    std::tuple<CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>>,
    std::tuple<>
    
    > POIContentAccessModuleDBusStubAdapterInternal::removeCategoriesStubDispatcher(
    &POIContentAccessModuleStub::removeCategories, "",
					std::make_tuple(static_cast<CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>*>(nullptr)),
                	std::make_tuple());

/**
 * description: Adds a list of POIs to a category. Because of required time to add it to the
 *   database, a signal is emitted when the update is done, that gives the id of
 *   the elements added
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::poiservice::POIContentAccessModuleStub,
    std::tuple<::v4::org::genivi::CommonTypes::CategoryID, std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::PoiAddedDetails>>,
    std::tuple<>,
    std::tuple<CommonAPI::EmptyDeployment, CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::poiservice::POIServiceTypes_::PoiAddedDetailsDeployment_t>>,
    std::tuple<>
    
    > POIContentAccessModuleDBusStubAdapterInternal::addPOIsStubDispatcher(
    &POIContentAccessModuleStub::addPOIs, "",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::poiservice::POIServiceTypes_::PoiAddedDetailsDeployment_t>*>(nullptr)),
                	std::make_tuple());

/**
 * description: Removes a list of POIs to a category. Because of required time to remove it
 *   from the database, a signal is emitted when the update is done.
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::poiservice::POIContentAccessModuleStub,
    std::tuple<std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::POI_ID>>,
    std::tuple<>,
    std::tuple<CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>>,
    std::tuple<>
    
    > POIContentAccessModuleDBusStubAdapterInternal::removePOIsStubDispatcher(
    &POIContentAccessModuleStub::removePOIs, "",
					std::make_tuple(static_cast<CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>*>(nullptr)),
                	std::make_tuple());

/**
 * description: This method is sent by the POI service component to inform all the CAM that a
 *   new POI search was started.         It provides all the relevant search
 *   parameters. Of course the CAM will only be aware of the search if it registers
 *   one of the search categories.
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::poiservice::POIContentAccessModuleStub,
    std::tuple<::v4::org::genivi::navigation::NavigationTypes::Handle, uint16_t, ::v4::org::genivi::navigation::NavigationTypes::Coordinate3D, std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::CategoryAndRadius>, std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::AttributeDetails>, std::string, ::v4::org::genivi::navigation::poiservice::POIServiceTypes::SortOption>,
    std::tuple<>,
    std::tuple<CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment, ::v4::org::genivi::navigation::NavigationTypes_::Coordinate3DDeployment_t, CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::poiservice::POIServiceTypes_::CategoryAndRadiusDeployment_t>, CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::poiservice::POIServiceTypes_::AttributeDetailsDeployment_t>, CommonAPI::DBus::StringDeployment, CommonAPI::EmptyDeployment>,
    std::tuple<>
    
    > POIContentAccessModuleDBusStubAdapterInternal::poiSearchStartedStubDispatcher(
    &POIContentAccessModuleStub::poiSearchStarted, "",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<::v4::org::genivi::navigation::NavigationTypes_::Coordinate3DDeployment_t*>(nullptr), static_cast<CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::poiservice::POIServiceTypes_::CategoryAndRadiusDeployment_t>*>(nullptr), static_cast<CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::poiservice::POIServiceTypes_::AttributeDetailsDeployment_t>*>(nullptr), static_cast<CommonAPI::DBus::StringDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
                	std::make_tuple());

/**
 * description: This method cancels the search for the current id.
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::poiservice::POIContentAccessModuleStub,
    std::tuple<::v4::org::genivi::navigation::NavigationTypes::Handle>,
    std::tuple<>,
    std::tuple<CommonAPI::EmptyDeployment>,
    std::tuple<>
    
    > POIContentAccessModuleDBusStubAdapterInternal::poiSearchCanceledStubDispatcher(
    &POIContentAccessModuleStub::poiSearchCanceled, "",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
                	std::make_tuple());

/**
 * description: This method provides the poi results list found by the CAM.         As the POI
 *   unique id is managed by the POI component, the CAM only provides the POI name,
 *   the category and coordinates as well as all the relevant detailed information.
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::poiservice::POIContentAccessModuleStub,
    std::tuple<::v4::org::genivi::navigation::poiservice::POIServiceTypes::ContentAccessModuleID, ::v4::org::genivi::navigation::NavigationTypes::Handle, std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::AttributeID>>,
    std::tuple<::v4::org::genivi::navigation::poiservice::POIServiceTypes::SearchStatusState, uint16_t, std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::PoiCAMDetails>>,
    std::tuple<CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment, CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>>,
    std::tuple<CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment, CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::poiservice::POIServiceTypes_::PoiCAMDetailsDeployment_t>>
    
    > POIContentAccessModuleDBusStubAdapterInternal::resultListRequestedStubDispatcher(
    &POIContentAccessModuleStub::resultListRequested, "iqa(usu(ddd)qa(ui(yv)))",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>*>(nullptr)),
                	std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::poiservice::POIServiceTypes_::PoiCAMDetailsDeployment_t>*>(nullptr)));

/**
 * description: This method retrieves the details associated to one or more POI.         It
 *   contains the name, the parent categories, the list of attributes, the icons,
 *   ... .
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::poiservice::POIContentAccessModuleStub,
    std::tuple<std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::POI_ID>>,
    std::tuple<std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::SearchResultDetails>>,
    std::tuple<CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>>,
    std::tuple<CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::poiservice::POIServiceTypes_::SearchResultDetailsDeployment_t>>
    
    > POIContentAccessModuleDBusStubAdapterInternal::poiDetailsRequestedStubDispatcher(
    &POIContentAccessModuleStub::poiDetailsRequested, "a((us(ddd))aua(ui(yv)))",
					std::make_tuple(static_cast<CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>*>(nullptr)),
                	std::make_tuple(static_cast<CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::poiservice::POIServiceTypes_::SearchResultDetailsDeployment_t>*>(nullptr)));



/**
 * description: ConfigurationChanged = This signal is sent to the clients when one or more
 *   configuration settings changes.
 */
void POIContentAccessModuleDBusStubAdapterInternal::fireConfigurationChangedEvent(const std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::Settings>& changedSettings) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::Settings>, CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>>
    >>::sendSignal(
            *this,
            "ConfigurationChanged",
            "ai",
    CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::Settings>, CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>>(changedSettings, static_cast<CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>*>(nullptr))
    );
}
/**
 * description: CategoriesRemoved = This signal is emitted when a list of categories and
 *   associated content has been removed from the database.
 */
void POIContentAccessModuleDBusStubAdapterInternal::fireCategoriesRemovedEvent(const std::vector<::v4::org::genivi::CommonTypes::CategoryID>& categories) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    CommonAPI::Deployable<std::vector<::v4::org::genivi::CommonTypes::CategoryID>, CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>>
    >>::sendSignal(
            *this,
            "CategoriesRemoved",
            "au",
    CommonAPI::Deployable<std::vector<::v4::org::genivi::CommonTypes::CategoryID>, CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>>(categories, static_cast<CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>*>(nullptr))
    );
}
/**
 * description: POIAdded = This signal is emitted when a list of POIs and associated content
 *   has been added to the database. It returns the ids.
 */
void POIContentAccessModuleDBusStubAdapterInternal::firePOIAddedEvent(const std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::POI_ID>& pois) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::POI_ID>, CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>>
    >>::sendSignal(
            *this,
            "POIAdded",
            "au",
    CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::POI_ID>, CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>>(pois, static_cast<CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>*>(nullptr))
    );
}
/**
 * description: POIRemoved = This signal is emitted when a list of POIs and associated content
 *   has been removed from the database.
 */
void POIContentAccessModuleDBusStubAdapterInternal::firePOIRemovedEvent(const std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::POI_ID>& pois) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::POI_ID>, CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>>
    >>::sendSignal(
            *this,
            "POIRemoved",
            "au",
    CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::POI_ID>, CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>>(pois, static_cast<CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>*>(nullptr))
    );
}
/**
 * description: SearchStatusChanged = This signal updates the search or proximity alert status
 *   of the specified handle.
 */
void POIContentAccessModuleDBusStubAdapterInternal::fireSearchStatusChangedEvent(const ::v4::org::genivi::navigation::NavigationTypes::Handle& poiSearchHandle, const ::v4::org::genivi::navigation::poiservice::POIServiceTypes::SearchStatusState& statusValue, const std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::POI_ID>& pois) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
    ::v4::org::genivi::navigation::NavigationTypes::Handle,
    ::v4::org::genivi::navigation::poiservice::POIServiceTypes::SearchStatusState,
    CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::POI_ID>, CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>>
    >>::sendSignal(
            *this,
            "SearchStatusChanged",
            "uiau",
    poiSearchHandle,
    statusValue,
    CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::POI_ID>, CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>>(pois, static_cast<CommonAPI::DBus::ArrayDeployment<CommonAPI::EmptyDeployment>*>(nullptr))
    );
}


const POIContentAccessModuleDBusStubAdapterHelper::StubDispatcherTable& POIContentAccessModuleDBusStubAdapterInternal::getStubDispatcherTable() {
    return stubDispatcherTable_;
}

const CommonAPI::DBus::StubAttributeTable& POIContentAccessModuleDBusStubAdapterInternal::getStubAttributeTable() {
    return stubAttributeTable_;
}

POIContentAccessModuleDBusStubAdapterInternal::POIContentAccessModuleDBusStubAdapterInternal(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub)
	: CommonAPI::DBus::DBusStubAdapter(_address, _connection,false),
      POIContentAccessModuleDBusStubAdapterHelper(_address, _connection, std::dynamic_pointer_cast<POIContentAccessModuleStub>(_stub), false),
      stubDispatcherTable_({
            /**
             * description: This method returns the API version implemented by the content access module.
             */
            { { "getVersion", "" }, &org::genivi::navigation::poiservice::POIContentAccessModuleDBusStubAdapterInternal::getVersionStubDispatcher },
            /**
             * description: Set the current language set for the search by poi provider module.         The
             *   language defines the poi and categories name and details language. If the
             *   language is not supported, the default details will be returned in the native
             *   language.
             */
            { { "setLocale", "sss" }, &org::genivi::navigation::poiservice::POIContentAccessModuleDBusStubAdapterInternal::setLocaleStubDispatcher },
            /**
             * description: Get the current language set for the search by poi provider module.
             */
            { { "getLocale", "" }, &org::genivi::navigation::poiservice::POIContentAccessModuleDBusStubAdapterInternal::getLocaleStubDispatcher },
            /**
             * description: Get the supported set of locales for the search by poi provider module.
             */
            { { "getSupportedLocales", "" }, &org::genivi::navigation::poiservice::POIContentAccessModuleDBusStubAdapterInternal::getSupportedLocalesStubDispatcher },
            /**
             * description: This method retrieves the list od POI categories available (pre-defined and
             *   custom).
             */
            { { "getAvailableCategories", "" }, &org::genivi::navigation::poiservice::POIContentAccessModuleDBusStubAdapterInternal::getAvailableCategoriesStubDispatcher },
            /**
             * description: Get the root category id. That would be ALL_CATEGORIES.
             */
            { { "getRootCategory", "" }, &org::genivi::navigation::poiservice::POIContentAccessModuleDBusStubAdapterInternal::getRootCategoryStubDispatcher },
            /**
             * description: Get the children categories id and type (top level) from the a parent unique id.
             */
            { { "getChildrenCategories", "u" }, &org::genivi::navigation::poiservice::POIContentAccessModuleDBusStubAdapterInternal::getChildrenCategoriesStubDispatcher },
            /**
             * description: Get the parent categories id and type (top level) from the a unique id.
             */
            { { "getParentCategories", "u" }, &org::genivi::navigation::poiservice::POIContentAccessModuleDBusStubAdapterInternal::getParentCategoriesStubDispatcher },
            /**
             * description: Creates a category by name and return an unique id.
             */
            { { "createCategory", "((au(yv)ss(yv))a(usia(is(yv)))a(us))" }, &org::genivi::navigation::poiservice::POIContentAccessModuleDBusStubAdapterInternal::createCategoryStubDispatcher },
            /**
             * description: Removes a list of categories. Because of required time to remove it from the
             *   database, a signal is emitted when the deletion is done.
             */
            { { "removeCategories", "au" }, &org::genivi::navigation::poiservice::POIContentAccessModuleDBusStubAdapterInternal::removeCategoriesStubDispatcher },
            /**
             * description: Adds a list of POIs to a category. Because of required time to add it to the
             *   database, a signal is emitted when the update is done, that gives the id of
             *   the elements added
             */
            { { "addPOIs", "ua(s(ddd)a(ui(yv)))" }, &org::genivi::navigation::poiservice::POIContentAccessModuleDBusStubAdapterInternal::addPOIsStubDispatcher },
            /**
             * description: Removes a list of POIs to a category. Because of required time to remove it
             *   from the database, a signal is emitted when the update is done.
             */
            { { "removePOIs", "au" }, &org::genivi::navigation::poiservice::POIContentAccessModuleDBusStubAdapterInternal::removePOIsStubDispatcher },
            /**
             * description: This method is sent by the POI service component to inform all the CAM that a
             *   new POI search was started.         It provides all the relevant search
             *   parameters. Of course the CAM will only be aware of the search if it registers
             *   one of the search categories.
             */
            { { "poiSearchStarted", "uq(ddd)a(uu)a(uui(yv)ib)si" }, &org::genivi::navigation::poiservice::POIContentAccessModuleDBusStubAdapterInternal::poiSearchStartedStubDispatcher },
            /**
             * description: This method cancels the search for the current id.
             */
            { { "poiSearchCanceled", "u" }, &org::genivi::navigation::poiservice::POIContentAccessModuleDBusStubAdapterInternal::poiSearchCanceledStubDispatcher },
            /**
             * description: This method provides the poi results list found by the CAM.         As the POI
             *   unique id is managed by the POI component, the CAM only provides the POI name,
             *   the category and coordinates as well as all the relevant detailed information.
             */
            { { "resultListRequested", "yuau" }, &org::genivi::navigation::poiservice::POIContentAccessModuleDBusStubAdapterInternal::resultListRequestedStubDispatcher },
            /**
             * description: This method retrieves the details associated to one or more POI.         It
             *   contains the name, the parent categories, the list of attributes, the icons,
             *   ... .
             */
            { { "poiDetailsRequested", "au" }, &org::genivi::navigation::poiservice::POIContentAccessModuleDBusStubAdapterInternal::poiDetailsRequestedStubDispatcher }
            }),
        stubAttributeTable_() {

    stubDispatcherTable_.insert({ { "getInterfaceVersion", "" }, &org::genivi::navigation::poiservice::POIContentAccessModuleDBusStubAdapterInternal::getPOIContentAccessModuleInterfaceVersionStubDispatcher });
}

bool POIContentAccessModuleDBusStubAdapterInternal::hasFreedesktopProperties() {
    return false;
}

} // namespace poiservice
} // namespace navigation
} // namespace genivi
} // namespace org
} // namespace v4
