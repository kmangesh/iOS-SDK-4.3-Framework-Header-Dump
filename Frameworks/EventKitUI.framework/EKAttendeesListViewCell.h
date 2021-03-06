/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, EKParticipant;

@interface EKAttendeesListViewCell : XXUnknownSuperclass {
	EKParticipant* _attendee;
	BOOL _showStatus;
	UIImage* _attendingImage;
	UIImage* _maybeImage;
	UIImage* _notAttendingImage;
	UIImage* _pendingImage;
}
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier attendee:(id)attendee showStatusImage:(BOOL)image;
-(void)setAttendee:(id)attendee;
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;
-(id)_imageForStatus:(int)status;
-(id)_attendingImage;
-(id)_maybeImage;
-(id)_notAttendingImage;
-(id)_pendingImage;
-(void)dealloc;
@end

