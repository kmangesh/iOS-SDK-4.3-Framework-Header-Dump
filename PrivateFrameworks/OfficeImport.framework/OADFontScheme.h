/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADFontScheme : XXUnknownSuperclass {
@private
	NSMutableDictionary* mMajorFont;
	NSMutableDictionary* mMinorFont;
}
+(void)addFontEntry:(id)entry script:(id)script typeface:(id)typeface;
-(id)init;
-(void)dealloc;
-(BOOL)isFontSchemeRef:(id)ref;
-(id)fontForFontSchemeRef:(id)fontSchemeRef;
-(unsigned)majorFontCount;
-(id)majorTypefaceForScript:(id)script;
-(id)majorFont;
-(unsigned)minorFontCount;
-(id)minorTypefaceForScript:(id)script;
-(id)minorFont;
@end

