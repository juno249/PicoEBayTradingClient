// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import "Trading_RecommendationEngineCodeType.h"

/**
 @file
 
 RecommendationEngineCodeType - Type declaration to be used by other schema.
 Identifies the engines that can be used to analyze proposed listing data.
 See the Developer's Guide for a list of recommendation engines that
 are currently operational.
 
*/

/**
 
 (in) Listing Analyzer engine; Returns tips related to fields
 that a seller wants to specify in a listing.
 
*/
NSString *const Trading_RecommendationEngineCodeType_LISTING_ANALYZER = @"ListingAnalyzer";

/**
 
 (in) Reserved for internal or future use.
 
*/
NSString *const Trading_RecommendationEngineCodeType_SIFFTAS = @"SIFFTAS";

/**
 
 (in) Product Pricing engine. Returns average start and sold prices
 of completed items that were listed a specified product ID.
 
*/
NSString *const Trading_RecommendationEngineCodeType_PRODUCT_PRICING = @"ProductPricing";

/**
 
 (out) Reserved for internal or future use.
 
*/
NSString *const Trading_RecommendationEngineCodeType_CUSTOM_CODE = @"CustomCode";

/**
 
 (in) Suggested Attributes engine. Returns suggested attributes
 and catalog products (for Pre-filled Item Information) that have been
 used by other sellers who listed similar items in the same category.
 
*/
NSString *const Trading_RecommendationEngineCodeType_SUGGESTED_ATTRIBUTES = @"SuggestedAttributes";

/**
 
 (in) Custom Item Specifics engine. Returns the most popular
 names and values to use for custom Item Specifics based the
 requested category (and the Title, if specified).
 
*/
NSString *const Trading_RecommendationEngineCodeType_ITEM_SPECIFICS = @"ItemSpecifics";
