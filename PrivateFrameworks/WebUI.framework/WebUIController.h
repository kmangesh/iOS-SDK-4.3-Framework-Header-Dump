/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer;

@interface WebUIController : XXUnknownSuperclass {
	NSTimer* _showStatusBarSpinnerTimer;
}
-(BOOL)confirmIncreaseInQuotaWithAlertTitle:(id)alertTitle message:(id)message cancelButtonTitle:(id)title otherButtonTitle:(id)title4;
-(void)webView:(id)view frame:(id)frame exceededDatabaseQuotaForSecurityOrigin:(id)securityOrigin database:(id)database;
-(void)webView:(id)view exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)securityOrigin;
-(void)_setShowStatusBarSpinnerTimer:(id)timer;
-(void)_showStatusBarSpinner:(id)spinner;
-(void)setShowStatusBarSpinner:(BOOL)spinner;
@end

