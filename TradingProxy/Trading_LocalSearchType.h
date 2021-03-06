// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Contains data for filtering a search by proximity.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_LocalSearchType : NSObject <PicoBindable> {

@private
    NSNumber *_maxDistance;
    NSString *_postalCode;
    NSMutableArray *_any;

}


/**
 
 The maximum distance from the specified postal code to search for items.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *maxDistance;

/**
 
 The postal code to use as the basis for the proximity search.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *postalCode;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
