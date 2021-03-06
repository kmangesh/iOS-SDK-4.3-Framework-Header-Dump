/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSDecimalNumberBehaviors.h"
#import "NSCoding.h"


@interface NSDecimalNumberHandler : XXUnknownSuperclass <NSDecimalNumberBehaviors, NSCoding> {
@private
	unsigned _scale : 16;
	unsigned _roundingMode : 3;
	unsigned _raiseOnExactness : 1;
	unsigned _raiseOnOverflow : 1;
	unsigned _raiseOnUnderflow : 1;
	unsigned _raiseOnDivideByZero : 1;
	unsigned _unused : 9;
	void* _reserved2;
	void* _reserved;
}
+(id)defaultDecimalNumberHandler;
+(id)decimalNumberHandlerWithRoundingMode:(unsigned)roundingMode scale:(short)scale raiseOnExactness:(BOOL)exactness raiseOnOverflow:(BOOL)overflow raiseOnUnderflow:(BOOL)underflow raiseOnDivideByZero:(BOOL)zero;
-(id)initWithRoundingMode:(unsigned)roundingMode scale:(short)scale raiseOnExactness:(BOOL)exactness raiseOnOverflow:(BOOL)overflow raiseOnUnderflow:(BOOL)underflow raiseOnDivideByZero:(BOOL)zero;
-(unsigned)roundingMode;
-(short)scale;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)exceptionDuringOperation:(SEL)operation error:(unsigned)error leftOperand:(id)operand rightOperand:(id)operand4;
@end

