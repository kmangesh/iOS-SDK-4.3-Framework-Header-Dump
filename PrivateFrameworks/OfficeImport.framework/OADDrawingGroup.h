/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class OADShapeProperties, NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADDrawingGroup : XXUnknownSuperclass {
@private
	NSMutableArray* mBlips;
	OADShapeProperties* mShapeDefaults;
}
-(id)init;
-(void)dealloc;
-(id)blipAtIndex:(long)index;
-(unsigned long)addBlip:(id)blip;
-(unsigned long)blipCount;
-(id)blips;
-(id)shapeDefaults;
@end

