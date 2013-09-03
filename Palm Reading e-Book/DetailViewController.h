//
//  DetailViewController.h
//  Palm Reading e-Book
//
//  Created by Shirley Cheung on 3/9/13.
//  Copyright (c) 2013 Shirley Cheung. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
