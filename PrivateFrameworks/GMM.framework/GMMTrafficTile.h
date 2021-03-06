/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "GMM-Structs.h"

@class NSMutableArray;

@interface GMMTrafficTile : XXUnknownSuperclass {
@private
	BOOL empty;
	double expirationTime;
	NSMutableArray* roadsAtSpeed[4];
}
@property(readonly, assign, nonatomic, getter=isEmpty) BOOL empty;
@property(readonly, assign, nonatomic) double expirationTime;
+(double)defaultExpirationTime;
-(id)init;
-(void)dealloc;
-(id)getRoadsAtSpeed:(int)speed;
-(BOOL)readFromStream:(InputDataStream*)stream tilePath:(const XXStruct_j8inqB*)path;
-(void)invalidate;
@end

