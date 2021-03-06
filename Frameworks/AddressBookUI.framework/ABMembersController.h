/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABMembersDataSourceDelegate.h"
#import "ABSearchOperationDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITextFieldDelegate.h"
#import "ABContentController.h"

@class ABBannerView, ABMembersDataSource, ABMembersFilteredDataSource, UISearchBar, UISearchDisplayController, UIViewController, NSOperationQueue, UIView, NSIndexPath;
@protocol ABStyleProvider, ABMembersControllerDelegate;

@interface ABMembersController : ABContentController <ABMembersDataSourceDelegate, UITextFieldDelegate, UISearchDisplayDelegate, ABSearchOperationDelegate, UISearchBarDelegate> {
@private
	ABMembersDataSource* _membersDataSource;
	ABMembersFilteredDataSource* _searchDataSource;
	id<ABStyleProvider> _styleProvider;
	unsigned _cellsCreated;
	unsigned _memberCount;
	UIView* _tableAccessoryView;
	UISearchBar* _searchBar;
	UISearchDisplayController* _searchController;
	UIViewController* _parentViewController;
	unsigned _searchSequenceNumber;
	NSOperationQueue* _operationQueue;
	ABBannerView* _bannerView;
	id<ABMembersControllerDelegate> _membersControllerDelegate;
	BOOL _resumeForPhoneApp;
	BOOL _showingCardFromSearch;
	BOOL _wasKeyboardShowing;
	BOOL _shouldRestoreScrollPosition;
	NSIndexPath* _selectedIndexPath;
	BOOL _searchEnabled;
	BOOL _needToClearOldResults;
}
@property(assign, nonatomic, getter=isSearchEnabled) BOOL searchEnabled;
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;
@property(assign, nonatomic) id<ABMembersControllerDelegate> membersControllerDelegate;
@property(readonly, assign, nonatomic) BOOL shouldShowImages;
+(id)newNameSearchOperationWithString:(id)string groupWrapper:(id)wrapper addressBook:(void*)book delegate:(id)delegate inOutSequenceNumber:(unsigned*)outSequenceNumber;
-(id)initWithAddressBook:(void*)addressBook;
-(void)dealloc;
-(void)photosEverywhereChanged;
-(void)reload;
-(void)_applyStylesToTableView:(id)tableView;
-(id)membersDataSource;
-(id)searchDataSource;
-(void*)_selectedPerson;
-(void)_setSelectedIndexPath:(id)path;
-(void)setParentViewController:(id)controller;
-(BOOL)isSearching;
-(BOOL)shouldShowIndex;
-(void)_reloadFontSizes;
-(id)tableView;
-(id)contentView;
-(void)stopScrolling;
-(void)scrollTableViewToSearchField:(id)searchField animated:(BOOL)animated;
-(void)scrollTableViewToSearchFieldIfNotAlreadyScrolled;
-(id)currentTableView;
-(int)globalIndexOfMember:(void*)member;
-(id)tableViewPathToMember:(void*)member;
-(BOOL)scrollMemberVisible:(void*)visible;
-(void)selectMemberOnlyInTable:(void*)table scrollPosition:(int)position;
-(void)selectMember:(void*)member animated:(BOOL)animated;
-(void)restoreScrollPosition;
-(void)saveScrollPosition:(void*)position;
-(void)saveState:(void*)state;
-(void)loadState;
-(void)suspend;
-(void)resume;
-(void)didReceiveMemoryWarning;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)deselectAllRowsWithAnimation:(BOOL)animation;
-(unsigned)cellsCreated;
-(void)setCellsCreated:(unsigned)created;
-(id)selectedCell;
-(id)accessoryView;
-(void)relayoutAccessoryView;
-(void)cancelSearchingAnimated:(BOOL)animated;
-(void)cancelSearching:(id)searching;
-(id)operationQueue;
-(void)_searchForWords:(id)words;
-(void)searchOperation:(id)operation didFindMatches:(id)matches moreComing:(BOOL)coming;
-(void)makeMainTableViewVisible;
-(void)searchDisplayControllerWillBeginSearch:(id)searchDisplayController;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(void)searchBarTextDidBeginEditing:(id)searchBarText;
-(void)searchDisplayController:(id)controller didLoadSearchResultsTableView:(id)view;
-(id)currentSearchText;
-(BOOL)searchDisplayController:(id)controller shouldReloadTableForSearchString:(id)searchString;
-(void)searchDisplayControllerWillEndSearch:(id)searchDisplayController;
-(void)searchDisplayController:(id)controller willHideSearchResultsTableView:(id)view;
-(void)searchDisplayController:(id)controller willShowSearchResultsTableView:(id)view;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)setBannerTitle:(id)title value:(id)value;
-(void)_reselectLastSelectedCellIfNeeded;
-(void)displayedMembersListChanged;
-(void)reloadCellForPerson:(void*)person;
-(BOOL)showCardForPerson:(void*)person withMemberCell:(id)memberCell animate:(BOOL)animate;
-(BOOL)showCardForPerson:(void*)person animate:(BOOL)animate;
-(BOOL)abDataSource:(id)source shouldAllowSelectingPerson:(void*)person;
-(BOOL)abDataSource:(id)source selectedPerson:(void*)person atIndexPath:(id)indexPath withMemberCell:(id)memberCell animate:(BOOL)animate;
-(void)abDataSourceSelectedSearchInIndex:(id)index;
-(void)_updateEmptyTableViewAnimated:(BOOL)animated;
-(void)_updateNoContactsViewAnimated:(BOOL)animated;
-(void)_updateCountString;
-(void)_deselectAllRowsWithAnimation;
@end

