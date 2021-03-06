//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPlugIn/XRRawBacktrace.h>

@interface XRRawKernelUserBacktrace : XRRawBacktrace
{
    long long _kernelFrameCount;
}

+ (void)initialize;
- (long long)kernelFrameCount;
- (id)initWithDataStream:(char *)arg1 position:(unsigned long long *)arg2 max:(unsigned long long)arg3 version:(long long)arg4 substitutions:(struct DataRepresentationSubstitutions *)arg5;
- (void)addToDataStream:(char *)arg1 position:(unsigned long long *)arg2 max:(unsigned long long)arg3 substitutions:(struct DataRepresentationSubstitutions *)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setFrames:(unsigned long long *)arg1 kernelCount:(unsigned int)arg2 userCount:(unsigned int)arg3;
- (id)initWithCommonStack:(id)arg1 startingFrame:(long long)arg2 count:(long long)arg3;
- (id)initWithKernelFrames:(unsigned long long *)arg1 kernelFrameCount:(long long)arg2 userFrames:(unsigned long long *)arg3 userFrameCount:(long long)arg4 pid:(int)arg5;
- (id)initWithFrames:(unsigned long long *)arg1 kernelFrameCount:(long long)arg2 userFrameCount:(long long)arg3 pid:(int)arg4;

@end

