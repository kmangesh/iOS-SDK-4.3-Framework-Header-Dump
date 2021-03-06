/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface XXUnknownSuperclass (ABPredicateQueryCreation)
-(BOOL)ab_hasCallback;
-(void)ab_addCallbackContextToArray:(CFArrayRef)array;
-(void)ab_bindStatement:(CPSqliteStatement*)statement withBindingOffset:(int*)bindingOffset predicateIdentifier:(int)identifier;
-(id)ab_newQueryWithSortOrder:(unsigned)sortOrder addressBook:(void*)book propertyIndices:(const CFDictionaryRef*)indices;
@end

@interface XXUnknownSuperclass (ABPredicateQueryCreation)
-(void)ab_addCallbackContextToArray:(CFArrayRef)array;
-(BOOL)ab_hasCallback;
-(void)ab_bindStatement:(CPSqliteStatement*)statement withBindingOffset:(int*)bindingOffset predicateIdentifier:(int)identifier;
-(id)ab_newQueryWithSortOrder:(unsigned)sortOrder addressBook:(void*)book propertyIndices:(const CFDictionaryRef*)indices;
@end

@interface XXUnknownSuperclass (ABCMutableDataAdditions)
-(void)abAppendString:(id)string;
@end

@interface XXUnknownSuperclass (ABDataAdditions)
-(id)abStringAtRange:(NSRange)range inEncoding:(unsigned)encoding;
-(BOOL)abIsUTF16EntourageVCard;
-(id)abEncodeVCardBase64DataWithInitialLength:(unsigned)initialLength;
-(id)abEncodeBase64DataBreakLines:(BOOL)lines allowSlash:(BOOL)slash padChar:(BOOL)aChar;
-(id)abDecodedUTF7;
-(id)abDecodeVCardBase64;
@end

@interface XXUnknownSuperclass (ABVCardAdditions)
-(id)copyABVCardDataRepresentation;
-(id)abEscapeStringForUnichar:(unsigned short)unichar and:(unsigned short)anAnd advance:(int*)advance;
-(id)abVCardKoshify;
@end

