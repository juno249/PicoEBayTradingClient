// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_MemberMessageType.h"

@implementation Trading_MemberMessageType

@synthesize messageType = _messageType;
@synthesize questionType = _questionType;
@synthesize emailCopyToSender = _emailCopyToSender;
@synthesize hideSendersEmailAddress = _hideSendersEmailAddress;
@synthesize displayToPublic = _displayToPublic;
@synthesize senderID = _senderID;
@synthesize senderEmail = _senderEmail;
@synthesize recipientID = _recipientID;
@synthesize subject = _subject;
@synthesize body = _body;
@synthesize messageID = _messageID;
@synthesize parentMessageID = _parentMessageID;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"MessageType" propertyName:@"messageType" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"messageType"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"QuestionType" propertyName:@"questionType" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"questionType"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"EmailCopyToSender" propertyName:@"emailCopyToSender" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"emailCopyToSender"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"HideSendersEmailAddress" propertyName:@"hideSendersEmailAddress" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"hideSendersEmailAddress"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"DisplayToPublic" propertyName:@"displayToPublic" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"displayToPublic"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SenderID" propertyName:@"senderID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"senderID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SenderEmail" propertyName:@"senderEmail" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"senderEmail"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"RecipientID" propertyName:@"recipientID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"recipientID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Subject" propertyName:@"subject" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"subject"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Body" propertyName:@"body" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"body"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"MessageID" propertyName:@"messageID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"messageID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ParentMessageID" propertyName:@"parentMessageID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"parentMessageID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.messageType = nil;
    self.questionType = nil;
    self.emailCopyToSender = nil;
    self.hideSendersEmailAddress = nil;
    self.displayToPublic = nil;
    self.senderID = nil;
    self.senderEmail = nil;
    self.recipientID = nil;
    self.subject = nil;
    self.body = nil;
    self.messageID = nil;
    self.parentMessageID = nil;
    self.any = nil;
    [super dealloc];
}

@end
