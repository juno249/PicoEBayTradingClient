// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetWantItNowSearchResultsResponseType.h"
#import "Trading_WantItNowPostArrayType.h"
#import "Trading_PaginationResultType.h"

@implementation Trading_GetWantItNowSearchResultsResponseType

@synthesize wantItNowPostArray = _wantItNowPostArray;
@synthesize hasMoreItems = _hasMoreItems;
@synthesize itemsPerPage = _itemsPerPage;
@synthesize pageNumber = _pageNumber;
@synthesize paginationResult = _paginationResult;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetWantItNowSearchResultsResponse" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"WantItNowPostArray" propertyName:@"wantItNowPostArray" type:PICO_TYPE_OBJECT clazz:[Trading_WantItNowPostArrayType class]];
    [map setObject:ps forKey:@"wantItNowPostArray"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"HasMoreItems" propertyName:@"hasMoreItems" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"hasMoreItems"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ItemsPerPage" propertyName:@"itemsPerPage" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"itemsPerPage"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"PageNumber" propertyName:@"pageNumber" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"pageNumber"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"PaginationResult" propertyName:@"paginationResult" type:PICO_TYPE_OBJECT clazz:[Trading_PaginationResultType class]];
    [map setObject:ps forKey:@"paginationResult"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.wantItNowPostArray = nil;
    self.hasMoreItems = nil;
    self.itemsPerPage = nil;
    self.pageNumber = nil;
    self.paginationResult = nil;
    [super dealloc];
}

@end
