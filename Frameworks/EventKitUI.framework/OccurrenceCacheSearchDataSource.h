/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import "OccurrenceCacheDataSource.h"
#import "OccurrenceCacheSearchDataSource.h"
#import "CalSearchDataSink.h"

@class NSMutableArray, CalSearch;

@interface OccurrenceCacheSearchDataSource : OccurrenceCacheDataSource <CalSearchDataSink> {
	CalSearch* _calSearch;
	BOOL _searching;
	BOOL _resetting;
	opaque_pthread_mutex_t _dataSourceLock;
	dispatch_queue_s* _searchQueue;
	dispatch_group_s* _searchQueueGroup;
	opaque_pthread_mutex_t _resultsLock;
	NSMutableArray* _results;
}
-(id)initWithDatabase:(CalDatabase*)database filter:(CalFilter*)filter;
-(void)releaseResources;
-(void)dealloc;
-(void)invalidateCachedOccurrences;
-(void)invalidateCachedDayIndexes;
-(void)invalidateCachedDays;
-(void)setCachedDayRange:(NSRange)range;
-(BOOL)supportsInvitations;
-(BOOL)supportsFakeTodaySection;
-(int)cachedDayCount;
-(int)cachedOccurrenceCount;
-(int)cachedOccurrenceCountOnOrAfterDate:(double)date;
-(void)loadOccurrencesForRange:(XXStruct_K5nmsA)range;
-(int)countOfOccurrencesOnDay:(double)occurrencesOnDay;
-(int)dayCountBeforeDay:(double)day;
-(int)totalOccurrencesCount;
-(void)_addResult:(id)result;
-(void)_processResults;
-(void)_clearResults;
-(void)dumpInfo;
-(void)calSearch:(id)search foundOccurrences:(CFArrayRef)occurrences cachedDays:(CFArrayRef)days cachedDaysIndexes:(CFArrayRef)indexes;
-(void)calSearch:(id)search showResultsStartingOnDate:(double)date;
-(void)calSearchComplete:(id)complete;
-(void)startSearching;
-(void)stopSearching;
-(void)restartSearchWithTerm:(id)term;
@end

@interface OccurrenceCacheSearchDataSource (Internal)
-(int)_lockedTotalOccurrencesCount;
-(CFArrayRef)_cachedDayIndexes;
-(void)_tellMobileCalToUpdateItsUI;
-(void)_notifyThatTheDateToShowResultsWasFound:(id)showResultsWasFound;
@end

