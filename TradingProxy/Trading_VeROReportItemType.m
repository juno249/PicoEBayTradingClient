// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_VeROReportItemType.h"

@implementation Trading_VeROReportItemType

@synthesize itemID = _itemID;
@synthesize veROReasonCodeID = _veROReasonCodeID;
@synthesize messageToSeller = _messageToSeller;
@synthesize copyEmailToRightsOwner = _copyEmailToRightsOwner;
@synthesize region = _region;
@synthesize country = _country;
@synthesize patent = _patent;
@synthesize detailedMessage = _detailedMessage;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ItemID" propertyName:@"itemID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"itemID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"VeROReasonCodeID" propertyName:@"veROReasonCodeID" type:PICO_TYPE_LONG clazz:nil];
    [map setObject:ps forKey:@"veROReasonCodeID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"MessageToSeller" propertyName:@"messageToSeller" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"messageToSeller"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CopyEmailToRightsOwner" propertyName:@"copyEmailToRightsOwner" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"copyEmailToRightsOwner"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"Region" propertyName:@"region" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"region"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"Country" propertyName:@"country" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"country"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Patent" propertyName:@"patent" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"patent"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"DetailedMessage" propertyName:@"detailedMessage" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"detailedMessage"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.itemID = nil;
    self.veROReasonCodeID = nil;
    self.messageToSeller = nil;
    self.copyEmailToRightsOwner = nil;
    self.region = nil;
    self.country = nil;
    self.patent = nil;
    self.detailedMessage = nil;
    self.any = nil;
    [super dealloc];
}

@end
