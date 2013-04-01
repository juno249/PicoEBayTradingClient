// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_TimeZoneDetailsType.h"

@implementation Trading_TimeZoneDetailsType

@synthesize timeZoneID = _timeZoneID;
@synthesize standardLabel = _standardLabel;
@synthesize standardOffset = _standardOffset;
@synthesize daylightSavingsLabel = _daylightSavingsLabel;
@synthesize daylightSavingsOffset = _daylightSavingsOffset;
@synthesize daylightSavingsInEffect = _daylightSavingsInEffect;
@synthesize detailVersion = _detailVersion;
@synthesize updateTime = _updateTime;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"TimeZoneID" propertyName:@"timeZoneID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"timeZoneID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"StandardLabel" propertyName:@"standardLabel" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"standardLabel"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"StandardOffset" propertyName:@"standardOffset" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"standardOffset"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"DaylightSavingsLabel" propertyName:@"daylightSavingsLabel" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"daylightSavingsLabel"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"DaylightSavingsOffset" propertyName:@"daylightSavingsOffset" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"daylightSavingsOffset"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"DaylightSavingsInEffect" propertyName:@"daylightSavingsInEffect" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"daylightSavingsInEffect"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"DetailVersion" propertyName:@"detailVersion" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"detailVersion"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"UpdateTime" propertyName:@"updateTime" type:PICO_TYPE_DATE clazz:nil];
    [map setObject:ps forKey:@"updateTime"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.timeZoneID = nil;
    self.standardLabel = nil;
    self.standardOffset = nil;
    self.daylightSavingsLabel = nil;
    self.daylightSavingsOffset = nil;
    self.daylightSavingsInEffect = nil;
    self.detailVersion = nil;
    self.updateTime = nil;
    self.any = nil;
    [super dealloc];
}

@end