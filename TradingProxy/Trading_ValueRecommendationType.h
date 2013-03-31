// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_RecommendationValidationRulesType;

/**
 
 Defines details about recommended values for custom Item Specifics.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_ValueRecommendationType : NSObject <PicoBindable> {

@private
    NSString *_value;
    Trading_RecommendationValidationRulesType *_validationRules;
    NSMutableArray *_any;

}


/**
 
 A recommended value for the Item Specific. Only returned when 
 a recommended value is available.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *value;

/**
 
 Constraints that eBay places on this Item Specific value.<br>
 <br>
 Only returned when you configure your request to include 
 relationships and/or confidence, and a recommended value 
 is available. 
 (Not returned when ExcludeRelationships is true and 
 IncludeConfidence is false.)
 
 
 type : class Trading_RecommendationValidationRulesType
*/
@property (nonatomic, retain) Trading_RecommendationValidationRulesType *validationRules;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end