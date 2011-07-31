/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MailboxUid, NSThread, NSString, InvocationQueue, MFError;

@interface ActivityMonitor : XXUnknownSuperclass {
	NSThread* _runningThread;
	NSString* _taskName;
	NSString* _displayName;
	NSString* _statusMessage;
	NSString* _descriptionString;
	InvocationQueue* _ourQueue;
	double _percentDone;
	unsigned _key : 13;
	unsigned _canCancel : 1;
	unsigned _shouldCancel : 1;
	unsigned _isActive : 1;
	unsigned _changeCount : 8;
	id _delegate;
	id _target;
	MFError* _error;
	unsigned _expectedLength;
	unsigned _maxCount;
	unsigned _currentCount;
	double _currentItemPercentDone;
	unsigned _supportsPerItemProgress : 1;
	MailboxUid* _mailbox;
	double _lastTime;
	double _startTime;
	BOOL _gotNewMessages;
}
@property(retain) MailboxUid* mailbox;
+(id)currentMonitor;
+(void)destroyMonitor;
-(id)init;
-(void)dealloc;
-(BOOL)isActive;
-(void)setDelegate:(id)delegate;
-(void)cancelMessage;
-(void)postActivityStarting;
-(void)postActivityFinished:(id)finished;
-(void)startActivity;
-(void)finishedActivity:(id)activity;
-(void)elevateDBPriority:(BOOL)priority;
-(void)notifyConnectionEstablished;
-(id)userInfoForNotification;
-(void)postDidChangeWithUserInfo:(id)post;
-(void)_didChange;
-(void)setMaxCount:(int)count;
-(void)setCurrentCount:(int)count;
-(void)setSupportsPerItemProgress:(BOOL)progress;
-(id)_ntsThrottledUserInfoDict;
-(void)setPercentDoneOfCurrentItem:(double)currentItem;
-(void)reset;
-(void)setGotNewMessages;
-(BOOL)gotNewMessages;
-(int)changeCount;
-(void)setStatusMessage:(id)message;
-(void)setStatusMessage:(id)message percentDone:(double)done;
-(id)statusMessage;
-(void)setPercentDone:(double)done;
-(double)percentDone;
-(void)setExpectedLength:(unsigned)length;
-(unsigned)expectedLength;
-(id)description;
-(id)taskName;
-(void)setTaskName:(id)name;
-(id)displayName;
-(void)setDisplayName:(id)name maxCount:(int)count;
-(void)setDisplayName:(id)name;
-(void)setActivityTarget:(id)target;
-(id)activityTarget;
-(BOOL)_lockedAddActivityTarget:(id)target;
-(void)addActivityTarget:(id)target;
-(void)addActivityTargets:(id)targets;
-(void)removeActivityTarget:(id)target;
-(void)setPrimaryTarget:(id)target;
-(id)primaryTarget;
-(id)activityTargets;
-(BOOL)canBeCancelled;
-(void)setCanBeCancelled:(BOOL)cancelled;
-(BOOL)shouldCancel;
-(void)setShouldCancel:(BOOL)cancel;
-(void)cancel;
-(void)setInvocationQueue:(id)queue;
-(int)acquireExclusiveAccessKey;
-(void)relinquishExclusiveAccessKey:(int)key;
-(void)setStatusMessage:(id)message percentDone:(double)done withKey:(int)key;
-(void)setStatusMessage:(id)message withKey:(int)key;
-(void)setPercentDone:(double)done withKey:(int)key;
-(id)error;
-(void)setError:(id)error;
@end
