// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import "Trading_DaysCodeType.h"

/**
 @file
 
 Specifies the range of days the seller can be contacted.
 
*/

/**
 
 Seller does not want to be contacted. Contact hours will not be supported for
 any days. If contact hours are specified, they will be ignored.
 
*/
NSString *const Trading_DaysCodeType_NONE = @"None";

/**
 
 Seller can be contacted any day during the specified contact hours.
 
*/
NSString *const Trading_DaysCodeType_EVERY_DAY = @"EveryDay";

/**
 
 Seller can be contacted Monday through Friday during the specified
 contact hours.
 
*/
NSString *const Trading_DaysCodeType_WEEKDAYS = @"Weekdays";

/**
 
 Seller can  be contacted Saturday or Sunday during the specified
 contact hours.
 
*/
NSString *const Trading_DaysCodeType_WEEKENDS = @"Weekends";

/**
 
 (out) Reserved for internal or future use.
 
*/
NSString *const Trading_DaysCodeType_CUSTOM_CODE = @"CustomCode";