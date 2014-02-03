/*
     File: Question.h
 Abstract: Model class for a single question in the quiz.
 
  Version: 1.0
 
 
 */

#import <Foundation/Foundation.h>

@interface Question : NSObject

- (id)initWithQuestionDict:(NSDictionary*)questionDict;

//! The text of the question.
@property (readonly) NSString *text;
//! Possible responses to the question.
@property (readonly) NSArray *responses;
//! The index of the correct response in the responses array.
@property (readonly) NSInteger correctResponse;
//! The index of the user's selected response or NSNotFound if the user has not
//! responded to the question.
@property (readwrite) NSInteger selectedResponse;

@end
