/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSBundle.h>

@class NSArray, NSMutableArray, PLImageSource, NSMutableSet;

@interface PLImageLoadRequest : NSBundle {
	id _object;
	PLImageSource* _source;
	NSMutableSet* _queues;
	int _priority;
	NSMutableArray* _completionBlocks;
}
@property(assign, nonatomic) int priority;
@property(readonly, assign, nonatomic) NSArray* completionBlocks;
-(id)initWithObject:(id)object source:(id)source priority:(int)priority;
-(void)dealloc;
-(id)source;
-(id)object;
-(void)addCompletionBlock:(id)block;
-(id)description;
-(void)registerImageLoadingQueue:(id)queue;
-(void)deregisterImageLoadingQueue:(id)queue;
-(BOOL)isImageLoadingQueueRegistered:(id)registered;
-(BOOL)someImageLoadingQueuesRegistered;
-(void)notifyImageLoadingQueuesOfImageAvailability:(id)imageAvailability;
@end

