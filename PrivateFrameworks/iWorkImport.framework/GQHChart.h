/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "GQHChart.h"


__attribute__((visibility("hidden")))
@interface GQHChart : XXUnknownSuperclass {
}
+(CFDataRef)renderChart:(id)chart;
+(char*)pdfId:(id)anId;
+(id)geometry:(id)geometry;
+(CFStringRef)createChartImageUrlString:(id)string state:(id)state;
+(int)handleFloatingChart:(id)chart state:(id)state;
+(int)handleInlineChart:(id)chart state:(id)state;
@end

@interface GQHChart (Private)
+(int)handleInlineChart:(id)chart state:(id)state imageUrl:(CFStringRef)url;
@end

