//
//  UUIDGenerator.h
//
//  Created by Lars Gerckens on 10.05.12.
//  Copyright (c) 2012 lars@nulldesign.de. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NDUUIDGenerator : NSObject

+(NSString*)getDeviceUUID;
+(NSString*)getRandomUniqueID;

@end
