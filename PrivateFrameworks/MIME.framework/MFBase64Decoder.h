/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MFBaseFilterDataConsumer.h"

@class NSMutableData;

@interface MFBase64Decoder : MFBaseFilterDataConsumer {
	NSMutableData* _leftovers;
	unsigned _decodedBits;
	unsigned _validBytes;
	unsigned _equalCount;
	char* _table;
	BOOL _bound;
}
@property(readonly, assign, nonatomic) unsigned unconverted;
@property(assign, nonatomic) BOOL isBound;
@property(assign, nonatomic) BOOL convertCommas;
+(BOOL)isValidBase64:(id)a64;
-(id)initWithConsumers:(id)consumers;
-(unsigned long)_decodeBytes:(const char*)bytes end:(const char*)end into:(char*)into length:(unsigned long)length startingAt:(unsigned long)at outEncodedOffset:(unsigned*)offset;
-(int)appendData:(id)data;
-(void)done;
-(void)dealloc;
@end

