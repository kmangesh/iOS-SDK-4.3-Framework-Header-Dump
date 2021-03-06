/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import "DataAccessExpress-Structs.h"
#import "NSCopying.h"
#import <Foundation/NSPropertyListSerialization.h>

@class NSString;

@interface DADAMContainerIDCacheKey : NSPropertyListSerialization <NSCopying> {
@private
	NSString* _accountID;
	int _dataclass;
}
@property(readonly, assign) NSString* accountID;
@property(readonly, assign) int dataclass;
-(id)initWithAccountID:(id)accountID andDataclass:(int)dataclass;
-(void)dealloc;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
@end

