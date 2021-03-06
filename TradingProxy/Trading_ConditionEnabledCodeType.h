// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>

/**
 @file
 
 Values indicate whether the ConditionID field is enabled, disabled or required for a category.
 
 
 @ingroup EBayAPIInterface
*/

/**
 
 Item condition is not supported for the category.
 Do not pass ConditionID in AddItem and related calls.
 
*/
extern NSString *const Trading_ConditionEnabledCodeType_DISABLED;

/**
 
 Item condition is supported for the category.
 You can pass ConditionID to specify the condition
 in AddItem and related calls.
 
*/
extern NSString *const Trading_ConditionEnabledCodeType_ENABLED;

/**
 
 Item condition is required for the category.
 You must use ConditionID to specify the condition
 in AddItem and related calls.
 
*/
extern NSString *const Trading_ConditionEnabledCodeType_REQUIRED;

/**
 
 (out) Reserved for internal or future use.
   
*/
extern NSString *const Trading_ConditionEnabledCodeType_CUSTOM_CODE;
