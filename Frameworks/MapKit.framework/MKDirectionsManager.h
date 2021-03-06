/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "PBRequesterDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GMMMapInfo, NSArray, NSDictionary, NSTimeZone, NSString, MKAddressBookAddress, MKCache, NSMutableArray, MKDirectionsRouteInfo, MKSearchResult, MKRouteStep, MKDirectionsResponse, MKRoute, GMMRequester;

@interface MKDirectionsManager : XXUnknownSuperclass <PBRequesterDelegate> {
@private
	GMMRequester* _requester;
	MKDirectionsRouteInfo* _routeInfo;
	MKCache* _routeInfoCache;
	NSMutableArray* _observers;
	MKSearchResult* _startSearchResult;
	MKSearchResult* _endSearchResult;
	MKAddressBookAddress* _startAddress;
	MKAddressBookAddress* _endAddress;
	NSString* _startAddressString;
	NSString* _endAddressString;
	GMMMapInfo* _mapInfo;
	int _mode;
	int _defaultMode;
	BOOL _needsSave;
	BOOL _isDisplayed;
	BOOL _isUpdatingCurrentLocation;
	BOOL _isLoadingTransitOnly;
	BOOL _appendingNewTransitResponses;
	int _transitResultPageOffset;
	BOOL _enableRouteCache;
	MKDirectionsResponse* _previousTransitResponse;
}
@property(retain, nonatomic) MKSearchResult* routeStartSearchResult;
@property(retain, nonatomic) MKSearchResult* routeEndSearchResult;
@property(retain, nonatomic) MKDirectionsRouteInfo* routeInfo;
@property(retain, nonatomic) MKSearchResult* startSearchResult;
@property(retain, nonatomic) MKSearchResult* endSearchResult;
@property(retain, nonatomic) MKAddressBookAddress* startAddress;
@property(retain, nonatomic) MKAddressBookAddress* endAddress;
@property(retain, nonatomic) NSString* startAddressString;
@property(retain, nonatomic) NSString* endAddressString;
@property(readonly, assign, nonatomic) BOOL needsSave;
@property(assign, nonatomic) BOOL isDisplayed;
@property(assign, nonatomic) int defaultMode;
@property(retain, nonatomic) GMMMapInfo* mapInfo;
@property(assign, nonatomic) int mode;
@property(retain, nonatomic) GMMRequester* requester;
@property(assign, nonatomic) BOOL enableRouteCache;
@property(readonly, assign, nonatomic) BOOL isUpdatingCurrentLocation;
@property(readonly, assign, nonatomic) unsigned receivedResponseCount;
@property(readonly, assign, nonatomic) NSArray* receivedResponses;
@property(readonly, assign, nonatomic) unsigned previousStepIndex;
@property(readonly, assign, nonatomic) MKRouteStep* previousStep;
@property(assign, nonatomic) unsigned stepIndex;
@property(retain, nonatomic) MKRouteStep* step;
@property(readonly, assign, nonatomic) NSArray* steps;
@property(retain, nonatomic) MKRoute* route;
@property(readonly, assign, nonatomic) NSArray* routes;
@property(readonly, assign, nonatomic) BOOL hasReceivedResponse;
@property(readonly, assign, nonatomic) unsigned availableModes;
@property(readonly, assign, nonatomic) BOOL isTransitEnabled;
@property(readonly, assign, nonatomic) BOOL isActive;
@property(readonly, assign, nonatomic) BOOL isLoading;
@property(readonly, assign, nonatomic) NSTimeZone* arrivalTimeZone;
@property(readonly, assign, nonatomic) NSTimeZone* departureTimeZone;
@property(readonly, assign, nonatomic) BOOL startAndEndAreEqual;
@property(readonly, assign, nonatomic) BOOL hasEnd;
@property(readonly, assign, nonatomic) BOOL hasStart;
@property(readonly, assign, nonatomic) NSDictionary* dictionaryRepresentation;
+(id)sharedDirectionsManager;
+(int)_modeForGMMMode:(int)gmmmode;
+(int)_GMMModeForMode:(int)mode;
+(unsigned)_responseIndexForMode:(int)mode;
-(id)init;
-(void)_setResponsesUpdated;
-(void)_setResponses:(id)responses;
-(id)_responseForIndex:(unsigned)index;
-(id)_responseForMode:(int)mode;
-(BOOL)_routeAvailableForMode:(int)mode;
-(void)_setRouteUnavailableForMode:(int)mode;
-(void)_resetResponses;
-(void)_resetResponseForMode:(int)mode;
-(void)reset;
-(void)dealloc;
-(BOOL)transitRequestDateIsDeparture;
-(id)firstRouteForTransitResponse;
-(id)transitRequestDate;
-(void)_createIconsForResponse:(id)response cache:(BOOL)cache;
-(void)_loadResponseFromDictionaryRepresentation:(id)dictionaryRepresentation;
-(void)loadFromDictionaryRepresentation:(id)dictionaryRepresentation restoreSearchResults:(id)results;
-(void)_restoreSearchResults:(id)results;
-(void)clearStart;
-(void)clearEnd;
-(void)setUserStartSearchResult:(id)result;
-(void)setUserEndSearchResult:(id)result;
-(void)_updateStartAndEndSearchResults;
-(void)useStartAndEndSearchResultsFromRoute;
-(id)_startLocation;
-(id)_endLocation;
-(void)swapStartAndEnd;
-(void)addObserver:(id)observer;
-(void)removeObserver:(id)observer;
-(void)logRequestForMode:(int)mode;
-(id)_requestWithMode:(int)mode;
-(void)_startLoad:(BOOL)load;
-(void)_setUpdatingCurrentLocation:(BOOL)location;
-(void)locationManagerUpdatedLocation:(id)location;
-(void)locationManagerFailedToUpdateLocation:(id)updateLocation withError:(id)error;
-(void)locationManagerDidReset:(id)locationManager;
-(void)startLoad;
-(void)_startTransitLoadWithRequest:(id)request;
-(void)startTransitLoadForNextResultPage;
-(void)startTransitLoadWithDate:(id)date isDeparture:(BOOL)departure;
-(void)_loadEnded;
-(void)cancelLoad;
-(void)_reportErrorCode:(int)code;
-(void)_reachabilityChanged:(id)changed;
-(id)_createRouteSearchResultWithLocation:(id)location isStart:(BOOL)start;
-(void)requesterDidFinish:(id)requester;
-(void)requester:(id)requester didFailWithError:(id)error;
-(void)requesterDidCancel:(id)requester;
-(void)setMode:(int)mode shouldLoad:(BOOL)load;
-(id)_response;
-(void)stepForward;
-(void)stepBack;
-(id)searchResultMatchingSearchResult:(id)result;
-(id)transitAgencyForRouteStep:(id)routeStep;
-(void)_saveRouteToCache;
-(void)clearRouteCache;
-(void)clearRouteCacheForSearchResult:(id)searchResult;
-(BOOL)_restoreRouteFromCacheForMode:(int)mode;
@end

