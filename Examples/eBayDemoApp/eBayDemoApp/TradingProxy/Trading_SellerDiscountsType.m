// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_SellerDiscountsType.h"
#import "Trading_SellerDiscountType.h"
#import "Trading_AmountType.h"

@implementation Trading_SellerDiscountsType

@synthesize originalItemPrice = _originalItemPrice;
@synthesize originalItemShippingCost = _originalItemShippingCost;
@synthesize sellerDiscount = _sellerDiscount;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"OriginalItemPrice" propertyName:@"originalItemPrice" type:PICO_TYPE_OBJECT clazz:[Trading_AmountType class]];
    [map setObject:ps forKey:@"originalItemPrice"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"OriginalItemShippingCost" propertyName:@"originalItemShippingCost" type:PICO_TYPE_OBJECT clazz:[Trading_AmountType class]];
    [map setObject:ps forKey:@"originalItemShippingCost"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"SellerDiscount" propertyName:@"sellerDiscount" type:PICO_TYPE_OBJECT clazz:[Trading_SellerDiscountType class]];
    [map setObject:ps forKey:@"sellerDiscount"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.originalItemPrice = nil;
    self.originalItemShippingCost = nil;
    self.sellerDiscount = nil;
    self.any = nil;
    [super dealloc];
}

@end
