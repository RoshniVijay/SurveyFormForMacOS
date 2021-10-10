//
//  SurveYourViewModel.m
//  SurveYour
//
//  Created by rvijayaragh on 09/10/21.
//  Copyright © 2021 roshnivijay. All rights reserved.
//

#import "SurveYourViewModel.h"

static SurveYourViewModel *privateRef = nil;

@implementation SurveYourViewModel

+(SurveYourViewModel *) GetSharedViewModel{
    if(privateRef == nil){
        privateRef = [[SurveYourViewModel alloc]init];
        
    }
    return privateRef;
}

@end
