// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AmountType.h"



/**
 
 The order line item against which the refund was issued.
 If an order ID is present, it indicates that the refund was issued against the entire order.
 If an item ID and transaction ID are present, that indicates that the refund was issued against that particular order line item.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_RefundLineType : Trading_AmountType {

@private
    NSString *_type;

}


/**
 (public property)
 
 type: string constant in Trading_RefundLineTypeCodeType.h
*/
@property (nonatomic, retain) NSString *type;


@end
