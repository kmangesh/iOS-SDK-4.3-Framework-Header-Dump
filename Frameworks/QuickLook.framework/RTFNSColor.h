/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "QuickLook-Structs.h"


__attribute__((visibility("hidden")))
@interface RTFNSColor : XXUnknownSuperclass {
@private
	float _red;
	float _green;
	float _blue;
	float _alpha;
}
@property(assign) float red;
@property(assign) float green;
@property(assign) float blue;
@property(assign) float alpha;
+(id)colorWithCalibratedWhite:(float)calibratedWhite alpha:(float)alpha;
+(id)colorWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue alpha:(float)alpha;
+(id)whiteColor;
+(id)blackColor;
-(id)init;
-(id)initWithCalibratedWhite:(float)calibratedWhite alpha:(float)alpha;
-(id)initWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue alpha:(float)alpha;
-(id)copyWithZone:(NSZone*)zone;
-(void)getRed:(float*)red green:(float*)green blue:(float*)blue alpha:(float*)alpha;
-(id)colorUsingColorSpaceName:(id)name;
-(id)description;
@end

