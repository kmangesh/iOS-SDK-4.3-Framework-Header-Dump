/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDKeyedCollection.h"
#import "OfficeImport-Structs.h"
#import "EDCollection.h"

@class TSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface EDKeyedCollection : EDCollection {
@private
	TSUPointerKeyDictionary* mMap;
}
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(unsigned)addObject:(id)object;
-(void)insertObject:(id)object atIndex:(unsigned)index;
-(void)removeObjectAtIndex:(unsigned)index;
-(void)removeAllObjects;
-(id)objectWithKey:(int)key;
@end

@interface EDKeyedCollection (Private)
-(bool)isObjectInMap:(id)map;
-(void)insertIntoMap:(id)map;
-(void)removeFromMap:(id)map;
-(bool)isOverwritingKeyOK;
@end
