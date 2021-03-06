/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUTableDataSource.h"

@class NSArray, NSMutableArray;

@interface SUAggregateDataSource : SUTableDataSource {
	NSMutableArray* _headerViews;
	NSMutableArray* _sources;
	int _tableViewStyle;
}
@property(readonly, assign, nonatomic) NSArray* sources;
@property(assign, nonatomic) int tableViewStyle;
-(void)dealloc;
-(void)addDataSource:(id)source withHeaderView:(id)headerView;
-(id)dataSourceForIndexPath:(id)indexPath;
-(id)indexPathForRowIndex:(unsigned)rowIndex inSectionIndex:(unsigned)sectionIndex;
-(BOOL)canDeleteIndexPath:(id)path;
-(BOOL)canDoubleTapIndexPath:(id)path;
-(BOOL)canSelectIndexPath:(id)path;
-(id)cellForIndexPath:(id)indexPath;
-(float)cellHeightForIndexPath:(id)indexPath;
-(void)configureCell:(id)cell forIndexPath:(id)indexPath;
-(BOOL)deleteIndexPath:(id)path;
-(id)headerViewForSection:(int)section;
-(int)numberOfColumnsInSection:(int)section;
-(int)numberOfRowsInSection:(int)section;
-(int)numberOfSections;
-(void)reloadCellContexts;
-(void)reloadData;
-(void)setCellReuseSource:(id)source;
-(int)_localIndexForSectionIndex:(int)sectionIndex;
@end

