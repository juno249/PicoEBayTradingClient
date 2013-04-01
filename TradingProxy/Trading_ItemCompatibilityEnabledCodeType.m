// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import "Trading_ItemCompatibilityEnabledCodeType.h"

/**
 @file
 
 Used to indicate whether the parts compatibility feature is enabled for a
 category.
 
*/

/**
 
 Parts Compatibility is not supported for the given category.
 
*/
NSString *const Trading_ItemCompatibilityEnabledCodeType_DISABLED = @"Disabled";

/**
 
 Parts Compatibility may be entered by application only for the given category.
 Entering parts compatibility by application specifies the assemblies (e.g., a
 specific year, make, and model of car) to which the item applies. Parts
 compatibility by application can be specified by listing with a catalog
 product that supports parts compatibility or by specifying parts compatibility
 by application manually (<b
 class="con"> Item.ItemCompatibilityList</b>).
 
*/
NSString *const Trading_ItemCompatibilityEnabledCodeType_BY_APPLICATION = @"ByApplication";

/**
 
 Parts Compatibility may be entered by specification only for the given
 category. Entering parts compatibility by specification involves specifying
 the part's relevant dimensions or characteristics (e.g., Section Width, Aspect
 Ratio, Rim Diammeter, Load Index, and Speed Rating values for a tire) using
 attributes.
 
*/
NSString *const Trading_ItemCompatibilityEnabledCodeType_BY_SPECIFICATION = @"BySpecification";

/**
 
 (out) Reserved for internal or future use.
   
*/
NSString *const Trading_ItemCompatibilityEnabledCodeType_CUSTOM_CODE = @"CustomCode";