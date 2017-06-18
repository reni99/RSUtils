//
//  RSLogger.m
//  RSUtils
//
//  Created by Renato Stauffer on 18.06.17.
//  Copyright © 2017 Renato Stauffer. All rights reserved.
//

#import "RSLogger.h"

@implementation RSLogger

+ (void)log:(NSString *)message {
    #ifdef DEBUG
    NSLog(@"%@", message);
    #endif
}
@end
