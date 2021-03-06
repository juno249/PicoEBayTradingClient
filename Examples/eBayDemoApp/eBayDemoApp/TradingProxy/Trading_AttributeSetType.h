// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_AttributeType;

/**
 
 No longer applicable to any eBay categories.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_AttributeSetType : NSObject <PicoBindable> {

@private
    NSMutableArray *_attribute;
    NSMutableArray *_any;
    NSNumber *_attributeSetID;
    NSString *_attributeSetVersion;

}


/**
 
 A salient aspect or feature of an item in a given category.
 Attributes are known as "Item Specifics" in the eBay Web site.
 Use attributes to describe an item in a standard way so that buyers can find it more easily.
 For example, "Publication Year" is a standard attribute for books.
 In item-listing requests, multiple attributes can be specified.
 Some categories (e.g., Tickets) always require certain attributes to be specified.
 Therefore, in item-listing requests you need to at least specify "editable" attributes
 (EditType 0 and EditType 2 attributes) if they are identified as required
 in the attribute meta-data. See the eBay Web Services guide for information
 about attribute meta-data, how to determine the valid attributes for a category,
 and how to determine whether attributes are required.
 <br><br>
 If you are revising or relisting an item, you don't need to pass in attributes
 that were already specified in the original listing.
 To remove an optional attribute, set all its value IDs to "-100". If the item has bids
 (or items have been sold) but there are more than 12 hours remaining until the listing ends,
 you can add Attribute nodes but you cannot remove or modify data in previously
 specified Attribute nodes. If the item has bids and the listing ends within 12 hours,
 you cannot add or remove Attribute nodes or modify the contents of previously
 specified Attribute nodes.
 <br><br>
 Not applicable to Half.com.
 
 
 entry type : class Trading_AttributeType
*/

@property (nonatomic, retain) NSMutableArray *attribute;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;

/**
 (public property)
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *attributeSetID;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *attributeSetVersion;


@end
