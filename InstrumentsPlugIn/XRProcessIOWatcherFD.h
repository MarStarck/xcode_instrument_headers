//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPlugIn/XRProcessIOWatcher.h>

@class NSFileHandle;

@interface XRProcessIOWatcherFD : XRProcessIOWatcher
{
    NSFileHandle *_stdoutHandle;
    NSFileHandle *_stdinHandle;
}

- (void).cxx_destruct;
- (void)writeInput:(id)arg1;
- (void)_readStdio:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initForPid:(int)arg1 fromDevice:(id)arg2 stdoutFD:(int)arg3 stdinFD:(int)arg4;

@end

