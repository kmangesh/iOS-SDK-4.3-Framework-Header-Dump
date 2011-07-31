/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSString;

@interface AVChatParticipantStatusNugget : XXUnknownSuperclass <NSCoding> {
	NSString* _imHandleName;
	NSString* _imHandleID;
	NSString* _invitedBy;
	NSString* _vcPartyID;
	BOOL _sendingAudio;
	BOOL _sendingVideo;
	BOOL _usingICE;
	unsigned _ardRole;
	unsigned _state;
	int _error;
	unsigned _reason;
}
@property(readonly, assign, nonatomic) unsigned reason;
@property(readonly, assign, nonatomic) int error;
@property(readonly, assign, nonatomic) unsigned state;
@property(readonly, assign, nonatomic) unsigned ardRole;
@property(readonly, assign, nonatomic) BOOL isUsingICE;
@property(readonly, assign, nonatomic) BOOL sendingVideo;
@property(readonly, assign, nonatomic) BOOL sendingAudio;
@property(readonly, assign, nonatomic) NSString* vcPartyID;
@property(readonly, assign, nonatomic) NSString* invitedBy;
@property(readonly, assign, nonatomic) NSString* ID;
@property(readonly, assign, nonatomic) NSString* name;
@property(readonly, assign, nonatomic) NSDictionary* dictionaryDescription;
+(id)filterNuggets:(id)nuggets filterEndedState:(BOOL)state convertFromDict:(BOOL)dict;
+(id)nuggetWithDictionaryDescription:(id)dictionaryDescription;
-(id)initWithParticipant:(id)participant;
-(void)_configureWithDictionaryDescription:(id)dictionaryDescription;
-(void)dealloc;
-(void)setVCPartyID:(id)anId;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
@end
