/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "EDBorders.h"
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class EDResources;

__attribute__((visibility("hidden")))
@interface EDBorders : XXUnknownSuperclass <NSCopying> {
@private
	EDResources* mResources;
	unsigned mLeftBorderIndex;
	unsigned mRightBorderIndex;
	unsigned mTopBorderIndex;
	unsigned mBottomBorderIndex;
	unsigned mDiagonalBorderIndex;
	unsigned mVerticalBorderIndex;
	unsigned mHorizontalBorderIndex;
}
+(id)bordersWithResources:(id)resources;
+(id)bordersWithLeft:(id)left right:(id)right top:(id)top bottom:(id)bottom diagonal:(id)diagonal resources:(id)resources;
+(id)bordersWithLeft:(id)left right:(id)right top:(id)top bottom:(id)bottom diagonal:(id)diagonal vertical:(id)vertical horizontal:(id)horizontal resources:(id)resources;
-(id)initWithResources:(id)resources;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isEqualToBorders:(id)borders;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)leftBorder;
-(id)rightBorder;
-(id)topBorder;
-(id)bottomBorder;
-(id)diagonalBorder;
-(id)verticalBorder;
-(id)horizontalBorder;
@end

@interface EDBorders (EDDifferentialBorders)
-(void)setLeftBorder:(id)border;
-(void)setRightBorder:(id)border;
-(void)setTopBorder:(id)border;
-(void)setBottomBorder:(id)border;
-(void)setDiagonalBorder:(id)border;
-(void)setVerticalBorder:(id)border;
-(void)setHorizontalBorder:(id)border;
@end

