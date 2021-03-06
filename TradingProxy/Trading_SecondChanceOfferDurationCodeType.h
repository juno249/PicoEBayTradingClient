// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>

/**
 @file
 
 This enumerated type contains the list of values that can be used by the seller to set
 the length of time that a Second Chance offer will be available to a specific bidder to
 whom the Second Chance offer was presented. The recipient of a Second Chance offer must
 purchase the Second Chance item within this time or the offer will expire. Second Chance
 offers are only applicable for closed auction listings.
 
 
 @ingroup EBayAPIInterface
*/

/**
 
 The seller specifies this value to make the Second Chance offer available to the
 bidder for one day. This value will affect the <b>EndTime</b> value
 returned in the <b>AddSecondChanceItem</b> response.
 
*/
extern NSString *const Trading_SecondChanceOfferDurationCodeType_DAYS_1;

/**
 
 The seller specifies this value to make the Second Chance offer available to the
 bidder for three days. This value will affect the <b>EndTime</b> value
 returned in the <b>AddSecondChanceItem</b> response.
 
*/
extern NSString *const Trading_SecondChanceOfferDurationCodeType_DAYS_3;

/**
 
 The seller specifies this value to make the Second Chance offer available to the
 bidder for five days. This value will affect the <b>EndTime</b> value
 returned in the <b>AddSecondChanceItem</b> response.
 
*/
extern NSString *const Trading_SecondChanceOfferDurationCodeType_DAYS_5;

/**
 
 The seller specifies this value to make the Second Chance offer available to the
 bidder for seven days. This value will affect the <b>EndTime</b> value
 returned in the <b>AddSecondChanceItem</b> response.
 
*/
extern NSString *const Trading_SecondChanceOfferDurationCodeType_DAYS_7;

/**
 
 This value is reserved for internal or future use.
 
*/
extern NSString *const Trading_SecondChanceOfferDurationCodeType_CUSTOM_CODE;
