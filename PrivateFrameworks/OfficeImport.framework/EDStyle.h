/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "EDStyle.h"
#import "EDImmutableObject.h"
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class EDProtection, EDResources;

__attribute__((visibility("hidden")))
@interface EDStyle : XXUnknownSuperclass <NSCopying, EDImmutableObject> {
@private
	EDResources* mResources;
	unsigned mParentIndex;
	unsigned mContentFormatId;
	unsigned mFontIndex;
	unsigned mFillIndex;
	unsigned mAlignmentInfoIndex;
	unsigned mBordersIndex;
	EDProtection* mProtection;
	unsigned mIndex;
	bool mContentFormatOverridden;
	bool mFontOverridden;
	bool mFillOverridden;
	bool mAlignmentInfoOverridden;
	bool mBordersOverridden;
	bool mProtectionOverridden;
	bool mDoNotModify;
}
+(id)styleWithResources:(id)resources;
-(id)initWithResources:(id)resources;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isEquivalentToStyle:(id)style;
-(BOOL)isEqualToStyle:(id)style;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(bool)isContentFormatOverridden;
-(void)setContentFormatOverridden:(bool)overridden;
-(id)contentFormat;
-(void)setContentFormat:(id)format;
-(bool)isFontOverridden;
-(void)setFontOverridden:(bool)overridden;
-(id)font;
-(void)setFont:(id)font;
-(bool)isFillOverridden;
-(void)setFillOverridden:(bool)overridden;
-(id)fill;
-(void)setFill:(id)fill;
-(bool)isAlignmentInfoOverridden;
-(void)setAlignmentInfoOverridden:(bool)overridden;
-(id)alignmentInfo;
-(void)setAlignmentInfo:(id)info;
-(bool)isBordersOverridden;
-(void)setBordersOverridden:(bool)overridden;
-(id)borders;
-(void)setBorders:(id)borders;
-(bool)isProtectionOverridden;
-(void)setProtectionOverridden:(bool)overridden;
-(id)protection;
-(void)setProtection:(id)protection;
-(id)parent;
-(void)setParent:(id)parent;
-(unsigned)index;
-(void)setDoNotModify:(bool)modify;
@end

@interface EDStyle (EDInternal)
-(unsigned)fontIndex;
-(void)setFontIndex:(unsigned)index;
-(unsigned)contentFormatId;
-(void)setContentFormatId:(unsigned)anId;
-(unsigned)parentIndex;
-(void)setParentIndex:(unsigned)index;
-(unsigned)bordersIndex;
-(void)setBordersIndex:(unsigned)index;
-(unsigned)fillIndex;
-(void)setFillIndex:(unsigned)index;
-(unsigned)alignmentInfoIndex;
-(void)setAlignmentInfoIndex:(unsigned)index;
@end

@interface EDStyle (EDStylesCollection)
-(void)setIndex:(unsigned)index;
@end

