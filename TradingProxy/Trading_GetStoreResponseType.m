// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetStoreResponseType.h"
#import "Trading_StoreType.h"

@implementation Trading_GetStoreResponseType

@synthesize store = _store;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetStoreResponse" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Store" propertyName:@"store" type:PICO_TYPE_OBJECT clazz:[Trading_StoreType class]];
    [map setObject:ps forKey:@"store"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.store = nil;
    [super dealloc];
}

@end