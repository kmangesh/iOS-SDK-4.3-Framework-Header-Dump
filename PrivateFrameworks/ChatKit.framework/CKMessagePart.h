/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSData, CKMessage;

@interface CKMessagePart : XXUnknownSuperclass {
	unsigned _height;
	unsigned _flags;
	unsigned _rowID;
	CKMessage* _parentMessage;
}
@property(assign, nonatomic) CKMessage* parentMessage;
@property(readonly, assign, nonatomic) unsigned rowID;
@property(readonly, assign, nonatomic) NSData* highlightData;
+(id)_assembleTextPartFromRange:(id)range;
+(id)_newPartsForNode:(id)node resources:(id)resources;
+(id)copyDetachedMessageParts:(id)parts;
+(id)copyMessagePartsFromComposition:(id)composition;
+(id)_newPartForPartRepresentation:(id)partRepresentation previewPartRepresentation:(id)representation;
+(id)copyMessagePartsFromArrayRepresentation:(id)arrayRepresentation;
+(id)copyDeletedPart;
+(id)copyUnknownPart;
-(BOOL)isEqual:(id)equal;
-(id)mediaObject;
-(id)previewText;
-(BOOL)isDisplayable;
-(id)text;
-(id)imageData;
-(id)image;
-(id)previewImage;
-(id)composeImage;
-(id)imageFilename;
-(id)detachedCopy;
-(void)getUIHeight:(unsigned*)height flags:(unsigned*)flags;
-(int)type;
-(void)setUIHeight:(unsigned long)height flags:(unsigned long)flags store:(BOOL)store;
-(void)setRowID:(unsigned long)anId;
-(void)dealloc;
-(id)previewData;
-(id)composeData;
-(void)copyToPasteboard;
@end
