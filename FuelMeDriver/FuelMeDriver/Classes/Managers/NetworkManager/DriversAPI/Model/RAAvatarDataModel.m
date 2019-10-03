//
//  RAAvatarDataModel.m
//  RideDriver
//
//  Created by Theodore Gonzalez on 8/30/17.
//  Copyright © 2017 FuelMe LLC. All rights reserved.
//

#import "RAAvatarDataModel.h"

@implementation RAAvatarDataModel
+(NSDictionary *)JSONKeyPathsByPropertyKey {
    return
    @{
      @"modelID" : @"id",
      @"type"    : @"type",
      @"active"  : @"active"
      };
}
@end
