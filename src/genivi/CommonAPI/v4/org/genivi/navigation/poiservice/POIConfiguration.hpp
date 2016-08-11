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
 * description: This interface offers methods that implement the POI configuration
 *   functionality of a navigation system.
 */
#ifndef V4_ORG_GENIVI_NAVIGATION_POISERVICE_POI_CONFIGURATION_HPP_
#define V4_ORG_GENIVI_NAVIGATION_POISERVICE_POI_CONFIGURATION_HPP_




#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <CommonAPI/Types.hpp>
#include <CommonAPI/Variant.hpp>
#include <cstdint>
#include <memory>
#include <unordered_map>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v4 {
namespace org {
namespace genivi {
namespace navigation {
namespace poiservice {

class POIConfiguration {
public:
    virtual ~POIConfiguration() { }

    static inline const char* getInterface();
    static inline CommonAPI::Version getInterfaceVersion();
    
    struct UnitsOfMeasurementAttribute : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            INVALID = 0,
            LENGTH = 49
        };
        
        UnitsOfMeasurementAttribute() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::INVALID)) {}
        UnitsOfMeasurementAttribute(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::INVALID):
                case static_cast<int32_t>(Literal::LENGTH):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const UnitsOfMeasurementAttribute &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const UnitsOfMeasurementAttribute &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const UnitsOfMeasurementAttribute &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const UnitsOfMeasurementAttribute &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const UnitsOfMeasurementAttribute &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const UnitsOfMeasurementAttribute &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    typedef CommonAPI::Variant<int32_t, double>  UnitsOfMeasurementValue;
    typedef std::unordered_map<::v4::org::genivi::navigation::poiservice::POIConfiguration::UnitsOfMeasurementAttribute, ::v4::org::genivi::navigation::poiservice::POIConfiguration::UnitsOfMeasurementValue, CommonAPI::EnumHasher<::v4::org::genivi::navigation::poiservice::POIConfiguration::UnitsOfMeasurementAttribute>> UnitsOfMeasurement;
    
    struct Units : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            METER = 50,
            MILE = 51,
            KM = 52,
            YARD = 53,
            FOOT = 54
        };
        
        Units() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::METER)) {}
        Units(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::METER):
                case static_cast<int32_t>(Literal::MILE):
                case static_cast<int32_t>(Literal::KM):
                case static_cast<int32_t>(Literal::YARD):
                case static_cast<int32_t>(Literal::FOOT):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const Units &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const Units &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const Units &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const Units &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const Units &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const Units &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    
    struct TimeFormat : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            INVALID = 0,
            TWELVEH = 1,
            TWENTYFOURH = 2
        };
        
        TimeFormat() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::INVALID)) {}
        TimeFormat(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::INVALID):
                case static_cast<int32_t>(Literal::TWELVEH):
                case static_cast<int32_t>(Literal::TWENTYFOURH):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const TimeFormat &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const TimeFormat &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const TimeFormat &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const TimeFormat &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const TimeFormat &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const TimeFormat &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    
    struct CoordinatesFormat : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            INVALID = 0,
            DEGREES = 1,
            MINUTES = 2,
            SECONDS = 3
        };
        
        CoordinatesFormat() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::INVALID)) {}
        CoordinatesFormat(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::INVALID):
                case static_cast<int32_t>(Literal::DEGREES):
                case static_cast<int32_t>(Literal::MINUTES):
                case static_cast<int32_t>(Literal::SECONDS):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const CoordinatesFormat &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const CoordinatesFormat &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const CoordinatesFormat &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const CoordinatesFormat &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const CoordinatesFormat &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const CoordinatesFormat &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
};

const char* POIConfiguration::getInterface() {
    return ("org.genivi.navigation.poiservice.POIConfiguration");
}

CommonAPI::Version POIConfiguration::getInterfaceVersion() {
    return CommonAPI::Version(4, 0);
}

/**
 * description: Units of measurement
 */

} // namespace poiservice
} // namespace navigation
} // namespace genivi
} // namespace org
} // namespace v4

namespace CommonAPI {
}


// Compatibility
namespace v4_0 = v4;

#endif // V4_ORG_GENIVI_NAVIGATION_POISERVICE_POI_CONFIGURATION_HPP_