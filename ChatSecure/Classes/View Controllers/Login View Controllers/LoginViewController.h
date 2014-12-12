//
//  LoginViewController.h
//  messenger7
//
//  Created by Matthias Ludwig on 08.12.14.
//  Copyright (c) 2014 Chris Ballinger. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OTRProtocolManager.h"
#import "MBProgressHUD.h"
#import "Strings.h"
#import "OTRConstants.h"

@interface LoginViewController : UIViewController
@property (nonatomic, strong) OTRAccount *account;


@end
