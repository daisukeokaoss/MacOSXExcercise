//
//  FuseBox.h
//  Example
//
//  Created by おかやん on 2014/08/15.
//  Copyright (c) 2014年 ナノソフトウェア. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FuseBox : NSObject{
    IBOutlet id answerField;
    IBOutlet id numberField1;
    IBOutlet id numberField2;
}
-(IBAction)caliculateAnswer:(id)sender;


@end
