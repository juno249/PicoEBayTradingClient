// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_ItemBidDetailsType.h"

@implementation Trading_ItemBidDetailsType

@synthesize itemID = _itemID;
@synthesize categoryID = _categoryID;
@synthesize bidCount = _bidCount;
@synthesize sellerID = _sellerID;
@synthesize lastBidTime = _lastBidTime;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CategoryID" propertyName:@"categoryID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"categoryID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"BidCount" propertyName:@"bidCount" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"bidCount"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SellerID" propertyName:@"sellerID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"sellerID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"LastBidTime" propertyName:@"lastBidTime" type:PICO_TYPE_DATE clazz:nil];
    [map setObject:ps forKey:@"lastBidTime"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.itemID = nil;
    self.categoryID = nil;
    self.bidCount = nil;
    self.sellerID = nil;
    self.lastBidTime = nil;
    self.any = nil;
    [super dealloc];
}

@end
