/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

#import "GrammarPart.h"

@class NewProduction, SlotsInContext;

@interface Rule : GrammarPart {
	SlotsInContext* _leftHandSide;
	NewProduction* _rightHandSide;
	BOOL _repeat;
}
+(id)test;
+(id)instanceFromPlist:(id)plist;
+(id)ruleWithLeftHandSide:(id)leftHandSide rightHandSide:(id)side;
-(id)initFromPlist:(id)plist;
-(id)initWithLeftHandSide:(id)leftHandSide rightHandSideOverlays:(id)overlays rightHandSideBaseIndices:(id)indices;
-(id)initWithLeftHandSide:(id)leftHandSide rightHandSide:(id)side;
-(void)dealloc;
-(id)appliedTo:(id)to;
-(id)description;
@end
