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
 * description: LocationInput = This interface offers functions that implement the
 *   location-input functionality of a navigation system
 */
#ifndef V4_ORG_GENIVI_NAVIGATION_NAVIGATIONCORE_LOCATION_INPUT_HPP_
#define V4_ORG_GENIVI_NAVIGATION_NAVIGATIONCORE_LOCATION_INPUT_HPP_


#include <v4/org/genivi/navigation/NavigationTypes.hpp>
#include <v4/org/genivi/navigation/navigationcore/NavigationCoreTypes.hpp>


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <CommonAPI/Types.hpp>
#include <CommonAPI/Variant.hpp>
#include <cstdint>
#include <memory>
#include <string>
#include <unordered_map>
#include <vector>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v4 {
namespace org {
namespace genivi {
namespace navigation {
namespace navigationcore {

class LocationInput {
public:
    virtual ~LocationInput() { }

    static inline const char* getInterface();
    static inline CommonAPI::Version getInterfaceVersion();
    
    struct AddressAttribute : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            INVALID = 0,
            ALL = 65535,
            TIMESTAMP = 16,
            LATITUDE = 160,
            LONGITUDE = 161,
            ALTITUDE = 162,
            COUNTRY = 166,
            STATE = 167,
            CITY = 168,
            ZIPCODE = 169,
            STREET = 170,
            HOUSENUMBER = 171,
            CROSSING = 172,
            DISTRICT = 173,
            PHONENUMBER = 174,
            POINAME = 175,
            TOWNCENTER = 176,
            LOCATION_INPUT = 177,
            FULL_ADDRESS = 178,
            COUNTRYCODE = 179,
            HOUSENAME = 180,
            POSTAL_CODE = 181
        };
        
        AddressAttribute() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::INVALID)) {}
        AddressAttribute(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
        AddressAttribute &operator=(const ::v4::org::genivi::navigation::navigationcore::NavigationCoreTypes::GeoLocalizedEnum::Literal &_value) {
            value_ = static_cast<int32_t>(_value);
            return (*this);
        }
        AddressAttribute &operator=(const TimeStampedEnum::Literal &_value) {
            value_ = static_cast<int32_t>(_value);
            return (*this);
        }
        AddressAttribute &operator=(const ::v4::org::genivi::navigation::NavigationTypes::BasicEnum::Literal &_value) {
            value_ = static_cast<int32_t>(_value);
            return (*this);
        }
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::INVALID):
                case static_cast<int32_t>(Literal::ALL):
                case static_cast<int32_t>(Literal::TIMESTAMP):
                case static_cast<int32_t>(Literal::LATITUDE):
                case static_cast<int32_t>(Literal::LONGITUDE):
                case static_cast<int32_t>(Literal::ALTITUDE):
                case static_cast<int32_t>(Literal::COUNTRY):
                case static_cast<int32_t>(Literal::STATE):
                case static_cast<int32_t>(Literal::CITY):
                case static_cast<int32_t>(Literal::ZIPCODE):
                case static_cast<int32_t>(Literal::STREET):
                case static_cast<int32_t>(Literal::HOUSENUMBER):
                case static_cast<int32_t>(Literal::CROSSING):
                case static_cast<int32_t>(Literal::DISTRICT):
                case static_cast<int32_t>(Literal::PHONENUMBER):
                case static_cast<int32_t>(Literal::POINAME):
                case static_cast<int32_t>(Literal::TOWNCENTER):
                case static_cast<int32_t>(Literal::LOCATION_INPUT):
                case static_cast<int32_t>(Literal::FULL_ADDRESS):
                case static_cast<int32_t>(Literal::COUNTRYCODE):
                case static_cast<int32_t>(Literal::HOUSENAME):
                case static_cast<int32_t>(Literal::POSTAL_CODE):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const AddressAttribute &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const AddressAttribute &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const AddressAttribute &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const AddressAttribute &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const AddressAttribute &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const AddressAttribute &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    
    struct SearchStatus : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            INVALID = 0,
            ALL = 65535,
            SEARCHING = 193,
            FINISHED = 194
        };
        
        SearchStatus() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::INVALID)) {}
        SearchStatus(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
        SearchStatus &operator=(const ::v4::org::genivi::navigation::NavigationTypes::BasicEnum::Literal &_value) {
            value_ = static_cast<int32_t>(_value);
            return (*this);
        }
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::INVALID):
                case static_cast<int32_t>(Literal::ALL):
                case static_cast<int32_t>(Literal::SEARCHING):
                case static_cast<int32_t>(Literal::FINISHED):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const SearchStatus &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const SearchStatus &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const SearchStatus &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const SearchStatus &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const SearchStatus &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const SearchStatus &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    
    struct ValidationType : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            INVALID = 0,
            ALL = 65535,
            OK = 208,
            UNKNOWN = 209,
            AMBIGUOUS = 210,
            INCONSISTENT = 211
        };
        
        ValidationType() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::INVALID)) {}
        ValidationType(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
        ValidationType &operator=(const ::v4::org::genivi::navigation::NavigationTypes::BasicEnum::Literal &_value) {
            value_ = static_cast<int32_t>(_value);
            return (*this);
        }
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::INVALID):
                case static_cast<int32_t>(Literal::ALL):
                case static_cast<int32_t>(Literal::OK):
                case static_cast<int32_t>(Literal::UNKNOWN):
                case static_cast<int32_t>(Literal::AMBIGUOUS):
                case static_cast<int32_t>(Literal::INCONSISTENT):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const ValidationType &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const ValidationType &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const ValidationType &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const ValidationType &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const ValidationType &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const ValidationType &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    typedef std::vector<LocationInput::AddressAttribute> AddressAttributeList;
    typedef CommonAPI::Variant<int32_t, double, std::string, ::v4::org::genivi::navigation::NavigationTypes::Coordinate3D, std::vector<uint8_t>>  AddressValue;
    typedef std::unordered_map<::v4::org::genivi::navigation::navigationcore::LocationInput::AddressAttribute, ::v4::org::genivi::navigation::navigationcore::LocationInput::AddressValue, CommonAPI::EnumHasher<::v4::org::genivi::navigation::navigationcore::LocationInput::AddressAttribute>> Address;
    typedef std::unordered_map<::v4::org::genivi::navigation::navigationcore::LocationInput::AddressAttribute, ::v4::org::genivi::navigation::navigationcore::LocationInput::ValidationType, CommonAPI::EnumHasher<::v4::org::genivi::navigation::navigationcore::LocationInput::AddressAttribute>> ValidationStatus;
};

const char* LocationInput::getInterface() {
    return ("org.genivi.navigation.navigationcore.LocationInput");
}

CommonAPI::Version LocationInput::getInterfaceVersion() {
    return CommonAPI::Version(4, 0);
}


} // namespace navigationcore
} // namespace navigation
} // namespace genivi
} // namespace org
} // namespace v4

namespace CommonAPI {
}


// Compatibility
namespace v4_0 = v4;

#endif // V4_ORG_GENIVI_NAVIGATION_NAVIGATIONCORE_LOCATION_INPUT_HPP_