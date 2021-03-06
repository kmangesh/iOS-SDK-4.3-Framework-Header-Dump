/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"
#import "MusicLibrary-Structs.h"

@class NSString, NSArray, NSMutableDictionary;

@interface MLMovieProperties : XXUnknownSuperclass <NSCopying> {
@private
	NSMutableDictionary* _dictionary;
}
@property(copy, nonatomic) NSString* studioName;
@property(copy, nonatomic) NSArray* screenwriters;
@property(copy, nonatomic) NSArray* producers;
@property(copy, nonatomic) NSArray* directors;
@property(copy, nonatomic) NSString* copyrightWarning;
@property(copy, nonatomic) NSArray* castMembers;
-(id)init;
-(id)initWithMoviePropertiesDictionary:(id)moviePropertiesDictionary;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)copyMoviePropertiesDictionary;
-(void)_setValue:(id)value forKey:(id)key;
-(void)_setValueCopy:(id)copy forKey:(id)key;
@end

