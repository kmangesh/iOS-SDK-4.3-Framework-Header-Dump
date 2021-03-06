/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class QLProgressLayer, QLPreviewConverter, QLErrorLayer, UIViewController, QLDisplayBundle, NSURLRequest;
@protocol QLPreviewItem;

@interface QLPreviewViewReserved : XXUnknownSuperclass {
	id<QLPreviewItem> previewItem;
	id delegate;
	NSURLRequest* previewRequest;
	UIViewController* viewController;
	QLDisplayBundle* previousDisplayBundle;
	QLDisplayBundle* currentDisplayBundle;
	QLPreviewConverter* converter;
	QLProgressLayer* progressLayer;
	QLErrorLayer* errorLayer;
	unsigned displayBundleVisible : 1;
	unsigned refreshStarted : 1;
	unsigned isZooming : 1;
	unsigned wasCancelled : 1;
	unsigned hasFailed : 1;
	unsigned shouldShowProgress : 1;
}
-(void)dealloc;
@end

