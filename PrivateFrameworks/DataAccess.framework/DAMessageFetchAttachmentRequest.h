/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface DAMessageFetchAttachmentRequest : XXUnknownSuperclass {
	NSString* _messageID;
	NSString* _attachmentName;
}
-(id)initWithAttachmentName:(id)attachmentName andMessageServerID:(id)anId;
-(void)dealloc;
-(id)messageID;
-(id)attachmentName;
@end
