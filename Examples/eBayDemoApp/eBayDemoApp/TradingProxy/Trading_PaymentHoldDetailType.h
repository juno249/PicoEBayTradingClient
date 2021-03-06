// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_RequiredSellerActionArrayType;

/**
 
 This type defines the <b>PaymentHoldDetails</b> container, which
 consists of information related to the payment hold on the order, including the
 reason why the buyer's payment for the order is being held, the expected
 release date of the funds into the seller's account, and possible action(s) the
 seller can take to expedite the payout of funds into their account.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_PaymentHoldDetailType : NSObject <PicoBindable> {

@private
    NSDate *_expectedReleaseDate;
    Trading_RequiredSellerActionArrayType *_requiredSellerActionArray;
    NSNumber *_numOfReqSellerActions;
    NSString *_paymentHoldReason;
    NSMutableArray *_any;

}


/**
 
 Timestamp that indicates the expected date in which eBay/PayPal will
 distribute the funds to the seller's account. This is not a firm date and
 is subject to change.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *expectedReleaseDate;

/**
 
 Container consisting of one or more <b>RequiredSellerAction</b> fields.
 <b>RequiredSellerAction</b> fields provide possible actions that a seller can take to
 expedite the release of funds into their account.
 
 
 type : class Trading_RequiredSellerActionArrayType
*/
@property (nonatomic, retain) Trading_RequiredSellerActionArrayType *requiredSellerActionArray;

/**
 
 Integer value that indicates the number of possible actions that a seller
 can take to possibly expedite the release of funds into their account. This
 value should equal the number of <b>RequiredSellerAction</b>
 fields contained in the <b>RequiredSellerActionArray</b>
 container.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *numOfReqSellerActions;

/**
 
 Enumerated value that indicates why the buyer's payment for the order is
 being held by PayPal instead of being distributed to the seller's account.
 A seller's funds for an order can be held by PayPal for as little as three
 days after the buyer receives the order, but the hold can be up to 21 days
 based on the scenario, and in some cases, the seller's lack of action in
 helping to expedite the release of funds.
 
 
 type: string constant in Trading_PaymentHoldReasonCodeType.h
*/
@property (nonatomic, retain) NSString *paymentHoldReason;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
