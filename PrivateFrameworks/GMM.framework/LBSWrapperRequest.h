/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class LBSGLocRequest;

@interface LBSWrapperRequest : XXUnknownSuperclass {
@private
	int _requestType;
	BOOL _hasRequestType;
	LBSGLocRequest* _request;
}
@property(assign, nonatomic) int requestType;
@property(readonly, assign, nonatomic) BOOL hasRequestType;
@property(retain, nonatomic) LBSGLocRequest* request;
@property(readonly, assign, nonatomic) BOOL hasRequest;
-(id)init;
-(void)dealloc;
-(BOOL)readFrom:(id)from;
-(void)writeTo:(id)to;
-(Class)responseClass;
-(unsigned)requestTypeCode;
-(id)description;
@end
