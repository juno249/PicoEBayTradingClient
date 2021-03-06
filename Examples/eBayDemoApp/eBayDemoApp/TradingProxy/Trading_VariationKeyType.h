// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_NameValueListArrayType;

/**
 
 Used to provide input for ItemID and VariationSpecific
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_VariationKeyType : NSObject <PicoBindable> {

@private
    NSString *_itemID;
    Trading_NameValueListArrayType *_variationSpecifics;
    NSMutableArray *_any;

}


/**
 
 The ID of the item whose variation(s) should be added to or
 removed from the watch list.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemID;

/**
 
 Name-value pairs that identify a variation within the
 listing identified by VariationKey.ItemID.
 or that partially match one or more variations. Names may not be duplicated in the same VariationSpecifics container.
 If the specified pairs do not match any variation, the call
 behaves as if no variations were specified.
 
 
 type : class Trading_NameValueListArrayType
*/
@property (nonatomic, retain) Trading_NameValueListArrayType *variationSpecifics;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
