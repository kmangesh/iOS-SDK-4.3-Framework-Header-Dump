/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKTableViewController.h"
#import "GameKit-Structs.h"

@class GKMatch, NSMutableArray, UIView, GKTableView, UILabel, UIButton, UIActivityIndicatorView, UIAlertView, GKFriendPickerViewController, GKMatchmakerViewController, NSMutableDictionary, GKMatchRequest, GKPlayer, GKUITheme, GKInvite, GKInviteHeaderView, NSArray;
@protocol GKMatchmakerViewControllerDelegate;

@interface GKMatchmakerViewControllerPrivate : GKTableViewController {
	id<GKMatchmakerViewControllerDelegate> _delegate;
	GKMatchRequest* _matchRequest;
	GKInvite* _acceptedInvite;
	BOOL _hosted;
	BOOL _reachable;
	GKMatch* _match;
	BOOL _loadingFriends;
	BOOL _loadingFriendsFailed;
	BOOL _sentAccept;
	BOOL _geniusMatching;
	BOOL _didLayout;
	BOOL _setupNotifications;
	GKUITheme* _theme;
	UIView* _navView;
	UILabel* _navTitleLabel;
	UILabel* _navPlayersLabel;
	UIActivityIndicatorView* _navSpinner;
	UIView* _matchingView;
	GKTableView* _friendTable;
	GKInviteHeaderView* _headerView;
	UILabel* _footerLabel;
	UIView* _addRemovePlayersView;
	UIButton* _addPlayerButton;
	UIButton* _removePlayerButton;
	NSMutableArray* _invitedFriends;
	NSMutableDictionary* _avatarImages;
	NSMutableDictionary* _ranks;
	NSMutableArray* _friendPlayers;
	NSMutableArray* _declinedPlayers;
	NSArray* _playersToInvite;
	int _numberOfInvitesRemaining;
	int _numberAccepted;
	GKFriendPickerViewController* _friendPicker;
	UIAlertView* _alert;
	UIEdgeInsets _formSheetInsets;
	GKPlayer* _emptyPlayer;
	int _pushStatus;
	BOOL _waitingToShowFriendPicker;
}
@property(readonly, assign, nonatomic) GKMatchmakerViewController* matchmakerViewController;
@property(assign, nonatomic) id<GKMatchmakerViewControllerDelegate> delegate;
@property(retain, nonatomic) GKMatchRequest* matchRequest;
@property(retain, nonatomic) GKInvite* acceptedInvite;
@property(assign, nonatomic, getter=isHosted) BOOL hosted;
@property(assign, nonatomic) BOOL reachable;
@property(retain, nonatomic) GKMatch* match;
@property(assign, nonatomic) BOOL loadingFriends;
@property(assign, nonatomic) BOOL loadingFriendsFailed;
@property(assign, nonatomic) BOOL sentAccept;
@property(assign, nonatomic) BOOL geniusMatching;
@property(assign, nonatomic) BOOL didLayout;
@property(assign, nonatomic) BOOL setupNotifications;
@property(retain, nonatomic) GKUITheme* theme;
@property(retain, nonatomic) UIView* navView;
@property(retain, nonatomic) UILabel* navTitleLabel;
@property(retain, nonatomic) UILabel* navPlayersLabel;
@property(retain, nonatomic) UIActivityIndicatorView* navSpinner;
@property(retain, nonatomic) UIView* matchingView;
@property(retain, nonatomic) GKTableView* friendTable;
@property(retain, nonatomic) GKInviteHeaderView* headerView;
@property(retain, nonatomic) UILabel* footerLabel;
@property(retain, nonatomic) UIView* addRemovePlayersView;
@property(retain, nonatomic) UIButton* addPlayerButton;
@property(retain, nonatomic) UIButton* removePlayerButton;
@property(retain, nonatomic) NSMutableArray* invitedFriends;
@property(retain, nonatomic) NSMutableDictionary* avatarImages;
@property(retain, nonatomic) NSMutableDictionary* ranks;
@property(retain, nonatomic) NSMutableArray* friendPlayers;
@property(retain, nonatomic) NSMutableArray* declinedPlayers;
@property(assign, nonatomic) NSArray* playersToInvite;
@property(assign, nonatomic) int numberOfInvitesRemaining;
@property(assign, nonatomic) int numberAccepted;
@property(retain, nonatomic) GKFriendPickerViewController* friendPicker;
@property(assign, nonatomic) UIAlertView* alert;
@property(assign, nonatomic) UIEdgeInsets formSheetInsets;
@property(retain, nonatomic) GKPlayer* emptyPlayer;
@property(assign, nonatomic) int pushStatus;
@property(assign, nonatomic) BOOL waitingToShowFriendPicker;
-(id)initWithMatchRequest:(id)matchRequest;
-(id)initWithInvite:(id)invite;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)applicationWillEnterForeground;
-(void)authenticatedStatusChanged;
-(void)loadFriends;
-(void)loadRanks;
-(void)resetUninvolvedPlayersWithAnimation:(BOOL)animation;
-(void)didReceiveMemoryWarning;
-(void)viewDidUnload;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)updateNavViewLayoutForOrientation:(int)orientation;
-(void)layoutSubviewsForInterfaceOrientation:(int)interfaceOrientation;
-(void)showMatchingView;
-(void)removeMatchingView;
-(void)setPlayerRangeText;
-(void)setupForGeniusMatchmaking;
-(void)matchmakingDidCancel;
-(void)cancelGeniusMatchmaking;
-(id)invitedPlayerWithID:(id)anId;
-(int)indexOfPlayer:(id)player;
-(id)acceptedPlayerIDs;
-(void)addPlayer;
-(void)removePlayer;
-(void)setHostedPlayerReady:(id)ready;
-(void)acceptInvite;
-(BOOL)showAlertIfPendingInvites;
-(void)play;
-(void)doneInvitingFindMorePlayers:(BOOL)players;
-(void)cancelButtonPressed;
-(void)cancelPendingInvitesAndMarkInviteComplete:(BOOL)complete;
-(void)cleanupStateForCancelOrError;
-(void)cancel;
-(void)finishWithMatch:(id)match;
-(void)finishWithPlayers:(id)players;
-(void)finishWithError:(id)error;
-(void)checkIfPushEnabled;
-(void)showFriendPicker;
-(void)cancelInviteForPlayerAtIndex:(unsigned)index;
-(void)cancelAlertWithoutDelegateCallback;
-(void)showAlertForTag:(int)tag;
-(int)numberOfSectionsInTableView:(id)tableView;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(float)marginForTableView:(id)tableView;
-(void)loadImageForCellAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)updateAddRemovePlayerButtons;
-(void)updateCellForPlayer:(id)player;
-(void)revertToEmptyPlayer:(id)emptyPlayer;
-(void)revertToEmptyPlayer:(id)emptyPlayer animated:(BOOL)animated;
-(void)failedToInvitePlayers:(id)invitePlayers;
-(void)invitePlayers:(id)players withMessage:(id)message connectionData:(id)data;
-(void)invitePlayers:(id)players withMessage:(id)message;
-(void)friendPickerViewController:(id)controller didFinishWithPlayers:(id)players inviteMessage:(id)message;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)inviteeAcceptedNotification:(id)notification;
-(void)inviteeDeclinedNotification:(id)notification;
-(void)inviterCancelledNotification:(id)notification;
-(void)localPlayerAcceptedGameInvite:(id)invite;
-(void)playersToInvite:(id)invite;
-(void)sendStatusUpdate;
-(void)updatePlayersUsingStatusInfo:(id)info andLoadedPlayers:(id)players;
-(void)inviteMessagePlayerStatusFromBytes:(const char*)bytes withLength:(unsigned)length;
-(BOOL)haveConnectingPlayers;
-(void)playerConnected:(id)connected;
-(void)playerDisconnected:(id)disconnected;
-(void)match:(id)match connectionWithPlayerFailed:(id)playerFailed withError:(id)error;
-(void)match:(id)match didFailWithError:(id)error;
-(void)match:(id)match didReceiveData:(id)data fromPlayer:(id)player;
-(void)match:(id)match player:(id)player didChangeState:(int)state;
@end

