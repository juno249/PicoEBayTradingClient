// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_SellerPaymentProfileType;
@class Trading_SellerShippingProfileType;
@class Trading_SellerReturnProfileType;

/**
 
 Type defining the <b>SellerProfiles</b> container, which consists of references
 to a seller's payment, shipping, and/or return policy profiles.
 <br/><br/>
 <span class="tablenote"><b>Note:</b>
 Business Policies are not yet available for use on the eBay platform.
 <span/>
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_SellerProfilesType : NSObject <PicoBindable> {

@private
    Trading_SellerShippingProfileType *_sellerShippingProfile;
    Trading_SellerReturnProfileType *_sellerReturnProfile;
    Trading_SellerPaymentProfileType *_sellerPaymentProfile;
    NSMutableArray *_any;

}


/**
 
 The <b>SellerShippingProfile</b> container is used in an Add/Revise/Relist
 Trading API call to reference and use the values of a Business Policies shipping policy
 profile. Business Policies shipping profiles contain detailed information on
 domestic and international shipping, including shipping service options, handling
 time, package handling costs, excluded ship-to locations, and shipping insurance
 information.
 <br/><br/>
 Business Policies shipping profiles are also returned in
 <b>GetItem</b>, <b>GetMyeBaySelling</b>, and other
 Trading calls that retrieve Item data.
 <br/><br/>
 <span class="tablenote"><b>Note:</b>
 Business Policies are not yet available for use on the eBay platform.
 <span/>
 
 
 type : class Trading_SellerShippingProfileType
*/
@property (nonatomic, retain) Trading_SellerShippingProfileType *sellerShippingProfile;

/**
 
 The <b>SellerReturnProfile</b> container is used in an Add/Revise/Relist
 Trading API call to reference and use the values of a Business Policies return policy
 profile. Business Policies return policy profiles contain detailed information on
 the seller's return policy, including the refund option, how many days the buyer has
 to return the item for a refund, warranty information, and restocking fee (if any).
 <br/><br/>
 Business Policies return policy profiles are also returned in
 <b>GetItem</b>, <b>GetMyeBaySelling</b>, and other
 Trading calls that retrieve Item data.
 <br/><br/>
 <span class="tablenote"><b>Note:</b>
 Business Policies are not yet available for use on the eBay platform.
 
 
 type : class Trading_SellerReturnProfileType
*/
@property (nonatomic, retain) Trading_SellerReturnProfileType *sellerReturnProfile;

/**
 
 The <b>SellerPaymentProfile</b> container is used in an Add/Revise/Relist
 Trading API call to reference and use the values of a Business Policies payment
 profile. Business Policies payment profiles contain accepted payment methods, a
 flag to set up the immediate payment feature, a payment instructions field, and a
 field to specify the seller's PayPal email address.
 <br/><br/>
 Business Policies payment profiles are also returned in
 <b>GetItem</b>, <b>GetMyeBaySelling</b>, and other
 Trading calls that retrieve Item data.
 <br/><br/>
 <span class="tablenote"><b>Note:</b>
 Business Policies are not yet available for use on the eBay platform.
 
 
 type : class Trading_SellerPaymentProfileType
*/
@property (nonatomic, retain) Trading_SellerPaymentProfileType *sellerPaymentProfile;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
