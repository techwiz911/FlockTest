//
//  DetailViewController.h
//  FlockTest
//
//  Created by Shriram Rahatgaonkar on 6/10/16.
//  Copyright © 2016 Shriram Rahatgaonkar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

