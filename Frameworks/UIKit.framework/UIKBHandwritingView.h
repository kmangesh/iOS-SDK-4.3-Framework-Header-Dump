/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKBKeyView.h"

@class UIKBKeyboard;
@protocol UIKBHandwritingDelegateProtocol;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingView : UIKBKeyView {
@private
	KBStrokeList* _strokes;
	id<UIKBHandwritingDelegateProtocol> _delegate;
	CGColorRef _inkColor;
	CGImageRef _inkMask;
	UIKBKeyboard* _keyboard;
	CGPoint _last;
	int _down;
	BOOL _stroked;
	BOOL _captureEnabled;
	BOOL _inGesture;
}
-(id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;
-(void)dealloc;
-(void)updateKeyboard:(id)keyboard key:(id)key;
-(BOOL)clear;
-(void)setDelegate:(id)delegate;
-(void)send;
-(void)drawRect:(CGRect)rect;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(BOOL)cancelTouchTracking;
@end
