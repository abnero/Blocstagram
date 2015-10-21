//
//  UIImage+ImageUtilities.h
//  Blocstagram
//
//  Created by Abner Flores on 10/19/15.
//  Copyright (c) 2015 Abner Flores. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ImageUtilities)

- (UIImage *) imageWithFixedOrientation;
- (UIImage *) imageResizedToMatchAspectRatioOfSize:(CGSize)size;
- (UIImage *) imageCroppedToRect:(CGRect)cropRect;

//assignment 41
- (UIImage *) imageByScalingToSize:(CGSize)size andCroppingWithRect:(CGRect)rect;


@end

