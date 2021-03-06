/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUInputSource.h"

@class NSData;

@interface SUDataInputSource : SUInputSource {
	NSData* _data;
	int _offset;
	id _promiseBlock;
}
@property(readonly, assign, nonatomic) NSData* data;
-(id)initWithData:(id)data;
-(id)initWithDataPromise:(id)dataPromise;
-(void)dealloc;
-(id)copyAllData:(id*)data;
-(long long)expectedLength;
-(BOOL)hasBytesAvailable;
-(BOOL)open:(id*)open;
-(int)read:(char*)read maxLength:(unsigned)length error:(id*)error;
@end

