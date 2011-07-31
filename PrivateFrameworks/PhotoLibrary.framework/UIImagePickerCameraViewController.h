/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "NSObject.h"
#import "PhotoLibrary-Structs.h"


@protocol UIImagePickerCameraViewController <NSObject>
-(BOOL)_showsCameraControls;
-(void)_setShowsCameraControls:(BOOL)controls;
-(id)_cameraOverlayView;
-(void)_setCameraOverlayView:(id)view;
-(CGAffineTransform)_cameraViewTransform;
-(void)_setCameraViewTransform:(CGAffineTransform)transform;
-(void)_takePicture;
-(unsigned)_cameraDevice;
-(void)_setCameraDevice:(unsigned)device;
-(unsigned)_cameraCaptureMode;
-(void)_setCameraCaptureMode:(unsigned)mode;
-(int)_cameraFlashMode;
-(void)_setCameraFlashMode:(int)mode;
-(BOOL)_startVideoCapture;
-(void)_stopVideoCapture;
@end
