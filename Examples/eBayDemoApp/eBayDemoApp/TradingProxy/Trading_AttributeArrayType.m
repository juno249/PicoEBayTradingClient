// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_AttributeArrayType.h"
#import "Trading_AttributeType.h"

@implementation Trading_AttributeArrayType

@synthesize attribute = _attribute;

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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"Attribute" propertyName:@"attribute" type:PICO_TYPE_OBJECT clazz:[Trading_AttributeType class]];
    [map setObject:ps forKey:@"attribute"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.attribute = nil;
    [super dealloc];
}

@end
