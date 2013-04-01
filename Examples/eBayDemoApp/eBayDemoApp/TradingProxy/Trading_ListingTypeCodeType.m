// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import "Trading_ListingTypeCodeType.h"

/**
 @file
 
 Specifies the selling format used for a listing.
 
*/

/**
 
 Unknown or undefined auction type. Applicable to
 user preferences and other informational use cases.
 
*/
NSString *const Trading_ListingTypeCodeType_UNKNOWN = @"Unknown";

/**
 
 Single-quantity online auction format.
 A Chinese auction has a Quantity of 1. Buyers engage in competitive bidding,
 although Buy It Now may be offered as long as no bids have been placed.
 Online auctions are listed on eBay.com, and they are also listed in
 the seller's eBay Store if the seller is a Store owner.
 
*/
NSString *const Trading_ListingTypeCodeType_CHINESE = @"Chinese";

NSString *const Trading_ListingTypeCodeType_DUTCH = @"Dutch";

NSString *const Trading_ListingTypeCodeType_LIVE = @"Live";

/**
 
 An optional input parameter used with GetMyeBaySelling. When used in
 the request, returns items of competitive-bid auctions.
 
*/
NSString *const Trading_ListingTypeCodeType_AUCTION = @"Auction";

/**
 
 Advertisement to solicit inquiries on listings such as real estate. Permits
 no bidding on that item, service, or property. To express interest, a buyer
 fills in a contact form that eBay forwards to the the seller as a lead. This
 format does not enable buyers and sellers to transact online through eBay,
 and eBay Feedback is not available for ad format listings.
 
*/
NSString *const Trading_ListingTypeCodeType_AD_TYPE = @"AdType";

NSString *const Trading_ListingTypeCodeType_STORES_FIXED_PRICE = @"StoresFixedPrice";

/**
 
 Second chance offer made to a non-winning bidder on an ended listing.
 A seller can make an offer to a non-winning bidder when either the winning bidder
 has failed to pay for an item or the seller has a duplicate of the item.
 A seller can create a Second Chance Offer immediately after a listing ends and up to
 60 days after the end of the listing. eBay does not charge an Insertion Fee,
 but if the bidder accepts the offer, the regular Final Value Fee is charged.
 In the case of an Unpaid Item, the seller should ensure that everything has
 been done to resolve the issue with the winning bidder before sending a
 Second Chance Offer to another bidder. See the Unpaid Items Process for details.
 Make sure you're aware of other rules and restrictions surrounding Second Chance Offers.
 Use AddSecondChanceItem to submit Second Chance Offers.
 Listed on eBay, but does not appear when browsing or searching listings.
 
*/
NSString *const Trading_ListingTypeCodeType_PERSONAL_OFFER = @"PersonalOffer";

/**
 
             A basic fixed-price item format. Bids do not occur.
             The quantity of items is one or more.
             <br><br>
             Also known as Buy It Now Only on some sites (not to be confused with the BuyItNow option that
             is available for auctions).
             <br><br>
             Sellers must meet certain feedback requirements and/or be ID Verified to use this format.
             See Minimum Feedback Requirements for Various Features in the Trading Web Services guide.
             <br><br>
             Fixed-price listings are listed on eBay.com, and they are listed in
             the seller's eBay Store if the seller is a Store owner.
             Stores fixed price items will be treated as basic
             fixed-price items. Permitted durations of 30 days
             and GTC are now available for store and non-store subscribers (in addition
             to the existing durations of 3, 5, 7, and 10 days).
           
*/
NSString *const Trading_ListingTypeCodeType_FIXED_PRICE_ITEM = @"FixedPriceItem";

/**
 
 Half.com listing (item is listed on Half.com, not on eBay).
 You must be a registered Half.com seller to use this format.
 
*/
NSString *const Trading_ListingTypeCodeType_HALF = @"Half";

/**
 
 Lead Generation format (advertisement-style listing to solicit inquiries or offers, no bidding or fixed price, listed on eBay).
 
*/
NSString *const Trading_ListingTypeCodeType_LEAD_GENERATION = @"LeadGeneration";

NSString *const Trading_ListingTypeCodeType_EXPRESS = @"Express";

/**
 
 Reserved for internal or future use. You can ignore Shopping.com items in your results.
 
*/
NSString *const Trading_ListingTypeCodeType_SHOPPING = @"Shopping";

/**
 
 Reserved for internal or future use.
 
*/
NSString *const Trading_ListingTypeCodeType_CUSTOM_CODE = @"CustomCode";
