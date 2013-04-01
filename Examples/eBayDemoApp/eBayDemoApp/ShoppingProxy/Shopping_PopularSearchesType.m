// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Shopping_PopularSearchesType.h"

@implementation Shopping_PopularSearchesType

@synthesize categoryID = _categoryID;
@synthesize categoryParentID = _categoryParentID;
@synthesize queryKeywords = _queryKeywords;
@synthesize alternativeSearches = _alternativeSearches;
@synthesize relatedSearches = _relatedSearches;
@synthesize categoryName = _categoryName;
@synthesize categoryParentName = _categoryParentName;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CategoryParentID" propertyName:@"categoryParentID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"categoryParentID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"QueryKeywords" propertyName:@"queryKeywords" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"queryKeywords"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"AlternativeSearches" propertyName:@"alternativeSearches" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"alternativeSearches"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"RelatedSearches" propertyName:@"relatedSearches" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"relatedSearches"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CategoryName" propertyName:@"categoryName" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"categoryName"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CategoryParentName" propertyName:@"categoryParentName" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"categoryParentName"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.categoryID = nil;
    self.categoryParentID = nil;
    self.queryKeywords = nil;
    self.alternativeSearches = nil;
    self.relatedSearches = nil;
    self.categoryName = nil;
    self.categoryParentName = nil;
    self.any = nil;
    [super dealloc];
}

@end
