// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_AdditionalAccountType.h"
#import "Trading_AmountType.h"

@implementation Trading_AdditionalAccountType

@synthesize balance = _balance;
@synthesize currency = _currency;
@synthesize accountCode = _accountCode;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Balance" propertyName:@"balance" type:PICO_TYPE_OBJECT clazz:[Trading_AmountType class]];
    [map setObject:ps forKey:@"balance"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Currency" propertyName:@"currency" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"currency"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"AccountCode" propertyName:@"accountCode" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"accountCode"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.balance = nil;
    self.currency = nil;
    self.accountCode = nil;
    self.any = nil;
    [super dealloc];
}

@end
