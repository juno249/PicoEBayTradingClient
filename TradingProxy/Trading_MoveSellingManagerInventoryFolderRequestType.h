// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractRequestType.h"



/**
 
   Moves a Selling Manager inventory folder.
 <br><br>
 This call is subject to change without notice; the deprecation process is
 inapplicable to this call.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_MoveSellingManagerInventoryFolderRequestType : Trading_AbstractRequestType {

@private
    NSNumber *_folderID;
    NSNumber *_newParentFolderID;

}


/**
 
   Unique ID of the folder that will be moved. User can retrieve the FolderId
 using GetSellingManagerInventoryFolder.
  
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, retain) NSNumber *folderID;

/**
 
   Unique folder ID for the new parent folder. If no NewParentFolderID is
 submitted, the folder is moved to the root level.
  
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, retain) NSNumber *newParentFolderID;


@end
