/*
     File: QuizContainerFadeViewControllerSegue.m
 Abstract: Custom segue for pushing new view controllers onto the
 navigation stack of a QuizContainerViewController.
 
  Version: 1.0
 
 
 */

#import "QuizContainerFadeViewControllerSegue.h"
#import "QuizContainerViewController.h"


@implementation QuizContainerFadeViewControllerSegue

//| ----------------------------------------------------------------------------
//  This segue does not implement the transition animation.  Instead, it calls
//  -pushViewController: or -popToViewController: of the parent
//  QuizContainerViewController, which actually performs the transition.
//
- (void)perform
{
    if (self.unwind)
    {
        // Access the destinationViewController's parent to aquire a reference
        // to QuizContainerViewController.  The sourceViewController may not be
        // a direct child of the QuizContainerViewController in which case its
        // parent would not be a reference to the QuizContainerViewController.
        QuizContainerViewController *containerVC = (QuizContainerViewController*)[self.destinationViewController parentViewController];
        [containerVC popToViewController:self.destinationViewController animated:YES];
    }
    else
    {
        QuizContainerViewController *containerVC = (QuizContainerViewController*)[self.sourceViewController parentViewController];
        [containerVC pushViewController:self.destinationViewController animated:YES];
    }
    
}

@end
