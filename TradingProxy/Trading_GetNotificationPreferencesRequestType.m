// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetNotificationPreferencesRequestType.h"

@implementation Trading_GetNotificationPreferencesRequestType

@synthesize preferenceLevel = _preferenceLevel;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetNotificationPreferencesRequest" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"PreferenceLevel" propertyName:@"preferenceLevel" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"preferenceLevel"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.preferenceLevel = nil;
    [super dealloc];
}

@end