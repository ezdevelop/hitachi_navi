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
 * description: This interface offers methods that implement the navigation core session
 *   functionality of a navigation system.
 */
#include <v4/org/genivi/navigation/mapviewer/SessionDBusProxy.hpp>

namespace v4 {
namespace org {
namespace genivi {
namespace navigation {
namespace mapviewer {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createSessionDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection) {
	return std::make_shared<SessionDBusProxy>(_address, _connection);
}

INITIALIZER(registerSessionDBusProxy) {
     CommonAPI::DBus::Factory::get()->registerProxyCreateMethod(
		Session::getInterface(),
		&createSessionDBusProxy);
}

SessionDBusProxy::SessionDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection)
	:	CommonAPI::DBus::DBusProxy(_address, _connection)
,		sessionDeleted_(*this, "sessionDeleted", "u", std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr)))
{
}


SessionDBusProxy::SessionDeletedEvent& SessionDBusProxy::getSessionDeletedEvent() {
    return sessionDeleted_;
}
    
    /**
     * description: This method returns the API version .
     */
    void SessionDBusProxy::getVersion(CommonAPI::CallStatus &_internalCallStatus, ::v4::org::genivi::CommonTypes::Version &_version, const CommonAPI::CallInfo *_info) {
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
    std::future<CommonAPI::CallStatus> SessionDBusProxy::getVersionAsync(GetVersionAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
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
     * description: createSession = This method creates a new session and retrieves a handle .
     */
    void SessionDBusProxy::createSession(const std::string &_clientApp, CommonAPI::CallStatus &_internalCallStatus, ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_clientApp(_clientApp, static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::Handle, CommonAPI::EmptyDeployment> deploy_sessionHandle(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::Handle,CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "createSession",
        "s",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_clientApp,
_internalCallStatus,
deploy_sessionHandle);
_sessionHandle = deploy_sessionHandle.getValue();
}
    std::future<CommonAPI::CallStatus> SessionDBusProxy::createSessionAsync(const std::string &_clientApp, CreateSessionAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_clientApp(_clientApp, static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::Handle, CommonAPI::EmptyDeployment> deploy_sessionHandle(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::Handle,CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "createSession",
        "s",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_clientApp,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::Handle, CommonAPI::EmptyDeployment> _sessionHandle) {
        	if (_callback)
        		_callback(_internalCallStatus, _sessionHandle.getValue());
        },
        std::make_tuple(deploy_sessionHandle));
    }
    /**
     * description: deleteSession = This method deletes a session and its associated resources .
     */
    void SessionDBusProxy::deleteSession(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::Handle, CommonAPI::EmptyDeployment> deploy_sessionHandle(_sessionHandle, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::Handle, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
        	>::callMethodWithReply(
        *this,
        "deleteSession",
        "u",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_sessionHandle,
_internalCallStatus);
}
    std::future<CommonAPI::CallStatus> SessionDBusProxy::deleteSessionAsync(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, DeleteSessionAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::Handle, CommonAPI::EmptyDeployment> deploy_sessionHandle(_sessionHandle, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::Handle, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            >
        	>::callMethodAsync(
        *this,
        "deleteSession",
        "u",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_sessionHandle,
        [_callback] (CommonAPI::CallStatus _internalCallStatus) {
        	if (_callback)
        		_callback(_internalCallStatus);
        },
        std::make_tuple());
    }
    /**
     * description: This method returns whether a given session handle is available or not (for
     *   example because it was deleted) .
     */
    void SessionDBusProxy::getSessionStatus(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, CommonAPI::CallStatus &_internalCallStatus, ::v4::org::genivi::navigation::NavigationTypes::SessionStatus &_sessionStatus, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::Handle, CommonAPI::EmptyDeployment> deploy_sessionHandle(_sessionHandle, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::SessionStatus, CommonAPI::EmptyDeployment> deploy_sessionStatus(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::Handle, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::SessionStatus,CommonAPI::EmptyDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "getSessionStatus",
        "u",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_sessionHandle,
_internalCallStatus,
deploy_sessionStatus);
_sessionStatus = deploy_sessionStatus.getValue();
}
    std::future<CommonAPI::CallStatus> SessionDBusProxy::getSessionStatusAsync(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_sessionHandle, GetSessionStatusAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::Handle, CommonAPI::EmptyDeployment> deploy_sessionHandle(_sessionHandle, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::SessionStatus, CommonAPI::EmptyDeployment> deploy_sessionStatus(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::Handle, CommonAPI::EmptyDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::SessionStatus,CommonAPI::EmptyDeployment>
            >
        	>::callMethodAsync(
        *this,
        "getSessionStatus",
        "u",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_sessionHandle,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<::v4::org::genivi::navigation::NavigationTypes::SessionStatus, CommonAPI::EmptyDeployment> _sessionStatus) {
        	if (_callback)
        		_callback(_internalCallStatus, _sessionStatus.getValue());
        },
        std::make_tuple(deploy_sessionStatus));
    }
    /**
     * description: This method returns a list of all available sessions .
     */
    void SessionDBusProxy::getAllSessions(CommonAPI::CallStatus &_internalCallStatus, std::vector<::v4::org::genivi::navigation::NavigationTypes::Session> &_sessionsList, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::NavigationTypes::Session>, CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::NavigationTypes_::SessionDeployment_t>> deploy_sessionsList(static_cast<CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::NavigationTypes_::SessionDeployment_t>*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::NavigationTypes::Session>,CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::NavigationTypes_::SessionDeployment_t>>
            >
        	>::callMethodWithReply(
        *this,
        "getAllSessions",
        "",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
_internalCallStatus,
deploy_sessionsList);
_sessionsList = deploy_sessionsList.getValue();
}
    std::future<CommonAPI::CallStatus> SessionDBusProxy::getAllSessionsAsync(GetAllSessionsAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::NavigationTypes::Session>, CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::NavigationTypes_::SessionDeployment_t>> deploy_sessionsList(static_cast<CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::NavigationTypes_::SessionDeployment_t>*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::NavigationTypes::Session>,CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::NavigationTypes_::SessionDeployment_t>>
            >
        	>::callMethodAsync(
        *this,
        "getAllSessions",
        "",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<std::vector<::v4::org::genivi::navigation::NavigationTypes::Session>, CommonAPI::DBus::ArrayDeployment<::v4::org::genivi::navigation::NavigationTypes_::SessionDeployment_t>> _sessionsList) {
        	if (_callback)
        		_callback(_internalCallStatus, _sessionsList.getValue());
        },
        std::make_tuple(deploy_sessionsList));
    }


void SessionDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
          ownVersionMajor = 4;
          ownVersionMinor = 0;
      }

      } // namespace mapviewer
      } // namespace navigation
      } // namespace genivi
      } // namespace org
      } // namespace v4