//
//  SkillCell.h
//  Nugget
//
//  Created by Alexis Katigbak on 2013-10-30.
//  Copyright (c) 2013 Alexis Katigbak. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface SkillCell : UITableViewCell
    @property (nonatomic, retain) IBOutlet UILabel *skillLabel;
    @property (nonatomic, retain) IBOutlet UILabel *resultLabel;
    @property (nonatomic, retain) IBOutlet UISlider *rating;


@end
