// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractResponseType.h"


@class Trading_CrossPromotionsType;

/**
 
 <b>No longer recommended.</b> The eBay Store Cross Promotions are no longer supported in the Trading API, so the 
 <b>CrossPromotion</b> container will either not be returned, or, if it is 
 returned, the data in the container may not be accurate. Returns a list of either upsell or cross-sell items for a given item ID.
 The list can be filtered by the viewer's role, either buyer or seller.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_GetCrossPromotionsResponseType : Trading_AbstractResponseType {

@private
    Trading_CrossPromotionsType *_crossPromotion;

}


/**
 
   eBay Store Cross Promotions are no longer supported in the Trading API, so the 
 <b>CrossPromotion</b> container will either not be returned, or, if it is 
 returned, the data in the container may not be accurate. A list of cross-promoted items defined for a specific
   referring item. The list is either upsell or cross-sell
   items, according to the value of PromotionMethod in
   GetCrossPromotionsRequest.
 
 
 type : class Trading_CrossPromotionsType
*/
@property (nonatomic, retain) Trading_CrossPromotionsType *crossPromotion;


@end