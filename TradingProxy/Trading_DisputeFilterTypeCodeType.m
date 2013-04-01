// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import "Trading_DisputeFilterTypeCodeType.h"

/**
 @file
 
 Enumeration type that specifies the dispute filters that can be used in the
 DisputeFilterType field of the GetUserDisputes call. Note that eBay Buyer
 Protection cases are not returned with the GetUserDisputes call, regardless of
 the filter that is used.
 
*/

/**
 
 If used, this filter returns all open and closed disputes that involve the caller as a buyer
 or seller.
 
*/
NSString *const Trading_DisputeFilterTypeCodeType_ALL_INVOLVED_DISPUTES = @"AllInvolvedDisputes";

/**
 
 If used, this filter returns all open disputes that involve the caller as a buyer
 or seller and are awaiting a response from the caller. This is the default DisputeFilterType value. In other words, if no DisputeFilterType is specified in the request, only those disputes where the caller's response is due are returned.
 
*/
NSString *const Trading_DisputeFilterTypeCodeType_DISPUTES_AWAITING_MY_RESPONSE = @"DisputesAwaitingMyResponse";

/**
 
 If used, this filter returns all open disputes that involve the caller as a buyer or seller and
 are awaiting a response from the other party.
 
*/
NSString *const Trading_DisputeFilterTypeCodeType_DISPUTES_AWAITING_OTHER_PARTY_RESPONSE = @"DisputesAwaitingOtherPartyResponse";

/**
 
 If used, this filter returns all closed disputes that involve the caller as a buyer
 or seller.
 
*/
NSString *const Trading_DisputeFilterTypeCodeType_ALL_INVOLVED_CLOSED_DISPUTES = @"AllInvolvedClosedDisputes";

/**
 
 If used, this filter returns all disputes that involve the caller as a buyer
 or seller and are eligible for a Final Value Fee credit, regardless of
 whether or not the credit has been granted.
 
*/
NSString *const Trading_DisputeFilterTypeCodeType_ELIGIBLE_FOR_CREDIT = @"EligibleForCredit";

/**
 
 If used, this filter returns all open and closed Unpaid Item disputes that
 involve the caller as a buyer or seller.
 
*/
NSString *const Trading_DisputeFilterTypeCodeType_UNPAID_ITEM_DISPUTES = @"UnpaidItemDisputes";

/**
 
 If used, this filter returns all open and closed Item Not Received disputes
 that involve the caller as a buyer or seller.
 
*/
NSString *const Trading_DisputeFilterTypeCodeType_ITEM_NOT_RECEIVED_DISPUTES = @"ItemNotReceivedDisputes";

/**
 
 Reserved for future use.
 
*/
NSString *const Trading_DisputeFilterTypeCodeType_CUSTOM_CODE = @"CustomCode";