// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_LeaveFeedbackResponseType.h"

@implementation Trading_LeaveFeedbackResponseType

@synthesize feedbackID = _feedbackID;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"LeaveFeedbackResponse" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"FeedbackID" propertyName:@"feedbackID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"feedbackID"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.feedbackID = nil;
    [super dealloc];
}

@end
