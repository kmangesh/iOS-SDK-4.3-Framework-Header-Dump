/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptObject.h"

@class WebScriptObject, NSString, SUScriptFunction;

@interface SUScriptDocumentInteractionController : SUScriptObject {
	SUScriptFunction* _cancelFunction;
	SUScriptFunction* _openWithFunction;
}
@property(copy) NSString* UTI;
@property(retain) WebScriptObject* openWithFunction;
@property(retain) WebScriptObject* cancelFunction;
+(id)webScriptNameForKey:(const char*)key;
+(id)webScriptNameForSelector:(SEL)selector;
-(void)dealloc;
-(void)dismissMenuAnimated:(id)animated;
-(void)showOpenWithMenuFromDOMElement:(id)domelement;
-(void)showOpenWithMenuFromNavigationItem:(id)navigationItem;
-(id)_className;
-(id)_cancelFunction;
-(id)_nativeDocumentInteractionController;
-(id)_nativeObject;
-(id)_openWithFunction;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
@end

