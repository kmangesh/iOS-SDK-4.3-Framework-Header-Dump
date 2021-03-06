/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject;

__attribute__((visibility("hidden")))
@interface CPPair : XXUnknownSuperclass {
@private
	NSObject* m_first;
	BOOL m_firstIsWrapped;
	NSObject* m_second;
	BOOL m_secondIsWrapped;
}
+(id)pairWithFirst:(id)first andSecond:(id)second;
+(id)pairWithFirstPointer:(id)firstPointer andSecond:(id)second;
+(id)pairWithFirst:(id)first andSecondPointer:(id)pointer;
+(id)pairWithFirstPointer:(id)firstPointer andSecondPointer:(id)pointer;
-(id)initWithFirst:(id)first andSecond:(id)second;
-(id)initWithFirstPointer:(id)firstPointer andSecond:(id)second;
-(id)initWithFirst:(id)first andSecondPointer:(id)pointer;
-(id)initWithFirstPointer:(id)firstPointer andSecondPointer:(id)pointer;
-(void)dealloc;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)first;
-(id)second;
-(id)description;
@end

