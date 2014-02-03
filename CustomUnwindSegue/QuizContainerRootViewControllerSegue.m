/*
     File: QuizContainerRootViewControllerSegue.m
 Abstract: Custom segue for setting the root view controller of a
 QuizContainerViewController.
 
  Version: 1.0
 
 
 */

#import "QuizContainerRootViewControllerSegue.h"
#import "QuizContainerViewController.h"

@implementation QuizContainerRootViewControllerSegue

//| ----------------------------------------------------------------------------
//  Replaces the viewControllers array of the sourceViewController (which must 
//  be a QuizContainerViewController) with an array containing only the
//  destinationViewController.  Visually, it causes the
//  QuizContainerViewController to immediately display the
//  destinationViewController with no animated transition.
//
- (void)perform
{
    QuizContainerViewController *containerVC = (QuizContainerViewController*)self.sourceViewController;
    
    NSArray *viewControllers = @[self.destinationViewController];
    
    [containerVC setViewControllers:viewControllers];
}

@end
