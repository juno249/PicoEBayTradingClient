// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractRequestType.h"


@class Trading_VariationKeyType;

/**
 
 Adds one or more items to the user's My eBay watch list.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_AddToWatchListRequestType : Trading_AbstractRequestType {

@private
    NSMutableArray *_itemID;
    NSMutableArray *_variationKey;

}


/**
 
 The ItemID of the item that is to be added to the watch list.
 The item must be a currently active item, and the total number
 of items in the
 watchlist (after the items in the request have been added) cannot exceed
 the maximum allowed number of watch list items. One or more ItemID fields can be specified. A separate error node will be
 returned for each item that fails.<br>
 <br>
 Either ItemID or VariationKey is required
 (but do not pass in both).
 
 
 entry type : NSString, wrapper for primitive string
*/

@property (nonatomic, retain) NSMutableArray *itemID;

/**
 
 A variation (or set of variations) that you want to watch.
 Use this to watch a particular variation (not the entire item).
 Either the top-level ItemID or VariationKey is required
 (but do not pass in both).
 
 
 entry type : class Trading_VariationKeyType
*/

@property (nonatomic, retain) NSMutableArray *variationKey;


@end