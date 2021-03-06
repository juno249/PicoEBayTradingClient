// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractRequestType.h"



/**
 
 Retrieves usage information about platform notifications for a given application.
 You can use this notification information to troubleshoot issues with platform
 notifications. You can call this up to 50 times per hour for a given application.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_GetNotificationsUsageRequestType : Trading_AbstractRequestType {

@private
    NSDate *_startTime;
    NSDate *_endTime;
    NSString *_itemID;

}


/**
 
 Specifies the start date and time for which notification information
 will be retrieved. StartTime is optional. If no StartTime is specified,
 the default value of 24 hours prior to the call time is used. If no
 StartTime is specified or if an invalid StartTime is specified, date
 range errors are returned in the response. For a StartTime to be valid,
 it must be no more than 72 hours before the time of the call, it cannot
 be more recent than the EndTime, and it cannot be later than the time of
 the call. If an invalid StartTime is specified, the default value is
 used.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *startTime;

/**
 
 Specifies the end date and time for which notification information
 will be retrieved. EndTime is optional. If no EndTime is specified,
 the current time (the time the call is made) is used. If no EndTime
 is specified or if an invalid EndTime is specified, date range errors
 are returned in the response. For an EndTime to be valid, it must be no
 more than 72 hours before the time the of the call, it cannot be before
 the StartTime, and it cannot be later than the time of the call. If an
 invalid EndTime is specified, the current time is used.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *endTime;

/**
 
 Specifies an item ID for which detailed notification information will be
 retrieved. ItemID is optional. If no ItemID is specified, the response
 will not include any individual notification details.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemID;


@end
