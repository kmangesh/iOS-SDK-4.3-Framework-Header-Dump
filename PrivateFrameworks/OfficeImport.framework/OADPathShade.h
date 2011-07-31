/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADShade.h"

@class OADRelativeRect;

__attribute__((visibility("hidden")))
@interface OADPathShade : OADShade {
@private
	OADRelativeRect* mFillToRect;
	BOOL mIsFillToRectOverridden;
	int mType;
	BOOL mIsTypeOverridden;
}
+(id)defaultProperties;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)initWithDefaults;
-(id)fillToRect;
-(void)setFillToRect:(id)rect;
-(BOOL)isFillToRectOverridden;
-(int)type;
-(void)setType:(int)type;
-(BOOL)isTypeOverridden;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
@end
