// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>

/**
 @file
 
 Enumerated type that indicates whether or not a new DE or AT seller has accepted the
 supplement user agreement related to the new payment process, and if they have accepted the agreement,
 whether or not their account is ramped up in the new payment process.
 
 
 @ingroup EBayAPIInterface
*/

/**
 
 This value indicates that the DE or AT seller has accepted the supplemental user agreement
 related to the new payment process, but the new payment process has yet to be
 fully implemented on the seller's account.
 
*/
extern NSString *const Trading_SellereBayPaymentProcessStatusCodeType_ACCEPTED_UA;

/**
 
 This value indicates that the DE or AT seller has yet to accept the supplemental user agreement related to
 the new payment process. If the new payment process has been fully implemented on the seller's account,
 this seller will be blocked from listing on the DE and AT sites until the user agreement is accepted.
 
*/
extern NSString *const Trading_SellereBayPaymentProcessStatusCodeType_MUST_ACCEPT_UA;

/**
 
 This value indicates that the DE or AT seller has accepted the supplemental user
 agreement related to the new payment process and the new payment process is
 fully implemented on the seller's account.
 
*/
extern NSString *const Trading_SellereBayPaymentProcessStatusCodeType_E_BAY_PAYMENT_PROCESS_ENABLED;

/**
 
 Reserved for internal or future use
 
*/
extern NSString *const Trading_SellereBayPaymentProcessStatusCodeType_CUSTOM_CODE;
