/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIImageAndTextTableCell.h"


__attribute__((visibility("hidden")))
@interface UIDateTableCell : UIImageAndTextTableCell {
@private
	float _horizontalOffset;
	float _verticalOffset;
}
-(id)initWithFrame:(CGRect)frame;
-(void)setHorizontalOffset:(float)offset;
-(void)setVerticalOffset:(float)offset;
-(CGRect)contentBounds;
-(id)shadowColor;
-(void)layoutSubviews;
@end

