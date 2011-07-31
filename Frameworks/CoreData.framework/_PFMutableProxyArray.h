/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CoreData-Structs.h"

@class _PFArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _PFMutableProxyArray : XXUnknownSuperclass {
@private
	int _cd_rc;
	unsigned _editCount;
	unsigned _offset;
	unsigned _limit;
	_PFArray* _originalArray;
	NSMutableArray* _updatedObjectsArray;
	CFArrayRef _indicesVeneer;
}
-(id)initWithPFArray:(id)pfarray inRange:(NSRange)range;
-(id)initWithPFArray:(id)pfarray;
-(id)subarrayWithRange:(NSRange)range;
-(void)dealloc;
-(void)finalize;
-(id)retain;
-(void)release;
-(unsigned)retainCount;
-(unsigned)count;
-(void)_rehash;
-(id)objectAtIndex:(unsigned)index;
-(id)managedObjectIDAtIndex:(unsigned)index;
-(unsigned)indexOfObject:(id)object;
-(unsigned)indexOfObject:(id)object inRange:(NSRange)range;
-(unsigned)indexOfObjectIdenticalTo:(id)to;
-(unsigned)indexOfObjectIdenticalTo:(id)to inRange:(NSRange)range;
-(unsigned)indexOfManagedObjectForObjectID:(id)objectID;
-(id)arrayFromObjectIDs;
-(id)newArrayFromObjectIDs;
-(void)addObject:(id)object;
-(void)removeLastObject;
-(void)insertObject:(id)object atIndex:(unsigned)index;
-(void)removeObjectAtIndex:(unsigned)index;
-(void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;
@end
