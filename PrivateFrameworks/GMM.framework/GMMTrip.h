/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "GMMTrip.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GMMTrip : XXUnknownSuperclass {
@private
	NSMutableArray* _routes;
}
@property(retain, nonatomic) NSMutableArray* routes;
@property(readonly, assign, nonatomic) int routesCount;
-(id)init;
-(void)dealloc;
-(void)setRoute:(id)route atIndex:(unsigned)index;
-(id)routeAtIndex:(unsigned)index;
-(void)addRoute:(id)route;
-(BOOL)readFrom:(id)from;
-(void)writeTo:(id)to;
-(id)description;
-(id)dictionaryRepresentation;
@end

@interface GMMTrip (Descriptions)
-(id)description;
@end

