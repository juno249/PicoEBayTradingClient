// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Details the recoupment policy on this site.  There are two sites involved in recoupment - the listing site
 and the user registration site, each of which must agree before eBay enforces recoupment for a seller and listing.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_RecoupmentPolicyDetailsType : NSObject <PicoBindable> {

@private
    NSNumber *_enforcedOnListingSite;
    NSNumber *_enforcedOnRegistrationSite;
    NSString *_detailVersion;
    NSDate *_updateTime;
    NSMutableArray *_any;

}


/**
 
 Indicates whether recoupment policy is enforced on the site on which the item is listed.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *enforcedOnListingSite;

/**
 
 Indicates whether recoupment policy is enforced on the registration site for which the call is made.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *enforcedOnRegistrationSite;

/**
 
 Returns the latest version number for this field. The version can be
 used to determine if and when to refresh cached client data.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *detailVersion;

/**
 
 Gives the time in GMT that the feature flags for the details were last
 updated. This timestamp can be used to determine if and when to refresh
 cached client data.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *updateTime;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
