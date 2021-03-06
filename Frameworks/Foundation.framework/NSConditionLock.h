/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSLocking.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface NSConditionLock : XXUnknownSuperclass <NSLocking> {
@private
	void* _priv;
}
+(id)allocWithZone:(NSZone*)zone;
-(id)init;
-(id)initWithCondition:(int)condition;
-(void)dealloc;
-(void)finalize;
-(int)condition;
-(void)lock;
-(BOOL)lockBeforeDate:(id)date;
-(void)lockWhenCondition:(int)condition;
-(BOOL)lockWhenCondition:(int)condition beforeDate:(id)date;
-(BOOL)tryLock;
-(BOOL)tryLockWhenCondition:(int)condition;
-(void)unlock;
-(void)unlockWithCondition:(int)condition;
-(id)description;
-(void)setName:(id)name;
-(id)name;
@end

