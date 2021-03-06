// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 For the US, Canada and Australia sites, users registered after January 17,2007 are
 required to offer at least one safe payment method (i.e. PayPal/PaisaPay, or one
 of the credit cards specified in Item.PaymentMethods).
 <br>
 If a seller has a 'SafePaymentExempt' status, they are exempt from the category
 requirement to offer at least one safe payment method when listing an item on a
 site that has the safe payment requirement.
 <br>
 The safe payment requirement also applies to two-category listings that have one
 ship-to or available-to location in the US, Canada, or Australia. The French
 Canadian (CAFR) site is a special case, because listings on the CAFR site with
 ship-to or available-to locations in Canada do not require a Safe Payment method,
 yet listings on the CAFR site with ship-to or available-to locations in the US or
 Australia do require a safe payment method.
 <br>
 The Business and Industrial, Motors, Real Estate, and Mature Audiences categories,
 and all listings that don't support Item.PaymentMethods are exempt from this
 requirement. Therefore, listings in those categories do not require a safe payment
 method.
 <br>
 Currently, this field contains no other special meta-data.(An empty element is
 returned.)
 <br>
 Use SiteDefaults.SafePaymentRequired and Category.SafePaymentRequired to determine
 which categories require a safe payment method.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_SafePaymentRequiredDefinitionType : NSObject <PicoBindable> {

@private
    NSMutableArray *_any;

}


/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
