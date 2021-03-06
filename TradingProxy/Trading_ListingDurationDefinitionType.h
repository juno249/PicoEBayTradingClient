// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 A container node for a set of durations that apply to a certain listing type.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_ListingDurationDefinitionType : NSObject <PicoBindable> {

@private
    NSMutableArray *_duration;
    NSMutableArray *_any;
    NSNumber *_durationSetID;

}


/**
 
 Specifies the length of time an auction can be open, in days. The allowed durations
 vary according to the type of listing. The value GTC means Good Til Canceled.
 
 
 entry type : NSString, wrapper for primitive string
*/

@property (nonatomic, retain) NSMutableArray *duration;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;

/**
 (public property)
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *durationSetID;


@end
