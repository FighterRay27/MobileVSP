//
//  DeliveryCompanyPickerViewController.h
//  MobileVSP
//
//  Created by FighterRay on 2017/5/24.
//  Copyright © 2017年 FighterRay. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^SubmitButtonBlock)(NSString *companyName);

@interface DeliveryCompanyPickerViewController : UIViewController

@property (weak, nonatomic) IBOutlet UICollectionView *pickerCollectionView;
@property (strong, nonatomic) NSMutableArray *data;
@property (strong, nonatomic) SubmitButtonBlock submitButton;

@end
