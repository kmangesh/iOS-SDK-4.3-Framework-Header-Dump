/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "UITableViewDataSource.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UITableViewDelegate.h"

@class NSArray, UITableView;
@protocol GKComposeSuggestedContactsControllerDelegate;

@interface GKComposeSuggestedContactsController : XXUnknownSuperclass <UITableViewDelegate, UITableViewDataSource> {
	NSArray* _searchResultItems;
	id<GKComposeSuggestedContactsControllerDelegate> _delegate;
}
@property(retain, nonatomic) NSArray* searchResultItems;
@property(assign, nonatomic) id<GKComposeSuggestedContactsControllerDelegate> delegate;
@property(readonly, retain, nonatomic) UITableView* searchResultsTable;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)view;
-(void)loadView;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
@end

