//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, XRSymbolicatorsByPid;

@interface _XRLocalExpiredPidCacheState : NSObject
{
    struct TFPPidWatcher watcher;
    XRSymbolicatorsByPid *symbolicatorsByPid;
    NSMutableArray *pidsNotFound;
    unsigned short trackingRefCount;
}

- (void).cxx_destruct;

@end

