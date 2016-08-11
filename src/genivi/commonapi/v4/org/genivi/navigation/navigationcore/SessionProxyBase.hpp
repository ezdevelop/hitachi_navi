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
#ifndef V4_ORG_GENIVI_NAVIGATION_NAVIGATIONCORE_Session_PROXY_BASE_HPP_
#define V4_ORG_GENIVI_NAVIGATION_NAVIGATIONCORE_Session_PROXY_BASE_HPP_

#include <v4/org/genivi/navigation/navigationcore/Session.hpp>


#include <v4/org/genivi/CommonTypes.hpp>
#include <v4/org/genivi/navigation/NavigationTypes.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/Deployment.hpp>
#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <CommonAPI/Struct.hpp>
#include <cstdint>
#include <string>
#include <vector>

#include <CommonAPI/Event.hpp>
#include <CommonAPI/Proxy.hpp>
#include <functional>
#include <future>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v4 {
namespace org {
namespace genivi {
namespace navigation {
namespace navigationcore {

class SessionProxyBase
    : virtual public CommonAPI::Proxy {
public:
    typedef CommonAPI::Event<
        ::v4::org::genivi::navigation::NavigationTypes::Handle
    > SessionDeletedEvent;

    typedef std::function<void(const CommonAPI::CallStatus&, const ::v4::org::genivi::CommonTypes::Version&)> GetVersionAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v4::org::genivi::navigation::NavigationTypes::Handle&)> CreateSessionAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&)> DeleteSessionAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::v4::org::genivi::navigation::NavigationTypes::SessionStatus&)> GetSessionStatusAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::vector<::v4::org::genivi::navigation::NavigationTypes::Session>&)> GetAllSessionsAsyncCallback;


    /**
     * description: sessionDeleted = This signal is emitted when a session is deleted
     */
    virtual SessionDeletedEvent& getSessionDeletedEvent() = 0;

    /**
     * description: This method returns the API version .
     */
    virtual void getVersion(CommonAPI::CallStatus &_internalCallStatus, ::v4::org::genivi::CommonTypes::Version &_version, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getVersionAsync(GetVersionAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: createSession = This method creates a new session and retrieves a handle .
     */
    virtual void createSession(const std::string &_clientApp, CommonAPI::CallStatus &_internalCallStatus, ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> createSessionAsync(const std::string &_clientApp, CreateSessionAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: deleteSession = This method deletes a session and its associated resources .
     */
    virtual void deleteSession(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> deleteSessionAsync(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, DeleteSessionAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: This method returns whether a given session handle is available or not (for
     *   example because it was deleted) .
     */
    virtual void getSessionStatus(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, CommonAPI::CallStatus &_internalCallStatus, ::v4::org::genivi::navigation::NavigationTypes::SessionStatus &_sessionStatus, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getSessionStatusAsync(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, GetSessionStatusAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
    /**
     * description: This method returns a list of all available sessions .
     */
    virtual void getAllSessions(CommonAPI::CallStatus &_internalCallStatus, std::vector<::v4::org::genivi::navigation::NavigationTypes::Session> &_sessionsList, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> getAllSessionsAsync(GetAllSessionsAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr) = 0;
};

} // namespace navigationcore
} // namespace navigation
} // namespace genivi
} // namespace org
} // namespace v4


// Compatibility
namespace v4_0 = v4;

#endif // V4_ORG_GENIVI_NAVIGATION_NAVIGATIONCORE_Session_PROXY_BASE_HPP_