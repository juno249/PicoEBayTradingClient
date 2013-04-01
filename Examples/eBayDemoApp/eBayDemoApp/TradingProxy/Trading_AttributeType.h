// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_ValType;

/**
 
 A salient aspect or feature of an item. On eBay.com, this information is used in the Item Specifics
 section of a listing to describe an item
 in a standard way so that buyers can find it more easily.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_AttributeType : NSObject <PicoBindable> {

@private
    NSMutableArray *_value;
    NSMutableArray *_any;
    NSNumber *_attributeID;
    NSString *_attributeLabel;

}


/**
 
 A value the seller selected or entered for the attribute.
 At least one value is required for each Attribute that you specify.
 Some attributes can have multiple values.
 See the eBay Web Services guide sections on
 Item Specifics (Attributes) and Pre-filled Item Information (Catalogs)
 for information about using GetAttributesCS to determine valid
 attribute values.<br><br>
 For eBay.com listings, use AttributeSetArray.AttributeSet.Attribute.Value.
 For Half.com, use AttributeArray.Attribute.Value. That is, the parent elements
 and usage for Half.com differs from
 eBay's standard Item Specifics format (and there is no relationship to GetAttributesCS).
 For Half.com, this does not use the same Attributes logic as eBay's Item Specifics.
 For Half.com, AttributeArray.Attribute.Value is required when you use AddItem.
 see the eBay Web Services Guide for valid values.
 You can revise AttributeArray.Attribute.Value for Half.com listings.
 
 
 entry type : class Trading_ValType
*/

@property (nonatomic, retain) NSMutableArray *value;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;

/**
 (public property)
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *attributeID;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *attributeLabel;


@end
