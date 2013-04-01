// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 This type is deprecated as the call is no longer available.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_ExtendedProductFinderIDType : NSObject <PicoBindable> {

@private
    NSNumber *_productFinderID;
    NSNumber *_productFinderBuySide;

}


/**
 
 A product finder ID. GetCategory2CS always (and only) returns this
 when Category.ProductFinderIDs is returned.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *productFinderID;

/**
 
 If false or not present, the product finder can be used as input to
 GetProductSearchResults to search for catalog data (Pre-filled Item Information)
 that a seller might want to include in a listing.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *productFinderBuySide;


@end
