/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WebKit-Structs.h"

@class NSArray, WebPluginController, NSString, WebEvent, NSTimer, WAKView, NSMutableDictionary, WebDataSource;

__attribute__((visibility("hidden")))
@interface WebHTMLViewPrivate : XXUnknownSuperclass {
@private
	BOOL closed;
	BOOL needsToApplyStyles;
	BOOL ignoringMouseDraggedEvents;
	BOOL printing;
	BOOL avoidingPrintOrphan;
	WAKView* layerHostingView;
	WebEvent* mouseDownEvent;
	BOOL handlingMouseDownEvent;
	WebEvent* keyDownEvent;
	BOOL exposeInputContext;
	CGPoint lastScrollPosition;
	BOOL inScrollPositionChanged;
	WebPluginController* pluginController;
	NSString* toolTip;
	id trackingRectOwner;
	void* trackingRectUserData;
	NSTimer* autoscrollTimer;
	WebEvent* autoscrollTriggerEvent;
	NSArray* pageRects;
	NSMutableDictionary* highlighters;
	BOOL transparentBackground;
	WebHTMLViewInterpretKeyEventsParameters* interpretKeyEventsParameters;
	BOOL receivedNOOP;
	WebDataSource* dataSource;
	SEL selectorForDoCommandBySelector;
}
+(void)initialize;
-(void)dealloc;
-(void)finalize;
-(void)clear;
@end

