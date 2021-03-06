/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "MSSearchDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSOperationQueue, MSSearch, AAAccount;

@interface AAAutoAccountVerifier : XXUnknownSuperclass <MSSearchDelegate> {
	NSOperationQueue* _requesterQueue;
	MSSearch* _search;
	AAAccount* _account;
	id _handler;
	int _attempts;
	BOOL _canceled;
}
@property(retain, nonatomic) AAAccount* account;
-(id)init;
-(id)initWithAccount:(id)account;
-(void)dealloc;
-(void)sendVerificationEmail;
-(void)verifyWithHandler:(id)handler;
-(void)cancel;
-(void)_verify;
-(void)_downloadURLConfiguration:(id)configuration;
-(void)_validateToken:(id)token;
-(BOOL)search:(id)search didFindResults:(id)results;
-(void)search:(id)search didFinishWithError:(id)error;
@end

