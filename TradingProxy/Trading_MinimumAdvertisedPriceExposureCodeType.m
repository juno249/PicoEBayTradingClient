// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import "Trading_MinimumAdvertisedPriceExposureCodeType.h"

/**
 @file
 
 Defines how the buyer is to view the discounted price for MAP items. If a seller offers an item
 for less than the specified MinimumAdvertisedPrice, the discounted price of the item cannot be
 displayed on the page containing the item. Use this field to specify how the buyer is to
 view the discounted item price. This is applicable for MAP items only.
 
*/

/**
 
 PreCheckout specifies that the buyer must click a link (or a button) to navigate to a separate
 page (or window) that displays the discount price. eBay displays the discounted item price in
 a pop-up window.
 
*/
NSString *const Trading_MinimumAdvertisedPriceExposureCodeType_PRE_CHECKOUT = @"PreCheckout";

/**
 
 DuringCheckout specifies that the discounted price must be shown on the eBay checkout
 flow page.
 
*/
NSString *const Trading_MinimumAdvertisedPriceExposureCodeType_DURING_CHECKOUT = @"DuringCheckout";

/**
 
 None means the discount price is not shown via either PreCheckout nor DuringCheckout.
 
*/
NSString *const Trading_MinimumAdvertisedPriceExposureCodeType_NONE = @"None";

/**
 
 Reserved for future use.
 
*/
NSString *const Trading_MinimumAdvertisedPriceExposureCodeType_CUSTOM_CODE = @"CustomCode";
