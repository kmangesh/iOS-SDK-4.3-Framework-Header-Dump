/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface NSIndexSet : XXUnknownSuperclass <NSCopying, NSMutableCopying, NSCoding> {
	struct {
		unsigned _inverted : 1;
		unsigned _builtin : 1;
		unsigned _isCF : 1;
		unsigned _reserved : 29;
	} _indexSetFlags;
	union {
		struct {
			NSRange _range;
		} _singleRange;
		struct {
			void* _data;
			void* _reserved;
		} _multipleRanges;
	} _internal;
}
+(id)indexSet;
+(id)indexSetWithIndex:(unsigned)index;
+(id)indexSetWithIndexesInRange:(NSRange)range;
+(id)indexSetWithIndexes:(unsigned*)indexes count:(unsigned)count;
-(id)_init;
-(id)init;
-(id)initWithIndex:(unsigned)index;
-(id)initWithIndexesInRange:(NSRange)range;
-(void)_setContentToContentFromIndexSet:(id)indexSet;
-(id)initWithIndexSet:(id)indexSet;
-(id)initWithIndexes:(unsigned*)indexes count:(unsigned)count;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(Class)classForCoder;
-(unsigned)_indexOfRangeContainingIndex:(unsigned)rangeContainingIndex;
-(unsigned)_indexOfRangeBeforeOrContainingIndex:(unsigned)rangeBeforeOrContainingIndex;
-(unsigned)_indexOfRangeAfterOrContainingIndex:(unsigned)rangeAfterOrContainingIndex;
-(unsigned)hash;
-(BOOL)isEqualToIndexSet:(id)indexSet;
-(BOOL)isEqual:(id)equal;
-(id)copyWithZone:(NSZone*)zone;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(unsigned)count;
-(unsigned)firstIndex;
-(unsigned)lastIndex;
-(unsigned)_indexClosestToIndex:(unsigned)index equalAllowed:(BOOL)allowed following:(BOOL)following;
-(unsigned)indexGreaterThanIndex:(unsigned)index;
-(unsigned)indexLessThanIndex:(unsigned)index;
-(unsigned)indexGreaterThanOrEqualToIndex:(unsigned)index;
-(unsigned)indexLessThanOrEqualToIndex:(unsigned)index;
-(unsigned)getIndexes:(unsigned*)indexes maxCount:(unsigned)count inIndexRange:(NSRange*)indexRange;
-(unsigned)__getContainmentVector:(out BOOL*)vector inRange:(NSRange)range;
-(unsigned)countOfIndexesInRange:(NSRange)range;
-(unsigned)rangeCount;
-(NSRange)rangeAtIndex:(unsigned)index;
-(BOOL)containsIndex:(unsigned)index;
-(BOOL)containsIndexesInRange:(NSRange)range;
-(BOOL)containsIndexes:(id)indexes;
-(BOOL)intersectsIndexesInRange:(NSRange)range;
-(id)_numberEnumerator;
-(id)description;
-(void)enumerateIndexesUsingBlock:(id)block;
-(void)enumerateIndexesWithOptions:(unsigned)options usingBlock:(id)block;
-(void)enumerateIndexesInRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;
-(unsigned)indexPassingTest:(id)test;
-(unsigned)indexWithOptions:(unsigned)options passingTest:(id)test;
-(unsigned)indexInRange:(NSRange)range options:(unsigned)options passingTest:(id)test;
-(id)indexesPassingTest:(id)test;
-(id)indexesWithOptions:(unsigned)options passingTest:(id)test;
-(id)indexesInRange:(NSRange)range options:(unsigned)options passingTest:(id)test;
@end

