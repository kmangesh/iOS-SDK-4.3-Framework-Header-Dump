/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewController.h"

@class UIPrintingProgress, UIPrintingMessageView, UINavigationController, UIWindow;

__attribute__((visibility("hidden")))
@interface UIPrintingProgressViewController : UITableViewController {
@private
	UIPrintingProgress* _printingProgress;
	UIPrintingMessageView* _messageView;
	UINavigationController* _navController;
	UIWindow* _window;
	double _rotationDelay;
}
-(id)initWithTitle:(id)title message:(id)message printingProgress:(id)progress;
-(void)dealloc;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)doneProgress;
-(void)cancelProgress;
-(void)setMessage:(id)message;
-(void)setDonePrinting:(BOOL)printing;
-(void)show;
-(void)cleanupAfterDismiss;
-(void)dismissAnimated:(BOOL)animated;
-(BOOL)visible;
-(double)rotationDelay;
@end

