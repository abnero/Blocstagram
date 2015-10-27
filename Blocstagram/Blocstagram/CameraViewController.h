//
//  CameraViewController.h
//  Blocstagram
//
//  Created by Abner Flores on 10/19/15.
//  Copyright (c) 2015 Abner Flores. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CameraViewController;

@protocol CameraViewControllerDelegate <NSObject>

- (void) cameraViewController:(CameraViewController *)cameraViewController didCompleteWithImage:(UIImage *)image;

@end


@interface CameraViewController : UIViewController

@property (nonatomic, weak) NSObject <CameraViewControllerDelegate> *delegate;


@end
