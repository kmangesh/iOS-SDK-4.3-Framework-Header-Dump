/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UITableViewDelegate.h"
#import "EventKitUI-Structs.h"
#import "UITableViewDataSource.h"

@class UIImage, NSArray, EKEvent;

__attribute__((visibility("hidden")))
@interface EKAttendeesListView : XXUnknownSuperclass <UITableViewDelegate, UITableViewDataSource> {
@private
	EKEvent* _event;
	NSArray* _attendees;
	id _attendeeDelegate;
	BOOL _shouldShowStatusImages;
	UIImage* _attendingImage;
	UIImage* _maybeImage;
	UIImage* _notAttendingImage;
	UIImage* _pendingImage;
}
-(id)initWithFrame:(CGRect)frame event:(id)event;
-(void)dealloc;
-(void)setAttendeeDelegate:(id)delegate;
-(void)eventModified:(id)modified;
-(void)loadAttendees;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)_imageForStatus:(int)status;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)_attendingImage;
-(id)_maybeImage;
-(id)_notAttendingImage;
-(id)_pendingImage;
@end

