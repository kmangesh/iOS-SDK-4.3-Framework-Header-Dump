/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSArray, UIImage;

@interface UIAccentedCharacterView : UIView {
	NSArray* m_characters;
	NSArray* m_caps;
	unsigned m_count;
	int m_expansion;
	int m_orientation;
	float m_stringWidth;
	UIImage* m_tubeImage;
	CGRect m_tubeRect;
	UIImage* m_grabberImage;
	CGRect m_grabberRect;
	UIView* m_popupView;
	UIView* m_selectedView;
	unsigned m_selectedIndex;
	BOOL m_dragged;
	CGPoint m_dragPoint;
}
-(id)initWithFrame:(CGRect)frame variants:(id)variants expansion:(int)expansion orientation:(int)orientation;
-(void)dealloc;
-(void)setSelectedIndex:(int)index;
-(void)sendSelectedString;
-(unsigned)moveCharactersAndCapsToAltSide:(unsigned)altSide position:(unsigned)position expansion:(int)expansion;
-(void)mouseDown:(GSEventRef)down;
-(void)mouseDragged:(GSEventRef)dragged;
-(void)mouseUp:(GSEventRef)up;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)drawRect:(CGRect)rect;
@end
