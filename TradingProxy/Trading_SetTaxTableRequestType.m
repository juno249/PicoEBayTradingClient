// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_SetTaxTableRequestType.h"
#import "Trading_TaxTableType.h"

@implementation Trading_SetTaxTableRequestType

@synthesize taxTable = _taxTable;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"SetTaxTableRequest" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"TaxTable" propertyName:@"taxTable" type:PICO_TYPE_OBJECT clazz:[Trading_TaxTableType class]];
    [map setObject:ps forKey:@"taxTable"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.taxTable = nil;
    [super dealloc];
}

@end
