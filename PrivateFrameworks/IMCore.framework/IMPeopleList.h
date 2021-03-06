/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import "IMCore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "IMDirectlyObservableObjectObserver.h"

@class IMOfflinePeopleListGroup, IMServicePeopleListGroup, NSString, NSDictionary, NSMutableArray, NSArray;

@interface IMPeopleList : XXUnknownSuperclass <IMDirectlyObservableObjectObserver> {
	Class _customPeopleListItemClass;
	NSDictionary* _groupProperties;
	NSMutableArray* _peopleListItems;
	NSMutableArray* _peopleListGroups;
	NSMutableArray* _smartGroups;
	NSString* _collapsedGroupsPrefKey;
	NSString* _searchString;
	NSMutableArray* _items;
	NSArray* _groupsOrdering;
	IMOfflinePeopleListGroup* _offlineGroup;
	IMServicePeopleListGroup* _bonjourGroup;
	NSMutableArray* _itemsToCleanup;
	int _coalesceCount;
	BOOL _pendingResort;
	BOOL _allowsIMHandleSubstitution;
	BOOL _hideOfflinePeople;
	BOOL _hideAwayPeople;
	BOOL _hideIdlePeople;
	BOOL _hideUnknownPeople;
	BOOL _hideNoStatusPeople;
	BOOL _usesOfflineGroup;
	BOOL _usesBonjourGroup;
	BOOL _arrangesByGroup;
	BOOL _allowsGroupOrdering;
	BOOL _allowsSearching;
	BOOL _inSearchMode;
}
@property(retain, nonatomic) NSString* searchString;
@property(readonly, assign, nonatomic) BOOL inSearchMode;
@property(assign, nonatomic) BOOL allowsSearching;
@property(readonly, assign, nonatomic) Class peopleListItemClass;
@property(retain, nonatomic) Class customPeopleListItemClass;
@property(retain, nonatomic) NSString* collapsedGroupsPrefKey;
@property(readonly, assign, nonatomic) NSString* groupForNewIMHandles;
@property(readonly, assign, nonatomic) unsigned numberOfIMHandles;
@property(readonly, assign, nonatomic) NSArray* allIMHandles;
@property(readonly, assign, nonatomic) NSArray* peopleListItems;
@property(readonly, assign, nonatomic) NSArray* peopleListGroups;
@property(readonly, assign, nonatomic) NSArray* items;
@property(assign, nonatomic) BOOL showsIdlePeople;
@property(assign, nonatomic) BOOL showsAwayPeople;
@property(assign, nonatomic) BOOL showsUnknownPeople;
@property(assign, nonatomic) BOOL showsNoStatusPeople;
@property(assign, nonatomic) BOOL showsOfflinePeople;
@property(assign, nonatomic) BOOL usesOfflineGroup;
@property(assign, nonatomic) BOOL arrangesByGroup;
@property(retain, nonatomic) NSDictionary* groupProperties;
@property(assign, nonatomic) BOOL allowsIMHandleSubstitution;
+(id)_notificationNames;
+(id)_notificationSelectors;
-(id)init;
-(void)dealloc;
-(void)_unobservePeopleListItem:(id)item;
-(void)_observePeopleListItem:(id)item;
-(void)_peopleListItemNeedsSorting:(id)sorting;
-(void)_peopleListItemSortOrderChangedNotification:(id)notification;
-(void)_peopleListItemNeedsGroupChange:(id)change;
-(void)objectDidPostDirectNotification:(id)object;
-(void)endSearchMode;
-(BOOL)_allowPeopleListItemInCurrentSearch:(id)currentSearch;
-(XXStruct_xDJerA)_sortParameters;
-(BOOL)_isOfflineGroup:(id)group;
-(BOOL)_isBonjourGroup:(id)group;
-(BOOL)_peopleListItemShouldBeShown:(id)_peopleListItem inGroup:(id)group;
-(BOOL)_peopleListItem:(id)item shouldBeInGroup:(id)group;
-(void)_rebuildItems;
-(void)_postResortNotification;
-(void)resort;
-(void)_resortNow;
-(void)_resort;
-(void)_refreshContents;
-(void)refreshList;
-(id)representedPeopleInGroup:(id)group;
-(id)peopleInGroup:(id)group;
-(BOOL)containsIMHandle:(id)handle;
-(void)_updateGroupPreferences;
-(unsigned)_indexOfGroup:(id)group startingAtIndex:(int)index;
-(NSRange)_rangeOfGroupAndItems:(id)groupAndItems startingAtIndex:(unsigned)index;
-(id)groupWithName:(id)name;
-(BOOL)containsGroup:(id)group;
-(void)_addGroup:(id)group;
-(void)addGroup:(id)group;
-(void)_removeGroup:(id)group;
-(void)removeGroup:(id)group;
-(id)peopleListGroupSortOrder;
-(void)setGroups:(id)groups;
-(void)setUsesBonjourGroup:(BOOL)group;
-(BOOL)_addIMHandle:(id)handle toCollection:(id)collection usingOrphanItems:(id)items;
-(void)addIMHandle:(id)handle;
-(void)addPeopleFromArray:(id)array skipMe:(BOOL)me;
-(void)addPeopleFromArray:(id)array;
-(id)_removeIMHandle:(id)handle fromPeopleListItem:(id)peopleListItem;
-(void)_removeIMHandle:(id)handle fromPeopleListGroup:(id)peopleListGroup;
-(void)removeIMHandle:(id)handle fromGroups:(id)groups;
-(void)removeIMHandle:(id)handle fromGroup:(id)group;
-(void)removeIMHandle:(id)handle;
-(void)removeAllIMHandlesAndGroups:(BOOL)groups;
-(void)removeAllIMHandles;
-(void)_repopulateIMHandle:(id)handle filterGroups:(BOOL)groups;
-(void)repopulateIMHandle:(id)handle;
-(BOOL)makingChanges;
-(void)beginChanges;
-(void)endChanges;
@end

