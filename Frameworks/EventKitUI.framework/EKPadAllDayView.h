/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "EventKitUI-Structs.h"
#import "UIScrollViewDelegate.h"
#import "EKPadAllDayViewContentsDelegate.h"

@class EKPadAllDayViewContents, NSMutableArray, NSArray, EKDayOccurrenceView, CalendarModel, UIScrollView;
@protocol EKPadAllDayViewDataSource, EKPadAllDayViewDelegate;

@interface EKPadAllDayView : XXUnknownSuperclass <EKPadAllDayViewContentsDelegate, UIScrollViewDelegate> {
	CalendarModel* _model;
	unsigned _selectedEventIndex;
	XXStruct_lQVxyC _displayedDate;
	unsigned _daysToDisplay;
	double _startDate;
	double _endDate;
	float _verticalTopMargin;
	float _minimumHeight;
	float _occurrenceHRightInset;
	CGRect _contentFrame;
	EKPadAllDayViewContents* _contentView;
	UIScrollView* _scroller;
	int _outlineStyle;
	EKDayOccurrenceView* _selectedOccurrenceView;
	NSMutableArray* _layedOutRows;
	NSMutableArray* _dayNames;
	NSMutableArray* _dayDates;
	unsigned _drawsLeftBorder : 1;
	unsigned _drawsAllBorders : 1;
	unsigned _allowsOccurrenceSelection : 1;
	unsigned _scrollbarShowsInside : 1;
	unsigned _scrollingToOccurrence : 1;
	unsigned _dimsNonSelectedItems : 1;
	id<EKPadAllDayViewDelegate> _delegate;
	id<EKPadAllDayViewDataSource> _dataSource;
	int _shouldAbbriviateDayNames;
}
@property(assign, nonatomic) id<EKPadAllDayViewDataSource> dataSource;
@property(assign, nonatomic) id<EKPadAllDayViewDelegate> delegate;
@property(assign, nonatomic) BOOL dimsNonSelectedItems;
@property(readonly, assign, nonatomic) NSArray* occurrenceViews;
-(id)initWithFrame:(CGRect)frame numberOfDaysToDisplay:(unsigned)display opaque:(BOOL)opaque backgroundColor:(id)color scrollbarShowsInside:(BOOL)inside;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)_localeChanged;
-(void)_significantTimeChanged;
-(id)makeAllDayLabel;
-(void)buildDayLabel;
-(void)updateDayLabels;
-(float)bottomInset;
-(void)setDisplayedDate:(XXStruct_lQVxyC)date;
-(XXStruct_lQVxyC)displayDate;
-(void)setDrawsLeftBorder:(BOOL)border;
-(void)setOutlineStyle:(int)style;
-(void)setMinimumHeight:(float)height;
-(void)setOccurrenceHRightInset:(float)inset;
-(id)selectedOccurrenceView;
-(id)occurrenceVisibleRect:(id)rect;
-(id)occurrenceViewForOccurrence:(id)occurrence;
-(void)scrollToEventIndex:(unsigned)eventIndex animated:(BOOL)animated;
-(void)scrollToOccurrence:(id)occurrence animating:(BOOL)animating;
-(id)getSortedBlocksFromOccurrenceBlocks:(id)occurrenceBlocks;
-(void)setAllowsOccurrenceSelection:(BOOL)selection;
-(unsigned)selectedEventIndex;
-(void)setViewsDimmed:(BOOL)dimmed forEventIndex:(unsigned)eventIndex;
-(void)selectItemWithEventIndex:(unsigned)eventIndex;
-(unsigned)eventIndexForView:(id)view;
-(id)viewForEventIndex:(unsigned)eventIndex;
-(void)reloadData;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)drawRect:(CGRect)rect;
-(unsigned)_calendarOrderForCalendar:(id)calendar;
-(float)_scrollbarOffset;
-(CGRect)_frameForOccurrenceBlock:(id)occurrenceBlock index:(unsigned)index;
-(void)layoutSubviews;
-(BOOL)_shouldAbbreviateDateTextLabels;
-(void)_updateDayLabels;
-(XXStruct_lQVxyC)_dateForPoint:(CGPoint)point;
-(id)_calendarOrderSortDescriptor;
-(id)_numberOfDaysSortDescriptor;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)scrollViewDidEndScrollingAnimation:(id)scrollView;
-(void)dayOccurrenceViewStartTouch:(id)touch atPoint:(CGPoint)point;
-(void)dayOccurrenceViewDragExited:(id)exited;
-(void)dayOccurrenceViewClicked:(id)clicked atPoint:(CGPoint)point;
-(void)emptySpaceClickForCalendarWeekDayEventContent:(id)calendarWeekDayEventContent atPoint:(CGPoint)point;
@end

