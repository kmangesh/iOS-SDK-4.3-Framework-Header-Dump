/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSTodo.h"
#import "ICSComponent.h"

@class NSArray, NSURL, NSString, ICSDate, ICSUserAddress, ICSDuration;

@interface ICSTodo : ICSComponent {
}
@property(retain) NSArray* attach;
@property(retain) NSArray* attendee;
@property(assign) int classification;
@property(retain) ICSDate* created;
@property(retain) NSString* description;
@property(retain) ICSDate* dtstamp;
@property(retain) ICSDate* dtstart;
@property(retain) ICSDuration* duration;
@property(retain) NSArray* exdate;
@property(retain) NSArray* exrule;
@property(retain) ICSDate* last_modified;
@property(retain) NSString* location;
@property(retain) ICSUserAddress* organizer;
@property(assign) unsigned priority;
@property(retain) NSArray* rdate;
@property(retain) ICSDate* recurrence_id;
@property(retain) NSArray* rrule;
@property(assign) unsigned sequence;
@property(assign) int status;
@property(retain) NSString* summary;
@property(retain) NSString* uid;
@property(retain) NSURL* url;
@property(retain) NSString* x_apple_ews_changekey;
@property(retain) NSString* x_apple_ews_itemid;
@property(assign) BOOL x_apple_ews_needsserverconfirmation;
@property(retain) NSString* x_apple_ews_permission;
@property(assign) unsigned x_apple_sort_order;
@property(retain) ICSDate* due;
@property(retain) ICSDate* completed;
+(id)name;
-(BOOL)validate:(id*)validate;
@end

@interface ICSTodo (RepairPropertiesPrivate)
-(void)fixComponent;
@end
