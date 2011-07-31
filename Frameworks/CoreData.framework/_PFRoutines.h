/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _PFRoutines : XXUnknownSuperclass {
}
+(void)initialize;
+(BOOL)_generateObjectIDMaptableForArray:(id)array withMapping:(id*)mapping andEntries:(id*)entries;
+(id)_newObjectIDsArrayWithMapping:(id)mapping andEntries:(id)entries andCoordinator:(id)coordinator;
+(id)_getPFBundleVersionNumber;
+(id)_groupObjectsByRootEntity:(id)entity;
+(id)_getUUID;
+(BOOL)_doNameAndTypeCheck:(id)check;
+(BOOL)convertCString:(const char*)string toUnsignedInt64:(unsigned long long*)unsignedInt64 withBase:(int)base;
+(id)writePFExternalReferenceDataToInterimFile:(id)interimFile;
+(BOOL)moveInterimFileToPermanentLocation:(id)permanentLocation;
+(void*)readExternalReferenceDataFromFile:(id)file;
+(void)readBytesForExternalReferenceData:(id)externalReferenceData intoBuffer:(void*)buffer range:(NSRange)range;
+(id)newMappedDataForExternalReference:(id)externalReference;
+(long long)lengthOfFileAtExternalReferenceLocation:(const char*)externalReferenceLocation;
+(void)deleteFileForPFExternalReferenceData:(id)pfexternalReferenceData;
@end
