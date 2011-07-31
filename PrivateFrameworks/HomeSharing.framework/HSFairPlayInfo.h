/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HomeSharing-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface HSFairPlayInfo : XXUnknownSuperclass {
@private
	XXStruct_zMxeUD _fairPlayInfoFunctions;
	void* _hwInfo;
	void* _session;
}
@property(readonly, assign, nonatomic) NSString* deviceGUID;
@property(readonly, assign, nonatomic) XXStruct_zMxeUD fairPlayInfoFunctions;
+(id)fairPlayInfoWithFunctions:(XXStruct_zMxeUD)functions;
-(id)initWithFunctions:(XXStruct_zMxeUD)functions;
-(void)dealloc;
-(id)beginNegotiation;
-(id)continueNegotationWithData:(id)data isComplete:(BOOL*)complete;
-(void)endSecuritySession;
-(id)securityInfoForURL:(id)url;
-(BOOL)_getHardwareInfo:(FairPlayHWInfo_*)info;
-(id)_hexStringForData:(id)data;
@end
