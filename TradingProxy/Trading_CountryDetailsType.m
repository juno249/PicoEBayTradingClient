// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_CountryDetailsType.h"

@implementation Trading_CountryDetailsType

@synthesize country = _country;
@synthesize description = _description;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Country" propertyName:@"country" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"country"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Description" propertyName:@"description" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"description"];
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
    self.country = nil;
    self.description = nil;
    self.detailVersion = nil;
    self.updateTime = nil;
    self.any = nil;
    [super dealloc];
}

@end
