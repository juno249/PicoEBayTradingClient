// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Type defining the <b>ReturnPolicyDetails.ReturnsAccepted</b> container that
 is returned in <b>GeteBayDetails</b>. This container contains the values
 that may be used in the <b>ReturnPolicy.ReturnsAcceptedOption</b> field of Add/Revise/Relist
 API calls.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_ReturnsAcceptedDetailsType : NSObject <PicoBindable> {

@private
    NSString *_returnsAcceptedOption;
    NSString *_description;
    NSMutableArray *_any;

}


/**
 
 Whether the seller allows the buyer to return the item.
 This value can be passed in the AddItem family of calls.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *returnsAcceptedOption;

/**
 
 Display string that applications can use to present ReturnsAcceptedOption in
 a more user-friendly format (such as in a drop-down list).
 Not applicable as input to the AddItem family of calls. (Use ReturnsAcceptedOption instead.)
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *description;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
