/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISInvocationRecorder.h"


@interface ISDelayedInvocationRecorder : ISInvocationRecorder {
	double _delayInterval;
}
@property(assign, nonatomic) double delayInterval;
-(void)invokeInvocation:(id)invocation;
@end
