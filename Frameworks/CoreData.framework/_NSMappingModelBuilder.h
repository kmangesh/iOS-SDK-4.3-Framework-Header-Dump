/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSManagedObjectModel, NSError, NSEntityMapping;

__attribute__((visibility("hidden")))
@interface _NSMappingModelBuilder : XXUnknownSuperclass {
@private
	NSManagedObjectModel* _sourceModel;
	NSManagedObjectModel* _destinationModel;
	NSEntityMapping* _currentEntityMapping;
	NSError* _error;
}
+(int)migrationDebugLevel;
+(void)setMigrationDebugLevel:(int)level;
-(id)initWithSourceModel:(id)sourceModel destinationModel:(id)model;
-(void)dealloc;
-(void)_resetCaches;
-(id)newInferredMappingModel:(id*)model;
-(BOOL)inferPropertyMappingsForEntityMapping:(id)entityMapping;
-(id)newEntityMappingWithSource:(id)source destination:(id)destination;
-(BOOL)_canTransformSourceAttributeType:(unsigned)type toDestinationAttributeType:(unsigned)destinationAttributeType;
-(id)newInferredPropertyMappingWithSourceAttribute:(id)sourceAttribute destinationAttribute:(id)attribute;
-(id)newInferredPropertyMappingWithSourceRelationship:(id)sourceRelationship destinationRelationship:(id)relationship;
@end
