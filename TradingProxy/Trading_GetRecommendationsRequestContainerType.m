// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetRecommendationsRequestContainerType.h"
#import "Trading_ItemType.h"

@implementation Trading_GetRecommendationsRequestContainerType

@synthesize listingFlow = _listingFlow;
@synthesize item = _item;
@synthesize recommendationEngine = _recommendationEngine;
@synthesize query = _query;
@synthesize correlationID = _correlationID;
@synthesize deletedField = _deletedField;
@synthesize excludeRelationships = _excludeRelationships;
@synthesize includeConfidence = _includeConfidence;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ListingFlow" propertyName:@"listingFlow" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"listingFlow"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Item" propertyName:@"item" type:PICO_TYPE_OBJECT clazz:[Trading_ItemType class]];
    [map setObject:ps forKey:@"item"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"RecommendationEngine" propertyName:@"recommendationEngine" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"recommendationEngine"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Query" propertyName:@"query" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"query"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CorrelationID" propertyName:@"correlationID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"correlationID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"DeletedField" propertyName:@"deletedField" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"deletedField"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ExcludeRelationships" propertyName:@"excludeRelationships" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"excludeRelationships"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"IncludeConfidence" propertyName:@"includeConfidence" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"includeConfidence"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.listingFlow = nil;
    self.item = nil;
    self.recommendationEngine = nil;
    self.query = nil;
    self.correlationID = nil;
    self.deletedField = nil;
    self.excludeRelationships = nil;
    self.includeConfidence = nil;
    self.any = nil;
    [super dealloc];
}

@end