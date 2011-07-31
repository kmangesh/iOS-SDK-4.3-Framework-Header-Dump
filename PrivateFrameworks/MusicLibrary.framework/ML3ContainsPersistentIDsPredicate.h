/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Predicate.h"
#import "MusicLibrary-Structs.h"


@interface ML3ContainsPersistentIDsPredicate : ML3Predicate {
@private
	long long* _persistentIDs;
	unsigned _count;
}
+(id)predicateWithPersistentIDs:(long long*)persistentIDs count:(unsigned)count;
-(id)initWithPersistentIDs:(long long*)persistentIDs count:(unsigned)count;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;
-(void)bindToSqlite3Statement:(sqlite3_stmt*)sqlite3Statement bindingIndex:(inout int*)index;
@end
