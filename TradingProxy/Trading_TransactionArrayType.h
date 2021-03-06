// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_TransactionType;

/**
 
 Type defining the <b>TransactionArray</b> container, which contains an
 array of <b>Transaction</b> containers. Each <b>Transaction</b>
 container consists of detailed information on one order line item.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_TransactionArrayType : NSObject <PicoBindable> {

@private
    NSMutableArray *_transaction;

}


/**
 
 The <b>Transaction</b> container consists of detailed information on one
 order line item. Also applicable to Half.com (for <b>GetOrders</b>).
 
 
 entry type : class Trading_TransactionType
*/

@property (nonatomic, retain) NSMutableArray *transaction;


@end
