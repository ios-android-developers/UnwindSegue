/*
     File: ResultsViewController.h
 Abstract: View controller for the results screen, including the quiz score.
 From this view controller, the user can restart the quiz or return to the
 main menu.
 
  Version: 1.0
 
 
 */

#import <UIKit/UIKit.h>

@class Quiz;

@interface ResultsViewController : UITableViewController

//! The Quiz to source the results from.
@property (strong) Quiz *currentQuiz;

@end
