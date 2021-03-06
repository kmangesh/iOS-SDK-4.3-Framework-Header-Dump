/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SCRCTargetSelectorTimer, SCROConnection, NSLock;

@interface SCROScriptClient : XXUnknownSuperclass {
	NSLock* _lock;
	SCROConnection* _connection;
	SCRCTargetSelectorTimer* _timer;
	BOOL _isReady;
}
+(void)initialize;
+(id)sharedScriptClient;
-(id)init;
-(void)dealloc;
-(void)_killConnection;
-(id)_lazyConnection;
-(BOOL)_isReady;
-(void)handleCallback:(id)callback;
-(BOOL)runScriptFile:(id)file;
@end

