// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_CharityAffiliationDetailType;

/**
 
 Lists the nonprofit charity organization affiliations for a specified user.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_CharityAffiliationDetailsType : NSObject <PicoBindable> {

@private
    NSMutableArray *_charityAffiliationDetail;

}


/**
 
 Indicates the affiliation status for nonprofit charity organizations
 registered with the dedicated eBay Giving Works provider.
 
 
 entry type : class Trading_CharityAffiliationDetailType
*/

@property (nonatomic, retain) NSMutableArray *charityAffiliationDetail;


@end
