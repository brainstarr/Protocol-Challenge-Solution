//
//  DetailViewController.h
//  Protocol Challenge Solution
//
//  Created by Brian Starr on 10/6/14.
//  Copyright (c) 2014 Brian Starr. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *detailTextLabel;
@property (strong, nonatomic) NSString *textFromTextBox;

@end
