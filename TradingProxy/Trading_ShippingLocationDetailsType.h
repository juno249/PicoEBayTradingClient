// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Details about a region or location to which the seller is willing to ship.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_ShippingLocationDetailsType : NSObject <PicoBindable> {

@private
    NSString *_shippingLocation;
    NSString *_description;
    NSString *_detailVersion;
    NSDate *_updateTime;
    NSMutableArray *_any;

}


/**
 
 Short name or abbreviation for a region (e.g., Asia) or location (e.g. Japan).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *shippingLocation;

/**
 
 Display string that applications can use to present a list of shipping locations in
 a more user-friendly format (such as in a drop-down list). This field is localized
 in the language of the site.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *description;

/**
 
 Returns the latest version number for this field. The version can be
 used to determine if and when to refresh cached client data.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *detailVersion;

/**
 
 Gives the time in GMT that the feature flags for the details were last
 updated. This timestamp can be used to determine if and when to refresh
 cached client data.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *updateTime;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
