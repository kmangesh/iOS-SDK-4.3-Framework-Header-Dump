/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, WDListDefinition, WDDocument;

__attribute__((visibility("hidden")))
@interface WDList : XXUnknownSuperclass {
@private
	NSMutableArray* mLevelOverrides;
	WDDocument* mDocument;
	int mIndex;
	WDListDefinition* mListDefinition;
}
-(void)dealloc;
-(id)document;
-(id)listDefinition;
-(int)levelOverrideCount;
-(id)levelOverrideAt:(int)at;
-(id)addLevelOverride;
-(id)levelOverrides;
-(int)index;
-(void)setIndex:(int)index;
-(int)listId;
-(id)initWithDocument:(id)document listDefinition:(id)definition;
@end

