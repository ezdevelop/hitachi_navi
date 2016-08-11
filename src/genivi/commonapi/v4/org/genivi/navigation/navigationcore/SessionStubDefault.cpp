/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.v201608040617.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v4/org/genivi/navigation/navigationcore/SessionStubDefault.hpp>
#include <assert.h>

namespace v4 {
namespace org {
namespace genivi {
namespace navigation {
namespace navigationcore {

SessionStubDefault::SessionStubDefault():
        remoteEventHandler_(this),
        interfaceVersion_(Session::getInterfaceVersion()) {
}

const CommonAPI::Version& SessionStubDefault::getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client) {
    (void)_client;
    return interfaceVersion_;
}

SessionStubRemoteEvent* SessionStubDefault::initStubAdapter(const std::shared_ptr<SessionStubAdapter> &_adapter) {
    CommonAPI::Stub<SessionStubAdapter, SessionStubRemoteEvent>::stubAdapter_ = _adapter;
    return &remoteEventHandler_;
}


/**
 * description: This method returns the API version .
 */
void SessionStubDefault::getVersion(const std::shared_ptr<CommonAPI::ClientId> _client, getVersionReply_t _reply) {
    (void)_client;
    ::v4::org::genivi::CommonTypes::Version version = {};
    _reply(version);
}

/**
 * description: createSession = This method creates a new session and retrieves a handle .
 */
void SessionStubDefault::createSession(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _clientApp, createSessionReply_t _reply) {
    (void)_client;
    (void) _clientApp;
    ::v4::org::genivi::navigation::NavigationTypes::Handle sessionHandle = 0ul;
    _reply(sessionHandle);
}

/**
 * description: deleteSession = This method deletes a session and its associated resources .
 */
void SessionStubDefault::deleteSession(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, deleteSessionReply_t _reply) {
    (void)_client;
    (void) _sessionHandle;
    _reply();
}

/**
 * description: This method returns whether a given session handle is available or not (for
 *   example because it was deleted) .
 */
void SessionStubDefault::getSessionStatus(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, getSessionStatusReply_t _reply) {
    (void)_client;
    (void) _sessionHandle;
    ::v4::org::genivi::navigation::NavigationTypes::SessionStatus sessionStatus = ::v4::org::genivi::navigation::NavigationTypes::SessionStatus::AVAILABLE;
    if (!sessionStatus.validate()) {
        return;
    }
    _reply(sessionStatus);
}

/**
 * description: This method returns a list of all available sessions .
 */
void SessionStubDefault::getAllSessions(const std::shared_ptr<CommonAPI::ClientId> _client, getAllSessionsReply_t _reply) {
    (void)_client;
    std::vector<::v4::org::genivi::navigation::NavigationTypes::Session> sessionsList = {};
    _reply(sessionsList);
}


/**
 * description: sessionDeleted = This signal is emitted when a session is deleted
 */
void SessionStubDefault::fireSessionDeletedEvent(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle) {
    assert((CommonAPI::Stub<SessionStubAdapter, SessionStubRemoteEvent>::stubAdapter_.lock()) !=NULL);
    auto stubAdapter = CommonAPI::Stub<SessionStubAdapter, SessionStubRemoteEvent>::stubAdapter_.lock();
   	if (stubAdapter)
        stubAdapter->fireSessionDeletedEvent(_sessionHandle);
}


SessionStubDefault::RemoteEventHandler::RemoteEventHandler(SessionStubDefault *_defaultStub)
    : 
      defaultStub_(_defaultStub) {
}

} // namespace navigationcore
} // namespace navigation
} // namespace genivi
} // namespace org
} // namespace v4
