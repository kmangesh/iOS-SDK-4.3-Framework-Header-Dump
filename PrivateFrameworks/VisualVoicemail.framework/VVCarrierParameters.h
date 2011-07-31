/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary;

@interface VVCarrierParameters : XXUnknownSuperclass {
	NSDictionary* _parameterValues;
}
+(id)carrierServiceName;
+(BOOL)ignoresRoamingSwitch;
+(BOOL)supportsDetachedStorage;
+(id)retryIntervals;
+(id)messageNotificationFallbackTimeout;
+(BOOL)supportsGreetingChanges;
+(BOOL)supportsPasswordChanges;
-(id)initForService:(id)service;
-(void)dealloc;
-(id)parameterValueForKey:(id)key;
@end
