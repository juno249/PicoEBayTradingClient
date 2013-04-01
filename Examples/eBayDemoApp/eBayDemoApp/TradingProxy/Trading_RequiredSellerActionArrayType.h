// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 This type defines the <b>RequiredSellerActionArray</b> container,
 which may contain one or more <b>RequiredSellerAction</b> fields.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_RequiredSellerActionArrayType : NSObject <PicoBindable> {

@private
    NSMutableArray *_requiredSellerAction;

}


/**
 
 This field contains a possible action that a seller can take to expedite the
 release of a payment hold. There can be one or more <b>RequiredSellerAction</b>
 fields in the <b>RequiredSellerActionArray</b> container.
 
 
 entry type : string constant in Trading_RequiredSellerActionCodeType.h
*/

@property (nonatomic, retain) NSMutableArray *requiredSellerAction;


@end
