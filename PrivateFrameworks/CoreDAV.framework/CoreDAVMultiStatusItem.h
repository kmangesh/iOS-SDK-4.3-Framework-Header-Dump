/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSArray, NSSet, NSMutableArray, CoreDAVLeafItem;

@interface CoreDAVMultiStatusItem : CoreDAVItem {
	NSMutableArray* _orderedResponses;
	CoreDAVLeafItem* _responseDescription;
}
@property(retain) NSArray* orderedResponses;
@property(retain) CoreDAVLeafItem* responseDescription;
@property(readonly, retain) NSSet* responses;
-(id)init;
-(id)initWithNameSpace:(id)nameSpace andName:(id)name;
-(void)dealloc;
-(id)description;
-(id)copyParseRules;
-(void)addResponse:(id)response;
@end

