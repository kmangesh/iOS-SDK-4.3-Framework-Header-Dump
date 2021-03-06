/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSMutableArray, UIToolbar, UIImageView, UIBarButtonItemProxy, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface UIToolbarCustomizeView : UIView {
@private
	UIToolbar* _toolbar;
	NSMutableArray* _proxies;
	NSMutableArray* _fixedItems;
	UIBarButtonItemProxy* _draggingProxy;
	UIBarButtonItem* _draggingItem;
	UIImageView* _dragImage;
	UIImageView* _replacementGlow;
	UIBarButtonItem* _replaceItem;
	CGPoint _startPoint;
}
-(void)setToolbar:(id)toolbar currentItems:(id)items availableItems:(id)items3;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)canHandleSwipes;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)adjustDragImageWithTouches:(id)touches withEvent:(id)event;
-(id)itemInToolbarWithTouches:(id)touches withEvent:(id)event;
-(void)buttonBarTouchesBegan:(id)began withEvent:(id)event;
-(void)buttonBarTouchesMoved:(id)moved withEvent:(id)event;
-(void)buttonBarTouchesEnded:(id)ended withEvent:(id)event;
-(void)_finishTouchesEndedChangeAnimation:(id)animation finished:(id)finished context:(id)context;
@end

