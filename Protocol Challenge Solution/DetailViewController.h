//
//  DetailViewController.h
//  Protocol Challenge Solution
//
//  Created by Brian Starr on 10/6/14.
//  Copyright (c) 2014 Brian Starr. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol DetailViewControllerDelegate <NSObject>

@required

-(void)didUpdateText:(NSString *)text;

@end

@interface DetailViewController : UIViewController

@property (weak, nonatomic) id <DetailViewControllerDelegate, UITextFieldDelegate> delegate;

@property (strong, nonatomic) IBOutlet UILabel *detailTextLabel;
@property (strong, nonatomic) NSString *textFromTextBox;

@property (strong, nonatomic) IBOutlet UITextField *detailViewTextField;

- (IBAction)detailUpdateButton:(id)sender;


@end
