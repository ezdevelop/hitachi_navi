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
#ifndef V4_ORG_GENIVI_NAVIGATION_POISERVICE_POI_Search_STUB_HPP_
#define V4_ORG_GENIVI_NAVIGATION_POISERVICE_POI_Search_STUB_HPP_

#include <functional>



#include <v4/org/genivi/CommonTypes.hpp>
#include <v4/org/genivi/navigation/NavigationTypes.hpp>
#include <v4/org/genivi/navigation/poiservice/POIServiceTypes.hpp>

#include <v4/org/genivi/navigation/poiservice/POISearch.hpp>

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
 * to a stub for the service POISearch. Also provides means to send broadcasts
 * and attribute-changed-notifications of observable attributes as defined by this service.
 * An application developer should not need to bother with this class.
 */
class POISearchStubAdapter
    : public virtual CommonAPI::StubAdapter, 
      public virtual POISearch {
 public:

    /**
     * Sends a broadcast event for CategoriesUpdated. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireCategoriesUpdatedEvent(const std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::CategoryAndReason> &_poiCategories) = 0;
    /**
     * Sends a broadcast event for PoiStatus. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void firePoiStatusEvent(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_poiSearchHandle, const ::v4::org::genivi::navigation::poiservice::POIServiceTypes::SearchStatusState &_statusValue) = 0;
    /**
     * Sends a broadcast event for ResultListChanged. Should not be called directly.
     * Instead, the "fire<broadcastName>Event" methods of the stub should be used.
     */
    virtual void fireResultListChangedEvent(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_poiSearchHandle, const uint16_t &_resultListSize) = 0;


    virtual void deactivateManagedInstances() = 0;
protected:
    /**
     * Defines properties for storing the ClientIds of clients / proxies that have
     * subscribed to the selective broadcasts
     */
};

