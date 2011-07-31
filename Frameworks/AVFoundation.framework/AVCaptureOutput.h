/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, AVCaptureOutputInternal;

@interface AVCaptureOutput : XXUnknownSuperclass {
@private
	AVCaptureOutputInternal* _outputInternal;
}
@property(readonly, assign, nonatomic) NSArray* connections;
-(id)init;
-(void)dealloc;
-(id)session;
-(void)setSession:(id)session;
-(BOOL)canAddConnectionForMediaType:(id)mediaType;
-(id)addConnection:(id)connection error:(id*)error;
-(void)removeConnection:(id)connection;
-(void)didStartForSession:(id)session;
-(void)didStopForSession:(id)session error:(id)error;
-(void)handleNotification:(id)notification payload:(id)payload;
-(id)_applyOverridesToCaptureOptions:(id)captureOptions;
-(id)notReadyError;
-(id)firstEnabledConnectionForMediaType:(id)mediaType;
-(id)activeConnections;
-(int)changeSeed;
-(void)bumpChangeSeed;
@end
