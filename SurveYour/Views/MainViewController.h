//
//  ViewController.h
//  SurveYour
//
//  Created by rvijayaragh on 08/10/21.
//  Copyright © 2021 roshnivijay. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "SurveYourViewModel.h"

@interface MainViewController : NSViewController{
    SurveYourViewModel *surveYourViewModel;
}
@property (weak) IBOutlet NSClipView *UpdateSurveyForms;


@end

