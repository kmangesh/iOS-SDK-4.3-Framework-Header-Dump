/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTProfileMessage.h"

@class NSDictionary, NSData, NSString, NSArray;

@interface FTProfileProvisionMessage : FTProfileMessage {
	NSString* _deviceID;
	NSData* _pushToken;
	NSArray* _emailAddresses;
	NSString* _responseSignature;
	NSString* _responseUserID;
	NSDictionary* _responseAliasInfo;
}
@property(copy) NSString* deviceID;
@property(copy) NSData* pushToken;
@property(copy) NSArray* emailAddresses;
@property(copy) NSString* responseSignature;
@property(copy) NSString* responseUserID;
@property(copy) NSDictionary* responseAliasInfo;
-(void)dealloc;
-(id)bagKey;
-(id)requiredKeys;
-(id)messageBody;
-(void)handleResponseDictionary:(id)dictionary;
@end

