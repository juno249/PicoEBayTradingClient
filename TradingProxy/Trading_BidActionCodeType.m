// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import "Trading_BidActionCodeType.h"

/**
 @file
 
 Possible bid action types or states.
 
*/

/**
 
 Unknown.
 
*/
NSString *const Trading_BidActionCodeType_UNKNOWN = @"Unknown";

/**
 
 The item is being offered (or was placed) as an auction listing.
 
*/
NSString *const Trading_BidActionCodeType_BID = @"Bid";

/**
 
 Not used.
 
*/
NSString *const Trading_BidActionCodeType_NOT_USED = @"NotUsed";

/**
 
 The offer was retracted by the user who extended the
 offer. (This can only be done on the eBay site, not via API.)
 
*/
NSString *const Trading_BidActionCodeType_RETRACTION = @"Retraction";

/**
 
 The offer was automatically retracted. (This can only be done on the eBay site, not
 via API.)
 
*/
NSString *const Trading_BidActionCodeType_AUTO_RETRACTION = @"AutoRetraction";

/**
 
 The offer was cancelled. (This can only be done on the eBay site, not via API.)
 
*/
NSString *const Trading_BidActionCodeType_CANCELLED = @"Cancelled";

/**
 
 The offer was automatically cancelled. (This can only be done on the eBay site, not
 via API.)
 
*/
NSString *const Trading_BidActionCodeType_AUTO_CANCEL = @"AutoCancel";

/**
 
 The offer placed was an absentee bid. (This can only be done on the eBay site,
 not via API.)
 
*/
NSString *const Trading_BidActionCodeType_ABSENTEE = @"Absentee";

/**
 
 The offer resulted in the successful exercise of the Buy It Now option for an
 auction listing.
 
*/
NSString *const Trading_BidActionCodeType_BUY_IT_NOW = @"BuyItNow";

/**
 
 The offer is being placed, or was placed, on a fixed-price listing.
 This value is used for fixed-price listings to purchase an item.
 In PlaceOffer, for auction listings with the Buy It Now option,
 specify 'Purchase' to buy the item.
 In the case of fixed-price listings requiring immediate payment (AutoPay enabled),
 PlaceOffer cannot be used for purchase. But for fixed-price listings with
 AutoPay that have the BestOffer option,
 PlaceOffer can be used to make an offer (but not to purchase).
 
*/
NSString *const Trading_BidActionCodeType_PURCHASE = @"Purchase";

/**
 
 Reserved for future use.
 
*/
NSString *const Trading_BidActionCodeType_CUSTOM_CODE = @"CustomCode";

/**
 
 If an item is best-offer enabled, use this value if a buyer is making a best offer on
 the item. After a buyer makes a best offer (or counter-offer, etc.), the buyer can get
 the status of the best offer (and of a possible seller-counter-offer, etc.) using the
 GetBestOffers call.
 
*/
NSString *const Trading_BidActionCodeType_OFFER = @"Offer";

/**
 
 If an item is best-offer enabled, use this value if a buyer is making a counteroffer
 to a seller's counteroffer.
 
*/
NSString *const Trading_BidActionCodeType_COUNTER = @"Counter";

/**
 
 If an item is best-offer enabled, use this value if a buyer is accepting a
 counteroffer of a seller.
 
*/
NSString *const Trading_BidActionCodeType_ACCEPT = @"Accept";

/**
 
 If an item is best-offer enabled, use this value if a buyer is declining a
 counteroffer of a seller.
 
*/
NSString *const Trading_BidActionCodeType_DECLINE = @"Decline";