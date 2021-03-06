/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class OADTableRow, OADTable;

__attribute__((visibility("hidden")))
@interface PMTableRowMapper : CMMapper {
@private
	OADTable* mTable;
	OADTableRow* mRow;
	unsigned mRowIndex;
}
-(id)initWithOadTable:(id)oadTable rowIndex:(unsigned)index parent:(id)parent;
-(float)height;
-(unsigned)cellCount;
-(void)mapAt:(id)at withState:(id)state;
@end

