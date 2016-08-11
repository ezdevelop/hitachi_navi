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
 * description: This interface offers methods that implement the POI search functionality of a
 *   navigation system.
 */
#ifndef V4_ORG_GENIVI_NAVIGATION_POISERVICE_POI_Content_Access_Module_STUB_HPP_
#define V4_ORG_GENIVI_NAVIGATION_POISERVICE_POI_Content_Access_Module_STUB_HPP_

#include <functional>



#include <v4/org/genivi/CommonTypes.hpp>
#include <v4/org/genivi/navigation/NavigationTypes.hpp>
#include <v4/org/genivi/navigation/poiservice/POIServiceTypes.hpp>

#include <v4/org/genivi/navigation/poiservice/POIContentAccessModule.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/Deployment.hpp>
#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <CommonAPI/Struct.hpp>
#include <cstdint>
#include <string>
#include <unordered_set>
#include <vector>

#include <CommonAPI/Stub.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v4 {
namespace org {
namespace genivi {
namespace navigation {
namespace poiservice {

/**
 * Receives messages from remote and handles all dispatching of deserialized calls
 * to a stub for the service POIContentAccessModule. Also provides means to send broadcasts
 * and attribute-changed-notifications of observable attributes as defined by this service.
 * An application developer should not need to bother with this class.
 */
class POIContentAccessModuleStubAdapter
    : public virtual CommonAPI::StubAdapter, 
      public virtual POIContentAccessModule {
 public:

    /**
     * Sends a broadcast event for ConfigurationChanged. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireConfigurationChangedEvent(const std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::Settings> &_changedSettings) = 0;
    /**
     * Sends a broadcast event for CategoriesRemoved. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireCategoriesRemovedEvent(const std::vector<::v4::org::genivi::CommonTypes::CategoryID> &_categories) = 0;
    /**
     * Sends a broadcast event for POIAdded. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void firePOIAddedEvent(const std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::POI_ID> &_pois) = 0;
    /**
     * Sends a broadcast event for POIRemoved. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void firePOIRemovedEvent(const std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::POI_ID> &_pois) = 0;
    /**
     * Sends a broadcast event for SearchStatusChanged. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireSearchStatusChangedEvent(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_poiSearchHandle, const ::v4::org::genivi::navigation::poiservice::POIServiceTypes::SearchStatusState &_statusValue, const std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::POI_ID> &_pois) = 0;


    virtual void deactivateManagedInstances() = 0;
protected:
    /**
     * Defines properties for storing the ClientIds of clients / proxies that have
     * subscribed to the selective broadcasts
     */
};

/**
 * Defines the necessary callbacks to handle remote set events related to the attributes
 * defined in the IDL description for POIContentAccessModule.
 * For each attribute two callbacks are defined:
 * - a verification callback that allows to verify the requested value and to prevent setting
 *   e.g. an invalid value ("onRemoteSet<AttributeName>").
 * - an action callback to do local work after the attribute value has been changed
 *   ("onRemote<AttributeName>Changed").
 *
 * This class and the one below are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class POIContentAccessModuleStubRemoteEvent
{
public:
    virtual ~POIContentAccessModuleStubRemoteEvent() { }

};

/**
 * Defines the interface that must be implemented by any class that should provide
 * the service POIContentAccessModule to remote clients.
 * This class and the one above are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class POIContentAccessModuleStub
    : public virtual CommonAPI::Stub<POIContentAccessModuleStubAdapter, POIContentAccessModuleStubRemoteEvent>
{
public:
    typedef std::function<void (::v4::org::genivi::CommonTypes::Version _version)>getVersionReply_t;
    typedef std::function<void ()>setLocaleReply_t;
    typedef std::function<void (std::string _languageCode, std::string _countryCode, std::string _scriptCode)>getLocaleReply_t;
    typedef std::function<void (std::vector<::v4::org::genivi::navigation::NavigationTypes::Locale> _localeList)>getSupportedLocalesReply_t;
    typedef std::function<void (std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::CategoryAndName> _categories)>getAvailableCategoriesReply_t;
    typedef std::function<void (::v4::org::genivi::CommonTypes::CategoryID _category)>getRootCategoryReply_t;
    typedef std::function<void (std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::CategoryAndLevel> _categories)>getChildrenCategoriesReply_t;
    typedef std::function<void (std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::CategoryAndLevel> _categories)>getParentCategoriesReply_t;
    typedef std::function<void (::v4::org::genivi::CommonTypes::CategoryID _unique_id)>createCategoryReply_t;
    typedef std::function<void ()>removeCategoriesReply_t;
    typedef std::function<void ()>addPOIsReply_t;
    typedef std::function<void ()>removePOIsReply_t;
    typedef std::function<void ()>poiSearchStartedReply_t;
    typedef std::function<void ()>poiSearchCanceledReply_t;
    typedef std::function<void (::v4::org::genivi::navigation::poiservice::POIServiceTypes::SearchStatusState _statusValue, uint16_t _resultListSize, std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::PoiCAMDetails> _resultList)>resultListRequestedReply_t;
    typedef std::function<void (std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::SearchResultDetails> _results)>poiDetailsRequestedReply_t;

    virtual ~POIContentAccessModuleStub() {}
    virtual const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> clientId) = 0;


    /**
     * description: This method returns the API version implemented by the content access module.
     */
    /// This is the method that will be called on remote calls on the method getVersion.
    virtual void getVersion(const std::shared_ptr<CommonAPI::ClientId> _client, getVersionReply_t _reply) = 0;
    /**
     * description: Set the current language set for the search by poi provider module.         The
     *   language defines the poi and categories name and details language. If the
     *   language is not supported, the default details will be returned in the native
     *   language.
     */
    /// This is the method that will be called on remote calls on the method setLocale.
    virtual void setLocale(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _languageCode, std::string _countryCode, std::string _scriptCode, setLocaleReply_t _reply) = 0;
    /**
     * description: Get the current language set for the search by poi provider module.
     */
    /// This is the method that will be called on remote calls on the method getLocale.
    virtual void getLocale(const std::shared_ptr<CommonAPI::ClientId> _client, getLocaleReply_t _reply) = 0;
    /**
     * description: Get the supported set of locales for the search by poi provider module.
     */
    /// This is the method that will be called on remote calls on the method getSupportedLocales.
    virtual void getSupportedLocales(const std::shared_ptr<CommonAPI::ClientId> _client, getSupportedLocalesReply_t _reply) = 0;
    /**
     * description: This method retrieves the list od POI categories available (pre-defined and
     *   custom).
     */
    /// This is the method that will be called on remote calls on the method getAvailableCategories.
    virtual void getAvailableCategories(const std::shared_ptr<CommonAPI::ClientId> _client, getAvailableCategoriesReply_t _reply) = 0;
    /**
     * description: Get the root category id. That would be ALL_CATEGORIES.
     */
    /// This is the method that will be called on remote calls on the method getRootCategory.
    virtual void getRootCategory(const std::shared_ptr<CommonAPI::ClientId> _client, getRootCategoryReply_t _reply) = 0;
    /**
     * description: Get the children categories id and type (top level) from the a parent unique id.
     */
    /// This is the method that will be called on remote calls on the method getChildrenCategories.
    virtual void getChildrenCategories(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::CommonTypes::CategoryID _category, getChildrenCategoriesReply_t _reply) = 0;
    /**
     * description: Get the parent categories id and type (top level) from the a unique id.
     */
    /// This is the method that will be called on remote calls on the method getParentCategories.
    virtual void getParentCategories(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::CommonTypes::CategoryID _category, getParentCategoriesReply_t _reply) = 0;
    /**
     * description: Creates a category by name and return an unique id.
     */
    /// This is the method that will be called on remote calls on the method createCategory.
    virtual void createCategory(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::poiservice::POIServiceTypes::CAMCategory _category, createCategoryReply_t _reply) = 0;
    /**
     * description: Removes a list of categories. Because of required time to remove it from the
     *   database, a signal is emitted when the deletion is done.
     */
    /// This is the method that will be called on remote calls on the method removeCategories.
    virtual void removeCategories(const std::shared_ptr<CommonAPI::ClientId> _client, std::vector<::v4::org::genivi::CommonTypes::CategoryID> _categories, removeCategoriesReply_t _reply) = 0;
    /**
     * description: Adds a list of POIs to a category. Because of required time to add it to the
     *   database, a signal is emitted when the update is done, that gives the id of
     *   the elements added
     */
    /// This is the method that will be called on remote calls on the method addPOIs.
    virtual void addPOIs(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::CommonTypes::CategoryID _unique_id, std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::PoiAddedDetails> _poiList, addPOIsReply_t _reply) = 0;
    /**
     * description: Removes a list of POIs to a category. Because of required time to remove it
     *   from the database, a signal is emitted when the update is done.
     */
    /// This is the method that will be called on remote calls on the method removePOIs.
    virtual void removePOIs(const std::shared_ptr<CommonAPI::ClientId> _client, std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::POI_ID> _ids, removePOIsReply_t _reply) = 0;
    /**
     * description: This method is sent by the POI service component to inform all the CAM that a
     *   new POI search was started.         It provides all the relevant search
     *   parameters. Of course the CAM will only be aware of the search if it registers
     *   one of the search categories.
     */
    /// This is the method that will be called on remote calls on the method poiSearchStarted.
    virtual void poiSearchStarted(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _poiSearchHandle, uint16_t _maxSize, ::v4::org::genivi::navigation::NavigationTypes::Coordinate3D _location, std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::CategoryAndRadius> _poiCategories, std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::AttributeDetails> _poiAttributes, std::string _inputString, ::v4::org::genivi::navigation::poiservice::POIServiceTypes::SortOption _sortOption, poiSearchStartedReply_t _reply) = 0;
    /**
     * description: This method cancels the search for the current id.
     */
    /// This is the method that will be called on remote calls on the method poiSearchCanceled.
    virtual void poiSearchCanceled(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _poiSearchHandle, poiSearchCanceledReply_t _reply) = 0;
    /**
     * description: This method provides the poi results list found by the CAM.         As the POI
     *   unique id is managed by the POI component, the CAM only provides the POI name,
     *   the category and coordinates as well as all the relevant detailed information.
     */
    /// This is the method that will be called on remote calls on the method resultListRequested.
    virtual void resultListRequested(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::poiservice::POIServiceTypes::ContentAccessModuleID _camId, ::v4::org::genivi::navigation::NavigationTypes::Handle _poiSearchHandle, std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::AttributeID> _attributeList, resultListRequestedReply_t _reply) = 0;
    /**
     * description: This method retrieves the details associated to one or more POI.         It
     *   contains the name, the parent categories, the list of attributes, the icons,
     *   ... .
     */
    /// This is the method that will be called on remote calls on the method poiDetailsRequested.
    virtual void poiDetailsRequested(const std::shared_ptr<CommonAPI::ClientId> _client, std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::POI_ID> _source_id, poiDetailsRequestedReply_t _reply) = 0;
    /**
     * description: ConfigurationChanged = This signal is sent to the clients when one or more
     *   configuration settings changes.
     */
    /// Sends a broadcast event for ConfigurationChanged.
    virtual void fireConfigurationChangedEvent(const std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::Settings> &_changedSettings) = 0;
    /**
     * description: CategoriesRemoved = This signal is emitted when a list of categories and
     *   associated content has been removed from the database.
     */
    /// Sends a broadcast event for CategoriesRemoved.
    virtual void fireCategoriesRemovedEvent(const std::vector<::v4::org::genivi::CommonTypes::CategoryID> &_categories) = 0;
    /**
     * description: POIAdded = This signal is emitted when a list of POIs and associated content
     *   has been added to the database. It returns the ids.
     */
    /// Sends a broadcast event for POIAdded.
    virtual void firePOIAddedEvent(const std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::POI_ID> &_pois) = 0;
    /**
     * description: POIRemoved = This signal is emitted when a list of POIs and associated content
     *   has been removed from the database.
     */
    /// Sends a broadcast event for POIRemoved.
    virtual void firePOIRemovedEvent(const std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::POI_ID> &_pois) = 0;
    /**
     * description: SearchStatusChanged = This signal updates the search or proximity alert status
     *   of the specified handle.
     */
    /// Sends a broadcast event for SearchStatusChanged.
    virtual void fireSearchStatusChangedEvent(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_poiSearchHandle, const ::v4::org::genivi::navigation::poiservice::POIServiceTypes::SearchStatusState &_statusValue, const std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::POI_ID> &_pois) = 0;

    using CommonAPI::Stub<POIContentAccessModuleStubAdapter, POIContentAccessModuleStubRemoteEvent>::initStubAdapter;
    typedef CommonAPI::Stub<POIContentAccessModuleStubAdapter, POIContentAccessModuleStubRemoteEvent>::StubAdapterType StubAdapterType;
    typedef CommonAPI::Stub<POIContentAccessModuleStubAdapter, POIContentAccessModuleStubRemoteEvent>::RemoteEventHandlerType RemoteEventHandlerType;
    typedef POIContentAccessModuleStubRemoteEvent RemoteEventType;
    typedef POIContentAccessModule StubInterface;
};

} // namespace poiservice
} // namespace navigation
} // namespace genivi
} // namespace org
} // namespace v4


// Compatibility
namespace v4_0 = v4;

#endif // V4_ORG_GENIVI_NAVIGATION_POISERVICE_POI_Content_Access_Module_STUB_HPP_