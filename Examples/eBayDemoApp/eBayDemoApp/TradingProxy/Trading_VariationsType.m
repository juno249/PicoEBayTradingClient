// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_VariationsType.h"
#import "Trading_NameValueListArrayType.h"
#import "Trading_ModifyNameArrayType.h"
#import "Trading_VariationType.h"
#import "Trading_PicturesType.h"

@implementation Trading_VariationsType

@synthesize variation = _variation;
@synthesize pictures = _pictures;
@synthesize variationSpecificsSet = _variationSpecificsSet;
@synthesize modifyNameList = _modifyNameList;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"Variation" propertyName:@"variation" type:PICO_TYPE_OBJECT clazz:[Trading_VariationType class]];
    [map setObject:ps forKey:@"variation"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"Pictures" propertyName:@"pictures" type:PICO_TYPE_OBJECT clazz:[Trading_PicturesType class]];
    [map setObject:ps forKey:@"pictures"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"VariationSpecificsSet" propertyName:@"variationSpecificsSet" type:PICO_TYPE_OBJECT clazz:[Trading_NameValueListArrayType class]];
    [map setObject:ps forKey:@"variationSpecificsSet"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ModifyNameList" propertyName:@"modifyNameList" type:PICO_TYPE_OBJECT clazz:[Trading_ModifyNameArrayType class]];
    [map setObject:ps forKey:@"modifyNameList"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.variation = nil;
    self.pictures = nil;
    self.variationSpecificsSet = nil;
    self.modifyNameList = nil;
    self.any = nil;
    [super dealloc];
}

@end
