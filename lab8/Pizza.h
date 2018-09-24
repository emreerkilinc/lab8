//
//  Pizza.h
//  lab8
//
//  Created by emre on 2018-09-24.
//  Copyright © 2018 emre. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface Pizza : NSObject

typedef enum {
    small,
    medium,
    large
} PizzaSize;

@property (nonatomic, assign) PizzaSize size;
@property (nonatomic, strong) NSArray *toppings;

- (instancetype)initWithSize: (PizzaSize) size andToppings: (NSArray *) toppings;
+(Pizza *) largePepperoni;
+(Pizza *) meatLoversWithSize: (PizzaSize) size;


@end
