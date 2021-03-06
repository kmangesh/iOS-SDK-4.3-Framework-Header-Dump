/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

#import "AccountFullAccountProtocol.h"
#import "BasicAccount.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;
@protocol AccountRefreshProtocol;

@interface BasicAccount : XXUnknownSuperclass <AccountFullAccountProtocol> {
	NSMutableDictionary* _properties;
	id<AccountFullAccountProtocol> _fullAccount;
	id<AccountRefreshProtocol> _syncAccount;
	BasicAccount* _parentAccount;
}
+(BOOL)isMultitaskingEnabled;
+(void)initialize;
+(id)accountWithType:(id)type class:(id)aClass;
+(id)accountWithProperties:(id)properties;
+(id)allSupportedDataclasses;
+(id)supportedDataclassesForAccountType:(id)accountType;
+(id)removeActionsIncompatibleWithSingleStoreDataclass:(id)singleStoreDataclass;
+(id)userActionsToEnableDataclass:(id)enableDataclass forAccountType:(id)accountType;
+(id)userActionsToDisableDataclass:(id)disableDataclass forAccountType:(id)accountType;
+(id)deleteAccountActionsForAccountType:(id)accountType;
+(BOOL)multipleStoresSupportedByDataclass:(id)dataclass;
+(BOOL)displayToggleForDataclass:(id)dataclass;
+(BOOL)userConfirmationIsRequiredByDataclass:(id)dataclass;
-(id)initWithProperties:(id)properties;
-(id)init;
-(void)dealloc;
-(void)setAccountProperty:(id)property forKey:(id)key;
-(void)removeAccountPropertyForKey:(id)key;
-(id)accountPropertyForKey:(id)key;
-(id)properties;
-(id)propertiesToSave;
-(id)type;
-(id)identifier;
-(id)parentAccountIdentifier;
-(id)parentAccount;
-(void)setParentAccount:(id)account;
-(id)syncStoreIdentifier;
-(id)accountClass;
-(void)setAccountClass:(id)aClass;
-(id)displayName;
-(id)typeString;
-(id)shortTypeString;
-(id)supportedDataclasses;
-(id)provisionedDataclasses;
-(id)enabledDataclasses;
-(BOOL)isEnabledForDataclass:(id)dataclass;
-(void)setEnabled:(BOOL)enabled forDataclass:(id)dataclass;
-(void)setEnabledForDataclasses:(id)dataclasses;
-(id)fullAccountUsingLoader:(id)loader;
-(id)defaultContainerIdentifierForDataclass:(id)dataclass;
-(BOOL)refreshContainerWithIdentifier:(id)identifier forDataclass:(id)dataclass;
-(BOOL)refreshContainerListForDataclass:(id)dataclass;
-(BOOL)refreshContainersForDataclass:(id)dataclass;
-(void)renewAccountCredentialsWithHandler:(id)handler;
@end

@interface BasicAccount (Private)
+(id)createNewAccountUID;
+(id)_accountCreationMap;
-(void)_forcedSetAccountProperty:(id)property forKey:(id)key;
-(void)_forcedSetEnabled:(BOOL)enabled forDataclass:(id)dataclass;
-(void)setDisplayName:(id)name;
-(void)setFullAccount:(id)account;
-(id)_creatorClassNameForAccountType:(id)accountType creatorType:(id)type loader:(id)loader;
-(id)fullAccountCreatorClassNameForAccountType:(id)accountType loader:(id)loader;
-(id)syncAccountCreatorClassNameForAccountType:(id)accountType;
@end

@interface BasicAccount (Internal)
+(BOOL)_isValidAccountType:(id)type;
+(id)_creatorsInfo;
+(id)_dataclassesProperties;
-(id)_initWithType:(id)type class:(id)aClass;
-(id)_cachedSyncAccount;
-(id)_orderedDataclasses:(id)dataclasses;
@end

