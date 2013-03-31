// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractRequestType.h"


@class Trading_AmountType;

/**
 
 <b>Half.com only.</b>&nbsp;Issues a refund for a specific
 Half.com order line item. This can only be called by a seller. Sellers do not
 have the ability to issue a general refund (a refund not tied to an order line
 item) to a buyer.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_IssueRefundRequestType : Trading_AbstractRequestType {

@private
    NSString *_itemID;
    NSString *_transactionID;
    NSString *_refundReason;
    NSString *_refundType;
    Trading_AmountType *_refundAmount;
    NSString *_refundMessage;
    NSString *_orderLineItemID;

}


/**
 
 Unique identifier for the Half.com item listing. Unless an
 <b>OrderLineItemID</b> is specified in the <b>IssueRefund</b> request, the <b>ItemID</b> is
 required along with the corresponding <b>TransactionID</b> to identify the
 order line item that will be refunded. You can use <b>GetSellerPayments</b> to
 retrieve the <b>ItemID</b> and/or <b>TransactionID</b> associated with the order line
 item.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemID;

/**
 
 Unique identifier for a Half.com order line item (transaction). An order
 line item is created once there is a commitment from a buyer to purchase
 an item. Along with its corresponding <b>ItemID</b>, a <b>TransactionID</b> is used to
 identify the order line item that will be refunded. Unless an
 <b>OrderLineItemID</b> is specified in the <b>IssueRefund</b> request, the
 <b>TransactionID</b> is required along with the corresponding <b>ItemID</b>. You can
 use <b>GetSellerPayments</b> to retrieve the <b>ItemID</b> and/or <b>TransactionID</b>
 associated with the order line item.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *transactionID;

/**
 
 Explanation of the reason that the refund is being issued.
 
 
 type: string constant in Trading_RefundReasonCodeType.h
*/
@property (nonatomic, retain) NSString *refundReason;

/**
 
 Explanation of the costs that the refund amount covers.
 
 
 type: string constant in Trading_RefundTypeCodeType.h
*/
@property (nonatomic, retain) NSString *refundType;

/**
 
 The amount the seller wants to refund to the buyer, in US Dollars (USD).
 Must be greater than 0.00. Half.com allows a maximum of the original item
 sale price (order line item price plus original shipping reimbursement) plus
 return shipping costs (the amount the buyer paid to return the item).
 Typically, the return shipping cost is based on the current cost of
 shipping the individual item (not the discounted cost calculated during
 the original checkout for a Combined Payment order). You can also issue a
 partial refund for the amount you want the buyer to receive. If
 RefundType=Full or RefundType=FullPlusShipping and you do not pass
 <b>RefundAmount</b> in the request, Half.com will calculate the refund amount for
 you. If you pass <b>RefundAmount</b> in the request, the amount you specify will
 override Half.com's calculated value. Required if RefundType=
 CustomOrPartial.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *refundAmount;

/**
 
 Note to the buyer. Cannot include HTML.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *refundMessage;

/**
 
 A unique identifier for an eBay order line item. This field is created
 as soon as there is a commitment to buy from the seller, and its value
 is based upon the concatenation of <b>ItemID</b> and <b>TransactionID</b>, with a
 hyphen in between these two IDs. The <b>OrderLineItemID</b> value is used to
 identify the order line item that will be refunded. Unless an
 <b>ItemID</b>/<b>TransactionID</b> pair is specified in the <b>IssueRefund</b> request, the
 <b>OrderLineItemID</b> is required. You can use <b>GetSellerPayments</b> to retrieve
 the <b>OrderLineItemID</b> associated with the order line item.
 <br>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *orderLineItemID;


@end