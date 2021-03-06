// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Type defining the <b>VATRateType</b> container, which is used by
 <b>ReviseSellingManagerSaleRecord</b> to modify the VAT percentage for an
 order line item. This container is also retrieved by
 <b>GetSellingManagerSaleRecord</b> if Value-Added Tax has been applied to
 the order line item.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_VATRateType : NSObject <PicoBindable> {

@private
    NSString *_itemID;
    NSString *_transactionID;
    NSNumber *_vatPercent;
    NSString *_orderLineItemID;
    NSMutableArray *_any;

}


/**
 
 Unique identifier for an eBay item listing. A listing can have multiple
 order line items (transactions), but only one <b>ItemID</b>. An <b>ItemID</b> can be
 paired up with a corresponding <b>TransactionID</b> and used as an input filter for
 <b>ReviseSellingManagerSaleRecord</b>. However, if <b>OrderID</b> is passed in as an input
 filter for <b>ReviseSellingManagerSaleRecord</b>, the <b>ItemID</b>/<b>TransactionID</b> pair is
 ignored.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemID;

/**
 
 Unique identifier for an eBay order line item (transaction). An order line
 item is created once there is a commitment from a buyer to purchase an item.
 Since an auction listing can only have one order line item
 during the duration of the listing, the <b>TransactionID</b> for auction listings
 is always 0. Along with its corresponding <b>ItemID</b>, a <b>TransactionID</b> is used
 and referenced during an order checkout flow and after checkout has been
 completed. The <b>ItemID</b>/<b>TransactionID</b> pair can be used as an input filter for
 <b>ReviseSellingManagerSaleRecord</b>. However, if <b>OrderID</b> is passed in as an input
 filter for <b>ReviseSellingManagerSaleRecord</b>, the <b>ItemID</b>/<b>TransactionID</b> pair is
 ignored.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *transactionID;

/**
 
 The VAT (Value-Added Tax) rate for the order line item. When the <b>VATPercent</b> is specified, the
 item's VAT information appears on the item's listing page. In
 addition, the seller can choose to print an invoice that
 includes the item's net price, VAT percent, VAT amount, and
 total price. Since VAT rates vary
 depending on the item and on the user's country of residence, a
 seller is responsible for entering the correct VAT rate; it is
 not calculated by eBay. To specify a <b>VATPercent</b>, a seller must
 have a VAT-ID registered with eBay and must be listing the item on a
 VAT-enabled site. Max applicable length is 6 characters,
 including the decimal (e.g., 12.345). The scale is 3 decimal places.
 (If you pass in 12.3456, eBay may round up the value to 12.346.)
 Note: The View Item page may display the precision to 2 decimal places
 with no trailing zeros. However, the full value you send in is stored.
 
 
 type : NSNumber, wrapper for primitive float
*/
@property (nonatomic, retain) NSNumber *vatPercent;

/**
 
 <b>OrderLineItemID</b> is a unique identifier for an eBay order line item and is
 based upon the concatenation of <b>ItemID</b> and <b>TransactionID</b>, with a hyphen in
 between these two IDs. If a VATRate is specified in the
 <b>ReviseSellingManagerSaleRecord</b> request, <b>OrderLineItemID</b> can be used instead
 of <b>ItemID</b> and <b>TransactionID</b>. For a single line item order, the
 <b>OrderLineItemID</b> value can be passed into the <b>OrderID</b> field to revise the
 corresponding order.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *orderLineItemID;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
