// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_UserType;
@class Trading_PromotionalSaleDetailsType;
@class Trading_AmountType;

/**
 
 Contains various details about the current status of a listing. These
 values are computed by eBay and cannot be specified at listing time.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_SellingStatusType : NSObject <PicoBindable> {

@private
    NSNumber *_bidCount;
    Trading_AmountType *_bidIncrement;
    Trading_AmountType *_convertedCurrentPrice;
    Trading_AmountType *_currentPrice;
    Trading_UserType *_highBidder;
    NSNumber *_leadCount;
    Trading_AmountType *_minimumToBid;
    NSNumber *_quantitySold;
    NSNumber *_reserveMet;
    NSNumber *_secondChanceEligible;
    NSNumber *_bidderCount;
    NSString *_listingStatus;
    Trading_AmountType *_finalValueFee;
    Trading_PromotionalSaleDetailsType *_promotionalSaleDetails;
    NSNumber *_adminEnded;
    NSNumber *_soldAsBin;
    NSMutableArray *_any;

}


/**
 
 Number of bids placed so far against the item. Only applicable to
 competitive-bid item listings (Chinese auctions).
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *bidCount;

/**
 
 The minimum amount a progressive bid must be above the current high bid to be accepted. This field is only
 applicable to auction listings. The value of this field will always be '0.00' for Classified Ad and fixed-price
 listings.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *bidIncrement;

/**
 
 Converted value of the CurrentPrice in the currency of the site that
 returned this response. For active items, refresh the listing's data every 24
 hours to pick up the current conversion rates. Only returned when the item's
 CurrentPrice on the listing site is in different currency than the currency of
 the host site for the user/application making the API call. ConvertedCurrentPrice
 is not returned for Classified listings (Classified listings are not available
 on all sites).<br>
 <br>
 In multi-variation listings, this value matches the lowest-priced
 variation that is still available for sale.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *convertedCurrentPrice;

/**
 
 For auction listings, this price is the starting price or the current highest
 bid for the item if bids have been placed.
 <br><br>
 For fixed-price listings, this price is the sale price of the item.<br>
 <br>
 In multi-variation, fixed-price listings, this value matches the lowest-priced
 variation that is still available for sale.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *currentPrice;

/**
 
 For ended Chinese auction listings that have a winning bidder,
 this field is a container for the high bidder's user ID.
 For ended, single-item, basic fixed price (FixedPriceItem) and
 ended Store Inventory (StoresFixedPrice) listings,
 this field is a container for the user ID of the purchaser.
 This field isn't returned for auctions with no bids, or for active fixed price listings,
 or for active Store Inventory listings.
 In the case of PlaceOffer, for chinese auctions,
 this field is a container for the high bidder's user ID.
 In the PlaceOffer response, the following applies:
 For multiple-quantity, fixed-price listings,
 the high bidder is only returned if there is just one order line item
 (or only for the first order line item that is created).
 
 
 type : class Trading_UserType
*/
@property (nonatomic, retain) Trading_UserType *highBidder;

