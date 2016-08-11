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
 * description: This interface offers methods that implement the navigation core session
 *   functionality of a navigation system.
 */
#ifndef V4_ORG_GENIVI_NAVIGATION_NAVIGATIONCORE_Session_STUB_DEFAULT_HPP_
#define V4_ORG_GENIVI_NAVIGATION_NAVIGATIONCORE_Session_STUB_DEFAULT_HPP_


#include <v4/org/genivi/navigation/navigationcore/SessionStub.hpp>
#include <sstream>

namespace v4 {
namespace org {
namespace genivi {
namespace navigation {
namespace navigationcore {

/**
 * Provides a default implementation for SessionStubRemoteEvent and
 * SessionStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class SessionStubDefault
    : public virtual SessionStub {
public:
    SessionStubDefault();

    SessionStubRemoteEvent* initStubAdapter(const std::shared_ptr<SessionStubAdapter> &_adapter);

    const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client);


    /**
     * description: This method returns the API version .
     */
    virtual void getVersion(const std::shared_ptr<CommonAPI::ClientId> _client, getVersionReply_t _reply);
    /**
     * description: createSession = This method creates a new session and retrieves a handle .
     */
    virtual void createSession(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _clientApp, createSessionReply_t _reply);
    /**
     * description: deleteSession = This method deletes a session and its associated resources .
     */
    virtual void deleteSession(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, deleteSessionReply_t _reply);
    /**
     * description: This method returns whether a given session handle is available or not (for
     *   example because it was deleted) .
     */
    virtual void getSessionStatus(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, getSessionStatusReply_t _reply);
    /**
     * description: This method returns a list of all available sessions .
     */
    virtual void getAllSessions(const std::shared_ptr<CommonAPI::ClientId> _client, getAllSessionsReply_t _reply);

/**
 * description: sessionDeleted = This signal is emitted when a session is deleted
 */
virtual void fireSessionDeletedEvent(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle);


protected:
    class RemoteEventHandler: public virtual SessionStubRemoteEvent {
    public:
        RemoteEventHandler(SessionStubDefault *_defaultStub);


    private:
        SessionStubDefault *defaultStub_;
    };
private:
    SessionStubDefault::RemoteEventHandler remoteEventHandler_;


    CommonAPI::Version interfaceVersion_;
};

} // namespace navigationcore
} // namespace navigation
} // namespace genivi
} // namespace org
} // namespace v4


// Compatibility
namespace v4_0 = v4;

#endif // V4_ORG_GENIVI_NAVIGATION_NAVIGATIONCORE_Session_STUB_DEFAULT
