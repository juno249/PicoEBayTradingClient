// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_BuyerProtectionDetailsType.h"

@implementation Trading_BuyerProtectionDetailsType

@synthesize buyerProtectionSource = _buyerProtectionSource;
@synthesize buyerProtectionStatus = _buyerProtectionStatus;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"BuyerProtectionSource" propertyName:@"buyerProtectionSource" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"buyerProtectionSource"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"BuyerProtectionStatus" propertyName:@"buyerProtectionStatus" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"buyerProtectionStatus"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.buyerProtectionSource = nil;
    self.buyerProtectionStatus = nil;
    self.any = nil;
    [super dealloc];
}

@end
