// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractRequestType.h"


@class Trading_ItemType;

/**
 
 Defines and lists a new fixed-price listing (not auction-style listings).
 The main difference between AddFixedPriceItem and AddItem is that
 AddFixedPriceItem supports the creation of fixed-price listings only,
 whereas AddItem supports all listing formats.<br>
 <br>
 Also, only AddFixedPriceItem supports multi-variation listings
 and tracking inventory by SKU. AddItem does not support
 Variations or InventoryTrackingMethod.<br>
 <br>
 See the AddFixedPriceItem documentation for additional information.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_AddFixedPriceItemRequestType : Trading_AbstractRequestType {

@private
    Trading_ItemType *_item;

}


/**
 
 Root container holding all values that define a new
 fixed-price listing.
 
 
 type : class Trading_ItemType
*/
@property (nonatomic, retain) Trading_ItemType *item;


@end