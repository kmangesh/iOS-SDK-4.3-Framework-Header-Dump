/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MFMessageDataConsumerFactory.h"

@class Message, MessageLibrary;

@interface _MFDALibraryConsumerFactory : XXUnknownSuperclass <MFMessageDataConsumerFactory> {
	MessageLibrary* _library;
	Message* _message;
}
@property(retain, nonatomic) MessageLibrary* library;
@property(retain, nonatomic) Message* message;
-(id)dataConsumerForPart:(id)part;
-(void)dealloc;
@end

