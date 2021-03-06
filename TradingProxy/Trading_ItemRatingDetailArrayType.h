// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_ItemRatingDetailsType;

/**
 
 Container for a set of detailed seller ratings about an order line item.
 If a seller has detailed ratings, they are displayed
 in the Feedback Profile of the seller.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_ItemRatingDetailArrayType : NSObject <PicoBindable> {

@private
    NSMutableArray *_itemRatingDetails;

}


/**
 
 The ItemRatingDetails container is for detailed seller ratings about an order line item.
 When buyers leave an overall Feedback rating (positive, neutral, or negative) for
 a seller, they also can leave ratings in four areas: item as described,
 communication, shipping time, and charges for shipping and handling. Users retrieve
 detailed ratings as averages of the ratings left by buyers.
 <br><br>
 Applicable to sites that support the Detailed Seller Ratings feature.
 
 
 entry type : class Trading_ItemRatingDetailsType
*/

@property (nonatomic, retain) NSMutableArray *itemRatingDetails;


@end
