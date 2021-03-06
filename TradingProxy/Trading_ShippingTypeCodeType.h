// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>

/**
 @file
 
 The shipping cost model offered by the seller.
 
 
 @ingroup EBayAPIInterface
*/

/**
 
 Flat shipping model: the seller establishes the cost
 of shipping and cost of shipping insurance, regardless of
 what any buyer-selected shipping service might charge the
 seller.
 
*/
extern NSString *const Trading_ShippingTypeCodeType_FLAT;

/**
 
 Calculated shipping model: the cost of shipping is
 determined in large part by the seller-offered and
 buyer-selected shipping service. The seller might assess an
 additional fee via PackagingHandlingCosts.
 
*/
extern NSString *const Trading_ShippingTypeCodeType_CALCULATED;

/**
 
 Freight shipping model. Available only for US domestic shipping. The cost of shipping is determined by a third party, FreightQuote.com, based on the item location (zip code).
 <br/><br/>
 Currently, Freight can be specified only on input via eBay Web site, not via API.
 
*/
extern NSString *const Trading_ShippingTypeCodeType_FREIGHT;

/**
 
 Free shipping.
 This field is output-only so if you want to use AddItem to specify a free
 Shipping Cost, specify 0 in
 Item.ShippingDetails.ShippingServiceOptions.ShippingServiceCost.
 
*/
extern NSString *const Trading_ShippingTypeCodeType_FREE;

/**
 
 The seller did not specify the shipping type.
 
*/
extern NSString *const Trading_ShippingTypeCodeType_NOT_SPECIFIED;

/**
 
 The seller specified one or more flat domestic shipping services
 and one or more calculated international shipping services.
 
*/
extern NSString *const Trading_ShippingTypeCodeType_FLAT_DOMESTIC_CALCULATED_INTERNATIONAL;

/**
 
 The seller specified one or more calculated domestic shipping services
 and one or more flat international shipping services.
 
*/
extern NSString *const Trading_ShippingTypeCodeType_CALCULATED_DOMESTIC_FLAT_INTERNATIONAL;

/**
 
 Freight shipping model: freight shipping may be used when flat or calculated shipping cannot be used due to the greater weight of the item.
 <br/><br/>
 Currently, FreightFlat is available only for the US, UK, AU, CA and CAFR sites, and only for domestic shipping. On the US site, FreightFlat applies to shipping with carriers that are not affiliated with eBay. For details about freight shipping, see "Specifying Freight Shipping" in the Shipping chapter of the User's Guide.
 
*/
extern NSString *const Trading_ShippingTypeCodeType_FREIGHT_FLAT;

/**
 
 Reserved for future use.
 
*/
extern NSString *const Trading_ShippingTypeCodeType_CUSTOM_CODE;
