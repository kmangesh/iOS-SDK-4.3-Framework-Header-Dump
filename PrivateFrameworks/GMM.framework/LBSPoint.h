/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface LBSPoint : XXUnknownSuperclass {
@private
	unsigned _lat_e7;
	unsigned _lng_e7;
}
@property(assign, nonatomic) unsigned lat_e7;
@property(assign, nonatomic) unsigned lng_e7;
-(id)init;
-(void)dealloc;
-(BOOL)readFrom:(id)from;
-(void)writeTo:(id)to;
-(id)description;
-(id)dictionaryRepresentation;
@end

