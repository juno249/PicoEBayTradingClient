// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_UserIdPasswordType.h"

@implementation Trading_UserIdPasswordType

@synthesize appId = _appId;
@synthesize devId = _devId;
@synthesize authCert = _authCert;
@synthesize username = _username;
@synthesize password = _password;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"AppId" propertyName:@"appId" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"appId"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"DevId" propertyName:@"devId" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"devId"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"AuthCert" propertyName:@"authCert" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"authCert"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Username" propertyName:@"username" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"username"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Password" propertyName:@"password" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"password"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.appId = nil;
    self.devId = nil;
    self.authCert = nil;
    self.username = nil;
    self.password = nil;
    self.any = nil;
    [super dealloc];
}

@end
