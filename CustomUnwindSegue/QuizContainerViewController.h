/*
     File: QuizContainerViewController.h
 Abstract: A custom container view controller that is functionally similar to a 
 UINavigationController.
 
  Version: 1.0
 
 
 */

#import <UIKit/UIKit.h>

@interface QuizContainerViewController : UIViewController 

//! The view controller at the top of the navigation stack (on screen).
@property (nonatomic, readonly) UIViewController *topViewController;
@property (nonatomic, copy) NSArray *viewControllers;

- (void)setViewControllers:(NSArray *)viewControllers animated:(BOOL)animated;
- (void)pushViewController:(UIViewController *)viewController animated:(BOOL)animated;
- (NSArray *)popToViewController:(UIViewController *)viewController animated:(BOOL)animated;

@end
