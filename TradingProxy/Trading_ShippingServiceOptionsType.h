// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_AmountType;

/**
 
 Container consisting of shipping costs and other details related to a domestic
 shipping service. An exception to the domestic shipping service rule is seen in the
 ShippingServiceSelected container returned under the Order and Transaction
 containers in order and order line item retrieval calls such as GetOrders or
 GetItemTransactions. In this scenario, the SelectedShippingService container
 consists of either domestic or international shipping service data, based on the
 selected service according to the buyer's shipping address.
 <br/><br/>
 If one or more international shipping services are provided, the
 seller must specify at least one domestic shipping service as well.
 <br/><br/>
             <span class="tablenote">
             <strong>Note:</strong> For GetItemTransactions and GetSellerTransactions, this container does not return accurate shipping service and cost information for multiple line item orders. Use GetOrders instead, and provide the order's combined <strong>OrderID</strong> to retrieve this information.
             </span>
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_ShippingServiceOptionsType : NSObject <PicoBindable> {

@private
    Trading_AmountType *_shippingInsuranceCost;
    NSString *_shippingService;
    Trading_AmountType *_shippingServiceCost;
    Trading_AmountType *_shippingServiceAdditionalCost;
    NSNumber *_shippingServicePriority;
    NSNumber *_expeditedService;
    NSNumber *_shippingTimeMin;
    NSNumber *_shippingTimeMax;
    Trading_AmountType *_shippingSurcharge;
    NSNumber *_freeShipping;
    NSNumber *_localPickup;
    Trading_AmountType *_importCharge;
    NSMutableArray *_any;

}


/**
 
 The insurance cost associated with shipping a single item
 with this shipping service. Exception: for GetItemShipping,
 this is proportional to QuantitySold. If the item has not yet been
 sold, insurance information cannot be calculated and the value is
 0.00. For calculated shipping only.
 Also applicable to Half.com (for GetOrders).
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *shippingInsuranceCost;

/**
 
 A shipping service option being offered by the seller to ship an item to a
 buyer. For a list of valid ShippingService values, <b>GeteBayDetails</b>
 with <b>DetailName</b> set to <b>ShippingServiceDetails</b>. The
 ShippingServiceDetails.ValidForSellingFlow flag must also be present. Otherwise,
 that particular shipping service option is no longer valid and cannot be offered
 to buyers through a listing.
 <br><br>
 To view the full list of domestic shipping service options in the response, look for the
 ShippingServiceDetails.ShippingService fields. Domestic shipping service options will
 not have a InternationalService=true field, as this indicates that the ShippingService
 value is an International shipping service option.
 <br><br>
 For flat and calculated shipping.
 Also applicable to Half.com (for GetOrders).
 <br><br>
 If there are two or more services and one is "pickup", "pickup"
 must not be specified as the first service.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *shippingService;

/**
 
 The meaning of this element depends on the call and on whether flat or
 calculated shipping has been selected. (For example, it could be the
 cost to ship a single item, the cost to ship all items, or the cost to ship
 just the first of many items, with ShippingServiceAdditionalCost accounting
 for the rest.) When returned by <strong>GetItemShipping</strong>, it includes the packaging and
 handling cost. For flat and calculated shipping.
 <br>
 <br>
 If a shipping service has been specified (even LocalPickup), GetItem returns
 the shipping service cost, even if the cost is zero. Otherwise, cost is not
 returned.
 <br>
 <br>
 If this is for calculated shipping for a listing that has not
 yet ended, note that the cost cannot be determined until the listing
 has ended and the buyer has specified a postal code.
 <br>
 <br>
 For <strong>GetItemShipping</strong>, promotional shipping savings is reflected in the cost, if
 applicable. If the promotional shipping option is lower than other shipping
 services being offered, the savings is reflected in the returned shipping
 cost.
 The shipping service named Promotional Shipping Service (or whatever is
 the localized name for it) is included among the shipping services.
 If the promotional shipping cost is lower than the cost of other shipping
 services being offered, it is presented first in the list. (The LOWEST shipping
 service cost is always presented first, regardless of whether there is
 promotional shipping.)
 <br>
 <br>
    For <strong>GetMyeBaySelling</strong>, ShippingServiceCost under the SoldList and DeletedFromSoldList containers returns the cost of the  domestic leg of a Global Shipping Program shipment (to the international shipping provider's warehouse).
    <br>
    <br>
 Also applicable to Half.com (for GetOrders).
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *shippingServiceCost;

/**
 
 The cost of shipping each additional item beyond the first item. For input,
 this is required if the listing is for multiple items. For single-item
 listings, it should be zero (or is defaulted to zero if not provided).
 For flat shipping only.
 Not applicable to Half.com.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *shippingServiceAdditionalCost;

/**
 
 This integer value controls the order (relative to other shipping services) in
 which the corresponding ShippingService will appear in the View Item and
 Checkout page. Sellers can specify up to four domestic shipping services (with
 four ShippingServiceOptions containers), so valid values are 1, 2, 3, and 4. A
 shipping service with a ShippingServicePriority value of 1 appears at the top.
 Conversely, a shipping service with a ShippingServicePriority value of 4 appears
 at the bottom of a list of four shipping service options.
 <br><br>
 This field is applicable to Flat and Calculated shipping. This field is not
 applicable to Half.com listings.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *shippingServicePriority;

/**
 
 Indicates whether the service is an expedited shipping service. See Enabling Get It Fast.
 Not applicable to Half.com.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *expeditedService;

/**
 
 The minimum guaranteed number of days in which the shipping carrier
 can ship an item (not including the time it takes the seller to
 deliver the item to the shipping carrier). See Enabling Get It Fast.
 Not applicable to Half.com.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *shippingTimeMin;

/**
 
 The maximum guaranteed number of days the shipping carrier will
 take to ship an item (not including the time it takes the seller to
 deliver the item to the shipping carrier). See Enabling Get It Fast.
 Not applicable to Half.com.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *shippingTimeMax;

/**
 
 An additional fee to charge US buyers who have the item shipped via UPS or FedEx to Alaska, Hawaii
 or Puerto Rico. Can only be assigned a value for the eBay US site and for
 items in the Parts and Accessories category of the eBay Motors site. Only returned if set.
 If some line items in an order have a surcharge, surcharge is added
 only for those line items.
 Flat rate shipping only.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *shippingSurcharge;

/**
 
 A seller offers free shipping by setting FreeShipping to true. This free
 shipping applies only to the first specified domestic shipping service. (It is
 ignored if set for any other shipping service.) If the seller has required
 shipping insurance as part of shipping (the seller set InsuranceOption to
 Required) and then the seller specified FreeShipping, eBay sets the insurance
 cost to 0.00. However, if the seller made shipping insurance optional, eBay
 preserves the cost of shipping insurance; it is up to the buyer whether to buy
 shipping insurance, regardless of whether the seller specified FreeShipping.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *freeShipping;

/**
 
          The LocalPickup flag is used by the GetMyEbayBuying and GetMyEbaySelling calls to indicate whether the buyer has selected local pickup as the shipping option or the seller has specified local pickup as the first shipping option.
            The LocalPickup flag can also be used with other fields to indicate if there is  no fee for local pickup.  For example, if the LocalPickup flag is used with the ShippingServiceOptions and ShippingServiceCost fields, the seller can indicate that local pickup is an available option and that no is fee charged. This is the equivalent of free shipping.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *localPickup;

/**
 
 The total cost of customs and taxes for the international leg of an order shipped using the Global Shipping Program. This amount is calculated and supplied for each item by the international shipping provider when a buyer views the item properties.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *importCharge;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
