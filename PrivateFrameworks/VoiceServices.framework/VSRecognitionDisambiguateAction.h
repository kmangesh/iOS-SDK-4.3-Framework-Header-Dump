/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import "VoiceServices-Structs.h"
#import "VSRecognitionRecognizeAction.h"

@class NSString, NSMutableDictionary;

@interface VSRecognitionDisambiguateAction : VSRecognitionRecognizeAction {
	NSString* _repeatedSpokenFeedbackString;
	NSString* _sequenceTag;
	NSMutableDictionary* _knownValues;
	NSMutableDictionary* _knownPhoneticValues;
	NSMutableDictionary* _ambiguousValues;
	NSMutableDictionary* _ambiguousPhoneticValues;
	void* _context;
}
-(void)dealloc;
-(int)completionType;
-(void)setRepeatedSpokenFeedbackString:(id)string;
-(id)repeatedSpokenFeedbackString;
-(id)sequenceTag;
-(void)setSequenceTag:(id)tag;
-(id)knownValueForClassIdentifier:(id)classIdentifier;
-(void)setKnownValue:(id)value phoneticValue:(id)value2 forClassIdentifier:(id)classIdentifier;
-(id)knownValuesForClassIdentifier:(id)classIdentifier;
-(void)setKnownValues:(id)values phoneticValues:(id)values2 forClassIdentifier:(id)classIdentifier;
-(id)ambiguousValuesForClassIdentifier:(id)classIdentifier;
-(void)setAmbiguousValues:(id)values phoneticValues:(id)values2 forClassIdentifier:(id)classIdentifier;
-(id)_keywords;
-(BOOL)_keywordIndexChanged;
-(void)setKeywords:(id)keywords;
-(VSRecognitionDisambiguationContextRef)_disambiguationContext;
-(VSRecognitionRef)_createRecognitionInstanceWithCallbacks:(XXStruct__Vsh7C*)callbacks info:(void*)info;
-(id)_actionForEmptyResults;
@end
