/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSCopying.h"

@class NSString, NSDocInfo;

@interface NSLeafProxy <NSCopying> {
	Class isa;
	NSString* dir;
	NSString* file;
	NSDocInfo* docInfo;
	int refCount;
	id realObject;
}
+(id)allocWithZone:(NSZone*)zone;
+(id)alloc;
+(void)forwardInvocation:(id)invocation;
-(void)forwardInvocation:(id)invocation;
-(id)methodSignatureForSelector:(SEL)selector;
-(id)initDir:(id)dir file:(id)file docInfo:(id)info;
-(id)copyWithZone:(NSZone*)zone;
-(id)copy;
-(void)reallyDealloc;
-(id)retain;
-(void)release;
-(id)autorelease;
-(unsigned)retainCount;
-(void)dealloc;
-(BOOL)isProxy;
@end

