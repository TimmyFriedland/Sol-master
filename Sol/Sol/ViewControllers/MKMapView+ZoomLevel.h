//
//  MKMapView+ZoomLevel.h
//  Sol
//
//  Created by BiGapps Interactive on 7/23/15.
//  Copyright (c) 2015 Comyar Zaheri. All rights reserved.
//

#import <MapKit/MapKit.h>

@interface MKMapView (ZoomLevel)

- (void)setCenterCoordinate:(CLLocationCoordinate2D)centerCoordinate
                  zoomLevel:(NSUInteger)zoomLevel
                   animated:(BOOL)animated;

@end