/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import "NSObject.h"


@protocol EKDayViewContentDelegate <NSObject>
@optional
-(void)dayViewContent:(id)content didCreateOccurrenceViews:(id)views;
-(void)emptySpaceClickForDayViewContent:(id)dayViewContent onDay:(XXStruct_lQVxyC)day;
-(void)occurrencePressed:(id)pressed onDay:(XXStruct_lQVxyC)day;
-(void)occurrenceDragExited:(id)exited;
-(void)dayViewContent:(id)content didSelectItemWithEventIndex:(unsigned)eventIndex;
@end

