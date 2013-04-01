// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_BidGroupType;

/**
 
 This type is deprecated as the Bid Assistant feature is no longer available.
  
       
      
 
 @ingroup EBayAPIInterface
*/
@interface Trading_BidGroupArrayType : NSObject <PicoBindable> {

@private
    NSMutableArray *_bidGroup;

}


/**
 
         
 Contains a list of bid groups.
 
 
 entry type : class Trading_BidGroupType
*/

@property (nonatomic, retain) NSMutableArray *bidGroup;


@end
