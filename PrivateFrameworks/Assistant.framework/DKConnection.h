/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Assistant.framework/Assistant
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Assistant-Structs.h"

@class NSString, DKServer;

@interface DKConnection : XXUnknownSuperclass {
@private
	NSString* _serviceName;
	unsigned _publicPort;
	unsigned _serverPort;
	DKServer* _callbackServer;
	dispatch_source_s* _deadNameSource;
}
@property(readonly, assign) NSString* serviceName;
-(void)setDisconnectHandler:(id)handler;
-(void)_scheduleDeadNamePortForPort:(unsigned)port withHandler:(id)handler;
-(void)setCallbackHandler:(id)handler;
-(BOOL)sendMessage:(id)message info:(id)info completion:(id)completion;
-(BOOL)_sendMessage:(id)message info:(id)info replyPort:(unsigned)port;
-(dispatch_source_s*)_replyPortSource;
-(dispatch_queue_s*)_replyQueue;
-(unsigned)_serverPort;
-(void)_cleanupServerPorts;
-(unsigned)_serverPortWithTimeout:(unsigned)timeout;
-(unsigned)_publicPort;
-(unsigned)_callbackPort;
-(void)dealloc;
-(id)initWithServerPort:(unsigned)serverPort;
-(id)initWithServiceName:(id)serviceName;
@end
