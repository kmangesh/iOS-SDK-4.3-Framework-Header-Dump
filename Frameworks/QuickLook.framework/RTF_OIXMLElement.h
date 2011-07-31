/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import "RTF_OIXMLNode.h"


__attribute__((visibility("hidden")))
@interface RTF_OIXMLElement : RTF_OIXMLNode {
@private
	id _attributes;
	id _children;
	BOOL _hasMultipleAttributes;
	BOOL _hasMultipleChildren;
}
+(void)_initEmptyHTMLNames;
+(BOOL)isEmptyHTMLElement:(id)element;
-(id)initWithName:(id)name stringValue:(id)value;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(void)addAttribute:(id)attribute;
-(void)addChild:(id)child;
-(void)insertChild:(id)child atIndex:(unsigned)index;
-(void)setObjectValue:(id)value;
-(id)objectValue;
-(id)stringValue;
-(int)childrenCount;
-(int)attributeCount;
-(void)_appendXMLStringToString:(CFStringRef)string;
-(id)openingTagString;
-(id)contentString;
-(id)closingTagString;
@end
