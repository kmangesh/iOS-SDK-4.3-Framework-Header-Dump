/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface InvocationTrampoline : XXUnknownSuperclass {
	id _target;
}
@property(retain) id target;
-(void)dealloc;
-(void)performInvocation:(id)invocation;
-(id)methodSignatureForSelector:(SEL)selector;
-(BOOL)respondsToSelector:(SEL)selector;
-(void)forwardInvocation:(id)invocation;
@end

