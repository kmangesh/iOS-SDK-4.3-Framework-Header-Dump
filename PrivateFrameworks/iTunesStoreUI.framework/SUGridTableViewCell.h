/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import "SUTableCell.h"


@interface SUGridTableViewCell : SUTableCell {
	int _gridPosition;
}
@property(assign, nonatomic) int gridPosition;
-(void)deleteConfirmationControlWasClicked:(id)clicked;
-(void)removeControl:(id)control willRemoveTarget:(id)target;
@end

