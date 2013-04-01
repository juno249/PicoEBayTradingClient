// Generated by wsdl compiler for ios/objective-c
// DO NOT CHANGE!


#import "EBayAPIInterface_SOAPClient.h"

@implementation EBayAPIInterface_SOAPClient

-(void)addToWatchList:(Trading_AddToWatchListRequestType *) requestObject 
      success:(void (^)(Trading_AddToWatchListResponseType *responseObject))success
      failure:(void (^)(NSError *error, id<PicoBindable> soapFault))failure {
 
     [self.additionalParameters setObject: @"AddToWatchList" forKey: @"callname"];
     if(!requestObject.version) {
        requestObject.version = [self.additionalParameters objectForKey:@"version"];
     }
 
     [super invoke:requestObject responseClass:[Trading_AddToWatchListResponseType class]
     success:^(PicoSOAPRequestOperation *operation, id<PicoBindable> responseObject) {
         if (success) {
             success(responseObject);
         }
     } failure:^(PicoSOAPRequestOperation *operation, NSError *error, id<PicoBindable> soapFault) {
         if (failure) {
             failure(error, soapFault);
         }
     }];
}

-(void)getMyeBayBuying:(Trading_GetMyeBayBuyingRequestType *) requestObject 
      success:(void (^)(Trading_GetMyeBayBuyingResponseType *responseObject))success
      failure:(void (^)(NSError *error, id<PicoBindable> soapFault))failure {
 
     [self.additionalParameters setObject: @"GetMyeBayBuying" forKey: @"callname"];
     if(!requestObject.version) {
        requestObject.version = [self.additionalParameters objectForKey:@"version"];
     }
 
     [super invoke:requestObject responseClass:[Trading_GetMyeBayBuyingResponseType class]
     success:^(PicoSOAPRequestOperation *operation, id<PicoBindable> responseObject) {
         if (success) {
             success(responseObject);
         }
     } failure:^(PicoSOAPRequestOperation *operation, NSError *error, id<PicoBindable> soapFault) {
         if (failure) {
             failure(error, soapFault);
         }
     }];
}


@end