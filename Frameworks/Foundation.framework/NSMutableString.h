/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSMutableString.h"
#import "NSString.h"
#import "Foundation-Structs.h"


@interface NSMutableString : NSString {
}
+(void)initialize;
+(id)allocWithZone:(NSZone*)zone;
+(id)stringWithCapacity:(unsigned)capacity;
-(void)replaceCharactersInRange:(NSRange)range withString:(id)string;
-(void)insertString:(id)string atIndex:(unsigned)index;
-(void)appendString:(id)string;
-(void)deleteCharactersInRange:(NSRange)range;
-(void)replaceCharactersInRange:(NSRange)range withCString:(const char*)cstring length:(unsigned)length;
-(void)replaceCharactersInRange:(NSRange)range withCharacters:(const unsigned short*)characters length:(unsigned)length;
-(void)appendFormat:(id)format;
-(void)setString:(id)string;
-(unsigned)replaceOccurrencesOfString:(id)string withString:(id)string2 options:(unsigned)options range:(NSRange)range;
-(Class)classForCoder;
-(id)initWithCapacity:(unsigned)capacity;
@end

@interface NSMutableString (NSCFAdditions)
-(void)appendCharacters:(const unsigned short*)characters length:(unsigned)length;
-(void)_cfAppendCString:(const char*)string length:(int)length;
-(void)_cfLowercase:(const void*)lowercase;
-(void)_cfUppercase:(const void*)uppercase;
-(void)_cfCapitalize:(const void*)capitalize;
-(void)_cfPad:(CFStringRef)pad length:(unsigned)length padIndex:(unsigned)index;
-(void)_cfTrim:(CFStringRef)trim;
-(void)_trimWithCharacterSet:(id)characterSet;
-(void)_cfTrimWS;
-(void)_cfNormalize:(long)normalize;
@end

@interface NSMutableString (NSRegularExpressionSupport)
-(unsigned)_replaceOccurrencesOfRegularExpressionPattern:(id)regularExpressionPattern withTemplate:(id)aTemplate options:(unsigned)options range:(NSRange)range;
@end

