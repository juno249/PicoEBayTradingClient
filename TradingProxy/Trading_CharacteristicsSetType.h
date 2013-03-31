// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_CharacteristicType;

/**
 
 This type is deprecated as the <b>GetProduct*</b> calls are no longer available.
 
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_CharacteristicsSetType : NSObject <PicoBindable> {

@private
    NSString *_name;
    NSNumber *_attributeSetID;
    NSString *_attributeSetVersion;
    NSMutableArray *_characteristics;
    NSMutableArray *_any;

}


/**
 
 
 The well-known name of the characteristic set (e.g., "Tickets" or "Books").
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *name;

/**
 
 
 Numeric value that identifies the characteristic set in a language-independent
 way. Identifies the characteristic set that is mapped to a catalog-enabled
 category associated with the product. Unique across all eBay sites.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *attributeSetID;

/**
 
 
 Version of the characteristics set. Not to be confused with
 AttributeSystemVersion, which can be used to retrieve changes to attribute
 meta-data. In item-listing requests, if you specify the version of the
 attribute set that you have stored locally, eBay will compare it to the
 current version on the site and return a warning if the versions do not match.
 If an error occurs due to invalid attribute data, this warning can be useful
 to help determine if you might be sending outdated data. The current value of
 version is not necessarily "greater than" the previous value.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *attributeSetVersion;

/**
 
 
 A salient aspect or feature of an item. Used to describe an item in a standard
 way so that buyers can find it more easily. An individual, standardized
 characteristic that is common to all items within the specified characteristic
 set. In the context of GetProductSearchPage, each characteristic identifies a
 single searchable attribute. A searchable attribute is a product aspect or
 feature that can be used as a criterion in a search for catalog content. For
 example, "Title" might be a criterion for searching the book catalog for Pre-
 filled Item Information related to books. See the eBay Web Services guide for
 more information.
 
 
 entry type : class Trading_CharacteristicType
*/

@property (nonatomic, retain) NSMutableArray *characteristics;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end