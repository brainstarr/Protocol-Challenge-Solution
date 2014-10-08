//
//  ViewController.m
//  Protocol Challenge Solution
//
//  Created by Brian Starr on 10/6/14.
//  Copyright (c) 2014 Brian Starr. All rights reserved.
//

#import "ViewController.h"
#import "DetailViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    self.textField.delegate = self;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - didUpdateText Delegate

-(void)didUpdateText:(NSString *)text
{
    
    self.textField.text = text;
}

#pragma mark - UITextField delegate

- (BOOL)textFieldShouldReturn:(UITextField *)textField
{
    [self.textField resignFirstResponder];
    return YES;
}

-(void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    if ([sender isKindOfClass:[UIBarButtonItem class]])
    {
        if ([segue.destinationViewController isKindOfClass:[DetailViewController class]])
        {
            NSString *textToAdd = self.textField.text;
            DetailViewController *nextViewController = segue.destinationViewController;
            nextViewController.textFromTextBox = textToAdd;
            nextViewController.delegate = self;
        }
    }
}
@end
