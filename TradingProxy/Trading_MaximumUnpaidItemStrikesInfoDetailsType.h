// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_MaximumUnpaidItemStrikesDurationDetailsType;
@class Trading_MaximumUnpaidItemStrikesCountDetailsType;

/**
 Details of a buyer's maximum unpaid item strikes in a pre-defined time period. This is applicable only to sellers.
 
 @ingroup EBayAPIInterface
*/
@interface Trading_MaximumUnpaidItemStrikesInfoDetailsType : NSObject <PicoBindable> {

@private
    Trading_MaximumUnpaidItemStrikesCountDetailsType *_maximumUnpaidItemStrikesCount;
    NSMutableArray *_maximumUnpaidItemStrikesDuration;
    NSMutableArray *_any;

}


/**
 The number of the maximum unpaid item strikes. This is applicable only to sellers.
 
 type : class Trading_MaximumUnpaidItemStrikesCountDetailsType
*/
@property (nonatomic, retain) Trading_MaximumUnpaidItemStrikesCountDetailsType *maximumUnpaidItemStrikesCount;

/**
 Range of time used to determine maximum unpaid item count. This is applicable only to sellers.
 
 entry type : class Trading_MaximumUnpaidItemStrikesDurationDetailsType
*/

@property (nonatomic, retain) NSMutableArray *maximumUnpaidItemStrikesDuration;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end