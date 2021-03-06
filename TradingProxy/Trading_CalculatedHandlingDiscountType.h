// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_AmountType;

/**
 
 Instructions on packaging/handling costs for combined payment.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_CalculatedHandlingDiscountType : NSObject <PicoBindable> {

@private
    NSString *_discountName;
    Trading_AmountType *_orderHandlingAmount;
    Trading_AmountType *_eachAdditionalAmount;
    Trading_AmountType *_eachAdditionalOffAmount;
    NSNumber *_eachAdditionalPercentOff;
    NSMutableArray *_any;

}


/**
 
 The type of discount that is detailed in the profile.
 If the selection is EachAdditionalAmount, EachAdditionalAmountOff or
 EachAdditionalPercentOff, the value is set in the child element of same
 name in CalculatedHandlingDiscount. If the selection is CombinedHandlingFee,
 specify the amount in CalculatedHandlingDiscount.OrderHandlingAmount.
 If the selection is IndividualHandlingFee, the amount is determined by eBay
 by adding the fees of the individual items.
 
 
 type: string constant in Trading_HandlingNameCodeType.h
*/
@property (nonatomic, retain) NSString *discountName;

/**
 
 If specified, this is the fixed shipping cost to charge for an order,
 regardless of the number of items in the order.
 This field is mutually exclusive with the other amount and percentage
 fields within this type.
 This field only applies when DiscountName is CombinedHandlingFee.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *orderHandlingAmount;

/**
 
 The packaging/handling cost for each item beyond the first item (where the
 item with the highest packaging/handling cost is selected by eBay as the first
 item). Let's say the buyer purchases three items, each assigned a
 packaging/handling cost of $8, and the seller set EachAdditionalAmount to $6.
 The packaging/handling cost for three items would normally be $24, but since
 the seller specified $6, the total packaging/handling cost would be $8 + $6 +
 $6, or $20.
 This field is mutually exclusive with the other amount and percentage
 fields within this type.
 This field only applies when DiscountName is EachAdditionalAmount.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *eachAdditionalAmount;

/**
 
 The amount by which to reduce the packaging/handling cost for each item beyond
 the first item (where the item with the highest packaging/handling cost is
 selected by eBay as the first item). Let's say the buyer purchases three
 items, each assigned a packaging/handling cost of $8, and the seller set
 EachAdditionalAmountOff to $2.  The packaging/handling cost for three items
 would normally be $24, but since the seller specified $2, the total
 packaging/handling cost would be $24 - (two additional items x $2), or $20.
 This field is mutually exclusive with the other amount and percentage
 fields within this type.
 This field only applies when DiscountName is EachAdditionalOffAmount.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *eachAdditionalOffAmount;

/**
 
 The percentage by which to reduce the packaging/handling cost for each item
 beyond the first item (where the item with the highest packaging/handling cost
 is selected by eBay as the first item). Let's say the buyer purchases three
 items, each assigned a packaging/handling cost of $8, and the seller set
 EachAdditionalPercentOff to 0.25.  The packaging/handling cost for three items
 would normally be $24, but since the seller specified 0.25 ($2 out of 8), the
 total packaging/handling cost would be $24 - (two additional items x $2), or
 $20.
 This field is mutually exclusive with the amount fields within this type.
 This field only applies when DiscountName is EachAdditionalPercentOff.
 
 
 type : NSNumber, wrapper for primitive float
*/
@property (nonatomic, retain) NSNumber *eachAdditionalPercentOff;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
