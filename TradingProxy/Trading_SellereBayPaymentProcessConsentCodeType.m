// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_SellereBayPaymentProcessConsentCodeType.h"
#import "Trading_UserAgreementInfoType.h"

@implementation Trading_SellereBayPaymentProcessConsentCodeType

@synthesize payoutMethodSet = _payoutMethodSet;
@synthesize payoutMethod = _payoutMethod;
@synthesize userAgreementInfo = _userAgreementInfo;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"PayoutMethodSet" propertyName:@"payoutMethodSet" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"payoutMethodSet"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"PayoutMethod" propertyName:@"payoutMethod" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"payoutMethod"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"UserAgreementInfo" propertyName:@"userAgreementInfo" type:PICO_TYPE_OBJECT clazz:[Trading_UserAgreementInfoType class]];
    [map setObject:ps forKey:@"userAgreementInfo"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.payoutMethodSet = nil;
    self.payoutMethod = nil;
    self.userAgreementInfo = nil;
    self.any = nil;
    [super dealloc];
}

@end
