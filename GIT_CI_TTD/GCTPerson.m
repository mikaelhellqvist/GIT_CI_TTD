//
//  GCTPerson.m
//  GIT_CI_TTD
//
//  Created by Mikael Hellqvist on 2012-09-11.
//  Copyright (c) 2012 Mikael Hellqvist. All rights reserved.
//

#import "GCTPerson.h"

@implementation GCTPerson

- (id)initWithFirstName:(NSString*)fName
{
    if ((self = [super init])) {
        self.firstName = @"Bus";
    }
    return self;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"Person Name: %@ Age: %d", [self firstName], [self age]];
}

- (NSString *)showPersonName
{
    return self.firstName;
}
@end