/**
 * Defines the necessary callbacks to handle remote set events related to the attributes
 * defined in the IDL description for POISearch.
 * For each attribute two callbacks are defined:
 * - a verification callback that allows to verify the requested value and to prevent setting
 *   e.g. an invalid value ("onRemoteSet<AttributeName>").
 * - an action callback to do local work after the attribute value has been changed
 *   ("onRemote<AttributeName>Changed").
 *
 * This class and the one below are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class POISearchStubRemoteEvent
{
public:
    virtual ~POISearchStubRemoteEvent() { }

};

/**
 * Defines the interface that must be implemented by any class that should provide
 * the service POISearch to remote clients.
 * This class and the one above are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class POISearchStub
    : public virtual CommonAPI::Stub<POISearchStubAdapter, POISearchStubRemoteEvent>
{
public:
    typedef std::function<void (::v4::org::genivi::CommonTypes::Version _version)>getVersionReply_t;
    typedef std::function<void (std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::CategoryAndStatus> _results)>validateCategoriesReply_t;
    typedef std::function<void (std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::CategoryAndName> _categories)>getAvailableCategoriesReply_t;
    typedef std::function<void (::v4::org::genivi::CommonTypes::CategoryID _category)>getRootCategoryReply_t;
    typedef std::function<void (std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::CategoryAndLevel> _categories)>getChildrenCategoriesReply_t;
    typedef std::function<void (std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::CategoryAndLevel> _categories)>getParentCategoriesReply_t;
    typedef std::function<void (std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::Category> _results)>getCategoriesDetailsReply_t;
    typedef std::function<void (::v4::org::genivi::navigation::NavigationTypes::Handle _poiSearchHandle)>createPoiSearchHandleReply_t;
    typedef std::function<void ()>deletePoiSearchHandleReply_t;
    typedef std::function<void ()>setCenterReply_t;
    typedef std::function<void ()>setRouteHandleReply_t;
    typedef std::function<void ()>setCategoriesReply_t;
    typedef std::function<void ()>setAttributesReply_t;
    typedef std::function<void ()>startPoiSearchReply_t;
    typedef std::function<void ()>cancelPoiSearchReply_t;
    typedef std::function<void ()>startPoiProximityAlertReply_t;
    typedef std::function<void ()>cancelPoiProximityAlertReply_t;
    typedef std::function<void (::v4::org::genivi::navigation::poiservice::POIServiceTypes::SearchStatusState _statusValue, uint16_t _resultListSize, std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::SearchResult> _resultListWindow)>requestResultListReply_t;
    typedef std::function<void (std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::SearchResultDetails> _results)>getPoiDetailsReply_t;

    virtual ~POISearchStub() {}
    virtual const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> clientId) = 0;


    /**
     * description: This method returns the API version implemented by the content access module.
     */
    /// This is the method that will be called on remote calls on the method getVersion.
    virtual void getVersion(const std::shared_ptr<CommonAPI::ClientId> _client, getVersionReply_t _reply) = 0;
    /**
     * description: This method allows the application to validate that POI categories are
     *   supported by the POI component and the Content access modules.
     */
    /// This is the method that will be called on remote calls on the method validateCategories.
    virtual void validateCategories(const std::shared_ptr<CommonAPI::ClientId> _client, std::vector<::v4::org::genivi::CommonTypes::CategoryID> _categories, validateCategoriesReply_t _reply) = 0;
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
     * description: This method retrieves the details associated to one or more POI categories.    
     *       It contains the name, the parent categories, the top level attribute, the
     *   list of attributes, the icons, ... .
     */
    /// This is the method that will be called on remote calls on the method getCategoriesDetails.
    virtual void getCategoriesDetails(const std::shared_ptr<CommonAPI::ClientId> _client, std::vector<::v4::org::genivi::CommonTypes::CategoryID> _categories, getCategoriesDetailsReply_t _reply) = 0;
    /**
     * description: This method creates a new search input and retrieves a handle .
     */
    /// This is the method that will be called on remote calls on the method createPoiSearchHandle.
    virtual void createPoiSearchHandle(const std::shared_ptr<CommonAPI::ClientId> _client, createPoiSearchHandleReply_t _reply) = 0;
    /**
     * description: This method deletes a search input and its associated resources.
     */
    /// This is the method that will be called on remote calls on the method deletePoiSearchHandle.
    virtual void deletePoiSearchHandle(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _poiSearchHandle, deletePoiSearchHandleReply_t _reply) = 0;
    /**
     * description: This method sets the location to start the search around.         If a route
     *   handle was defined before, it will be replaced by this location.
     */
    /// This is the method that will be called on remote calls on the method setCenter.
    virtual void setCenter(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _poiSearchHandle, ::v4::org::genivi::navigation::NavigationTypes::Coordinate3D _location, setCenterReply_t _reply) = 0;
    /**
     * description: This method allows to start a POI search along a guided route.         The
     *   route handle must be valid or the POI search will failed.         If a search
     *   location was defined before, it will be replaced by the route.
     */
    /// This is the method that will be called on remote calls on the method setRouteHandle.
    virtual void setRouteHandle(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _poiSearchHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _routeHandle, uint32_t _startSearchOffset, uint32_t _endSearchOffset, setRouteHandleReply_t _reply) = 0;
    /**
     * description: This method sets the POI categories for the current search input and the
     *   corresponding result-lists for the current session .
     */
    /// This is the method that will be called on remote calls on the method setCategories.
    virtual void setCategories(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _poiSearchHandle, std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::CategoryAndRadius> _poiCategories, setCategoriesReply_t _reply) = 0;
    /**
     * description: This method set POI attributes (optional) for the current search input and the
     *   corresponding result-lists for the current session         An attribute is
     *   attached to a category.
     */
    /// This is the method that will be called on remote calls on the method setAttributes.
    virtual void setAttributes(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _poiSearchHandle, std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::AttributeDetails> _poiAttributes, setAttributesReply_t _reply) = 0;
    /**
     * description: This method sends the search input for the search handle.         The search
     *   will start with the either the location or the route handle.         If no
     *   positon or route handle were configured, the search will use the vehicle
     *   position are center location.
     */
    /// This is the method that will be called on remote calls on the method startPoiSearch.
    virtual void startPoiSearch(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _poiSearchHandle, std::string _inputString, ::v4::org::genivi::navigation::poiservice::POIServiceTypes::SortOption _sortOption, startPoiSearchReply_t _reply) = 0;
    /**
     * description: This method cancels the search for the current session.
     */
    /// This is the method that will be called on remote calls on the method cancelPoiSearch.
    virtual void cancelPoiSearch(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _poiSearchHandle, cancelPoiSearchReply_t _reply) = 0;
    /**
     * description: This method starts to check for POI aound vehicle according to the criteria
     *   defined with the unique handle.         By default, it will search for POI
     *   around vehicle position with default radius defined for each categories.      
     *     If a route handle was defined, it will search along the route with default
     *   categorie's radius.
     */
    /// This is the method that will be called on remote calls on the method startPoiProximityAlert.
    virtual void startPoiProximityAlert(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _poiSearchHandle, std::string _inputString, ::v4::org::genivi::navigation::poiservice::POIServiceTypes::SortOption _sortOption, startPoiProximityAlertReply_t _reply) = 0;
    /**
     * description: This method cancels the search for the current session.
     */
    /// This is the method that will be called on remote calls on the method cancelPoiProximityAlert.
    virtual void cancelPoiProximityAlert(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _poiSearchHandle, cancelPoiProximityAlertReply_t _reply) = 0;
    /**
     * description: This method gets the poi result list (e.g. after a Search/Scroll call) .
     */
    /// This is the method that will be called on remote calls on the method requestResultList.
    virtual void requestResultList(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _poiSearchHandle, uint16_t _offset, uint16_t _maxWindowSize, std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::AttributeID> _attributeList, requestResultListReply_t _reply) = 0;
    /**
     * description: This method retrieves the details associated to one or more POI.         It
     *   contains the name, the parent categories, the list of attributes, the icons,
     *   ... ..
     */
    /// This is the method that will be called on remote calls on the method getPoiDetails.
    virtual void getPoiDetails(const std::shared_ptr<CommonAPI::ClientId> _client, std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::POI_ID> _id, getPoiDetailsReply_t _reply) = 0;
    /**
     * description: This signal indicates that one or more POI categories were added, updated or
     *   removed.
     */
    /// Sends a broadcast event for CategoriesUpdated.
    virtual void fireCategoriesUpdatedEvent(const std::vector<::v4::org::genivi::navigation::poiservice::POIServiceTypes::CategoryAndReason> &_poiCategories) = 0;
    /**
     * description: This signal updates the search or proximity alert status of the specified
     *   handle.
     */
    /// Sends a broadcast event for PoiStatus.
    virtual void firePoiStatusEvent(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_poiSearchHandle, const ::v4::org::genivi::navigation::poiservice::POIServiceTypes::SearchStatusState &_statusValue) = 0;
    /**
     * description: This signal updates in the poi results list.
     */
    /// Sends a broadcast event for ResultListChanged.
    virtual void fireResultListChangedEvent(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_poiSearchHandle, const uint16_t &_resultListSize) = 0;

    using CommonAPI::Stub<POISearchStubAdapter, POISearchStubRemoteEvent>::initStubAdapter;
    typedef CommonAPI::Stub<POISearchStubAdapter, POISearchStubRemoteEvent>::StubAdapterType StubAdapterType;
    typedef CommonAPI::Stub<POISearchStubAdapter, POISearchStubRemoteEvent>::RemoteEventHandlerType RemoteEventHandlerType;
    typedef POISearchStubRemoteEvent RemoteEventType;
    typedef POISearch StubInterface;
};

} // namespace poiservice
} // namespace navigation
} // namespace genivi
} // namespace org
} // namespace v4


// Compatibility
namespace v4_0 = v4;

#endif // V4_ORG_GENIVI_NAVIGATION_POISERVICE_POI_Search_STUB_HPP_