/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _NSCallStackArray : XXUnknownSuperclass {
@private
	void** _frames;
	unsigned _cnt;
	unsigned _ignore;
	char** _pcstrs;
	BOOL _wantSyms;
}
+(id)arrayWithFrames:(void**)frames count:(unsigned)count symbols:(BOOL)symbols;
-(void)dealloc;
-(void)finalize;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)index;
-(id)descriptionWithLocale:(id)locale indent:(unsigned)indent;
@end

