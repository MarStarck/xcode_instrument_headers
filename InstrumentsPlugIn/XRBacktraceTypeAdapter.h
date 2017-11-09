//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CommonRawStack.h"

@class NSString;

@interface XRBacktraceTypeAdapter : NSObject <CommonRawStack>
{
    int _pid;
    unsigned int _totalFrameCount;
    unsigned int _fragCount;
    struct XRBacktraceFragment __fragStore[5];
    struct XRBacktraceFragment *_fragments;
    double *_weights;
    unsigned long long _weightCount;
    unsigned int _sampleCount;
    unsigned int _kernelIID;
}

- (void)copyWeightArray:(const double *)arg1 outputDeltas:(double *)arg2 weightCount:(unsigned long long)arg3 sampleCount:(unsigned int)arg4 sampleCountDelta:(unsigned int *)arg5;
- (BOOL)bottomIsTruncated;
- (void)setBottomIsTruncated:(BOOL)arg1;
- (BOOL)topIsTruncated;
- (void)setTopIsTruncated:(BOOL)arg1;
- (long long)count;
- (void)enumerateFramesInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (unsigned long long *)frames;
- (int)pid;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithAnalysisCoreValue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

