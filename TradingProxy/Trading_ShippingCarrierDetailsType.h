// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Details about type of Carrier used to ship an item.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_ShippingCarrierDetailsType : NSObject <PicoBindable> {

@private
    NSNumber *_shippingCarrierID;
    NSString *_description;
    NSString *_shippingCarrier;
    NSString *_detailVersion;
    NSDate *_updateTime;
    NSMutableArray *_any;

}


/**
 
 Numeric identifier.
 Some applications use this ID
 to look up shipping Carriers more efficiently.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *shippingCarrierID;

/**
 
 Display string that applications can use to present a list of shipping carriers in
 a more user-friendly format (such as in a drop-down list).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *description;

/**
 
 Value used for the shipping Carrier.
 
 
 type: string constant in Trading_ShippingCarrierCodeType.h
*/
@property (nonatomic, retain) NSString *shippingCarrier;

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
