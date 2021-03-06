// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import "Trading_VariationSpecificsRuleCodeType.h"

/**
 @file
 
 Defines option for whether an Item Specific can be used as a variation specific.
 
*/

/**
 
 The recommended name (and values, if any) can be used
 either in the Item Specifics or VariationSpecifics context
 in listing calls.
 This is the default for variation-enabled categories.
 
*/
NSString *const Trading_VariationSpecificsRuleCodeType_ENABLED = @"Enabled";

/**
 
 The recommended name/values can't be used in VariationSpecifics
 (but they can be used in ItemSpecifics). Typically, this occurs
 when the category doesn't support variations, or if the category
 requires the name to be the same for all variations
 in the listing.
 
*/
NSString *const Trading_VariationSpecificsRuleCodeType_DISABLED = @"Disabled";

/**
 
 Reserved for future use.
 
*/
NSString *const Trading_VariationSpecificsRuleCodeType_CUSTOM_CODE = @"CustomCode";
