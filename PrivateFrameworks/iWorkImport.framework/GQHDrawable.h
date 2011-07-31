/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "GQDrawablesGenerator.h"


__attribute__((visibility("hidden")))
@interface GQHDrawable : XXUnknownSuperclass <GQDrawablesGenerator> {
}
+(int)beginDrawables:(id)drawables;
+(int)handleDrawable:(id)drawable state:(id)state;
+(void)aboutToGenerateDrawable:(id)generateDrawable htmlState:(id)state;
+(void)doneGeneratingDrawable:(id)drawable htmlState:(id)state;
+(int)handleFloatingDrawable:(id)drawable htmlState:(id)state;
+(int)handleInlineDrawable:(id)drawable htmlState:(id)state;
+(int)endDrawables:(id)drawables;
+(Class)beginTable:(id)table;
@end
