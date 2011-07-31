/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUMessagePart.h"

@class UIImage, SUMediaObject;

@interface SUMediaObjectMessagePart : SUMessagePart {
	UIImage* _composeImage;
	SUMediaObject* _mediaObject;
}
-(id)initWithMediaObject:(id)mediaObject;
-(void)dealloc;
-(void)generateComposeImage;
-(id)composeImage;
-(id)copyPreparationOperations;
-(id)MIMEType;
-(id)newUnfilteredInputSource;
-(id)_bubbleImageForImage:(id)image;
@end
