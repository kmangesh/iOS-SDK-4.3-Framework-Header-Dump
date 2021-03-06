/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABServerSearchControllerDelegate.h"
#import "ABAbstractViewController.h"
#import "AddressBookUI-Structs.h"

@class ABServerSearchController;

@interface ABServerSearchViewController : ABAbstractViewController <ABServerSearchControllerDelegate> {
@private
	ABServerSearchController* _serverSearchController;
}
-(id)initWithModel:(id)model;
-(void)dealloc;
-(void)loadView;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(BOOL)showCardForPerson:(void*)person withMemberCell:(id)memberCell animate:(BOOL)animate;
-(BOOL)showCardForPerson:(void*)person animate:(BOOL)animate;
-(id)serverSearchControllerStyleProvider:(id)provider;
@end

