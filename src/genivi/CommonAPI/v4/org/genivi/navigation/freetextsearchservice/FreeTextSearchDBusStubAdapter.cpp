/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.v201608040619.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v4/org/genivi/navigation/freetextsearchservice/FreeTextSearch.hpp>
#include <v4/org/genivi/navigation/freetextsearchservice/FreeTextSearchDBusStubAdapter.hpp>

namespace v4 {
namespace org {
namespace genivi {
namespace navigation {
namespace freetextsearchservice {

std::shared_ptr<CommonAPI::DBus::DBusStubAdapter> createFreeTextSearchDBusStubAdapter(
                   const CommonAPI::DBus::DBusAddress &_address,
                   const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
                   const std::shared_ptr<CommonAPI::StubBase> &_stub) {
    return std::make_shared<FreeTextSearchDBusStubAdapter>(_address, _connection, _stub);
}

INITIALIZER(registerFreeTextSearchDBusStubAdapter) {
    CommonAPI::DBus::Factory::get()->registerStubAdapterCreateMethod(
    	FreeTextSearch::getInterface(), &createFreeTextSearchDBusStubAdapter);
}

FreeTextSearchDBusStubAdapterInternal::~FreeTextSearchDBusStubAdapterInternal() {
    deactivateManagedInstances();
    FreeTextSearchDBusStubAdapterHelper::deinit();
}

void FreeTextSearchDBusStubAdapterInternal::deactivateManagedInstances() {

}

const char* FreeTextSearchDBusStubAdapterInternal::getMethodsDBusIntrospectionXmlData() const {
    static const std::string introspectionData =
        "<method name=\"getInterfaceVersion\">\n"
            "<arg name=\"value\" type=\"uu\" direction=\"out\" />"
        "</method>\n"
        /**
         * description: Response indicating that the search is done.
         */
        "<signal name=\"ftsDone\">\n"
            "<arg name=\"responseId\" type=\"n\" />\n"
            "<arg name=\"ftsStatus\" type=\"i\" />\n"
        "</signal>\n"
        /**
         * description: Response with address results.
         */
        "<signal name=\"ftsResultAddresses\">\n"
            "<arg name=\"responseId\" type=\"n\" />\n"
            "<arg name=\"addresses\" type=\"a(ussasass(yv)(dd)iqb)\" />\n"
            "<arg name=\"moreAvailable\" type=\"b\" />\n"
        "</signal>\n"
        /**
         * description: Response with POI results.
         */
        "<signal name=\"ftsResultPois\">\n"
            "<arg name=\"responseId\" type=\"n\" />\n"
            "<arg name=\"pois\" type=\"a(uuasssasasssss(dd)iqb)\" />\n"
            "<arg name=\"moreAvailable\" type=\"b\" />\n"
        "</signal>\n"
        /**
         * description: Response with POI category suggestions.
         */
        "<signal name=\"ftsResultPoiSuggestions\">\n"
            "<arg name=\"responseId\" type=\"n\" />\n"
            "<arg name=\"poiCategories\" type=\"a(usssa(ussasass(yv)(dd)iqb)q)\" />\n"
        "</signal>\n"
        /**
         * description: This method returns the API version implemented by the content access module.
         */
        "<method name=\"getVersion\">\n"
            "<arg name=\"_requestId\" type=\"n\" direction=\"in\" />\n"
            "<arg name=\"_responseId\" type=\"n\" direction=\"out\" />\n"
            "<arg name=\"_version\" type=\"(qqqs)\" direction=\"out\" />\n"
        "</method>\n"
        /**
         * description: Perform a free text search.
                A single search request will trigger zero
         *   or more FtsResultXxx responses followed by an FtsDone response.
                Each
         *   response will contain 1 page of results.
                A next page of results can be
         *   retrieved with the FtsNextPage request.
                
                When you send a new
         *   request before receiving a done response on the previous request,
                then
         *   the previous request will be canceled.
                You will still get a done
         *   response on the previous request.
                This way each request gets a
         *   response.
         */
        "<method name=\"ftsRequest\">\n"
            "<arg name=\"_requestId\" type=\"n\" direction=\"in\" />\n"
            "<arg name=\"_inputString\" type=\"s\" direction=\"in\" />\n"
            "<arg name=\"_searchLocation\" type=\"(dd)\" direction=\"in\" />\n"
            "<arg name=\"_searchShapes\" type=\"a(yv)\" direction=\"in\" />\n"
            "<arg name=\"_pageSize\" type=\"q\" direction=\"in\" />\n"
            "<arg name=\"_searchOptions\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_searchConditions\" type=\"s\" direction=\"in\" />\n"
            "<arg name=\"_fuzzyLevel\" type=\"y\" direction=\"in\" />\n"
            "<arg name=\"_error\" type=\"i\" direction=\"out\" />\n"
            "<arg name=\"_responseId\" type=\"n\" direction=\"out\" />\n"
            "<arg name=\"_freeTextSearchHandle\" type=\"u\" direction=\"out\" />\n"
        "</method>\n"
        /**
         * description: Get next result page for the last performed search.
                This request will
         *   trigger zero or more FtsResultXxx responses followed by an FtsDone response.
         
         *         If there is no search request done before or if a search request is
         *   still in progress
                hen the FtsDone response will return a
         *   EStatusNoSearchToContinue status.
         */
        "<method name=\"ftsNextPage\">\n"
            "<arg name=\"_requestId\" type=\"n\" direction=\"in\" />\n"
            "<arg name=\"_freeTextSearchHandle\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_searchOptions\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_responseId\" type=\"n\" direction=\"out\" />\n"
        "</method>\n"
        /**
         * description: Cancel an FTS session.
         */
        "<method name=\"ftsCancel\">\n"
            "<arg name=\"_requestId\" type=\"n\" direction=\"in\" />\n"
            "<arg name=\"_freeTextSearchHandle\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"_responseId\" type=\"n\" direction=\"out\" />\n"
        "</method>\n"
        /**
         * description: Release handle(s) if they are not used anymore.
         */
        "<method name=\"deleteLocationHandles\">\n"
            "<arg name=\"_requestId\" type=\"n\" direction=\"in\" />\n"
            "<arg name=\"_locationHandleList\" type=\"au\" direction=\"in\" />\n"
            "<arg name=\"_responseId\" type=\"n\" direction=\"out\" />\n"
        "</method>\n"

    ;
    return introspectionData.c_str();
}

CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearchStub,
        CommonAPI::Version
        > FreeTextSearchDBusStubAdapterInternal::getFreeTextSearchInterfaceVersionStubDispatcher(&FreeTextSearchStub::getInterfaceVersion, "uu");




/**
 * description: This method returns the API version implemented by the content access module.
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearchStub,
    std::tuple<FreeTextSearch::RequestId>,
    std::tuple<FreeTextSearch::RequestId, ::v4::org::genivi::CommonTypes::Version>,
    std::tuple<CommonAPI::EmptyDeployment>,
    std::tuple<CommonAPI::EmptyDeployment, ::v4::org::genivi::CommonTypes_::VersionDeployment_t>
    
    > FreeTextSearchDBusStubAdapterInternal::getVersionStubDispatcher(
    &FreeTextSearchStub::getVersion, "n(qqqs)",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
                	std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<::v4::org::genivi::CommonTypes_::VersionDeployment_t*>(nullptr)));

/**
 * description: Perform a free text search.
        A single search request will trigger zero
 *   or more FtsResultXxx responses followed by an FtsDone response.
        Each
 *   response will contain 1 page of results.
        A next page of results can be
 *   retrieved with the FtsNextPage request.
        
        When you send a new
 *   request before receiving a done response on the previous request,
        then
 *   the previous request will be canceled.
        You will still get a done
 *   response on the previous request.
        This way each request gets a
 *   response.
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearchStub,
    std::tuple<FreeTextSearch::RequestId, FreeTextSearch::FtsString, ::v4::org::genivi::navigation::NavigationTypes::Coordinate2D, FreeTextSearch::ShapeList, FreeTextSearch::PageSize, FreeTextSearch::SearchOptions, FreeTextSearch::FtsString, FreeTextSearch::FuzzyLevel>,
    std::tuple<FreeTextSearch::ftsRequestError, FreeTextSearch::RequestId, ::v4::org::genivi::navigation::NavigationTypes::Handle>,
    std::tuple<CommonAPI::EmptyDeployment, CommonAPI::DBus::StringDeployment, ::v4::org::genivi::navigation::NavigationTypes_::Coordinate2DDeployment_t, FreeTextSearch_::ShapeListDeployment_t, CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment, CommonAPI::DBus::StringDeployment, CommonAPI::EmptyDeployment>,
    std::tuple<CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment>
    
    > FreeTextSearchDBusStubAdapterInternal::ftsRequestStubDispatcher(
    &FreeTextSearchStub::ftsRequest, "inu",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::DBus::StringDeployment*>(nullptr), static_cast<::v4::org::genivi::navigation::NavigationTypes_::Coordinate2DDeployment_t*>(nullptr), static_cast<FreeTextSearch_::ShapeListDeployment_t*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::DBus::StringDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
                	std::make_tuple(static_cast<CommonAPI::EmptyDeployment *>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr)));

/**
 * description: Get next result page for the last performed search.
        This request will
 *   trigger zero or more FtsResultXxx responses followed by an FtsDone response.
 
 *         If there is no search request done before or if a search request is
 *   still in progress
        hen the FtsDone response will return a
 *   EStatusNoSearchToContinue status.
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearchStub,
    std::tuple<FreeTextSearch::RequestId, ::v4::org::genivi::navigation::NavigationTypes::Handle, FreeTextSearch::SearchOptions>,
    std::tuple<FreeTextSearch::RequestId>,
    std::tuple<CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment>,
    std::tuple<CommonAPI::EmptyDeployment>
    
    > FreeTextSearchDBusStubAdapterInternal::ftsNextPageStubDispatcher(
    &FreeTextSearchStub::ftsNextPage, "n",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
                	std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr)));

/**
 * description: Cancel an FTS session.
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearchStub,
    std::tuple<FreeTextSearch::RequestId, ::v4::org::genivi::navigation::NavigationTypes::Handle>,
    std::tuple<FreeTextSearch::RequestId>,
    std::tuple<CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment>,
    std::tuple<CommonAPI::EmptyDeployment>
    
    > FreeTextSearchDBusStubAdapterInternal::ftsCancelStubDispatcher(
    &FreeTextSearchStub::ftsCancel, "n",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
                	std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr)));

/**
 * description: Release handle(s) if they are not used anymore.
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearchStub,
    std::tuple<FreeTextSearch::RequestId, FreeTextSearch::LocationHandleList>,
    std::tuple<FreeTextSearch::RequestId>,
    std::tuple<CommonAPI::EmptyDeployment, FreeTextSearch_::LocationHandleListDeployment_t>,
    std::tuple<CommonAPI::EmptyDeployment>
    
    > FreeTextSearchDBusStubAdapterInternal::deleteLocationHandlesStubDispatcher(
    &FreeTextSearchStub::deleteLocationHandles, "n",
					std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<FreeTextSearch_::LocationHandleListDeployment_t*>(nullptr)),
                	std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr)));



/**
 * description: Response indicating that the search is done.
 */
CommonAPI::DBus::DBusMethodWithReplyAdapterDispatcher<
    ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearchStub,
    FreeTextSearchStubAdapter,
    std::tuple<>,
    std::tuple<bool>
    > FreeTextSearchDBusStubAdapterInternal::subscribeFtsDoneSelectiveStubDispatcher(&FreeTextSearchStubAdapter::subscribeForftsDoneSelective, "b");

CommonAPI::DBus::DBusMethodWithReplyAdapterDispatcher<
    ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearchStub,
    FreeTextSearchStubAdapter,
    std::tuple<>,
    std::tuple<>
    > FreeTextSearchDBusStubAdapterInternal::unsubscribeFtsDoneSelectiveStubDispatcher(&FreeTextSearchStubAdapter::unsubscribeFromftsDoneSelective, "");

void FreeTextSearchDBusStubAdapterInternal::fireFtsDoneSelective(const std::shared_ptr<CommonAPI::ClientId> _client, const ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearch::RequestId &_responseId, const ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearch::FtsStatus &_ftsStatus) {
    std::shared_ptr<CommonAPI::DBus::DBusClientId> dbusClient = std::dynamic_pointer_cast<CommonAPI::DBus::DBusClientId, CommonAPI::ClientId>(_client);

    if(dbusClient)
    {
        CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
        ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearch::RequestId,
        ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearch::FtsStatus
        >>::sendSignal(
                dbusClient->getDBusId(),
                *this,
                "ftsDone",
                "ni",
        _responseId,
        _ftsStatus
        );
    }
}

void FreeTextSearchDBusStubAdapterInternal::sendFtsDoneSelective(const ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearch::RequestId &_responseId, const ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearch::FtsStatus &_ftsStatus, const std::shared_ptr<CommonAPI::ClientIdList> _receivers) {
    std::shared_ptr<CommonAPI::ClientIdList> actualReceiverList = _receivers;

    if (!_receivers)
        actualReceiverList = subscribersForFtsDoneSelective_;

    for (auto clientIdIterator = actualReceiverList->cbegin(); clientIdIterator != actualReceiverList->cend(); clientIdIterator++) {
        if (!_receivers || subscribersForFtsDoneSelective_->find(*clientIdIterator) != subscribersForFtsDoneSelective_->end()) {
            fireFtsDoneSelective(*clientIdIterator, _responseId, _ftsStatus);
        }
    }
}

void FreeTextSearchDBusStubAdapterInternal::subscribeForftsDoneSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, bool& success) {
    bool ok = FreeTextSearchDBusStubAdapterHelper::stub_->onFtsDoneSelectiveSubscriptionRequested(clientId);
    if (ok) {
        subscribersForFtsDoneSelective_->insert(clientId);
        FreeTextSearchDBusStubAdapterHelper::stub_->onFtsDoneSelectiveSubscriptionChanged(clientId, CommonAPI::SelectiveBroadcastSubscriptionEvent::SUBSCRIBED);
        success = true;
    } else {
        success = false;
    }
}

void FreeTextSearchDBusStubAdapterInternal::unsubscribeFromftsDoneSelective(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    subscribersForFtsDoneSelective_->erase(clientId);
    FreeTextSearchDBusStubAdapterHelper::stub_->onFtsDoneSelectiveSubscriptionChanged(clientId, CommonAPI::SelectiveBroadcastSubscriptionEvent::UNSUBSCRIBED);
}

std::shared_ptr<CommonAPI::ClientIdList> const FreeTextSearchDBusStubAdapterInternal::getSubscribersForFtsDoneSelective() {
    return subscribersForFtsDoneSelective_;
}
/**
 * description: Response with address results.
 */
CommonAPI::DBus::DBusMethodWithReplyAdapterDispatcher<
    ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearchStub,
    FreeTextSearchStubAdapter,
    std::tuple<>,
    std::tuple<bool>
    > FreeTextSearchDBusStubAdapterInternal::subscribeFtsResultAddressesSelectiveStubDispatcher(&FreeTextSearchStubAdapter::subscribeForftsResultAddressesSelective, "b");

CommonAPI::DBus::DBusMethodWithReplyAdapterDispatcher<
    ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearchStub,
    FreeTextSearchStubAdapter,
    std::tuple<>,
    std::tuple<>
    > FreeTextSearchDBusStubAdapterInternal::unsubscribeFtsResultAddressesSelectiveStubDispatcher(&FreeTextSearchStubAdapter::unsubscribeFromftsResultAddressesSelective, "");

void FreeTextSearchDBusStubAdapterInternal::fireFtsResultAddressesSelective(const std::shared_ptr<CommonAPI::ClientId> _client, const ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearch::RequestId &_responseId, const ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearch::Addresses &_addresses, const bool &_moreAvailable) {
    std::shared_ptr<CommonAPI::DBus::DBusClientId> dbusClient = std::dynamic_pointer_cast<CommonAPI::DBus::DBusClientId, CommonAPI::ClientId>(_client);

    if(dbusClient)
    {
        CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
        ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearch::RequestId,
        CommonAPI::Deployable<::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearch::Addresses, FreeTextSearch_::AddressesDeployment_t>,
        bool
        >>::sendSignal(
                dbusClient->getDBusId(),
                *this,
                "ftsResultAddresses",
                "na(ussasass(yv)(dd)iqb)b",
        _responseId,
        CommonAPI::Deployable<::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearch::Addresses, FreeTextSearch_::AddressesDeployment_t>(_addresses, static_cast<FreeTextSearch_::AddressesDeployment_t*>(nullptr)),
        _moreAvailable
        );
    }
}

void FreeTextSearchDBusStubAdapterInternal::sendFtsResultAddressesSelective(const ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearch::RequestId &_responseId, const ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearch::Addresses &_addresses, const bool &_moreAvailable, const std::shared_ptr<CommonAPI::ClientIdList> _receivers) {
    std::shared_ptr<CommonAPI::ClientIdList> actualReceiverList = _receivers;

    if (!_receivers)
        actualReceiverList = subscribersForFtsResultAddressesSelective_;

    for (auto clientIdIterator = actualReceiverList->cbegin(); clientIdIterator != actualReceiverList->cend(); clientIdIterator++) {
        if (!_receivers || subscribersForFtsResultAddressesSelective_->find(*clientIdIterator) != subscribersForFtsResultAddressesSelective_->end()) {
            fireFtsResultAddressesSelective(*clientIdIterator, _responseId, _addresses, _moreAvailable);
        }
    }
}

void FreeTextSearchDBusStubAdapterInternal::subscribeForftsResultAddressesSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, bool& success) {
    bool ok = FreeTextSearchDBusStubAdapterHelper::stub_->onFtsResultAddressesSelectiveSubscriptionRequested(clientId);
    if (ok) {
        subscribersForFtsResultAddressesSelective_->insert(clientId);
        FreeTextSearchDBusStubAdapterHelper::stub_->onFtsResultAddressesSelectiveSubscriptionChanged(clientId, CommonAPI::SelectiveBroadcastSubscriptionEvent::SUBSCRIBED);
        success = true;
    } else {
        success = false;
    }
}

void FreeTextSearchDBusStubAdapterInternal::unsubscribeFromftsResultAddressesSelective(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    subscribersForFtsResultAddressesSelective_->erase(clientId);
    FreeTextSearchDBusStubAdapterHelper::stub_->onFtsResultAddressesSelectiveSubscriptionChanged(clientId, CommonAPI::SelectiveBroadcastSubscriptionEvent::UNSUBSCRIBED);
}

std::shared_ptr<CommonAPI::ClientIdList> const FreeTextSearchDBusStubAdapterInternal::getSubscribersForFtsResultAddressesSelective() {
    return subscribersForFtsResultAddressesSelective_;
}
/**
 * description: Response with POI results.
 */
CommonAPI::DBus::DBusMethodWithReplyAdapterDispatcher<
    ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearchStub,
    FreeTextSearchStubAdapter,
    std::tuple<>,
    std::tuple<bool>
    > FreeTextSearchDBusStubAdapterInternal::subscribeFtsResultPoisSelectiveStubDispatcher(&FreeTextSearchStubAdapter::subscribeForftsResultPoisSelective, "b");

CommonAPI::DBus::DBusMethodWithReplyAdapterDispatcher<
    ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearchStub,
    FreeTextSearchStubAdapter,
    std::tuple<>,
    std::tuple<>
    > FreeTextSearchDBusStubAdapterInternal::unsubscribeFtsResultPoisSelectiveStubDispatcher(&FreeTextSearchStubAdapter::unsubscribeFromftsResultPoisSelective, "");

void FreeTextSearchDBusStubAdapterInternal::fireFtsResultPoisSelective(const std::shared_ptr<CommonAPI::ClientId> _client, const ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearch::RequestId &_responseId, const ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearch::POIs &_pois, const bool &_moreAvailable) {
    std::shared_ptr<CommonAPI::DBus::DBusClientId> dbusClient = std::dynamic_pointer_cast<CommonAPI::DBus::DBusClientId, CommonAPI::ClientId>(_client);

    if(dbusClient)
    {
        CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
        ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearch::RequestId,
        CommonAPI::Deployable<::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearch::POIs, FreeTextSearch_::POIsDeployment_t>,
        bool
        >>::sendSignal(
                dbusClient->getDBusId(),
                *this,
                "ftsResultPois",
                "na(uuasssasasssss(dd)iqb)b",
        _responseId,
        CommonAPI::Deployable<::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearch::POIs, FreeTextSearch_::POIsDeployment_t>(_pois, static_cast<FreeTextSearch_::POIsDeployment_t*>(nullptr)),
        _moreAvailable
        );
    }
}

void FreeTextSearchDBusStubAdapterInternal::sendFtsResultPoisSelective(const ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearch::RequestId &_responseId, const ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearch::POIs &_pois, const bool &_moreAvailable, const std::shared_ptr<CommonAPI::ClientIdList> _receivers) {
    std::shared_ptr<CommonAPI::ClientIdList> actualReceiverList = _receivers;

    if (!_receivers)
        actualReceiverList = subscribersForFtsResultPoisSelective_;

    for (auto clientIdIterator = actualReceiverList->cbegin(); clientIdIterator != actualReceiverList->cend(); clientIdIterator++) {
        if (!_receivers || subscribersForFtsResultPoisSelective_->find(*clientIdIterator) != subscribersForFtsResultPoisSelective_->end()) {
            fireFtsResultPoisSelective(*clientIdIterator, _responseId, _pois, _moreAvailable);
        }
    }
}

void FreeTextSearchDBusStubAdapterInternal::subscribeForftsResultPoisSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, bool& success) {
    bool ok = FreeTextSearchDBusStubAdapterHelper::stub_->onFtsResultPoisSelectiveSubscriptionRequested(clientId);
    if (ok) {
        subscribersForFtsResultPoisSelective_->insert(clientId);
        FreeTextSearchDBusStubAdapterHelper::stub_->onFtsResultPoisSelectiveSubscriptionChanged(clientId, CommonAPI::SelectiveBroadcastSubscriptionEvent::SUBSCRIBED);
        success = true;
    } else {
        success = false;
    }
}

void FreeTextSearchDBusStubAdapterInternal::unsubscribeFromftsResultPoisSelective(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    subscribersForFtsResultPoisSelective_->erase(clientId);
    FreeTextSearchDBusStubAdapterHelper::stub_->onFtsResultPoisSelectiveSubscriptionChanged(clientId, CommonAPI::SelectiveBroadcastSubscriptionEvent::UNSUBSCRIBED);
}

std::shared_ptr<CommonAPI::ClientIdList> const FreeTextSearchDBusStubAdapterInternal::getSubscribersForFtsResultPoisSelective() {
    return subscribersForFtsResultPoisSelective_;
}
/**
 * description: Response with POI category suggestions.
 */
CommonAPI::DBus::DBusMethodWithReplyAdapterDispatcher<
    ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearchStub,
    FreeTextSearchStubAdapter,
    std::tuple<>,
    std::tuple<bool>
    > FreeTextSearchDBusStubAdapterInternal::subscribeFtsResultPoiSuggestionsSelectiveStubDispatcher(&FreeTextSearchStubAdapter::subscribeForftsResultPoiSuggestionsSelective, "b");

CommonAPI::DBus::DBusMethodWithReplyAdapterDispatcher<
    ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearchStub,
    FreeTextSearchStubAdapter,
    std::tuple<>,
    std::tuple<>
    > FreeTextSearchDBusStubAdapterInternal::unsubscribeFtsResultPoiSuggestionsSelectiveStubDispatcher(&FreeTextSearchStubAdapter::unsubscribeFromftsResultPoiSuggestionsSelective, "");

void FreeTextSearchDBusStubAdapterInternal::fireFtsResultPoiSuggestionsSelective(const std::shared_ptr<CommonAPI::ClientId> _client, const ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearch::RequestId &_responseId, const ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearch::POICategories &_poiCategories) {
    std::shared_ptr<CommonAPI::DBus::DBusClientId> dbusClient = std::dynamic_pointer_cast<CommonAPI::DBus::DBusClientId, CommonAPI::ClientId>(_client);

    if(dbusClient)
    {
        CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<
        ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearch::RequestId,
        CommonAPI::Deployable<::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearch::POICategories, FreeTextSearch_::POICategoriesDeployment_t>
        >>::sendSignal(
                dbusClient->getDBusId(),
                *this,
                "ftsResultPoiSuggestions",
                "na(usssa(ussasass(yv)(dd)iqb)q)",
        _responseId,
        CommonAPI::Deployable<::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearch::POICategories, FreeTextSearch_::POICategoriesDeployment_t>(_poiCategories, static_cast<FreeTextSearch_::POICategoriesDeployment_t*>(nullptr))
        );
    }
}

void FreeTextSearchDBusStubAdapterInternal::sendFtsResultPoiSuggestionsSelective(const ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearch::RequestId &_responseId, const ::v4::org::genivi::navigation::freetextsearchservice::FreeTextSearch::POICategories &_poiCategories, const std::shared_ptr<CommonAPI::ClientIdList> _receivers) {
    std::shared_ptr<CommonAPI::ClientIdList> actualReceiverList = _receivers;

    if (!_receivers)
        actualReceiverList = subscribersForFtsResultPoiSuggestionsSelective_;

    for (auto clientIdIterator = actualReceiverList->cbegin(); clientIdIterator != actualReceiverList->cend(); clientIdIterator++) {
        if (!_receivers || subscribersForFtsResultPoiSuggestionsSelective_->find(*clientIdIterator) != subscribersForFtsResultPoiSuggestionsSelective_->end()) {
            fireFtsResultPoiSuggestionsSelective(*clientIdIterator, _responseId, _poiCategories);
        }
    }
}

void FreeTextSearchDBusStubAdapterInternal::subscribeForftsResultPoiSuggestionsSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, bool& success) {
    bool ok = FreeTextSearchDBusStubAdapterHelper::stub_->onFtsResultPoiSuggestionsSelectiveSubscriptionRequested(clientId);
    if (ok) {
        subscribersForFtsResultPoiSuggestionsSelective_->insert(clientId);
        FreeTextSearchDBusStubAdapterHelper::stub_->onFtsResultPoiSuggestionsSelectiveSubscriptionChanged(clientId, CommonAPI::SelectiveBroadcastSubscriptionEvent::SUBSCRIBED);
        success = true;
    } else {
        success = false;
    }
}

void FreeTextSearchDBusStubAdapterInternal::unsubscribeFromftsResultPoiSuggestionsSelective(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    subscribersForFtsResultPoiSuggestionsSelective_->erase(clientId);
    FreeTextSearchDBusStubAdapterHelper::stub_->onFtsResultPoiSuggestionsSelectiveSubscriptionChanged(clientId, CommonAPI::SelectiveBroadcastSubscriptionEvent::UNSUBSCRIBED);
}

std::shared_ptr<CommonAPI::ClientIdList> const FreeTextSearchDBusStubAdapterInternal::getSubscribersForFtsResultPoiSuggestionsSelective() {
    return subscribersForFtsResultPoiSuggestionsSelective_;
}


const FreeTextSearchDBusStubAdapterHelper::StubDispatcherTable& FreeTextSearchDBusStubAdapterInternal::getStubDispatcherTable() {
    return stubDispatcherTable_;
}

const CommonAPI::DBus::StubAttributeTable& FreeTextSearchDBusStubAdapterInternal::getStubAttributeTable() {
    return stubAttributeTable_;
}

FreeTextSearchDBusStubAdapterInternal::FreeTextSearchDBusStubAdapterInternal(
        const CommonAPI::DBus::DBusAddress &_address,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub)
	: CommonAPI::DBus::DBusStubAdapter(_address, _connection,false),
      FreeTextSearchDBusStubAdapterHelper(_address, _connection, std::dynamic_pointer_cast<FreeTextSearchStub>(_stub), false),
      stubDispatcherTable_({
            /**
             * description: This method returns the API version implemented by the content access module.
             */
            { { "getVersion", "n" }, &org::genivi::navigation::freetextsearchservice::FreeTextSearchDBusStubAdapterInternal::getVersionStubDispatcher },
            /**
             * description: Perform a free text search.
                    A single search request will trigger zero
             *   or more FtsResultXxx responses followed by an FtsDone response.
                    Each
             *   response will contain 1 page of results.
                    A next page of results can be
             *   retrieved with the FtsNextPage request.
                    
                    When you send a new
             *   request before receiving a done response on the previous request,
                    then
             *   the previous request will be canceled.
                    You will still get a done
             *   response on the previous request.
                    This way each request gets a
             *   response.
             */
            { { "ftsRequest", "ns(dd)a(yv)qusy" }, &org::genivi::navigation::freetextsearchservice::FreeTextSearchDBusStubAdapterInternal::ftsRequestStubDispatcher },
            /**
             * description: Get next result page for the last performed search.
                    This request will
             *   trigger zero or more FtsResultXxx responses followed by an FtsDone response.
             
             *         If there is no search request done before or if a search request is
             *   still in progress
                    hen the FtsDone response will return a
             *   EStatusNoSearchToContinue status.
             */
            { { "ftsNextPage", "nuu" }, &org::genivi::navigation::freetextsearchservice::FreeTextSearchDBusStubAdapterInternal::ftsNextPageStubDispatcher },
            /**
             * description: Cancel an FTS session.
             */
            { { "ftsCancel", "nu" }, &org::genivi::navigation::freetextsearchservice::FreeTextSearchDBusStubAdapterInternal::ftsCancelStubDispatcher },
            /**
             * description: Release handle(s) if they are not used anymore.
             */
            { { "deleteLocationHandles", "nau" }, &org::genivi::navigation::freetextsearchservice::FreeTextSearchDBusStubAdapterInternal::deleteLocationHandlesStubDispatcher }
            ,
            { { "subscribeForftsDoneSelective", "" }, &org::genivi::navigation::freetextsearchservice::FreeTextSearchDBusStubAdapterInternal::subscribeFtsDoneSelectiveStubDispatcher }
            ,
            { { "unsubscribeFromftsDoneSelective", "" }, &org::genivi::navigation::freetextsearchservice::FreeTextSearchDBusStubAdapterInternal::unsubscribeFtsDoneSelectiveStubDispatcher },
            { { "subscribeForftsResultAddressesSelective", "" }, &org::genivi::navigation::freetextsearchservice::FreeTextSearchDBusStubAdapterInternal::subscribeFtsResultAddressesSelectiveStubDispatcher }
            ,
            { { "unsubscribeFromftsResultAddressesSelective", "" }, &org::genivi::navigation::freetextsearchservice::FreeTextSearchDBusStubAdapterInternal::unsubscribeFtsResultAddressesSelectiveStubDispatcher },
            { { "subscribeForftsResultPoisSelective", "" }, &org::genivi::navigation::freetextsearchservice::FreeTextSearchDBusStubAdapterInternal::subscribeFtsResultPoisSelectiveStubDispatcher }
            ,
            { { "unsubscribeFromftsResultPoisSelective", "" }, &org::genivi::navigation::freetextsearchservice::FreeTextSearchDBusStubAdapterInternal::unsubscribeFtsResultPoisSelectiveStubDispatcher },
            { { "subscribeForftsResultPoiSuggestionsSelective", "" }, &org::genivi::navigation::freetextsearchservice::FreeTextSearchDBusStubAdapterInternal::subscribeFtsResultPoiSuggestionsSelectiveStubDispatcher }
            ,
            { { "unsubscribeFromftsResultPoiSuggestionsSelective", "" }, &org::genivi::navigation::freetextsearchservice::FreeTextSearchDBusStubAdapterInternal::unsubscribeFtsResultPoiSuggestionsSelectiveStubDispatcher }
            }),
        stubAttributeTable_() {
    subscribersForFtsDoneSelective_ = std::make_shared<CommonAPI::ClientIdList>();
    subscribersForFtsResultAddressesSelective_ = std::make_shared<CommonAPI::ClientIdList>();
    subscribersForFtsResultPoisSelective_ = std::make_shared<CommonAPI::ClientIdList>();
    subscribersForFtsResultPoiSuggestionsSelective_ = std::make_shared<CommonAPI::ClientIdList>();

    stubDispatcherTable_.insert({ { "getInterfaceVersion", "" }, &org::genivi::navigation::freetextsearchservice::FreeTextSearchDBusStubAdapterInternal::getFreeTextSearchInterfaceVersionStubDispatcher });
}

bool FreeTextSearchDBusStubAdapterInternal::hasFreedesktopProperties() {
    return false;
}

} // namespace freetextsearchservice
} // namespace navigation
} // namespace genivi
} // namespace org
} // namespace v4