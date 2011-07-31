/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray;

@interface AVAssetTrackInspector : XXUnknownSuperclass {
}
@property(readonly, assign, nonatomic, getter=isExcludedFromAutoselectionInTrackGroup) BOOL excludedFromAutoselectionInTrackGroup;
@property(readonly, assign, nonatomic) NSArray* availableMetadataFormats;
@property(readonly, assign, nonatomic) NSArray* commonMetadata;
@property(readonly, copy, nonatomic) NSArray* segments;
@property(readonly, assign, nonatomic) float nominalFrameRate;
@property(readonly, assign, nonatomic) float preferredVolume;
@property(readonly, assign, nonatomic) CGAffineTransform preferredTransform;
@property(readonly, assign, nonatomic) CGSize naturalSize;
@property(readonly, assign, nonatomic) NSString* extendedLanguageTag;
@property(readonly, assign, nonatomic) NSString* languageCode;
@property(readonly, assign, nonatomic) float estimatedDataRate;
@property(readonly, assign, nonatomic) int naturalTimeScale;
@property(readonly, assign, nonatomic) XXStruct_yD8eWC timeRange;
@property(readonly, assign, nonatomic) long long totalSampleDataLength;
@property(readonly, assign, nonatomic, getter=isSelfContained) BOOL selfContained;
@property(readonly, assign, nonatomic, getter=isEnabled) BOOL enabled;
@property(readonly, assign, nonatomic) NSArray* formatDescriptions;
@property(readonly, assign, nonatomic) NSString* mediaType;
@property(readonly, assign, nonatomic) int trackID;
+(id)assetTrackInspectorWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;
-(id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;
-(XXStruct_pwHToB)samplePresentationTimeForTrackTime:(XXStruct_pwHToB)trackTime;
-(id)metadataForFormat:(id)format;
@end
