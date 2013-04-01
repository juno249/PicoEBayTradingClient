// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_AmountType;

/**
 
 This type contains Calculated Shipping rules and preferences for the seller.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_CalculatedShippingPreferencesType : NSObject <PicoBindable> {

@private
    Trading_AmountType *_calculatedShippingAmountForEntireOrder;
    NSString *_calculatedShippingChargeOption;
    NSString *_calculatedShippingRateOption;
    NSString *_insuranceOption;
    NSMutableArray *_any;

}


/**
 
 DO NOT USE THIS FIELD. Calculated Shipping discount profiles are created and
 managed with SetShippingDiscountProfiles. Use GetShippingDiscountProfiles to
 retrieve Calculated Shipping discount profiles.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *calculatedShippingAmountForEntireOrder;

/**
 
 DO NOT USE THIS FIELD. Calculated Shipping discount profiles are created and
 managed with SetShippingDiscountProfiles. Use GetShippingDiscountProfiles to
 retrieve Calculated Shipping discount profiles.
 
 
 type: string constant in Trading_CalculatedShippingChargeOptionCodeType.h
*/
@property (nonatomic, retain) NSString *calculatedShippingChargeOption;

/**
 
 DO NOT USE THIS FIELD. Calculated Shipping discount profiles are created and
 managed with SetShippingDiscountProfiles. Use GetShippingDiscountProfiles to
 retrieve Calculated Shipping discount profiles.
 
 
 type: string constant in Trading_CalculatedShippingRateOptionCodeType.h
*/
@property (nonatomic, retain) NSString *calculatedShippingRateOption;

/**
 
 DO NOT USE THIS FIELD. Shipping insurance parameters are passed in through
 SetShippingDiscountProfiles and retrieved using GetShippingDiscountProfiles.
 <br><br>
 InsuranceOption is only valid on the following eBay sites: AU, FR, IT, and IN.
 
 
 type: string constant in Trading_InsuranceOptionCodeType.h
*/
@property (nonatomic, retain) NSString *insuranceOption;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end