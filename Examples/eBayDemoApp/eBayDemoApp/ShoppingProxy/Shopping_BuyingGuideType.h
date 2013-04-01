// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Information that identifies a buying guide. A buying guide provides content about particular
 product areas, categories, or subjects to help buyers decide which type of item
 to purchase based on their particular interests.
 Buying guides are useful to buyers who do not have a specific product in mind.
 For example, a digital camera buying guide could help a buyer determine what kind of
 digital camera is right for them.
 
 
 @ingroup ShoppingInterface
*/
@interface Shopping_BuyingGuideType : NSObject <PicoBindable> {

@private
    NSString *_name;
    NSString *_url;
    NSString *_categoryID;
    NSString *_title;
    NSString *_text;
    NSDate *_creationTime;
    NSString *_userID;
    NSMutableArray *_any;

}


/**
 
 Display name of the buying guide. <br>
 <br>
 FindReviewsAndGuides only returns 20 characters, followed by "..." if the name is
 longer than 20 characters. For the full title, see BuyingGuide.Title
 instead.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *name;

/**
 
 URL for the buying guide. Your application can
 present this as a link. Use the value of Name or Title as the link's display name.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *url;

/**
 
 Identifies the category (if any) that is associated
 with the buying guide. For FindReviewsAndGuides, this can be a category that is higher or lower in the hierarchy
 than the category specified in the request. For a matching categories search,
 you can use this information to determine the order that the buying guides are
 returned in when multiple guides are found.
 Optionally, you can use this information to determine where to present
 the buying guide link in your application.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *categoryID;

/**
 
 The title of the buying guide.
    
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *title;

/**
 
 The text of the guide. If the guide is longer than
 2000 characters, the text is cut off and it ends with "...".
 See BuyingGuide.URL for a link to the full text of the review.
    
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *text;

/**
 
 The time and date when the guide was posted.
    
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *creationTime;

/**
 
 The author's eBay user ID.
    
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *userID;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
