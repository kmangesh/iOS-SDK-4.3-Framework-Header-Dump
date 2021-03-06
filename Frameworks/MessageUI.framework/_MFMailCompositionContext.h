/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MFMailCompositionContext.h"

@class MFMessageViewingContext, MailMessage;

@interface _MFMailCompositionContext : MFMailCompositionContext {
@private
	int _composeType;
	MailMessage* _originalMessage;
	id _originalContent;
	MFMessageViewingContext* _loadingContext;
	struct {
		unsigned loadRest : 1;
		unsigned includeAttachments : 1;
	} _mailComposeFlags;
}
@property(readonly, assign, nonatomic) int composeType;
@property(readonly, retain, nonatomic) MailMessage* originalMessage;
@property(retain, nonatomic) id originalContent;
@property(retain, nonatomic) MFMessageViewingContext* loadingContext;
@property(assign, nonatomic) BOOL includeAttachments;
@property(assign, nonatomic) BOOL loadRest;
-(id)initWithComposeType:(int)composeType;
-(id)initWithComposeType:(int)composeType originalMessage:(id)message;
-(id)initReplyToMessage:(id)message;
-(id)initReplyAllToMessage:(id)message;
-(id)initForwardOfMessage:(id)message;
-(id)initDraftRestoreOfMessage:(id)message;
-(id)initOutboxRestoreOfMessage:(id)message;
-(void)dealloc;
@end

