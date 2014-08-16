//
//  FuseBox.m
//  Example
//
//  Created by おかやん on 2014/08/15.
//  Copyright (c) 2014年 ナノソフトウェア. All rights reserved.
//

#import "FuseBox.h"

@implementation FuseBox

-(IBAction)caliculateAnswer:(id)sender
{
    int num1,num2,answer;
    num1 = [numberField1 intValue];
    num2 = [numberField2 intValue];
    answer = num1 + num2;
    [answerField setIntValue:answer];
}

@end
