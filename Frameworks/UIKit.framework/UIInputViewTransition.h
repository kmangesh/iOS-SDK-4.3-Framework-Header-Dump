/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIKit-Structs.h"

@class UIInputViewSet, UIInputViewAnimationStyle;

__attribute__((visibility("hidden")))
@interface UIInputViewTransition : XXUnknownSuperclass {
@private
	UIInputViewSet* oldSet;
	UIInputViewSet* newSet;
	UIInputViewAnimationStyle* animationStyle;
	BOOL cancelled;
	int animationState;
	double animationStartTime;
	BOOL skipNotifications;
	CGRect beginFrame;
	CGRect endFrame;
	CGRect beginFrameScreen;
	CGRect endFrameScreen;
	CGRect beginFloatingFrame;
	CGRect endFloatingFrame;
	CGRect beginFloatingFrameScreen;
	CGRect endFloatingFrameScreen;
}
@property(retain, nonatomic) UIInputViewSet* oldSet;
@property(retain, nonatomic) UIInputViewSet* newSet;
@property(retain, nonatomic) UIInputViewAnimationStyle* animationStyle;
@property(assign, nonatomic) BOOL cancelled;
@property(assign, nonatomic) int animationState;
@property(assign, nonatomic) double animationStartTime;
@property(assign, nonatomic) BOOL skipNotifications;
@property(assign, nonatomic) CGRect beginFrame;
@property(assign, nonatomic) CGRect endFrame;
@property(assign, nonatomic) CGRect beginFrameScreen;
@property(assign, nonatomic) CGRect endFrameScreen;
@property(assign, nonatomic) CGRect beginFloatingFrame;
@property(assign, nonatomic) CGRect endFloatingFrame;
@property(assign, nonatomic) CGRect beginFloatingFrameScreen;
@property(assign, nonatomic) CGRect endFloatingFrameScreen;
@property(readonly, assign, nonatomic) CGPoint deprecatedCenterEnd;
@property(readonly, assign, nonatomic) CGPoint deprecatedCenterBegin;
@property(readonly, assign, nonatomic) CGRect deprecatedBounds;
@property(readonly, assign, nonatomic) int endState;
@property(readonly, assign, nonatomic) int transitioningState;
@property(readonly, assign, nonatomic) int beginState;
-(void)dealloc;
-(void)postNotificationsForTransitionStart;
-(void)postNotificationsForTransitionEnd;
-(BOOL)canAnimate;
-(BOOL)subsumesTransition:(id)transition;
-(BOOL)isAlmostDone;
-(BOOL)shouldCompleteOnSuspend;
-(BOOL)requiresAutomaticAppearanceEnabled;
-(BOOL)isOnScreen;
-(id)description;
@end

