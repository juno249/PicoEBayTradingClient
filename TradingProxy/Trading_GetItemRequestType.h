// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractRequestType.h"


@class Trading_NameValueListArrayType;

/**
 
 Returns item data such as title, description, price information, seller information, and so on, for the specified <b>ItemID</b>. &nbsp;<b>Also for Half.com</b>.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_GetItemRequestType : Trading_AbstractRequestType {

@private
    NSString *_itemID;
    NSNumber *_includeWatchCount;
    NSNumber *_includeCrossPromotion;
    NSNumber *_includeItemSpecifics;
    NSNumber *_includeTaxTable;
    NSString *_sku;
    NSString *_variationSKU;
    Trading_NameValueListArrayType *_variationSpecifics;
    NSString *_transactionID;
    NSNumber *_includeItemCompatibilityList;

}


/**
 
 Specifies the <b>ItemID</b> that uniquely identifies the item listing for which
 to retrieve the data.
 <br><br>
 <b>ItemID</b> is a required input in most cases. <b>SKU</b> can be used instead in certain
 cases (see the description of SKU). If both <b>ItemID</b> and <b>SKU</b> are specified for
 items where the inventory tracking method is <b>ItemID</b>, <b>ItemID</b> takes precedence.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemID;

/**
 
 Indicates if the caller wants to include watch count for that item in the
 response. You must be the seller of the item to retrieve the watch count.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *includeWatchCount;

/**
 
 This flag should no longer be used as eBay Store Cross Promotions are no
 longer supported by the Trading API.
 <br><br>
 Specifies whether or not to include cross-promotion information for
 the item in the call response.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *includeCrossPromotion;

/**
 
 If true, the response returns the <b>ItemSpecifics</b> node
 (if the listing has custom Item Specifics).<br>
 <br>
 Item Specifics are well-known aspects of items in a given
 category. For example, items in a washer and dryer category
 might have an aspect like Type=Top-Loading; whereas
 items in a jewelry category might have an aspect like
 Gemstone=Amber.<br>
 <br>
 (This does not cause the response to include ID-based
 attributes. To also retrieve ID-based attributes,
 pass <b>DetailLevel</b> in the request with the value
 <b>ItemReturnAttributes</b> or <b>ReturnAll</b>.)
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *includeItemSpecifics;

/**
 
 If true, an associated tax table is returned in the response.
 If no tax table is associated with the item, then no
 tax table is returned, even if <b>IncludeTaxTable</b> is set to true.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *includeTaxTable;

/**
 
 Retrieves an item that was listed by the user identified
 in AuthToken and that is being tracked by this SKU.<br>
 <br>
 A SKU (stock keeping unit) is an identifier defined by a seller.
 Some sellers use SKUs to track complex flows of products
 and information on the client side.
 eBay preserves the SKU on the item, enabling you
 to obtain it before and after an order line item is created.
 (SKU is recommended as an alternative to
 ApplicationData.)<br>
 <br>
 In <b>GetItem</b>, <b>SKU</b> can only be used to retrieve one of your
 own items, where you listed the item by using <b>AddFixedPriceItem</b>
 or <b>RelistFixedPriceItem</b>,
 and you set <b>Item.InventoryTrackingMethod</b> to <b>SKU</b> at
 the time the item was listed. (These criteria are necessary to
 uniquely identify the listing by a SKU.)<br>
 <br>
 Either <b>ItemID</b> or <b>SKU</b> is required in the request.
 If both are passed, they must refer to the same item,
 and that item must have <b>InventoryTrackingMethod</b> set to <b>SKU</b>.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *sku;

/**
 
 Variation-level SKU that uniquely identifes a Variation within
 the listing identified by <b>ItemID</b>. Only applicable when the
 seller listed the item with Variation-level SKU (<b>Variation.SKU</b>)
 values. Retrieves all the usual <b>Item</b> fields, but limits the
 <b>Variations</b> content to the specified Variation.
 If not specified, the response includes all Variations.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *variationSKU;

/**
 
 Name-value pairs that identify one or more Variations within the
 listing identified by <b>ItemID</b>. Only applicable when the seller
 listed the item with Variations. Retrieves all the usual <b>Item</b>
 fields, but limits the Variations content to the specified
 Variation(s). If the specified pairs do not match any Variation,
 eBay returns all Variations.<br>
 <br>
 To retrieve only one variation, specify the full set of
 name/value pairs that match all the name-value pairs of one
 Variation. <br>
 <br>
 To retrieve multiple variations (using a wildcard),
 specify one or more name/value pairs that partially match the
 desired variations. For example, if the listing contains
 Variations for shirts in different colors and sizes, specify
 Color as Red (and no other name/value pairs) to retrieve
 all the red shirts in all sizes (but no other colors).
 
 
 type : class Trading_NameValueListArrayType
*/
@property (nonatomic, retain) Trading_NameValueListArrayType *variationSpecifics;

/**
 
 A unique identifier for an order line item (transaction). An order line item is created
 when a buyer commits to purchasing an item.
 <br><br>
 Since you can change active multiple-quantity fixed-price listings even
 after one of the items has been purchased, the <b>TransactionID</b> is
 associated with a snapshot of the item data at the time of the purchase.
 <br><br>
 After one item in a multi-quantity listing has been sold, sellers can not
 change the values in the Title, Primary Category, Secondary Category,
 Listing Duration, and Listing Type fields. However, all other fields are
 editable.
 <br><br>
 Specifying a <b>TransactionID</b> in the <b>GetItem</b> request allows you to retrieve
 a snapshot of the listing as it was when the order line item was created.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *transactionID;

/**
 
 This field is used to specify whether or not to retrieve Parts
 Compatiblity information. If true, any compatible applications associated
 with the item will be returned in the response (<b class="con">
 Item.ItemCompatibilityList</b>). If no compatible applications have
 been specified for the item, no item compatibilities will be returned.
 <br><br>
 If false or not specified, the response will return a compatibility count
 (<b class="con">ItemCompatibilityCoun</b>t) when parts
 compatibilities have been specified for the item.
 <br><br>
 Parts Compatibility is supported in limited Parts & Accessories
 categories for the eBay US Motors (site ID 100) and eBay Germany (site ID
 77) sites only.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *includeItemCompatibilityList;


@end
