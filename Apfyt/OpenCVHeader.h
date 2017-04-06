//
//  OpenCVHeader.h
//  Apfyt
//
//  Created by Josh Payne on 4/5/17.
//  Copyright © 2017 Apfyt. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface OpenCVWrapper : NSObject

+ (UIImage *)processImageWithOpenCV:(UIImage*)inputImage;

@end
