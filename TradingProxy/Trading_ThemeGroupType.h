// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Data for one theme group. Returned for GetDescriptionTemplates
 if theme groups are requested.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_ThemeGroupType : NSObject <PicoBindable> {

@private
    NSNumber *_groupID;
    NSString *_groupName;
    NSMutableArray *_themeID;
    NSNumber *_themeTotal;
    NSMutableArray *_any;

}


/**
 
 Unique identifier for this theme group.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *groupID;

/**
 
 Name of this theme group (localized to the language associated
 with the eBay site).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *groupName;

/**
 
 Unique identifier for each theme in this group. There
 is at least one theme in a theme group.
 
 
 entry type : NSNumber, wrapper for primitive int
*/

@property (nonatomic, retain) NSMutableArray *themeID;

/**
 
 The number of ThemeID elements in this group.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *themeTotal;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