/**
 
 Applicable to Ad type listings only. Indicates how many leads to
 potential buyers are associated with this item. Returns 0 (zero) for listings in other formats. You must be the seller of the item to retrieve the lead count.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *leadCount;

/**
 
 Smallest amount the next bid on the item can be. Returns same value as
 Item.StartPrice (if no bids have yet been placed) or CurrentPrice plus
 BidIncrement (if at least one bid has been placed). Only applicable to
 competitive-bid item listings (Chinese auctions). Returns null for basic
 Fixed Price (FixedPriceItem), Store Inventory (StoresFixedPrice),
 and Ad type listings.
 <br><br>
 In multi-variation listings, this value matches the lowest-priced
 variation that is still available for sale.
 <br><br>
 <span class="tablenote"><strong>Note:</strong>
 As of version 619, Dutch-style (multi-item) competitive-bid auctions are deprecated.
 eBay throws an error if you submit a Dutch item listing with AddItem
 or VerifyAddItem. If you use RelistItem to update a Dutch auction listing,
 eBay generates a warning and resets the Quantity value to 1.
 </span>
 <br>
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *minimumToBid;

/**
 
 The total number of items purchased so far (in the listing's lifetime).
 Subtract this from Quantity to determine the quantity available.
 <br>
 <br>
 If the listing has Item Variations,
 then in GetItem (and related calls) and GetItemTransactions,
 Item.SellingStatus.QuantitySold contains the sum of all quantities
 sold across all variations in the listing, and  Variation.SellingStatus.QuantitySold contains the number
 of items sold for that variation.
 In GetSellerTransactions,
 Transaction.Item.SellingStatus.QuantitySold contains the number
 of items sold in that order line item.<br>
 <br>
 For order line item calls, also see Transaction.QuantityPurchased for
 the number of items purchased in the order line item.<br>
 In multi-variation listings, this value matches total quantity sold
 across all variations.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *quantitySold;

/**
 
 Indicates whether the reserve price has been met for the listing. Returns
 true if the reserve price was met or no reserve price was specified.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *reserveMet;

/**
 
 Part of the Second Chance Offer feature, indicates whether the seller can
 extend a second chance offer for the item.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *secondChanceEligible;

/**
 
 Number of bidders for an item. Only applicable to competitive-bid item listings
 (Chinese auctions). Only returned for the seller of the item.
 
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, retain) NSNumber *bidderCount;

/**
 
 Specifies an active or ended listing's status in eBay's processing workflow.
 If a listing ends with a sale (or sales), eBay needs to update the sale details
 (e.g., total price and buyer/high bidder) and the final value fee. This processing
 can take several minutes. If you retrieve a sold item and no details about the buyer/high bidder
 are returned or no final value fee is available, use this listing status information
 to determine whether eBay has finished processing the listing.
 
 
 type: string constant in Trading_ListingStatusCodeType.h
*/
@property (nonatomic, retain) NSString *listingStatus;

/**
 
 You are charged a Final Value Fee (FVF) if your item is sold, ends with a
 winning bid, or is purchased. This fee applies whether or not you actually
 complete the sale with the buyer. The Final Value Fee is returned in
 Transaction.FinalValueFee. See the eBay.com Web site online help for more
 information about the final value fee.
 <br><br>
 The Final Value Fee for fixed price format (FixedPriceItem) and Store Inventory
 (StoresFixedPrice) items is returned by GetSellerTransactions,
 GetItemTransactions, and GetOrderTransactions in a Transaction container, regardless of the listing status. For all other listing types, (excluding
 Buy It Now purchases), the Final Value Fee is returned when the listing status
 is Completed.
 <br/ > <br />
 If you request a Final Value Fee Credit, the value of Transaction.FinalValueFee
 will not change for the item if a credit is issued. (The credit only appears in
 the seller's account data.)
 
 <br>
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *finalValueFee;

/**
 
 If a seller has reduced the price of a listed item with the Promotional Price Display feature,
 this field contains the original price of the discounted item, along with the start-time
 and end-time of the discount.
 
 
 type : class Trading_PromotionalSaleDetailsType
*/
@property (nonatomic, retain) Trading_PromotionalSaleDetailsType *promotionalSaleDetails;

/**
 
 If included in the response as true, indicates that the listing was administratively
 canceled due to a violation of eBay's listing policies and that the item can be relisted
 using RelistItem. Note that GetItem returns an error (invalid item ID)
 in the response if Item.SellingStatus.AdminEnded is true and the requesting user
 is not the seller of the item.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *adminEnded;

/**
 
     If this flag appears in the <b>GetItem</b> response, the auction has ended due to the
 item being sold to a seller using the <b>Buy It Now</b> option.
 This flag is not relevant for fixed-priced listings.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *soldAsBin;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end