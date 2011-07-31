/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

#import "AssetsLibrary-Structs.h"
#import <PhotoLibrary/_kPLAssetsSaverMetadata.h>

@class ALAssetRepresentationPrivate;

@interface ALAssetRepresentation : _kPLAssetsSaverMetadata {
@private
	id _internal;
}
@property(retain, nonatomic) ALAssetRepresentationPrivate* internal;
-(id)initWithMLPhoto:(id)mlphoto extension:(id)extension library:(id)library;
-(void)dealloc;
-(id)description;
-(BOOL)isValid;
-(id)UTI;
-(int)_fileDescriptor;
-(long long)size;
-(unsigned)getBytes:(char*)bytes fromOffset:(long long)offset length:(unsigned)length error:(id*)error;
-(id)_dataFromFileDescriptor;
-(CGImageRef)fullResolutionImage;
-(CGImageRef)CGImageWithOptions:(id)options;
-(CGImageRef)fullScreenImage;
-(id)url;
-(id)metadata;
-(int)orientation;
-(float)scale;
@end
