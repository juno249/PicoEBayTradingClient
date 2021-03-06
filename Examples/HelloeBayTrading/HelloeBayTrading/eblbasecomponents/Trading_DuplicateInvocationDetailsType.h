// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Contains properties that provide information on duplicate uses of InvocationIDs.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_DuplicateInvocationDetailsType : NSObject <PicoBindable> {

@private
    NSString *_duplicateInvocationID;
    NSString *_status;
    NSString *_invocationTrackingID;
    NSMutableArray *_any;

}


/**
 
 The duplicate InvocationID.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *duplicateInvocationID;

/**
 
 The status of the previous call that used the InvocationID.
 
 
 type: string constant in Trading_InvocationStatusType.h
*/
@property (nonatomic, retain) NSString *status;

/**
 
 The id that identifies the business item the previous API invocation
 created. For example, the ItemID of the item created by an AddItem call.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *invocationTrackingID;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
