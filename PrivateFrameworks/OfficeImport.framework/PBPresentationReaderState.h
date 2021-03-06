/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ESDContainer, OADTheme, ESDObject, ESDRoot, PBOutlineBulletDictionary, NSMutableArray, NSMutableDictionary, SFUNoCopyDictionary, PDPresentation, PBOfficeArtReaderState, PDSlideBase, PBSlideState;
@protocol OCCancelDelegate;

__attribute__((visibility("hidden")))
@interface PBPresentationReaderState : XXUnknownSuperclass {
@private
	PptBinaryReader* mPptBinaryReader;
	PDPresentation* mTgtPresentation;
	ESDRoot* mDocumentRoot;
	ESDContainer* mSrcSlideListHolder;
	ChVector<int>* mCurrentSlideTextBlockStartIndexVector;
	unsigned mSrcSlideId;
	NSMutableArray* mSlideIndexes;
	SFUNoCopyDictionary* mSlideMasterToMasterStyles;
	CFDictionaryRef mHyperlinkMap;
	PBOfficeArtReaderState* mOfficeArtState;
	NSMutableArray* mFontEntities;
	PDSlideBase* mTgtSlide;
	unsigned mTextLength;
	BOOL mHasCharacterPropertyBulletIndex;
	unsigned mBulletIndex;
	PBOutlineBulletDictionary* mPlaceholderBulletStyles;
	PBOutlineBulletDictionary* mPlaceholderMacCharStyles;
	ESDObject* mCurrentBulletStyle;
	ESDObject* mCurrentMacCharStyle;
	ChVector<PBReaderMasterStyleInfo>* mSrcDocMasterStyleInfoVector;
	ChVector<PBReaderMasterStyleInfo>* mSrcCurrentMasterStyleInfoVector;
	OADTheme* mDefaultTheme;
	PBSlideState* mSlideState;
	id<OCCancelDelegate> mCancel;
	BOOL mHasSlideNumberPlaceholder;
	NSMutableDictionary* mTargetShapeToSourceTextBoxContainerHolderMap;
}
@property(assign) ESDContainer* sourceSlideListHolder;
@property(retain, nonatomic) id<OCCancelDelegate> cancelDelegate;
@property(assign) BOOL hasSlideNumberPlaceholder;
-(id)initWithReader:(PptBinaryReader*)reader tgtPresentation:(id)presentation;
-(void)dealloc;
-(PptBinaryReader*)reader;
-(id)documentRoot;
-(void)setDocumentRoot:(id)root;
-(id)tgtPresentation;
-(int)numberOfSlideIndexes;
-(void)addSlideIndex:(int)index;
-(int)getSlideIndexAt:(int)at;
-(id)slideIndexesRef;
-(id)officeArtState;
-(unsigned)fontEntityCount;
-(void)addFontEntity:(id)entity charSet:(int)set type:(int)type family:(int)family;
-(id)fontEntityAtIndex:(unsigned)index;
-(id)baseTextListStyle;
-(void)setDefaultTheme:(id)theme;
-(id)defaultTheme;
-(id)tgtSlide;
-(void)setTgtSlide:(id)slide;
-(unsigned)textLength;
-(void)setTextLength:(unsigned)length;
-(BOOL)hasCharacterPropertyBulletIndex;
-(void)setHasCharacterPropertyBulletIndex:(BOOL)index;
-(unsigned)bulletIndex;
-(void)setBulletIndex:(unsigned)index;
-(void)setPlaceholderBulletStyles:(id)styles;
-(void)setPlaceholderMacCharStyles:(id)styles;
-(id)currentBulletStyle;
-(id)currentMacCharStyle;
-(void)setCurrentTextType:(int)type placeholderIndex:(unsigned long)index;
-(void)setCurrentBulletStyle:(id)style macCharStyle:(id)style2;
-(void)setMasterStyles:(id)styles slideMaster:(id)master;
-(id)masterStyles:(id)styles;
-(id)slideState;
-(void)resetSlideState;
-(BOOL)hasCurrentSourceMasterStyleInfoVector;
-(void)setCurrentSourceMasterStyleInfoVector:(ChVector<PBReaderMasterStyleInfo>*)vector;
-(PBReaderMasterStyleInfo*)docSourceMasterStyleInfoOfType:(int)type;
-(PBReaderMasterStyleInfo*)currentSourceMasterStyleInfoOfType:(int)type;
-(ChVector<int>*)currentSlideTextBlockStartIndexVector;
-(void)setSourceSlideId:(unsigned long)anId;
-(BOOL)isCancelled;
-(id)hyperlinkInfoWithId:(unsigned long)anId createIfAbsent:(BOOL)absent;
-(id)sourceTextBoxContainerHolderForTargetShape:(id)targetShape;
-(void)setSourceTextBoxContainerHolder:(id)holder forTargetShape:(id)targetShape;
@end

