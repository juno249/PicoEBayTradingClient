// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractResponseType.h"


@class Trading_DataElementSetType;
@class Trading_ProductSearchResultType;

/**
 
 This type is deprecated as the call is no longer available.
 
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_GetProductFamilyMembersResponseType : Trading_AbstractResponseType {

@private
    NSMutableArray *_dataElementSets;
    NSMutableArray *_productSearchResult;

}


/**
 
 
 Container for one or more DataElement fields containing supplemental helpful data.
 A DataElement field is an HTML snippet that specifies hints for the user, help links,
 help graphics, and other supplemental information that varies per characteristics set.
 Usage of this information is optional and may require developers to inspect the information
 to determine how it can be applied in an application.
 
 
 entry type : class Trading_DataElementSetType
*/

@property (nonatomic, retain) NSMutableArray *dataElementSets;

/**
 
 
 Contains the attributes and summary product details for all products that match
 the product ID (or IDs) passed in the request.
 
 
 entry type : class Trading_ProductSearchResultType
*/

@property (nonatomic, retain) NSMutableArray *productSearchResult;


@end
