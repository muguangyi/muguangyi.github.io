//
//  IOSBuglyWrapper.h
//  IOSBuglyWrapper
//
//  Created by zt－2205684 on 08/02/2017.
//  Copyright © 2017 Giant. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "include/IOSNativeChannel.h"

@interface BuglyWrapper : NSObject

+ (void)invokeWithChannel:(id<IManagedChannel>)channel;

@end
