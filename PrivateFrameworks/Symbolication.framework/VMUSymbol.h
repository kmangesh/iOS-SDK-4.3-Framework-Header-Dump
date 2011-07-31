/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import "NSCopying.h"
#import "VMUAddressRange.h"
#import "VMUSymbol.h"

@class VMUSymbolOwner, NSString;

@interface VMUSymbol : VMUAddressRange <NSCopying> {
	NSString* _name;
	NSString* _mangledName;
	VMUSymbolOwner* _owner;
	unsigned _flags;
}
+(id)symbolWithName:(id)name mangledName:(id)name2 addressRange:(VMURange)range owner:(id)owner flags:(unsigned)flags;
-(id)initWithName:(id)name mangledName:(id)name2 addressRange:(VMURange)range owner:(id)owner flags:(unsigned)flags;
-(id)name;
-(id)mangledName;
-(VMURange)addressRange;
-(id)owner;
-(id)sourceInfos;
-(id)sourceInfoForAddress:(unsigned long long)address;
-(id)sourceInfosInAddressRange:(VMURange)addressRange;
-(id)text;
-(unsigned)flags;
-(BOOL)isFunction;
-(BOOL)isObjcMethod;
-(BOOL)isJavaMethod;
-(BOOL)isDyldStub;
-(BOOL)isExternal;
-(BOOL)isStab;
-(BOOL)isDwarf;
-(BOOL)isArm;
-(BOOL)isThumb;
-(int)compare:(id)compare;
-(BOOL)isEqualToSymbol:(id)symbol;
-(id)description;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
@end

@interface VMUSymbol (Private)
-(void)setOwner:(id)owner;
@end
