// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>

/**
 @file
 
 Specifies a predefined subset of fields to return. The predefined set of fields
 can vary for different calls. Only applicable to certain calls (see request types
 that include a GranularityLevel property). For calls that support this filter, see
 the eBay Web Services guide for a list of the output fields that are returned for
 each level. Only one level can be specified at a time. For GetSellerList, use
 DetailLevel or GranularityLevel in a given request, but not both. For
 GetSellerList, if GranularityLevel is specified, DetailLevel is ignored.
 
 
 @ingroup EBayAPIInterface
*/

/**
 
 (in) For each record in the response, retrieves less data than Medium.
 See the eBay Web Services guide for a list of the output fields
 that are returned when this level is specified.
 
*/
extern NSString *const Trading_GranularityLevelCodeType_COARSE;

/**
 
 For each record in the response, retrieves more data than Medium.
 See the eBay Web Services guide for a list of the output fields
 that are returned when this level is specified.
 
*/
extern NSString *const Trading_GranularityLevelCodeType_FINE;

/**
 
 For each record in the response, retrieves more data than Coarse and less data
 than Fine. See the eBay Web Services guide for a list of the output fields
 that are returned when this level is specified.
 
*/
extern NSString *const Trading_GranularityLevelCodeType_MEDIUM;

extern NSString *const Trading_GranularityLevelCodeType_CUSTOM_CODE;