/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, PDAnimateColorBehavior, PDCmdBehavior, PDAnimateScaleBehavior, PDAnimateRotateBehavior, PDAnimateMotionBehavior, PDSetBehavior, PDAnimateEffectBehavior, PDAnimateTimeBehavior, PDVideoMediaNode, PDAudioMediaNode, PDSequentialTimeNodeGroup, PDParallelTimeNodeGroup;

__attribute__((visibility("hidden")))
@interface PDTimeNode : XXUnknownSuperclass {
@private
	PDAnimateTimeBehavior* mTimeBehavior;
	PDAnimateEffectBehavior* mEffectBehavior;
	PDAnimateMotionBehavior* mMotionBehavior;
	PDAnimateRotateBehavior* mRotateBehavior;
	PDAnimateScaleBehavior* mScaleBehavior;
	PDAnimateColorBehavior* mColorBehavior;
	PDAudioMediaNode* mAudio;
	PDVideoMediaNode* mVideo;
	PDParallelTimeNodeGroup* mParallelTimeNodeGroup;
	PDSequentialTimeNodeGroup* mSequentialTimeNodeGroup;
	NSMutableArray* mTimeConditionList;
	PDSetBehavior* mSetBehavior;
	PDCmdBehavior* mCmdBehavior;
}
-(id)init;
-(void)dealloc;
-(id)commonBehavior;
-(id)timeBehavior;
-(void)setTimeBehavior:(id)behavior;
-(id)effectBehavior;
-(void)setEffectBehavior:(id)behavior;
-(id)motionBehavior;
-(void)setMotionBehavior:(id)behavior;
-(id)rotateBehavior;
-(void)setRotateBehavior:(id)behavior;
-(id)scaleBehavior;
-(void)setScaleBehavior:(id)behavior;
-(id)colorBehavior;
-(void)setColorBehavior:(id)behavior;
-(id)audio;
-(void)setAudio:(id)audio;
-(id)video;
-(void)setVideo:(id)video;
-(id)parallel;
-(void)setParallel:(id)parallel;
-(id)sequential;
-(void)setSequential:(id)sequential;
-(id)timeConditions;
-(void)setTimeConditions:(id)conditions;
-(id)behavior;
-(void)setBehavior:(id)behavior;
-(id)cmdBehavior;
-(void)setCmdBehavior:(id)behavior;
@end

