/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class EKEventStore, NSData, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EKICSPreviewModel : XXUnknownSuperclass {
@private
	NSData* _data;
	EKEventStore* _tempStore;
	EKEventStore* _destStore;
	NSMutableArray* _importedEvents;
	NSMutableArray* _unimportedEvents;
}
@property(readonly, assign, nonatomic) NSArray* allEvents;
@property(readonly, assign, nonatomic) NSArray* unimportedEvents;
@property(readonly, assign, nonatomic) NSArray* importedEvents;
@property(readonly, assign, nonatomic) int unimportedEventCount;
@property(readonly, assign, nonatomic) int importedEventCount;
@property(readonly, assign, nonatomic) int totalEventCount;
@property(readonly, assign, nonatomic) EKEventStore* eventStore;
-(id)initWithICSData:(id)icsdata eventStore:(id)store;
-(void)dealloc;
-(id)importEvent:(id)event intoCalendar:(id)calendar;
-(id)importAllIntoCalendar:(id)calendar;
@end
