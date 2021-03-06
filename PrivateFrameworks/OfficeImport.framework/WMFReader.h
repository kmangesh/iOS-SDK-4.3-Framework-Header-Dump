/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "MFReader.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class WMFPlayer;

__attribute__((visibility("hidden")))
@interface WMFReader : XXUnknownSuperclass <MFReader> {
@private
	int m_recordsRead;
	WMFPlayer* m_player;
	unsigned m_length;
	char* m_pBuffer;
	unsigned m_cursor;
}
-(id)initWithWMFPlayer:(id)wmfplayer;
-(void)dealloc;
-(oneway void)release;
-(int)play:(id)play;
-(int)playHeaders;
-(int)playRecord;
-(int)checkBytesAvailable:(unsigned)available;
-(int)moveDataCursor:(unsigned)cursor;
@end

