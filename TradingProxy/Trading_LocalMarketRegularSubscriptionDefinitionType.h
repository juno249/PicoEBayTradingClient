// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Defines the LocalMarketRegularSubscription feature. If this field
 is present, the corresponding feature applies to the category. The
 field is returned as an empty element (i.e., a boolean value is not
 returned). A subscription for Local Market for Vehicles will be
 returned by GetUser if a dealer has subscribed to any of the following
 Local Market Regular sub-types: Vehicles Regular Six Months,
 Vehicles Regular Special Promotion, Vehicles Regular Multistore
 Level S, Vehicles Regular Multistore Level M, or Vehicles Regular
 Multistore Level L. Each of these sub-types has a separate discount
 and billing cycle.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_LocalMarketRegularSubscriptionDefinitionType : NSObject <PicoBindable> {

@private
    NSMutableArray *_any;

}


/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
