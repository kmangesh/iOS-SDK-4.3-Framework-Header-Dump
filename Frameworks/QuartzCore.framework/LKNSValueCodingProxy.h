/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CACodingProxy.h"


__attribute__((visibility("hidden")))
@interface LKNSValueCodingProxy : CACodingProxy {
@private
	int _kind;
	union {
		CGPoint point;
		CGSize size;
		CGRect rect;
		CATransform3D transform;
		CADoublePoint dpoint;
		CADoubleSize dsize;
		CADoubleRect drect;
	} _u;
}
-(id)initWithObject:(id)object;
-(id)decodedObject;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
@end

