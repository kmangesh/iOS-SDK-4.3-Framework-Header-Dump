/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTMessage.h"

@class NSData, NSString, NSNumber;

@interface FTRelayUpdateMessage : FTMessage {
	NSData* _selfPushToken;
	NSData* _selfRelayBlob;
	NSString* _peerID;
	NSData* _peerPushToken;
	NSNumber* _relayType;
	NSData* _relayConnectionID;
	NSData* _relayTransactionIDAlloc;
	NSData* _relayTokenAllocRes;
	NSData* _selfRelayIP;
	NSNumber* _selfRelayPort;
	NSData* _selfRelayNATIP;
	NSNumber* _selfRelayNATPort;
	NSData* _peerRelayIP;
	NSNumber* _peerRelayPort;
}
@property(copy) NSData* selfPushToken;
@property(copy) NSData* selfRelayBlob;
@property(copy) NSString* peerID;
@property(copy) NSData* peerPushToken;
@property(copy) NSNumber* relayType;
@property(copy) NSData* relayConnectionID;
@property(copy) NSData* relayTransactionIDAlloc;
@property(copy) NSData* relayTokenAllocRes;
@property(copy) NSData* selfRelayIP;
@property(copy) NSNumber* selfRelayPort;
@property(copy) NSData* selfRelayNATIP;
@property(copy) NSNumber* selfRelayNATPort;
@property(copy) NSData* peerRelayIP;
@property(copy) NSNumber* peerRelayPort;
-(void)dealloc;
-(id)bagKey;
-(id)requiredKeys;
-(id)messageBody;
@end
