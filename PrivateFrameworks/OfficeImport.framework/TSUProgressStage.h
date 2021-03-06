/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class TSUProgressContext;

__attribute__((visibility("hidden")))
@interface TSUProgressStage : XXUnknownSuperclass {
@private
	double m_currentPosition;
	double m_totalSteps;
	double m_stepsInParent;
	double m_startInParent;
	double m_nextSubStageParentSize;
	TSUProgressStage* m_parentStage;
	TSUProgressContext* m_context;
}
-(id)initRootStageInContext:(id)context;
-(id)initWithSteps:(double)steps takingSteps:(double)steps2 inContext:(id)context;
-(void)dealloc;
-(void)advanceProgress:(double)progress;
-(void)setProgress:(double)progress;
-(void)setProgressPercentage:(double)percentage;
-(void)end;
-(id)parentStage;
-(double)currentPosition;
-(double)overallProgress;
-(double)nextSubStageParentSize;
-(void)setNextSubStageParentSize:(double)size;
-(id)description;
@end

