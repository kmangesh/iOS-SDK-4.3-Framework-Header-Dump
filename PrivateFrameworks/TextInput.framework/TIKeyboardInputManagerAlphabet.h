/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TextInput-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableString;

@interface TIKeyboardInputManagerAlphabet : XXUnknownSuperclass {
	TIInputManagerAlphabet* m_impl;
	NSMutableString* m_composedText;
}
-(id)init;
-(void)dealloc;
-(BOOL)doesComposeText;
-(id)externalStringToInternal:(id)internal;
-(id)internalStringToExternal:(id)external;
-(unsigned)internalIndexToExternal:(unsigned)external;
-(unsigned)externalIndexToInternal:(unsigned)internal;
-(TIInputManagerAlphabet*)initImplementation;
-(void)loadDictionaries;
-(void)setAutoCorrects:(BOOL)corrects;
-(void)setShallowPrediction:(BOOL)prediction;
-(void)setCalculatesChargedKeyProbabilities:(BOOL)probabilities;
-(void)clearDynamicDictionary;
-(id)addInput:(id)input flags:(unsigned)flags point:(CGPoint)point firstDelete:(unsigned*)aDelete fromVariantKey:(BOOL)variantKey;
-(void)setInput:(id)input;
-(id)deleteFromInput:(unsigned*)input;
-(void)clearInput;
-(void)acceptInput;
-(void)setInputIndex:(unsigned)index;
-(unsigned)inputIndex;
-(unsigned)inputCount;
-(BOOL)inputEmpty;
-(id)inputString;
-(id)defaultCandidate;
-(void)addToTypingHistory:(id)typingHistory;
-(void)textAccepted:(id)accepted;
-(void)increaseUserFrequency:(id)frequency;
-(void)decreaseUserFrequency:(id)frequency;
-(void)inputLocationChanged;
-(id)shadowTyping;
-(void)setShift:(BOOL)shift;
-(void)setAutoShift:(BOOL)shift;
-(CFArrayRef)chargeableKeys;
-(CFDictionaryRef)chargedKeyProbabilities;
-(id)autocorrection;
-(void)registerCentroid:(CGPoint)centroid forKey:(id)key;
-(void)clearAllCentroids;
-(void)setKeyboardMatchType:(int)type;
@end

