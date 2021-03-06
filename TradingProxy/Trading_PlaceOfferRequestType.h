// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractRequestType.h"


@class Trading_OfferType;
@class Trading_NameValueListArrayType;
@class Trading_AffiliateTrackingDetailsType;

/**
 
 Enables the authenticated user to to make a bid, a best offer, or
 a purchase on the item specified by the ItemID input field.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_PlaceOfferRequestType : Trading_AbstractRequestType {

@private
    Trading_OfferType *_offer;
    NSString *_itemID;
    NSNumber *_blockOnWarning;
    Trading_AffiliateTrackingDetailsType *_affiliateTrackingDetails;
    Trading_NameValueListArrayType *_variationSpecifics;

}


/**
 
 Specifies the type of offer being made. If the item is a
 competitive-bidding listing, the offer is a bid. If the item is a
 fixed-price listing, then the offer purchases the item. If the item is a
 competitive-bidding listing and the offer is of type with an active,
 unexercised Buy It Now option, then the offer can either purchase the
 item or be a bid. See the schema documentation for OfferType for details
 on its properties and their meanings.
 
 
 type : class Trading_OfferType
*/
@property (nonatomic, retain) Trading_OfferType *offer;

/**
 
 Unique item ID that identifies the item listing for which the action is being
 submitted.
 <br><br>
 If the item was listed with Variations, you must also specify
 VariationSpecifics in the request to uniquely identify the
 variant being purchased.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemID;

/**
 
 If a warning message exists and BlockOnWarning is true,
 the warning message is returned and the bid is blocked. If no warning message
 exists and BlockOnWarning is true, the bid is placed. If BlockOnWarning
 is false, the bid is placed, regardless of warning.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *blockOnWarning;

/**
 
 Container for affiliate-related tags, which enable the tracking of user
 activity. If you include AffiliateTrackingDetails in your PlaceOffer call, then
 it is possible to receive affiliate commissions based on calls made by your
 application. (See the <a href=
 "http://www.ebaypartnernetwork.com/" target="_blank">eBay Partner Network</a>
 for information about commissions.) Please note that affiliate tracking is not
 available in the Sandbox environment, and that affiliate tracking is not
 available when you make a best offer.
 
 
 type : class Trading_AffiliateTrackingDetailsType
*/
@property (nonatomic, retain) Trading_AffiliateTrackingDetailsType *affiliateTrackingDetails;

/**
 
 Name-value pairs that identify a single variation within the
 listing identified by ItemID. Required when the seller
 listed the item with Item Variations.<br>
 <br>
 If you want to buy items from multiple variations in the same
 listing, use a separate PlaceOffer request for each variation.
 For example, if you want to buy 3 red shirts and 2 black shirts
 from the same listing, use one PlaceOffer request for the
 3 red shirts, and another PlaceOffer request for the 2
 black shirts.
 
 
 type : class Trading_NameValueListArrayType
*/
@property (nonatomic, retain) Trading_NameValueListArrayType *variationSpecifics;


@end
