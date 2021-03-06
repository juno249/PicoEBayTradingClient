// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_MyMessagesFolderSummaryType.h"

@implementation Trading_MyMessagesFolderSummaryType

@synthesize folderID = _folderID;
@synthesize folderName = _folderName;
@synthesize newAlertCount = _newAlertCount;
@synthesize newMessageCount = _newMessageCount;
@synthesize totalAlertCount = _totalAlertCount;
@synthesize totalMessageCount = _totalMessageCount;
@synthesize newHighPriorityCount = _newHighPriorityCount;
@synthesize totalHighPriorityCount = _totalHighPriorityCount;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"FolderID" propertyName:@"folderID" type:PICO_TYPE_LONG clazz:nil];
    [map setObject:ps forKey:@"folderID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"FolderName" propertyName:@"folderName" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"folderName"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"NewAlertCount" propertyName:@"newAlertCount" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"newAlertCount"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"NewMessageCount" propertyName:@"newMessageCount" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"newMessageCount"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"TotalAlertCount" propertyName:@"totalAlertCount" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"totalAlertCount"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"TotalMessageCount" propertyName:@"totalMessageCount" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"totalMessageCount"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"NewHighPriorityCount" propertyName:@"newHighPriorityCount" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"newHighPriorityCount"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"TotalHighPriorityCount" propertyName:@"totalHighPriorityCount" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"totalHighPriorityCount"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.folderID = nil;
    self.folderName = nil;
    self.newAlertCount = nil;
    self.newMessageCount = nil;
    self.totalAlertCount = nil;
    self.totalMessageCount = nil;
    self.newHighPriorityCount = nil;
    self.totalHighPriorityCount = nil;
    self.any = nil;
    [super dealloc];
}

@end
