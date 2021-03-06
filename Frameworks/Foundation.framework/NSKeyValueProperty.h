/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSKeyValueContainerClass;

__attribute__((visibility("hidden")))
@interface NSKeyValueProperty : XXUnknownSuperclass {
@private
	NSKeyValueContainerClass* _containerClass;
	NSString* _keyPath;
}
-(id)_initWithContainerClass:(id)containerClass keyPath:(id)path propertiesBeingInitialized:(CFSetRef)initialized;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)keyPath;
-(Class)isaForAutonotifying;
-(id)keyPathIfAffectedByValueForKey:(id)key exactMatch:(BOOL*)match;
-(id)keyPathIfAffectedByValueForMemberOfKeys:(id)keys;
-(void)object:(id)object didAddObservance:(id)observance recurse:(BOOL)recurse;
-(void)object:(id)object didRemoveObservance:(id)observance recurse:(BOOL)recurse;
-(BOOL)object:(id)object withObservance:(id)observance willChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB*)values;
-(void)object:(id)object withObservance:(id)observance didChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB)values;
-(id)dependentValueKeyOrKeysIsASet:(BOOL*)set;
-(id)restOfKeyPathIfContainedByValueForKeyPath:(id)keyPath;
-(BOOL)matchesWithoutOperatorComponentsKeyPath:(id)path;
@end

