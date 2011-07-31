/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

@interface SSDownloadManifestResponse : XXUnknownSuperclass <NSCoding> {
@private
	NSArray* _invalidDownloads;
	NSArray* _validDownloads;
}
@property(retain) NSArray* validDownloads;
@property(retain) NSArray* invalidDownloads;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)copyPropertyListEncoding;
-(id)initWithPropertyListEncoding:(id)propertyListEncoding;
@end
