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
 * description: MapViewerControl = This interface offers functions to control the MapViewer
 */
#ifndef V4_ORG_GENIVI_NAVIGATION_MAPVIEWER_Map_Viewer_Control_STUB_DEFAULT_HPP_
#define V4_ORG_GENIVI_NAVIGATION_MAPVIEWER_Map_Viewer_Control_STUB_DEFAULT_HPP_


#include <v4/org/genivi/navigation/mapviewer/MapViewerControlStub.hpp>
#include <sstream>

namespace v4 {
namespace org {
namespace genivi {
namespace navigation {
namespace mapviewer {

/**
 * Provides a default implementation for MapViewerControlStubRemoteEvent and
 * MapViewerControlStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class MapViewerControlStubDefault
    : public virtual MapViewerControlStub {
public:
    MapViewerControlStubDefault();

    MapViewerControlStubRemoteEvent* initStubAdapter(const std::shared_ptr<MapViewerControlStubAdapter> &_adapter);

    const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client);


    /**
     * description: getVersion = This method returns the API version implemented by the server
     *   application
     */
    virtual void getVersion(const std::shared_ptr<CommonAPI::ClientId> _client, getVersionReply_t _reply);
    /**
     * description: createMapViewInstance = This method creates a new map instance
     */
    virtual void createMapViewInstance(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, MapViewerControl::Dimension _mapViewSize, MapViewerControl::MapViewType _mapViewType, createMapViewInstanceReply_t _reply);
    /**
     * description: releaseMapViewInstance = This method releases (i.e. destroys) a given map
     *   instance. Only invisible map instances can be released
     */
    virtual void releaseMapViewInstance(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, releaseMapViewInstanceReply_t _reply);
    /**
     * description: getMapViewType = This method returns the map type of a map instance as it was
     *   set using CreateMapViewInstance
     */
    virtual void getMapViewType(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, getMapViewTypeReply_t _reply);
    /**
     * description: getSupportedMapViewTypes = This method retrieves the supported map view types
     */
    virtual void getSupportedMapViewTypes(const std::shared_ptr<CommonAPI::ClientId> _client, getSupportedMapViewTypesReply_t _reply);
    /**
     * description: setTargetPoint = This method sets the position of the point the camera is
     *   always aimed at
     */
    virtual void setTargetPoint(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, ::v4::org::genivi::navigation::NavigationTypes::Coordinate3D _targetPoint, setTargetPointReply_t _reply);
    /**
     * description: getTargetPoint = This method retrieves the target point position
     */
    virtual void getTargetPoint(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, getTargetPointReply_t _reply);
    /**
     * description: setFollowCarMode = This method sets the FollowCar mode
     */
    virtual void setFollowCarMode(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, bool _followCarMode, setFollowCarModeReply_t _reply);
    /**
     * description: getFollowCarMode = This method returns the current FollowCar-mode
     */
    virtual void getFollowCarMode(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, getFollowCarModeReply_t _reply);
    /**
     * description: setCameraPosition = This method sets the coordinates of the point at which the
     *   camera must be positioned
    		Note: the camera heading will be automatically set
     *   in such a way, that the camera is aimed at the view point
     */
    virtual void setCameraPosition(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, ::v4::org::genivi::navigation::NavigationTypes::Coordinate3D _position, setCameraPositionReply_t _reply);
    /**
     * description: getCameraPosition = This method returns the coordinates of the point at which
     *   the camera is positioned
     */
    virtual void getCameraPosition(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, getCameraPositionReply_t _reply);
    /**
     * description: setCameraHeadingAngle = This method sets the map view heading angle
    		Note: the
     *   camera position will be automatically set in such a way, that it looks at the
     *   currently selected target point
     */
    virtual void setCameraHeadingAngle(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, int32_t _heading, setCameraHeadingAngleReply_t _reply);
    /**
     * description: setCameraHeadingToTarget = This method sets the camera heading in such a way,
     *   that the camera always looks at a given target
     */
    virtual void setCameraHeadingToTarget(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, ::v4::org::genivi::navigation::NavigationTypes::Coordinate2D _target, setCameraHeadingToTargetReply_t _reply);
    /**
     * description: setCameraHeadingTrackUp = This method sets the camera heading in such a way,
     *   that the camera always looks in the direction in which the car is moving
     */
    virtual void setCameraHeadingTrackUp(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, setCameraHeadingTrackUpReply_t _reply);
    /**
     * description: getCameraHeading = This method returns the current camera heading
     */
    virtual void getCameraHeading(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, getCameraHeadingReply_t _reply);
    /**
     * description: setCameraTiltAngle = This method sets the camera tilt angle
     */
    virtual void setCameraTiltAngle(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, int32_t _tilt, setCameraTiltAngleReply_t _reply);
    /**
     * description: getCameraTiltAngle = This method returns the camera tilt angle
     */
    virtual void getCameraTiltAngle(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, getCameraTiltAngleReply_t _reply);
    /**
     * description: setCameraRollAngle = This method sets the camera roll angle
     */
    virtual void setCameraRollAngle(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, int32_t _roll, setCameraRollAngleReply_t _reply);
    /**
     * description: getCameraRollAngle = This method returns the camera roll angle
     */
    virtual void getCameraRollAngle(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, getCameraRollAngleReply_t _reply);
    /**
     * description: setCameraDistanceFromTargetPoint = This method sets the mode and the camera
     *   distance from the target point
     */
    virtual void setCameraDistanceFromTargetPoint(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, uint32_t _distance, setCameraDistanceFromTargetPointReply_t _reply);
    /**
     * description: getCameraDistanceFromTargetPoint = This method gets the mode and the camera
     *   distance from the target point
     */
    virtual void getCameraDistanceFromTargetPoint(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, getCameraDistanceFromTargetPointReply_t _reply);
    /**
     * description: setMapViewScaleMode = This method sets the scaling mode.
     */
    virtual void setMapViewScaleMode(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, MapViewerControl::MapScaleMode _scaleMode, setMapViewScaleModeReply_t _reply);
    /**
     * description: getMapViewScaleMode = This method gets the scaling mode.
     */
    virtual void getMapViewScaleMode(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, getMapViewScaleModeReply_t _reply);
    /**
     * description: getSupportedMapViewScaleModes = This method gets the supported scaling modes.
     */
    virtual void getSupportedMapViewScaleModes(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, getSupportedMapViewScaleModesReply_t _reply);
    /**
     * description: addMapViewScaleChangedListener = This method adds a listener which is notified
     *   when map view scale changes.
     */
    virtual void addMapViewScaleChangedListener(const std::shared_ptr<CommonAPI::ClientId> _client, addMapViewScaleChangedListenerReply_t _reply);
    /**
     * description: removeMapViewScaleChangedListener = This method removes a listener which is
     *   notified when map view scale changes.
     */
    virtual void removeMapViewScaleChangedListener(const std::shared_ptr<CommonAPI::ClientId> _client, removeMapViewScaleChangedListenerReply_t _reply);
    /**
     * description: setCameraHeight = This method sets the camera height
     */
    virtual void setCameraHeight(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, uint32_t _height, setCameraHeightReply_t _reply);
    /**
     * description: getCameraHeight = This method gets the camera height
     */
    virtual void getCameraHeight(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, getCameraHeightReply_t _reply);
    /**
     * description: setMapViewPerspective = This method sets the map perspective
     */
    virtual void setMapViewPerspective(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, MapViewerControl::MapPerspective _perspective, setMapViewPerspectiveReply_t _reply);
    /**
     * description: getMapViewPerspective = This method returns the current map perspective
     */
    virtual void getMapViewPerspective(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, getMapViewPerspectiveReply_t _reply);
    /**
     * description: getSupportedMapViewPerspectives = This method retrieves the supported mapview
     *   perspectives
     */
    virtual void getSupportedMapViewPerspectives(const std::shared_ptr<CommonAPI::ClientId> _client, getSupportedMapViewPerspectivesReply_t _reply);
    /**
     * description: setMapViewObjectVisibility = This method specifies the type of objects to show
     *   on the map.
     */
    virtual void setMapViewObjectVisibility(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, MapViewerControl::MapObjectVisibility _objectVisibilityList, setMapViewObjectVisibilityReply_t _reply);
    /**
     * description: getMapViewObjectVisibility = This method gets the type of objects shown on the
     *   map.
     */
    virtual void getMapViewObjectVisibility(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, getMapViewObjectVisibilityReply_t _reply);
    /**
     * description: getSupportedMapViewObjectVisibilities = This method gets the supported object
     *   visibilities.
     */
    virtual void getSupportedMapViewObjectVisibilities(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, getSupportedMapViewObjectVisibilitiesReply_t _reply);
    /**
     * description: getScaleList = This method returns a list of supported map scales
     */
    virtual void getScaleList(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, getScaleListReply_t _reply);
    /**
     * description: setMapViewScale = This method sets the map scale by specifying a ScaleID
     */
    virtual void setMapViewScale(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, uint16_t _scaleID, setMapViewScaleReply_t _reply);
    /**
     * description: setMapViewScaleByDelta = This method sets the map scale by specifying a delta
     *   value with respect to the currently set ScaleID
     */
    virtual void setMapViewScaleByDelta(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, int16_t _scaleDelta, setMapViewScaleByDeltaReply_t _reply);
    /**
     * description: setMapViewScaleByMetersPerPixel = This method sets the map scale by specifying
     *   the number of meters that a pixel represents
     */
    virtual void setMapViewScaleByMetersPerPixel(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, double _metersPerPixel, setMapViewScaleByMetersPerPixelReply_t _reply);
    /**
     * description: getMapViewScale = This method returns the currently used map scale
     */
    virtual void getMapViewScale(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, getMapViewScaleReply_t _reply);
    /**
     * description: setMapViewBoundingBox = This method sets the map bounding box
     */
    virtual void setMapViewBoundingBox(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, ::v4::org::genivi::navigation::NavigationTypes::Rectangle _boundingBox, setMapViewBoundingBoxReply_t _reply);
    /**
     * description: getMapViewBoundingBox = This method returns the bounding box of a given map
     *   instance
     */
    virtual void getMapViewBoundingBox(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, getMapViewBoundingBoxReply_t _reply);
    /**
     * description: setMapViewSaveArea = This methods defines the area that the HMI guarantees not
     *   to 
    		cover with other windows or user interface elements
     */
    virtual void setMapViewSaveArea(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, MapViewerControl::MapViewArea _saveArea, setMapViewSaveAreaReply_t _reply);
    /**
     * description: getMapViewSaveArea = This methods defines the area that the HMI guarantees not
     *   to 
    		cover with other windows or user interface elements
     */
    virtual void getMapViewSaveArea(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, getMapViewSaveAreaReply_t _reply);
    /**
     * description: setMapViewPan = This method pans a given map instance
     */
    virtual void setMapViewPan(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, MapViewerControl::PanAction _panningAction, std::vector<MapViewerControl::Pixel> _pixelCoordinates, setMapViewPanReply_t _reply);
    /**
     * description: getMapViewPan
     */
    virtual void getMapViewPan(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, MapViewerControl::PanAction _valueToReturn, getMapViewPanReply_t _reply);
    /**
     * description: setMapViewRotation = This method rotates the map
     */
    virtual void setMapViewRotation(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, int32_t _rotationAngle, int32_t _rotationAnglePerSecond, setMapViewRotationReply_t _reply);
    /**
     * description: getMapViewRotation = This method is particularly interesting for debugging
     *   purposes
     */
    virtual void getMapViewRotation(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, getMapViewRotationReply_t _reply);
    /**
     * description: setMapViewVisibilityMode = This method sets the current visibility mode
     */
    virtual void setMapViewVisibilityMode(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, MapViewerControl::Visibility _visibilityMode, setMapViewVisibilityModeReply_t _reply);
    /**
     * description: getMapViewVisibilityMode = This method returns the current visibility mode
     */
    virtual void getMapViewVisibilityMode(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, getMapViewVisibilityModeReply_t _reply);
    /**
     * description: getSupportedMapViewVisibilityModes = This method retrieves the supported
     *   mapview visibility modes
     */
    virtual void getSupportedMapViewVisibilityModes(const std::shared_ptr<CommonAPI::ClientId> _client, getSupportedMapViewVisibilityModesReply_t _reply);
    /**
     * description: setMapViewPerformanceLevel = This method sets the perfomance level of a given
     *   map instance
     */
    virtual void setMapViewPerformanceLevel(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, MapViewerControl::Level _performanceLevel, setMapViewPerformanceLevelReply_t _reply);
    /**
     * description: getMapViewPerformanceLevel = This method returns the perfomance level of a
     *   given map instance
     */
    virtual void getMapViewPerformanceLevel(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, getMapViewPerformanceLevelReply_t _reply);
    /**
     * description: getSupportedMapViewPerformanceLevels = This method retrieves the supported
     *   perfomance levels
     */
    virtual void getSupportedMapViewPerformanceLevels(const std::shared_ptr<CommonAPI::ClientId> _client, getSupportedMapViewPerformanceLevelsReply_t _reply);
    /**
     * description: displayRoute = This method visualizes one of the calculated routes
     */
    virtual void displayRoute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _routeHandle, bool _highlighted, displayRouteReply_t _reply);
    /**
     * description: hideRoute = This method hides one of the visible routes
     */
    virtual void hideRoute(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _routeHandle, hideRouteReply_t _reply);
    /**
     * description: getDisplayedRoutes = This method returns a list of displayed routes
     */
    virtual void getDisplayedRoutes(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, getDisplayedRoutesReply_t _reply);
    /**
     * description: getPoiCategoriesVisible = Get the set of POI categories displayed on the map.
     */
    virtual void getPoiCategoriesVisible(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, getPoiCategoriesVisibleReply_t _reply);
    /**
     * description: setPoiCategoriesVisible = Add POI categories to the set of POI categories
     *   displayed on the map.
                       Any specified category that until now
     *   was displayed with scale limits is now displayed without limits.
     */
    virtual void setPoiCategoriesVisible(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, std::vector<::v4::org::genivi::CommonTypes::CategoryID> _poiCategoryIds, setPoiCategoriesVisibleReply_t _reply);
    /**
     * description: setPoiCategoriesVisible = Add POI categories to the set of POI categories
     *   displayed on the map, where the POI's are only displayed in a specific range
     *   of scales.
                       Any specified category that until now was
     *   displayed without scale limits is now displayed with limits.
     */
    virtual void setPoiCategoriesVisibleWithinLimits(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, std::vector<::v4::org::genivi::CommonTypes::CategoryID> _poiCategoryIds, uint8_t _minScaleID, uint8_t _maxScaleID, setPoiCategoriesVisibleWithinLimitsReply_t _reply);
    /**
     * description: setPoiCategoriesNotVisible = Remove POI categories from the set of POI
     *   categories displayed on the map.
     */
    virtual void setPoiCategoriesNotVisible(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, std::vector<::v4::org::genivi::CommonTypes::CategoryID> _poiCategoryIds, setPoiCategoriesNotVisibleReply_t _reply);
    /**
     * description: setTrafficIncidentsVisibility = Set the visibility of Traffic Incidents on the
     *   map.
     */
    virtual void setTrafficIncidentsVisibility(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, bool _visible, setTrafficIncidentsVisibilityReply_t _reply);
    /**
     * description: setMapViewTheme = This method configures the theme of a given map view instance
     */
    virtual void setMapViewTheme(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, MapViewerControl::MapTheme _mapViewTheme, setMapViewThemeReply_t _reply);
    /**
     * description: getMapViewTheme = This method returns the current theme of a given map view
     *   instance
     */
    virtual void getMapViewTheme(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, getMapViewThemeReply_t _reply);
    /**
     * description: getSupportedMapViewThemes = This method retrieves the supported mapview themes
     */
    virtual void getSupportedMapViewThemes(const std::shared_ptr<CommonAPI::ClientId> _client, getSupportedMapViewThemesReply_t _reply);
    /**
     * description: convertPixelCoordsToGeoCoords = This method converts pixel coordinates to
     *   geographical coordinates
     */
    virtual void convertPixelCoordsToGeoCoords(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, std::vector<MapViewerControl::Pixel> _pixelCoordinates, convertPixelCoordsToGeoCoordsReply_t _reply);
    /**
     * description: convertGeoCoordsToPixelCoords = This method converts geographical coordinates
     *   into pixel coordinates
     */
    virtual void convertGeoCoordsToPixelCoords(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, std::vector<::v4::org::genivi::navigation::NavigationTypes::Coordinate2D> _geoCoordinates, convertGeoCoordsToPixelCoordsReply_t _reply);
    /**
     * description: displayCustomElements = This method visualizes a set of custom elements on the
     *   map
     */
    virtual void displayCustomElements(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, std::vector<MapViewerControl::CustomElement> _customElements, displayCustomElementsReply_t _reply);
    /**
     * description: hideCustomElements = This method hides a set of custom elements which were
     *   visualized by DisplayCustomElements
     */
    virtual void hideCustomElements(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _sessionHandle, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, std::vector<::v4::org::genivi::navigation::NavigationTypes::Handle> _customElemenHandles, hideCustomElementsReply_t _reply);
    /**
     * description: getDisplayedCustomElements = This method retrieves the visualized custom
     *   elements on the map
     */
    virtual void getDisplayedCustomElements(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, getDisplayedCustomElementsReply_t _reply);
    /**
     * description: selectElementsOnMap = This method selects elements on the map view which are at
     *   the position specified by user input
     */
    virtual void selectElementsOnMap(const std::shared_ptr<CommonAPI::ClientId> _client, ::v4::org::genivi::navigation::NavigationTypes::Handle _mapViewInstanceHandle, MapViewerControl::Pixel _pixelCoordinate, std::vector<MapViewerControl::SelectableMapType> _selectableTypes, uint16_t _maxNumberOfSelectedElements, selectElementsOnMapReply_t _reply);

/**
 * description: followCarModeChanged = This signal is emitted when the follow-car-mode changes
 */
virtual void fireFollowCarModeChangedEvent(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_mapViewInstanceHandle, const bool &_followCarMode);
/**
 * description: cameraPositionChanged = This signal is emitted when the position of the camera
 *   changes
 */
virtual void fireCameraPositionChangedEvent(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_mapViewInstanceHandle, const ::v4::org::genivi::navigation::NavigationTypes::Coordinate3D &_targetPoint);
/**
 * description: CameraHeadingChanged = This signal is emitted when the heading angle of the
 *   camera changes
 */
virtual void fireCameraHeadingChangedEvent(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_mapViewInstanceHandle, const ::v4::org::genivi::navigation::mapviewer::MapViewerControl::HeadingType &_headingType, const int32_t &_headingAngle);
/**
 * description: cameraTiltAngleChanged = This signal is emitted when the camera tilt angle
 *   changes
 */
virtual void fireCameraTiltAngleChangedEvent(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_mapViewInstanceHandle, const int32_t &_tilt);
/**
 * description: cameraDistanceFromTargetPointChanged = This signal is emitted when the camera
 *   distance from the target point changes
 */
virtual void fireCameraDistanceFromTargetPointChangedEvent(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_mapViewInstanceHandle, const uint32_t &_distance);
/**
 * description: mapViewScaleChanged = This signal is emitted when the mapview scale changes
 */
virtual void fireMapViewScaleChangedEvent(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_mapViewInstanceHandle, const uint8_t &_scaleID, const ::v4::org::genivi::navigation::mapviewer::MapViewerControl::MapScaleType &_isMinMax);
/**
 * description: MapViewPerspectiveChanged = This signal is emitted when the map perspective
 *   chnages
 */
virtual void fireMapViewPerspectiveChangedEvent(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_mapViewInstanceHandle, const ::v4::org::genivi::navigation::mapviewer::MapViewerControl::MapPerspective &_perspective);
/**
 * description: mapViewObjectVisibilityChanged = This signal is emitted when the type of
 *   objects shown on the map changes
 */
virtual void fireMapViewObjectVisibilityChangedEvent(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_mapViewInstanceHandle, const ::v4::org::genivi::navigation::mapviewer::MapViewerControl::MapObjectVisibility &_objectVisibilityList);
/**
 * description: mapViewBoundingBoxChanged = This signal is emitted when the bounding box of a
 *   map instance changes
 */
virtual void fireMapViewBoundingBoxChangedEvent(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_mapViewInstanceHandle, const ::v4::org::genivi::navigation::NavigationTypes::Rectangle &_boundingBox);
/**
 * description: mapViewSaveAreaChanged = This signal is emitted when the area that the HMI
 *   guarantees not to cover with other windows or user interface elements chnages
 */
virtual void fireMapViewSaveAreaChangedEvent(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_mapViewInstanceHandle, const ::v4::org::genivi::navigation::mapviewer::MapViewerControl::MapViewArea &_saveArea);
/**
 * description: mapViewVisibilityChanged = This signal is emitted when the MapView visibility
 *   changes
 */
virtual void fireMapViewVisibilityChangedEvent(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_mapViewInstanceHandle, const ::v4::org::genivi::navigation::mapviewer::MapViewerControl::Visibility &_visibilityMode);
/**
 * description: mapViewPerformanceLevelChanged = This signal is emitted when the perfomance
 *   level of a map instance changes
 */
virtual void fireMapViewPerformanceLevelChangedEvent(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_mapViewInstanceHandle, const ::v4::org::genivi::navigation::mapviewer::MapViewerControl::Level &_performanceLevel);
/**
 * description: displayedRoutes = This signal is emitted when the list of displayed routes
 *   change
 */
virtual void fireDisplayedRoutesEvent(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_mapViewInstanceHandle, const std::vector<::v4::org::genivi::navigation::mapviewer::MapViewerControl::DisplayedRoute> &_displayedRoutes);
/**
 * description: poiCategoriesVisibilityChanged = This signal is emitted when the visibility of
 *   POI categories on a map instance changes
 */
virtual void firePoiCategoriesVisibilityChangedEvent(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_mapViewInstanceHandle, const std::vector<::v4::org::genivi::CommonTypes::CategoryID> &_poiCategoryIds, const bool &_visible, const uint8_t &_minScaleID, const uint8_t &_maxScaleID);
/**
 * description: mapViewThemeChanged = This signal is emitted when the theme of a map view
 *   instance changes
 */
virtual void fireMapViewThemeChangedEvent(const ::v4::org::genivi::navigation::NavigationTypes::Handle &_mapViewInstanceHandle, const ::v4::org::genivi::navigation::mapviewer::MapViewerControl::MapTheme &_mapViewTheme);


protected:
    class RemoteEventHandler: public virtual MapViewerControlStubRemoteEvent {
    public:
        RemoteEventHandler(MapViewerControlStubDefault *_defaultStub);


    private:
        MapViewerControlStubDefault *defaultStub_;
    };
private:
    MapViewerControlStubDefault::RemoteEventHandler remoteEventHandler_;


    CommonAPI::Version interfaceVersion_;
};

} // namespace mapviewer
} // namespace navigation
} // namespace genivi
} // namespace org
} // namespace v4


// Compatibility
namespace v4_0 = v4;

#endif // V4_ORG_GENIVI_NAVIGATION_MAPVIEWER_Map_Viewer_Control_STUB_DEFAULT