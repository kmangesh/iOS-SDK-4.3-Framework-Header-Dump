/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UITextInputTraits.h"
#import "UITextContentView.h"
#import "UITextSelectingContainer.h"

@class UITextInteractionAssistant, UITextSelectionView, UIColor, UIFont, UIWebDocumentView, NSString, DOMHTMLElement, WebFrame, UIDelayedAction;
@protocol UITextSelectingContent, UITextContentViewDelegate;

@interface UITextContentView : UIView <UITextSelectingContainer, UITextInputTraits> {
@private
	id m_delegate;
	WebFrame* m_frame;
	DOMHTMLElement* m_body;
	int m_marginTop;
	UIDelayedAction* m_scrollToVisibleTimer;
	UIEdgeInsets m_selectionInset;
	float m_bottomBufferHeight;
	BOOL m_editable;
	BOOL m_editing;
	BOOL m_becomesEditableWithGestures;
	BOOL m_becomingFirstResponder;
	BOOL m_reentrancyGuard;
	BOOL m_scrollsSelectionOnWebDocumentChanges;
	BOOL m_hasExplicitTextAlignment;
	UITextInteractionAssistant* m_interactionAssistant;
	UITextSelectionView* m_selectionView;
	UIWebDocumentView* m_webView;
	UIFont* m_font;
	UIColor* m_textColor;
	int m_textAlignment;
}
@property(assign, nonatomic) UIEdgeInsets selectionInset;
@property(assign, nonatomic) BOOL scrollsSelectionOnWebDocumentChanges;
@property(assign, nonatomic) int autocapitalizationType;
@property(assign, nonatomic) int autocorrectionType;
@property(assign, nonatomic) int keyboardType;
@property(assign, nonatomic) int keyboardAppearance;
@property(assign, nonatomic) int returnKeyType;
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(assign, nonatomic, getter=isEditing) BOOL editing;
@property(assign, nonatomic) id<UITextContentViewDelegate> delegate;
@property(readonly, assign, nonatomic) UITextSelectionView* selectionView;
@property(readonly, assign, nonatomic) UITextInteractionAssistant* interactionAssistant;
@property(readonly, assign, nonatomic) UIView<UITextSelectingContent>* content;
@property(assign, nonatomic, getter=isEditable) BOOL editable;
@property(assign, nonatomic) NSRange selectedRange;
@property(assign, nonatomic) int textAlignment;
@property(retain, nonatomic) UIColor* textColor;
@property(retain, nonatomic) UIFont* font;
@property(copy, nonatomic) NSString* text;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame webView:(id)view;
-(id)initWithCoder:(id)coder;
-(void)_populateArchivedSubviews:(id)subviews;
-(void)encodeWithCoder:(id)coder;
-(void)commonInitWithWebDocumentView:(id)webDocumentView isDecoding:(BOOL)decoding;
-(void)dealloc;
-(void)removeFromSuperview;
-(void)detachSelectionView;
-(void)detachInteractionAssistant;
-(void)registerForEditingDelegateNotification:(id)editingDelegateNotification selector:(SEL)selector;
-(void)keyboardDidShow:(id)keyboard;
-(id)scrollView;
-(CGSize)tileSizeForSize:(CGSize)size;
-(id)styleString;
-(void)recalculateStyle;
-(void)didMoveToSuperview;
-(void)setEmbeddedEditingMode:(BOOL)mode;
-(void)updateWebViewObjects;
-(id)_keyboardResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)isFirstResponder;
-(void)ensureSelection;
-(CGPoint)constrainedPoint:(CGPoint)point;
-(id)automaticallySelectedOverlay;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)_scrollViewWillBeginDragging;
-(void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;
-(void)_scrollViewDidEndDecelerating;
-(void)beginSelectionChange;
-(void)updateSelection;
-(void)endSelectionChange;
-(void)selectionChanged;
-(BOOL)hasSelection;
-(void)startAutoscroll:(CGPoint)autoscroll;
-(void)cancelAutoscroll;
-(void)setSelectionVisible:(BOOL)visible;
-(BOOL)selectionVisible;
-(void)setCaretBlinks:(BOOL)blinks;
-(BOOL)caretBlinks;
-(CGRect)caretRectForVisiblePosition:(id)visiblePosition;
-(CGRect)selectionClipRect;
-(id)selectionRectsForRange:(id)range;
-(id)selectedText;
-(void)insertText:(id)text;
-(CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)point;
-(unsigned)offsetInMarkedTextForSelection:(id)selection;
-(BOOL)hasMarkedText;
-(id)markedText;
-(id)wordContainingCaretSelection;
-(id)wordRangeContainingCaretSelection;
-(id)wordInRange:(id)range;
-(unsigned short)characterBeforeCaretSelection;
-(NSRange)selectionRange;
-(CGRect)rectContainingCaretSelection;
-(id)fontForCaretSelection;
-(id)undoManagerForWebView:(id)webView;
-(id)undoManager;
-(void)_hideSelectionCommands;
-(void)_setRtoLTextDirection:(id)direction;
-(void)_setLtoRTextDirection:(id)direction;
-(void)cut:(id)cut;
-(void)copy:(id)copy;
-(void)paste:(id)paste;
-(void)select:(id)select;
-(void)selectAll:(id)all;
-(void)replace:(id)replace;
-(void)promptForReplace:(id)replace;
-(BOOL)canPerformAction:(SEL)action withSender:(id)sender;
-(void)selectAll;
-(id)supportedPasteboardTypesForCurrentSelection;
-(id)documentFragmentForPasteboardItemAtIndex:(int)index;
-(void)scrollRectToVisible:(CGRect)visible animated:(BOOL)animated;
-(void)webViewDidChange:(id)webView;
-(void)performBecomeEditableTasks;
-(void)setFrame:(CGRect)frame;
-(BOOL)isSMSTextView;
-(void)setSelectionWithPoint:(CGPoint)point;
-(void)setSelectionToStart;
-(void)setSelectionToEnd;
-(CGRect)rectForSelection:(NSRange)selection;
-(void)scrollSelectionToVisible:(BOOL)visible;
-(void)performScrollSelectionToVisible:(BOOL)visible;
-(void)touchScrollToVisibleTimerWithDelay:(double)delay;
-(void)touchScrollToVisibleTimer;
-(void)clearScrollToVisibleTimer;
-(void)scrollToVisibleTimerAction;
-(CGRect)rectForScrollToVisible;
-(void)setContentToHTMLString:(id)htmlstring;
-(id)contentAsHTMLString;
-(id)textInputTraits;
-(void)forwardInvocation:(id)invocation;
-(id)methodSignatureForSelector:(SEL)selector;
-(BOOL)hasText;
-(BOOL)becomesEditableWithGestures;
-(void)setBecomesEditableWithGestures:(BOOL)gestures;
-(int)marginTop;
-(void)setMarginTop:(int)top;
-(CGRect)visibleRect;
-(CGRect)visibleTextRect;
-(id)webView;
-(void)_didScroll;
-(void)scrollRangeToVisible:(NSRange)visible;
-(BOOL)shouldStartDataDetectors;
-(void)cancelDataDetectorsWithWebLock;
-(void)startDataDetectorsWithWebLock;
-(void)resetDataDetectorsResultsWithWebLock;
-(unsigned)dataDetectorTypes;
-(void)setDataDetectorTypes:(unsigned)types;
-(BOOL)mightHaveLinks;
-(void)tapLinkAtPoint:(CGPoint)point;
-(void)startInteractionWithLinkAtPoint:(CGPoint)point;
-(void)updateInteractionWithLinkAtPoint:(CGPoint)point;
-(void)validateInteractionWithLinkAtPoint:(CGPoint)point;
-(void)cancelInteractionWithLink;
-(void)startLongInteractionWithLinkAtPoint:(CGPoint)point;
-(BOOL)isInteractingWithLink;
-(BOOL)willInteractWithLinkAtPoint:(CGPoint)point;
-(BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;
-(BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;
-(BOOL)keyboardInputShouldDelete:(id)keyboardInput;
-(BOOL)keyboardInputChanged:(id)changed;
-(void)keyboardInputChangedSelection:(id)selection;
-(void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;
-(void)setBottomBufferHeight:(float)height;
-(float)bottomBufferHeight;
-(void)setShowScrollerIndicators:(BOOL)indicators;
-(BOOL)showScrollerIndicators;
-(void)displayScrollerIndicators;
-(void)setOffset:(CGPoint)offset;
-(CGPoint)offset;
-(void)setAllowsRubberBanding:(BOOL)banding;
-(void)setScrollingEnabled:(BOOL)enabled;
-(BOOL)scrollingEnabled;
-(void)setAllowsFourWayRubberBanding:(BOOL)banding;
-(void)setScrollerIndicatorSubrect:(CGRect)subrect;
@end

@interface UITextContentView (SyntheticEvents)
-(id)_automationValue;
@end

