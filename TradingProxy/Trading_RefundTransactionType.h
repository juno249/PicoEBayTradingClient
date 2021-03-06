// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_RefundLineArrayType;

/**
 
   A container consisting of details about the order line item against which the seller
 issued a refund. If an order ID is present, it indicates that the refund was issued
 against the entire order. If an item ID and transaction ID are present, that indicates
 that the refund was issued against that particular order line item.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_RefundTransactionType : NSObject <PicoBindable> {

@private
    NSString *_orderID;
    NSString *_itemID;
    NSString *_transactionID;
    Trading_RefundLineArrayType *_refundLineArray;
    NSMutableArray *_any;

}


/**
 
 The order against which the refund was issued. The presence of this value indicates that the refund was issued against the entire order.<br/><br/>
 <span class="tablenote">
 <strong>Note:</strong> RefundTransaction containers are returned
 (for GetOrders and other order retrieval calls) for DE/AT orders subject to the
 new eBay payment process.
 </span>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *orderID;

/**
 
 The item against which the refund was issued. This value must be accompanied by a TransactionID value.<br/><br/>
 <span class="tablenote">
 <strong>Note:</strong> RefundTransaction containers are returned
 (for GetOrders and other order retrieval calls) for DE/AT orders subject to the
 new eBay payment process.
 </span>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemID;

/**
 
 The transaction against which the refund was issued. This value must be accompanied by an ItemID value.<br/><br/>
 <span class="tablenote">
 <strong>Note:</strong> RefundTransaction containers are returned
 (for GetOrders and other order retrieval calls) for DE/AT orders subject to the
 new eBay payment process.
 </span>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *transactionID;

/**
 
 An array of refund lines identifying the order line items against which the refund was issued.<br/><br/>
 <span class="tablenote">
 <strong>Note:</strong> RefundTransaction containers are returned
 (for GetOrders and other order retrieval calls) for DE/AT orders subject to the
 new eBay payment process.
 </span>
 
 
 type : class Trading_RefundLineArrayType
*/
@property (nonatomic, retain) Trading_RefundLineArrayType *refundLineArray;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
