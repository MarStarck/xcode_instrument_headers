//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class XRIntKeyedDictionary;

@interface XRModeStore : NSObject <NSSecureCoding>
{
    XRIntKeyedDictionary *_globalForks;
    long long _nextForkID;
}

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (long long)forkFromControllerFork:(long long)arg1 globalFork:(long long)arg2;
- (long long)forkFromGlobalFork:(long long)arg1;
- (id)currentModeForContoller:(id)arg1 globalFork:(long long)arg2 controllerFork:(long long)arg3;
- (BOOL)setCurrentMode:(id)arg1 controller:(id)arg2 globalFork:(long long)arg3 controllerFork:(long long)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
