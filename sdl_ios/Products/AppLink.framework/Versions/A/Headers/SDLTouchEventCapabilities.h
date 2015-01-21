//  SDLTouchEventCapabilities.h
//  SyncProxy
//  Copyright (c) 2014 Ford Motor Company. All rights reserved.

#import <Foundation/Foundation.h>
#import <AppLink/SDLRPCMessage.h>

@interface SDLTouchEventCapabilities : SDLRPCStruct {}

-(id) init;
-(id) initWithDictionary:(NSMutableDictionary*) dict;

@property(strong) NSNumber* pressAvailable;
@property(strong) NSNumber* multiTouchAvailable;
@property(strong) NSNumber* doublePressAvailable;

@end