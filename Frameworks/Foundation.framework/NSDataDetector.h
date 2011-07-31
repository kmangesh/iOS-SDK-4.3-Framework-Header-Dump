/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSRegularExpression.h"


@interface NSDataDetector : NSRegularExpression {
	unsigned long long _types;
}
@property(readonly, assign) unsigned long long checkingTypes;
+(void)initialize;
+(id)dataDetectorWithTypes:(unsigned long long)types error:(id*)error;
-(id)initWithTypes:(unsigned long long)types error:(id*)error;
-(id)initWithPattern:(id)pattern options:(unsigned)options error:(id*)error;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)dealloc;
-(void)finalize;
-(id)description;
-(id)pattern;
-(unsigned)options;
-(unsigned)numberOfCaptureGroups;
-(void)enumerateMatchesInString:(id)string options:(unsigned)options range:(NSRange)range usingBlock:(id)block;
@end
