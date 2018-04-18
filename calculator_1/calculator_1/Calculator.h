//
//  Calculator.h
//  calculator_1
//
//  Created by stayfantasy on 2018/4/15.
//  Copyright © 2018年 testAutolayout. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Fraction.h"
@interface Calculator : NSObject

@property (strong, nonatomic) Fraction *operand1, *operand2, *accumulator;

- (Fraction *) performOperation: (char) op;
-(void)clear;

@end
