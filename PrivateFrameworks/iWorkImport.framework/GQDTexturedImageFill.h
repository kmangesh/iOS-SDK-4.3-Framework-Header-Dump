/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDNameMappable.h"
#import "GQDTexturedImageFill.h"
#import "iWorkImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GQDFilteredImage, GQDColor;

__attribute__((visibility("hidden")))
@interface GQDTexturedImageFill : XXUnknownSuperclass <GQDNameMappable> {
@private
	int mTechnique;
	GQDColor* mColor;
	GQDFilteredImage* mFilteredImage;
}
+(const StateSpec*)stateForReading;
-(void)dealloc;
-(int)technique;
-(id)color;
-(id)imageBinary;
@end

@interface GQDTexturedImageFill (Private)
-(int)readAttributesFromReader:(xmlTextReader*)reader processor:(id)processor;
-(void)invalidateFilteredImage;
-(void)setColor:(id)color;
@end
