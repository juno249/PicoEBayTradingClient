// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractRequestType.h"



/**
 
 This type is deprecated as the call is no longer available.
 
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_GetProductFinderXSLRequestType : Trading_AbstractRequestType {

@private
    NSString *_fileName;
    NSString *_fileVersion;

}


/**
 
 
 The name of the XSL file to retrieve. If not specified, the call
 returns the latest versions of all available XSL files.
 Currently, this call only retrieves the product_finder.xsl file.
 FileName is an optional input.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *fileName;

/**
 
 
 The desired version of the XSL file. Required if FileName is specified.
 If not specified, the call returns the latest versions of all
 available XSL files that could be returned by the call.
 (Currently, this call only retrieves the product_finder.xsl file.)
 This is not a filter for retrieving changes to the XSL file.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *fileVersion;


@end
