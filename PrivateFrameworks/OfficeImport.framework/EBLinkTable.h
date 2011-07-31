/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EBLinkTable.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EBLinkTable : XXUnknownSuperclass {
}
+(void)readFromState:(id)state;
+(XlLinkTable*)createXlLinkTableFromLinksCollection:(id)linksCollection workbook:(id)workbook state:(id)state;
@end

@interface EBLinkTable (Private)
+(int)mapXlLinkTypeToED:(int)ed;
+(int)mapEDLinkTypeToXl:(int)xl;
@end
