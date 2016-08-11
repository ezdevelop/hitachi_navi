/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.v201608040617.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V4_ORG_GENIVI_NAVIGATION_Navigation_Types_HPP_
#define V4_ORG_GENIVI_NAVIGATION_Navigation_Types_HPP_



#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/Deployment.hpp>
#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <CommonAPI/Struct.hpp>
#include <CommonAPI/Types.hpp>
#include <cstdint>
#include <string>
#include <vector>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v4 {
namespace org {
namespace genivi {
namespace navigation {

struct NavigationTypes {
    /**
     * description: Range[0x0:0x7fffffff]. 0x0 is reserved as an invalid handle value.
     */
    typedef uint32_t Handle;
    /**
     * description: Handle to a location.
     */
    typedef Handle LocationHandle;
    struct Coordinate2D : CommonAPI::Struct<double, double> {
    	
    	Coordinate2D() {
    	}
    	Coordinate2D(const double &_latitude, const double &_longitude)
    	{
    		std::get<0>(values_) = _latitude;
    		std::get<1>(values_) = _longitude;
    	}
    	/**
    	 * description: latitude of the current position (according WGS84). Range [-90:+90]. Example:
    	 *   48.053250 .
    	 */
    	inline const double &getLatitude() const { return std::get<0>(values_); }
    	inline void setLatitude(const double &_value) { std::get<0>(values_) = _value; }
    	/**
    	 * description: longitude of the current position (according WGS84). Range [-180:+180].
    	 *   Example: 8.324500 .
    	 */
    	inline const double &getLongitude() const { return std::get<1>(values_); }
    	inline void setLongitude(const double &_value) { std::get<1>(values_) = _value; }
    	inline bool operator==(const Coordinate2D& _other) const {
                return (getLatitude() == _other.getLatitude() && getLongitude() == _other.getLongitude());
        }
    	inline bool operator!=(const Coordinate2D &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    struct Coordinate3D : CommonAPI::Struct<double, double, double> {
    	
    	Coordinate3D() {
    	}
    	Coordinate3D(const double &_latitude, const double &_longitude, const double &_altitude)
    	{
    		std::get<0>(values_) = _latitude;
    		std::get<1>(values_) = _longitude;
    		std::get<2>(values_) = _altitude;
    	}
    	/**
    	 * description: latitude of the current position (according WGS84). Range [-90:+90]. Example:
    	 *   48.053250 .
    	 */
    	inline const double &getLatitude() const { return std::get<0>(values_); }
    	inline void setLatitude(const double &_value) { std::get<0>(values_) = _value; }
    	/**
    	 * description: longitude of the current position (according WGS84). Range [-180:+180].
    	 *   Example: 8.324500 .
    	 */
    	inline const double &getLongitude() const { return std::get<1>(values_); }
    	inline void setLongitude(const double &_value) { std::get<1>(values_) = _value; }
    	/**
    	 * description: altitude above the sea level of the current position in meters .
    	 */
    	inline const double &getAltitude() const { return std::get<2>(values_); }
    	inline void setAltitude(const double &_value) { std::get<2>(values_) = _value; }
    	inline bool operator==(const Coordinate3D& _other) const {
                return (getLatitude() == _other.getLatitude() && getLongitude() == _other.getLongitude() && getAltitude() == _other.getAltitude());
        }
    	inline bool operator!=(const Coordinate3D &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    struct Rectangle : CommonAPI::Struct<Coordinate2D, Coordinate2D> {
    	
    	Rectangle() {
    	}
    	Rectangle(const Coordinate2D &_topLeft, const Coordinate2D &_bottomRight)
    	{
    		std::get<0>(values_) = _topLeft;
    		std::get<1>(values_) = _bottomRight;
    	}
    	inline const Coordinate2D &getTopLeft() const { return std::get<0>(values_); }
    	inline void setTopLeft(const Coordinate2D &_value) { std::get<0>(values_) = _value; }
    	inline const Coordinate2D &getBottomRight() const { return std::get<1>(values_); }
    	inline void setBottomRight(const Coordinate2D &_value) { std::get<1>(values_) = _value; }
    	inline bool operator==(const Rectangle& _other) const {
                return (getTopLeft() == _other.getTopLeft() && getBottomRight() == _other.getBottomRight());
        }
    	inline bool operator!=(const Rectangle &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    typedef std::vector<NavigationTypes::Coordinate2D> Polygon;
    /**
     * description: A distance in meters.         A distance can be at most half of the earth
     *   perimeter (a little less than 20050 km).         (see
     *   http://www.wolframalpha.com/input/?i=Earth+perimeter)        
     *   Range[0:20050000]         notSpecifiedValue = -1
     */
    typedef int32_t DistanceInMeters;
    /**
     * description: A circle given as center and radius.
     */
    struct Circle : CommonAPI::Struct<Coordinate2D, DistanceInMeters> {
    	
    	Circle() {
    	}
    	Circle(const Coordinate2D &_center, const DistanceInMeters &_radius)
    	{
    		std::get<0>(values_) = _center;
    		std::get<1>(values_) = _radius;
    	}
    	/**
    	 * description: The center of the circle.
    	 */
    	inline const Coordinate2D &getCenter() const { return std::get<0>(values_); }
    	inline void setCenter(const Coordinate2D &_value) { std::get<0>(values_) = _value; }
    	/**
    	 * description: The radius of the circle.
    	 */
    	inline const DistanceInMeters &getRadius() const { return std::get<1>(values_); }
    	inline void setRadius(const DistanceInMeters &_value) { std::get<1>(values_) = _value; }
    	inline bool operator==(const Circle& _other) const {
                return (getCenter() == _other.getCenter() && getRadius() == _other.getRadius());
        }
    	inline bool operator!=(const Circle &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    typedef uint64_t Timestamp;
    
    struct BasicError : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            NoError = 0
        };
        
        BasicError() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::NoError)) {}
        BasicError(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::NoError):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const BasicError &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const BasicError &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const BasicError &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const BasicError &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const BasicError &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const BasicError &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    
    struct BasicEnum : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            INVALID = 0,
            ALL = 65535
        };
        
        BasicEnum() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::INVALID)) {}
        BasicEnum(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::INVALID):
                case static_cast<int32_t>(Literal::ALL):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const BasicEnum &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const BasicEnum &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const BasicEnum &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const BasicEnum &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const BasicEnum &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const BasicEnum &_other) const { return (value_ > _other.value_); }
        
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
            ALL = 65535,
            TWELVEH = 1,
            TWENTYFOURH = 2
        };
        
