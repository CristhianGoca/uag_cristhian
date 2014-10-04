//
//  ViewController.h
//  2014-09-27 TAREA_1
//
//  Created by Cristhian G on 9/29/14.
//  Copyright (c) 2014 CRISTHIANGOCA. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Welcome : UIViewController

//labels
@property (strong, nonatomic) IBOutlet UILabel *lblWelcome;

//Images
@property (strong, nonatomic) IBOutlet UIImageView *imgWelcome;

//@property (strong, nonatomic) IBOutlet UIImageView *imgWelcome2;

//Buttons
@property (strong, nonatomic) IBOutlet UIButton *btnChange;

@property (strong, nonatomic) IBOutlet UITextField *txtName;

//Action
-(IBAction)btnChangePressed:(id)sender;

-(IBAction)btnChangeNamePressed:(id)sender;


@end
