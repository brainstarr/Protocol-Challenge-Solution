//
//  ViewController.h
//  Protocol Challenge Solution
//
//  Created by Brian Starr on 10/6/14.
//  Copyright (c) 2014 Brian Starr. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DetailViewController.h"

@interface ViewController : UIViewController <DetailViewControllerDelegate>

@property (strong, nonatomic) IBOutlet UITextField *textField;

@end

