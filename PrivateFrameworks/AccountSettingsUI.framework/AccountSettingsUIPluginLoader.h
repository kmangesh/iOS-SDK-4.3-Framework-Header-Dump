/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PSViewController, NSArray, NSMutableArray;

@interface AccountSettingsUIPluginLoader : XXUnknownSuperclass {
	PSViewController* _parentController;
	NSMutableArray* _bundles;
	BOOL _includeNonAccountBundles;
}
@property(readonly, assign) NSArray* plugins;
-(void)_addBundleWithName:(id)name commonSpecifierMode:(int)mode accountTypes:(id)types;
-(id)initWithParentController:(id)parentController includeNonAccountBundles:(BOOL)bundles;
-(void)dealloc;
-(id)pluginsForAccountTypes:(id)accountTypes;
-(id)orderedPluginsForAdd;
-(id)_pluginsWithCommonSpecifierMode:(int)commonSpecifierMode;
-(id)pluginsWithEagerlyLoadedCommonSpecifiers;
-(id)pluginsWithLazilyLoadedCommonSpecifiers;
-(id)pluginsWithCommonsSpecifiers;
@end
