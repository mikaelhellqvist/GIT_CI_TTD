//
//  GIT_CI_TTDTests.m
//  GIT_CI_TTDTests
//
//  Created by Mikael Hellqvist on 2012-09-11.
//  Copyright (c) 2012 Mikael Hellqvist. All rights reserved.
//

#import "GIT_CI_TTDTests.h"

#import "GCTPerson.h"

@implementation GIT_CI_TTDTests

- (void)setUp
{
    [super setUp];
   
 }

- (void)tearDown
{
    // Tear-down code here.
    
    [super tearDown];
}

- (void) testShowPersonName
{
    NSString *firstName = @"Bosse";
    GCTPerson *person = [[GCTPerson alloc] initWithFirstName:firstName];
    STAssertNotNil(person, @"Couldn't allocate GCTPerson");

    STAssertTrue(firstName == person.firstName, @"The name of the person should be %@ and not %@", firstName, person.firstName);
}

@end
