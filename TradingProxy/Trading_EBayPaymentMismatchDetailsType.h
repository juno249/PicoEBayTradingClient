// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_AmountType;

/**
 
 Complex type that defines the <b>eBayPaymentMismatchDetails</b> container, which
 is returned when a buyer's payment does not match the total cost of an order going through
 the new eBay payment process. This type is only applicable for German and Austrian orders going
 through the new eBay payment process.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_EBayPaymentMismatchDetailsType : NSObject <PicoBindable> {

@private
    NSString *_mismatchType;
    NSDate *_actionRequiredBy;
    Trading_AmountType *_mismatchAmount;
    NSMutableArray *_any;

}


/**
 
 This enumeration value indicates if the buyer has overpaid or underpaid for an order
 going through the new eBay payment process. This field is always returned with the
 <b>eBayPaymentMismatchDetails</b> container.
 <br>
 <br>
 <span class="tablenote"><b>Note:</b>
 The introduction of the new eBay payment process for the entire German and
 Austrian eBay marketplace has been delayed until further notice.</span>
 <br>
 
 
 type: string constant in Trading_MismatchTypeCodeType.h
*/
@property (nonatomic, retain) NSString *mismatchType;

/**
 
 This dateTime value indicates the date by which the seller needs to accept or reject the
 overpayment/underpayment. If the seller doesn't take action by this date, eBay returns
 the payment to the buyer and essentially voids the sale. This field is always returned
 with the <b>eBayPaymentMismatchDetails</b> container.
 <br>
 <br>
 <span class="tablenote"><b>Note:</b>
 The introduction of the new eBay payment process for the entire German and
 Austrian eBay marketplace has been delayed until further notice.</span>
 <br>
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *actionRequiredBy;

/**
 
 This value indicates the amount in which the buyer's payment was either over
 (<b>MismatchType</b>=OverPayment) or under
 (<b>MismatchType</b>=UnderPayment) the actual total
 cost of an order going through the new eBay payment process.
 <br>
 <br>
 <span class="tablenote"><b>Note:</b>
 The introduction of the new eBay payment process for the entire German and
 Austrian eBay marketplace has been delayed until further notice.</span>
 <br>
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *mismatchAmount;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
