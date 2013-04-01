// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Contains data indicating whether an item has been revised since the
 listing became active and, if so, which among a subset of properties
 have been changed by the revision.
 Output only.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_ReviseStatusType : NSObject <PicoBindable> {

@private
    NSNumber *_itemRevised;
    NSNumber *_buyItNowAdded;
    NSNumber *_buyItNowLowered;
    NSNumber *_reserveLowered;
    NSNumber *_reserveRemoved;
    NSMutableArray *_any;

}


/**
 
 If true, indicates the item was revised since the listing became
 active.
 Output only.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *itemRevised;

/**
 
 If true, indicates that a Buy It Now Price was added for the item.
 Only applicable to US eBay Motors items.
 Output only.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *buyItNowAdded;

/**
 
 If true, indicates that the item's Buy It Now price was lowered.
 Only applicable to US eBay Motors items.
 Output only.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *buyItNowLowered;

/**
 
 If true, indicates that the reserve price was lowered for
 the item. Only applicable to US eBay Motors items.
 Output only.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *reserveLowered;

/**
 
 If true, indicates that the reserve price was removed
 from the item. Only applicable to US eBay Motors items.
 Output only.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *reserveRemoved;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
