// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_FeedbackDetailType.h"
#import "Trading_AmountType.h"

@implementation Trading_FeedbackDetailType

@synthesize commentingUser = _commentingUser;
@synthesize commentingUserScore = _commentingUserScore;
@synthesize commentText = _commentText;
@synthesize commentTime = _commentTime;
@synthesize commentType = _commentType;
@synthesize feedbackResponse = _feedbackResponse;
@synthesize followup = _followup;
@synthesize itemID = _itemID;
@synthesize role = _role;
@synthesize itemTitle = _itemTitle;
@synthesize itemPrice = _itemPrice;
@synthesize feedbackID = _feedbackID;
@synthesize transactionID = _transactionID;
@synthesize commentReplaced = _commentReplaced;
@synthesize responseReplaced = _responseReplaced;
@synthesize followUpReplaced = _followUpReplaced;
@synthesize countable = _countable;
@synthesize feedbackRevised = _feedbackRevised;
@synthesize orderLineItemID = _orderLineItemID;
@synthesize any = _any;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    return nil;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CommentingUser" propertyName:@"commentingUser" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"commentingUser"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CommentingUserScore" propertyName:@"commentingUserScore" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"commentingUserScore"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CommentText" propertyName:@"commentText" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"commentText"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CommentTime" propertyName:@"commentTime" type:PICO_TYPE_DATE clazz:nil];
    [map setObject:ps forKey:@"commentTime"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CommentType" propertyName:@"commentType" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"commentType"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"FeedbackResponse" propertyName:@"feedbackResponse" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"feedbackResponse"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Followup" propertyName:@"followup" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"followup"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ItemID" propertyName:@"itemID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"itemID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Role" propertyName:@"role" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"role"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ItemTitle" propertyName:@"itemTitle" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"itemTitle"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ItemPrice" propertyName:@"itemPrice" type:PICO_TYPE_OBJECT clazz:[Trading_AmountType class]];
    [map setObject:ps forKey:@"itemPrice"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"FeedbackID" propertyName:@"feedbackID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"feedbackID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"TransactionID" propertyName:@"transactionID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"transactionID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CommentReplaced" propertyName:@"commentReplaced" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"commentReplaced"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ResponseReplaced" propertyName:@"responseReplaced" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"responseReplaced"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"FollowUpReplaced" propertyName:@"followUpReplaced" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"followUpReplaced"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Countable" propertyName:@"countable" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"countable"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"FeedbackRevised" propertyName:@"feedbackRevised" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"feedbackRevised"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"OrderLineItemID" propertyName:@"orderLineItemID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"orderLineItemID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.commentingUser = nil;
    self.commentingUserScore = nil;
    self.commentText = nil;
    self.commentTime = nil;
    self.commentType = nil;
    self.feedbackResponse = nil;
    self.followup = nil;
    self.itemID = nil;
    self.role = nil;
    self.itemTitle = nil;
    self.itemPrice = nil;
    self.feedbackID = nil;
    self.transactionID = nil;
    self.commentReplaced = nil;
    self.responseReplaced = nil;
    self.followUpReplaced = nil;
    self.countable = nil;
    self.feedbackRevised = nil;
    self.orderLineItemID = nil;
    self.any = nil;
    [super dealloc];
}

@end
