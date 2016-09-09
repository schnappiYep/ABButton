//
//  ABButton.h
//  StatePay
//
//  Created by Jellyfish on 16/7/6.
//  Copyright © 2016年 keping. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ABButton : UIButton


- (ABButton *)buttonWithAboveLabelTitle:(NSString *)aStr belowLabelTitle:(NSString *)bStr;
/** aboveLabel */
@property (nonatomic, weak) UILabel *aboveL;
/** belowLabel */
@property (nonatomic, weak) UILabel *belowL;

@end
