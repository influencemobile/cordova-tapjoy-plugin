// Copyright (C) 2011-2012 by Tapjoy Inc.
//
// This file is part of the Tapjoy SDK.
// By using the Tapjoy SDK in your software, you agree to the terms of the Tapjoy SDK License Agreement.
// The Tapjoy SDK is bound by the Tapjoy SDK License Agreement and can be found here: https://www.tapjoy.com/sdk/license
//

#import <Foundation/Foundation.h>
#import <Tapjoy/Tapjoy.h>
#import <Tapjoy/TJEvent.h>
#import "TapjoyPlugin.h"

@interface TapjoyEventDelegate : NSObject<TJEventDelegate> {}

// This is set to the guid of the object that will implement
// the callback functions for handling Tapjoy events.
@property (nonatomic, copy) NSString *myGuid;
@property (nonatomic, retain) TapjoyPlugin *tapjoyPlugin;

+ (id)createEventWithGuid:(NSString *)guid plugin:(TapjoyPlugin *)plugin;

@end
