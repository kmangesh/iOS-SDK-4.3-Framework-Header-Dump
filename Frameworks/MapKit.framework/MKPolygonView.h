/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MKOverlayPathView.h"
#import "MapKit-Structs.h"

@class MKPolygon;

@interface MKPolygonView : MKOverlayPathView {
}
@property(readonly, assign, nonatomic) MKPolygon* polygon;
-(id)initWithPolygon:(id)polygon;
-(void)createPath;
-(void)fillPath:(CGPathRef)path inContext:(CGContextRef)context;
@end
