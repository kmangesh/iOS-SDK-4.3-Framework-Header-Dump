/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSError, NSData;

@interface SSPlayInfoResponse : XXUnknownSuperclass <NSCopying> {
@private
	NSError* _error;
	NSData* _playInfoData;
}
@property(readonly, assign, nonatomic) NSError* error;
@property(readonly, assign, nonatomic) NSData* playInfoData;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)copyPropertyListEncoding;
-(id)initWithPropertyListEncoding:(id)propertyListEncoding;
-(id)description;
-(id)initWithPlayInfoData:(id)playInfoData error:(id)error;
@end

