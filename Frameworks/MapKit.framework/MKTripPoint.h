/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CLLocation, CLHeading, NSError;

__attribute__((visibility("hidden")))
@interface MKTripPoint : XXUnknownSuperclass {
@private
	int _pointType;
	int _commandType;
	CLHeading* _heading;
	CLLocation* _location;
	int _locationSource;
	NSError* _error;
}
@property(retain, nonatomic) CLHeading* heading;
@property(retain, nonatomic) CLLocation* location;
@property(retain, nonatomic) NSError* error;
@property(assign, nonatomic) int pointType;
@property(assign, nonatomic) int commandType;
@property(assign, nonatomic) int locationSource;
+(id)tripPoint;
-(void)dealloc;
@end

