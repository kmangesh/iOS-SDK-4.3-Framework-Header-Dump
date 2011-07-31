/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iTunesStoreUI-Structs.h"
#import "SUContinuationDelegate.h"
#import "SUAuthenticationDelegate.h"
#import "SSPurchaseRequestDelegate.h"
#import "SUPurchaseManager.h"
#import "SSDownloadQueueObserver.h"

@class NSMutableSet, NSSet, NSMutableArray, SUAuthenticationObserver;
@protocol SUPurchaseManagerDelegate;

@interface SUPurchaseManager : XXUnknownSuperclass <SUAuthenticationDelegate, SUContinuationDelegate, SSDownloadQueueObserver, SSPurchaseRequestDelegate> {
	SUAuthenticationObserver* _authenticationObserver;
	id<SUPurchaseManagerDelegate> _delegate;
	NSMutableSet* _futurePurchases;
	NSMutableSet* _inflightContinuations;
	NSMutableArray* _observedDownloadQueues;
	NSMutableArray* _pendingContinuations;
	NSMutableArray* _pendingPurchases;
	NSMutableSet* _purchasedIdentifiers;
	NSMutableArray* _purchaseRequests;
	BOOL _shouldExitWhenFinished;
	BOOL _showingErrorDialogs;
	int _updatesCount;
	BOOL _waitingForAuthentication;
}
@property(assign, nonatomic) id<SUPurchaseManagerDelegate> delegate;
@property(readonly, assign, nonatomic) NSSet* futurePurchases;
@property(readonly, assign, nonatomic) NSSet* purchasedItemIdentifiers;
@property(readonly, assign, nonatomic) int numberOfPendingPurchases;
+(void)setSharedManager:(id)manager;
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)addFuturePurchase:(id)purchase;
-(BOOL)addPurchaseBatch:(id)batch;
-(void)addPurchasedItemIdentifier:(unsigned long long)identifier;
-(void)beginUpdates;
-(void)cancelFuturePurchase:(id)purchase;
-(void)endUpdates;
-(BOOL)itemIdentifierIsPurchased:(unsigned long long)purchased;
-(BOOL)itemIdentifierIsPurchasing:(unsigned long long)purchasing;
-(id)newPurchaseBatchForItems:(id)items;
-(void)removePurchasedItemIdentifier:(unsigned long long)identifier;
-(void)_dialogDidFinish:(id)_dialog;
-(void)authenticationDidFail:(id)authentication;
-(void)authenticationDidFinish:(id)authentication;
-(void)authenticationDidTimeout:(id)authentication;
-(void)continuation:(id)continuation failedWithError:(id)error;
-(void)continuationFinished:(id)finished;
-(void)downloadQueue:(id)queue changedWithRemovals:(id)removals;
-(void)purchaseRequest:(id)request purchaseDidFail:(id)purchase withError:(id)error;
-(void)purchaseRequest:(id)request purchaseDidSucceed:(id)purchase;
-(void)request:(id)request didFailWithError:(id)error;
-(void)requestDidFinish:(id)request;
-(id)_accountForPurchase:(id)purchase;
-(id)_authenticationObserver;
-(id)_downloadQueueForDownloadKind:(id)downloadKind;
-(void)_enqueueContinuations:(id)continuations;
-(void)_enqueueExternalDownload:(id)download;
-(void)_enqueuePurchases:(id)purchases;
-(BOOL)_issuePurchaseRequestForPurchases:(id)purchases;
-(BOOL)_needsAuthenticationForPurchases:(id)purchases;
-(void)_performNextAction;
-(void)_removePlaceholdersForPurchase:(id)purchase;
-(void)_removePurchaseRequest:(id)request;
-(void)_showDialogsForErrors:(id)errors;
-(void)_startContinuations:(id)continuations;
-(void)_startPurchases:(id)purchases;
@end

@interface SUPurchaseManager (SUScriptAdditions)
-(void)addExternalDownloads:(id)downloads inContext:(OpaqueJSContext*)context;
-(void)addExternalDownloads:(id)downloads withOptions:(id)options inContext:(OpaqueJSContext*)context;
-(id)copyPurchaseForScriptObject:(id)scriptObject;
-(void)enqueueScriptPurchases:(id)purchases;
-(void)purchaseScriptObject:(id)object;
-(void)purchaseScriptObject:(id)object withOptions:(id)options;
-(void)_addBatchForPurchases:(id)purchases options:(id)options;
-(id)_newDictionaryForWebScriptValue:(id)webScriptValue inContext:(OpaqueJSContext*)context;
-(id)_newExternalDownloadWithDictionary:(id)dictionary;
-(id)_newExternalDownloadWithDownloadDictionary:(id)downloadDictionary;
-(id)_newExternalDownloadWithItemDictionary:(id)itemDictionary;
-(id)_newPurchaseBatchForPurchases:(id)purchases;
@end
