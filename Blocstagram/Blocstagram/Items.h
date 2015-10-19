//
//  Items.h
//  Blocstagram
//
//  Created by Abner Flores on 10/4/15.
//  Copyright (c) 2015 Abner Flores. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Items : NSObject

+(instancetype) sharedInstance;
@property (nonatomic, strong, readonly) NSArray *mediaItems;

@end
