/*
     File: QuizContainerFadeViewControllerSegue.h
 Abstract: Custom segue for pushing new view controllers onto the
 navigation stack of a QuizContainerViewController.
 
  Version: 1.0
 
 
 */

#import <UIKit/UIKit.h>

@interface QuizContainerFadeViewControllerSegue : UIStoryboardSegue

//! If the value of this property is YES, the destinationViewController will
//! be pushed onto the navigation stack (equivalent to calling
//! -pushViewController:.  If the value of this property is NO, the
//! navigation stack is popped until the destinationViewController is the top
//! view controller (equivalent to calling -popToViewController:).
@property (nonatomic) BOOL unwind;

@end
