/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import "ScreenReaderOutput-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface XXUnknownSuperclass (SCROAttributedStringExtras)
-(BOOL)getRange:(NSRange*)range ofAttribute:(id)attribute;
-(BOOL)getRange:(NSRange*)range ofAttribute:(id)attribute withValue:(id)value;
-(id)deepCopyWithZone:(NSZone*)zone;
@end

@interface XXUnknownSuperclass (SCROBundleExtras)
-(int)_brailleTableCompare:(id)compare;
@end

@interface XXUnknownSuperclass (SCROBundleExtras)
+(id)brailleDriverBundles;
+(id)brailleDriverBundleWithIdentifier:(id)identifier;
+(long)bundleIndexForBrailleDriverIdentifier:(id)brailleDriverIdentifier;
+(id)brailleDriverDeviceDetectionInfo;
+(id)_brailleTableBundles;
+(id)brailleTableIdentifiers;
+(id)brailleTableBundleWithTableIdentifier:(id)tableIdentifier;
+(id)nameForBrailleTableIdentifier:(id)brailleTableIdentifier;
+(id)_brailleTableDictionaryForBrailleTableIdentifier:(id)brailleTableIdentifier;
+(BOOL)doesBrailleTableSupportContractions:(id)contractions;
+(BOOL)doesBrailleTableSupportEightDot:(id)dot;
+(id)languageIdentifiersForBrailleTableIdentifier:(id)brailleTableIdentifier;
+(id)tableIdentifiersForLanguageIdentifier:(id)languageIdentifier;
-(id)bundleSpecificTableIdentifierForTableIdentifier:(id)tableIdentifier;
-(id)tableIdentifierForBundleSpecificTableIdentifier:(id)bundleSpecificTableIdentifier;
@end
