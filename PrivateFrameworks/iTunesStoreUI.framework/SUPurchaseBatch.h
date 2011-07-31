/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

@interface SUPurchaseBatch : XXUnknownSuperclass {
	NSArray* _continuations;
	NSArray* _errors;
	NSArray* _items;
	BOOL _shouldSuspendWhenFinished;
	NSArray* _validPurchases;
}
@property(assign, nonatomic) BOOL storeShouldExitWhenFinished;
@property(retain, nonatomic) NSArray* continuations;
@property(retain, nonatomic) NSArray* errors;
@property(readonly, assign, nonatomic) NSArray* items;
@property(retain, nonatomic) NSArray* validPurchases;
-(id)initWithItems:(id)items;
-(void)dealloc;
-(void)setDocumentTargetIdentifier:(id)identifier;
-(void)setPurchasesAndContinuationsFromPurchases:(id)purchases;
-(id)copyContinuationsForPurchases:(id)purchases;
-(id)copyFilteredItemsFromItems:(id)items;
-(/*function-pointer*/ void*)errorEqualCallback;
-(id)everythingFailedErrorForError:(id)error;
-(id)mergedErrorForError:(id)error withCount:(int)count;
-(id)_copyModifiedErrorsFromDictionary:(CFDictionaryRef)dictionary;
-(id)_copyUniqueErrorsFromErrors:(id)errors;
-(id)_copyValidPurchasesForItems:(id)items shouldExit:(BOOL*)exit;
-(void)_validateItems;
@end