        TimeFormat() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::INVALID)) {}
        TimeFormat(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
        TimeFormat &operator=(const BasicEnum::Literal &_value) {
            value_ = static_cast<int32_t>(_value);
            return (*this);
        }
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::INVALID):
                case static_cast<int32_t>(Literal::ALL):
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
    
    struct SessionStatus : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            INVALID = 0,
            ALL = 65535,
            AVAILABLE = 1,
            NOT_AVAILABLE = 2
        };
        
        SessionStatus() 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(Literal::INVALID)) {}
        SessionStatus(Literal _literal) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_literal)) {}
        SessionStatus &operator=(const BasicEnum::Literal &_value) {
            value_ = static_cast<int32_t>(_value);
            return (*this);
        }
    
        inline bool validate() const {
            switch (value_) {
                case static_cast<int32_t>(Literal::INVALID):
                case static_cast<int32_t>(Literal::ALL):
                case static_cast<int32_t>(Literal::AVAILABLE):
                case static_cast<int32_t>(Literal::NOT_AVAILABLE):
                return true;
            default:
                return false;
            }
        }
    
        inline bool operator==(const SessionStatus &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const SessionStatus &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const SessionStatus &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const SessionStatus &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const SessionStatus &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const SessionStatus &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
    struct Session : CommonAPI::Struct<Handle, std::string> {
    	
    	Session() {
    	}
    	Session(const Handle &_sessionHandle, const std::string &_clientApp)
    	{
    		std::get<0>(values_) = _sessionHandle;
    		std::get<1>(values_) = _clientApp;
    	}
    	inline const Handle &getSessionHandle() const { return std::get<0>(values_); }
    	inline void setSessionHandle(const Handle &_value) { std::get<0>(values_) = _value; }
    	inline const std::string &getClientApp() const { return std::get<1>(values_); }
    	inline void setClientApp(const std::string &_value) { std::get<1>(values_) = _value; }
    	inline bool operator==(const Session& _other) const {
                return (getSessionHandle() == _other.getSessionHandle() && getClientApp() == _other.getClientApp());
        }
    	inline bool operator!=(const Session &_other) const {
    		return !((*this) == _other);
    	}
    
    };
    
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
    struct Locale : CommonAPI::Struct<std::string, std::string, std::string> {
    	
    	Locale() {
    	}
    	Locale(const std::string &_languageCode, const std::string &_countryCode, const std::string &_scriptCode)
    	{
    		std::get<0>(values_) = _languageCode;
    		std::get<1>(values_) = _countryCode;
    		std::get<2>(values_) = _scriptCode;
    	}
    	/**
    	 * description: the language used. ISO 639‐3 language code (lower case)
    	 */
    	inline const std::string &getLanguageCode() const { return std::get<0>(values_); }
    	inline void setLanguageCode(const std::string &_value) { std::get<0>(values_) = _value; }
    	/**
    	 * description: the country specific variant for the language used. ISO 3166‐1 alpha 3 country
    	 *   code (upper case)
    	 */
    	inline const std::string &getCountryCode() const { return std::get<1>(values_); }
    	inline void setCountryCode(const std::string &_value) { std::get<1>(values_) = _value; }
    	/**
    	 * description: the script specific variant for the language used. ISO 15924 alpha 4 script
    	 *   code (upper case)
    	 */
    	inline const std::string &getScriptCode() const { return std::get<2>(values_); }
    	inline void setScriptCode(const std::string &_value) { std::get<2>(values_) = _value; }
    	inline bool operator==(const Locale& _other) const {
                return (getLanguageCode() == _other.getLanguageCode() && getCountryCode() == _other.getCountryCode() && getScriptCode() == _other.getScriptCode());
        }
    	inline bool operator!=(const Locale &_other) const {
    		return !((*this) == _other);
    	}
    
    };



static inline const char* getTypeCollectionName() {
    static const char* typeCollectionName = "org.genivi.navigation.NavigationTypes";
    return typeCollectionName;
}

inline CommonAPI::Version getTypeCollectionVersion() {
    return CommonAPI::Version(4, 0);
}

}; // struct NavigationTypes

} // namespace navigation
} // namespace genivi
} // namespace org
} // namespace v4

