// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_StoreFontType.h"

@implementation Trading_StoreFontType

@synthesize nameFace = _nameFace;
@synthesize nameSize = _nameSize;
@synthesize nameColor = _nameColor;
@synthesize titleFace = _titleFace;
@synthesize titleSize = _titleSize;
@synthesize titleColor = _titleColor;
@synthesize descFace = _descFace;
@synthesize descSize = _descSize;
@synthesize descColor = _descColor;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"NameFace" propertyName:@"nameFace" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"nameFace"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"NameSize" propertyName:@"nameSize" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"nameSize"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"NameColor" propertyName:@"nameColor" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"nameColor"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"TitleFace" propertyName:@"titleFace" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"titleFace"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"TitleSize" propertyName:@"titleSize" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"titleSize"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"TitleColor" propertyName:@"titleColor" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"titleColor"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"DescFace" propertyName:@"descFace" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"descFace"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"DescSize" propertyName:@"descSize" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"descSize"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"DescColor" propertyName:@"descColor" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"descColor"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.nameFace = nil;
    self.nameSize = nil;
    self.nameColor = nil;
    self.titleFace = nil;
    self.titleSize = nil;
    self.titleColor = nil;
    self.descFace = nil;
    self.descSize = nil;
    self.descColor = nil;
    self.any = nil;
    [super dealloc];
}

@end
