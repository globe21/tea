//
//  Copyright (c) 2014 Infincia LLC. All rights reserved.
//

@import UIKit;

#import "SteepController.h"
#import "TimerViewController.h"
#import "IASKAppSettingsViewController.h"
#import "IASKSettingsReader.h"

@interface MakeTeaViewController : UITableViewController

<UITableViewDelegate,
UITableViewDataSource,
UIPickerViewDataSource,
UIPickerViewDelegate,
UITextFieldDelegate,
SteepControllerDelegate,
IASKSettingsDelegate>


@end

