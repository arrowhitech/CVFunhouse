//
//  CVFFlipsideViewController.h
//  CVFunhouse
//
//  Created by John Brewer on 3/7/12.
//  Copyright (c) 2012 Jera Design LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CVFFlipsideViewController;

@protocol CVFFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(CVFFlipsideViewController *)controller;
@end

@interface CVFFlipsideViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *flipsidePopoverArray;
}
@property (retain, nonatomic) NSMutableArray *flipsidePopoverArray;
@property (retain, nonatomic) IBOutlet UITableView *menuTable;
@property (weak, nonatomic) id <CVFFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
