//
//  InAppPurchaseAppDelegate.h
//  Example
//
//  Created by おかやん on 2014/08/15.
//  Copyright (c) 2014年 ナノソフトウェア. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface InAppPurchaseAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (weak) IBOutlet NSTextField *numberField1;
@property (weak) IBOutlet NSTextField *numberField2;
@property (weak) IBOutlet NSTextField *answerField;

- (IBAction)CaliculateAnswer:(NSButton *)sender;

@end
