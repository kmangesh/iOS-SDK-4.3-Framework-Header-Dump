/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSPropertyDescription.h"

@class NSString, NSFetchRequest;

@interface NSFetchedPropertyDescription : NSPropertyDescription {
@private
	void* _reserved5;
	void* _reserved6;
	NSFetchRequest* _fetchRequest;
	NSString* _lazyFetchRequestEntityName;
}
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isEqual:(id)equal;
-(id)description;
-(id)fetchRequest;
-(void)setFetchRequest:(id)request;
-(BOOL)isTransient;
-(BOOL)isReadOnly;
-(unsigned)_propertyType;
-(void)_createCachesAndOptimizeState;
@end

