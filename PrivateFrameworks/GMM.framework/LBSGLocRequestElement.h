/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class LBSGLocation, LBSGGeocodeRequest, LBSGCellularProfile;

@interface LBSGLocRequestElement : XXUnknownSuperclass {
@private
	LBSGCellularProfile* _cellularProfile;
	LBSGLocation* _location;
	LBSGGeocodeRequest* _geocode;
}
@property(retain, nonatomic) LBSGCellularProfile* cellularProfile;
@property(retain, nonatomic) LBSGLocation* location;
@property(retain, nonatomic) LBSGGeocodeRequest* geocode;
@property(readonly, assign, nonatomic) BOOL hasGeocode;
@property(readonly, assign, nonatomic) BOOL hasLocation;
@property(readonly, assign, nonatomic) BOOL hasCellularProfile;
-(id)init;
-(void)dealloc;
-(BOOL)readFrom:(id)from;
-(void)writeTo:(id)to;
-(id)description;
-(id)dictionaryRepresentation;
@end

