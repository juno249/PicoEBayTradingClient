// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_RelistItemResponseType.h"
#import "Trading_ProductSuggestionsType.h"
#import "Trading_FeesType.h"

@implementation Trading_RelistItemResponseType

@synthesize itemID = _itemID;
@synthesize fees = _fees;
@synthesize startTime = _startTime;
@synthesize endTime = _endTime;
@synthesize categoryID = _categoryID;
@synthesize category2ID = _category2ID;
@synthesize discountReason = _discountReason;
@synthesize productSuggestions = _productSuggestions;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"RelistItemResponse" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ItemID" propertyName:@"itemID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"itemID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Fees" propertyName:@"fees" type:PICO_TYPE_OBJECT clazz:[Trading_FeesType class]];
    [map setObject:ps forKey:@"fees"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"StartTime" propertyName:@"startTime" type:PICO_TYPE_DATE clazz:nil];
    [map setObject:ps forKey:@"startTime"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"EndTime" propertyName:@"endTime" type:PICO_TYPE_DATE clazz:nil];
    [map setObject:ps forKey:@"endTime"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CategoryID" propertyName:@"categoryID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"categoryID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Category2ID" propertyName:@"category2ID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"category2ID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"DiscountReason" propertyName:@"discountReason" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"discountReason"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ProductSuggestions" propertyName:@"productSuggestions" type:PICO_TYPE_OBJECT clazz:[Trading_ProductSuggestionsType class]];
    [map setObject:ps forKey:@"productSuggestions"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.itemID = nil;
    self.fees = nil;
    self.startTime = nil;
    self.endTime = nil;
    self.categoryID = nil;
    self.category2ID = nil;
    self.discountReason = nil;
    self.productSuggestions = nil;
    [super dealloc];
}

@end
