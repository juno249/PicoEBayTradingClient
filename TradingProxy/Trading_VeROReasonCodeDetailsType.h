// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_VeROSiteDetailType;

/**
 
 Container for reason code details for all sites.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_VeROReasonCodeDetailsType : NSObject <PicoBindable> {

@private
    NSMutableArray *_veROSiteDetail;

}


/**
 
 Contains reason code details for a site.
 
 
 entry type : class Trading_VeROSiteDetailType
*/

@property (nonatomic, retain) NSMutableArray *veROSiteDetail;


@end
