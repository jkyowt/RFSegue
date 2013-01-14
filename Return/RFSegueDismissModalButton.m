
#import "RFSegueDismissModalButton.h"

@implementation RFSegueDismissModalButton

- (void)awakeFromNib {
    [super awakeFromNib];
    
    [self addTarget:self action:@selector(onButtonTapped) forControlEvents:UIControlEventTouchUpInside];
}

- (void)onButtonTapped {
    if ([self.masterViewController respondsToSelector:@selector(RFSegueWillReturn:)]) {
        [self.masterViewController RFSegueWillReturn:self];
    }
    [self.masterViewController dismissModalViewControllerAnimated:YES];
    if ([self.masterViewController respondsToSelector:@selector(RFSegueDidReturn:)]) {
        [self.masterViewController RFSegueDidReturn:self];
    }
}

@end