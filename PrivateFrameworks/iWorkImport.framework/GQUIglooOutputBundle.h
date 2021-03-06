/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQUOutputBundle.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQUIglooOutputBundle : XXUnknownSuperclass <GQUOutputBundle> {
@private
	CFDictionaryRef mAttachments;
	CFDataRef mMainHtmlData;
	CFStringRef mUriPrefix;
	CFStringRef mUuidStr;
}
-(id)init;
-(void)dealloc;
-(void)setUriPrefix:(CFStringRef)prefix;
-(CFStringRef)createUriForResource:(CFStringRef)resource;
-(BOOL)setDataForMainHtmlResource:(CFDataRef)mainHtmlResource;
-(BOOL)setData:(CFDataRef)data mimeType:(CFStringRef)type forNamedResource:(CFStringRef)namedResource;
-(CFDataRef)mainHtmlData;
-(CFDictionaryRef)attachments;
-(CFDictionaryRef)createOutputDictionary;
-(void)setDocumentSize:(CGSize)size;
-(void)setPageElementXPath:(CFStringRef)path withThumbnailsOnLeft:(BOOL)thumbnailsOnLeft;
@end

