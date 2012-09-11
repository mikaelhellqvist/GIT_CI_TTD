//
//  GCTAppDelegate.h
//  GIT_CI_TTD
//
//  Created by Mikael Hellqvist on 2012-09-11.
//  Copyright (c) 2012 Mikael Hellqvist. All rights reserved.
//

#import <UIKit/UIKit.h>
/** This project has been created as an example on how to implement: (testing AppleDoc generation)
 
    1. Documentation using AppleDoc
        Install AppleDoc from [GitHub](https://github.com/tomaz/appledoc)
[Tutorial](http://www.cocoanetics.com/2011/11/amazing-apple-like-documentation/)
    2. Continous Integration using Jenkins
[Install Jenkins](http://jenkins-ci.org) for local testing
[Tutorial1](http://blog.shinetech.com/2011/06/23/ci-with-jenkins-for-ios-apps-build-distribution-via-testflightapp-tutorial/)
[Tutorial2](http://deadmeta4.com/2012/04/01/from-commit-to-testflight-part-1/)
    3. Unit Testing (TDD) using OCUnit
        Use the built in Unit Testing
[Tutorial](http://paulsolt.com/2010/11/iphone-unit-testing-explained-part-1/)
    4. Automatic Versioning using Shell Script
        
        After testing agvtool, I've decided it's best to use a run script instead. Seems to be problems with agvtool.
[Tutorial](http://mostlybinary.com/2012/04/03/how-to-auto-increment-your-ios-build-number/)
 
        Might add this:
            if [ "$CONFIGURATION" == "Debug" ]; then
            # increment build number
            fi
 
        @note Remember to set the "Run scripts only when installing" checkbox.
 */
@interface GCTAppDelegate : UIResponder <UIApplicationDelegate>
/// The window
@property (strong, nonatomic) UIWindow *window;

@end
