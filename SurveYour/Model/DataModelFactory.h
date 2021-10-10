//
//  DataModelController.h
//  SurveYour
//
//  Created by rvijayaragh on 09/10/21.
//  Copyright © 2021 roshnivijay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PlistStoreController.h"

NS_ASSUME_NONNULL_BEGIN

@interface DataModelFactory : NSObject

+(DataModelFactory *) GetSharedFactory;

-(PlistStoreController*) CreateDataStoreController;

@end

NS_ASSUME_NONNULL_END
