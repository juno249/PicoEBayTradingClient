// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
  Defines the affiliation status for a nonprofit charity organization registered with the dedicated eBay Giving Works provider.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_CharityAffiliationType : NSObject <PicoBindable> {

@private
    NSMutableArray *_any;
    NSString *_id;
    NSString *_type;

}


/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *id;

/**
 (public property)
 
 type: string constant in Trading_CharityAffiliationTypeCodeType.h
*/
@property (nonatomic, retain) NSString *type;


@end
