// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>

/**
 @file
 
 Enumerated type that contains the list of possible values that can be returned
 in the PaymentHoldStatus container.
 
 
 @ingroup EBayAPIInterface
*/

/**
 
 This value indicates a possible issue with a buyer. If this value is returned,
 the TransactionArray.Transaction.SellerPaidStatus field is returned as NotPaid
 in GetMyeBaySelling, and the TransactionArray.Transaction.BuyerPaidStatus field
 is returned as PaidWithPayPal in GetMyeBayBuying.
 
*/
extern NSString *const Trading_PaymentHoldStatusCodeType_PAYMENT_REVIEW;

/**
 
 This value indicates a possible issue with a seller. If this value is returned,
 the TransactionArray.Transaction.SellerPaidStatus field is returned as
 PaidWithPayPal in GetMyeBaySelling, and the
 TransactionArray.Transaction.BuyerPaidStatus field is returned as PaidWithPayPal
 in GetMyeBayBuying.
 
*/
extern NSString *const Trading_PaymentHoldStatusCodeType_MERCHANT_HOLD;

/**
 
 This value indicates that a payment hold on the item has been released.
 
*/
extern NSString *const Trading_PaymentHoldStatusCodeType_RELEASED;

/**
 
 This value indicates that there is no payment hold on the item.
 
*/
extern NSString *const Trading_PaymentHoldStatusCodeType_NONE;

/**
 
 This value indicates that there is a "new seller hold" on the item. PayPal
 may hold payments to a new seller for up to 21 days.
 Sellers are
 considered "new" until they have met all three criteria below:
 <ul>
 <li>More than 90 days have passed since first successful sale</li>
 <li>More than 25 domestic sales</li>
 <li>More than $250.00 in total sales</li>
 </ul>
 
*/
extern NSString *const Trading_PaymentHoldStatusCodeType_NEW_SELLER_HOLD;

/**
 
 This value indicates that there is a payment hold on the item.
 
*/
extern NSString *const Trading_PaymentHoldStatusCodeType_PAYMENT_HOLD;

/**
 
 This value indicates that the process for the release of funds for the
 order has been initiated.
 
*/
extern NSString *const Trading_PaymentHoldStatusCodeType_RELEASE_PENDING;

/**
 
 This value indicates that the funds are available in the seller's PayPal
 account.
 
*/
extern NSString *const Trading_PaymentHoldStatusCodeType_RELEASE_CONFIRMED;

/**
 
 This value indicates that the payout distribution to the seller's account failed.
 This value is only applicable to DE/AT sellers subject to the new eBay payment
 process.
 
*/
extern NSString *const Trading_PaymentHoldStatusCodeType_RELEASE_FAILED;

/**
 
 This value is reserved for internal or future use.
 
*/
extern NSString *const Trading_PaymentHoldStatusCodeType_CUSTOM_CODE;