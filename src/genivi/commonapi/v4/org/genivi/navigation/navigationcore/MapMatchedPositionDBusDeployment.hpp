/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.v201608040619.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/

#ifndef V4_ORG_GENIVI_NAVIGATION_NAVIGATIONCORE_Map_Matched_Position_DBUS_DEPLOYMENT_HPP_
#define V4_ORG_GENIVI_NAVIGATION_NAVIGATIONCORE_Map_Matched_Position_DBUS_DEPLOYMENT_HPP_

#include <v4/org/genivi/CommonTypesDBusDeployment.hpp>
#include <v4/org/genivi/navigation/navigationcore/MapMatchedPositionDBusDeployment.hpp>
#include <v4/org/genivi/navigation/NavigationTypesDBusDeployment.hpp>        


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif
#include <CommonAPI/DBus/DBusDeployment.hpp>
#undef COMMONAPI_INTERNAL_COMPILATION

namespace v4 {
namespace org {
namespace genivi {
namespace navigation {
namespace navigationcore {
namespace MapMatchedPosition_ {

// Interface-specific deployment types
typedef CommonAPI::DBus::VariantDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> PositionItemValueDeployment_t;

typedef CommonAPI::MapDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::VariantDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment
    >
> PositionItemDictDeployment_t;

typedef CommonAPI::DBus::VariantDeployment<
    CommonAPI::DBus::StringDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> AddressItemValueDeployment_t;

typedef CommonAPI::MapDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::VariantDeployment<
        CommonAPI::DBus::StringDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment
    >
> AddressItemDictDeployment_t;

typedef CommonAPI::DBus::VariantDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> PositionOnSegmentValueDeployment_t;

typedef CommonAPI::MapDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::VariantDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment
    >
> PositionOnSegmentDictDeployment_t;

typedef CommonAPI::DBus::VariantDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> PositionStatusValueDeployment_t;

typedef CommonAPI::MapDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::DBus::VariantDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment
    >
> PositionStatusDictDeployment_t;


// Type-specific deployments

// Attribute-specific deployments

// Argument-specific deployments

// Broadcast-specific deployments


} // namespace MapMatchedPosition_
} // namespace navigationcore
} // namespace navigation
} // namespace genivi
} // namespace org
} // namespace v4

#endif // V4_ORG_GENIVI_NAVIGATION_NAVIGATIONCORE_Map_Matched_Position_DBUS_DEPLOYMENT_HPP_