/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "iLifeSlideshow-Structs.h"
#import "MPSlide.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "MPFilterSupport.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MPAnimationSupport.h"

@class MCSlide, NSMutableArray, MPSlideInternal, MPEffect, NSMutableDictionary, MPFrame, NSString;

@interface MPSlide : XXUnknownSuperclass <NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport> {
@private
	MPFrame* _frame;
	NSMutableDictionary* _attributes;
	NSString* _path;
	NSString* _cachedAbsolutePath;
	NSMutableArray* _filters;
	NSMutableDictionary* _animationPaths;
	MCSlide* _slide;
	MPEffect* _parentEffect;
	MPSlideInternal* _internal;
}
+(id)slide;
+(id)slideWithPath:(id)path;
-(id)init;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)initWithPath:(id)path;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(void)finalize;
-(void)dealloc;
-(id)frame;
-(void)setFrame:(id)frame;
-(id)path;
-(void)setPath:(id)path;
-(id)absolutePath;
-(void)setAbsolutePath:(id)path;
-(id)filters;
-(void)addFilter:(id)filter;
-(void)addFilters:(id)filters;
-(void)insertFilters:(id)filters atIndex:(int)index;
-(void)removeFiltersAtIndices:(id)indices;
-(void)removeAllFilters;
-(void)moveFiltersFromIndices:(id)indices toIndex:(int)index;
-(id)animationPaths;
-(id)animationPathForKey:(id)key;
-(void)setAnimationPath:(id)path forKey:(id)key;
-(void)removeAnimationPathForKey:(id)key;
-(double)showTime;
-(double)showDuration;
-(double)showDisplayTime;
-(double)startTime;
-(void)setStartTime:(double)time;
-(double)duration;
-(void)setDuration:(double)duration;
-(float)audioVolume;
-(void)setAudioVolume:(float)volume;
-(double)audioFadeInDuration;
-(void)setAudioFadeInDuration:(double)duration;
-(double)audioFadeOutDuration;
-(void)setAudioFadeOutDuration:(double)duration;
-(double)audioDuckInDuration;
-(void)setAudioDuckInDuration:(double)duration;
-(double)audioDuckOutDuration;
-(void)setAudioDuckOutDuration:(double)duration;
-(float)audioDuckLevel;
-(void)setAudioDuckLevel:(float)level;
-(id)sizingMode;
-(void)setSizingMode:(id)mode;
-(CGPoint)center;
-(void)setCenter:(CGPoint)center;
-(float)scale;
-(void)setScale:(float)scale;
-(float)rotation;
-(void)setRotation:(float)rotation;
-(int)index;
-(float)aspectRatio;
-(id)parentEffect;
@end

@interface MPSlide (AppleScript)
-(int)countOfFilter;
-(id)objectInFilterAtIndex:(int)index;
-(void)insertObject:(id)object inFilterAtIndex:(int)index;
-(void)removeObjectFromFilterAtIndex:(int)index;
-(void)replaceObjectInFilterAtIndex:(int)index withObject:(id)object;
-(id)scriptingAnimations;
-(void)setScriptingAnimations:(id)animations;
-(id)scriptingFrame;
-(void)setScriptingFrame:(id)frame;
@end

@interface MPSlide (Internal)
-(void)copyStruct:(id)aStruct;
-(void)copyPath:(id)path;
-(void)copyFilters:(id)filters;
-(void)copyAnimationPaths:(id)paths;
-(void)cleanup;
-(id)parentDocument;
-(BOOL)determineShowTime:(double*)time showDuration:(double*)duration;
-(void)setSlide:(id)slide;
-(void)setParentEffect:(id)effect;
-(void)recreateWithSlide:(id)slide;
@end

@interface MPSlide (Temp)
-(id)userInfoAttributeForKey:(id)key;
-(void)setUserInfoAttribute:(id)attribute forKey:(id)key;
@end

@interface MPSlide (Private)
-(id)slide;
-(void)dump;
-(id)fullDebugLog;
-(BOOL)hasMovie;
-(double)maxDuration;
-(id)thumbnail;
@end
