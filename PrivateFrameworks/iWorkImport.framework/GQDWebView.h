/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDGraphic.h"
#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"

@class GQDImageBinary;

__attribute__((visibility("hidden")))
@interface GQDWebView : GQDGraphic <GQDNameMappable> {
@private
	GQDImageBinary* mImageBinary;
}
+(const StateSpec*)stateForReading;
-(void)dealloc;
-(id)imageBinary;
@end
