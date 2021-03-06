/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "CKService.h"


@interface CKClientComposeService : CKService {
}
-(id)initWithServiceID:(id)serviceID;
-(id)newMessageWithComposition:(id)composition forConversation:(id)conversation;
-(void)sendMessage:(id)message;
-(BOOL)isValidAddress:(id)address;
-(id)abPropertyTypes;
-(id)copyEntityForAddressString:(id)addressString;
-(BOOL)canSendToRecipients:(id)recipients withAttachments:(id)attachments alertIfUnable:(BOOL)unable;
-(id)headerTitleForComposeRecipients:(id)composeRecipients mediaObjects:(id)objects subject:(id)subject;
@end

