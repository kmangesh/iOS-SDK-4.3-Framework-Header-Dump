/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "LBSGLatLng.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface LBSGLatLng : XXUnknownSuperclass {
@private
	int _latE7;
	int _lngE7;
}
@property(assign, nonatomic) int latE7;
@property(assign, nonatomic) int lngE7;
-(id)init;
-(void)dealloc;
-(BOOL)readFrom:(id)from;
-(void)writeTo:(id)to;
-(id)description;
-(id)dictionaryRepresentation;
@end

@interface LBSGLatLng (GMMProtoExtras)
-(void)setLat:(float)lat;
-(float)lat;
-(void)setLon:(float)lon;
-(float)lon;
@end

