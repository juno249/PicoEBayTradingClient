// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Type defining the <b>SellerShippingProfile</b> container, which is used in an 
 Add/Revise/Relist Trading API call to reference a Business Policies shipping policy profile.
 Business Policies shipping profiles contain detailed information on domestic and
 international shipping, including shipping service options, handling time, package
 handling costs, excluded ship-to locations, and shipping insurance information.
 <br/><br/>
 Business Policies shipping profiles are also returned in 
 <b>GetItem</b>, <b>GetMyeBaySelling<b>, and other 
 Trading calls that retrieve Item data.
 <br/><br/>
 <span class="tablenote"><b>Note:</b>
 Business Policies are not yet available for use on the eBay platform. 
 <span/>
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_SellerShippingProfileType : NSObject <PicoBindable> {

@private
    NSNumber *_shippingProfileID;
    NSString *_shippingProfileName;
    NSMutableArray *_any;

}


/**
 
 The unique identifier of a Business Policies shipping policy profile. A <b>ShippingProfileID</b> 
 and/or a <b>ShippingProfileName</b> value is used in the Add/Revise/Relist
 call to reference and use the shipping policy values of a Business Policies shipping policy
 profile. If both fields are provided and their values don't match, the <b>ShippingProfileID</b> 
 takes precedence.
 <br/><br/>
 In the "Get" calls, the <b>ShippingProfileID</b> value will always be
 returned if the listing is using a Business Policies shipping policy profile, and the <b>ShippingProfileName</b> 
 value will be returned if a name is assigned to the shipping policy profile.
 <br/><br/>
 <span class="tablenote"><b>Note:</b>
 Business Policies are not yet available for use on the eBay platform. 
 <span/>
 
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, retain) NSNumber *shippingProfileID;

/**
 
 The name of a Business Policies shipping policy profile. A <b>ShippingProfileID</b> 
 and/or a <b>ShippingProfileName</b> value is used in the Add/Revise/Relist
 call to reference and use the shipping policy values of a Business Policies shipping policy
 profile. If both fields are provided and their values don't match, the <b>ShippingProfileID</b> 
 takes precedence.
 <br/><br/>
 In the "Get" calls, the <b>ShippingProfileID</b> value will always be
 returned if the listing is using a Business Policies shipping policy profile, and the <b>ShippingProfileName</b> 
 value will be returned if a name is assigned to the shipping policy profile.
 <br/><br/>
 <span class="tablenote"><b>Note:</b>
 Business Policies are not yet available for use on the eBay platform. 
 <span/>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *shippingProfileName;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end