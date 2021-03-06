// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractRequestType.h"



/**
 
 Retrieves Theme and Layout specifications for the display of an item's description.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_GetDescriptionTemplatesRequestType : Trading_AbstractRequestType {

@private
    NSString *_categoryID;
    NSDate *_lastModifiedTime;
    NSNumber *_motorVehicles;

}


/**
 
 The category for which to retrieve templates. Enter any
 category ID, including Motors vehicle categories. This
 is ignored if you also send MotorVehicles.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *categoryID;

/**
 
 If specified, only those templates modified on or after the
 specified date are returned. If not specified, all templates are returned.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *lastModifiedTime;

/**
 
 Indicates whether to retrieve templates for motor vehicle
 categories for eBay Motors (site 100). If true, templates
 are returned for motor vehicle categories. If false,
 templates are returned for non-motor vehicle categories
 such as Parts and Accessories. If included as an input field (whether true or false), this overrides any value provided for CategoryID.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *motorVehicles;


@end
