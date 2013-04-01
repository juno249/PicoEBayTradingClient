// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>

/**
 @file
 
 Enumerated type that defines the list of possible actions that a seller can
 take to expedite the release of funds for an order into their account.
 
 
 @ingroup EBayAPIInterface
*/

/**
 
 This value indicates that there is an open eBay Buyer Protection case
 involving the seller and the item. The seller must address and get
 the case resolved before the funds can be scheduled for release to the
 seller's account. See the
 <a href="http://developer.ebay.com/DevZone/resolution-case-management/Concepts/ResoCaseAPIGuide.html">Resolution Case Management API User Guide</a>
 for information about retrieving and managing eBay Buyer Protection cases.
 
*/
extern NSString *const Trading_RequiredSellerActionCodeType_RESOLVEE_BP_CASE;

/**
 
 This value indicates that the seller must mark the order line item as shipped to expedite
 the release of funds into their account. The seller can use the <b>CompleteSale</b>
 call to mark an item as shipped. If an order line item is marked as shipped, it is possible
 that the seller's funds for the order will be released as soon as seven days after the latest
 estimated delivery date.
 
*/
extern NSString *const Trading_RequiredSellerActionCodeType_MARK_AS_SHIPPED;

/**
 
 This value indicates that the seller should contact eBay Customer Support to discover
 the next required action to expedite the release of funds into their account.
 
*/
extern NSString *const Trading_RequiredSellerActionCodeType_CONTACTE_BAY_CS;

/**
 
 This value indicates that the seller must resolve the PayPal Buyer Protection case filed
 against the order line item to expedite the release of funds into their account.
 
*/
extern NSString *const Trading_RequiredSellerActionCodeType_RESOLVE_PPP_ICASE;

/**
 
 This value is only applicable to German and Austrian sellers who are subject to  must set up a valid payout account in order
 to receive seller payouts.
 
*/
extern NSString *const Trading_RequiredSellerActionCodeType_SETUP_PAYOUT_METHOD;

/**
 
 This value is not currently applicable since the new eBay Payment Process for DE and AT
 sellers has been rolled back indefinitely.
 
         
        
*/
extern NSString *const Trading_RequiredSellerActionCodeType_UPDATE_PAYOUT_METHOD;

/**
 
 This value is not currently applicable since the new eBay Payment Process for DE and AT
 sellers has been rolled back indefinitely.
 
         
        
*/
extern NSString *const Trading_RequiredSellerActionCodeType_NONE;

/**
 
 This value indicates that the seller must provide the buyer the tracking information for
 the order line item to expedite the release of funds into their account. The seller can
 use the <b>CompleteSale</b> call to provide tracking information for an
 order line item. If the tracking information for an order line item is provided, it is
 possible that the seller's funds for the order will be released as soon as three days
 after eBay has confirmed that the item has been delivered.
 
*/
extern NSString *const Trading_RequiredSellerActionCodeType_UPLOAD_TRACKING_INFO;

/**
 
 This value indicates that the buyer has not received the item, and the buyer has contacted
 the seller through the eBay system in an effort to resolve the issue with the seller. The
 seller must make it right with the buyer in order to expedite the release of funds into
 their account.
 
*/
extern NSString *const Trading_RequiredSellerActionCodeType_RESOLVE_BUYER_MESSAGE_INR;

/**
 
 This value indicates that the buyer has received the item, but the item is not as
 described in the listing; hence, the buyer has contacted the seller through the eBay
 system in an effort to resolve the issue with the seller. The seller must make it right
 with the buyer in order to expedite the release of funds into their account.
 
*/
extern NSString *const Trading_RequiredSellerActionCodeType_RESOLVE_BUYER_MESSAGE_SNAD;

/**
 
 This value is reserved for internal or future use.
 
*/
extern NSString *const Trading_RequiredSellerActionCodeType_CUSTOM_CODE;
