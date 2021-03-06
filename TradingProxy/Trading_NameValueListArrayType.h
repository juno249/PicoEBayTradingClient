// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_NameValueListType;

/**
 
 A list of one or more valid names and corresponding values. Currently
 used for Item Specifics and Variations.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_NameValueListArrayType : NSObject <PicoBindable> {

@private
    NSMutableArray *_nameValueList;

}


/**
 
 <b>For the AddItem family of calls:</b>
 Contains the name and value(s) for an Item Specific.
 Only required when the ItemSpecifics container is
 specified.<br>
 <br>
 <b>For the AddFixedPriceItem family of calls:</b>
 The same NameValueList schema is used for the
 ItemSpecifics node, the VariationSpecifics node, and the
 VariationSpecifcsSet node.<br>
 <br>
 If the listing has varations, any name that you use in the
 VariationSpecifics and VariationSpecificsSet nodes can't be used
 in the ItemSpecifics node.<br>
 <br>
 When you list with Item Variations:<br>
 a) Specify shared Item Specifics (e.g., Brand) in the ItemSpecifics
 node.<br>
 b) Specify up to five VariationSpecifics in each Variation
 node. <br>
 c) Specify all applicable names with all their supported values in
 the VariationSpecificSet node. <br>
 <br>
 See the Variation sample in the
 AddFixedPriceItem call reference for examples.<br>
 <br>
 <b>For PlaceOffer:</b> Required if the item being
 purchased includes Item Variations.
 
 
 entry type : class Trading_NameValueListType
*/

@property (nonatomic, retain) NSMutableArray *nameValueList;


@end
