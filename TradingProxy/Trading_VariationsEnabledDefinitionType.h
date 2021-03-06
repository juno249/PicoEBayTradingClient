// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Defines the multi-variation listing feature. If the field is present,
 the  corresponding feature applies to the site. The field is returned as
 an empty element (e.g., a boolean value is not returned).<br>
 <br>
 Multi-variation listings contain items that are logically the same
 product, but that vary in their manufacturing details or packaging.
 For example, a particular brand and style of shirt could be
 available in different sizes and colors, such as "large blue" and
 "medium black" variations.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_VariationsEnabledDefinitionType : NSObject <PicoBindable> {

@private
    NSMutableArray *_any;

}


/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
