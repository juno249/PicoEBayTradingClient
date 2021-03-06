// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractResponseType.h"



/**
 
 This type is deprecated as the call is no longer available.
 
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_GetAttributesCSResponseType : Trading_AbstractResponseType {

@private
    NSString *_attributeSystemVersion;
    NSString *_attributeData;

}


/**
 
 
 Current version of the Item Specifics meta-data system for
 the site.
 This value changes each time changes are made to the meta-data.
 The current version value is not necessarily greater than
 the previous value. Therefore, when comparing versions, only
 compare whether the value has changed.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *attributeSystemVersion;

/**
 
 
 A string containing a list of all the attributes that are
 applicable to the site (or characteristic sets in the request),
 along with related meta-data.
 The meta-data specifies all the possible values of each attribute,
 the logic for presenting attributes to a user, and rules for
 validating the user's selections. Individual
 elements are not described in the eBay schema format.
 For information about each element in the AttributeData string,
 see the attribute model documentation in the
 eBay Web Services guide (see links below).<br>
 <br>
 Because this is returned as a string, the XML markup elements
 are escaped with character entity references (e.g.,
 &amp;lt;eBay&amp;gt;&amp;lt;Attributes&amp;gt;
 ...).
 See the appendices in the eBay Web Services guide for general
 information about string data types.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *attributeData;


@end
