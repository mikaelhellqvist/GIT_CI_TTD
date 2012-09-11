//
//  GCTPerson.h
//  GIT_CI_TTD
//
//  Created by Mikael Hellqvist on 2012-09-11.
//  Copyright (c) 2012 Mikael Hellqvist. All rights reserved.
//

#import <Foundation/Foundation.h>
/**
 A simple class showing Unit Testing.
 */
@interface GCTPerson : NSObject {
    int age;
    NSString *firstName;
    NSString *lastName;
}
/**
Init the person with a name
 @param firstName sets the persons first name
 @bug This method sets the wrong name
 */
- (id)initWithFirstName:(NSString*)firstName;
/**
 Show the persons first name 
 @return String
 */
- (NSString *)showPersonName;

/**
 @warning not used
 */
@property (nonatomic,assign) int age;
/// first name of the person
@property (nonatomic,copy) NSString* firstName;
/**
 @warning not used
 */
@property (nonatomic,copy) NSString* lastName;
@end
