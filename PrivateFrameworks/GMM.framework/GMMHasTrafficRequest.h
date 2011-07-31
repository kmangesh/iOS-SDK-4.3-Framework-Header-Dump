/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "GMMOldRequest.h"

@class GMMMapPoint;

@interface GMMHasTrafficRequest : GMMOldRequest {
@private
	GMMMapPoint* _mapPoint;
}
@property(retain, nonatomic) GMMMapPoint* mapPoint;
-(void)dealloc;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(BOOL)readFrom:(id)from;
-(void)writeTo:(id)to;
-(id)dictionaryRepresentation;
@end
