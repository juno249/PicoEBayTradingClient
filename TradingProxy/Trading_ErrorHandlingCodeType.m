// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import "Trading_ErrorHandlingCodeType.h"

/**
 @file
 
 Preferences that specify how eBay should handle certain requests that contain
 invalid data or that could partially fail. These preferences give you some control
 over whether eBay returns warnings or errors in response to invalid data and how
 eBay handles listing requests when such data is passed in. For example, these
 preferences are applicable to AddItem and related calls when Item Specifics are
 specified, and to CompleteSale. See the eBay Web Services Guide
 for details about these preferences and their effects.
 
*/

/**
 
 (in) Apply validation rules that were in effect prior to the time
 the call started supporting ErrorHandling.
 
*/
NSString *const Trading_ErrorHandlingCodeType_LEGACY = @"Legacy";

/**
 
 (in) Drop the invalid data, continue processing the request with the
 valid data. If dropping the invalid data leaves the request in a
 state where required data is missing, reject the request.<br>
 <br>
 If BestEffort is specified for CompleteSale, the Ack field in the
 response could return PartialFailure if one change fails but
 another succeeds. For example, if the seller attempts to
 leave feedback twice for the same order line item, the feedback changes
 would fail but any paid or shipped status changes would succeed.
 
*/
NSString *const Trading_ErrorHandlingCodeType_BEST_EFFORT = @"BestEffort";

/**
 
 (in) If any attribute data is invalid, drop the entire attribute set and
 proceed with listing the item. If the category has required attributes
 and the attribute set is dropped, reject the listing.
 
*/
NSString *const Trading_ErrorHandlingCodeType_ALL_OR_NOTHING = @"AllOrNothing";

/**
 
 (in) If any data is invalid, reject the request.
 
*/
NSString *const Trading_ErrorHandlingCodeType_FAIL_ON_ERROR = @"FailOnError";