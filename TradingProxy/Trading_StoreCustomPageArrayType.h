// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_StoreCustomPageType;

/**
 
   Set of Store custom pages.
   
 
 @ingroup EBayAPIInterface
*/
@interface Trading_StoreCustomPageArrayType : NSObject <PicoBindable> {

@private
    NSMutableArray *_customPage;

}


/**
 
   A Store custom page.
   
 
 entry type : class Trading_StoreCustomPageType
*/

@property (nonatomic, retain) NSMutableArray *customPage;


@end
