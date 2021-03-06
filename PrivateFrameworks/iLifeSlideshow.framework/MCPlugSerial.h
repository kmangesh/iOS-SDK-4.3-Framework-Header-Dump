/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "MCPlug.h"

@class MCContainerSerializer, NSMutableDictionary, NSDictionary, NSString;

@interface MCPlugSerial : MCPlug {
	unsigned mIndex;
	NSString* mTransitionID;
	double mTransitionDuration;
	NSMutableDictionary* mTransitionAttributes;
	MCContainerSerializer* mSupercontainer;
}
@property(assign) unsigned index;
@property(copy) NSString* transitionID;
@property(assign) double transitionDuration;
@property(assign) MCContainerSerializer* supercontainer;
@property(copy) NSDictionary* transitionAttributes;
-(id)init;
-(id)initWithImprint:(id)imprint andMontage:(id)montage;
-(void)demolish;
-(id)imprint;
-(id)transitionAttributeForKey:(id)key;
-(void)setTransitionAttribute:(id)attribute forKey:(id)key;
-(id)snapshot;
-(void)_copySelfToSnapshot:(id)snapshot;
@end

