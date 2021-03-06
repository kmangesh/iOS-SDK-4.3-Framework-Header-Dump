/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import "ADJavaScriptObject.h"

@class NSNumber, NSString, NSArray, WebScriptObject, NSDate, SSItem;

@interface ADStoreItemJSO : ADJavaScriptObject {
	WebScriptObject* _jsListener;
	NSNumber* _adamId;
	NSString* _title;
	NSArray* _offers;
	NSDate* _expirationDate;
	NSArray* _previews;
	int _error;
	SSItem* _storeItem;
	BOOL _privilegedClient;
}
@property(retain, nonatomic) WebScriptObject* jsListener;
@property(readonly, copy, nonatomic) NSNumber* adamId;
@property(readonly, copy) NSString* title;
@property(readonly, copy) NSArray* offers;
@property(retain, nonatomic) NSDate* expirationDate;
@property(readonly, copy) NSArray* previews;
@property(assign, nonatomic) int error;
@property(retain, nonatomic) SSItem* storeItem;
@property(assign, nonatomic, getter=isPrivilegedClient) BOOL privilegedClient;
+(id)scriptingKeys;
-(void)dealloc;
-(id)initWithAdamId:(id)adamId;
-(void)setAdamId:(id)anId;
-(void)setTitle:(id)title;
-(void)setOffers:(id)offers;
-(void)setPreviews:(id)previews;
@end

