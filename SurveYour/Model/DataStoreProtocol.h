//
//  DataStoreProtocol.h
//  SurveYour
//
//  Created by rvijayaragh on 09/10/21.
//  Copyright © 2021 roshnivijay. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol DataStoreProtocol <NSObject>

-(NSArray*) StoreNewSurvey;
-(NSArray*) GetAllSurveys;
-(NSArray*) GetSurveyForID:(int) id;

@end

NS_ASSUME_NONNULL_END
