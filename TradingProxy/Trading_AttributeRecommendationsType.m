// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_AttributeRecommendationsType.h"
#import "Trading_AttributeSetArrayType.h"

@implementation Trading_AttributeRecommendationsType

@synthesize attributeSetArray = _attributeSetArray;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"AttributeSetArray" propertyName:@"attributeSetArray" type:PICO_TYPE_OBJECT clazz:[Trading_AttributeSetArrayType class]];
    [map setObject:ps forKey:@"attributeSetArray"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.attributeSetArray = nil;
    self.any = nil;
    [super dealloc];
}

@end
