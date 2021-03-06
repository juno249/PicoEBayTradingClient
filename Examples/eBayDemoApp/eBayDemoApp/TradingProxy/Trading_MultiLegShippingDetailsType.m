// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_MultiLegShippingDetailsType.h"
#import "Trading_MultiLegShipmentType.h"

@implementation Trading_MultiLegShippingDetailsType

@synthesize sellerShipmentToLogisticsProvider = _sellerShipmentToLogisticsProvider;
@synthesize logisticsProviderShipmentToBuyer = _logisticsProviderShipmentToBuyer;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SellerShipmentToLogisticsProvider" propertyName:@"sellerShipmentToLogisticsProvider" type:PICO_TYPE_OBJECT clazz:[Trading_MultiLegShipmentType class]];
    [map setObject:ps forKey:@"sellerShipmentToLogisticsProvider"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"LogisticsProviderShipmentToBuyer" propertyName:@"logisticsProviderShipmentToBuyer" type:PICO_TYPE_OBJECT clazz:[Trading_MultiLegShipmentType class]];
    [map setObject:ps forKey:@"logisticsProviderShipmentToBuyer"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.sellerShipmentToLogisticsProvider = nil;
    self.logisticsProviderShipmentToBuyer = nil;
    self.any = nil;
    [super dealloc];
}

@end
