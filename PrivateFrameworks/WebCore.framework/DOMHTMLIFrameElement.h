/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"
#import "WebCore-Structs.h"
#import "DOMHTMLIFrameElement.h"

@class NSString, DOMDocument, DOMAbstractView;

@interface DOMHTMLIFrameElement : DOMHTMLElement {
}
@property(readonly, retain) DOMAbstractView* contentWindow;
@property(readonly, retain) DOMDocument* contentDocument;
@property(copy) NSString* width;
@property(copy) NSString* src;
@property(copy) NSString* scrolling;
@property(copy) NSString* name;
@property(copy) NSString* marginWidth;
@property(copy) NSString* marginHeight;
@property(copy) NSString* longDesc;
@property(copy) NSString* height;
@property(copy) NSString* frameBorder;
@property(copy) NSString* align;
-(id)sandbox;
-(void)setSandbox:(id)sandbox;
@end

@interface DOMHTMLIFrameElement (DOMUIKitComplexityExtensions)
-(int)structuralComplexityContribution;
@end
