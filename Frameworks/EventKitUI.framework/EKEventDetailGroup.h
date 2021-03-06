/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray;

@interface EKEventDetailGroup : XXUnknownSuperclass {
	int _tag;
	NSArray* _items;
	NSString* _headerTitle;
}
@property(assign, nonatomic) int tag;
@property(retain, nonatomic) NSArray* items;
@property(retain, nonatomic) NSString* headerTitle;
-(id)initWithTag:(int)tag headerTitle:(id)title;
-(void)dealloc;
-(int)numberOfRows;
-(id)itemAtIndex:(int)index;
-(id)_itemAtIndex:(int)index rowOffset:(int*)offset;
-(id)cellForSubitemAtIndex:(int)index;
-(float)defaultCellHeightForSubitemAtIndex:(int)index forWidth:(float)width;
-(BOOL)hasSubitemForIndexPathRow:(unsigned)indexPathRow;
-(id)description;
@end

