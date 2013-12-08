//
//  UIControls.h
//  PhoneGap
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

#import "CDVDeprecated.h"

@interface MapKitView : CDVPlugin <MKMapViewDelegate> 
{
}

@property (nonatomic, copy) NSString *dragCallback;
@property (nonatomic, copy) NSString *buttonCallback;
@property (nonatomic, retain) UIView* childView;
@property (nonatomic, retain) MKMapView* mapView;
//@property (nonatomic, retain) UIButton*  imageButton;

- (void)createView;

- (void)showMap:(CDVInvokedUrlCommand*)command;

- (void)hideMap:(CDVInvokedUrlCommand*)command;

- (void)destroyMap:(CDVInvokedUrlCommand*)command;

- (void)clearMapPins:(CDVInvokedUrlCommand*)command;

- (void)addMapPins:(CDVInvokedUrlCommand*)command;

- (void)setMapData:(CDVInvokedUrlCommand*)command;

- (void) closeButton:(id)button;

- (void) zoomToPins: (CDVInvokedUrlCommand*)command;

@end
