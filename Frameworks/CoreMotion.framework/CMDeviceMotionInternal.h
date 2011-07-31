/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import "NSCopying.h"
#import <Foundation/NSObject.h>

@class CMAttitude;

@interface CMDeviceMotionInternal : NSObject <NSCopying> {
	XXStruct_taVrlB fGravity;
	XXStruct_taVrlB fUserAcceleration;
	XXStruct_taVrlB fRotationRate;
	CMAttitude* fAttitude;
}
-(void)setDeviceMotion:(XXStruct_U9ijYB)motion;
-(id)initWithDeviceMotion:(XXStruct_U9ijYB)deviceMotion;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
@end
