/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class GKPeerPickerViewController;
@protocol GKPeerPickerControllerDelegate;

@interface GKPeerPickerController : XXUnknownSuperclass {
@private
	id _picker;
}
@property(readonly, assign, nonatomic) GKPeerPickerViewController* pickerViewController;
@property(readonly, assign, nonatomic, getter=isVisible) BOOL visible;
@property(assign, nonatomic) id<GKPeerPickerControllerDelegate> delegate;
@property(assign, nonatomic) unsigned connectionTypesMask;
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)show;
-(void)dismiss;
-(void)_createPicker;
-(void)peerPickerViewControllerDidCancel:(id)peerPickerViewController;
-(void)peerPickerViewController:(id)controller didConnectPeer:(id)peer toSession:(id)session;
-(void)peerPickerViewController:(id)controller didSelectConnectionType:(unsigned)type;
-(id)peerPickerViewController:(id)controller sessionForConnectionType:(unsigned)connectionType;
@end

