/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUMenuViewController.h"

@class NSArray, SUScriptFunction;

@interface SUNativeScriptMenuViewController : SUMenuViewController {
	SUScriptFunction* _action;
	NSArray* _menuItems;
}
@property(retain, nonatomic) SUScriptFunction* action;
@property(retain, nonatomic) NSArray* menuItems;
-(void)dealloc;
-(id)copyScriptViewController;
-(BOOL)isMenuItemEnabledAtIndex:(int)index;
-(int)numberOfMenuItems;
-(void)performActionForMenuItemAtIndex:(int)index;
-(id)titleOfMenuItemAtIndex:(int)index;
@end
