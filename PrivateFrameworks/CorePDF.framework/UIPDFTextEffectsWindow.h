/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "UIPDFAutoRotatingWindow.h"
#import "CorePDF-Structs.h"


@interface UIPDFTextEffectsWindow : UIPDFAutoRotatingWindow {
	unsigned _activeEffectsCount;
	BOOL _inDealloc;
}
+(id)sharedTextEffectsWindow;
+(id)sharedTextEffectsWindowAboveStatusBar;
+(void)releaseSharedInstances;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(BOOL)_disableViewScaling;
-(void)delayHideWindow;
-(void)_didRemoveSubview:(id)subview;
-(void)sortSubviews;
-(void)didAddSubview:(id)subview;
-(void)bringSubviewToFront:(id)front;
-(void)sendSubviewToBack:(id)back;
-(void)updateForOrientation:(int)orientation;
-(void)matchDeviceOrientation;
-(BOOL)isInternalWindow;
@end
