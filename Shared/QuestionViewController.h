/*
     File: QuestionViewController.h
 Abstract: View controller for displaying a Question.
 
  Version: 1.0
 
 
 */

#import <UIKit/UIKit.h>

@class Quiz;

@interface QuestionViewController : UITableViewController

//! The Quiz to source the question from.
@property (strong) Quiz *currentQuiz;
//! Index of the Question in the Quiz to display.
@property (readwrite) NSUInteger questionIndex;

@end
