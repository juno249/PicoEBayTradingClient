// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_MaximumItemRequirementsDetailsType.h"

@implementation Trading_MaximumItemRequirementsDetailsType

@synthesize maximumItemCount = _maximumItemCount;
@synthesize minimumFeedbackScore = _minimumFeedbackScore;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"MaximumItemCount" propertyName:@"maximumItemCount" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"maximumItemCount"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"MinimumFeedbackScore" propertyName:@"minimumFeedbackScore" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"minimumFeedbackScore"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.maximumItemCount = nil;
    self.minimumFeedbackScore = nil;
    self.any = nil;
    [super dealloc];
}

@end
