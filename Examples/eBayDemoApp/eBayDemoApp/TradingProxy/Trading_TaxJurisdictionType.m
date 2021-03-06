// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_TaxJurisdictionType.h"

@implementation Trading_TaxJurisdictionType

@synthesize jurisdictionID = _jurisdictionID;
@synthesize salesTaxPercent = _salesTaxPercent;
@synthesize shippingIncludedInTax = _shippingIncludedInTax;
@synthesize jurisdictionName = _jurisdictionName;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"JurisdictionID" propertyName:@"jurisdictionID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"jurisdictionID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SalesTaxPercent" propertyName:@"salesTaxPercent" type:PICO_TYPE_FLOAT clazz:nil];
    [map setObject:ps forKey:@"salesTaxPercent"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ShippingIncludedInTax" propertyName:@"shippingIncludedInTax" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"shippingIncludedInTax"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"JurisdictionName" propertyName:@"jurisdictionName" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"jurisdictionName"];
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
    self.jurisdictionID = nil;
    self.salesTaxPercent = nil;
    self.shippingIncludedInTax = nil;
    self.jurisdictionName = nil;
    self.detailVersion = nil;
    self.updateTime = nil;
    self.any = nil;
    [super dealloc];
}

@end
