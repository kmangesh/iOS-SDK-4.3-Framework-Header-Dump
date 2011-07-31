/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import "SUMaskProvider.h"

@class SUScriptCanvasFunction;

@interface SUCanvasMaskProvider : SUMaskProvider {
	SUScriptCanvasFunction* _function;
}
-(id)initWithFunction:(id)function;
-(void)dealloc;
-(CGImageRef)copyMaskImageWithSize:(CGSize)size;
-(CGPathRef)copyPathForMaskWithSize:(CGSize)size;
@end
