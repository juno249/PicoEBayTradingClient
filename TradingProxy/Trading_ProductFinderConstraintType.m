// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_ProductFinderConstraintType.h"

@implementation Trading_ProductFinderConstraintType

@synthesize displayName = _displayName;
@synthesize displayValue = _displayValue;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"DisplayName" propertyName:@"displayName" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"displayName"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"DisplayValue" propertyName:@"displayValue" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"displayValue"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.displayName = nil;
    self.displayValue = nil;
    self.any = nil;
    [super dealloc];
}

@end