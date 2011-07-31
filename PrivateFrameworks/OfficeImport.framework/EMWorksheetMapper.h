/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EMWorksheetMapper.h"
#import "OfficeImport-Structs.h"
#import "EMSheetMapper.h"

@class ECColumnWidthConvertor, CMStyle, EDWorksheet;

__attribute__((visibility("hidden")))
@interface EMWorksheetMapper : EMSheetMapper {
@private
	EDWorksheet* edWorksheet;
	CMStyle* mStyle;
	unsigned mMaxPopulatedColumn;
	unsigned mMaxPopulatedRow;
	double* mColumnGrid;
	double* mRowGrid;
	int mWidth;
	int mHeight;
	ECColumnWidthConvertor* mColumnWidthConvertor;
}
-(id)initWithEDWorksheet:(id)edworksheet parent:(id)parent;
-(void)_initWithState:(id)state;
-(void)dealloc;
-(BOOL)isVisible;
-(double*)columnGrid;
-(int)columnCount;
-(double*)rowGrid;
-(int)maxRowNumber;
-(double)defaultRowHeight;
-(double)xlColumnWidthToPoints:(double)points;
-(double)defaultColumnWidth;
-(int)width;
-(int)height;
-(void)mapAt:(id)at withState:(id)state;
-(id)columnWidthConvertor;
-(int)preprocessWidthWithState:(id)state;
-(int)preprocessHeightWithState:(id)state;
-(CGSize)preprocessSizeWithState:(id)state;
@end

@interface EMWorksheetMapper (Private)
-(void)setRowGrid;
-(void)countRowsAndColumnsWithState:(id)state;
-(void)mapColumnInfosAt:(id)at withState:(id)state;
-(void)mapGridAt:(id)at;
-(void)mapDrawablesAt:(id)at withState:(id)state;
-(void)mapTableAt:(id)at withState:(id)state;
-(void)mapTableStyleAt:(id)at withState:(id)state;
@end
