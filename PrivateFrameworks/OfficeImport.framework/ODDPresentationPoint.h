/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ODDPoint.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ODDPresentationPoint : ODDPoint {
@private
	ODDPresentationPoint* mParent;
	NSMutableArray* mChildren;
}
-(void)dealloc;
-(void)setType:(int)type;
-(id)parent;
-(id)children;
-(void)addChild:(id)child order:(unsigned long)order;
@end
