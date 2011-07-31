/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PLCachedFilesManagerPlugin.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "PhotoLibrary-Structs.h"
#import "MLPhotoBakedThumbnailsDelegate.h"

@class NSLock, NSMutableDictionary, MLPhotoLibrary;

@interface PLBakedVideoFilesCacheCreator : XXUnknownSuperclass <MLPhotoBakedThumbnailsDelegate, PLCachedFilesManagerPlugin> {
	MLPhotoLibrary* _photoLibrary;
	BOOL _cancelPostProcessing;
	NSLock* _cancellationLock;
	NSMutableDictionary* _optionsDictionary;
}
-(id)initWithPhotoLibrary:(id)photoLibrary;
-(void)dealloc;
-(BOOL)recreateCachedFilesIfNecessary;
-(void)cancel;
-(void)_addBakedThumbnailsForVideo:(id)video toCollection:(id)collection sourceFormat:(int)format bakedFormats:(id)formats;
-(void)createBakedThumbnailsForVideo:(id)video;
-(void)decorateThumbnail:(id)thumbnail inContext:(CGContextRef)context;
-(void)_garbageCollectCachedFiles;
-(void)_createNewVideoCachedFiles;
-(id)_pathToVideosMetadataFile;
-(void)_removeOldAlbumVideosBakedThumbnails;
@end
