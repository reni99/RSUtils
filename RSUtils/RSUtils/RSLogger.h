//
//  RSLogger.h
//  RSUtils
//
//  Created by Renato Stauffer on 18.06.17.
//  Copyright © 2017 Renato Stauffer. All rights reserved.
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

/**
 A class to help log messages to the console.
 */
@interface RSLogger : NSObject

/**
 Logs messages to the console when the DEBUG scheme is used
 @param message The message to log
*/
+ (void) log:(NSString *) message;

@end

NS_ASSUME_NONNULL_END
