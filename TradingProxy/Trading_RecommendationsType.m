// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_RecommendationsType.h"
#import "Trading_NameRecommendationType.h"

@implementation Trading_RecommendationsType

@synthesize categoryID = _categoryID;
@synthesize nameRecommendation = _nameRecommendation;
@synthesize updated = _updated;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CategoryID" propertyName:@"categoryID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"categoryID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"NameRecommendation" propertyName:@"nameRecommendation" type:PICO_TYPE_OBJECT clazz:[Trading_NameRecommendationType class]];
    [map setObject:ps forKey:@"nameRecommendation"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Updated" propertyName:@"updated" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"updated"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.categoryID = nil;
    self.nameRecommendation = nil;
    self.updated = nil;
    self.any = nil;
    [super dealloc];
}

@end
