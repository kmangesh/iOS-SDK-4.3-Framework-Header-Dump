/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

#import "GrammarPart.h"

@class NSArray, NSDictionary;

@interface Directory : GrammarPart {
	NSDictionary* _subparts;
	NSArray* _orderedSubparts;
}
@property(readonly, retain) NSArray* orderedSubparts;
+(id)instanceFromPlist:(id)plist;
-(id)initFromPlist:(id)plist;
-(void)dealloc;
-(id)description;
-(id)appliedTo:(id)to;
@end
