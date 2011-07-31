/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface NSCountedSet : XXUnknownSuperclass {
@private
	id _table;
	void* _reserved;
}
-(unsigned)count;
-(id)member:(id)member;
-(id)objectEnumerator;
-(void)addObject:(id)object;
-(void)removeObject:(id)object;
-(id)copyWithZone:(NSZone*)zone;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)allObjects;
-(id)anyObject;
-(id)descriptionWithLocale:(id)locale;
-(BOOL)intersectsSet:(id)set;
-(BOOL)isEqualToSet:(id)set;
-(BOOL)isSubsetOfSet:(id)set;
-(void)makeObjectsPerformSelector:(SEL)selector;
-(void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;
-(Class)classForCoder;
-(void)intersectSet:(id)set;
-(void)unionSet:(id)set;
-(void)removeAllObjects;
-(unsigned)countForObject:(id)object;
-(id)init;
-(id)initWithCapacity:(unsigned)capacity;
-(id)initWithObjects:(id*)objects count:(unsigned)count;
-(id)initWithSet:(id)set copyItems:(BOOL)items;
-(id)initWithArray:(id)array;
-(id)initWithSet:(id)set;
-(void)dealloc;
@end
