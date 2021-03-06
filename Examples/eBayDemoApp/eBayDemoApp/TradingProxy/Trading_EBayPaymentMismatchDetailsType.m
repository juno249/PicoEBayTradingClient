// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_EBayPaymentMismatchDetailsType.h"
#import "Trading_AmountType.h"

@implementation Trading_EBayPaymentMismatchDetailsType

@synthesize mismatchType = _mismatchType;
@synthesize actionRequiredBy = _actionRequiredBy;
@synthesize mismatchAmount = _mismatchAmount;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"MismatchType" propertyName:@"mismatchType" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"mismatchType"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ActionRequiredBy" propertyName:@"actionRequiredBy" type:PICO_TYPE_DATE clazz:nil];
    [map setObject:ps forKey:@"actionRequiredBy"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"MismatchAmount" propertyName:@"mismatchAmount" type:PICO_TYPE_OBJECT clazz:[Trading_AmountType class]];
    [map setObject:ps forKey:@"mismatchAmount"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.mismatchType = nil;
    self.actionRequiredBy = nil;
    self.mismatchAmount = nil;
    self.any = nil;
    [super dealloc];
}

@end
