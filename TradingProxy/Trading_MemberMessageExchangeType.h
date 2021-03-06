// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_ItemType;
@class Trading_MemberMessageType;

/**
 
 Container for message metadata.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_MemberMessageExchangeType : NSObject <PicoBindable> {

@private
    Trading_ItemType *_item;
    Trading_MemberMessageType *_question;
    NSMutableArray *_response;
    NSString *_messageStatus;
    NSDate *_creationDate;
    NSDate *_lastModifiedDate;
    NSMutableArray *_any;

}


/**
 
 The item about which the question was asked. Returned if the parent container is returned.
 
 
 type : class Trading_ItemType
*/
@property (nonatomic, retain) Trading_ItemType *item;

/**
 
 Contains all the information about the question being asked.  Returned if the
 parent container is returned.
 
 
 type : class Trading_MemberMessageType
*/
@property (nonatomic, retain) Trading_MemberMessageType *question;

/**
 
 An answer to the question. Returned if the parent container is returned.
 <br/><br/>
 For GetAdFormatLeads, returned if the seller responded to the
 lead's question. Contains the body of the seller's response
 message.
 
 
 entry type : NSString, wrapper for primitive string
*/

@property (nonatomic, retain) NSMutableArray *response;

/**
 
 The status of the message. Returned if the parent container is returned.
 
 
 type: string constant in Trading_MessageStatusTypeCodeType.h
*/
@property (nonatomic, retain) NSString *messageStatus;

/**
 
 Date the message was created. Returned if the parent container is returned.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *creationDate;

/**
 
 Date the message was last modified. Returned if the parent container is returned.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *lastModifiedDate;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
