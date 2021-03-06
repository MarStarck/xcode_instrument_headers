//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _XRDTraceStackTrace : NSObject
{
    unsigned long long _numStoredFrames;
    unsigned int _pid;
    unsigned int _maxStackDepth;
    unsigned long long _numFrames;
    unsigned long long *_stackFrames;
}

@property(readonly, nonatomic) unsigned long long *stackFrames; // @synthesize stackFrames=_stackFrames;
@property(readonly, nonatomic) unsigned long long numFrames; // @synthesize numFrames=_numFrames;
@property(readonly, nonatomic) unsigned int maxStackDepth; // @synthesize maxStackDepth=_maxStackDepth;
@property(readonly, nonatomic) unsigned int pid; // @synthesize pid=_pid;
- (char *)readNextStackTraceFromBuffer:(char *)arg1 withLength:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithMaxStackDepth:(unsigned int)arg1;

@end

