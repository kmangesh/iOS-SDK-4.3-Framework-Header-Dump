/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetWriterHelper.h"


@interface AVAssetWriterUnknownHelper : AVAssetWriterHelper {
}
-(id)initWithConfigurationState:(id)configurationState;
-(id)initWithURL:(id)url fileType:(id)type;
-(int)status;
-(void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;
-(void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;
-(void)setMetadata:(id)metadata;
-(void)setMovieTimeScale:(int)scale;
-(BOOL)_canAddInput:(id)input exceptionReason:(id*)reason;
-(BOOL)canAddInput:(id)input;
-(void)addInput:(id)input;
-(void)startWriting;
-(void)cancelWriting;
@end

