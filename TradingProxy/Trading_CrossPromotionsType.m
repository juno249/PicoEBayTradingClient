// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_CrossPromotionsType.h"
#import "Trading_PromotedItemType.h"

@implementation Trading_CrossPromotionsType

@synthesize itemID = _itemID;
@synthesize primaryScheme = _primaryScheme;
@synthesize promotionMethod = _promotionMethod;
@synthesize sellerID = _sellerID;
@synthesize shippingDiscount = _shippingDiscount;
@synthesize storeName = _storeName;
@synthesize promotedItem = _promotedItem;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ItemID" propertyName:@"itemID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"itemID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"PrimaryScheme" propertyName:@"primaryScheme" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"primaryScheme"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"PromotionMethod" propertyName:@"promotionMethod" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"promotionMethod"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SellerID" propertyName:@"sellerID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"sellerID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ShippingDiscount" propertyName:@"shippingDiscount" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"shippingDiscount"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"StoreName" propertyName:@"storeName" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"storeName"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"PromotedItem" propertyName:@"promotedItem" type:PICO_TYPE_OBJECT clazz:[Trading_PromotedItemType class]];
    [map setObject:ps forKey:@"promotedItem"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.itemID = nil;
    self.primaryScheme = nil;
    self.promotionMethod = nil;
    self.sellerID = nil;
    self.shippingDiscount = nil;
    self.storeName = nil;
    self.promotedItem = nil;
    self.any = nil;
    [super dealloc];
}

@end