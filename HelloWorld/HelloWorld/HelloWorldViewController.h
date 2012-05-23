//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by Thanapat Lorsiripaiboon on 5/23/55 BE.
//  Copyright (c) 2555 Wegrass Interactive Co.,Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController<UITextFieldDelegate>

@property (copy, nonatomic) NSString *userName;

@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *label;

- (IBAction)changeGreeting:(id)sender;
@end
