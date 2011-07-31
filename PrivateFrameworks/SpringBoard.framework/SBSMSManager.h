/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface SBSMSManager : XXUnknownSuperclass {
}
+(BOOL)carrierSMSReceiveOnlyEnabled;
+(id)sharedSMSManager;
-(void)messageSent:(id)sent;
-(void)messageSendError:(id)error;
-(void)messageReceived:(id)received;
-(id)init;
-(void)redisplayAllMessagesForCarrierSMSReceiveOnlyMode;
-(void)dealloc;
-(id)badgeNumberOrString;
-(void)setBadgeNumberOrString:(id)string;
-(BOOL)isShowingSendFailure;
-(void)markMessageAsRead:(id)read;
-(void)deleteMessage:(id)message deleteConversationIfEmpty:(BOOL)empty;
-(void)updateSMSBadges;
@end
