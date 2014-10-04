//
//  ViewController.h
//  Tarea1_1
//
//  Created by Cristhian G on 10/4/14.
//  Copyright (c) 2014 CRISTHIANGOCA. All rights reserved.
//

#import <UIKit/UIKit.h>
#define nCoolPink       colorWithRed:255/255.0 green:135/255.0 blue:233/255.0 alpha:1.0@interface ViewController ()@interface ViewController : UIViewController

- (IBAction)Color:(id)sender;

@property (weak, nonatomic) IBOutlet UILabel *Nombre;

@end
