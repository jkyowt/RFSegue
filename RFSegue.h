/*!
    RFSegue

    Copyright (c) 2012-2013 BB9z
    http://github.com/bb9z/RFSegue

    The MIT License (MIT)
    http://www.opensource.org/licenses/mit-license.php
*/

#import "RFUI.h"
#import "RFSegueDelegate.h"

@interface RFSegue : UIStoryboardSegue
<RFForSubclass>

@property (RF_STRONG, nonatomic) NSDictionary *userInfo;

- (id)initWithIdentifier:(NSString *)identifier source:(UIViewController<RFSegueSourceDelegate> *)source destination:(UIViewController<RFSegueDestinationDelegate> *)destination;

/// Should not be overrided, see RFPerform
- (void)perform;

/**
    Subclasses should always override this method instead of [RFSegue perform] and use it to perform the animations from the views in sourceViewController to the views in destinationViewController.
 */
- (void)RFPerform;
@end
