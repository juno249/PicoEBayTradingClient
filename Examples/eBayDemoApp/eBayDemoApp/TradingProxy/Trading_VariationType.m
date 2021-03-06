// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_VariationType.h"
#import "Trading_NameValueListArrayType.h"
#import "Trading_SellingStatusType.h"
#import "Trading_DiscountPriceInfoType.h"
#import "Trading_SellingManagerProductInventoryStatusType.h"
#import "Trading_AmountType.h"

@implementation Trading_VariationType

@synthesize sku = _sku;
@synthesize startPrice = _startPrice;
@synthesize quantity = _quantity;
@synthesize variationSpecifics = _variationSpecifics;
@synthesize unitsAvailable = _unitsAvailable;
@synthesize unitCost = _unitCost;
@synthesize sellingStatus = _sellingStatus;
@synthesize variationTitle = _variationTitle;
@synthesize variationViewItemURL = _variationViewItemURL;
@synthesize delete = _delete;
@synthesize sellingManagerProductInventoryStatus = _sellingManagerProductInventoryStatus;
@synthesize watchCount = _watchCount;
@synthesize privateNotes = _privateNotes;
@synthesize discountPriceInfo = _discountPriceInfo;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SKU" propertyName:@"sku" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"sku"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"StartPrice" propertyName:@"startPrice" type:PICO_TYPE_OBJECT clazz:[Trading_AmountType class]];
    [map setObject:ps forKey:@"startPrice"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Quantity" propertyName:@"quantity" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"quantity"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"VariationSpecifics" propertyName:@"variationSpecifics" type:PICO_TYPE_OBJECT clazz:[Trading_NameValueListArrayType class]];
    [map setObject:ps forKey:@"variationSpecifics"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"UnitsAvailable" propertyName:@"unitsAvailable" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"unitsAvailable"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"UnitCost" propertyName:@"unitCost" type:PICO_TYPE_OBJECT clazz:[Trading_AmountType class]];
    [map setObject:ps forKey:@"unitCost"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SellingStatus" propertyName:@"sellingStatus" type:PICO_TYPE_OBJECT clazz:[Trading_SellingStatusType class]];
    [map setObject:ps forKey:@"sellingStatus"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"VariationTitle" propertyName:@"variationTitle" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"variationTitle"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"VariationViewItemURL" propertyName:@"variationViewItemURL" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"variationViewItemURL"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Delete" propertyName:@"delete" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"delete"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SellingManagerProductInventoryStatus" propertyName:@"sellingManagerProductInventoryStatus" type:PICO_TYPE_OBJECT clazz:[Trading_SellingManagerProductInventoryStatusType class]];
    [map setObject:ps forKey:@"sellingManagerProductInventoryStatus"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"WatchCount" propertyName:@"watchCount" type:PICO_TYPE_LONG clazz:nil];
    [map setObject:ps forKey:@"watchCount"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"PrivateNotes" propertyName:@"privateNotes" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"privateNotes"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"DiscountPriceInfo" propertyName:@"discountPriceInfo" type:PICO_TYPE_OBJECT clazz:[Trading_DiscountPriceInfoType class]];
    [map setObject:ps forKey:@"discountPriceInfo"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.sku = nil;
    self.startPrice = nil;
    self.quantity = nil;
    self.variationSpecifics = nil;
    self.unitsAvailable = nil;
    self.unitCost = nil;
    self.sellingStatus = nil;
    self.variationTitle = nil;
    self.variationViewItemURL = nil;
    self.delete = nil;
    self.sellingManagerProductInventoryStatus = nil;
    self.watchCount = nil;
    self.privateNotes = nil;
    self.discountPriceInfo = nil;
    self.any = nil;
    [super dealloc];
}

@end
