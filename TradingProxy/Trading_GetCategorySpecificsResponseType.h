// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractResponseType.h"


@class Trading_RecommendationsType;

/**
 
 Calls made form seller or buyer find out what the most relevant tags and values are for a given category
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_GetCategorySpecificsResponseType : Trading_AbstractResponseType {

@private
    NSMutableArray *_recommendations;
    NSString *_taskReferenceID;
    NSString *_fileReferenceID;

}


/**
 
 Returned with request version 609 and higher. <br>
 <br>
 Contains the most popular Item Specifics, if any, for a category
 specified in the request, or contains information about whether
 the recommendations have changed for that category since
 the LastUpdateTime you requested. <br>
 <br>
 The most relevant Item Specifics (as determined by eBay)
 are returned first. In many cases, the values are returned in
 alphabetical order.<br>
 <br>
 This node returns empty (or it's not returned) for a category if
 there is no applicable data (such as when you request a parent category, a category that has no popular Item Specifics yet,
 or a duplicate category that was already returned).
 If you pass in the CategoryID and Name fields together, but no
 matching values are found for the name, eBay returns the name
 with no values (even if the name is not recommended).<br>
 <br>
 If GetCategoryFeatures indicates that custom Item Specifics are
 enabled for a leaf category, but GetCategorySpecifics doesn't
 return any recommendations for that category, the seller can still
 specify their own custom Item Specifics in that category.
 
 
 entry type : class Trading_RecommendationsType
*/

@property (nonatomic, retain) NSMutableArray *recommendations;

/**
 
 Use TaskReferenceID and FileReferenceID as inputs to the
 downloadFile call in the eBay File Transfer API. That API lets
 you retrieve a single (bulk) GetCategorySpecifics response with
 all the Item Specifics recommendations available for the
 requested site ID. (The downloadFile call downloads a .zip file
 as an attachment.)<br>
 <br>
 Only returned when CategorySpecificsFileInfo is passed in the
 request.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *taskReferenceID;

/**
 
 Use TaskReferenceID and FileReferenceID as inputs to the
 downloadFile call in the eBay File Transfer API. That API lets
 you retrieve a single (bulk) GetCategorySpecifics response with
 all the Item Specifics recommendations available for the
 requested site ID. (The downloadFile call downloads a .zip file
 as an attachment.)<br>
 <br>
 Only returned when CategorySpecificsFileInfo is passed in the
 request.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *fileReferenceID;


@end