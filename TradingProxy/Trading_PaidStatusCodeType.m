// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import "Trading_PaidStatusCodeType.h"

/**
 @file
 
 Specifies the payment status of an order, as
 seen by the buyer and seller.
 
*/

/**
 
 The buyer has not completed checkout, but has not paid through PayPal or
 PaisaPay (but please also see the documentation for PaymentHoldStatus and its applicable values).
 The buyer might have paid using another method, but the payment
 might not have been received or cleared.
 Important: Please see the documentation for PaymentHoldStatus and its applicable values.
 PaymentHoldStatus contains the current status of a hold on a PayPal payment.
 
*/
NSString *const Trading_PaidStatusCodeType_NOT_PAID = @"NotPaid";

/**
 
 The buyer has not completed the checkout process and so has not made payment.
 
*/
NSString *const Trading_PaidStatusCodeType_BUYER_HAS_NOT_COMPLETED_CHECKOUT = @"BuyerHasNotCompletedCheckout";

/**
 
 The buyer has made a PayPal payment, but the seller has not yet received it.
 
*/
NSString *const Trading_PaidStatusCodeType_PAYMENT_PENDING_WITH_PAY_PAL = @"PaymentPendingWithPayPal";

/**
 
 The buyer has made a PayPal payment, and the payment is complete.
 But please also see the documentation for PaymentHoldStatus and its applicable values.
 PaymentHoldStatus contains the current status of a hold on a PayPal payment.
 
*/
NSString *const Trading_PaidStatusCodeType_PAID_WITH_PAY_PAL = @"PaidWithPayPal";

/**
 
 The order is marked as paid by either buyer or seller.
 
*/
NSString *const Trading_PaidStatusCodeType_MARKED_AS_PAID = @"MarkedAsPaid";

/**
 
 The buyer has made an escrow payment, but the seller has not yet received it.
 
*/
NSString *const Trading_PaidStatusCodeType_PAYMENT_PENDING_WITH_ESCROW = @"PaymentPendingWithEscrow";

/**
 
 The buyer has made an escrow payment, and the seller has received payment.
 
*/
NSString *const Trading_PaidStatusCodeType_PAID_WITH_ESCROW = @"PaidWithEscrow";

/**
 
 The buyer has made an escrow payment, but has cancelled the payment.
 
*/
NSString *const Trading_PaidStatusCodeType_ESCROW_PAYMENT_CANCELLED = @"EscrowPaymentCancelled";

/**
 
 The buyer has paid with PaisaPay, but the payment is still being processed.
 The seller has not yet received payment.
 
*/
NSString *const Trading_PaidStatusCodeType_PAYMENT_PENDING_WITH_PAISA_PAY = @"PaymentPendingWithPaisaPay";

/**
 
 The buyer has paid with PaisaPay, and the payment is complete.
 
*/
NSString *const Trading_PaidStatusCodeType_PAID_WITH_PAISA_PAY = @"PaidWithPaisaPay";

/**
 
 The buyer has made a payment other than PayPal, escrow, or PaisaPay, but the
 payment is still being processed.
 
*/
NSString *const Trading_PaidStatusCodeType_PAYMENT_PENDING = @"PaymentPending";

/**
 
 Payment Pending With PaisaPay Escrow
 
*/
NSString *const Trading_PaidStatusCodeType_PAYMENT_PENDING_WITH_PAISA_PAY_ESCROW = @"PaymentPendingWithPaisaPayEscrow";

/**
 
 Paid With PaisaPay Escrow
 
*/
NSString *const Trading_PaidStatusCodeType_PAID_WITH_PAISA_PAY_ESCROW = @"PaidWithPaisaPayEscrow";

/**
 
 Paisa Pay Not Paid
 
*/
NSString *const Trading_PaidStatusCodeType_PAISA_PAY_NOT_PAID = @"PaisaPayNotPaid";

/**
 
 Refunded
 
*/
NSString *const Trading_PaidStatusCodeType_REFUNDED = @"Refunded";

/**
 
 WaitingForCODPayment
 
*/
NSString *const Trading_PaidStatusCodeType_WAITING_FOR_COD_PAYMENT = @"WaitingForCODPayment";

/**
 
 PaidCOD
 
*/
NSString *const Trading_PaidStatusCodeType_PAID_COD = @"PaidCOD";

/**
 
 Reserved for future use.
 
*/
NSString *const Trading_PaidStatusCodeType_CUSTOM_CODE = @"CustomCode";

/**
 
 Paid
 
*/
NSString *const Trading_PaidStatusCodeType_PAID = @"Paid";
