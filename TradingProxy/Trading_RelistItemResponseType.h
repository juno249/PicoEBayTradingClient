// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractResponseType.h"


@class Trading_ProductSuggestionsType;
@class Trading_FeesType;

/**
 
 Returns the item ID and the estimated fees for the re-listed listing.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_RelistItemResponseType : Trading_AbstractResponseType {

@private
    NSString *_itemID;
    Trading_FeesType *_fees;
    NSDate *_startTime;
    NSDate *_endTime;
    NSString *_categoryID;
    NSString *_category2ID;
    NSMutableArray *_discountReason;
    Trading_ProductSuggestionsType *_productSuggestions;

}


/**
 
 Unique item ID for the new listing.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemID;

/**
 
 Child elements contain the estimated listing fees for the new item
 listing. The fees do not include the Final Value Fee (FVF), which cannot
 be determined until an item is sold.
 
 
 type : class Trading_FeesType
*/
@property (nonatomic, retain) Trading_FeesType *fees;

/**
 
 Date and time the new listing became active on the eBay site.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *startTime;

/**
 
 Date and time when the new listing ends. This is the starting time plus
 the listing duration.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *endTime;

/**
 
 ID of the primary category in which the item was listed.
 Only returned if you set Item.CategoryMappingAllowed to true in the request
 and the ID passed in Item.PrimaryCategory was mapped to a new ID by eBay.
 If the primary category has not changed or it has expired with no replacement,
 CategoryID does not return a value.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *categoryID;

/**
 
 ID of the secondary category in which the item was listed.
 Only returned if you set Item.CategoryMappingAllowed to true in the request
 and the ID passed in Item.SecondaryCategory was mapped to a new ID by eBay.
 If the secondary category has not changed or it has expired with no replacement,
 Category2ID does not return a value.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *category2ID;

/**
 
 The nature of the discount, if a discount applied.
 
 
 entry type : string constant in Trading_DiscountReasonCodeType.h
*/

@property (nonatomic, retain) NSMutableArray *discountReason;

/**
 
 Provides a list of products recommended by eBay which match the item information
 provided by the seller.
 Not applicable to Half.com.
 
 
 type : class Trading_ProductSuggestionsType
*/
@property (nonatomic, retain) Trading_ProductSuggestionsType *productSuggestions;


@end