// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_InventoryFeesType.h"
#import "Trading_FeeType.h"

@implementation Trading_InventoryFeesType

@synthesize itemID = _itemID;
@synthesize fee = _fee;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"Fee" propertyName:@"fee" type:PICO_TYPE_OBJECT clazz:[Trading_FeeType class]];
    [map setObject:ps forKey:@"fee"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.itemID = nil;
    self.fee = nil;
    self.any = nil;
    [super dealloc];
}

@end
