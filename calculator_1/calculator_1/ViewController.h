//
//  ViewController.h
//  calculator_1
//
//  Created by stayfantasy on 2018/4/15.
//  Copyright © 2018年 testAutolayout. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *display;

- (void) processDigit: (int) digit;
- (void) processOp: (char) theOp;
- (void) storeFracPart;

// Number Key

- (IBAction)clickDigit:(UIButton *)sender;

// Operation Key
- (IBAction)clickPlus;
- (IBAction)clickMinus;
- (IBAction)clickMultiply;
- (IBAction)clickDivide;

- (IBAction)clickOver;
- (IBAction)clickClear;
- (IBAction)clickEqual;

@end

