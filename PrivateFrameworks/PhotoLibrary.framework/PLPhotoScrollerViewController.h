/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PLPhotoBrowserController.h"
#import "PhotoLibrary-Structs.h"

@class UINavigationItem, NSArray;

@interface PLPhotoScrollerViewController : PLPhotoBrowserController {
	unsigned _itemIndex;
	UINavigationItem* _navItem;
	NSArray* _items;
	int _previousInterfaceOrientation;
	unsigned _didDisplay : 1;
	unsigned _modalSheetIsPresent : 1;
	unsigned _dontChangeStatusBar : 1;
	unsigned _toolbarWasHiddenWhenSelfWasPushed : 1;
	unsigned _viewWillDisappear : 1;
}
@property(assign, nonatomic) unsigned visibleItemIndex;
-(id)initWithItems:(id)items;
-(id)_initWithAlbum:(id)album lockStatusBar:(BOOL)bar currentImageIndex:(int)index;
-(void)dealloc;
-(void)_setCurrentImageIndex:(unsigned)index;
-(id)navigationItem;
-(void)loadView;
-(id)toolbarItems;
-(void)setDontChangeStatusBar:(BOOL)bar;
-(BOOL)dontChangeStatusBar;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidUnload;
-(void)setParentViewController:(id)controller;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)startSettingWallpaper;
-(void)didMoveToPhotoAtIndex:(unsigned)index;
-(id)itemAtIndex:(unsigned)index;
-(void)albumDidChange:(id)album;
-(void)updateNavigationItemTitle;
-(BOOL)_visibleItemAllowsRotation;
-(void)_forceRotationToPortaitIfNecessary;
@end

