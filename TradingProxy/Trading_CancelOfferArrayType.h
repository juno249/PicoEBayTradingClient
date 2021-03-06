// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_CancelOfferType;

/**
 
 Container for a list of offers. May contain zero, one, or multiple
 OfferType objects, each of which represents one offer extended by
 a user on a listing.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_CancelOfferArrayType : NSObject <PicoBindable> {

@private
    NSMutableArray *_cancelOffer;
    NSMutableArray *_any;

}


/**
 
 Contains the data for one offer. This includes: data for the user making the
 offer, the amount of the offer, the quantity of items being bought from the
 listing, the type of offer being made, and more.
 
 
 entry type : class Trading_CancelOfferType
*/

@property (nonatomic, retain) NSMutableArray *cancelOffer;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
