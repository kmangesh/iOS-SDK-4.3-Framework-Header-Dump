/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import "EKEventEditItem.h"

@class PreferencesMultiLineCell, UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventNotesEditItem : EKEventEditItem {
@private
	UITableViewCell* _simpleCell;
	PreferencesMultiLineCell* _multiLineCell;
}
-(void)dealloc;
-(void)reset;
-(float)defaultCellHeightForSubitemAtIndex:(int)index forWidth:(float)width;
-(id)cellForSubitemAtIndex:(int)index;
-(id)detailViewControllerWithFrame:(CGRect)frame forSubitemAtIndex:(int)index;
-(BOOL)eventEditItemViewControllerCommit:(id)commit;
@end
