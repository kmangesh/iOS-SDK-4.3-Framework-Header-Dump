/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor, UIActivityIndicatorView, UILabel;

@interface SULoadingView : XXUnknownSuperclass {
	UILabel* _label;
	UIActivityIndicatorView* _progressIndicator;
	unsigned _style;
}
@property(assign, nonatomic) UIColor* textShadowColor;
@property(assign, nonatomic) UIColor* textColor;
@property(assign, nonatomic) int activityIndicatorStyle;
-(id)init;
-(void)dealloc;
-(id)createTextLabel;
-(id)newProgressIndicator;
-(void)setStyle:(unsigned)style;
-(void)_updateLabel:(id)label;
@end
