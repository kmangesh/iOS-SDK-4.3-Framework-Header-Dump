/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDShape.h"
#import "GQDNameMappable.h"
#import "GQDGraphic.h"
#import "iWorkImport-Structs.h"

@class GQDWPLayoutFrame, GQDPath;

__attribute__((visibility("hidden")))
@interface GQDShape : GQDGraphic <GQDNameMappable> {
@private
	GQDPath* mPath;
	GQDWPLayoutFrame* mLayoutFrame;
}
+(const StateSpec*)stateForReading;
-(void)dealloc;
-(id)layoutFrame;
-(BOOL)isBlank;
-(BOOL)isRectangularAndAxisAlignedToAngle:(float)angle;
-(id)path;
-(CGPathRef)createBezierPath;
@end

@interface GQDShape (GQHLine)
-(id)initWithGraphic:(id)graphic path:(id)path geometry:(id)geometry;
@end

