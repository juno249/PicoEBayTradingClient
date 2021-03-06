// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractRequestType.h"



/**
 
 Enables a seller who has opted into the automated Unpaid Item Assistant
 mechanism to disable the Unpaid Item Assistant at the order line item
 level. This call can be made whether or not a Unpaid Item dispute
 exists for the order line item. If a dispute has already been created by the
 Unpaid Item Assistant, it is converted to a "manual" dispute for the seller to
 manage like any other manually-created dispute.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_DisableUnpaidItemAssistanceRequestType : Trading_AbstractRequestType {

@private
    NSString *_itemID;
    NSString *_transactionID;
    NSString *_disputeID;
    NSString *_orderLineItemID;

}


/**
 
 Unique identifier for an eBay item listing. A listing can have multiple
 order line items (transactions), but only one <b>ItemID</b>. To identify a
 specific order line item for which to disable the Unpaid Item Assistant
 mechanism, either an <b>ItemID</b>/<b>TransactionID</b> pair, an <b>OrderLineItemID</b>, or a
 <b>DisputeID</b> (if a dispute record already exists) is required in the request.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemID;

/**
 
 The unique identifier of an order line item (transaction). An order line
 item is created once there is a commitment from a buyer to
 purchase an item. To identify a specific order line item for which to
 disable the Unpaid Item Assistant mechanism, either an <b>ItemID</b>/<b>TransactionID</b>
 pair, an <b>OrderLineItemID</b>, or a <b>DisputeID</b> (if a dispute record already
 exists) is required in the request.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *transactionID;

/**
 
 A unique identifier for an Unpaid Item dispute. Any order line item can
 only have one dispute record, so <b>DisputeID</b> can be used in the request to
 identify a specific order line item. If an <b>ItemID</b>/<b>TransactionID</b> pair or an
 <b>OrderLineItemID</b> is used to identify an order line item, <b>DisputeID</b> cannot be used and will be ignored if it is included in the request.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *disputeID;

/**
 
 <b>OrderLineItemID</b> is a unique identifier for an eBay order line item and is
 based upon the concatenation of <b>ItemID</b> and <b>TransactionID</b>, with a hyphen in
 between these two IDs. To identify a specific order line item for which to
 disable the Unpaid Item Assistant mechanism, either an <b>ItemID</b>/<b>TransactionID</b>
 pair, an <b>OrderLineItemID</b>, or a <b>DisputeID</b> is required in the request.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *orderLineItemID;


@end
