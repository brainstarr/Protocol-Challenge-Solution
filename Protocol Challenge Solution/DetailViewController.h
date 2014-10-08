//
//  DetailViewController.h
//  Protocol Challenge Solution
//
//  Created by Brian Starr on 10/6/14.
//  Copyright (c) 2014 Brian Starr. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol didUpdateText <NSObject>

@required



@end

@interface DetailViewController : UIViewController

@property (weak, nonatomic)NSString *text;

@property (strong, nonatomic) IBOutlet UILabel *detailTextLabel;
@property (strong, nonatomic) NSString *textFromTextBox;

@property (strong, nonatomic) IBOutlet UITextField *detailViewTextField;

- (IBAction)detailUpdateButton:(id)sender;


@end
