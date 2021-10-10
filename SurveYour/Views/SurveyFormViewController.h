//
//  SurveyFormViewController.h
//  SurveYour
//
//  Created by rvijayaragh on 09/10/21.
//  Copyright © 2021 roshnivijay. All rights reserved.
//

#import <Cocoa/Cocoa.h>

NS_ASSUME_NONNULL_BEGIN

@interface SurveyFormViewController : NSViewController
- (IBAction)OnSubmitClicked:(NSButton *)sender;
- (IBAction)OnResetClicked:(NSButton *)sender;
- (IBAction)OnExitClicked:(NSButton *)sender;

@end

NS_ASSUME_NONNULL_END
