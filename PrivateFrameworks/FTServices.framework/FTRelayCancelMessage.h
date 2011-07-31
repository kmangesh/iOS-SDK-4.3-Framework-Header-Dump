/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTMessage.h"

@class NSData, NSString, NSNumber;

@interface FTRelayCancelMessage : FTMessage {
	NSString* _peerID;
	NSData* _peerPushToken;
	NSNumber* _relayType;
	NSNumber* _reason;
	NSData* _relayConnectionID;
	NSData* _selfRelayIP;
	NSNumber* _selfRelayPort;
	NSData* _peerRelayIP;
	NSNumber* _peerRelayPort;
}
@property(copy) NSString* peerID;
@property(copy) NSData* peerPushToken;
@property(copy) NSNumber* relayType;
@property(copy) NSNumber* reason;
@property(copy) NSData* relayConnectionID;
@property(copy) NSData* selfRelayIP;
@property(copy) NSNumber* selfRelayPort;
@property(copy) NSData* peerRelayIP;
@property(copy) NSNumber* peerRelayPort;
-(void)dealloc;
-(id)bagKey;
-(id)requiredKeys;
-(id)messageBody;
@end
