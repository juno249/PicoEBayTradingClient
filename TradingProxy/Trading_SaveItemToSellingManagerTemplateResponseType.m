// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_SaveItemToSellingManagerTemplateResponseType.h"

@implementation Trading_SaveItemToSellingManagerTemplateResponseType

@synthesize templateID = _templateID;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"SaveItemToSellingManagerTemplateResponse" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"TemplateID" propertyName:@"templateID" type:PICO_TYPE_LONG clazz:nil];
    [map setObject:ps forKey:@"templateID"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.templateID = nil;
    [super dealloc];
}

@end
