//
//  IOSNativeChannel.h
//  IOSNativeChannel
//
//  Created by mouguangyi on 06/02/2017.
//  Copyright © 2017 Giant. All rights reserved.
//

#import <Foundation/Foundation.h>

// - IManagedChannel
@protocol IManagedChannel

- (NSString*)getMethod;
- (id)getArgWithIndex:(int)index;
- (void)setResult:(id)result;

@end

