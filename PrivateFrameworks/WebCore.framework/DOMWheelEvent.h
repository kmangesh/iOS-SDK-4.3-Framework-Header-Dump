/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMUIEvent.h"


@interface DOMWheelEvent : DOMUIEvent {
}
@property(readonly, assign) BOOL isHorizontal;
@property(readonly, assign) int y;
@property(readonly, assign) int x;
@property(readonly, assign) int offsetY;
@property(readonly, assign) int offsetX;
@property(readonly, assign) int wheelDeltaY;
@property(readonly, assign) int wheelDeltaX;
@property(readonly, assign) int wheelDelta;
@property(readonly, assign) BOOL metaKey;
@property(readonly, assign) BOOL altKey;
@property(readonly, assign) BOOL shiftKey;
@property(readonly, assign) BOOL ctrlKey;
@property(readonly, assign) int clientY;
@property(readonly, assign) int clientX;
@property(readonly, assign) int screenY;
@property(readonly, assign) int screenX;
-(void)initWheelEvent:(int)event wheelDeltaY:(int)y view:(id)view screenX:(int)x screenY:(int)y5 clientX:(int)x6 clientY:(int)y7 ctrlKey:(BOOL)key altKey:(BOOL)key9 shiftKey:(BOOL)key10 metaKey:(BOOL)key11;
@end

