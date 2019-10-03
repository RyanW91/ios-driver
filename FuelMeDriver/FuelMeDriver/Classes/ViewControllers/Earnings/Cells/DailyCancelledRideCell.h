//
//  DailyCancelledRideCell.h
//  RideDriver
//
//  Created by Abdul Rehman on 18/08/2016.
//  Copyright © 2016 FuelMe LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DailyBasicCell.h"
#import "RideFareDataModel.h"

@interface DailyCancelledRideCell : UITableViewCell

//Delegate
@property (weak, nonatomic) id<DailyEarningsCellDelegate> delegate;

@property (strong, nonatomic) NSMutableArray *trips;
@property (copy, nonatomic) ExpandBlock expandBlock;

//IBOutlets

//Header
@property (weak, nonatomic) IBOutlet UIView *topLine;
@property (weak, nonatomic) IBOutlet UIView *headerView;
@property (weak, nonatomic) IBOutlet UILabel *timeLabel;
@property (weak, nonatomic) IBOutlet UILabel *carLabel;
@property (weak, nonatomic) IBOutlet UILabel *earningLabel;
@property (weak, nonatomic) IBOutlet UIImageView *inactiveIcon;
@property (weak, nonatomic) IBOutlet UIImageView *activeIcon;
@property (weak, nonatomic) IBOutlet UIButton *expandButton;

//Map
@property (weak, nonatomic) IBOutlet UIView *mapViewContainer;
@property (weak, nonatomic) IBOutlet UIImageView *mapImageView;

//Ride Location Details
@property (weak, nonatomic) IBOutlet UIView *rideView;
@property (weak, nonatomic) IBOutlet UILabel *startTimeLabel;
@property (weak, nonatomic) IBOutlet UILabel *startAddressLabel;
@property (weak, nonatomic) IBOutlet UILabel *endTimeLabel;
@property (weak, nonatomic) IBOutlet UILabel *endAddressLabel;
@property (strong, nonatomic) IBOutlet NSLayoutConstraint *constraintHeightRideView;


//Earnings Detail
@property (weak, nonatomic) IBOutlet UIView *earningsView;
@property (weak, nonatomic) IBOutlet UILabel *baseFareValue;
@property (weak, nonatomic) IBOutlet UILabel *distanceFareValue;
@property (weak, nonatomic) IBOutlet UILabel *timeFareValue;
@property (weak, nonatomic) IBOutlet UILabel *RAFeeValue;
@property (weak, nonatomic) IBOutlet UILabel *totalFareValue;
@property (weak, nonatomic) IBOutlet UILabel *yourEarningValue;

//Support
@property (weak, nonatomic) IBOutlet UIButton *contactSupport;

//Properties
@property (strong, nonatomic) NSString *mapURL;
//@property (strong, nonatomic) CLLocation *iniLocation;
//@property (strong, nonatomic) CLLocation *endLocation;
@property (strong, nonatomic) RideFareDataModel *currentRide;


//Actions
- (IBAction)contactUsAction:(UIButton *)sender;
- (IBAction)toggleAction:(UIButton *)sender;

//Helper Functions
- (void)configureCellWithRide:(RideFareDataModel*)ride;
- (void)toggleExpand:(BOOL)expand;


@end
