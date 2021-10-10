//
//  DataStoreController.m
//  SurveYour
//
//  Created by rvijayaragh on 09/10/21.
//  Copyright © 2021 roshnivijay. All rights reserved.
//

#import "PlistStoreController.h"

static PlistStoreController *privateRef = nil;
NSString * const pListFileName = @"surveyStore";

@implementation PlistStoreController

- (nonnull NSArray *)GetAllSurveys {
    return nil;
}

- (nonnull NSArray *)GetSurveyForID:(int)id {
    return nil;
}

- (nonnull bool *)StoreNewSurvey {
    //1) Get the path to the documents directory
    NSString *path = [[NSBundle mainBundle] pathForResource: pListFileName ofType: @"plist"];
    NSDictionary *surveys = [NSDictionary dictionary];
    if (path) {
        
     surveys = [NSDictionary dictionaryWithContentsOfFile: path];
    }
   
    
   
    
   

    //5) Prepare the data to write
    
    
    //6) Write to plist file
    return true;
}

@end
