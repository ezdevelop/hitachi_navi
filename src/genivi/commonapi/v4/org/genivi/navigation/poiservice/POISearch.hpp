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
#ifndef V4_ORG_GENIVI_NAVIGATION_POISERVICE_POI_SEARCH_HPP_
#define V4_ORG_GENIVI_NAVIGATION_POISERVICE_POI_SEARCH_HPP_




#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/Types.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v4 {
namespace org {
namespace genivi {
namespace navigation {
namespace poiservice {

class POISearch {
public:
    virtual ~POISearch() { }

    static inline const char* getInterface();
    static inline CommonAPI::Version getInterfaceVersion();
};

const char* POISearch::getInterface() {
    return ("org.genivi.navigation.poiservice.POISearch");
}

CommonAPI::Version POISearch::getInterfaceVersion() {
    return CommonAPI::Version(4, 0);
}


} // namespace poiservice
} // namespace navigation
} // namespace genivi
} // namespace org
} // namespace v4

namespace CommonAPI {
}


// Compatibility
namespace v4_0 = v4;

#endif // V4_ORG_GENIVI_NAVIGATION_POISERVICE_POI_SEARCH_HPP_
