// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>

/**
 @file
 
 HitCounterCodeType - Type declaration to be used by other schema.
 Indicates whether a hit counter is used for the item's listing page
 and, if so, what type.
 
 
 @ingroup EBayAPIInterface
*/

/**
 
 No hit counter. The number of page views will not be available.
 
*/
extern NSString *const Trading_HitCounterCodeType_NO_HIT_COUNTER;

/**
 
 A basic style hit counter (US only). Non-US sites will return errors if they use HonestyStyle as input, and should use BasicStyle instead.
 
*/
extern NSString *const Trading_HitCounterCodeType_HONESTY_STYLE;

/**
 
 A green LED, computer-style hit counter (US only). Non-US sites will return errors if they use GreenLED as input, and should use RetroStyle instead.
 
*/
extern NSString *const Trading_HitCounterCodeType_GREEN_LED;

/**
 
 A hidden hit counter (US only). The number of page views will only be available to
 the item's seller. For faster "View Item" page loads, use HiddenStyle.
 
*/
extern NSString *const Trading_HitCounterCodeType_HIDDEN;

/**
 
 A basic style hit counter.
 
*/
extern NSString *const Trading_HitCounterCodeType_BASIC_STYLE;

/**
 
  A retro, computer-style hit counter.
 
*/
extern NSString *const Trading_HitCounterCodeType_RETRO_STYLE;

/**
 
 A hidden hit counter. The number of page views will only be available to
 the item's seller.
 
*/
extern NSString *const Trading_HitCounterCodeType_HIDDEN_STYLE;

/**
 
 Reserved for internal or future use
 
*/
extern NSString *const Trading_HitCounterCodeType_CUSTOM_CODE;
