//
//  ViewController.h
//  OwnTracks
//
//  Created by Christoph Krey on 17.08.13.
//  Copyright (c) 2013 Christoph Krey. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <CoreData/CoreData.h>
#import <MapKit/MapKit.h>
#import <MQTTClient/MQTTClient.h>
#import "Connection.h"

@interface ViewController : UIViewController <MKMapViewDelegate, NSFetchedResultsControllerDelegate, UIActionSheetDelegate>

@end
