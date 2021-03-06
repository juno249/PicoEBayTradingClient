// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetMyeBayRemindersRequestType.h"
#import "Trading_ReminderCustomizationType.h"

@implementation Trading_GetMyeBayRemindersRequestType

@synthesize buyingReminders = _buyingReminders;
@synthesize sellingReminders = _sellingReminders;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetMyeBayRemindersRequest" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"BuyingReminders" propertyName:@"buyingReminders" type:PICO_TYPE_OBJECT clazz:[Trading_ReminderCustomizationType class]];
    [map setObject:ps forKey:@"buyingReminders"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SellingReminders" propertyName:@"sellingReminders" type:PICO_TYPE_OBJECT clazz:[Trading_ReminderCustomizationType class]];
    [map setObject:ps forKey:@"sellingReminders"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.buyingReminders = nil;
    self.sellingReminders = nil;
    [super dealloc];
}

@end
