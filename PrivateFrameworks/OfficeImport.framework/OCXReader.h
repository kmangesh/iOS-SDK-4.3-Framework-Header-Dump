/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDReader.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class OCPZipPackage;

__attribute__((visibility("hidden")))
@interface OCXReader : XXUnknownSuperclass <OCDReader> {
@private
	OCPZipPackage* mZipPackage;
}
+(id)readerWithZipPackage:(id)zipPackage;
+(id)readFromFileName:(id)fileName cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail delegate:(id)delegate;
+(id)readFromData:(id)data cancel:(id)cancel tracing:(id)tracing asThumbnail:(BOOL)thumbnail delegate:(id)delegate;
-(id)initWithZipPackage:(id)zipPackage;
-(void)dealloc;
-(bool)isBinaryReader;
-(id)zipPackage;
@end
