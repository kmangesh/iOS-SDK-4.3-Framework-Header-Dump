/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

#import "SportsWorkout-Structs.h"
#import "SWRemote.h"

@class NSTimer, NSMutableData, SWBluetoothMessageHandler, SWPacketUnscrambler;

@interface SWBluetoothRemote : SWRemote {
	NSMutableData* _bluetoothInputData;
	SWBluetoothMessageHandler* _messageHandler;
	SWPacketUnscrambler* _packetUnscrambler;
	NSTimer* _remoteLeftKeyLongPressTimer;
	NSTimer* _remoteRightKeyLongPressTimer;
	NSTimer* _remoteNikeKeyLongPressTimer;
	NSTimer* _remotePlayKeyLongPressTimer;
	NSTimer* _playKeyTimer;
	NSTimer* _volumeUpKeyTimer;
	NSTimer* _volumeDownKeyTimer;
	NSTimer* _leftKeyTimer;
	NSTimer* _rightKeyTimer;
	NSTimer* _nikeKeyTimer;
	BOOL _playKeyWasDown;
	BOOL _volumeUpKeyWasDown;
	BOOL _volumeDownKeyWasDown;
	BOOL _leftKeyWasDown;
	BOOL _rightKeyWasDown;
	BOOL _nikeKeyWasDown;
}
-(id)init;
-(void)dealloc;
-(void)deactivate;
-(void)beginLinking;
-(void)cancelLinking;
-(void)unlink;
-(void)beginSearching;
-(void)cancelSearching;
-(void)_discoverDevice;
-(void)_connectToDeviceWithAddress:(XXStruct_BfdK7C)address;
-(void)_registerToReadInput;
-(void)_receivedActivationNotification:(id)notification;
-(void)_receivedDiscoveryNotification:(id)notification;
-(void)_receivedConnectionNotification:(id)notification;
-(void)_receivedConnectionFailureNotification:(id)notification;
-(void)_receivedInputReadNotification:(id)notification;
-(void)_handleSimpleRemotePlayKeyIsDown:(BOOL)down;
-(void)_handleSimpleRemotePlayKeyUpTimer:(id)timer;
-(void)_handleSimpleRemoteVolumeUpKeyIsDown:(BOOL)down;
-(void)_handleSimpleRemoteVolumeUpKeyUpTimer:(id)timer;
-(void)_handleSimpleRemoteVolumeDownKeyIsDown:(BOOL)down;
-(void)_handleSimpleRemoteVolumeDownKeyUpTimer:(id)timer;
-(void)_handleSimpleRemoteLeftKeyIsDown:(BOOL)down;
-(void)_handleSimpleRemoteLeftKeyUpTimer:(id)timer;
-(void)_handleSimpleRemoteRightKeyIsDown:(BOOL)down;
-(void)_handleSimpleRemoteRightKeyUpTimer:(id)timer;
-(void)_handleNikeKeyIsDown:(BOOL)down;
-(void)_handleNikeKeyUpTimer:(id)timer;
-(void)_postBeginMusicRewindNotification:(id)notification;
-(void)_postBeginMusicFastForwardNotification:(id)notification;
-(void)_postFirePowersongNotification:(id)notification;
-(void)_postEndWorkoutNotification:(id)notification;
-(id)_serialNumberForPacket:(id)packet timestamp:(unsigned)timestamp radioId:(unsigned*)anId;
-(XXStruct_BfdK7C)_deviceAddressForSerialNumber:(id)serialNumber;
@end
