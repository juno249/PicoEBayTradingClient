// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>

/**
 @file
 
 Enumerated type that defines the possible reasons why an auction listing with zero bids
 is being hidden from search on the eBay site. Currently, only auction listings that have
 been determined to be duplicate listings with zero bids are hidden from search, but there
 may be other reasons to hide auction listings from search in the future.
 <br/><br/>
 This type is associated with eBay Duplicate Listings Policy, which has taken
 effect on the US, CA, CA-FR, and eBay Motors (Parts and Accessories only) sites.
 Event Tickets, Real Estate, and Motor Vehicle categories are excluded from this
 policy. For more information, read
 <a href="http://pages.ebay.com/help/policies/listing-multi.html">eBay's Duplicate Listings Policy</a> help page.
 
 
 @ingroup EBayAPIInterface
*/

/**
 
 This value indicates that the auction listing is being hidden from search on the eBay
 site because the listing has been determined by eBay to be a duplicate listing with
 zero bids.
 
*/
extern NSString *const Trading_ReasonHideFromSearchCodeType_DUPLICATE_LISTING;
