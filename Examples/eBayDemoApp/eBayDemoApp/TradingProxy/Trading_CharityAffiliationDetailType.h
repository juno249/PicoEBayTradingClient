// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 The information of nonprofit charity organization affiliation.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_CharityAffiliationDetailType : NSObject <PicoBindable> {

@private
    NSString *_charityID;
    NSString *_affiliationType;
    NSDate *_lastUsedTime;
    NSMutableArray *_any;

}


/**
 
 The affiliation ID for nonprofit charity organizations
 registered with the dedicated eBay Giving Works provider.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *charityID;

/**
 
 Indicates the affiliation status of the nonprofit charity
 organization registered with the eBay Giving Works provider.
 
 
 type: string constant in Trading_CharityAffiliationTypeCodeType.h
*/
@property (nonatomic, retain) NSString *affiliationType;

/**
 
 Indicates the affiliation last used date of the nonprofit charity
 organization registered with the eBay Giving Works provider.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *lastUsedTime;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end