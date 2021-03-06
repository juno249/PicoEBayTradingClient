// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 This container is designed to return all order line items related to specific
 multiple-item, fixed-price listings. Additionally, a SKU filter can be used to
 return all order line items related to a specific product or variation of an
 item.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_ItemTransactionIDType : NSObject <PicoBindable> {

@private
    NSString *_itemID;
    NSString *_transactionID;
    NSString *_sku;
    NSString *_orderLineItemID;
    NSMutableArray *_any;

}


/**
 
 Unique identifier for an eBay item listing. A listing can have multiple
 order line items (transactions), but only one <b>ItemID</b>. Unless an
 <b>OrderLineItemID</b> or <b>SKU</b> value is specified in the same node, this field is
 required for each <b>ItemTransactionID</b> node included in the request.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemID;

/**
 
 Unique identifier for an eBay order line item (transaction). The
 <b>TransactionID</b> should match the <b>ItemID</b> specified in each <b>ItemTransactionID</b>
 node included in the request. Optionally, an <b>OrderLineItemID</b> value can
 substitute for the <b>ItemID</b>/<b>TransactionID</b> pair.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *transactionID;

/**
 
 A SKU (stock keeping unit) is a unique identifier defined and used by the
 seller to identify a product or variation of an item. A listing can have
 multiple SKUs and it is possible that the same SKU can exist in multiple
 listings. Unless an <b>OrderLineItemID</b> or <b>ItemID</b>/<b>TransactionID</b> pair is
 specified in the same node, this field is required for each
 <b>ItemTransactionID</b> node included in the request. To retrieve order line items
 associated with a SKU, the <b>InventoryTrackingMethod</b> field must be set to SKU.
 The <b>InventoryTrackingMethod</b> field is set through <b>AddFixedPriceItem</b> or
 <b>RelistFixedPriceItem</b>.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *sku;

/**
 
 <b>OrderLineItemID</b> is a unique identifier for an eBay order line item and is
 based upon the concatenation of <b>ItemID</b> and <b>TransactionID</b>, with a hyphen in
 between these two IDs. If an <b>OrderLineItemID</b> is included in a
 <b>ItemTransactionID</b> node in the request, the <b>ItemID</b>, <b>TransactionID</b>, and <b>SKU</b>
 fields are not required and are ignored if they are included in the request.
 <br>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *orderLineItemID;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
