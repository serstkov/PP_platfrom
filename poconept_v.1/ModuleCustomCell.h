//
//  ModuleCustomCell.h
//  poconept_v.1
//
//  Created by Justas Serstkovas on 15/03/2013.
//  Copyright (c) 2013 Justas Serstkovas. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ModuleCustomCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *moduleImageView;
@property (weak, nonatomic) IBOutlet UILabel *moduleTitleLabel;
@property (weak, nonatomic) IBOutlet UITextView *moduleTextView;

@end
