/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MKOverlay.h"
#import "MapKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MKDate, NSMutableArray, NSString, NSArray, NSDictionary, GMMNewRoute, MKRouteStep, MKSearchResult;

__attribute__((visibility("hidden")))
@interface MKRoute : XXUnknownSuperclass <MKOverlay> {
@private
	GMMNewRoute* _route;
	int _mode;
	CADoublePoint* _points;
	CADoublePoint* _mapPoints;
	unsigned _pointCount;
	NSMutableArray* _steps;
	NSMutableArray* _simplifiedSteps;
	MKRouteStep* _step;
	MKRouteStep* _previousStep;
	BOOL _displaysDistanceInMetric;
	XXStruct_Yvvv9D _boundingMapRect;
}
@property(readonly, assign, nonatomic) int mode;
@property(readonly, assign, nonatomic) CADoublePoint* points;
@property(readonly, assign, nonatomic) CADoublePoint* mapPoints;
@property(readonly, assign, nonatomic) unsigned pointCount;
@property(readonly, assign, nonatomic) NSArray* steps;
@property(retain, nonatomic) MKRouteStep* step;
@property(readonly, assign, nonatomic) MKRouteStep* previousStep;
@property(readonly, assign, nonatomic) NSString* distanceSummary;
@property(readonly, assign, nonatomic) CADoublePoint coordinate;
@property(readonly, assign, nonatomic) XXStruct_Yvvv9D boundingMapRect;
@property(readonly, assign, nonatomic) BOOL hasTraffic;
@property(readonly, assign, nonatomic) NSString* cost;
@property(readonly, assign, nonatomic) MKDate* arrivalDate;
@property(readonly, assign, nonatomic) MKDate* departureDate;
@property(readonly, assign, nonatomic) NSString* abbreviatedTravelTimeWithTraffic;
@property(readonly, assign, nonatomic) NSString* abbreviatedTravelTime;
@property(readonly, assign, nonatomic) NSString* expandedTravelTimeWithTraffic;
@property(readonly, assign, nonatomic) NSString* expandedTravelTime;
@property(readonly, assign, nonatomic) int durationSeconds;
@property(readonly, assign, nonatomic) NSString* expandedDistance;
@property(readonly, assign, nonatomic) MKRouteStep* lastMiddleStep;
@property(readonly, assign, nonatomic) MKRouteStep* firstMiddleStep;
@property(readonly, assign, nonatomic) NSArray* simplifiedSteps;
@property(readonly, assign, nonatomic) MKSearchResult* endSearchResult;
@property(readonly, assign, nonatomic) MKSearchResult* startSearchResult;
@property(readonly, assign, nonatomic) CADoublePoint endCoordinate;
@property(readonly, assign, nonatomic) CADoublePoint startCoordinate;
@property(readonly, assign, nonatomic) NSDictionary* dictionaryRepresentation;
-(void)_createSteps;
-(BOOL)_createTransitStepsWithEndSearchResult:(id)endSearchResult;
-(void)resetStep;
-(id)_initWithRoute:(id)route response:(id)response startSearchResult:(id)result endSearchResult:(id)result4;
-(id)_initWithRoute:(id)route response:(id)response startSearchResult:(id)result endSearchResult:(id)result4 dictionaryRepresentation:(id)representation;
-(void)dealloc;
-(id)description;
-(id)route;
-(id)_timeForSeconds:(unsigned)seconds withTraffic:(BOOL)traffic abbreviated:(BOOL)abbreviated;
-(BOOL)intersectsMapRect:(XXStruct_Yvvv9D)rect;
-(XXStruct_Yvvv9D)boundingRectForStep:(id)step;
-(id)boundingPolygonForStep:(id)step;
@end