namespace CommonAPI {
}


namespace std {
    //Hash for BasicError
    template<>
    struct hash<::v4::org::genivi::navigation::NavigationTypes::BasicError> {
        inline size_t operator()(const ::v4::org::genivi::navigation::NavigationTypes::BasicError& basicError) const {
            return static_cast<int32_t>(basicError);
        }
    };
    //Hash for BasicEnum
    template<>
    struct hash<::v4::org::genivi::navigation::NavigationTypes::BasicEnum> {
        inline size_t operator()(const ::v4::org::genivi::navigation::NavigationTypes::BasicEnum& basicEnum) const {
            return static_cast<int32_t>(basicEnum);
        }
    };
    //Hash for TimeFormat
    template<>
    struct hash<::v4::org::genivi::navigation::NavigationTypes::TimeFormat> {
        inline size_t operator()(const ::v4::org::genivi::navigation::NavigationTypes::TimeFormat& timeFormat) const {
            return static_cast<int32_t>(timeFormat);
        }
    };
    //Hash for SessionStatus
    template<>
    struct hash<::v4::org::genivi::navigation::NavigationTypes::SessionStatus> {
        inline size_t operator()(const ::v4::org::genivi::navigation::NavigationTypes::SessionStatus& sessionStatus) const {
            return static_cast<int32_t>(sessionStatus);
        }
    };
    //Hash for Units
    template<>
    struct hash<::v4::org::genivi::navigation::NavigationTypes::Units> {
        inline size_t operator()(const ::v4::org::genivi::navigation::NavigationTypes::Units& units) const {
            return static_cast<int32_t>(units);
        }
    };
}


// Compatibility
namespace v4_0 = v4;

#endif // V4_ORG_GENIVI_NAVIGATION_Navigation_Types_HPP_