//
//  FirstViewController.h
//  IOSFrame
//
//  Created by 安昌 on 2017/7/26.
//  Copyright © 2017年 安昌. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FirstViewUserInfo.h"

@interface FirstViewController : UIViewController

@property(nonatomic,strong) FirstViewUserInfo *userInfo;

-(void)updateView;

@end
