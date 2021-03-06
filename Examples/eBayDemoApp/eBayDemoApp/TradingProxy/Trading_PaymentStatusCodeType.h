// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>

/**
 @file
 
 Type defining the values that can be returned in the <b>eBayPaymentStatus</b>
 field of order management calls. These values indicate the current status of the buyer's
 payment for an order.
 
 
 @ingroup EBayAPIInterface
*/

/**
 
 This value indicates that the buyer's payment for the order has cleared. A
 <b>CheckoutStatus.eBayPaymentStatus</b> value of 'NoPaymentFailure'
 and a <b>CheckoutStatus.Status</b> value of 'Complete' indicates that
 checkout is complete.
 
*/
extern NSString *const Trading_PaymentStatusCodeType_NO_PAYMENT_FAILURE;

/**
 
 This value indicates that the buyer's eCheck bounced. This value is only applicable
 if the seller accepts eChecks as a form of payment.
 
*/
extern NSString *const Trading_PaymentStatusCodeType_BUYER_E_CHECK_BOUNCED;

/**
 
 This value indicates that the buyer's payment via a credit card failed. This value
 is only applicable if the seller accepts credit cards as a form of payment.
 
*/
extern NSString *const Trading_PaymentStatusCodeType_BUYER_CREDIT_CARD_FAILED;

/**
 
 This value indicates that the seller reported the buyer's payment as failed.
 
*/
extern NSString *const Trading_PaymentStatusCodeType_BUYER_FAILED_PAYMENT_REPORTED_BY_SELLER;

/**
 
 This value indicates that the buyer's PayPal payment is in process. This value
 is only applicable if the buyer has selected PayPal as the payment method.
 
*/
extern NSString *const Trading_PaymentStatusCodeType_PAY_PAL_PAYMENT_IN_PROCESS;

/**
 
 This value indicates that the buyer's non-PayPal payment is in process. This value
 is only applicable if the buyer has selected a payment method other than PayPal.
 
*/
extern NSString *const Trading_PaymentStatusCodeType_PAYMENT_IN_PROCESS;

/**
 
 Reserved for internal or future use.
 
*/
extern NSString *const Trading_PaymentStatusCodeType_CUSTOM_CODE;
