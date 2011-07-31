/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableViewScrollTestParameters : XXUnknownSuperclass {
@private
	int _iterations;
	int _yDelta;
	int _scrollLength;
	NSString* _currentTest;
}
@property(assign, nonatomic) int iterations;
@property(retain, nonatomic) NSString* currentTest;
@property(assign, nonatomic) int yDelta;
@property(assign, nonatomic) int scrollLength;
-(id)initWithName:(id)name iterations:(int)iterations delta:(int)delta length:(int)length;
-(void)dealloc;
@end
