/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EPPivotTableStyleFlattener.h"
#import "EPStyleFlattener.h"

@class EDPivotTable;

__attribute__((visibility("hidden")))
@interface EPPivotTableStyleFlattener : EPStyleFlattener {
@private
	EDPivotTable* mPivotTable;
	int mFirstHeaderRow;
	int mFirstDataRow;
	int mFirstDataColumn;
	unsigned mRowFieldsCount;
	unsigned mColumnFieldsCount;
	unsigned mPageFieldsCount;
}
-(bool)isObjectSupported:(id)supported;
-(id)collectionFromWorksheet:(id)worksheet;
-(id)styleFromObject:(id)object;
-(id)extractRowStyleElements:(id)elements parentScope:(id)scope row:(int)row;
-(id)extractCellStyleElements:(id)elements parentScope:(id)scope row:(int)row column:(int)column;
-(id)keysInTheOrderTheyShouldBeApplied;
-(int)borderFlagsForStyleType:(int)styleType row:(int)row column:(int)column;
-(void)cacheSizes:(id)sizes inObject:(id)object;
-(void)clearCache;
@end

@interface EPPivotTableStyleFlattener (Private)
-(int)stripeOffset:(int)offset row:(bool)row;
-(unsigned)constrainLevel:(unsigned)level;
-(void)addRowSubheadingLevel:(unsigned)level to:(id)to;
-(void)addColumnSubheadingLevel:(unsigned)level to:(id)to;
-(void)addSubtotalRowLevel:(unsigned)level to:(id)to;
-(void)addSubtotalColumnLevel:(unsigned)level to:(id)to;
@end
