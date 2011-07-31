/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MusicLibrary-Structs.h"


@interface ML3ITImageLibrary : XXUnknownSuperclass {
@private
	void* _imageLibrary;
	unsigned _triedToLoadDatabase : 1;
}
+(id)sharedLibrary;
+(MLArtworkFormatSpec)artworkFormatSpecForArtworkFormatID:(unsigned)artworkFormatID;
-(id)_init;
-(void)dealloc;
-(BOOL)isImageDataAvailableForTrack:(id)track artworkType:(int)type;
-(id)availableArtworkFormatIDsForTrack:(id)track artworkType:(int)type atTime:(double)time;
-(BOOL)isImageDataIdenticalForTrack:(id)track otherTrack:(id)track2 artworkType:(int)type missingAlwaysComparesEqual:(BOOL)equal;
-(id)imageDataForTrack:(id)track artworkType:(int)type formatID:(unsigned)anId atTime:(double)time size:(CGSize)size returningArtworkInstanceInfo:(MLArtworkInstanceInfo*)info;
-(BOOL)_loadImageLibraryIfNecessary;
-(BOOL)_loadDatabase;
-(ITImageInfo*)_lookupITImageInfoForTrack:(id)track artworkType:(int)type;
@end
