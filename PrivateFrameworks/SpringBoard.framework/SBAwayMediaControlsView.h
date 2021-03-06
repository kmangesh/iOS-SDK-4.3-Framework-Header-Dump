/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIButton, MPAudioDeviceController, MPVolumeView;

@interface SBAwayMediaControlsView : XXUnknownSuperclass {
	unsigned _beganSeeking : 1;
	int _seekingDirection;
	MPAudioDeviceController* _audioDeviceController;
	UIButton* _prevButton;
	UIButton* _nextButton;
	UIButton* _playPauseButton;
	MPVolumeView* _volumeView;
	MPVolumeView* _iPhoneRouteButtonVolumeView;
	int _orientation;
}
@property(assign, nonatomic) int orientation;
-(id)initWithFrame:(CGRect)frame;
-(void)dismissMediaControlsOverlaysAnimated:(BOOL)animated;
-(BOOL)isMediaControlsShowingOverlays;
-(void)dealloc;
-(id)routeButtonVolumeView;
-(void)layoutSubviews;
-(void)setAlpha:(float)alpha;
-(void)removeFromSuperview;
-(void)_playPauseButtonAction:(id)action;
-(void)_changeTrackButtonDown:(id)down;
-(void)_changeTrackButtonUp:(id)up;
-(void)_changeTrackButtonEndSeek:(id)seek;
-(void)_changeTrackButtonTouchPause:(id)pause;
-(void)_volumeChange:(id)change;
-(void)_volumeViewVisibilityChanged;
-(void)_didPresentRoutePicker;
-(void)_registerForNowPlayingNotifications;
-(void)_unregisterForNowPlayingNotifications;
-(void)_nowPlayingChanged:(id)changed;
-(id)_newButtonWithImage:(id)image action:(SEL)action tag:(int)tag;
-(void)_updateInformation;
@end

