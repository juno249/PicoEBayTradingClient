// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_ItemPolicyViolationType.h"

@implementation Trading_ItemPolicyViolationType

@synthesize policyID = _policyID;
@synthesize policyText = _policyText;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"PolicyID" propertyName:@"policyID" type:PICO_TYPE_LONG clazz:nil];
    [map setObject:ps forKey:@"policyID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"PolicyText" propertyName:@"policyText" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"policyText"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.policyID = nil;
    self.policyText = nil;
    self.any = nil;
    [super dealloc];
}

@end