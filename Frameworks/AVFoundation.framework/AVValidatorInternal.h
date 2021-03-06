/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSURL;

@interface AVValidatorInternal : XXUnknownSuperclass {
	NSURL* initialURL;
	NSURL* resolvedURL;
	float progress;
	unsigned flags;
	BOOL resourceIsPlayable;
	int status;
	int figError;
	FigOpaqueMediaValidator* figMediaValidatorRef;
	id clientValidatorHandler;
	OpaqueFigSimpleMutex* figMediaValidatorMutex;
	NSDictionary* validationPlist;
}
@end

