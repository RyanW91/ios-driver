//
//  RADesignatedPickup.h
//  Ride
//
//  Created by Roberto Abreu on 9/6/17.
//  Copyright © 2017 RideAustin.com. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "RABaseDataModel.h"
#import "RACoordinate.h"

@interface RADesignatedPickup : RABaseDataModel

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) RACoordinate *driverCoord;

@end
