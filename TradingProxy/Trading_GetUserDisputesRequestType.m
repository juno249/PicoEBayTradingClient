// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetUserDisputesRequestType.h"
#import "Trading_PaginationType.h"

@implementation Trading_GetUserDisputesRequestType

@synthesize disputeFilterType = _disputeFilterType;
@synthesize disputeSortType = _disputeSortType;
@synthesize modTimeFrom = _modTimeFrom;
@synthesize modTimeTo = _modTimeTo;
@synthesize pagination = _pagination;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetUserDisputesRequest" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"DisputeFilterType" propertyName:@"disputeFilterType" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"disputeFilterType"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"DisputeSortType" propertyName:@"disputeSortType" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"disputeSortType"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ModTimeFrom" propertyName:@"modTimeFrom" type:PICO_TYPE_DATE clazz:nil];
    [map setObject:ps forKey:@"modTimeFrom"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ModTimeTo" propertyName:@"modTimeTo" type:PICO_TYPE_DATE clazz:nil];
    [map setObject:ps forKey:@"modTimeTo"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Pagination" propertyName:@"pagination" type:PICO_TYPE_OBJECT clazz:[Trading_PaginationType class]];
    [map setObject:ps forKey:@"pagination"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.disputeFilterType = nil;
    self.disputeSortType = nil;
    self.modTimeFrom = nil;
    self.modTimeTo = nil;
    self.pagination = nil;
    [super dealloc];
}

@end