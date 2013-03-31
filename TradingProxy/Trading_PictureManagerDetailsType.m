// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_PictureManagerDetailsType.h"
#import "Trading_PictureManagerFolderType.h"

@implementation Trading_PictureManagerDetailsType

@synthesize subscriptionLevel = _subscriptionLevel;
@synthesize storageUsed = _storageUsed;
@synthesize totalStorageAvailable = _totalStorageAvailable;
@synthesize keepOriginal = _keepOriginal;
@synthesize watermarkEPS = _watermarkEPS;
@synthesize watermarkUserID = _watermarkUserID;
@synthesize folder = _folder;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SubscriptionLevel" propertyName:@"subscriptionLevel" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"subscriptionLevel"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"StorageUsed" propertyName:@"storageUsed" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"storageUsed"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"TotalStorageAvailable" propertyName:@"totalStorageAvailable" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"totalStorageAvailable"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"KeepOriginal" propertyName:@"keepOriginal" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"keepOriginal"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"WatermarkEPS" propertyName:@"watermarkEPS" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"watermarkEPS"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"WatermarkUserID" propertyName:@"watermarkUserID" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"watermarkUserID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"Folder" propertyName:@"folder" type:PICO_TYPE_OBJECT clazz:[Trading_PictureManagerFolderType class]];
    [map setObject:ps forKey:@"folder"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.subscriptionLevel = nil;
    self.storageUsed = nil;
    self.totalStorageAvailable = nil;
    self.keepOriginal = nil;
    self.watermarkEPS = nil;
    self.watermarkUserID = nil;
    self.folder = nil;
    self.any = nil;
    [super dealloc];
}

@end