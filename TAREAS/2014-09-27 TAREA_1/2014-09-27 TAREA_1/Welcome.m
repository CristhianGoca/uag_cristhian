//
//  ViewController.m
//  2014-09-27 TAREA_1
//
//  Created by Cristhian G on 9/29/14.
//  Copyright (c) 2014 CRISTHIANGOCA. All rights reserved.
//

#import "Welcome.h"

@interface Welcome ()

@end

@implementation Welcome

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


//-------------------------------------------

//Dissapear keyboard
- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event
{
    [self.txtName       resignFirstResponder];
}

- (IBAction)btnChangePressed:(id)sender
{
    self.imgWelcome.image = [UIImage imageNamed: @"164319_1703168732715_2116448_n.jpg"];
}

- (IBAction)btnChangeNamePressed:(id)sender
{
    self.lblWelcome.text                        = @"Cristhian Garcia Olvera";
    self.lblWelcome.adjustsFontSizeToFitWidth   = YES;
    //self.lblWelcome.textColor                   = [UIColor nCoolPink];
}

@end
