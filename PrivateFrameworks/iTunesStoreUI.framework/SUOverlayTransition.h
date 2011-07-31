/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "iTunesStoreUI-Structs.h"
#import "NSCoding.h"

@class SUDOMElement;

@interface SUOverlayTransition : XXUnknownSuperclass <NSCoding, NSCopying> {
	double _duration;
	SUDOMElement* _sourceElement;
	int _type;
}
@property(assign, nonatomic) double duration;
@property(retain, nonatomic) SUDOMElement* sourceElement;
@property(assign, nonatomic) int type;
+(int)transitionTypeFromString:(id)string;
-(id)init;
-(id)initWithCoder:(id)coder;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
@end
