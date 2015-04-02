//
//  BNCEncodingUtils.h
//  Branch
//
//  Created by Graham Mueller on 3/31/15.
//  Copyright (c) 2015 Branch Metrics. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNCEncodingUtils : NSObject

+ (NSString *)base64EncodeStringToString:(NSString *)strData;
+ (NSString *)base64DecodeStringToString:(NSString *)strData;
+ (NSString *)base64EncodeData:(NSData *)objData;

+ (NSString *)md5Encode:(NSString *)input;

+ (NSString *)encodeArrayToJsonString:(NSArray *)dictionary;
+ (NSString *)encodeDictionaryToJsonString:(NSDictionary *)dictionary;
+ (NSString *)encodeDictionaryToJsonString:(NSDictionary *)dictionary needSource:(BOOL)source;
+ (NSData *)encodeDictionaryToJsonData:(NSDictionary *)dictionary;

+ (NSDictionary *)decodeJsonDataToDictionary:(NSData *)jsonData;
+ (NSDictionary *)decodeJsonStringToDictionary:(NSString *)jsonString;
+ (NSDictionary *)decodeQueryStringToDictionary:(NSString *)queryString;

@end