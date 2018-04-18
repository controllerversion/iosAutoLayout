//
//  Fraction.h
//  calculator_1
//
//  Created by stayfantasy on 2018/4/15.
//  Copyright © 2018年 testAutolayout. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Fraction : NSObject

@property int numerator, denominator;

- (void)       print;
- (void)       setTo: (int) n over: (int) d;
- (Fraction *) add:      (Fraction *) f;
- (Fraction *) subtract: (Fraction *) f;
- (Fraction *) multiply: (Fraction *) f;
- (Fraction *) divide:   (Fraction *) f;
- (void)       reduce;
- (double)     convertToNum;
- (NSString *) convertToString;

@end
