// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_ProductInfoType;

/**
  
 Pricing data returned from the Product Pricing engine.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_PricingRecommendationsType : NSObject <PicoBindable> {

@private
    Trading_ProductInfoType *_productInfo;

}


/**
 
             A product's pricing data (if any) and brief information about the product. 
 
 
 type : class Trading_ProductInfoType
*/
@property (nonatomic, retain) Trading_ProductInfoType *productInfo;


@end