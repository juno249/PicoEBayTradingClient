// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 User data related to notifications. Note that SMS is currently reserved for future use.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_SMSSubscriptionType : NSObject <PicoBindable> {

@private
    NSString *_smsPhone;
    NSString *_userStatus;
    NSString *_carrierID;
    NSString *_errorCode;
    NSString *_itemToUnsubscribe;
    NSMutableArray *_any;

}


/**
 
 The wireless phone number to be used for receiving SMS messages.
 Max length of phone number varies by country.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *smsPhone;

/**
 
 Registered/Unregistered/Pending.
 
 
 type: string constant in Trading_SMSSubscriptionUserStatusCodeType.h
*/
@property (nonatomic, retain) NSString *userStatus;

/**
 
 The wireless carrier ID.
 
 
 type: string constant in Trading_WirelessCarrierIDCodeType.h
*/
@property (nonatomic, retain) NSString *carrierID;

/**
 
 Reason for SMS subscription error (postback from thired-party integrator).
 
 
 type: string constant in Trading_SMSSubscriptionErrorCodeCodeType.h
*/
@property (nonatomic, retain) NSString *errorCode;

/**
 
 ID of item to unsubscribe from SMS notification.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemToUnsubscribe;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end