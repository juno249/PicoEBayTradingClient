// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetCategory2CSRequestType.h"

@implementation Trading_GetCategory2CSRequestType

@synthesize categoryID = _categoryID;
@synthesize attributeSystemVersion = _attributeSystemVersion;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetCategory2CSRequest" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CategoryID" propertyName:@"categoryID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"categoryID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"AttributeSystemVersion" propertyName:@"attributeSystemVersion" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"attributeSystemVersion"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.categoryID = nil;
    self.attributeSystemVersion = nil;
    [super dealloc];
}

@end
