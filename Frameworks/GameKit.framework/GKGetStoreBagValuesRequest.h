/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKDataRequest.h"

@class NSString, NSArray, NSDictionary;

@interface GKGetStoreBagValuesRequest : GKDataRequest {
	NSArray* _keys;
	NSDictionary* _bag;
	NSString* _playerID;
	NSString* _authToken;
	NSString* _accountName;
}
@property(retain, nonatomic) NSArray* keys;
@property(retain, nonatomic) NSDictionary* bag;
@property(retain, nonatomic) NSString* playerID;
@property(retain, nonatomic) NSString* authToken;
@property(retain, nonatomic) NSString* accountName;
-(id)key;
-(id)header;
-(id)request;
-(void)handleResponseFromServer:(id)server error:(id)error;
-(void)dealloc;
-(BOOL)authenticationRequired;
@end
