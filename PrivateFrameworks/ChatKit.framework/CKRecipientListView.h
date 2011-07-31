/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ChatKit-Structs.h"
#import "CKOverlayViewProtocol.h"

@class CKAtomListView, UIImageView, UIScrollView;

@interface CKRecipientListView : XXUnknownSuperclass <CKOverlayViewProtocol> {
	UIScrollView* _recipientScrollView;
	CKAtomListView* _toField;
	UIImageView* _recipientSeparatorShadow;
	CGSize _contentSize;
	id _delegate;
}
@property(assign, nonatomic) id delegate;
@property(readonly, assign, nonatomic) CGSize contentSize;
-(id)initWithFrame:(CGRect)frame toFieldRecipients:(id)fieldRecipients delegate:(id)delegate;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setExpanded:(BOOL)expanded animate:(BOOL)animate;
-(float)heightWithoutSeparator;
-(void)addressAtomClicked:(id)clicked;
-(void)atomListView:(id)view sizeDidChange:(CGSize)size;
-(void)_clearToField;
-(void)_adjustContentSize;
-(void)_setupToFieldWithRecipients:(id)recipients;
@end
