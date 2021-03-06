/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import "SUTableCell.h"

@class SUWebDocumentView;

@interface SUMarkupCell : SUTableCell {
	SUWebDocumentView* _webView;
}
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
-(void)dealloc;
-(void)setBackgroundColor:(id)color;
-(void)setConfiguration:(id)configuration;
-(void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
@end

